// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RC2CryptoServiceProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002F0")]
[ComVisible(true)]
public sealed class RC2CryptoServiceProvider : RC2
{
	[Token(Token = "0x4000D2B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private bool m_use40bitSalt;

	[Token(Token = "0x4000D2C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static KeySizes[] s_legalKeySizes;

	[Token(Token = "0x170002BD")]
	public override int EffectiveKeySize
	{
		[Token(Token = "0x6001991")]
		[Address(RVA = "0x3B37060", Offset = "0x3B37060", VA = "0x3B37060", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001992")]
		[Address(RVA = "0x3B37070", Offset = "0x3B37070", VA = "0x3B37070", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x170002BE")]
	[ComVisible(false)]
	public bool UseSalt
	{
		[Token(Token = "0x6001993")]
		[Address(RVA = "0x3B370E0", Offset = "0x3B370E0", VA = "0x3B370E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001994")]
		[Address(RVA = "0x3B370F0", Offset = "0x3B370F0", VA = "0x3B370F0")]
		set
		{
		}
	}

	[Token(Token = "0x6001990")]
	[Address(RVA = "0x3B36C30", Offset = "0x3B36C30", VA = "0x3B36C30")]
	public RC2CryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001995")]
	[Address(RVA = "0x3B37100", Offset = "0x3B37100", VA = "0x3B37100", Slot = "23")]
	public override ICryptoTransform CreateEncryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x6001996")]
	[Address(RVA = "0x3B371C0", Offset = "0x3B371C0", VA = "0x3B371C0", Slot = "25")]
	public override ICryptoTransform CreateDecryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x6001997")]
	[Address(RVA = "0x3B37280", Offset = "0x3B37280", VA = "0x3B37280", Slot = "26")]
	public override void GenerateKey()
	{
	}

	[Token(Token = "0x6001998")]
	[Address(RVA = "0x3B37330", Offset = "0x3B37330", VA = "0x3B37330", Slot = "27")]
	public override void GenerateIV()
	{
	}
}
