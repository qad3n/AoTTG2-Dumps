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
[Token(Token = "0x20002BA")]
public class CookieCollection : ICollection, IEnumerable
{
	[Token(Token = "0x20002BB")]
	internal enum Stamp
	{
		[Token(Token = "0x4000AAF")]
		Check,
		[Token(Token = "0x4000AB0")]
		Set,
		[Token(Token = "0x4000AB1")]
		SetToUnused,
		[Token(Token = "0x4000AB2")]
		SetToMaxUsed
	}

	[Token(Token = "0x20002BC")]
	private class CookieCollectionEnumerator : IEnumerator
	{
		[Token(Token = "0x4000AB3")]
		[FieldOffset(Offset = "0x10")]
		private CookieCollection m_cookies;

		[Token(Token = "0x4000AB4")]
		[FieldOffset(Offset = "0x18")]
		private int m_count;

		[Token(Token = "0x4000AB5")]
		[FieldOffset(Offset = "0x1C")]
		private int m_index;

		[Token(Token = "0x4000AB6")]
		[FieldOffset(Offset = "0x20")]
		private int m_version;

		[Token(Token = "0x17000430")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60012FC")]
			[Address(RVA = "0x62B74A0", Offset = "0x62B64A0", VA = "0x62B74A0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60012FB")]
		[Address(RVA = "0x62B7440", Offset = "0x62B6440", VA = "0x62B7440")]
		internal CookieCollectionEnumerator(CookieCollection cookies)
		{
		}

		[Token(Token = "0x60012FD")]
		[Address(RVA = "0x62B7540", Offset = "0x62B6540", VA = "0x62B7540", Slot = "4")]
		private bool System_002ECollections_002EIEnumerator_002EMoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60012FE")]
		[Address(RVA = "0x62B75D0", Offset = "0x62B65D0", VA = "0x62B75D0", Slot = "6")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000AA9")]
	[FieldOffset(Offset = "0x10")]
	internal int m_version;

	[Token(Token = "0x4000AAA")]
	[FieldOffset(Offset = "0x18")]
	private ArrayList m_list;

	[Token(Token = "0x4000AAB")]
	[FieldOffset(Offset = "0x20")]
	private DateTime m_TimeStamp;

	[Token(Token = "0x4000AAC")]
	[FieldOffset(Offset = "0x28")]
	private bool m_has_other_versions;

	[Token(Token = "0x4000AAD")]
	[FieldOffset(Offset = "0x29")]
	[OptionalField]
	private bool m_IsReadOnly;

	[Token(Token = "0x1700042B")]
	public Cookie this[int index]
	{
		[Token(Token = "0x60012EE")]
		[Address(RVA = "0x62B6450", Offset = "0x62B5450", VA = "0x62B6450")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700042C")]
	public int Count
	{
		[Token(Token = "0x60012F1")]
		[Address(RVA = "0x62B6D70", Offset = "0x62B5D70", VA = "0x62B6D70", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700042D")]
	public bool IsSynchronized
	{
		[Token(Token = "0x60012F2")]
		[Address(RVA = "0x62B6DA0", Offset = "0x62B5DA0", VA = "0x62B6DA0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700042E")]
	public object SyncRoot
	{
		[Token(Token = "0x60012F3")]
		[Address(RVA = "0x62B6DB0", Offset = "0x62B5DB0", VA = "0x62B6DB0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700042F")]
	internal bool IsOtherVersionSeen
	{
		[Token(Token = "0x60012F6")]
		[Address(RVA = "0x62B6EB0", Offset = "0x62B5EB0", VA = "0x62B6EB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60012ED")]
	[Address(RVA = "0x62B63B0", Offset = "0x62B53B0", VA = "0x62B63B0")]
	public CookieCollection()
	{
	}

	[Token(Token = "0x60012EF")]
	[Address(RVA = "0x62B6530", Offset = "0x62B5530", VA = "0x62B6530")]
	public void Add(Cookie cookie)
	{
	}

	[Token(Token = "0x60012F0")]
	[Address(RVA = "0x62B69E0", Offset = "0x62B59E0", VA = "0x62B69E0")]
	public void Add(CookieCollection cookies)
	{
	}

	[Token(Token = "0x60012F4")]
	[Address(RVA = "0x62B6DC0", Offset = "0x62B5DC0", VA = "0x62B6DC0", Slot = "4")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x60012F5")]
	[Address(RVA = "0x62B6DF0", Offset = "0x62B5DF0", VA = "0x62B6DF0")]
	internal DateTime TimeStamp(Stamp how)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60012F7")]
	[Address(RVA = "0x62B6EC0", Offset = "0x62B5EC0", VA = "0x62B6EC0")]
	internal int InternalAdd(Cookie cookie, bool isStrict)
	{
		return default(int);
	}

	[Token(Token = "0x60012F8")]
	[Address(RVA = "0x62B65F0", Offset = "0x62B55F0", VA = "0x62B65F0")]
	internal int IndexOf(Cookie cookie)
	{
		return default(int);
	}

	[Token(Token = "0x60012F9")]
	[Address(RVA = "0x62B7410", Offset = "0x62B6410", VA = "0x62B7410")]
	internal void RemoveAt(int idx)
	{
	}

	[Token(Token = "0x60012FA")]
	[Address(RVA = "0x62B6CE0", Offset = "0x62B5CE0", VA = "0x62B6CE0", Slot = "8")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}
}
