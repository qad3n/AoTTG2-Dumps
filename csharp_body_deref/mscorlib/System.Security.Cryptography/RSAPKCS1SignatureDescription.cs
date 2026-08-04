// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RSAPKCS1SignatureDescription
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000307")]
internal abstract class RSAPKCS1SignatureDescription : SignatureDescription
{
	[Token(Token = "0x4000D83")]
	[FieldOffset(Offset = "0x30")]
	private string _hashAlgorithm;

	[Token(Token = "0x6001A9B")]
	[Address(RVA = "0x3B49EB0", Offset = "0x3B49EB0", VA = "0x3B49EB0")]
	protected RSAPKCS1SignatureDescription(string hashAlgorithm, string digestAlgorithm)
	{
	}

	[Token(Token = "0x6001A9C")]
	[Address(RVA = "0x3B49F70", Offset = "0x3B49F70", VA = "0x3B49F70", Slot = "4")]
	public sealed override AsymmetricSignatureDeformatter CreateDeformatter(AsymmetricAlgorithm key)
	{
		return null;
	}

	[Token(Token = "0x6001A9D")]
	[Address(RVA = "0x3B49FB0", Offset = "0x3B49FB0", VA = "0x3B49FB0", Slot = "5")]
	public sealed override AsymmetricSignatureFormatter CreateFormatter(AsymmetricAlgorithm key)
	{
		return null;
	}
}
