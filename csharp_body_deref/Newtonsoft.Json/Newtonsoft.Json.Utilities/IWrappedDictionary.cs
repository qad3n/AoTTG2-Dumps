// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.IWrappedDictionary
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000A7")]
internal interface IWrappedDictionary : IDictionary, ICollection, IEnumerable
{
	[Token(Token = "0x170000B6")]
	object UnderlyingDictionary
	{
		[Token(Token = "0x6000577")]
		get;
	}
}
