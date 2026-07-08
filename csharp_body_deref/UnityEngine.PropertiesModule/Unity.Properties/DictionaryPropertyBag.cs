using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000018")]
public class DictionaryPropertyBag<TKey, TValue> : KeyValueCollectionPropertyBag<Dictionary<TKey, TValue>, TKey, TValue>
{
	[Token(Token = "0x17000014")]
	protected override InstantiationKind InstantiationKind
	{
		[Token(Token = "0x600004C")]
		get
		{
			return default(InstantiationKind);
		}
	}

	[Token(Token = "0x600004D")]
	protected override Dictionary<TKey, TValue> Instantiate()
	{
		return null;
	}

	[Token(Token = "0x600004E")]
	public DictionaryPropertyBag()
	{
	}
}
