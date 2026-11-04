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

[Token(Token = "0x200032B")]
[ComVisible(true)]
public class RSAPKCS1KeyExchangeDeformatter : AsymmetricKeyExchangeDeformatter
{
	[Token(Token = "0x4000D73")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private RSA _rsaKey;

	[Token(Token = "0x4000D74")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private bool? _rsaOverridesDecrypt;

	[Token(Token = "0x4000D75")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private RandomNumberGenerator RngValue;

	[Token(Token = "0x170002D5")]
	public RandomNumberGenerator RNG
	{
		[Token(Token = "0x6001A9E")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A9F")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		set
		{
		}
	}

	[Token(Token = "0x170002D6")]
	public override string Parameters
	{
		[Token(Token = "0x6001AA0")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001AA1")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170002D7")]
	private bool OverridesDecrypt
	{
		[Token(Token = "0x6001AA4")]
		[Address(RVA = "0x19C5560", Offset = "0x19C3B60", VA = "0x1819C5560")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001A9C")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public RSAPKCS1KeyExchangeDeformatter()
	{
	}

	[Token(Token = "0x6001A9D")]
	[Address(RVA = "0x19C5450", Offset = "0x19C3A50", VA = "0x1819C5450")]
	public RSAPKCS1KeyExchangeDeformatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001AA2")]
	[Address(RVA = "0x19C50F0", Offset = "0x19C36F0", VA = "0x1819C50F0", Slot = "7")]
	public override byte[] DecryptKeyExchange(byte[] rgbIn)
	{
		return null;
	}

	[Token(Token = "0x6001AA3")]
	[Address(RVA = "0x19C5340", Offset = "0x19C3940", VA = "0x1819C5340", Slot = "6")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}
}
