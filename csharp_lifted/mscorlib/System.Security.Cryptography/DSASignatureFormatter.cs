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

[Token(Token = "0x20002E6")]
[ComVisible(true)]
public class DSASignatureFormatter : AsymmetricSignatureFormatter
{
	[Token(Token = "0x4000C75")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private DSA _dsaKey;

	[Token(Token = "0x4000C76")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string _oid;

	[Token(Token = "0x6001955")]
	[Address(RVA = "0x533B780", Offset = "0x533A780", VA = "0x533B780")]
	public DSASignatureFormatter()
	{
	}

	[Token(Token = "0x6001956")]
	[Address(RVA = "0x533B800", Offset = "0x533A800", VA = "0x533B800")]
	public DSASignatureFormatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001957")]
	[Address(RVA = "0x533B950", Offset = "0x533A950", VA = "0x533B950", Slot = "4")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001958")]
	[Address(RVA = "0x533BA30", Offset = "0x533AA30", VA = "0x533BA30", Slot = "5")]
	public override void SetHashAlgorithm(string strName)
	{
	}

	[Token(Token = "0x6001959")]
	[Address(RVA = "0x533BAF0", Offset = "0x533AAF0", VA = "0x533BAF0", Slot = "7")]
	public override byte[] CreateSignature(byte[] rgbHash)
	{
		return null;
	}
}
