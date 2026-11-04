// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RSAPKCS1SignatureDescription
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000336")]
internal abstract class RSAPKCS1SignatureDescription : SignatureDescription
{
	[Token(Token = "0x4000D90")]
	[FieldOffset(Offset = "0x30")]
	private string _hashAlgorithm;

	[Token(Token = "0x6001B03")]
	[Address(RVA = "0x19C6260", Offset = "0x19C4860", VA = "0x1819C6260")]
	protected RSAPKCS1SignatureDescription(string hashAlgorithm, string digestAlgorithm)
	{
	}

	[Token(Token = "0x6001B04")]
	[Address(RVA = "0x19C6020", Offset = "0x19C4620", VA = "0x1819C6020", Slot = "4")]
	public sealed override AsymmetricSignatureDeformatter CreateDeformatter(AsymmetricAlgorithm key)
	{
		return null;
	}

	[Token(Token = "0x6001B05")]
	[Address(RVA = "0x19C6140", Offset = "0x19C4740", VA = "0x1819C6140", Slot = "5")]
	public sealed override AsymmetricSignatureFormatter CreateFormatter(AsymmetricAlgorithm key)
	{
		return null;
	}
}
