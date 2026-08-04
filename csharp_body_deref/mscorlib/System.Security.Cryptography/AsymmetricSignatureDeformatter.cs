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

[Token(Token = "0x20002CC")]
[ComVisible(true)]
public abstract class AsymmetricSignatureDeformatter
{
	[Token(Token = "0x6001898")]
	[Address(RVA = "0x3B2C730", Offset = "0x3B2C730", VA = "0x3B2C730")]
	protected AsymmetricSignatureDeformatter()
	{
	}

	[Token(Token = "0x6001899")]
	public abstract void SetKey(AsymmetricAlgorithm key);

	[Token(Token = "0x600189A")]
	public abstract void SetHashAlgorithm(string strName);

	[Token(Token = "0x600189B")]
	[Address(RVA = "0x3B2C740", Offset = "0x3B2C740", VA = "0x3B2C740", Slot = "6")]
	public virtual bool VerifySignature(HashAlgorithm hash, byte[] rgbSignature)
	{
		return default(bool);
	}

	[Token(Token = "0x600189C")]
	public abstract bool VerifySignature(byte[] rgbHash, byte[] rgbSignature);
}
