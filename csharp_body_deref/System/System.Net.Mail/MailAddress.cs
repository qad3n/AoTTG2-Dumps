// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Mail.MailAddress
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Net.Mime;
using System.Text;
using Il2CppDummyDll;

namespace System.Net.Mail;

[Token(Token = "0x200039F")]
public class MailAddress
{
	[Token(Token = "0x4000FC2")]
	[FieldOffset(Offset = "0x10")]
	private readonly Encoding _displayNameEncoding;

	[Token(Token = "0x4000FC3")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _displayName;

	[Token(Token = "0x4000FC4")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _userName;

	[Token(Token = "0x4000FC5")]
	[FieldOffset(Offset = "0x28")]
	private readonly string _host;

	[Token(Token = "0x4000FC6")]
	[FieldOffset(Offset = "0x0")]
	private static readonly EncodedStreamFactory s_encoderFactory;

	[Token(Token = "0x1700054F")]
	public string DisplayName
	{
		[Token(Token = "0x60018E3")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000550")]
	public string Address
	{
		[Token(Token = "0x60018E4")]
		[Address(RVA = "0x2813C70", Offset = "0x2812270", VA = "0x182813C70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000551")]
	private string SmtpAddress
	{
		[Token(Token = "0x60018E5")]
		[Address(RVA = "0x2813CC0", Offset = "0x28122C0", VA = "0x182813CC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60018E0")]
	[Address(RVA = "0x2813BD0", Offset = "0x28121D0", VA = "0x182813BD0")]
	internal MailAddress(string displayName, string userName, string domain)
	{
	}

	[Token(Token = "0x60018E1")]
	[Address(RVA = "0x2813BB0", Offset = "0x28121B0", VA = "0x182813BB0")]
	public MailAddress(string address)
	{
	}

	[Token(Token = "0x60018E2")]
	[Address(RVA = "0x2813900", Offset = "0x2811F00", VA = "0x182813900")]
	public MailAddress(string address, string displayName, Encoding displayNameEncoding)
	{
	}

	[Token(Token = "0x60018E6")]
	[Address(RVA = "0x2813750", Offset = "0x2811D50", VA = "0x182813750", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60018E7")]
	[Address(RVA = "0x28136A0", Offset = "0x2811CA0", VA = "0x1828136A0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60018E8")]
	[Address(RVA = "0x2813710", Offset = "0x2811D10", VA = "0x182813710", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
