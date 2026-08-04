// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.AsymmetricSignatureFormatter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002CD")]
[ComVisible(true)]
public abstract class AsymmetricSignatureFormatter
{
	[Token(Token = "0x600189D")]
	[Address(RVA = "0x3B2C800", Offset = "0x3B2C800", VA = "0x3B2C800")]
	protected AsymmetricSignatureFormatter()
	{
	}

	[Token(Token = "0x600189E")]
	public abstract void SetKey(AsymmetricAlgorithm key);

	[Token(Token = "0x600189F")]
	public abstract void SetHashAlgorithm(string strName);

	[Token(Token = "0x60018A0")]
	[Address(RVA = "0x3B2C810", Offset = "0x3B2C810", VA = "0x3B2C810", Slot = "6")]
	public virtual byte[] CreateSignature(HashAlgorithm hash)
	{
		return null;
	}

	[Token(Token = "0x60018A1")]
	public abstract byte[] CreateSignature(byte[] rgbHash);
}
