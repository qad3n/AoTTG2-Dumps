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

[Token(Token = "0x2000197")]
internal sealed class SharedStatics
{
	[Token(Token = "0x40005F5")]
	[FieldOffset(Offset = "0x0")]
	private static readonly System.SharedStatics _sharedStatics;

	[Token(Token = "0x40005F6")]
	[FieldOffset(Offset = "0x10")]
	private System.Security.Util.Tokenizer.StringMaker _maker;

	[Token(Token = "0x6000F22")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private SharedStatics()
	{
	}

	[Token(Token = "0x6000F23")]
	[Address(RVA = "0x1B8A040", Offset = "0x1B88640", VA = "0x181B8A040")]
	public static System.Security.Util.Tokenizer.StringMaker GetSharedStringMaker()
	{
		return null;
	}

	[Token(Token = "0x6000F24")]
	[Address(RVA = "0x1B8A1C0", Offset = "0x1B887C0", VA = "0x181B8A1C0")]
	public static void ReleaseSharedStringMaker(ref System.Security.Util.Tokenizer.StringMaker maker)
	{
	}
}
