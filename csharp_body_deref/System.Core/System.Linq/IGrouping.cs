using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Linq;

[Token(Token = "0x2000035")]
public interface IGrouping<out TKey, out TElement> : IEnumerable<TElement>, IEnumerable
{
	[Token(Token = "0x1700002E")]
	TKey Key
	{
		[Token(Token = "0x6000164")]
		get;
	}
}
