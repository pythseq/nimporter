"""
Test to make sure that Nim files can be built upon import successfully.
"""

from pathlib import Path
from nimporter import NimCompiler, Nimporter, NimporterException


def test_successful_module_import():
    "A Nim module can be imported."
    from pkg1 import mod1
    assert mod1



def test_successful_nested_module_import():
    "A Nim module can be imported."
    from pkg1.pkg2 import mod2
    assert mod2


def test_build_artifacts():
    "A hash file, shared library, and __pycache__ is created."
    from pkg1 import mod1
    assert NimCompiler.pycache_dir(Path('tests/pkg1/mod1.nim')).exists()
    assert NimCompiler.build_artifact(Path('tests/pkg1/mod1.nim')).exists()
    assert Nimporter.hash_filename(Path('tests/pkg1/mod1.nim')).exists()


def test_hash_coincides():
    "Make sure an imported Nim module's hash matches the actual source file."
    from pkg1 import mod1
    assert not Nimporter.hash_changed(Path('tests/pkg1/mod1.nim'))


def test_hash_not_there():
    "Make sure an exception is thrown when a module is not hashed."
    try:
        Nimporter.get_hash(Path('tests/lib4/lib4.nim'))
        assert False, 'Exception should have been thrown.'
    except NimporterException:
        "Expected case"


def test_hash():
    "Make sure when a module is modified it's hash is also."
    module = Path('tests/pkg1/mod2.nim')
    Nimporter.update_hash(module)
    original_hash = Nimporter.get_hash(module)
    original_text = module.read_text()
    module.write_text(original_text.replace('World', 'Pebaz'))
    assert Nimporter.hash_file(module) != original_hash
    module.write_text(original_text.replace('Pebaz', 'World'))
    assert Nimporter.hash_file(module) == original_hash


    # Build Once
    output = NimCompiler.build_artifact(module)
    artifact = NimCompiler.compile_nim_code(module, output, library=False)


def test_successful_library_import():
    "A Nim library can be imported"
    import lib2
    assert lib2


def test_register_importer():
    pass


def test_ignore_cache():
    pass

def test_manual_import():
    "Test import function manually."

def test_modify_module():
    "Module is rebuilt when the source file changes."

    # Print some code to file
    # Import file
    # Run file
    # Change file
    # Reimport file
    # Ensure different value returned
