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
		[Address(RVA = "0x3B43500", Offset = "0x3B43500", VA = "0x3B43500")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A37")]
		[Address(RVA = "0x3B43510", Offset = "0x3B43510", VA = "0x3B43510")]
		set
		{
		}
	}

	[Token(Token = "0x170002D4")]
	public override string Parameters
	{
		[Token(Token = "0x6001A38")]
		[Address(RVA = "0x3B43520", Offset = "0x3B43520", VA = "0x3B43520", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A39")]
		[Address(RVA = "0x3B43530", Offset = "0x3B43530", VA = "0x3B43530", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170002D5")]
	private bool OverridesDecrypt
	{
		[Token(Token = "0x6001A3C")]
		[Address(RVA = "0x3B43740", Offset = "0x3B43740", VA = "0x3B43740")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001A34")]
	[Address(RVA = "0x3B434F0", Offset = "0x3B434F0", VA = "0x3B434F0")]
	public RSAPKCS1KeyExchangeDeformatter()
	{
	}

	[Token(Token = "0x6001A35")]
	[Address(RVA = "0x3B40F70", Offset = "0x3B40F70", VA = "0x3B40F70")]
	public RSAPKCS1KeyExchangeDeformatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001A3A")]
	[Address(RVA = "0x3B43540", Offset = "0x3B43540", VA = "0x3B43540", Slot = "7")]
	public override byte[] DecryptKeyExchange(byte[] rgbIn)
	{
		return null;
	}

	[Token(Token = "0x6001A3B")]
	[Address(RVA = "0x3B43940", Offset = "0x3B43940", VA = "0x3B43940", Slot = "6")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}
}
