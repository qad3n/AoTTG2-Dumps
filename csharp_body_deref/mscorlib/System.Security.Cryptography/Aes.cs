using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002C8")]
[TypeForwardedFrom("System.Core, Version=2.0.5.0, Culture=Neutral, PublicKeyToken=7cec85d7bea7798e")]
public abstract class Aes : SymmetricAlgorithm
{
	[Token(Token = "0x4000CCE")]
	[FieldOffset(Offset = "0x0")]
	private static KeySizes[] s_legalBlockSizes;

	[Token(Token = "0x4000CCF")]
	[FieldOffset(Offset = "0x8")]
	private static KeySizes[] s_legalKeySizes;

	[Token(Token = "0x6001871")]
	[Address(RVA = "0x4E46110", Offset = "0x4E46110", VA = "0x4E46110")]
	protected Aes()
	{
	}

	[Token(Token = "0x6001872")]
	[Address(RVA = "0x4E461B0", Offset = "0x4E461B0", VA = "0x4E461B0")]
	public new static Aes Create()
	{
		return null;
	}

	[Token(Token = "0x6001873")]
	[Address(RVA = "0x4E46220", Offset = "0x4E46220", VA = "0x4E46220")]
	public new static Aes Create(string algorithmName)
	{
		return null;
	}
}
