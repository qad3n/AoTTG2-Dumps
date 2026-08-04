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

[Token(Token = "0x200016D")]
internal sealed class SharedStatics
{
	[Token(Token = "0x4000594")]
	[FieldOffset(Offset = "0x0")]
	private static readonly System.SharedStatics _sharedStatics;

	[Token(Token = "0x4000595")]
	[FieldOffset(Offset = "0x10")]
	private System.Security.Util.Tokenizer.StringMaker _maker;

	[Token(Token = "0x6000ED4")]
	[Address(RVA = "0x3D028F0", Offset = "0x3D028F0", VA = "0x3D028F0")]
	private SharedStatics()
	{
	}

	[Token(Token = "0x6000ED5")]
	[Address(RVA = "0x3D02910", Offset = "0x3D02910", VA = "0x3D02910")]
	public static System.Security.Util.Tokenizer.StringMaker GetSharedStringMaker()
	{
		return null;
	}

	[Token(Token = "0x6000ED6")]
	[Address(RVA = "0x3D02B00", Offset = "0x3D02B00", VA = "0x3D02B00")]
	public static void ReleaseSharedStringMaker(ref System.Security.Util.Tokenizer.StringMaker maker)
	{
	}
}
