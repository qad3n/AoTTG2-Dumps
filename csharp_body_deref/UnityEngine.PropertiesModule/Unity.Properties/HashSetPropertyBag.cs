using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000019")]
public class HashSetPropertyBag<TElement> : SetPropertyBagBase<HashSet<TElement>, TElement>
{
	[Token(Token = "0x17000015")]
	protected override InstantiationKind InstantiationKind
	{
		[Token(Token = "0x600004F")]
		get
		{
			return default(InstantiationKind);
		}
	}

	[Token(Token = "0x6000050")]
	protected override HashSet<TElement> Instantiate()
	{
		return null;
	}

	[Token(Token = "0x6000051")]
	public HashSetPropertyBag()
	{
	}
}
