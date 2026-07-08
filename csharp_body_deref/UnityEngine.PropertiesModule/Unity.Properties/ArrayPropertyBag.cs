using Il2CppDummyDll;

namespace Unity.Properties;

[Token(Token = "0x2000016")]
public sealed class ArrayPropertyBag<TElement> : IndexedCollectionPropertyBag<TElement[], TElement>
{
	[Token(Token = "0x17000013")]
	protected override InstantiationKind InstantiationKind
	{
		[Token(Token = "0x6000044")]
		get
		{
			return default(InstantiationKind);
		}
	}

	[Token(Token = "0x6000045")]
	protected override TElement[] InstantiateWithCount(int count)
	{
		return null;
	}

	[Token(Token = "0x6000046")]
	protected override TElement[] Instantiate()
	{
		return null;
	}

	[Token(Token = "0x6000047")]
	public ArrayPropertyBag()
	{
	}
}
