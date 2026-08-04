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

[Token(Token = "0x2000324")]
public sealed class PbeParameters
{
	[Token(Token = "0x17000306")]
	public PbeEncryptionAlgorithm EncryptionAlgorithm
	{
		[Token(Token = "0x6001B82")]
		[Address(RVA = "0x3B589D0", Offset = "0x3B589D0", VA = "0x3B589D0")]
		[CompilerGenerated]
		get
		{
			return default(PbeEncryptionAlgorithm);
		}
	}

	[Token(Token = "0x17000307")]
	public HashAlgorithmName HashAlgorithm
	{
		[Token(Token = "0x6001B83")]
		[Address(RVA = "0x3B589E0", Offset = "0x3B589E0", VA = "0x3B589E0")]
		[CompilerGenerated]
		get
		{
			return default(HashAlgorithmName);
		}
	}

	[Token(Token = "0x17000308")]
	public int IterationCount
	{
		[Token(Token = "0x6001B84")]
		[Address(RVA = "0x3B589F0", Offset = "0x3B589F0", VA = "0x3B589F0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001B85")]
	[Address(RVA = "0x3B58A00", Offset = "0x3B58A00", VA = "0x3B58A00")]
	public PbeParameters(PbeEncryptionAlgorithm encryptionAlgorithm, HashAlgorithmName hashAlgorithm, int iterationCount)
	{
	}
}
