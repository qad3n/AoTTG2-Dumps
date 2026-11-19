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

[Token(Token = "0x200032C")]
public sealed class PbeParameters
{
	[Token(Token = "0x17000307")]
	public PbeEncryptionAlgorithm EncryptionAlgorithm
	{
		[Token(Token = "0x6001BC7")]
		[Address(RVA = "0x53626D0", Offset = "0x53616D0", VA = "0x53626D0")]
		[CompilerGenerated]
		get
		{
			return default(PbeEncryptionAlgorithm);
		}
	}

	[Token(Token = "0x17000308")]
	public HashAlgorithmName HashAlgorithm
	{
		[Token(Token = "0x6001BC8")]
		[Address(RVA = "0x53626E0", Offset = "0x53616E0", VA = "0x53626E0")]
		[CompilerGenerated]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x17000309")]
	public int IterationCount
	{
		[Token(Token = "0x6001BC9")]
		[Address(RVA = "0x53626F0", Offset = "0x53616F0", VA = "0x53626F0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001BCA")]
	[Address(RVA = "0x5362700", Offset = "0x5361700", VA = "0x5362700")]
	public PbeParameters(PbeEncryptionAlgorithm encryptionAlgorithm, HashAlgorithmName hashAlgorithm, int iterationCount)
	{
	}
}
