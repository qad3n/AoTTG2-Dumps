// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.CStreamWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000684")]
internal class CStreamWriter : StreamWriter
{
	[Token(Token = "0x4001A6C")]
	[FieldOffset(Offset = "0x70")]
	private System.TermInfoDriver driver;

	[Token(Token = "0x6003385")]
	[Address(RVA = "0x548F830", Offset = "0x548E830", VA = "0x548F830")]
	public CStreamWriter(Stream stream, Encoding encoding, bool leaveOpen)
	{
	}

	[Token(Token = "0x6003386")]
	[Address(RVA = "0x548F960", Offset = "0x548E960", VA = "0x548F960", Slot = "15")]
	public override void Write(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6003387")]
	[Address(RVA = "0x548FCC0", Offset = "0x548ECC0", VA = "0x548FCC0", Slot = "13")]
	public override void Write(char val)
	{
	}

	[Token(Token = "0x6003388")]
	[Address(RVA = "0x548FEB0", Offset = "0x548EEB0", VA = "0x548FEB0")]
	public void InternalWriteString(string val)
	{
	}

	[Token(Token = "0x6003389")]
	[Address(RVA = "0x548FE30", Offset = "0x548EE30", VA = "0x548FE30")]
	public void InternalWriteChar(char val)
	{
	}

	[Token(Token = "0x600338A")]
	[Address(RVA = "0x548FF30", Offset = "0x548EF30", VA = "0x548FF30")]
	public void InternalWriteChars(char[] buffer, int n)
	{
	}

	[Token(Token = "0x600338B")]
	[Address(RVA = "0x548FFB0", Offset = "0x548EFB0", VA = "0x548FFB0", Slot = "14")]
	public override void Write(char[] val)
	{
	}

	[Token(Token = "0x600338C")]
	[Address(RVA = "0x548FFE0", Offset = "0x548EFE0", VA = "0x548FFE0", Slot = "18")]
	public override void Write(string val)
	{
	}

	[Token(Token = "0x600338D")]
	[Address(RVA = "0x54900B0", Offset = "0x548F0B0", VA = "0x54900B0", Slot = "21")]
	public override void WriteLine(string val)
	{
	}
}
