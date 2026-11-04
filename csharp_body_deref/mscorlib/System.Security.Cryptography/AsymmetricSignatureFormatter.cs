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

[Token(Token = "0x20002FC")]
[ComVisible(true)]
public abstract class AsymmetricSignatureFormatter
{
	[Token(Token = "0x6001905")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected AsymmetricSignatureFormatter()
	{
	}

	[Token(Token = "0x6001906")]
	public abstract void SetKey(AsymmetricAlgorithm key);

	[Token(Token = "0x6001907")]
	public abstract void SetHashAlgorithm(string strName);

	[Token(Token = "0x6001908")]
	[Address(RVA = "0x19A3100", Offset = "0x19A1700", VA = "0x1819A3100", Slot = "6")]
	public virtual byte[] CreateSignature(HashAlgorithm hash)
	{
		return null;
	}

	[Token(Token = "0x6001909")]
	public abstract byte[] CreateSignature(byte[] rgbHash);
}
