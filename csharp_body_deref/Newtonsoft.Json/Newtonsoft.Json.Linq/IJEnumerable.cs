using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq;

[Token(Token = "0x2000160")]
public interface IJEnumerable<out T> : IEnumerable<T>, IEnumerable where T : notnull, JToken
{
	[Token(Token = "0x170001CF")]
	IJEnumerable<JToken> this[object key]
	{
		[Token(Token = "0x6000B19")]
		get;
	}
}
