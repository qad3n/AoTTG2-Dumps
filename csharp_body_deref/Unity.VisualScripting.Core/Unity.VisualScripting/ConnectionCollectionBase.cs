using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000030")]
public class ConnectionCollectionBase<TConnection, TSource, TDestination, TCollection> : IConnectionCollection<TConnection, TSource, TDestination>, ICollection<TConnection>, IEnumerable<TConnection>, IEnumerable where TConnection : IConnection<TSource, TDestination> where TCollection : ICollection<TConnection>
{
	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x0")]
	private readonly Dictionary<TDestination, List<TConnection>> byDestination;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x0")]
	private readonly Dictionary<TSource, List<TConnection>> bySource;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x0")]
	protected readonly TCollection collection;

	[Token(Token = "0x1700004F")]
	public IEnumerable<TConnection> this[TSource source]
	{
		[Token(Token = "0x600019A")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000050")]
	public IEnumerable<TConnection> this[TDestination destination]
	{
		[Token(Token = "0x600019B")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000051")]
	public int Count
	{
		[Token(Token = "0x600019C")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000052")]
	public bool IsReadOnly
	{
		[Token(Token = "0x600019D")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000199")]
	public ConnectionCollectionBase(TCollection collection)
	{
	}

	[Token(Token = "0x600019E")]
	public IEnumerator<TConnection> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600019F")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60001A0")]
	public IEnumerable<TConnection> WithSource(TSource source)
	{
		return null;
	}

	[Token(Token = "0x60001A1")]
	public List<TConnection> WithSourceNoAlloc(TSource source)
	{
		return null;
	}

	[Token(Token = "0x60001A2")]
	public TConnection SingleOrDefaultWithSource(TSource source)
	{
		return (TConnection)null;
	}

	[Token(Token = "0x60001A3")]
	public IEnumerable<TConnection> WithDestination(TDestination destination)
	{
		return null;
	}

	[Token(Token = "0x60001A4")]
	public List<TConnection> WithDestinationNoAlloc(TDestination destination)
	{
		return null;
	}

	[Token(Token = "0x60001A5")]
	public TConnection SingleOrDefaultWithDestination(TDestination destination)
	{
		return (TConnection)null;
	}

	[Token(Token = "0x60001A6")]
	public void Add(TConnection item)
	{
	}

	[Token(Token = "0x60001A7")]
	public void Clear()
	{
	}

	[Token(Token = "0x60001A8")]
	public bool Contains(TConnection item)
	{
		return default(bool);
	}

	[Token(Token = "0x60001A9")]
	public void CopyTo(TConnection[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x60001AA")]
	public bool Remove(TConnection item)
	{
		return default(bool);
	}

	[Token(Token = "0x60001AB")]
	protected virtual void BeforeAdd(TConnection item)
	{
	}

	[Token(Token = "0x60001AC")]
	protected virtual void AfterAdd(TConnection item)
	{
	}

	[Token(Token = "0x60001AD")]
	protected virtual void BeforeRemove(TConnection item)
	{
	}

	[Token(Token = "0x60001AE")]
	protected virtual void AfterRemove(TConnection item)
	{
	}

	[Token(Token = "0x60001AF")]
	private void AddToDictionaries(TConnection item)
	{
	}

	[Token(Token = "0x60001B0")]
	private void RemoveFromDictionaries(TConnection item)
	{
	}
}
