using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000031")]
public class GraphConnectionCollection<TConnection, TSource, TDestination> : ConnectionCollectionBase<TConnection, TSource, TDestination, GraphElementCollection<TConnection>>, IGraphElementCollection<TConnection>, IKeyedCollection<Guid, TConnection>, ICollection<TConnection>, IEnumerable<TConnection>, IEnumerable, INotifyCollectionChanged<TConnection> where TConnection : IConnection<TSource, TDestination>, IGraphElement
{
	[Token(Token = "0x17000053")]
	private TConnection Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EGuid_002CTConnection_003E_002EItem
	{
		[Token(Token = "0x60001B2")]
		get
		{
			return (TConnection)null;
		}
	}

	[Token(Token = "0x17000054")]
	private TConnection Unity_002EVisualScripting_002EIKeyedCollection_003CSystem_002EGuid_002CTConnection_003E_002EItem
	{
		[Token(Token = "0x60001B3")]
		get
		{
			return (TConnection)null;
		}
	}

	[Token(Token = "0x14000007")]
	public event Action<TConnection> ItemAdded
	{
		[Token(Token = "0x60001B7")]
		add
		{
		}
		[Token(Token = "0x60001B8")]
		remove
		{
		}
	}

	[Token(Token = "0x14000008")]
	public event Action<TConnection> ItemRemoved
	{
		[Token(Token = "0x60001B9")]
		add
		{
		}
		[Token(Token = "0x60001BA")]
		remove
		{
		}
	}

	[Token(Token = "0x14000009")]
	public event Action CollectionChanged
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

	[Token(Token = "0x60001B1")]
	public GraphConnectionCollection(IGraph graph)
	{
	}

	[Token(Token = "0x60001B4")]
	public bool TryGetValue(Guid key, out TConnection value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001B5")]
	public bool Contains(Guid key)
	{
		return default(bool);
	}

	[Token(Token = "0x60001B6")]
	public bool Remove(Guid key)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BD")]
	protected override void BeforeAdd(TConnection item)
	{
	}

	[Token(Token = "0x60001BE")]
	protected override void AfterAdd(TConnection item)
	{
	}

	[Token(Token = "0x60001BF")]
	protected override void BeforeRemove(TConnection item)
	{
	}

	[Token(Token = "0x60001C0")]
	protected override void AfterRemove(TConnection item)
	{
	}
}
