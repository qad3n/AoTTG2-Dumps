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
	[Address(RVA = "0x501CDD0", Offset = "0x501CDD0", VA = "0x501CDD0")]
	private SharedStatics()
	{
	}

	[Token(Token = "0x6000ED5")]
	[Address(RVA = "0x501CDF0", Offset = "0x501CDF0", VA = "0x501CDF0")]
	public static System.Security.Util.Tokenizer.StringMaker GetSharedStringMaker()
	{
		return null;
	}

	[Token(Token = "0x6000ED6")]
	[Address(RVA = "0x501CFE0", Offset = "0x501CFE0", VA = "0x501CFE0")]
	public static void ReleaseSharedStringMaker(ref System.Security.Util.Tokenizer.StringMaker maker)
	{
	}
}
