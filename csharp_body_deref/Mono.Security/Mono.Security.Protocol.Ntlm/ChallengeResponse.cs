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
		[Address(RVA = "0x3A4AC60", Offset = "0x3A4AC60", VA = "0x3A4AC60")]
		set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public byte[] Challenge
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x3A4B0D0", Offset = "0x3A4B0D0", VA = "0x3A4B0D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public byte[] LM
	{
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x3A4B490", Offset = "0x3A4B490", VA = "0x3A4B490")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004F")]
	public byte[] NT
	{
		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x3A4B830", Offset = "0x3A4B830", VA = "0x3A4B830")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x3A4AB40", Offset = "0x3A4AB40", VA = "0x3A4AB40")]
	public ChallengeResponse()
	{
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x3A4ABC0", Offset = "0x3A4ABC0", VA = "0x3A4ABC0")]
	public ChallengeResponse(string password, byte[] challenge)
	{
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x3A4B210", Offset = "0x3A4B210", VA = "0x3A4B210", Slot = "1")]
	~ChallengeResponse()
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x3A4B2A0", Offset = "0x3A4B2A0", VA = "0x3A4B2A0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x3A4B890", Offset = "0x3A4B890", VA = "0x3A4B890")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x3A4B4F0", Offset = "0x3A4B4F0", VA = "0x3A4B4F0")]
	private byte[] GetResponse(byte[] pwd)
	{
		return null;
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x3A4B8F0", Offset = "0x3A4B8F0", VA = "0x3A4B8F0")]
	private byte[] PrepareDESKey(byte[] key56bits, int position)
	{
		return null;
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x3A4B350", Offset = "0x3A4B350", VA = "0x3A4B350")]
	private byte[] PasswordToKey(string password, int position)
	{
		return null;
	}
}
