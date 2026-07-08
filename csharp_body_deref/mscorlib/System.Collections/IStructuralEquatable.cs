using Il2CppDummyDll;

namespace System.Collections;

[Token(Token = "0x2000601")]
public interface IStructuralEquatable
{
	[Token(Token = "0x6002ED7")]
	bool Equals(object other, IEqualityComparer comparer);

	[Token(Token = "0x6002ED8")]
	int GetHashCode(IEqualityComparer comparer);
}
