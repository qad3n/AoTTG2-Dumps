using System.Security;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000149")]
public class NetworkCredential : ICredentials
{
	[Token(Token = "0x4000698")]
	[FieldOffset(Offset = "0x10")]
	private string m_domain;

	[Token(Token = "0x4000699")]
	[FieldOffset(Offset = "0x18")]
	private string m_userName;

	[Token(Token = "0x400069A")]
	[FieldOffset(Offset = "0x20")]
	private SecureString m_password;

	[Token(Token = "0x170001BB")]
	public string UserName
	{
		[Token(Token = "0x60007E4")]
		[Address(RVA = "0x462DE60", Offset = "0x462DE60", VA = "0x462DE60")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007E5")]
		[Address(RVA = "0x4639C50", Offset = "0x4639C50", VA = "0x4639C50")]
		set
		{
		}
	}

	[Token(Token = "0x170001BC")]
	public string Password
	{
		[Token(Token = "0x60007E6")]
		[Address(RVA = "0x462DE80", Offset = "0x462DE80", VA = "0x462DE80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007E7")]
		[Address(RVA = "0x4639C90", Offset = "0x4639C90", VA = "0x4639C90")]
		set
		{
		}
	}

	[Token(Token = "0x170001BD")]
	public string Domain
	{
		[Token(Token = "0x60007E8")]
		[Address(RVA = "0x462DE70", Offset = "0x462DE70", VA = "0x462DE70")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007E9")]
		[Address(RVA = "0x4639CC0", Offset = "0x4639CC0", VA = "0x4639CC0")]
		set
		{
		}
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x4631B30", Offset = "0x4631B30", VA = "0x4631B30")]
	public NetworkCredential(string userName, string password)
	{
	}

	[Token(Token = "0x60007E3")]
	[Address(RVA = "0x4637B70", Offset = "0x4637B70", VA = "0x4637B70")]
	public NetworkCredential(string userName, string password, string domain)
	{
	}

	[Token(Token = "0x60007EA")]
	[Address(RVA = "0x4639D10", Offset = "0x4639D10", VA = "0x4639D10")]
	internal string InternalGetUserName()
	{
		return null;
	}

	[Token(Token = "0x60007EB")]
	[Address(RVA = "0x4639D00", Offset = "0x4639D00", VA = "0x4639D00")]
	internal string InternalGetPassword()
	{
		return null;
	}

	[Token(Token = "0x60007EC")]
	[Address(RVA = "0x4639D20", Offset = "0x4639D20", VA = "0x4639D20")]
	internal string InternalGetDomain()
	{
		return null;
	}

	[Token(Token = "0x60007ED")]
	[Address(RVA = "0x4639D30", Offset = "0x4639D30", VA = "0x4639D30", Slot = "4")]
	public NetworkCredential GetCredential(Uri uri, string authType)
	{
		return null;
	}
}
