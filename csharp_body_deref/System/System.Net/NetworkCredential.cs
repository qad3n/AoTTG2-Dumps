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
		[Address(RVA = "0x4952F60", Offset = "0x4952F60", VA = "0x4952F60")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007E5")]
		[Address(RVA = "0x495ED50", Offset = "0x495ED50", VA = "0x495ED50")]
		set
		{
		}
	}

	[Token(Token = "0x170001BC")]
	public string Password
	{
		[Token(Token = "0x60007E6")]
		[Address(RVA = "0x4952F80", Offset = "0x4952F80", VA = "0x4952F80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007E7")]
		[Address(RVA = "0x495ED90", Offset = "0x495ED90", VA = "0x495ED90")]
		set
		{
		}
	}

	[Token(Token = "0x170001BD")]
	public string Domain
	{
		[Token(Token = "0x60007E8")]
		[Address(RVA = "0x4952F70", Offset = "0x4952F70", VA = "0x4952F70")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007E9")]
		[Address(RVA = "0x495EDC0", Offset = "0x495EDC0", VA = "0x495EDC0")]
		set
		{
		}
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x4956C30", Offset = "0x4956C30", VA = "0x4956C30")]
	public NetworkCredential(string userName, string password)
	{
	}

	[Token(Token = "0x60007E3")]
	[Address(RVA = "0x495CC70", Offset = "0x495CC70", VA = "0x495CC70")]
	public NetworkCredential(string userName, string password, string domain)
	{
	}

	[Token(Token = "0x60007EA")]
	[Address(RVA = "0x495EE10", Offset = "0x495EE10", VA = "0x495EE10")]
	internal string InternalGetUserName()
	{
		return null;
	}

	[Token(Token = "0x60007EB")]
	[Address(RVA = "0x495EE00", Offset = "0x495EE00", VA = "0x495EE00")]
	internal string InternalGetPassword()
	{
		return null;
	}

	[Token(Token = "0x60007EC")]
	[Address(RVA = "0x495EE20", Offset = "0x495EE20", VA = "0x495EE20")]
	internal string InternalGetDomain()
	{
		return null;
	}

	[Token(Token = "0x60007ED")]
	[Address(RVA = "0x495EE30", Offset = "0x495EE30", VA = "0x495EE30", Slot = "4")]
	public NetworkCredential GetCredential(Uri uri, string authType)
	{
		return null;
	}
}
