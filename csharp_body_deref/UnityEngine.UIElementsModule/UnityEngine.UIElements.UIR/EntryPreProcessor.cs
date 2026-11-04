// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.EntryPreProcessor
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000591")]
internal class EntryPreProcessor
{
	[Token(Token = "0x2000592")]
	public struct AllocSize
	{
		[Token(Token = "0x400137D")]
		[FieldOffset(Offset = "0x0")]
		public int vertexCount;

		[Token(Token = "0x400137E")]
		[FieldOffset(Offset = "0x4")]
		public int indexCount;
	}

	[Token(Token = "0x4001375")]
	[FieldOffset(Offset = "0x10")]
	private int m_ChildrenIndex;

	[Token(Token = "0x4001376")]
	[FieldOffset(Offset = "0x18")]
	private List<AllocSize> m_Allocs;

	[Token(Token = "0x4001377")]
	[FieldOffset(Offset = "0x20")]
	private List<AllocSize> m_HeadAllocs;

	[Token(Token = "0x4001378")]
	[FieldOffset(Offset = "0x28")]
	private List<AllocSize> m_TailAllocs;

	[Token(Token = "0x4001379")]
	[FieldOffset(Offset = "0x30")]
	private List<Entry> m_FlattenedEntries;

	[Token(Token = "0x400137A")]
	[FieldOffset(Offset = "0x38")]
	private AllocSize m_Pending;

	[Token(Token = "0x400137B")]
	[FieldOffset(Offset = "0x40")]
	private Stack<AllocSize> m_Mask;

	[Token(Token = "0x400137C")]
	[FieldOffset(Offset = "0x48")]
	private bool m_IsPushingMask;

	[Token(Token = "0x17000A5A")]
	public int childrenIndex
	{
		[Token(Token = "0x6002993")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000A5B")]
	public List<AllocSize> headAllocs
	{
		[Token(Token = "0x6002994")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A5C")]
	public List<AllocSize> tailAllocs
	{
		[Token(Token = "0x6002995")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A5D")]
	public List<Entry> flattenedEntries
	{
		[Token(Token = "0x6002996")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002997")]
	[Address(RVA = "0x317F9C0", Offset = "0x317DFC0", VA = "0x18317F9C0")]
	public void PreProcess(Entry root)
	{
	}

	[Token(Token = "0x6002998")]
	[Address(RVA = "0x317F580", Offset = "0x317DB80", VA = "0x18317F580")]
	public void ClearReferences()
	{
	}

	[Token(Token = "0x6002999")]
	[Address(RVA = "0x317F5E0", Offset = "0x317DBE0", VA = "0x18317F5E0")]
	private void DoEvaluate(Entry entry)
	{
	}

	[Token(Token = "0x600299A")]
	[Address(RVA = "0x317F4B0", Offset = "0x317DAB0", VA = "0x18317F4B0")]
	private void Add(int vertexCount, int indexCount)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600299B")]
	[Address(RVA = "0x317F910", Offset = "0x317DF10", VA = "0x18317F910")]
	private void Flush()
	{
	}

	[Token(Token = "0x600299C")]
	[Address(RVA = "0x317FDF0", Offset = "0x317E3F0", VA = "0x18317FDF0")]
	public EntryPreProcessor()
	{
	}
}
