// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.CookieCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Net;

[Serializable]
[Token(Token = "0x20002F9")]
public class CookieCollection : ICollection, IEnumerable
{
	[Token(Token = "0x20002FA")]
	internal enum Stamp
	{
		[Token(Token = "0x4000B7E")]
		Check,
		[Token(Token = "0x4000B7F")]
		Set,
		[Token(Token = "0x4000B80")]
		SetToUnused,
		[Token(Token = "0x4000B81")]
		SetToMaxUsed
	}

	[Token(Token = "0x20002FB")]
	private class CookieCollectionEnumerator : IEnumerator
	{
		[Token(Token = "0x4000B82")]
		[FieldOffset(Offset = "0x10")]
		private CookieCollection m_cookies;

		[Token(Token = "0x4000B83")]
		[FieldOffset(Offset = "0x18")]
		private int m_count;

		[Token(Token = "0x4000B84")]
		[FieldOffset(Offset = "0x1C")]
		private int m_index;

		[Token(Token = "0x4000B85")]
		[FieldOffset(Offset = "0x20")]
		private int m_version;

		[Token(Token = "0x1700045F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60014BA")]
			[Address(RVA = "0x27C0AF0", Offset = "0x27BF0F0", VA = "0x1827C0AF0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60014B9")]
		[Address(RVA = "0x27C0BF0", Offset = "0x27BF1F0", VA = "0x1827C0BF0")]
		internal CookieCollectionEnumerator(CookieCollection cookies)
		{
		}

		[Token(Token = "0x60014BB")]
		[Address(RVA = "0x27C0A30", Offset = "0x27BF030", VA = "0x1827C0A30", Slot = "4")]
		private bool System_002ECollections_002EIEnumerator_002EMoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60014BC")]
		[Address(RVA = "0x27C0AE0", Offset = "0x27BF0E0", VA = "0x1827C0AE0", Slot = "6")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000B78")]
	[FieldOffset(Offset = "0x10")]
	internal int m_version;

	[Token(Token = "0x4000B79")]
	[FieldOffset(Offset = "0x18")]
	private ArrayList m_list;

	[Token(Token = "0x4000B7A")]
	[FieldOffset(Offset = "0x20")]
	private DateTime m_TimeStamp;

	[Token(Token = "0x4000B7B")]
	[FieldOffset(Offset = "0x28")]
	private bool m_has_other_versions;

	[Token(Token = "0x4000B7C")]
	[FieldOffset(Offset = "0x29")]
	[OptionalField]
	private bool m_IsReadOnly;

	[Token(Token = "0x1700045A")]
	public Cookie this[int index]
	{
		[Token(Token = "0x60014AC")]
		[Address(RVA = "0x27C1870", Offset = "0x27BFE70", VA = "0x1827C1870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700045B")]
	public int Count
	{
		[Token(Token = "0x60014AF")]
		[Address(RVA = "0x19972D0", Offset = "0x19958D0", VA = "0x1819972D0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700045C")]
	public bool IsSynchronized
	{
		[Token(Token = "0x60014B0")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700045D")]
	public object SyncRoot
	{
		[Token(Token = "0x60014B1")]
		[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700045E")]
	internal bool IsOtherVersionSeen
	{
		[Token(Token = "0x60014B4")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60014AB")]
	[Address(RVA = "0x27C17C0", Offset = "0x27BFDC0", VA = "0x1827C17C0")]
	public CookieCollection()
	{
	}

	[Token(Token = "0x60014AD")]
	[Address(RVA = "0x27C0C60", Offset = "0x27BF260", VA = "0x1827C0C60")]
	public void Add(Cookie cookie)
	{
	}

	[Token(Token = "0x60014AE")]
	[Address(RVA = "0x27C0D20", Offset = "0x27BF320", VA = "0x1827C0D20")]
	public void Add(CookieCollection cookies)
	{
	}

	[Token(Token = "0x60014B2")]
	[Address(RVA = "0x27C1050", Offset = "0x27BF650", VA = "0x1827C1050", Slot = "4")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x60014B3")]
	[Address(RVA = "0x27C16C0", Offset = "0x27BFCC0", VA = "0x1827C16C0")]
	internal DateTime TimeStamp(Stamp how)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60014B5")]
	[Address(RVA = "0x27C1350", Offset = "0x27BF950", VA = "0x1827C1350")]
	internal int InternalAdd(Cookie cookie, bool isStrict)
	{
		return default(int);
	}

	[Token(Token = "0x60014B6")]
	[Address(RVA = "0x27C1120", Offset = "0x27BF720", VA = "0x1827C1120")]
	internal int IndexOf(Cookie cookie)
	{
		return default(int);
	}

	[Token(Token = "0x60014B7")]
	[Address(RVA = "0x27C1690", Offset = "0x27BFC90", VA = "0x1827C1690")]
	internal void RemoveAt(int idx)
	{
	}

	[Token(Token = "0x60014B8")]
	[Address(RVA = "0x27C1080", Offset = "0x27BF680", VA = "0x1827C1080", Slot = "8")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}
}
