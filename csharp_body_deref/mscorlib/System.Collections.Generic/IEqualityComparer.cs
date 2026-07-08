using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x200064D")]
public interface IEqualityComparer<in T>
{
	[Token(Token = "0x6003203")]
	bool Equals(T x, T y);

	[Token(Token = "0x6003204")]
	int GetHashCode(T obj);
}
