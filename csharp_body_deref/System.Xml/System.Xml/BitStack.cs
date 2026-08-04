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
	[Address(RVA = "0x4687810", Offset = "0x4687810", VA = "0x4687810")]
	public BitStack()
	{
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x4687830", Offset = "0x4687830", VA = "0x4687830")]
	public void PushBit(bool bit)
	{
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x4687930", Offset = "0x4687930", VA = "0x4687930")]
	public bool PopBit()
	{
		return default(bool);
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x46879C0", Offset = "0x46879C0", VA = "0x46879C0")]
	public bool PeekBit()
	{
		return default(bool);
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x4687860", Offset = "0x4687860", VA = "0x4687860")]
	private void PushCurr()
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x4687980", Offset = "0x4687980", VA = "0x4687980")]
	private void PopCurr()
	{
	}
}
