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
		[Address(RVA = "0x3B42720", Offset = "0x3B42720", VA = "0x3B42720", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A25")]
		[Address(RVA = "0x3B42730", Offset = "0x3B42730", VA = "0x3B42730", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170002CE")]
	private bool OverridesDecrypt
	{
		[Token(Token = "0x6001A28")]
		[Address(RVA = "0x3B42920", Offset = "0x3B42920", VA = "0x3B42920")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001A22")]
	[Address(RVA = "0x3B42710", Offset = "0x3B42710", VA = "0x3B42710")]
	public RSAOAEPKeyExchangeDeformatter()
	{
	}

	[Token(Token = "0x6001A23")]
	[Address(RVA = "0x3B40E80", Offset = "0x3B40E80", VA = "0x3B40E80")]
	public RSAOAEPKeyExchangeDeformatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001A26")]
	[Address(RVA = "0x3B42740", Offset = "0x3B42740", VA = "0x3B42740", Slot = "7")]
	public override byte[] DecryptKeyExchange(byte[] rgbData)
	{
		return null;
	}

	[Token(Token = "0x6001A27")]
	[Address(RVA = "0x3B42BE0", Offset = "0x3B42BE0", VA = "0x3B42BE0", Slot = "6")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}
}
