using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002FC")]
[ComVisible(true)]
public class RSAPKCS1KeyExchangeDeformatter : AsymmetricKeyExchangeDeformatter
{
	[Token(Token = "0x4000D66")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private RSA _rsaKey;

	[Token(Token = "0x4000D67")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private bool? _rsaOverridesDecrypt;

	[Token(Token = "0x4000D68")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private RandomNumberGenerator RngValue;

	[Token(Token = "0x170002D3")]
	public RandomNumberGenerator RNG
	{
		[Token(Token = "0x6001A36")]
		[Address(RVA = "0x4E5D9E0", Offset = "0x4E5D9E0", VA = "0x4E5D9E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A37")]
		[Address(RVA = "0x4E5D9F0", Offset = "0x4E5D9F0", VA = "0x4E5D9F0")]
		set
		{
		}
	}

	[Token(Token = "0x170002D4")]
	public override string Parameters
	{
		[Token(Token = "0x6001A38")]
		[Address(RVA = "0x4E5DA00", Offset = "0x4E5DA00", VA = "0x4E5DA00", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A39")]
		[Address(RVA = "0x4E5DA10", Offset = "0x4E5DA10", VA = "0x4E5DA10", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170002D5")]
	private bool OverridesDecrypt
	{
		[Token(Token = "0x6001A3C")]
		[Address(RVA = "0x4E5DC20", Offset = "0x4E5DC20", VA = "0x4E5DC20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001A34")]
	[Address(RVA = "0x4E5D9D0", Offset = "0x4E5D9D0", VA = "0x4E5D9D0")]
	public RSAPKCS1KeyExchangeDeformatter()
	{
	}

	[Token(Token = "0x6001A35")]
	[Address(RVA = "0x4E5B450", Offset = "0x4E5B450", VA = "0x4E5B450")]
	public RSAPKCS1KeyExchangeDeformatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001A3A")]
	[Address(RVA = "0x4E5DA20", Offset = "0x4E5DA20", VA = "0x4E5DA20", Slot = "7")]
	public override byte[] DecryptKeyExchange(byte[] rgbIn)
	{
		return null;
	}

	[Token(Token = "0x6001A3B")]
	[Address(RVA = "0x4E5DE20", Offset = "0x4E5DE20", VA = "0x4E5DE20", Slot = "6")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}
}
