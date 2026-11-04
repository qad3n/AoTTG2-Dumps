// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RSAOAEPKeyExchangeFormatter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x200032A")]
[ComVisible(true)]
public class RSAOAEPKeyExchangeFormatter : AsymmetricKeyExchangeFormatter
{
	[Token(Token = "0x4000D6F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private byte[] ParameterValue;

	[Token(Token = "0x4000D70")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private RSA _rsaKey;

	[Token(Token = "0x4000D71")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private bool? _rsaOverridesEncrypt;

	[Token(Token = "0x4000D72")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private RandomNumberGenerator RngValue;

	[Token(Token = "0x170002D1")]
	public byte[] Parameter
	{
		[Token(Token = "0x6001A93")]
		[Address(RVA = "0x19C4FA0", Offset = "0x19C35A0", VA = "0x1819C4FA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A94")]
		[Address(RVA = "0x19C5020", Offset = "0x19C3620", VA = "0x1819C5020")]
		set
		{
		}
	}

	[Token(Token = "0x170002D2")]
	public override string Parameters
	{
		[Token(Token = "0x6001A95")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D3")]
	public RandomNumberGenerator Rng
	{
		[Token(Token = "0x6001A96")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A97")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		set
		{
		}
	}

	[Token(Token = "0x170002D4")]
	private bool OverridesEncrypt
	{
		[Token(Token = "0x6001A9B")]
		[Address(RVA = "0x19C4DA0", Offset = "0x19C33A0", VA = "0x1819C4DA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001A91")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public RSAOAEPKeyExchangeFormatter()
	{
	}

	[Token(Token = "0x6001A92")]
	[Address(RVA = "0x19C4C90", Offset = "0x19C3290", VA = "0x1819C4C90")]
	public RSAOAEPKeyExchangeFormatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001A98")]
	[Address(RVA = "0x19C4B80", Offset = "0x19C3180", VA = "0x1819C4B80", Slot = "5")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001A99")]
	[Address(RVA = "0x19C4940", Offset = "0x19C2F40", VA = "0x1819C4940", Slot = "6")]
	public override byte[] CreateKeyExchange(byte[] rgbData)
	{
		return null;
	}

	[Token(Token = "0x6001A9A")]
	[Address(RVA = "0x19C4B60", Offset = "0x19C3160", VA = "0x1819C4B60", Slot = "7")]
	public override byte[] CreateKeyExchange(byte[] rgbData, Type symAlgType)
	{
		return null;
	}
}
