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
		[Address(RVA = "0x3B42DB0", Offset = "0x3B42DB0", VA = "0x3B42DB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A2C")]
		[Address(RVA = "0x3B42E20", Offset = "0x3B42E20", VA = "0x3B42E20")]
		set
		{
		}
	}

	[Token(Token = "0x170002D0")]
	public override string Parameters
	{
		[Token(Token = "0x6001A2D")]
		[Address(RVA = "0x3B42EE0", Offset = "0x3B42EE0", VA = "0x3B42EE0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002D1")]
	public RandomNumberGenerator Rng
	{
		[Token(Token = "0x6001A2E")]
		[Address(RVA = "0x3B42EF0", Offset = "0x3B42EF0", VA = "0x3B42EF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A2F")]
		[Address(RVA = "0x3B42F00", Offset = "0x3B42F00", VA = "0x3B42F00")]
		set
		{
		}
	}

	[Token(Token = "0x170002D2")]
	private bool OverridesEncrypt
	{
		[Token(Token = "0x6001A33")]
		[Address(RVA = "0x3B43260", Offset = "0x3B43260", VA = "0x3B43260")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001A29")]
	[Address(RVA = "0x3B42DA0", Offset = "0x3B42DA0", VA = "0x3B42DA0")]
	public RSAOAEPKeyExchangeFormatter()
	{
	}

	[Token(Token = "0x6001A2A")]
	[Address(RVA = "0x3B410F0", Offset = "0x3B410F0", VA = "0x3B410F0")]
	public RSAOAEPKeyExchangeFormatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001A30")]
	[Address(RVA = "0x3B42F10", Offset = "0x3B42F10", VA = "0x3B42F10", Slot = "5")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001A31")]
	[Address(RVA = "0x3B42FF0", Offset = "0x3B42FF0", VA = "0x3B42FF0", Slot = "6")]
	public override byte[] CreateKeyExchange(byte[] rgbData)
	{
		return null;
	}

	[Token(Token = "0x6001A32")]
	[Address(RVA = "0x3B434D0", Offset = "0x3B434D0", VA = "0x3B434D0", Slot = "7")]
	public override byte[] CreateKeyExchange(byte[] rgbData, Type symAlgType)
	{
		return null;
	}
}
