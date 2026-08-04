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

[Token(Token = "0x2000243")]
public class MailAddress
{
	[Token(Token = "0x4000CAA")]
	[FieldOffset(Offset = "0x10")]
	private readonly Encoding _displayNameEncoding;

	[Token(Token = "0x4000CAB")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _displayName;

	[Token(Token = "0x4000CAC")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _userName;

	[Token(Token = "0x4000CAD")]
	[FieldOffset(Offset = "0x28")]
	private readonly string _host;

	[Token(Token = "0x4000CAE")]
	[FieldOffset(Offset = "0x0")]
	private static readonly EncodedStreamFactory s_encoderFactory;

	[Token(Token = "0x17000329")]
	public string DisplayName
	{
		[Token(Token = "0x6000E1C")]
		[Address(RVA = "0x49CFA60", Offset = "0x49CFA60", VA = "0x49CFA60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700032A")]
	public string Address
	{
		[Token(Token = "0x6000E1D")]
		[Address(RVA = "0x49CFA70", Offset = "0x49CFA70", VA = "0x49CFA70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700032B")]
	private string SmtpAddress
	{
		[Token(Token = "0x6000E1E")]
		[Address(RVA = "0x49CFAB0", Offset = "0x49CFAB0", VA = "0x49CFAB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E19")]
	[Address(RVA = "0x49CEDC0", Offset = "0x49CEDC0", VA = "0x49CEDC0")]
	internal MailAddress(string displayName, string userName, string domain)
	{
	}

	[Token(Token = "0x6000E1A")]
	[Address(RVA = "0x49CF7C0", Offset = "0x49CF7C0", VA = "0x49CF7C0")]
	public MailAddress(string address)
	{
	}

	[Token(Token = "0x6000E1B")]
	[Address(RVA = "0x49CF7D0", Offset = "0x49CF7D0", VA = "0x49CF7D0")]
	public MailAddress(string address, string displayName, Encoding displayNameEncoding)
	{
	}

	[Token(Token = "0x6000E1F")]
	[Address(RVA = "0x49CFB30", Offset = "0x49CFB30", VA = "0x49CFB30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000E20")]
	[Address(RVA = "0x49CFC60", Offset = "0x49CFC60", VA = "0x49CFC60", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E21")]
	[Address(RVA = "0x49CFCC0", Offset = "0x49CFCC0", VA = "0x49CFCC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
