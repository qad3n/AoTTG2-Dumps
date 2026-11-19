// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.AsymmetricSignatureDeformatter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002D4")]
[ComVisible(true)]
public abstract class AsymmetricSignatureDeformatter
{
	[Token(Token = "0x60018DD")]
	[Address(RVA = "0x5336760", Offset = "0x5335760", VA = "0x5336760")]
	protected AsymmetricSignatureDeformatter()
	{
	}

	[Token(Token = "0x60018DE")]
	public abstract void SetKey(AsymmetricAlgorithm key);

	[Token(Token = "0x60018DF")]
	public abstract void SetHashAlgorithm(string strName);

	[Token(Token = "0x60018E0")]
	[Address(RVA = "0x5336770", Offset = "0x5335770", VA = "0x5336770", Slot = "6")]
	public virtual bool VerifySignature(HashAlgorithm hash, byte[] rgbSignature)
	{
		return default(bool);
	}

	[Token(Token = "0x60018E1")]
	public abstract bool VerifySignature(byte[] rgbHash, byte[] rgbSignature);
}
