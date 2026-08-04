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
		[Address(RVA = "0x4976210", Offset = "0x4976210", VA = "0x4976210", Slot = "4")]
		private int System_002ECollections_002EIComparer_002ECompare(object ol, object or)
		{
			return default(int);
		}

		[Token(Token = "0x6000916")]
		[Address(RVA = "0x4976420", Offset = "0x4976420", VA = "0x4976420")]
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
		[Address(RVA = "0x4973820", Offset = "0x4973820", VA = "0x4973820")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700020E")]
	public ICollection Values
	{
		[Token(Token = "0x6000910")]
		[Address(RVA = "0x4973630", Offset = "0x4973630", VA = "0x4973630")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020F")]
	public object this[string s]
	{
		[Token(Token = "0x6000911")]
		[Address(RVA = "0x4971890", Offset = "0x4971890", VA = "0x4971890")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000912")]
		[Address(RVA = "0x49718C0", Offset = "0x49718C0", VA = "0x49718C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000210")]
	public object SyncRoot
	{
		[Token(Token = "0x6000914")]
		[Address(RVA = "0x4971860", Offset = "0x4971860", VA = "0x4971860")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600090D")]
	[Address(RVA = "0x49712A0", Offset = "0x49712A0", VA = "0x49712A0")]
	public PathList()
	{
	}

	[Token(Token = "0x600090F")]
	[Address(RVA = "0x4971340", Offset = "0x4971340", VA = "0x4971340")]
	public int GetCookiesCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000913")]
	[Address(RVA = "0x49756D0", Offset = "0x49756D0", VA = "0x49756D0")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}
}
