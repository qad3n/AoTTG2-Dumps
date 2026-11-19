// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.GraphConnectionCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000031")]
public class GraphConnectionCollection<TConnection, TSource, TDestination> : ConnectionCollectionBase<TConnection, TSource, TDestination, GraphElementCollection<TConnection>>, IGraphElementCollection<TConnection>, IKeyedCollection<Guid, TConnection>, ICollection<TConnection>, IEnumerable<TConnection>, IEnumerable, INotifyCollectionChanged<TConnection> where TConnection : IConnection<TSource, TDestination>, IGraphElement
{
	// C# has no syntax for parameterized property 'Unity.VisualScripting.IKeyedCollection<System.Guid,TConnection>.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x17000054")]
	[Token(Token = "0x60001B6")]
	private TConnection Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EGuid_002CTConnection_003E_002Eget_Item(Guid key)
	{
		return (TConnection)null;
	}

	// C# has no syntax for parameterized property 'Unity.VisualScripting.IKeyedCollection<System.Guid,TConnection>.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x17000055")]
	[Token(Token = "0x60001B7")]
	private TConnection Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EGuid_002CTConnection_003E_002Eget_Item(int index)
	{
		return (TConnection)null;
	}

	[Token(Token = "0x14000007")]
	public event Action<TConnection> ItemAdded
	{
		[Token(Token = "0x60001BB")]
		add
		{
		}
		[Token(Token = "0x60001BC")]
		remove
		{
		}
	}

	[Token(Token = "0x14000008")]
	public event Action<TConnection> ItemRemoved
	{
		[Token(Token = "0x60001BD")]
		add
		{
		}
		[Token(Token = "0x60001BE")]
		remove
		{
		}
	}

	[Token(Token = "0x14000009")]
	public event Action CollectionChanged
	{
		[Token(Token = "0x60001BF")]
		add
		{
		}
		[Token(Token = "0x60001C0")]
		remove
		{
		}
	}

	[Token(Token = "0x60001B5")]
	public GraphConnectionCollection(IGraph graph)
	{
	}

	[Token(Token = "0x60001B8")]
	public bool TryGetValue(Guid key, out TConnection value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001B9")]
	public bool Contains(Guid key)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BA")]
	public bool Remove(Guid key)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C1")]
	protected override void BeforeAdd(TConnection item)
	{
	}

	[Token(Token = "0x60001C2")]
	protected override void AfterAdd(TConnection item)
	{
	}

	[Token(Token = "0x60001C3")]
	protected override void BeforeRemove(TConnection item)
	{
	}

	[Token(Token = "0x60001C4")]
	protected override void AfterRemove(TConnection item)
	{
	}
}
