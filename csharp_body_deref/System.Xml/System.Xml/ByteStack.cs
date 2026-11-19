// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.ByteStack
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200001B")]
internal class ByteStack
{
	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x10")]
	private byte[] stack;

	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x18")]
	private int growthRate;

	[Token(Token = "0x40000D4")]
	[FieldOffset(Offset = "0x1C")]
	private int top;

	[Token(Token = "0x40000D5")]
	[FieldOffset(Offset = "0x20")]
	private int size;

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x5F99D90", Offset = "0x5F98D90", VA = "0x5F99D90")]
	public ByteStack(int growthRate)
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x5F99E00", Offset = "0x5F98E00", VA = "0x5F99E00")]
	public void Push(byte data)
	{
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x5F99EB0", Offset = "0x5F98EB0", VA = "0x5F99EB0")]
	public byte Pop()
	{
		return default(byte);
	}
}
