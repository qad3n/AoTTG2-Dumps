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
		[Address(RVA = "0x4E72EB0", Offset = "0x4E72EB0", VA = "0x4E72EB0")]
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
		[Address(RVA = "0x4E72EC0", Offset = "0x4E72EC0", VA = "0x4E72EC0")]
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
		[Address(RVA = "0x4E72ED0", Offset = "0x4E72ED0", VA = "0x4E72ED0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001B85")]
	[Address(RVA = "0x4E72EE0", Offset = "0x4E72EE0", VA = "0x4E72EE0")]
	public PbeParameters(PbeEncryptionAlgorithm encryptionAlgorithm, HashAlgorithmName hashAlgorithm, int iterationCount)
	{
	}
}
