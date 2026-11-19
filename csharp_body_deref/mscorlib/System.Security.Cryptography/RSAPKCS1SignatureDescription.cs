// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RSAPKCS1SignatureDescription
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x200030F")]
internal abstract class RSAPKCS1SignatureDescription : SignatureDescription
{
	[Token(Token = "0x4000CF0")]
	[FieldOffset(Offset = "0x30")]
	private string _hashAlgorithm;

	[Token(Token = "0x6001AE0")]
	[Address(RVA = "0x5353710", Offset = "0x5352710", VA = "0x5353710")]
	protected RSAPKCS1SignatureDescription(string hashAlgorithm, string digestAlgorithm)
	{
	}

	[Token(Token = "0x6001AE1")]
	[Address(RVA = "0x53537D0", Offset = "0x53527D0", VA = "0x53537D0", Slot = "4")]
	public sealed override AsymmetricSignatureDeformatter CreateDeformatter(AsymmetricAlgorithm key)
	{
		return null;
	}

	[Token(Token = "0x6001AE2")]
	[Address(RVA = "0x5353810", Offset = "0x5352810", VA = "0x5353810", Slot = "5")]
	public sealed override AsymmetricSignatureFormatter CreateFormatter(AsymmetricAlgorithm key)
	{
		return null;
	}
}
