using System.Collections;
using Il2CppDummyDll;

namespace System.Net;

[Serializable]
[Token(Token = "0x2000176")]
internal class PathList
{
	[Serializable]
	[Token(Token = "0x2000177")]
	private class PathListComparer : IComparer
	{
		[Token(Token = "0x400077A")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly PathListComparer StaticInstance;

		[Token(Token = "0x6000915")]
		[Address(RVA = "0x4651110", Offset = "0x4651110", VA = "0x4651110", Slot = "4")]
		private int System_002ECollections_002EIComparer_002ECompare(object ol, object or)
		{
			return default(int);
		}

		[Token(Token = "0x6000916")]
		[Address(RVA = "0x4651320", Offset = "0x4651320", VA = "0x4651320")]
		public PathListComparer()
		{
		}
	}

	[Token(Token = "0x4000779")]
	[FieldOffset(Offset = "0x10")]
	private SortedList m_list;

	[Token(Token = "0x1700020D")]
	public int Count
	{
		[Token(Token = "0x600090E")]
		[Address(RVA = "0x464E720", Offset = "0x464E720", VA = "0x464E720")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700020E")]
	public ICollection Values
	{
		[Token(Token = "0x6000910")]
		[Address(RVA = "0x464E530", Offset = "0x464E530", VA = "0x464E530")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020F")]
	public object this[string s]
	{
		[Token(Token = "0x6000911")]
		[Address(RVA = "0x464C790", Offset = "0x464C790", VA = "0x464C790")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000912")]
		[Address(RVA = "0x464C7C0", Offset = "0x464C7C0", VA = "0x464C7C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000210")]
	public object SyncRoot
	{
		[Token(Token = "0x6000914")]
		[Address(RVA = "0x464C760", Offset = "0x464C760", VA = "0x464C760")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600090D")]
	[Address(RVA = "0x464C1A0", Offset = "0x464C1A0", VA = "0x464C1A0")]
	public PathList()
	{
	}

	[Token(Token = "0x600090F")]
	[Address(RVA = "0x464C240", Offset = "0x464C240", VA = "0x464C240")]
	public int GetCookiesCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000913")]
	[Address(RVA = "0x46505D0", Offset = "0x46505D0", VA = "0x46505D0")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}
}
