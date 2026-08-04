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

[Token(Token = "0x20002DE")]
[ComVisible(true)]
public class DSASignatureFormatter : AsymmetricSignatureFormatter
{
	[Token(Token = "0x4000D08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private DSA _dsaKey;

	[Token(Token = "0x4000D09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string _oid;

	[Token(Token = "0x6001910")]
	[Address(RVA = "0x3B31810", Offset = "0x3B31810", VA = "0x3B31810")]
	public DSASignatureFormatter()
	{
	}

	[Token(Token = "0x6001911")]
	[Address(RVA = "0x3B31890", Offset = "0x3B31890", VA = "0x3B31890")]
	public DSASignatureFormatter(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001912")]
	[Address(RVA = "0x3B319E0", Offset = "0x3B319E0", VA = "0x3B319E0", Slot = "4")]
	public override void SetKey(AsymmetricAlgorithm key)
	{
	}

	[Token(Token = "0x6001913")]
	[Address(RVA = "0x3B31AC0", Offset = "0x3B31AC0", VA = "0x3B31AC0", Slot = "5")]
	public override void SetHashAlgorithm(string strName)
	{
	}

	[Token(Token = "0x6001914")]
	[Address(RVA = "0x3B31B80", Offset = "0x3B31B80", VA = "0x3B31B80", Slot = "7")]
	public override byte[] CreateSignature(byte[] rgbHash)
	{
		return null;
	}
}
