// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.UnexceptionalStreamWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x20006A8")]
internal class UnexceptionalStreamWriter : StreamWriter
{
	[Token(Token = "0x60033B0")]
	[Address(RVA = "0x1B07370", Offset = "0x1B05970", VA = "0x181B07370")]
	public UnexceptionalStreamWriter(Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x60033B1")]
	[Address(RVA = "0x1B072D0", Offset = "0x1B058D0", VA = "0x181B072D0", Slot = "10")]
	public override void Flush()
	{
	}

	[Token(Token = "0x60033B2")]
	[Address(RVA = "0x1B07330", Offset = "0x1B05930", VA = "0x181B07330", Slot = "15")]
	public override void Write(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60033B3")]
	[Address(RVA = "0x1B072F0", Offset = "0x1B058F0", VA = "0x181B072F0", Slot = "13")]
	public override void Write(char value)
	{
	}

	[Token(Token = "0x60033B4")]
	[Address(RVA = "0x1B07350", Offset = "0x1B05950", VA = "0x181B07350", Slot = "14")]
	public override void Write(char[] value)
	{
	}

	[Token(Token = "0x60033B5")]
	[Address(RVA = "0x1B07310", Offset = "0x1B05910", VA = "0x181B07310", Slot = "18")]
	public override void Write(string value)
	{
	}
}
