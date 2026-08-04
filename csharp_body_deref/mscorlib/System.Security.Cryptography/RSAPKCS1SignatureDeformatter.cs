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
	[Address(RVA = "0x3B55E10", Offset = "0x3B55E10", VA = "0x3B55E10")]
	public RSAPKCS1SignatureDeformatter()
	{
	}

	[Token(Token = "0x6001B53")]
	[Address(RVA = "0x3B55E20", Offset = "0x3B55E20", VA = "0x3B55E20")]
	public RSAPKCS1SignatureDeformatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001B54")]
	[Address(RVA = "0x3B55E60", Offset = "0x3B55E60", VA = "0x3B55E60", Slot = "5")]
	public override void SetHashAlgorithm(string strName)
	{
	}

	[Token(Token = "0x6001B55")]
	[Address(RVA = "0x3B55EC0", Offset = "0x3B55EC0", VA = "0x3B55EC0", Slot = "4")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001B56")]
	[Address(RVA = "0x3B55FA0", Offset = "0x3B55FA0", VA = "0x3B55FA0", Slot = "7")]
	public override bool VerifySignature(byte[] rgbHash, byte[] rgbSignature)
	{
		return default(bool);
	}
}
