using Il2CppDummyDll;

namespace System.Security.Util;

[Token(Token = "0x20002AA")]
internal sealed class Parser
{
	[Token(Token = "0x4000C27")]
	[FieldOffset(Offset = "0x10")]
	private System.Security.SecurityDocument _doc;

	[Token(Token = "0x4000C28")]
	[FieldOffset(Offset = "0x18")]
	private System.Security.Util.Tokenizer _t;

	[Token(Token = "0x60017BB")]
	[Address(RVA = "0x4E3B360", Offset = "0x4E3B360", VA = "0x4E3B360")]
	internal SecurityElement GetTopElement()
	{
		return null;
	}

	[Token(Token = "0x60017BC")]
	[Address(RVA = "0x4E3B390", Offset = "0x4E3B390", VA = "0x4E3B390")]
	private void GetRequiredSizes(System.Security.Util.TokenizerStream stream, ref int index)
	{
	}

	[Token(Token = "0x60017BD")]
	[Address(RVA = "0x4E3B990", Offset = "0x4E3B990", VA = "0x4E3B990")]
	private int DetermineFormat(System.Security.Util.TokenizerStream stream)
	{
		return default(int);
	}

	[Token(Token = "0x60017BE")]
	[Address(RVA = "0x4E3C7D0", Offset = "0x4E3C7D0", VA = "0x4E3C7D0")]
	private void ParseContents()
	{
	}

	[Token(Token = "0x60017BF")]
	[Address(RVA = "0x4E3CF80", Offset = "0x4E3CF80", VA = "0x4E3CF80")]
	private Parser(System.Security.Util.Tokenizer t)
	{
	}

	[Token(Token = "0x60017C0")]
	[Address(RVA = "0x4E3D0D0", Offset = "0x4E3D0D0", VA = "0x4E3D0D0")]
	internal Parser(string input)
	{
	}
}
