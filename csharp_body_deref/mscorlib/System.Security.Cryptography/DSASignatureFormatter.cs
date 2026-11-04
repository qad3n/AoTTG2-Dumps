// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.DSASignatureFormatter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x200030D")]
[ComVisible(true)]
public class DSASignatureFormatter : AsymmetricSignatureFormatter
{
	[Token(Token = "0x4000D15")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private DSA _dsaKey;

	[Token(Token = "0x4000D16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string _oid;

	[Token(Token = "0x6001978")]
	[Address(RVA = "0x19A5650", Offset = "0x19A3C50", VA = "0x1819A5650")]
	public DSASignatureFormatter()
	{
	}

	[Token(Token = "0x6001979")]
	[Address(RVA = "0x19A56D0", Offset = "0x19A3CD0", VA = "0x1819A56D0")]
	public DSASignatureFormatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x600197A")]
	[Address(RVA = "0x19A5540", Offset = "0x19A3B40", VA = "0x1819A5540", Slot = "4")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x600197B")]
	[Address(RVA = "0x19A5480", Offset = "0x19A3A80", VA = "0x1819A5480", Slot = "5")]
	public override void SetHashAlgorithm(string strName)
	{
	}

	[Token(Token = "0x600197C")]
	[Address(RVA = "0x19A5340", Offset = "0x19A3940", VA = "0x1819A5340", Slot = "7")]
	public override byte[] CreateSignature(byte[] rgbHash)
	{
		return null;
	}
}
