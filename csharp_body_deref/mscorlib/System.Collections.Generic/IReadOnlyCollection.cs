using Il2CppDummyDll;

namespace System.Collections.Generic;

[Token(Token = "0x200064F")]
public interface IReadOnlyCollection<out T> : IEnumerable<T>, IEnumerable
{
	[Token(Token = "0x17000821")]
	int Count
	{
		[Token(Token = "0x600320A")]
		get;
	}
}
