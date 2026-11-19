// ==================== AoTTG2 cross-reference ====================
// Type: System.SharedStatics
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Security.Util;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200016F")]
internal sealed class SharedStatics
{
	[Token(Token = "0x4000553")]
	[FieldOffset(Offset = "0x0")]
	private static readonly System.SharedStatics _sharedStatics;

	[Token(Token = "0x4000554")]
	[FieldOffset(Offset = "0x10")]
	private System.Security.Util.Tokenizer.StringMaker _maker;

	[Token(Token = "0x6000EFC")]
	[Address(RVA = "0x5506150", Offset = "0x5505150", VA = "0x5506150")]
	private SharedStatics()
	{
	}

	[Token(Token = "0x6000EFD")]
	[Address(RVA = "0x5506170", Offset = "0x5505170", VA = "0x5506170")]
	public static System.Security.Util.Tokenizer.StringMaker GetSharedStringMaker()
	{
		return null;
	}

	[Token(Token = "0x6000EFE")]
	[Address(RVA = "0x5506330", Offset = "0x5505330", VA = "0x5506330")]
	public static void ReleaseSharedStringMaker(ref System.Security.Util.Tokenizer.StringMaker maker)
	{
	}
}
