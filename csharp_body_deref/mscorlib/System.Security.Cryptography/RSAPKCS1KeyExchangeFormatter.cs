// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3B43A30", Offset = "0x3B43A30", VA = "0x3B43A30", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D7")]
	public RandomNumberGenerator Rng
	{
		[Token(Token = "0x6001A40")]
		[Address(RVA = "0x3B43A60", Offset = "0x3B43A60", VA = "0x3B43A60")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A41")]
		[Address(RVA = "0x3B43A70", Offset = "0x3B43A70", VA = "0x3B43A70")]
		set
		{
		}
	}

	[Token(Token = "0x170002D8")]
	private bool OverridesEncrypt
	{
		[Token(Token = "0x6001A45")]
		[Address(RVA = "0x3B43ED0", Offset = "0x3B43ED0", VA = "0x3B43ED0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001A3D")]
	[Address(RVA = "0x3B43A20", Offset = "0x3B43A20", VA = "0x3B43A20")]
	public RSAPKCS1KeyExchangeFormatter()
	{
	}

	[Token(Token = "0x6001A3E")]
	[Address(RVA = "0x3B411E0", Offset = "0x3B411E0", VA = "0x3B411E0")]
	public RSAPKCS1KeyExchangeFormatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001A42")]
	[Address(RVA = "0x3B43A80", Offset = "0x3B43A80", VA = "0x3B43A80", Slot = "5")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001A43")]
	[Address(RVA = "0x3B43B60", Offset = "0x3B43B60", VA = "0x3B43B60", Slot = "6")]
	public override byte[] CreateKeyExchange(byte[] rgbData)
	{
		return null;
	}

	[Token(Token = "0x6001A44")]
	[Address(RVA = "0x3B440D0", Offset = "0x3B440D0", VA = "0x3B440D0", Slot = "7")]
	public override byte[] CreateKeyExchange(byte[] rgbData, Type symAlgType)
	{
		return null;
	}
}
