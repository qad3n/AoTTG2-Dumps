// ==================== AoTTG2 cross-reference ====================
// Type: Utility.DataCompressors
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/DataCompressors.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Utility.Algorithms;

namespace Utility;

[Token(Token = "0x200091F")]
internal static class DataCompressors
{
	[Token(Token = "0x4002DF6")]
	[FieldOffset(Offset = "0x0")]
	public static readonly BrotliAlgorithm Brotli;

	[Token(Token = "0x4002DF7")]
	[FieldOffset(Offset = "0x8")]
	public static readonly GZipAlgorithm GZip;

	[Token(Token = "0x4002DF8")]
	[FieldOffset(Offset = "0x10")]
	public static readonly DeflateAlgorithm ZLib;

	[Token(Token = "0x4002DF9")]
	[FieldOffset(Offset = "0x18")]
	public static readonly LZFAlgorithm LZF;

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Utility/DataCompressors.c.

	// Utility.DataCompressors$$.cctor: 1 lines keep C-only constructs
	static DataCompressors()
	{
		Utility_DataCompressors_StaticFields pUVar1;
		object pIVar2;

		pIVar2 = new LZFAlgorithm();
		DataCompressors.Brotli = (BrotliAlgorithm)pIVar2;
		pIVar2 = (object)il2cpp_codegen_object_new(typeof(GZipAlgorithm)) ;
		pIVar2 = new LZFAlgorithm();
		pUVar1 = typeof(DataCompressors).static_fields;
		pUVar1.GZip = (GZipAlgorithm)pIVar2;
		pIVar2 = new LZFAlgorithm();
		pUVar1 = typeof(DataCompressors).static_fields;
		pUVar1.ZLib = (DeflateAlgorithm)pIVar2;
		pIVar2 = new LZFAlgorithm();
		pUVar1 = typeof(DataCompressors).static_fields;
		pUVar1.LZF = (LZFAlgorithm)pIVar2;
		return;
	}
}
