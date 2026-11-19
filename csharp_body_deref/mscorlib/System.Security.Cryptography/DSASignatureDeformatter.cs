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

[Token(Token = "0x20002E5")]
[ComVisible(true)]
public class DSASignatureDeformatter : AsymmetricSignatureDeformatter
{
	[Token(Token = "0x4000C73")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private DSA _dsaKey;

	[Token(Token = "0x4000C74")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string _oid;

	[Token(Token = "0x6001950")]
	[Address(RVA = "0x533B330", Offset = "0x533A330", VA = "0x533B330")]
	public DSASignatureDeformatter()
	{
	}

	[Token(Token = "0x6001951")]
	[Address(RVA = "0x533B3B0", Offset = "0x533A3B0", VA = "0x533B3B0")]
	public DSASignatureDeformatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001952")]
	[Address(RVA = "0x533B500", Offset = "0x533A500", VA = "0x533B500", Slot = "4")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001953")]
	[Address(RVA = "0x533B5E0", Offset = "0x533A5E0", VA = "0x533B5E0", Slot = "5")]
	public override void SetHashAlgorithm(string strName)
	{
	}

	[Token(Token = "0x6001954")]
	[Address(RVA = "0x533B6A0", Offset = "0x533A6A0", VA = "0x533B6A0", Slot = "7")]
	public override bool VerifySignature(byte[] rgbHash, byte[] rgbSignature)
	{
		return default(bool);
	}
}
