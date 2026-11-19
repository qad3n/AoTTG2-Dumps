// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RSAPKCS1SignatureDeformatter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000323")]
[ComVisible(true)]
public class RSAPKCS1SignatureDeformatter : AsymmetricSignatureDeformatter
{
	[Token(Token = "0x4000D70")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private RSA rsa;

	[Token(Token = "0x4000D71")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string hashName;

	[Token(Token = "0x6001B97")]
	[Address(RVA = "0x535F550", Offset = "0x535E550", VA = "0x535F550")]
	public RSAPKCS1SignatureDeformatter()
	{
	}

	[Token(Token = "0x6001B98")]
	[Address(RVA = "0x535F560", Offset = "0x535E560", VA = "0x535F560")]
	public RSAPKCS1SignatureDeformatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001B99")]
	[Address(RVA = "0x535F5A0", Offset = "0x535E5A0", VA = "0x535F5A0", Slot = "5")]
	public override void SetHashAlgorithm(string strName)
	{
	}

	[Token(Token = "0x6001B9A")]
	[Address(RVA = "0x535F600", Offset = "0x535E600", VA = "0x535F600", Slot = "4")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001B9B")]
	[Address(RVA = "0x535F6E0", Offset = "0x535E6E0", VA = "0x535F6E0", Slot = "7")]
	public override bool VerifySignature(byte[] rgbHash, byte[] rgbSignature)
	{
		return default(bool);
	}
}
