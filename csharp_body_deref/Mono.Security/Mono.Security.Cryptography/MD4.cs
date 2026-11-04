using System.Security.Cryptography;
using Il2CppDummyDll;

namespace Mono.Security.Cryptography;

[Token(Token = "0x200004B")]
public abstract class MD4 : HashAlgorithm
{
	[Token(Token = "0x600018B")]
	[Address(RVA = "0x1934B40", Offset = "0x1933140", VA = "0x181934B40")]
	protected MD4()
	{
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x1935E50", Offset = "0x1934450", VA = "0x181935E50")]
	public new static MD4 Create()
	{
		return null;
	}
}
