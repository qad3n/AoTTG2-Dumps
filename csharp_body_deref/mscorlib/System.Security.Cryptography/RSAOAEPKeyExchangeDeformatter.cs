using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002FA")]
[ComVisible(true)]
public class RSAOAEPKeyExchangeDeformatter : AsymmetricKeyExchangeDeformatter
{
	[Token(Token = "0x4000D60")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private RSA _rsaKey;

	[Token(Token = "0x4000D61")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private bool? _rsaOverridesDecrypt;

	[Token(Token = "0x170002CD")]
	public override string Parameters
	{
		[Token(Token = "0x6001A24")]
		[Address(RVA = "0x4E5CC00", Offset = "0x4E5CC00", VA = "0x4E5CC00", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A25")]
		[Address(RVA = "0x4E5CC10", Offset = "0x4E5CC10", VA = "0x4E5CC10", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170002CE")]
	private bool OverridesDecrypt
	{
		[Token(Token = "0x6001A28")]
		[Address(RVA = "0x4E5CE00", Offset = "0x4E5CE00", VA = "0x4E5CE00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001A22")]
	[Address(RVA = "0x4E5CBF0", Offset = "0x4E5CBF0", VA = "0x4E5CBF0")]
	public RSAOAEPKeyExchangeDeformatter()
	{
	}

	[Token(Token = "0x6001A23")]
	[Address(RVA = "0x4E5B360", Offset = "0x4E5B360", VA = "0x4E5B360")]
	public RSAOAEPKeyExchangeDeformatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001A26")]
	[Address(RVA = "0x4E5CC20", Offset = "0x4E5CC20", VA = "0x4E5CC20", Slot = "7")]
	public override byte[] DecryptKeyExchange(byte[] rgbData)
	{
		return null;
	}

	[Token(Token = "0x6001A27")]
	[Address(RVA = "0x4E5D0C0", Offset = "0x4E5D0C0", VA = "0x4E5D0C0", Slot = "6")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}
}
