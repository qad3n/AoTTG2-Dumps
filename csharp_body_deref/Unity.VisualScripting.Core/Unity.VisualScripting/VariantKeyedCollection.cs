// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.VariantKeyedCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200002C")]
public class VariantKeyedCollection<TBase, TImplementation, TKey> : VariantCollection<TBase, TImplementation>, IKeyedCollection<TKey, TBase>, ICollection<TBase>, IEnumerable<TBase>, IEnumerable where TImplementation : TBase
{
	[Token(Token = "0x17000049")]
	public TBase this[TKey key]
	{
		[Token(Token = "0x6000179")]
		get
		{
			return (TBase)null;
		}
	}

	[Token(Token = "0x1700004A")]
	public new IKeyedCollection<TKey, TImplementation> implementation
	{
		[Token(Token = "0x600017A")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600017B")]
		[CompilerGenerated]
		private set
		{
		}
	}

	// C# has no syntax for parameterized property 'Unity.VisualScripting.IKeyedCollection<TKey,TBase>.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x1700004B")]
	[Token(Token = "0x600017F")]
	private TBase Unity_002EVisualScripting_002EIKeyedCollection_003CTKey_002CTBase_003E_002Eget_Item(int index)
	{
		return (TBase)null;
	}

	[Token(Token = "0x6000178")]
	public VariantKeyedCollection(IKeyedCollection<TKey, TImplementation> implementation)
	{
	}

	[Token(Token = "0x600017C")]
	public bool TryGetValue(TKey key, out TBase value)
	{
		return default(bool);
	}

	[Token(Token = "0x600017D")]
	public bool Contains(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x600017E")]
	public bool Remove(TKey key)
	{
		return default(bool);
	}
}
