// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000304")]
[ComVisible(true)]
public class RSAPKCS1KeyExchangeDeformatter : AsymmetricKeyExchangeDeformatter
{
	[Token(Token = "0x4000CD3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private RSA _rsaKey;

	[Token(Token = "0x4000CD4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private bool? _rsaOverridesDecrypt;

	[Token(Token = "0x4000CD5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private RandomNumberGenerator RngValue;

	[Token(Token = "0x170002D4")]
	public RandomNumberGenerator RNG
	{
		[Token(Token = "0x6001A7B")]
		[Address(RVA = "0x534CCF0", Offset = "0x534BCF0", VA = "0x534CCF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A7C")]
		[Address(RVA = "0x534CD00", Offset = "0x534BD00", VA = "0x534CD00")]
		set
		{
		}
	}

	[Token(Token = "0x170002D5")]
	public override string Parameters
	{
		[Token(Token = "0x6001A7D")]
		[Address(RVA = "0x534CD10", Offset = "0x534BD10", VA = "0x534CD10", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A7E")]
		[Address(RVA = "0x534CD20", Offset = "0x534BD20", VA = "0x534CD20", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170002D6")]
	private bool OverridesDecrypt
	{
		[Token(Token = "0x6001A81")]
		[Address(RVA = "0x534CF30", Offset = "0x534BF30", VA = "0x534CF30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001A79")]
	[Address(RVA = "0x534CCE0", Offset = "0x534BCE0", VA = "0x534CCE0")]
	public RSAPKCS1KeyExchangeDeformatter()
	{
	}

	[Token(Token = "0x6001A7A")]
	[Address(RVA = "0x534A8A0", Offset = "0x53498A0", VA = "0x534A8A0")]
	public RSAPKCS1KeyExchangeDeformatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001A7F")]
	[Address(RVA = "0x534CD30", Offset = "0x534BD30", VA = "0x534CD30", Slot = "7")]
	public override byte[] DecryptKeyExchange(byte[] rgbIn)
	{
		return null;
	}

	[Token(Token = "0x6001A80")]
	[Address(RVA = "0x534D130", Offset = "0x534C130", VA = "0x534D130", Slot = "6")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}
}
