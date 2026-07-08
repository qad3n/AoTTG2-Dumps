using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002FB")]
[ComVisible(true)]
public class RSAOAEPKeyExchangeFormatter : AsymmetricKeyExchangeFormatter
{
	[Token(Token = "0x4000D62")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private byte[] ParameterValue;

	[Token(Token = "0x4000D63")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private RSA _rsaKey;

	[Token(Token = "0x4000D64")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private bool? _rsaOverridesEncrypt;

	[Token(Token = "0x4000D65")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private RandomNumberGenerator RngValue;

	[Token(Token = "0x170002CF")]
	public byte[] Parameter
	{
		[Token(Token = "0x6001A2B")]
		[Address(RVA = "0x4E5D290", Offset = "0x4E5D290", VA = "0x4E5D290")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A2C")]
		[Address(RVA = "0x4E5D300", Offset = "0x4E5D300", VA = "0x4E5D300")]
		set
		{
		}
	}

	[Token(Token = "0x170002D0")]
	public override string Parameters
	{
		[Token(Token = "0x6001A2D")]
		[Address(RVA = "0x4E5D3C0", Offset = "0x4E5D3C0", VA = "0x4E5D3C0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D1")]
	public RandomNumberGenerator Rng
	{
		[Token(Token = "0x6001A2E")]
		[Address(RVA = "0x4E5D3D0", Offset = "0x4E5D3D0", VA = "0x4E5D3D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A2F")]
		[Address(RVA = "0x4E5D3E0", Offset = "0x4E5D3E0", VA = "0x4E5D3E0")]
		set
		{
		}
	}

	[Token(Token = "0x170002D2")]
	private bool OverridesEncrypt
	{
		[Token(Token = "0x6001A33")]
		[Address(RVA = "0x4E5D740", Offset = "0x4E5D740", VA = "0x4E5D740")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001A29")]
	[Address(RVA = "0x4E5D280", Offset = "0x4E5D280", VA = "0x4E5D280")]
	public RSAOAEPKeyExchangeFormatter()
	{
	}

	[Token(Token = "0x6001A2A")]
	[Address(RVA = "0x4E5B5D0", Offset = "0x4E5B5D0", VA = "0x4E5B5D0")]
	public RSAOAEPKeyExchangeFormatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001A30")]
	[Address(RVA = "0x4E5D3F0", Offset = "0x4E5D3F0", VA = "0x4E5D3F0", Slot = "5")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001A31")]
	[Address(RVA = "0x4E5D4D0", Offset = "0x4E5D4D0", VA = "0x4E5D4D0", Slot = "6")]
	public override byte[] CreateKeyExchange(byte[] rgbData)
	{
		return null;
	}

	[Token(Token = "0x6001A32")]
	[Address(RVA = "0x4E5D9B0", Offset = "0x4E5D9B0", VA = "0x4E5D9B0", Slot = "7")]
	public override byte[] CreateKeyExchange(byte[] rgbData, Type symAlgType)
	{
		return null;
	}
}
