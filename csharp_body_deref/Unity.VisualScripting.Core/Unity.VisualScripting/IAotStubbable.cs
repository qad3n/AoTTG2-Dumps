using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000CF")]
public interface IAotStubbable
{
	[Token(Token = "0x60004FF")]
	IEnumerable<object> GetAotStubs(HashSet<object> visited);
}
