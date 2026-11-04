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

[Token(Token = "0x200030C")]
[ComVisible(true)]
public class DSASignatureDeformatter : AsymmetricSignatureDeformatter
{
	[Token(Token = "0x4000D13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private DSA _dsaKey;

	[Token(Token = "0x4000D14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string _oid;

	[Token(Token = "0x6001973")]
	[Address(RVA = "0x19A52C0", Offset = "0x19A38C0", VA = "0x1819A52C0")]
	public DSASignatureDeformatter()
	{
	}

	[Token(Token = "0x6001974")]
	[Address(RVA = "0x19A5150", Offset = "0x19A3750", VA = "0x1819A5150")]
	public DSASignatureDeformatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001975")]
	[Address(RVA = "0x19A4F10", Offset = "0x19A3510", VA = "0x1819A4F10", Slot = "4")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001976")]
	[Address(RVA = "0x19A4E50", Offset = "0x19A3450", VA = "0x1819A4E50", Slot = "5")]
	public override void SetHashAlgorithm(string strName)
	{
	}

	[Token(Token = "0x6001977")]
	[Address(RVA = "0x19A5020", Offset = "0x19A3620", VA = "0x1819A5020", Slot = "7")]
	public override bool VerifySignature(byte[] rgbHash, byte[] rgbSignature)
	{
		return default(bool);
	}
}
