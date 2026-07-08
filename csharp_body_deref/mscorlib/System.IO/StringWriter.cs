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
		[Address(RVA = "0x4F467F0", Offset = "0x4F467F0", VA = "0x4F467F0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002A49")]
	[Address(RVA = "0x4F465A0", Offset = "0x4F465A0", VA = "0x4F465A0")]
	public StringWriter()
	{
	}

	[Token(Token = "0x6002A4A")]
	[Address(RVA = "0x4F46700", Offset = "0x4F46700", VA = "0x4F46700")]
	public StringWriter(IFormatProvider formatProvider)
	{
	}

	[Token(Token = "0x6002A4B")]
	[Address(RVA = "0x4F46760", Offset = "0x4F46760", VA = "0x4F46760")]
	public StringWriter(StringBuilder sb)
	{
	}

	[Token(Token = "0x6002A4C")]
	[Address(RVA = "0x4F46620", Offset = "0x4F46620", VA = "0x4F46620")]
	public StringWriter(StringBuilder sb, IFormatProvider formatProvider)
	{
	}

	[Token(Token = "0x6002A4D")]
	[Address(RVA = "0x4F467C0", Offset = "0x4F467C0", VA = "0x4F467C0", Slot = "8")]
	public override void Close()
	{
	}

	[Token(Token = "0x6002A4E")]
	[Address(RVA = "0x4F467E0", Offset = "0x4F467E0", VA = "0x4F467E0", Slot = "9")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002A50")]
	[Address(RVA = "0x4F468A0", Offset = "0x4F468A0", VA = "0x4F468A0", Slot = "13")]
	public override void Write(char value)
	{
	}

	[Token(Token = "0x6002A51")]
	[Address(RVA = "0x4F468D0", Offset = "0x4F468D0", VA = "0x4F468D0", Slot = "15")]
	public override void Write(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6002A52")]
	[Address(RVA = "0x4F46A60", Offset = "0x4F46A60", VA = "0x4F46A60", Slot = "18")]
	public override void Write(string value)
	{
	}

	[Token(Token = "0x6002A53")]
	[Address(RVA = "0x4F46A90", Offset = "0x4F46A90", VA = "0x4F46A90", Slot = "22")]
	[ComVisible(false)]
	public override Task WriteAsync(char value)
	{
		return null;
	}

	[Token(Token = "0x6002A54")]
	[Address(RVA = "0x4F46B40", Offset = "0x4F46B40", VA = "0x4F46B40", Slot = "23")]
	[ComVisible(false)]
	public override Task WriteAsync(string value)
	{
		return null;
	}

	[Token(Token = "0x6002A55")]
	[Address(RVA = "0x4F46BF0", Offset = "0x4F46BF0", VA = "0x4F46BF0", Slot = "24")]
	[ComVisible(false)]
	public override Task WriteAsync(char[] buffer, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x6002A56")]
	[Address(RVA = "0x4F46CC0", Offset = "0x4F46CC0", VA = "0x4F46CC0", Slot = "25")]
	[ComVisible(false)]
	public override Task FlushAsync()
	{
		return null;
	}

	[Token(Token = "0x6002A57")]
	[Address(RVA = "0x4F46D70", Offset = "0x4F46D70", VA = "0x4F46D70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
