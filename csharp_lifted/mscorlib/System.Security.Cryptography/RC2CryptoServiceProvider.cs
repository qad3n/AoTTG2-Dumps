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

[Token(Token = "0x20002F8")]
[ComVisible(true)]
public sealed class RC2CryptoServiceProvider : RC2
{
	[Token(Token = "0x4000C98")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private bool m_use40bitSalt;

	[Token(Token = "0x4000C99")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static KeySizes[] s_legalKeySizes;

	[Token(Token = "0x170002BE")]
	public override int EffectiveKeySize
	{
		[Token(Token = "0x60019D6")]
		[Address(RVA = "0x5340C60", Offset = "0x533FC60", VA = "0x5340C60", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60019D7")]
		[Address(RVA = "0x5340C70", Offset = "0x533FC70", VA = "0x5340C70", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x170002BF")]
	[ComVisible(false)]
	public bool UseSalt
	{
		[Token(Token = "0x60019D8")]
		[Address(RVA = "0x5340CE0", Offset = "0x533FCE0", VA = "0x5340CE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60019D9")]
		[Address(RVA = "0x5340CF0", Offset = "0x533FCF0", VA = "0x5340CF0")]
		set
		{
		}
	}

	[Token(Token = "0x60019D5")]
	[Address(RVA = "0x5340830", Offset = "0x533F830", VA = "0x5340830")]
	public RC2CryptoServiceProvider()
	{
	}

	[Token(Token = "0x60019DA")]
	[Address(RVA = "0x5340D00", Offset = "0x533FD00", VA = "0x5340D00", Slot = "23")]
	public override ICryptoTransform CreateEncryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x60019DB")]
	[Address(RVA = "0x5340DC0", Offset = "0x533FDC0", VA = "0x5340DC0", Slot = "25")]
	public override ICryptoTransform CreateDecryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x60019DC")]
	[Address(RVA = "0x5340E80", Offset = "0x533FE80", VA = "0x5340E80", Slot = "26")]
	public override void GenerateKey()
	{
	}

	[Token(Token = "0x60019DD")]
	[Address(RVA = "0x5340F20", Offset = "0x533FF20", VA = "0x5340F20", Slot = "27")]
	public override void GenerateIV()
	{
	}
}
