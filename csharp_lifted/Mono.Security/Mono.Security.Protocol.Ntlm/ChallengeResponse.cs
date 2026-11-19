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
		[Address(RVA = "0x52C3510", Offset = "0x52C2510", VA = "0x52C3510")]
		set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public byte[] Challenge
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x52C3960", Offset = "0x52C2960", VA = "0x52C3960")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public byte[] LM
	{
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x52C3D20", Offset = "0x52C2D20", VA = "0x52C3D20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004F")]
	public byte[] NT
	{
		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x52C40C0", Offset = "0x52C30C0", VA = "0x52C40C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x52C33F0", Offset = "0x52C23F0", VA = "0x52C33F0")]
	public ChallengeResponse()
	{
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x52C3470", Offset = "0x52C2470", VA = "0x52C3470")]
	public ChallengeResponse(string password, byte[] challenge)
	{
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x52C3AA0", Offset = "0x52C2AA0", VA = "0x52C3AA0", Slot = "1")]
	~ChallengeResponse()
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x52C3B30", Offset = "0x52C2B30", VA = "0x52C3B30", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x52C4120", Offset = "0x52C3120", VA = "0x52C4120")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x52C3D80", Offset = "0x52C2D80", VA = "0x52C3D80")]
	private byte[] GetResponse(byte[] pwd)
	{
		return null;
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x52C4180", Offset = "0x52C3180", VA = "0x52C4180")]
	private byte[] PrepareDESKey(byte[] key56bits, int position)
	{
		return null;
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x52C3BE0", Offset = "0x52C2BE0", VA = "0x52C3BE0")]
	private byte[] PasswordToKey(string password, int position)
	{
		return null;
	}
}
