// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.EntryPreProcessor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x200057C")]
internal class EntryPreProcessor
{
	[Token(Token = "0x200057D")]
	public struct AllocSize
	{
		[Token(Token = "0x40012BF")]
		[FieldOffset(Offset = "0x0")]
		public int vertexCount;

		[Token(Token = "0x40012C0")]
		[FieldOffset(Offset = "0x4")]
		public int indexCount;
	}

	[Token(Token = "0x40012B7")]
	[FieldOffset(Offset = "0x10")]
	private int m_ChildrenIndex;

	[Token(Token = "0x40012B8")]
	[FieldOffset(Offset = "0x18")]
	private List<AllocSize> m_Allocs;

	[Token(Token = "0x40012B9")]
	[FieldOffset(Offset = "0x20")]
	private List<AllocSize> m_HeadAllocs;

	[Token(Token = "0x40012BA")]
	[FieldOffset(Offset = "0x28")]
	private List<AllocSize> m_TailAllocs;

	[Token(Token = "0x40012BB")]
	[FieldOffset(Offset = "0x30")]
	private List<Entry> m_FlattenedEntries;

	[Token(Token = "0x40012BC")]
	[FieldOffset(Offset = "0x38")]
	private AllocSize m_Pending;

	[Token(Token = "0x40012BD")]
	[FieldOffset(Offset = "0x40")]
	private Stack<AllocSize> m_Mask;

	[Token(Token = "0x40012BE")]
	[FieldOffset(Offset = "0x48")]
	private bool m_IsPushingMask;

	[Token(Token = "0x17000A4E")]
	public int childrenIndex
	{
		[Token(Token = "0x6002932")]
		[Address(RVA = "0x6B820D0", Offset = "0x6B810D0", VA = "0x6B820D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A4F")]
	public List<AllocSize> headAllocs
	{
		[Token(Token = "0x6002933")]
		[Address(RVA = "0x6B820E0", Offset = "0x6B810E0", VA = "0x6B820E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A50")]
	public List<AllocSize> tailAllocs
	{
		[Token(Token = "0x6002934")]
		[Address(RVA = "0x6B820F0", Offset = "0x6B810F0", VA = "0x6B820F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A51")]
	public List<Entry> flattenedEntries
	{
		[Token(Token = "0x6002935")]
		[Address(RVA = "0x6B82100", Offset = "0x6B81100", VA = "0x6B82100")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002936")]
	[Address(RVA = "0x6B82110", Offset = "0x6B81110", VA = "0x6B82110")]
	public void PreProcess(Entry root)
	{
	}

	[Token(Token = "0x6002937")]
	[Address(RVA = "0x6B826D0", Offset = "0x6B816D0", VA = "0x6B826D0")]
	public void ClearReferences()
	{
	}

	[Token(Token = "0x6002938")]
	[Address(RVA = "0x6B822C0", Offset = "0x6B812C0", VA = "0x6B822C0")]
	private void DoEvaluate(Entry entry)
	{
	}

	[Token(Token = "0x6002939")]
	[Address(RVA = "0x6B82720", Offset = "0x6B81720", VA = "0x6B82720")]
	private void Add(int vertexCount, int indexCount)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600293A")]
	[Address(RVA = "0x6B82880", Offset = "0x6B81880", VA = "0x6B82880")]
	private void Flush()
	{
	}

	[Token(Token = "0x600293B")]
	[Address(RVA = "0x6B82910", Offset = "0x6B81910", VA = "0x6B82910")]
	public EntryPreProcessor()
	{
	}
}
