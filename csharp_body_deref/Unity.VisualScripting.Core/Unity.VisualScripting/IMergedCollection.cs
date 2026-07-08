using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200001A")]
public interface IMergedCollection<T> : ICollection<T>, IEnumerable<T>, IEnumerable
{
	[Token(Token = "0x6000097")]
	bool Includes<TI>() where TI : T;

	[Token(Token = "0x6000098")]
	bool Includes(Type elementType);
}
