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
