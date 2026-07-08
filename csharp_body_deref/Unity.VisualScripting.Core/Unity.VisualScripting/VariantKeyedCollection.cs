using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200002C")]
public class VariantKeyedCollection<TBase, TImplementation, TKey> : VariantCollection<TBase, TImplementation>, IKeyedCollection<TKey, TBase>, ICollection<TBase>, IEnumerable<TBase>, IEnumerable where TImplementation : TBase
{
	[Token(Token = "0x17000048")]
	public TBase this[TKey key]
	{
		[Token(Token = "0x6000175")]
		get
		{
			return (TBase)null;
		}
	}

	[Token(Token = "0x17000049")]
	public new IKeyedCollection<TKey, TImplementation> implementation
	{
		[Token(Token = "0x6000176")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000177")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	private TBase Unity_002EVisualScripting_002EIKeyedCollection_003CTKey_002CTBase_003E_002EItem
	{
		[Token(Token = "0x600017B")]
		get
		{
			return (TBase)null;
		}
	}

	[Token(Token = "0x6000174")]
	public VariantKeyedCollection(IKeyedCollection<TKey, TImplementation> implementation)
	{
	}

	[Token(Token = "0x6000178")]
	public bool TryGetValue(TKey key, out TBase value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000179")]
	public bool Contains(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x600017A")]
	public bool Remove(TKey key)
	{
		return default(bool);
	}
}
