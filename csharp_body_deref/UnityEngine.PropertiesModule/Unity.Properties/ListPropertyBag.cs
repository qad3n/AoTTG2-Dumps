using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000022")]
public class ListPropertyBag<TElement> : IndexedCollectionPropertyBag<List<TElement>, TElement>
{
	[Token(Token = "0x1700001A")]
	protected override InstantiationKind InstantiationKind
	{
		[Token(Token = "0x6000063")]
		get
		{
			return default(InstantiationKind);
		}
	}

	[Token(Token = "0x6000064")]
	protected override List<TElement> InstantiateWithCount(int count)
	{
		return null;
	}

	[Token(Token = "0x6000065")]
	protected override List<TElement> Instantiate()
	{
		return null;
	}

	[Token(Token = "0x6000066")]
	public ListPropertyBag()
	{
	}
}
