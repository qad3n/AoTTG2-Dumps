// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000329")]
[ComVisible(true)]
public class RSAOAEPKeyExchangeDeformatter : AsymmetricKeyExchangeDeformatter
{
	[Token(Token = "0x4000D6D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private RSA _rsaKey;

	[Token(Token = "0x4000D6E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private bool? _rsaOverridesDecrypt;

	[Token(Token = "0x170002CF")]
	public override string Parameters
	{
		[Token(Token = "0x6001A8C")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A8D")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170002D0")]
	private bool OverridesDecrypt
	{
		[Token(Token = "0x6001A90")]
		[Address(RVA = "0x19C4740", Offset = "0x19C2D40", VA = "0x1819C4740")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001A8A")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public RSAOAEPKeyExchangeDeformatter()
	{
	}

	[Token(Token = "0x6001A8B")]
	[Address(RVA = "0x19C4630", Offset = "0x19C2C30", VA = "0x1819C4630")]
	public RSAOAEPKeyExchangeDeformatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001A8E")]
	[Address(RVA = "0x19C42D0", Offset = "0x19C28D0", VA = "0x1819C42D0", Slot = "7")]
	public override byte[] DecryptKeyExchange(byte[] rgbData)
	{
		return null;
	}

	[Token(Token = "0x6001A8F")]
	[Address(RVA = "0x19C4520", Offset = "0x19C2B20", VA = "0x1819C4520", Slot = "6")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}
}
