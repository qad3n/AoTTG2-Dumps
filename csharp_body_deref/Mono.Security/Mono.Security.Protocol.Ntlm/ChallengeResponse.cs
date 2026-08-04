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

[Token(Token = "0x200001D")]
[Obsolete("Use of this API is highly discouraged, it selects legacy-mode LM/NTLM authentication, which sends your password in very weak encryption over the wire even if the server supports the more secure NTLMv2 / NTLMv2 Session. You need to use the new `Type3Message (Type2Message)' constructor to use the more secure NTLMv2 / NTLMv2 Session authentication modes. These require the Type 2 message from the server to compute the response.")]
public class ChallengeResponse : IDisposable
{
	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x0")]
	private static byte[] magic;

	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0x8")]
	private static byte[] nullEncMagic;

	[Token(Token = "0x4000084")]
	[FieldOffset(Offset = "0x10")]
	private bool _disposed;

	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x18")]
	private byte[] _challenge;

	[Token(Token = "0x4000086")]
	[FieldOffset(Offset = "0x20")]
	private byte[] _lmpwd;

	[Token(Token = "0x4000087")]
	[FieldOffset(Offset = "0x28")]
	private byte[] _ntpwd;

	[Token(Token = "0x1700004C")]
	public string Password
	{
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x3AB7920", Offset = "0x3AB7920", VA = "0x3AB7920")]
		set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public byte[] Challenge
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x3AB7D90", Offset = "0x3AB7D90", VA = "0x3AB7D90")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public byte[] LM
	{
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x3AB8150", Offset = "0x3AB8150", VA = "0x3AB8150")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004F")]
	public byte[] NT
	{
		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x3AB84F0", Offset = "0x3AB84F0", VA = "0x3AB84F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x3AB7800", Offset = "0x3AB7800", VA = "0x3AB7800")]
	public ChallengeResponse()
	{
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x3AB7880", Offset = "0x3AB7880", VA = "0x3AB7880")]
	public ChallengeResponse(string password, byte[] challenge)
	{
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x3AB7ED0", Offset = "0x3AB7ED0", VA = "0x3AB7ED0", Slot = "1")]
	~ChallengeResponse()
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x3AB7F60", Offset = "0x3AB7F60", VA = "0x3AB7F60", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x3AB8550", Offset = "0x3AB8550", VA = "0x3AB8550")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x3AB81B0", Offset = "0x3AB81B0", VA = "0x3AB81B0")]
	private byte[] GetResponse(byte[] pwd)
	{
		return null;
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x3AB85B0", Offset = "0x3AB85B0", VA = "0x3AB85B0")]
	private byte[] PrepareDESKey(byte[] key56bits, int position)
	{
		return null;
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x3AB8010", Offset = "0x3AB8010", VA = "0x3AB8010")]
	private byte[] PasswordToKey(string password, int position)
	{
		return null;
	}
}
