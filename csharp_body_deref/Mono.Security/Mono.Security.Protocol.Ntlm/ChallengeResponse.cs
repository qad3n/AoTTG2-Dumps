// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Protocol.Ntlm.ChallengeResponse
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Mono.Security.Protocol.Ntlm;

[Token(Token = "0x200002F")]
[Obsolete("Use of this API is highly discouraged, it selects legacy-mode LM/NTLM authentication, which sends your password in very weak encryption over the wire even if the server supports the more secure NTLMv2 / NTLMv2 Session. You need to use the new `Type3Message (Type2Message)' constructor to use the more secure NTLMv2 / NTLMv2 Session authentication modes. These require the Type 2 message from the server to compute the response.")]
public class ChallengeResponse : IDisposable
{
	[Token(Token = "0x4000088")]
	[FieldOffset(Offset = "0x0")]
	private static byte[] magic;

	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0x8")]
	private static byte[] nullEncMagic;

	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0x10")]
	private bool _disposed;

	[Token(Token = "0x400008B")]
	[FieldOffset(Offset = "0x18")]
	private byte[] _challenge;

	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0x20")]
	private byte[] _lmpwd;

	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x28")]
	private byte[] _ntpwd;

	[Token(Token = "0x1700004F")]
	public string Password
	{
		[Token(Token = "0x600010B")]
		[Address(RVA = "0x1915D70", Offset = "0x1914370", VA = "0x181915D70")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	public byte[] Challenge
	{
		[Token(Token = "0x600010C")]
		[Address(RVA = "0x1915C20", Offset = "0x1914220", VA = "0x181915C20")]
		set
		{
		}
	}

	[Token(Token = "0x17000051")]
	public byte[] LM
	{
		[Token(Token = "0x600010D")]
		[Address(RVA = "0x1915B40", Offset = "0x1914140", VA = "0x181915B40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000052")]
	public byte[] NT
	{
		[Token(Token = "0x600010E")]
		[Address(RVA = "0x1915BB0", Offset = "0x19141B0", VA = "0x181915BB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x1915AC0", Offset = "0x19140C0", VA = "0x181915AC0")]
	public ChallengeResponse()
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x19158F0", Offset = "0x1913EF0", VA = "0x1819158F0")]
	public ChallengeResponse(string password, byte[] challenge)
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x1915190", Offset = "0x1913790", VA = "0x181915190", Slot = "1")]
	~ChallengeResponse()
	{
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x1915060", Offset = "0x1913660", VA = "0x181915060", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x1915110", Offset = "0x1913710", VA = "0x181915110")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x19152A0", Offset = "0x19138A0", VA = "0x1819152A0")]
	private byte[] GetResponse(byte[] pwd)
	{
		return null;
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x1915610", Offset = "0x1913C10", VA = "0x181915610")]
	private byte[] PrepareDESKey(byte[] key56bits, int position)
	{
		return null;
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x19154C0", Offset = "0x1913AC0", VA = "0x1819154C0")]
	private byte[] PasswordToKey(string password, int position)
	{
		return null;
	}
}
