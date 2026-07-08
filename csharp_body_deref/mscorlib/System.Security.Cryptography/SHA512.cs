using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000304")]
[ComVisible(true)]
public abstract class SHA512 : HashAlgorithm
{
	[Token(Token = "0x6001A7A")]
	[Address(RVA = "0x4E62780", Offset = "0x4E62780", VA = "0x4E62780")]
	protected SHA512()
	{
	}

	[Token(Token = "0x6001A7B")]
	[Address(RVA = "0x4E5C3A0", Offset = "0x4E5C3A0", VA = "0x4E5C3A0")]
	public new static SHA512 Create()
	{
		return null;
	}

	[Token(Token = "0x6001A7C")]
	[Address(RVA = "0x4E62880", Offset = "0x4E62880", VA = "0x4E62880")]
	public new static SHA512 Create(string hashName)
	{
		return null;
	}
}
