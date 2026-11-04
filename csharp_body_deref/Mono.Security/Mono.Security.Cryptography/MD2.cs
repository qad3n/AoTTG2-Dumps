using System.Security.Cryptography;
using Il2CppDummyDll;

namespace Mono.Security.Cryptography;

[Token(Token = "0x2000049")]
public abstract class MD2 : HashAlgorithm
{
	[Token(Token = "0x6000182")]
	[Address(RVA = "0x1934B40", Offset = "0x1933140", VA = "0x181934B40")]
	protected MD2()
	{
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x1934A40", Offset = "0x1933040", VA = "0x181934A40")]
	public new static MD2 Create()
	{
		return null;
	}
}
