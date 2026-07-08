using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000498")]
internal class EntryPreProcessor
{
	[Token(Token = "0x2000499")]
	public struct AllocSize
	{
		[Token(Token = "0x4000DE1")]
		[FieldOffset(Offset = "0x0")]
		public int vertexCount;

		[Token(Token = "0x4000DE2")]
		[FieldOffset(Offset = "0x4")]
		public int indexCount;
	}

	[Token(Token = "0x4000DD9")]
	[FieldOffset(Offset = "0x10")]
	private int m_ChildrenIndex;

	[Token(Token = "0x4000DDA")]
	[FieldOffset(Offset = "0x18")]
	private List<AllocSize> m_Allocs;

	[Token(Token = "0x4000DDB")]
	[FieldOffset(Offset = "0x20")]
	private List<AllocSize> m_HeadAllocs;

	[Token(Token = "0x4000DDC")]
	[FieldOffset(Offset = "0x28")]
	private List<AllocSize> m_TailAllocs;

	[Token(Token = "0x4000DDD")]
	[FieldOffset(Offset = "0x30")]
	private List<Entry> m_FlattenedEntries;

	[Token(Token = "0x4000DDE")]
	[FieldOffset(Offset = "0x38")]
	private AllocSize m_Pending;

	[Token(Token = "0x4000DDF")]
	[FieldOffset(Offset = "0x40")]
	private Stack<AllocSize> m_Mask;

	[Token(Token = "0x4000DE0")]
	[FieldOffset(Offset = "0x48")]
	private bool m_IsPushingMask;

	[Token(Token = "0x17000760")]
	public int childrenIndex
	{
		[Token(Token = "0x6001C8A")]
		[Address(RVA = "0x4C5ED20", Offset = "0x4C5ED20", VA = "0x4C5ED20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000761")]
	public List<AllocSize> headAllocs
	{
		[Token(Token = "0x6001C8B")]
		[Address(RVA = "0x4C5ED30", Offset = "0x4C5ED30", VA = "0x4C5ED30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000762")]
	public List<AllocSize> tailAllocs
	{
		[Token(Token = "0x6001C8C")]
		[Address(RVA = "0x4C5ED40", Offset = "0x4C5ED40", VA = "0x4C5ED40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000763")]
	public List<Entry> flattenedEntries
	{
		[Token(Token = "0x6001C8D")]
		[Address(RVA = "0x4C5ED50", Offset = "0x4C5ED50", VA = "0x4C5ED50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C8E")]
	[Address(RVA = "0x4C5ED60", Offset = "0x4C5ED60", VA = "0x4C5ED60")]
	public void PreProcess(Entry root)
	{
	}

	[Token(Token = "0x6001C8F")]
	[Address(RVA = "0x4C5EF00", Offset = "0x4C5EF00", VA = "0x4C5EF00")]
	private void DoEvaluate(Entry entry)
	{
	}

	[Token(Token = "0x6001C90")]
	[Address(RVA = "0x4C5F340", Offset = "0x4C5F340", VA = "0x4C5F340")]
	private void Add(int vertexCount, int indexCount)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001C91")]
	[Address(RVA = "0x4C5F4B0", Offset = "0x4C5F4B0", VA = "0x4C5F4B0")]
	private void Flush()
	{
	}

	[Token(Token = "0x6001C92")]
	[Address(RVA = "0x4C5F540", Offset = "0x4C5F540", VA = "0x4C5F540")]
	public EntryPreProcessor()
	{
	}
}
