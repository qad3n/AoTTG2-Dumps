using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x200031B")]
[ComVisible(true)]
public class RSAPKCS1SignatureDeformatter : AsymmetricSignatureDeformatter
{
	[Token(Token = "0x4000E03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private RSA rsa;

	[Token(Token = "0x4000E04")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string hashName;

	[Token(Token = "0x6001B52")]
	[Address(RVA = "0x4E702F0", Offset = "0x4E702F0", VA = "0x4E702F0")]
	public RSAPKCS1SignatureDeformatter()
	{
	}

	[Token(Token = "0x6001B53")]
	[Address(RVA = "0x4E70300", Offset = "0x4E70300", VA = "0x4E70300")]
	public RSAPKCS1SignatureDeformatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001B54")]
	[Address(RVA = "0x4E70340", Offset = "0x4E70340", VA = "0x4E70340", Slot = "5")]
	public override void SetHashAlgorithm(string strName)
	{
	}

	[Token(Token = "0x6001B55")]
	[Address(RVA = "0x4E703A0", Offset = "0x4E703A0", VA = "0x4E703A0", Slot = "4")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001B56")]
	[Address(RVA = "0x4E70480", Offset = "0x4E70480", VA = "0x4E70480", Slot = "7")]
	public override bool VerifySignature(byte[] rgbHash, byte[] rgbSignature)
	{
		return default(bool);
	}
}
