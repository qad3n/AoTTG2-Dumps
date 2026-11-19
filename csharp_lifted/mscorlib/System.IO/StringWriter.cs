// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.StringWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000676")]
[ComVisible(true)]
public class StringWriter : TextWriter
{
	[Token(Token = "0x4001A16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static UnicodeEncoding m_encoding;

	[Token(Token = "0x4001A17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private StringBuilder _sb;

	[Token(Token = "0x4001A18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private bool _isOpen;

	[Token(Token = "0x17000832")]
	public override Encoding Encoding
	{
		[Token(Token = "0x60032E4")]
		[Address(RVA = "0x5484E80", Offset = "0x5483E80", VA = "0x5484E80", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60032DE")]
	[Address(RVA = "0x5484C40", Offset = "0x5483C40", VA = "0x5484C40")]
	public StringWriter()
	{
	}

	[Token(Token = "0x60032DF")]
	[Address(RVA = "0x5484D90", Offset = "0x5483D90", VA = "0x5484D90")]
	public StringWriter(IFormatProvider formatProvider)
	{
	}

	[Token(Token = "0x60032E0")]
	[Address(RVA = "0x5484DF0", Offset = "0x5483DF0", VA = "0x5484DF0")]
	public StringWriter(StringBuilder sb)
	{
	}

	[Token(Token = "0x60032E1")]
	[Address(RVA = "0x5484CC0", Offset = "0x5483CC0", VA = "0x5484CC0")]
	public StringWriter(StringBuilder sb, IFormatProvider formatProvider)
	{
	}

	[Token(Token = "0x60032E2")]
	[Address(RVA = "0x5484E50", Offset = "0x5483E50", VA = "0x5484E50", Slot = "8")]
	public override void Close()
	{
	}

	[Token(Token = "0x60032E3")]
	[Address(RVA = "0x5484E70", Offset = "0x5483E70", VA = "0x5484E70", Slot = "9")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60032E5")]
	[Address(RVA = "0x5484F30", Offset = "0x5483F30", VA = "0x5484F30", Slot = "13")]
	public override void Write(char value)
	{
	}

	[Token(Token = "0x60032E6")]
	[Address(RVA = "0x5484FB0", Offset = "0x5483FB0", VA = "0x5484FB0", Slot = "15")]
	public override void Write(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60032E7")]
	[Address(RVA = "0x5485180", Offset = "0x5484180", VA = "0x5485180", Slot = "18")]
	public override void Write(string value)
	{
	}

	[Token(Token = "0x60032E8")]
	[Address(RVA = "0x5485210", Offset = "0x5484210", VA = "0x5485210", Slot = "24")]
	[ComVisible(false)]
	public override Task WriteAsync(char value)
	{
		return null;
	}

	[Token(Token = "0x60032E9")]
	[Address(RVA = "0x54852C0", Offset = "0x54842C0", VA = "0x54852C0", Slot = "25")]
	[ComVisible(false)]
	public override Task WriteAsync(string value)
	{
		return null;
	}

	[Token(Token = "0x60032EA")]
	[Address(RVA = "0x5485370", Offset = "0x5484370", VA = "0x5485370", Slot = "26")]
	[ComVisible(false)]
	public override Task WriteAsync(char[] buffer, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x60032EB")]
	[Address(RVA = "0x5485440", Offset = "0x5484440", VA = "0x5485440", Slot = "27")]
	[ComVisible(false)]
	public override Task FlushAsync()
	{
		return null;
	}

	[Token(Token = "0x60032EC")]
	[Address(RVA = "0x54854F0", Offset = "0x54844F0", VA = "0x54854F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
