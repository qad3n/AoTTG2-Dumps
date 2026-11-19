// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RSAPKCS1SignatureFormatter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000324")]
[ComVisible(true)]
public class RSAPKCS1SignatureFormatter : AsymmetricSignatureFormatter
{
	[Token(Token = "0x4000D72")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private RSA rsa;

	[Token(Token = "0x4000D73")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string hash;

	[Token(Token = "0x6001B9C")]
	[Address(RVA = "0x535F820", Offset = "0x535E820", VA = "0x535F820")]
	public RSAPKCS1SignatureFormatter()
	{
	}

	[Token(Token = "0x6001B9D")]
	[Address(RVA = "0x535F830", Offset = "0x535E830", VA = "0x535F830")]
	public RSAPKCS1SignatureFormatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001B9E")]
	[Address(RVA = "0x535F870", Offset = "0x535E870", VA = "0x535F870", Slot = "7")]
	public override byte[] CreateSignature(byte[] rgbHash)
	{
		return null;
	}

	[Token(Token = "0x6001B9F")]
	[Address(RVA = "0x535F970", Offset = "0x535E970", VA = "0x535F970", Slot = "5")]
	public override void SetHashAlgorithm(string strName)
	{
	}

	[Token(Token = "0x6001BA0")]
	[Address(RVA = "0x535F9D0", Offset = "0x535E9D0", VA = "0x535F9D0", Slot = "4")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}
}
