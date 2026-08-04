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
[Token(Token = "0x2000574")]
[ComVisible(true)]
public class StringWriter : TextWriter
{
	[Token(Token = "0x40016D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static UnicodeEncoding m_encoding;

	[Token(Token = "0x40016D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private StringBuilder _sb;

	[Token(Token = "0x40016D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private bool _isOpen;

	[Token(Token = "0x1700061C")]
	public override Encoding Encoding
	{
		[Token(Token = "0x6002A4F")]
		[Address(RVA = "0x3C2C310", Offset = "0x3C2C310", VA = "0x3C2C310", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002A49")]
	[Address(RVA = "0x3C2C0C0", Offset = "0x3C2C0C0", VA = "0x3C2C0C0")]
	public StringWriter()
	{
	}

	[Token(Token = "0x6002A4A")]
	[Address(RVA = "0x3C2C220", Offset = "0x3C2C220", VA = "0x3C2C220")]
	public StringWriter(IFormatProvider formatProvider)
	{
	}

	[Token(Token = "0x6002A4B")]
	[Address(RVA = "0x3C2C280", Offset = "0x3C2C280", VA = "0x3C2C280")]
	public StringWriter(StringBuilder sb)
	{
	}

	[Token(Token = "0x6002A4C")]
	[Address(RVA = "0x3C2C140", Offset = "0x3C2C140", VA = "0x3C2C140")]
	public StringWriter(StringBuilder sb, IFormatProvider formatProvider)
	{
	}

	[Token(Token = "0x6002A4D")]
	[Address(RVA = "0x3C2C2E0", Offset = "0x3C2C2E0", VA = "0x3C2C2E0", Slot = "8")]
	public override void Close()
	{
	}

	[Token(Token = "0x6002A4E")]
	[Address(RVA = "0x3C2C300", Offset = "0x3C2C300", VA = "0x3C2C300", Slot = "9")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002A50")]
	[Address(RVA = "0x3C2C3C0", Offset = "0x3C2C3C0", VA = "0x3C2C3C0", Slot = "13")]
	public override void Write(char value)
	{
	}

	[Token(Token = "0x6002A51")]
	[Address(RVA = "0x3C2C3F0", Offset = "0x3C2C3F0", VA = "0x3C2C3F0", Slot = "15")]
	public override void Write(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6002A52")]
	[Address(RVA = "0x3C2C580", Offset = "0x3C2C580", VA = "0x3C2C580", Slot = "18")]
	public override void Write(string value)
	{
	}

	[Token(Token = "0x6002A53")]
	[Address(RVA = "0x3C2C5B0", Offset = "0x3C2C5B0", VA = "0x3C2C5B0", Slot = "22")]
	[ComVisible(false)]
	public override Task WriteAsync(char value)
	{
		return null;
	}

	[Token(Token = "0x6002A54")]
	[Address(RVA = "0x3C2C660", Offset = "0x3C2C660", VA = "0x3C2C660", Slot = "23")]
	[ComVisible(false)]
	public override Task WriteAsync(string value)
	{
		return null;
	}

	[Token(Token = "0x6002A55")]
	[Address(RVA = "0x3C2C710", Offset = "0x3C2C710", VA = "0x3C2C710", Slot = "24")]
	[ComVisible(false)]
	public override Task WriteAsync(char[] buffer, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x6002A56")]
	[Address(RVA = "0x3C2C7E0", Offset = "0x3C2C7E0", VA = "0x3C2C7E0", Slot = "25")]
	[ComVisible(false)]
	public override Task FlushAsync()
	{
		return null;
	}

	[Token(Token = "0x6002A57")]
	[Address(RVA = "0x3C2C890", Offset = "0x3C2C890", VA = "0x3C2C890", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
