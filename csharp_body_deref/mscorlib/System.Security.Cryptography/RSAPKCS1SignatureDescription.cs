using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000307")]
internal abstract class RSAPKCS1SignatureDescription : SignatureDescription
{
	[Token(Token = "0x4000D83")]
	[FieldOffset(Offset = "0x30")]
	private string _hashAlgorithm;

	[Token(Token = "0x6001A9B")]
	[Address(RVA = "0x4E64390", Offset = "0x4E64390", VA = "0x4E64390")]
	protected RSAPKCS1SignatureDescription(string hashAlgorithm, string digestAlgorithm)
	{
	}

	[Token(Token = "0x6001A9C")]
	[Address(RVA = "0x4E64450", Offset = "0x4E64450", VA = "0x4E64450", Slot = "4")]
	public sealed override AsymmetricSignatureDeformatter CreateDeformatter(AsymmetricAlgorithm key)
	{
		return null;
	}

	[Token(Token = "0x6001A9D")]
	[Address(RVA = "0x4E64490", Offset = "0x4E64490", VA = "0x4E64490", Slot = "5")]
	public sealed override AsymmetricSignatureFormatter CreateFormatter(AsymmetricAlgorithm key)
	{
		return null;
	}
}
