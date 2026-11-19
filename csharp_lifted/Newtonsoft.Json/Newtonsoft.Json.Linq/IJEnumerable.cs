// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.IJEnumerable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
