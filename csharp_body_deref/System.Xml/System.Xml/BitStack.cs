// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.BitStack
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x25D11D0", Offset = "0x25CF7D0", VA = "0x1825D11D0")]
	public BitStack()
	{
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x25D0FE0", Offset = "0x25CF5E0", VA = "0x1825D0FE0")]
	public void PushBit(bool bit)
	{
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x25D0F40", Offset = "0x25CF540", VA = "0x1825D0F40")]
	public bool PopBit()
	{
		return default(bool);
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x25D0F30", Offset = "0x25CF530", VA = "0x1825D0F30")]
	public bool PeekBit()
	{
		return default(bool);
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x25D10F0", Offset = "0x25CF6F0", VA = "0x1825D10F0")]
	private void PushCurr()
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x25D0FA0", Offset = "0x25CF5A0", VA = "0x1825D0FA0")]
	private void PopCurr()
	{
	}
}
