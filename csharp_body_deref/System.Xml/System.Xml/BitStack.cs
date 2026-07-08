using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000019")]
internal class BitStack
{
	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x10")]
	private uint[] bitStack;

	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x18")]
	private int stackPos;

	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x1C")]
	private uint curr;

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x4355740", Offset = "0x4355740", VA = "0x4355740")]
	public BitStack()
	{
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x4355760", Offset = "0x4355760", VA = "0x4355760")]
	public void PushBit(bool bit)
	{
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x4355860", Offset = "0x4355860", VA = "0x4355860")]
	public bool PopBit()
	{
		return default(bool);
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x43558F0", Offset = "0x43558F0", VA = "0x43558F0")]
	public bool PeekBit()
	{
		return default(bool);
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x4355790", Offset = "0x4355790", VA = "0x4355790")]
	private void PushCurr()
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x43558B0", Offset = "0x43558B0", VA = "0x43558B0")]
	private void PopCurr()
	{
	}
}
