using Il2CppDummyDll;

namespace System.Collections;

[Token(Token = "0x20005FE")]
public interface IEqualityComparer
{
	[Token(Token = "0x6002EC9")]
	new bool Equals(object x, object y);

	[Token(Token = "0x6002ECA")]
	int GetHashCode(object obj);
}
