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

[Token(Token = "0x2000305")]
[ComVisible(true)]
public class RSAPKCS1KeyExchangeFormatter : AsymmetricKeyExchangeFormatter
{
	[Token(Token = "0x4000CD6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private RandomNumberGenerator RngValue;

	[Token(Token = "0x4000CD7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private RSA _rsaKey;

	[Token(Token = "0x4000CD8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private bool? _rsaOverridesEncrypt;

	[Token(Token = "0x170002D7")]
	public override string Parameters
	{
		[Token(Token = "0x6001A84")]
		[Address(RVA = "0x534D220", Offset = "0x534C220", VA = "0x534D220", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D8")]
	public RandomNumberGenerator Rng
	{
		[Token(Token = "0x6001A85")]
		[Address(RVA = "0x534D250", Offset = "0x534C250", VA = "0x534D250")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A86")]
		[Address(RVA = "0x534D260", Offset = "0x534C260", VA = "0x534D260")]
		set
		{
		}
	}

	[Token(Token = "0x170002D9")]
	private bool OverridesEncrypt
	{
		[Token(Token = "0x6001A8A")]
		[Address(RVA = "0x534D6C0", Offset = "0x534C6C0", VA = "0x534D6C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001A82")]
	[Address(RVA = "0x534D210", Offset = "0x534C210", VA = "0x534D210")]
	public RSAPKCS1KeyExchangeFormatter()
	{
	}

	[Token(Token = "0x6001A83")]
	[Address(RVA = "0x534AB10", Offset = "0x5349B10", VA = "0x534AB10")]
	public RSAPKCS1KeyExchangeFormatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001A87")]
	[Address(RVA = "0x534D270", Offset = "0x534C270", VA = "0x534D270", Slot = "5")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001A88")]
	[Address(RVA = "0x534D350", Offset = "0x534C350", VA = "0x534D350", Slot = "6")]
	public override byte[] CreateKeyExchange(byte[] rgbData)
	{
		return null;
	}

	[Token(Token = "0x6001A89")]
	[Address(RVA = "0x534D8C0", Offset = "0x534C8C0", VA = "0x534D8C0", Slot = "7")]
	public override byte[] CreateKeyExchange(byte[] rgbData, Type symAlgType)
	{
		return null;
	}
}
