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

[Token(Token = "0x200035B")]
public class MailAddress
{
	[Token(Token = "0x4000EDA")]
	[FieldOffset(Offset = "0x10")]
	private readonly Encoding _displayNameEncoding;

	[Token(Token = "0x4000EDB")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _displayName;

	[Token(Token = "0x4000EDC")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _userName;

	[Token(Token = "0x4000EDD")]
	[FieldOffset(Offset = "0x28")]
	private readonly string _host;

	[Token(Token = "0x4000EDE")]
	[FieldOffset(Offset = "0x0")]
	private static readonly EncodedStreamFactory s_encoderFactory;

	[Token(Token = "0x17000522")]
	public string DisplayName
	{
		[Token(Token = "0x600172A")]
		[Address(RVA = "0x61BDD10", Offset = "0x61BCD10", VA = "0x61BDD10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000523")]
	public string Address
	{
		[Token(Token = "0x600172B")]
		[Address(RVA = "0x61BDD20", Offset = "0x61BCD20", VA = "0x61BDD20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000524")]
	private string SmtpAddress
	{
		[Token(Token = "0x600172C")]
		[Address(RVA = "0x61BDD60", Offset = "0x61BCD60", VA = "0x61BDD60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001727")]
	[Address(RVA = "0x61BD040", Offset = "0x61BC040", VA = "0x61BD040")]
	internal MailAddress(string displayName, string userName, string domain)
	{
	}

	[Token(Token = "0x6001728")]
	[Address(RVA = "0x61BDA70", Offset = "0x61BCA70", VA = "0x61BDA70")]
	public MailAddress(string address)
	{
	}

	[Token(Token = "0x6001729")]
	[Address(RVA = "0x61BDA80", Offset = "0x61BCA80", VA = "0x61BDA80")]
	public MailAddress(string address, string displayName, Encoding displayNameEncoding)
	{
	}

	[Token(Token = "0x600172D")]
	[Address(RVA = "0x61BDDE0", Offset = "0x61BCDE0", VA = "0x61BDDE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600172E")]
	[Address(RVA = "0x61BDF10", Offset = "0x61BCF10", VA = "0x61BDF10", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600172F")]
	[Address(RVA = "0x61BDF70", Offset = "0x61BCF70", VA = "0x61BDF70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
