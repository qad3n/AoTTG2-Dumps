// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.PbeParameters
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000353")]
public sealed class PbeParameters
{
	[Token(Token = "0x17000308")]
	public PbeEncryptionAlgorithm EncryptionAlgorithm
	{
		[Token(Token = "0x6001BEA")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(PbeEncryptionAlgorithm);
		}
	}

	[Token(Token = "0x17000309")]
	public HashAlgorithmName HashAlgorithm
	{
		[Token(Token = "0x6001BEB")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x1700030A")]
	public int IterationCount
	{
		[Token(Token = "0x6001BEC")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001BED")]
	[Address(RVA = "0x19DB450", Offset = "0x19D9A50", VA = "0x1819DB450")]
	public PbeParameters(PbeEncryptionAlgorithm encryptionAlgorithm, HashAlgorithmName hashAlgorithm, int iterationCount)
	{
	}
}
