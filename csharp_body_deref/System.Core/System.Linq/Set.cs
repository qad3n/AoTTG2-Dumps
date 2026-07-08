using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Linq;

[Token(Token = "0x200003A")]
internal class Set<TElement>
{
	[Token(Token = "0x200003B")]
	internal struct Slot
	{
		[Token(Token = "0x40000C2")]
		[FieldOffset(Offset = "0x0")]
		internal int hashCode;

		[Token(Token = "0x40000C3")]
		[FieldOffset(Offset = "0x0")]
		internal TElement value;

		[Token(Token = "0x40000C4")]
		[FieldOffset(Offset = "0x0")]
		internal int next;
	}

	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x0")]
	private int[] buckets;

	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0x0")]
	private Slot[] slots;

	[Token(Token = "0x40000BF")]
	[FieldOffset(Offset = "0x0")]
	private int count;

	[Token(Token = "0x40000C0")]
	[FieldOffset(Offset = "0x0")]
	private int freeList;

	[Token(Token = "0x40000C1")]
	[FieldOffset(Offset = "0x0")]
	private IEqualityComparer<TElement> comparer;

	[Token(Token = "0x6000189")]
	public Set(IEqualityComparer<TElement> comparer)
	{
	}

	[Token(Token = "0x600018A")]
	public bool Add(TElement value)
	{
		return default(bool);
	}

	[Token(Token = "0x600018B")]
	private bool Find(TElement value, bool add)
	{
		return default(bool);
	}

	[Token(Token = "0x600018C")]
	private void Resize()
	{
	}

	[Token(Token = "0x600018D")]
	internal int InternalGetHashCode(TElement value)
	{
		return default(int);
	}
}
