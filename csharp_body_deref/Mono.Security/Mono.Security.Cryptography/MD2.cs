using System.Security.Cryptography;
using Il2CppDummyDll;

namespace Mono.Security.Cryptography;

[Token(Token = "0x2000036")]
public abstract class MD2 : HashAlgorithm
{
	[Token(Token = "0x600015A")]
	[Address(RVA = "0x52C8810", Offset = "0x52C7810", VA = "0x52C8810")]
	protected MD2()
	{
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x52C8830", Offset = "0x52C7830", VA = "0x52C8830")]
	public new static MD2 Create()
	{
		return null;
	}
}
