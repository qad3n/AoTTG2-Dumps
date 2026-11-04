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

[Token(Token = "0x200032C")]
[ComVisible(true)]
public class RSAPKCS1KeyExchangeFormatter : AsymmetricKeyExchangeFormatter
{
	[Token(Token = "0x4000D76")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private RandomNumberGenerator RngValue;

	[Token(Token = "0x4000D77")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private RSA _rsaKey;

	[Token(Token = "0x4000D78")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private bool? _rsaOverridesEncrypt;

	[Token(Token = "0x170002D8")]
	public override string Parameters
	{
		[Token(Token = "0x6001AA7")]
		[Address(RVA = "0x19C5EB0", Offset = "0x19C44B0", VA = "0x1819C5EB0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D9")]
	public RandomNumberGenerator Rng
	{
		[Token(Token = "0x6001AA8")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001AA9")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x170002DA")]
	private bool OverridesEncrypt
	{
		[Token(Token = "0x6001AAD")]
		[Address(RVA = "0x19C5CB0", Offset = "0x19C42B0", VA = "0x1819C5CB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001AA5")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public RSAPKCS1KeyExchangeFormatter()
	{
	}

	[Token(Token = "0x6001AA6")]
	[Address(RVA = "0x19C5BA0", Offset = "0x19C41A0", VA = "0x1819C5BA0")]
	public RSAPKCS1KeyExchangeFormatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001AAA")]
	[Address(RVA = "0x19C5A90", Offset = "0x19C4090", VA = "0x1819C5A90", Slot = "5")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001AAB")]
	[Address(RVA = "0x19C5760", Offset = "0x19C3D60", VA = "0x1819C5760", Slot = "6")]
	public override byte[] CreateKeyExchange(byte[] rgbData)
	{
		return null;
	}

	[Token(Token = "0x6001AAC")]
	[Address(RVA = "0x19C4B60", Offset = "0x19C3160", VA = "0x1819C4B60", Slot = "7")]
	public override byte[] CreateKeyExchange(byte[] rgbData, Type symAlgType)
	{
		return null;
	}
}
