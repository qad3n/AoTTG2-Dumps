// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.DSASignatureDeformatter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002DD")]
[ComVisible(true)]
public class DSASignatureDeformatter : AsymmetricSignatureDeformatter
{
	[Token(Token = "0x4000D06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private DSA _dsaKey;

	[Token(Token = "0x4000D07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string _oid;

	[Token(Token = "0x600190B")]
	[Address(RVA = "0x3B313C0", Offset = "0x3B313C0", VA = "0x3B313C0")]
	public DSASignatureDeformatter()
	{
	}

	[Token(Token = "0x600190C")]
	[Address(RVA = "0x3B31440", Offset = "0x3B31440", VA = "0x3B31440")]
	public DSASignatureDeformatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x600190D")]
	[Address(RVA = "0x3B31590", Offset = "0x3B31590", VA = "0x3B31590", Slot = "4")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x600190E")]
	[Address(RVA = "0x3B31670", Offset = "0x3B31670", VA = "0x3B31670", Slot = "5")]
	public override void SetHashAlgorithm(string strName)
	{
	}

	[Token(Token = "0x600190F")]
	[Address(RVA = "0x3B31730", Offset = "0x3B31730", VA = "0x3B31730", Slot = "7")]
	public override bool VerifySignature(byte[] rgbHash, byte[] rgbSignature)
	{
		return default(bool);
	}
}
