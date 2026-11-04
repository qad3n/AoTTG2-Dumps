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
[Token(Token = "0x20002FE")]
internal class PathList
{
	[Serializable]
	[Token(Token = "0x20002FF")]
	private class PathListComparer : IComparer
	{
		[Token(Token = "0x4000B90")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly PathListComparer StaticInstance;

		[Token(Token = "0x60014D5")]
		[Address(RVA = "0x27D0EF0", Offset = "0x27CF4F0", VA = "0x1827D0EF0", Slot = "4")]
		private int System_002ECollections_002EIComparer_002ECompare(object ol, object or)
		{
			return default(int);
		}

		[Token(Token = "0x60014D6")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public PathListComparer()
		{
		}
	}

	[Token(Token = "0x4000B8F")]
	[FieldOffset(Offset = "0x10")]
	private SortedList m_list;

	[Token(Token = "0x17000462")]
	public int Count
	{
		[Token(Token = "0x60014CE")]
		[Address(RVA = "0x1AB8940", Offset = "0x1AB6F40", VA = "0x181AB8940")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000463")]
	public ICollection Values
	{
		[Token(Token = "0x60014D0")]
		[Address(RVA = "0x1A1F360", Offset = "0x1A1D960", VA = "0x181A1F360")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000464")]
	public object this[string s]
	{
		[Token(Token = "0x60014D1")]
		[Address(RVA = "0x27D1560", Offset = "0x27CFB60", VA = "0x1827D1560")]
		get
		{
			return null;
		}
		[Token(Token = "0x60014D2")]
		[Address(RVA = "0x27D1590", Offset = "0x27CFB90", VA = "0x1827D1590")]
		set
		{
		}
	}

	[Token(Token = "0x17000465")]
	public object SyncRoot
	{
		[Token(Token = "0x60014D4")]
		[Address(RVA = "0x197BE90", Offset = "0x197A490", VA = "0x18197BE90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60014CD")]
	[Address(RVA = "0x27D14A0", Offset = "0x27CFAA0", VA = "0x1827D14A0")]
	public PathList()
	{
	}

	[Token(Token = "0x60014CF")]
	[Address(RVA = "0x27D1180", Offset = "0x27CF780", VA = "0x1827D1180")]
	public int GetCookiesCount()
	{
		return default(int);
	}

	[Token(Token = "0x60014D3")]
	[Address(RVA = "0x19244D0", Offset = "0x1922AD0", VA = "0x1819244D0")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}
}
