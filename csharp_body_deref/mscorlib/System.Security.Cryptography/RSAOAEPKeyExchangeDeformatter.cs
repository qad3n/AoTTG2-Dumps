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

[Token(Token = "0x2000302")]
[ComVisible(true)]
public class RSAOAEPKeyExchangeDeformatter : AsymmetricKeyExchangeDeformatter
{
	[Token(Token = "0x4000CCD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private RSA _rsaKey;

	[Token(Token = "0x4000CCE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private bool? _rsaOverridesDecrypt;

	[Token(Token = "0x170002CE")]
	public override string Parameters
	{
		[Token(Token = "0x6001A69")]
		[Address(RVA = "0x534BF10", Offset = "0x534AF10", VA = "0x534BF10", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A6A")]
		[Address(RVA = "0x534BF20", Offset = "0x534AF20", VA = "0x534BF20", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170002CF")]
	private bool OverridesDecrypt
	{
		[Token(Token = "0x6001A6D")]
		[Address(RVA = "0x534C110", Offset = "0x534B110", VA = "0x534C110")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001A67")]
	[Address(RVA = "0x534BF00", Offset = "0x534AF00", VA = "0x534BF00")]
	public RSAOAEPKeyExchangeDeformatter()
	{
	}

	[Token(Token = "0x6001A68")]
	[Address(RVA = "0x534A7B0", Offset = "0x53497B0", VA = "0x534A7B0")]
	public RSAOAEPKeyExchangeDeformatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001A6B")]
	[Address(RVA = "0x534BF30", Offset = "0x534AF30", VA = "0x534BF30", Slot = "7")]
	public override byte[] DecryptKeyExchange(byte[] rgbData)
	{
		return null;
	}

	[Token(Token = "0x6001A6C")]
	[Address(RVA = "0x534C3D0", Offset = "0x534B3D0", VA = "0x534C3D0", Slot = "6")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}
}
