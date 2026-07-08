using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002F2")]
[ComVisible(true)]
public sealed class RijndaelManaged : Rijndael
{
	[Token(Token = "0x600199E")]
	[Address(RVA = "0x4E51A70", Offset = "0x4E51A70", VA = "0x4E51A70")]
	public RijndaelManaged()
	{
	}

	[Token(Token = "0x600199F")]
	[Address(RVA = "0x4E51DE0", Offset = "0x4E51DE0", VA = "0x4E51DE0", Slot = "23")]
	public override ICryptoTransform CreateEncryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x60019A0")]
	[Address(RVA = "0x4E51F20", Offset = "0x4E51F20", VA = "0x4E51F20", Slot = "25")]
	public override ICryptoTransform CreateDecryptor(byte[] rgbKey, byte[] rgbIV)
	{
		return null;
	}

	[Token(Token = "0x60019A1")]
	[Address(RVA = "0x4E51F40", Offset = "0x4E51F40", VA = "0x4E51F40", Slot = "26")]
	public override void GenerateKey()
	{
	}

	[Token(Token = "0x60019A2")]
	[Address(RVA = "0x4E51FB0", Offset = "0x4E51FB0", VA = "0x4E51FB0", Slot = "27")]
	public override void GenerateIV()
	{
	}

	[Token(Token = "0x60019A3")]
	[Address(RVA = "0x4E51E00", Offset = "0x4E51E00", VA = "0x4E51E00")]
	private ICryptoTransform NewEncryptor(byte[] rgbKey, CipherMode mode, byte[] rgbIV, int feedbackSize, System.Security.Cryptography.RijndaelManagedTransformMode encryptMode)
	{
		return null;
	}
}
