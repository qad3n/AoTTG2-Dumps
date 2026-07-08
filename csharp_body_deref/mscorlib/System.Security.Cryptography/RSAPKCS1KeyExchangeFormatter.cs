using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002FD")]
[ComVisible(true)]
public class RSAPKCS1KeyExchangeFormatter : AsymmetricKeyExchangeFormatter
{
	[Token(Token = "0x4000D69")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private RandomNumberGenerator RngValue;

	[Token(Token = "0x4000D6A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private RSA _rsaKey;

	[Token(Token = "0x4000D6B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private bool? _rsaOverridesEncrypt;

	[Token(Token = "0x170002D6")]
	public override string Parameters
	{
		[Token(Token = "0x6001A3F")]
		[Address(RVA = "0x4E5DF10", Offset = "0x4E5DF10", VA = "0x4E5DF10", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D7")]
	public RandomNumberGenerator Rng
	{
		[Token(Token = "0x6001A40")]
		[Address(RVA = "0x4E5DF40", Offset = "0x4E5DF40", VA = "0x4E5DF40")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A41")]
		[Address(RVA = "0x4E5DF50", Offset = "0x4E5DF50", VA = "0x4E5DF50")]
		set
		{
		}
	}

	[Token(Token = "0x170002D8")]
	private bool OverridesEncrypt
	{
		[Token(Token = "0x6001A45")]
		[Address(RVA = "0x4E5E3B0", Offset = "0x4E5E3B0", VA = "0x4E5E3B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001A3D")]
	[Address(RVA = "0x4E5DF00", Offset = "0x4E5DF00", VA = "0x4E5DF00")]
	public RSAPKCS1KeyExchangeFormatter()
	{
	}

	[Token(Token = "0x6001A3E")]
	[Address(RVA = "0x4E5B6C0", Offset = "0x4E5B6C0", VA = "0x4E5B6C0")]
	public RSAPKCS1KeyExchangeFormatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001A42")]
	[Address(RVA = "0x4E5DF60", Offset = "0x4E5DF60", VA = "0x4E5DF60", Slot = "5")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001A43")]
	[Address(RVA = "0x4E5E040", Offset = "0x4E5E040", VA = "0x4E5E040", Slot = "6")]
	public override byte[] CreateKeyExchange(byte[] rgbData)
	{
		return null;
	}

	[Token(Token = "0x6001A44")]
	[Address(RVA = "0x4E5E5B0", Offset = "0x4E5E5B0", VA = "0x4E5E5B0", Slot = "7")]
	public override byte[] CreateKeyExchange(byte[] rgbData, Type symAlgType)
	{
		return null;
	}
}
