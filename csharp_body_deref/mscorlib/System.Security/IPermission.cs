using Il2CppDummyDll;

namespace System.Security;

[Token(Token = "0x200029D")]
public interface IPermission : ISecurityEncodable
{
	[Token(Token = "0x600175F")]
	void Demand();

	[Token(Token = "0x6001760")]
	bool IsSubsetOf(IPermission target);
}
