using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000300")]
[ComVisible(true)]
public abstract class SHA256 : HashAlgorithm
{
	[Token(Token = "0x6001A52")]
	[Address(RVA = "0x4E5F860", Offset = "0x4E5F860", VA = "0x4E5F860")]
	protected SHA256()
	{
	}

	[Token(Token = "0x6001A53")]
	[Address(RVA = "0x4E5C320", Offset = "0x4E5C320", VA = "0x4E5C320")]
	public new static SHA256 Create()
	{
		return null;
	}

	[Token(Token = "0x6001A54")]
	[Address(RVA = "0x4E5F960", Offset = "0x4E5F960", VA = "0x4E5F960")]
	public new static SHA256 Create(string hashName)
	{
		return null;
	}
}
