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

[Token(Token = "0x2000682")]
internal class UnexceptionalStreamWriter : StreamWriter
{
	[Token(Token = "0x6003379")]
	[Address(RVA = "0x548F030", Offset = "0x548E030", VA = "0x548F030")]
	public UnexceptionalStreamWriter(Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x600337A")]
	[Address(RVA = "0x548F0A0", Offset = "0x548E0A0", VA = "0x548F0A0", Slot = "10")]
	public override void Flush()
	{
	}

	[Token(Token = "0x600337B")]
	[Address(RVA = "0x548F120", Offset = "0x548E120", VA = "0x548F120", Slot = "15")]
	public override void Write(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x600337C")]
	[Address(RVA = "0x548F1A0", Offset = "0x548E1A0", VA = "0x548F1A0", Slot = "13")]
	public override void Write(char value)
	{
	}

	[Token(Token = "0x600337D")]
	[Address(RVA = "0x548F220", Offset = "0x548E220", VA = "0x548F220", Slot = "14")]
	public override void Write(char[] value)
	{
	}

	[Token(Token = "0x600337E")]
	[Address(RVA = "0x548F2A0", Offset = "0x548E2A0", VA = "0x548F2A0", Slot = "18")]
	public override void Write(string value)
	{
	}
}
