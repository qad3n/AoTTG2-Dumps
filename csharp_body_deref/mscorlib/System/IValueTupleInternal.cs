using System.Collections;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200012A")]
internal interface IValueTupleInternal : ITuple
{
	[Token(Token = "0x6000B97")]
	int GetHashCode(IEqualityComparer comparer);

	[Token(Token = "0x6000B98")]
	string ToStringEnd();
}
