// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.NetworkCredential
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Security;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000292")]
public class NetworkCredential : ICredentials
{
	[Token(Token = "0x40009DF")]
	[FieldOffset(Offset = "0x10")]
	private string m_domain;

	[Token(Token = "0x40009E0")]
	[FieldOffset(Offset = "0x18")]
	private string m_userName;

	[Token(Token = "0x40009E1")]
	[FieldOffset(Offset = "0x20")]
	private SecureString m_password;

	[Token(Token = "0x170003E1")]
	public string UserName
	{
		[Token(Token = "0x60011E6")]
		[Address(RVA = "0x62A6CD0", Offset = "0x62A5CD0", VA = "0x62A6CD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60011E7")]
		[Address(RVA = "0x62A6C20", Offset = "0x62A5C20", VA = "0x62A6C20")]
		set
		{
		}
	}

	[Token(Token = "0x170003E2")]
	public string Password
	{
		[Token(Token = "0x60011E8")]
		[Address(RVA = "0x62A6CE0", Offset = "0x62A5CE0", VA = "0x62A6CE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60011E9")]
		[Address(RVA = "0x62A6C60", Offset = "0x62A5C60", VA = "0x62A6C60")]
		set
		{
		}
	}

	[Token(Token = "0x170003E3")]
	public string Domain
	{
		[Token(Token = "0x60011EA")]
		[Address(RVA = "0x62A6D00", Offset = "0x62A5D00", VA = "0x62A6D00")]
		get
		{
			return null;
		}
		[Token(Token = "0x60011EB")]
		[Address(RVA = "0x62A6C90", Offset = "0x62A5C90", VA = "0x62A6C90")]
		set
		{
		}
	}

	[Token(Token = "0x60011E3")]
	[Address(RVA = "0x62A6BD0", Offset = "0x62A5BD0", VA = "0x62A6BD0")]
	public NetworkCredential()
	{
	}

	[Token(Token = "0x60011E4")]
	[Address(RVA = "0x62A6C00", Offset = "0x62A5C00", VA = "0x62A6C00")]
	public NetworkCredential(string userName, string password)
	{
	}

	[Token(Token = "0x60011E5")]
	[Address(RVA = "0x62A59F0", Offset = "0x62A49F0", VA = "0x62A59F0")]
	public NetworkCredential(string userName, string password, string domain)
	{
	}

	[Token(Token = "0x60011EC")]
	[Address(RVA = "0x62A6D10", Offset = "0x62A5D10", VA = "0x62A6D10")]
	internal string InternalGetUserName()
	{
		return null;
	}

	[Token(Token = "0x60011ED")]
	[Address(RVA = "0x62A6CF0", Offset = "0x62A5CF0", VA = "0x62A6CF0")]
	internal string InternalGetPassword()
	{
		return null;
	}

	[Token(Token = "0x60011EE")]
	[Address(RVA = "0x62A6D20", Offset = "0x62A5D20", VA = "0x62A6D20")]
	internal string InternalGetDomain()
	{
		return null;
	}

	[Token(Token = "0x60011EF")]
	[Address(RVA = "0x62A6D30", Offset = "0x62A5D30", VA = "0x62A6D30", Slot = "4")]
	public NetworkCredential GetCredential(Uri uri, string authType)
	{
		return null;
	}
}
