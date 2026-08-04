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

[Token(Token = "0x2000580")]
internal class UnexceptionalStreamWriter : StreamWriter
{
	[Token(Token = "0x6002AE6")]
	[Address(RVA = "0x3C36BE0", Offset = "0x3C36BE0", VA = "0x3C36BE0")]
	public UnexceptionalStreamWriter(Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x6002AE7")]
	[Address(RVA = "0x3C36C50", Offset = "0x3C36C50", VA = "0x3C36C50", Slot = "10")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6002AE8")]
	[Address(RVA = "0x3C36CD0", Offset = "0x3C36CD0", VA = "0x3C36CD0", Slot = "15")]
	public override void Write(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6002AE9")]
	[Address(RVA = "0x3C36D50", Offset = "0x3C36D50", VA = "0x3C36D50", Slot = "13")]
	public override void Write(char value)
	{
	}

	[Token(Token = "0x6002AEA")]
	[Address(RVA = "0x3C36DD0", Offset = "0x3C36DD0", VA = "0x3C36DD0", Slot = "14")]
	public override void Write(char[] value)
	{
	}

	[Token(Token = "0x6002AEB")]
	[Address(RVA = "0x3C36E50", Offset = "0x3C36E50", VA = "0x3C36E50", Slot = "18")]
	public override void Write(string value)
	{
	}
}
