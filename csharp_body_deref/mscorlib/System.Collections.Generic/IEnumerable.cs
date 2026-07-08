using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x200064B")]
public interface IEnumerable<out T> : IEnumerable
{
	[Token(Token = "0x6003201")]
	new IEnumerator<T> GetEnumerator();
}
