using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x2000651")]
public interface IReadOnlyList<out T> : IReadOnlyCollection<T>, IEnumerable<T>, IEnumerable
{
	[Token(Token = "0x17000825")]
	T this[int index]
	{
		[Token(Token = "0x6003210")]
		get;
	}
}
