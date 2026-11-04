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
[Token(Token = "0x200069C")]
[ComVisible(true)]
public class StringWriter : TextWriter
{
	[Token(Token = "0x4001AB0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static UnicodeEncoding m_encoding;

	[Token(Token = "0x4001AB1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private StringBuilder _sb;

	[Token(Token = "0x4001AB2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private bool _isOpen;

	[Token(Token = "0x17000832")]
	public override Encoding Encoding
	{
		[Token(Token = "0x6003316")]
		[Address(RVA = "0x1AFA9A0", Offset = "0x1AF8FA0", VA = "0x181AFA9A0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003310")]
	[Address(RVA = "0x1AFA530", Offset = "0x1AF8B30", VA = "0x181AFA530")]
	public StringWriter()
	{
	}

	[Token(Token = "0x6003311")]
	[Address(RVA = "0x1AFA760", Offset = "0x1AF8D60", VA = "0x181AFA760")]
	public StringWriter(IFormatProvider formatProvider)
	{
	}

	[Token(Token = "0x6003312")]
	[Address(RVA = "0x1AFA880", Offset = "0x1AF8E80", VA = "0x181AFA880")]
	public StringWriter(StringBuilder sb)
	{
	}

	[Token(Token = "0x6003313")]
	[Address(RVA = "0x1AFA670", Offset = "0x1AF8C70", VA = "0x181AFA670")]
	public StringWriter(StringBuilder sb, IFormatProvider formatProvider)
	{
	}

	[Token(Token = "0x6003314")]
	[Address(RVA = "0x1AF9F90", Offset = "0x1AF8590", VA = "0x181AF9F90", Slot = "8")]
	public override void Close()
	{
	}

	[Token(Token = "0x6003315")]
	[Address(RVA = "0x1AF9FB0", Offset = "0x1AF85B0", VA = "0x181AF9FB0", Slot = "9")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6003317")]
	[Address(RVA = "0x1AFA500", Offset = "0x1AF8B00", VA = "0x181AFA500", Slot = "13")]
	public override void Write(char value)
	{
	}

	[Token(Token = "0x6003318")]
	[Address(RVA = "0x1AFA2D0", Offset = "0x1AF88D0", VA = "0x181AFA2D0", Slot = "15")]
	public override void Write(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6003319")]
	[Address(RVA = "0x1AFA4C0", Offset = "0x1AF8AC0", VA = "0x181AFA4C0", Slot = "18")]
	public override void Write(string value)
	{
	}

	[Token(Token = "0x600331A")]
	[Address(RVA = "0x1AFA150", Offset = "0x1AF8750", VA = "0x181AFA150", Slot = "24")]
	[ComVisible(false)]
	public override Task WriteAsync(char value)
	{
		return null;
	}

	[Token(Token = "0x600331B")]
	[Address(RVA = "0x1AFA210", Offset = "0x1AF8810", VA = "0x181AFA210", Slot = "25")]
	[ComVisible(false)]
	public override Task WriteAsync(string value)
	{
		return null;
	}

	[Token(Token = "0x600331C")]
	[Address(RVA = "0x1AFA080", Offset = "0x1AF8680", VA = "0x181AFA080", Slot = "26")]
	[ComVisible(false)]
	public override Task WriteAsync(char[] buffer, int index, int count)
	{
		return null;
	}

	[Token(Token = "0x600331D")]
	[Address(RVA = "0x1AF9FC0", Offset = "0x1AF85C0", VA = "0x181AF9FC0", Slot = "27")]
	[ComVisible(false)]
	public override Task FlushAsync()
	{
		return null;
	}

	[Token(Token = "0x600331E")]
	[Address(RVA = "0x1AFA050", Offset = "0x1AF8650", VA = "0x181AFA050", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
