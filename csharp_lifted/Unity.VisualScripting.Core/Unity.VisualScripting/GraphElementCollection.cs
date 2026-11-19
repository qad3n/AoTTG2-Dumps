// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.GraphElementCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200006E")]
public sealed class GraphElementCollection<TElement> : GuidCollection<TElement>, IGraphElementCollection<TElement>, IKeyedCollection<Guid, TElement>, ICollection<TElement>, IEnumerable<TElement>, IEnumerable, INotifyCollectionChanged<TElement>, IProxyableNotifyCollectionChanged<TElement> where TElement : IGraphElement
{
	[Token(Token = "0x40000EE")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	private Action<TElement> m_ItemAdded;

	[Token(Token = "0x40000EF")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	private Action<TElement> m_ItemRemoved;

	[Token(Token = "0x40000F0")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	private Action m_CollectionChanged;

	[Token(Token = "0x170000B3")]
	public IGraph graph
	{
		[Token(Token = "0x600030F")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B4")]
	public bool ProxyCollectionChange
	{
		[Token(Token = "0x6000316")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000317")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1400000A")]
	public event Action<TElement> ItemAdded
	{
		[Token(Token = "0x6000310")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000311")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000B")]
	public event Action<TElement> ItemRemoved
	{
		[Token(Token = "0x6000312")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000313")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000C")]
	public event Action CollectionChanged
	{
		[Token(Token = "0x6000314")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000315")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600030E")]
	public GraphElementCollection(IGraph graph)
	{
	}

	[Token(Token = "0x6000318")]
	public void BeforeAdd(TElement element)
	{
	}

	[Token(Token = "0x6000319")]
	public void AfterAdd(TElement element)
	{
	}

	[Token(Token = "0x600031A")]
	public void BeforeRemove(TElement element)
	{
	}

	[Token(Token = "0x600031B")]
	public void AfterRemove(TElement element)
	{
	}

	[Token(Token = "0x600031C")]
	protected override void InsertItem(int index, TElement element)
	{
	}

	[Token(Token = "0x600031D")]
	protected override void RemoveItem(int index)
	{
	}

	[Token(Token = "0x600031E")]
	protected override void ClearItems()
	{
	}

	[Token(Token = "0x600031F")]
	protected override void SetItem(int index, TElement item)
	{
	}

	[Token(Token = "0x6000320")]
	public new NoAllocEnumerator<TElement> GetEnumerator()
	{
		return default(NoAllocEnumerator<TElement>);
	}

	[Token(Token = "0x6000321")]
	private TElement Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EGuid_002CTElement_003E_002Eget_Item(Guid key)
	{
		return (TElement)null;
	}

	[Token(Token = "0x6000322")]
	private bool Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EGuid_002CTElement_003E_002EContains(Guid key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000323")]
	private bool Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EGuid_002CTElement_003E_002ERemove(Guid key)
	{
		return default(bool);
	}
}
