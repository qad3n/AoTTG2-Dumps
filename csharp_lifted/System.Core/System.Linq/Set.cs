// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Set
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Linq;

[Token(Token = "0x200003B")]
internal class Set<TElement>
{
	[Token(Token = "0x200003C")]
	internal struct Slot
	{
		[Token(Token = "0x40000CB")]
		[FieldOffset(Offset = "0x0")]
		internal int hashCode;

		[Token(Token = "0x40000CC")]
		[FieldOffset(Offset = "0x0")]
		internal TElement value;

		[Token(Token = "0x40000CD")]
		[FieldOffset(Offset = "0x0")]
		internal int next;
	}

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x0")]
	private int[] buckets;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x0")]
	private Slot[] slots;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x0")]
	private int count;

	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x0")]
	private int freeList;

	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x0")]
	private IEqualityComparer<TElement> comparer;

	[Token(Token = "0x6000193")]
	public Set(IEqualityComparer<TElement> comparer)
	{
	}

	[Token(Token = "0x6000194")]
	public bool Add(TElement value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000195")]
	private bool Find(TElement value, bool add)
	{
		return default(bool);
	}

	[Token(Token = "0x6000196")]
	private void Resize()
	{
	}

	[Token(Token = "0x6000197")]
	internal int InternalGetHashCode(TElement value)
	{
		return default(int);
	}
}
