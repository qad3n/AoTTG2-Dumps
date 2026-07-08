using Il2CppDummyDll;

namespace System.Collections;

[Token(Token = "0x2000626")]
[Obsolete("Please use IEqualityComparer instead.")]
public interface IHashCodeProvider
{
	[Token(Token = "0x600307A")]
	int GetHashCode(object obj);
}
