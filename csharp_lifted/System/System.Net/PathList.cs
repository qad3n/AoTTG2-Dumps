// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.PathList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Net;

[Serializable]
[Token(Token = "0x20002BF")]
internal class PathList
{
	[Serializable]
	[Token(Token = "0x20002C0")]
	private class PathListComparer : IComparer
	{
		[Token(Token = "0x4000AC1")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly PathListComparer StaticInstance;

		[Token(Token = "0x6001317")]
		[Address(RVA = "0x62BC200", Offset = "0x62BB200", VA = "0x62BC200", Slot = "4")]
		private int System_002ECollections_002EIComparer_002ECompare(object ol, object or)
		{
			return default(int);
		}

		[Token(Token = "0x6001318")]
		[Address(RVA = "0x62BC400", Offset = "0x62BB400", VA = "0x62BC400")]
		public PathListComparer()
		{
		}
	}

	[Token(Token = "0x4000AC0")]
	[FieldOffset(Offset = "0x10")]
	private SortedList m_list;

	[Token(Token = "0x17000433")]
	public int Count
	{
		[Token(Token = "0x6001310")]
		[Address(RVA = "0x62B9EC0", Offset = "0x62B8EC0", VA = "0x62B9EC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000434")]
	public ICollection Values
	{
		[Token(Token = "0x6001312")]
		[Address(RVA = "0x62B9D30", Offset = "0x62B8D30", VA = "0x62B9D30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000435")]
	public object this[string s]
	{
		[Token(Token = "0x6001313")]
		[Address(RVA = "0x62B8590", Offset = "0x62B7590", VA = "0x62B8590")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001314")]
		[Address(RVA = "0x62B85C0", Offset = "0x62B75C0", VA = "0x62B85C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000436")]
	public object SyncRoot
	{
		[Token(Token = "0x6001316")]
		[Address(RVA = "0x62B8560", Offset = "0x62B7560", VA = "0x62B8560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600130F")]
	[Address(RVA = "0x62B8040", Offset = "0x62B7040", VA = "0x62B8040")]
	public PathList()
	{
	}

	[Token(Token = "0x6001311")]
	[Address(RVA = "0x62B80E0", Offset = "0x62B70E0", VA = "0x62B80E0")]
	public int GetCookiesCount()
	{
		return default(int);
	}

	[Token(Token = "0x6001315")]
	[Address(RVA = "0x62BB9C0", Offset = "0x62BA9C0", VA = "0x62BB9C0")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}
}
