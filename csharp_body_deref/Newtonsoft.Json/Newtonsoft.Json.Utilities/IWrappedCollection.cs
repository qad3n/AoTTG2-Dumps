using System.Collections;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x200009C")]
internal interface IWrappedCollection : IList, ICollection, IEnumerable
{
	[Token(Token = "0x170000AC")]
	object UnderlyingCollection
	{
		[Token(Token = "0x6000518")]
		get;
	}
}
