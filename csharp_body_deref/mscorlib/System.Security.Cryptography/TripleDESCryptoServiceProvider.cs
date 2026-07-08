using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x200030F")]
[ComVisible(true)]
public sealed class TripleDESCryptoServiceProvider : TripleDES
{
	[Token(Token = "0x6001AC9")]
	[Address(RVA = "0x4E65A50", Offset = "0x4E65A50", VA = "0x4E65A50")]
	public TripleDESCryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001ACA")]
	[Address(RVA = "0x4E65FB0", Offset = "0x4E65FB0", VA = "0x4E65FB0", Slot = "23")]
	public override ICryptoTransform CreateEncryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x6001ACB")]
	[Address(RVA = "0x4E660D0", Offset = "0x4E660D0", VA = "0x4E660D0", Slot = "25")]
	public override ICryptoTransform CreateDecryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x6001ACC")]
	[Address(RVA = "0x4E661F0", Offset = "0x4E661F0", VA = "0x4E661F0", Slot = "26")]
	public override void GenerateKey()
	{
	}

	[Token(Token = "0x6001ACD")]
	[Address(RVA = "0x4E66420", Offset = "0x4E66420", VA = "0x4E66420", Slot = "27")]
	public override void GenerateIV()
	{
	}
}
