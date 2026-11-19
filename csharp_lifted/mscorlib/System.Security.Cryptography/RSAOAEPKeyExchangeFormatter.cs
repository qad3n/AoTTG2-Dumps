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

[Token(Token = "0x2000303")]
[ComVisible(true)]
public class RSAOAEPKeyExchangeFormatter : AsymmetricKeyExchangeFormatter
{
	[Token(Token = "0x4000CCF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private byte[] ParameterValue;

	[Token(Token = "0x4000CD0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private RSA _rsaKey;

	[Token(Token = "0x4000CD1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private bool? _rsaOverridesEncrypt;

	[Token(Token = "0x4000CD2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private RandomNumberGenerator RngValue;

	[Token(Token = "0x170002D0")]
	public byte[] Parameter
	{
		[Token(Token = "0x6001A70")]
		[Address(RVA = "0x534C5A0", Offset = "0x534B5A0", VA = "0x534C5A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A71")]
		[Address(RVA = "0x534C610", Offset = "0x534B610", VA = "0x534C610")]
		set
		{
		}
	}

	[Token(Token = "0x170002D1")]
	public override string Parameters
	{
		[Token(Token = "0x6001A72")]
		[Address(RVA = "0x534C6D0", Offset = "0x534B6D0", VA = "0x534C6D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D2")]
	public RandomNumberGenerator Rng
	{
		[Token(Token = "0x6001A73")]
		[Address(RVA = "0x534C6E0", Offset = "0x534B6E0", VA = "0x534C6E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A74")]
		[Address(RVA = "0x534C6F0", Offset = "0x534B6F0", VA = "0x534C6F0")]
		set
		{
		}
	}

	[Token(Token = "0x170002D3")]
	private bool OverridesEncrypt
	{
		[Token(Token = "0x6001A78")]
		[Address(RVA = "0x534CA50", Offset = "0x534BA50", VA = "0x534CA50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001A6E")]
	[Address(RVA = "0x534C590", Offset = "0x534B590", VA = "0x534C590")]
	public RSAOAEPKeyExchangeFormatter()
	{
	}

	[Token(Token = "0x6001A6F")]
	[Address(RVA = "0x534AA20", Offset = "0x5349A20", VA = "0x534AA20")]
	public RSAOAEPKeyExchangeFormatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001A75")]
	[Address(RVA = "0x534C700", Offset = "0x534B700", VA = "0x534C700", Slot = "5")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001A76")]
	[Address(RVA = "0x534C7E0", Offset = "0x534B7E0", VA = "0x534C7E0", Slot = "6")]
	public override byte[] CreateKeyExchange(byte[] rgbData)
	{
		return null;
	}

	[Token(Token = "0x6001A77")]
	[Address(RVA = "0x534CCC0", Offset = "0x534BCC0", VA = "0x534CCC0", Slot = "7")]
	public override byte[] CreateKeyExchange(byte[] rgbData, Type symAlgType)
	{
		return null;
	}
}
