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
		[Address(RVA = "0x4E51540", Offset = "0x4E51540", VA = "0x4E51540", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001992")]
		[Address(RVA = "0x4E51550", Offset = "0x4E51550", VA = "0x4E51550", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x170002BE")]
	[ComVisible(false)]
	public bool UseSalt
	{
		[Token(Token = "0x6001993")]
		[Address(RVA = "0x4E515C0", Offset = "0x4E515C0", VA = "0x4E515C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001994")]
		[Address(RVA = "0x4E515D0", Offset = "0x4E515D0", VA = "0x4E515D0")]
		set
		{
		}
	}

	[Token(Token = "0x6001990")]
	[Address(RVA = "0x4E51110", Offset = "0x4E51110", VA = "0x4E51110")]
	public RC2CryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001995")]
	[Address(RVA = "0x4E515E0", Offset = "0x4E515E0", VA = "0x4E515E0", Slot = "23")]
	public override ICryptoTransform CreateEncryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x6001996")]
	[Address(RVA = "0x4E516A0", Offset = "0x4E516A0", VA = "0x4E516A0", Slot = "25")]
	public override ICryptoTransform CreateDecryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x6001997")]
	[Address(RVA = "0x4E51760", Offset = "0x4E51760", VA = "0x4E51760", Slot = "26")]
	public override void GenerateKey()
	{
	}

	[Token(Token = "0x6001998")]
	[Address(RVA = "0x4E51810", Offset = "0x4E51810", VA = "0x4E51810", Slot = "27")]
	public override void GenerateIV()
	{
	}
}
