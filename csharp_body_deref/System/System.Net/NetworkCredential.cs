// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.NetworkCredential
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Security;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002D1")]
public class NetworkCredential : ICredentials
{
	[Token(Token = "0x4000AAE")]
	[FieldOffset(Offset = "0x10")]
	private string m_domain;

	[Token(Token = "0x4000AAF")]
	[FieldOffset(Offset = "0x18")]
	private string m_userName;

	[Token(Token = "0x4000AB0")]
	[FieldOffset(Offset = "0x20")]
	private SecureString m_password;

	[Token(Token = "0x17000410")]
	public string UserName
	{
		[Token(Token = "0x60013A4")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60013A5")]
		[Address(RVA = "0x27D0900", Offset = "0x27CEF00", VA = "0x1827D0900")]
		set
		{
		}
	}

	[Token(Token = "0x17000411")]
	public string Password
	{
		[Token(Token = "0x60013A6")]
		[Address(RVA = "0x27D06C0", Offset = "0x27CECC0", VA = "0x1827D06C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60013A7")]
		[Address(RVA = "0x27D08D0", Offset = "0x27CEED0", VA = "0x1827D08D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000412")]
	public string Domain
	{
		[Token(Token = "0x60013A8")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60013A9")]
		[Address(RVA = "0x27D08A0", Offset = "0x27CEEA0", VA = "0x1827D08A0")]
		set
		{
		}
	}

	[Token(Token = "0x60013A1")]
	[Address(RVA = "0x27D06D0", Offset = "0x27CECD0", VA = "0x1827D06D0")]
	public NetworkCredential()
	{
	}

	[Token(Token = "0x60013A2")]
	[Address(RVA = "0x27D0800", Offset = "0x27CEE00", VA = "0x1827D0800")]
	public NetworkCredential(string userName, string password)
	{
	}

	[Token(Token = "0x60013A3")]
	[Address(RVA = "0x27D0770", Offset = "0x27CED70", VA = "0x1827D0770")]
	public NetworkCredential(string userName, string password, string domain)
	{
	}

	[Token(Token = "0x60013AA")]
	[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
	internal string InternalGetUserName()
	{
		return null;
	}

	[Token(Token = "0x60013AB")]
	[Address(RVA = "0x27D06C0", Offset = "0x27CECC0", VA = "0x1827D06C0")]
	internal string InternalGetPassword()
	{
		return null;
	}

	[Token(Token = "0x60013AC")]
	[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
	internal string InternalGetDomain()
	{
		return null;
	}

	[Token(Token = "0x60013AD")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "4")]
	public NetworkCredential GetCredential(Uri uri, string authType)
	{
		return null;
	}
}
