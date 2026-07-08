using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x200031C")]
[ComVisible(true)]
public class RSAPKCS1SignatureFormatter : AsymmetricSignatureFormatter
{
	[Token(Token = "0x4000E05")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private RSA rsa;

	[Token(Token = "0x4000E06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string hash;

	[Token(Token = "0x6001B57")]
	[Address(RVA = "0x4E705C0", Offset = "0x4E705C0", VA = "0x4E705C0")]
	public RSAPKCS1SignatureFormatter()
	{
	}

	[Token(Token = "0x6001B58")]
	[Address(RVA = "0x4E705D0", Offset = "0x4E705D0", VA = "0x4E705D0")]
	public RSAPKCS1SignatureFormatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001B59")]
	[Address(RVA = "0x4E70610", Offset = "0x4E70610", VA = "0x4E70610", Slot = "7")]
	public override byte[] CreateSignature(byte[] rgbHash)
	{
		return null;
	}

	[Token(Token = "0x6001B5A")]
	[Address(RVA = "0x4E70710", Offset = "0x4E70710", VA = "0x4E70710", Slot = "5")]
	public override void SetHashAlgorithm(string strName)
	{
	}

	[Token(Token = "0x6001B5B")]
	[Address(RVA = "0x4E70770", Offset = "0x4E70770", VA = "0x4E70770", Slot = "4")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}
}
