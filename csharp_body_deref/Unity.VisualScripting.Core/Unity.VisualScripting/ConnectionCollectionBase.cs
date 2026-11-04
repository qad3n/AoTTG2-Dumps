// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.ConnectionCollectionBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000030")]
public class ConnectionCollectionBase<TConnection, TSource, TDestination, TCollection> : IConnectionCollection<TConnection, TSource, TDestination>, ICollection<TConnection>, IEnumerable<TConnection>, IEnumerable where TConnection : IConnection<TSource, TDestination> where TCollection : ICollection<TConnection>
{
	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x0")]
	private readonly Dictionary<TDestination, List<TConnection>> byDestination;

	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0x0")]
	private readonly Dictionary<TSource, List<TConnection>> bySource;

	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x0")]
	protected readonly TCollection collection;

	[Token(Token = "0x17000050")]
	public IEnumerable<TConnection> this[TSource source]
	{
		[Token(Token = "0x600019E")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000051")]
	public IEnumerable<TConnection> this[TDestination destination]
	{
		[Token(Token = "0x600019F")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000052")]
	public int Count
	{
		[Token(Token = "0x60001A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000053")]
	public bool IsReadOnly
	{
		[Token(Token = "0x60001A1")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600019D")]
	public ConnectionCollectionBase(TCollection collection)
	{
	}

	[Token(Token = "0x60001A2")]
	public IEnumerator<TConnection> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60001A3")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60001A4")]
	public IEnumerable<TConnection> WithSource(TSource source)
	{
		return null;
	}

	[Token(Token = "0x60001A5")]
	public List<TConnection> WithSourceNoAlloc(TSource source)
	{
		return null;
	}

	[Token(Token = "0x60001A6")]
	public TConnection SingleOrDefaultWithSource(TSource source)
	{
		return (TConnection)null;
	}

	[Token(Token = "0x60001A7")]
	public IEnumerable<TConnection> WithDestination(TDestination destination)
	{
		return null;
	}

	[Token(Token = "0x60001A8")]
	public List<TConnection> WithDestinationNoAlloc(TDestination destination)
	{
		return null;
	}

	[Token(Token = "0x60001A9")]
	public TConnection SingleOrDefaultWithDestination(TDestination destination)
	{
		return (TConnection)null;
	}

	[Token(Token = "0x60001AA")]
	public void Add(TConnection item)
	{
	}

	[Token(Token = "0x60001AB")]
	public void Clear()
	{
	}

	[Token(Token = "0x60001AC")]
	public bool Contains(TConnection item)
	{
		return default(bool);
	}

	[Token(Token = "0x60001AD")]
	public void CopyTo(TConnection[] array, int arrayIndex)
	{
	}

	[Token(Token = "0x60001AE")]
	public bool Remove(TConnection item)
	{
		return default(bool);
	}

	[Token(Token = "0x60001AF")]
	protected virtual void BeforeAdd(TConnection item)
	{
	}

	[Token(Token = "0x60001B0")]
	protected virtual void AfterAdd(TConnection item)
	{
	}

	[Token(Token = "0x60001B1")]
	protected virtual void BeforeRemove(TConnection item)
	{
	}

	[Token(Token = "0x60001B2")]
	protected virtual void AfterRemove(TConnection item)
	{
	}

	[Token(Token = "0x60001B3")]
	private void AddToDictionaries(TConnection item)
	{
	}

	[Token(Token = "0x60001B4")]
	private void RemoveFromDictionaries(TConnection item)
	{
	}
}
