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
[Token(Token = "0x2000171")]
public class CookieCollection : ICollection, IEnumerable
{
	[Token(Token = "0x2000172")]
	internal enum Stamp
	{
		[Token(Token = "0x4000768")]
		Check,
		[Token(Token = "0x4000769")]
		Set,
		[Token(Token = "0x400076A")]
		SetToUnused,
		[Token(Token = "0x400076B")]
		SetToMaxUsed
	}

	[Token(Token = "0x2000173")]
	private class CookieCollectionEnumerator : IEnumerator
	{
		[Token(Token = "0x400076C")]
		[FieldOffset(Offset = "0x10")]
		private CookieCollection m_cookies;

		[Token(Token = "0x400076D")]
		[FieldOffset(Offset = "0x18")]
		private int m_count;

		[Token(Token = "0x400076E")]
		[FieldOffset(Offset = "0x1C")]
		private int m_index;

		[Token(Token = "0x400076F")]
		[FieldOffset(Offset = "0x20")]
		private int m_version;

		[Token(Token = "0x1700020A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60008FA")]
			[Address(RVA = "0x4970680", Offset = "0x4970680", VA = "0x4970680", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60008F9")]
		[Address(RVA = "0x4970620", Offset = "0x4970620", VA = "0x4970620")]
		internal CookieCollectionEnumerator(CookieCollection cookies)
		{
		}

		[Token(Token = "0x60008FB")]
		[Address(RVA = "0x4970720", Offset = "0x4970720", VA = "0x4970720", Slot = "4")]
		private bool System_002ECollections_002EIEnumerator_002EMoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60008FC")]
		[Address(RVA = "0x49707B0", Offset = "0x49707B0", VA = "0x49707B0", Slot = "6")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000762")]
	[FieldOffset(Offset = "0x10")]
	internal int m_version;

	[Token(Token = "0x4000763")]
	[FieldOffset(Offset = "0x18")]
	private ArrayList m_list;

	[Token(Token = "0x4000764")]
	[FieldOffset(Offset = "0x20")]
	private DateTime m_TimeStamp;

	[Token(Token = "0x4000765")]
	[FieldOffset(Offset = "0x28")]
	private bool m_has_other_versions;

	[Token(Token = "0x4000766")]
	[FieldOffset(Offset = "0x29")]
	[OptionalField]
	private bool m_IsReadOnly;

	[Token(Token = "0x17000205")]
	public Cookie this[int index]
	{
		[Token(Token = "0x60008EC")]
		[Address(RVA = "0x496F2D0", Offset = "0x496F2D0", VA = "0x496F2D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000206")]
	public int Count
	{
		[Token(Token = "0x60008EF")]
		[Address(RVA = "0x496FDF0", Offset = "0x496FDF0", VA = "0x496FDF0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000207")]
	public bool IsSynchronized
	{
		[Token(Token = "0x60008F0")]
		[Address(RVA = "0x496FE20", Offset = "0x496FE20", VA = "0x496FE20", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000208")]
	public object SyncRoot
	{
		[Token(Token = "0x60008F1")]
		[Address(RVA = "0x496FE30", Offset = "0x496FE30", VA = "0x496FE30", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000209")]
	internal bool IsOtherVersionSeen
	{
		[Token(Token = "0x60008F4")]
		[Address(RVA = "0x496FF30", Offset = "0x496FF30", VA = "0x496FF30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60008EB")]
	[Address(RVA = "0x496F230", Offset = "0x496F230", VA = "0x496F230")]
	public CookieCollection()
	{
	}

	[Token(Token = "0x60008ED")]
	[Address(RVA = "0x496F3B0", Offset = "0x496F3B0", VA = "0x496F3B0")]
	public void Add(Cookie cookie)
	{
	}

	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x496F9F0", Offset = "0x496F9F0", VA = "0x496F9F0")]
	public void Add(CookieCollection cookies)
	{
	}

	[Token(Token = "0x60008F2")]
	[Address(RVA = "0x496FE40", Offset = "0x496FE40", VA = "0x496FE40", Slot = "4")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x60008F3")]
	[Address(RVA = "0x496FE70", Offset = "0x496FE70", VA = "0x496FE70")]
	internal DateTime TimeStamp(Stamp how)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60008F5")]
	[Address(RVA = "0x496FF40", Offset = "0x496FF40", VA = "0x496FF40")]
	internal int InternalAdd(Cookie cookie, bool isStrict)
	{
		return default(int);
	}

	[Token(Token = "0x60008F6")]
	[Address(RVA = "0x496F460", Offset = "0x496F460", VA = "0x496F460")]
	internal int IndexOf(Cookie cookie)
	{
		return default(int);
	}

	[Token(Token = "0x60008F7")]
	[Address(RVA = "0x49705F0", Offset = "0x49705F0", VA = "0x49705F0")]
	internal void RemoveAt(int idx)
	{
	}

	[Token(Token = "0x60008F8")]
	[Address(RVA = "0x496FD60", Offset = "0x496FD60", VA = "0x496FD60", Slot = "8")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}
}
