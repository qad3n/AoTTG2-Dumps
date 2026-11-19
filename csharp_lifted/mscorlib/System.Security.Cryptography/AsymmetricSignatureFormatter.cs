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

[Token(Token = "0x20002D5")]
[ComVisible(true)]
public abstract class AsymmetricSignatureFormatter
{
	[Token(Token = "0x60018E2")]
	[Address(RVA = "0x5336830", Offset = "0x5335830", VA = "0x5336830")]
	protected AsymmetricSignatureFormatter()
	{
	}

	[Token(Token = "0x60018E3")]
	public abstract void SetKey(AsymmetricAlgorithm key);

	[Token(Token = "0x60018E4")]
	public abstract void SetHashAlgorithm(string strName);

	[Token(Token = "0x60018E5")]
	[Address(RVA = "0x5336840", Offset = "0x5335840", VA = "0x5336840", Slot = "6")]
	public virtual byte[] CreateSignature(HashAlgorithm hash)
	{
		return null;
	}

	[Token(Token = "0x60018E6")]
	public abstract byte[] CreateSignature(byte[] rgbHash);
}
