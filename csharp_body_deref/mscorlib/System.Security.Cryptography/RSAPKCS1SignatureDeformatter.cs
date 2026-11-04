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

[Token(Token = "0x200034A")]
[ComVisible(true)]
public class RSAPKCS1SignatureDeformatter : AsymmetricSignatureDeformatter
{
	[Token(Token = "0x4000E10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private RSA rsa;

	[Token(Token = "0x4000E11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string hashName;

	[Token(Token = "0x6001BBA")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public RSAPKCS1SignatureDeformatter()
	{
	}

	[Token(Token = "0x6001BBB")]
	[Address(RVA = "0x19DD8E0", Offset = "0x19DBEE0", VA = "0x1819DD8E0")]
	public RSAPKCS1SignatureDeformatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001BBC")]
	[Address(RVA = "0x19DD570", Offset = "0x19DBB70", VA = "0x1819DD570", Slot = "5")]
	public override void SetHashAlgorithm(string strName)
	{
	}

	[Token(Token = "0x6001BBD")]
	[Address(RVA = "0x19DD5E0", Offset = "0x19DBBE0", VA = "0x1819DD5E0", Slot = "4")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001BBE")]
	[Address(RVA = "0x19DD6F0", Offset = "0x19DBCF0", VA = "0x1819DD6F0", Slot = "7")]
	public override bool VerifySignature(byte[] rgbHash, byte[] rgbSignature)
	{
		return default(bool);
	}
}
