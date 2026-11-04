// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.BestFitAllocator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000584")]
internal class BestFitAllocator
{
	[Token(Token = "0x2000585")]
	private class BlockPool : LinkedPool<Block>
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002964")]
		[Address(RVA = "0x31783B0", Offset = "0x31769B0", VA = "0x1831783B0")]
		private static Block CreateBlock()
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002965")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		private static void ResetBlock(Block block)
		{
		}

		[Token(Token = "0x6002966")]
		[Address(RVA = "0x3178420", Offset = "0x3176A20", VA = "0x183178420")]
		public BlockPool()
		{
		}
	}

	[Token(Token = "0x2000586")]
	private class Block : LinkedPoolItem<Block>
	{
		[Token(Token = "0x400131F")]
		[FieldOffset(Offset = "0x18")]
		public uint start;

		[Token(Token = "0x4001320")]
		[FieldOffset(Offset = "0x1C")]
		public uint end;

		[Token(Token = "0x4001321")]
		[FieldOffset(Offset = "0x20")]
		public Block prev;

		[Token(Token = "0x4001322")]
		[FieldOffset(Offset = "0x28")]
		public Block next;

		[Token(Token = "0x4001323")]
		[FieldOffset(Offset = "0x30")]
		public Block prevAvailable;

		[Token(Token = "0x4001324")]
		[FieldOffset(Offset = "0x38")]
		public Block nextAvailable;

		[Token(Token = "0x4001325")]
		[FieldOffset(Offset = "0x40")]
		public bool allocated;

		[Token(Token = "0x17000A55")]
		public uint size
		{
			[Token(Token = "0x6002967")]
			[Address(RVA = "0x3178540", Offset = "0x3176B40", VA = "0x183178540")]
			get
			{
				return default(uint);
			}
		}

		[Token(Token = "0x6002968")]
		[Address(RVA = "0x3178500", Offset = "0x3176B00", VA = "0x183178500")]
		public Block()
		{
		}
	}

	[Token(Token = "0x400131B")]
	[FieldOffset(Offset = "0x18")]
	private Block m_FirstBlock;

	[Token(Token = "0x400131C")]
	[FieldOffset(Offset = "0x20")]
	private Block m_FirstAvailableBlock;

	[Token(Token = "0x400131D")]
	[FieldOffset(Offset = "0x28")]
	private BlockPool m_BlockPool;

	[Token(Token = "0x400131E")]
	[FieldOffset(Offset = "0x30")]
	private uint m_HighWatermark;

	[Token(Token = "0x17000A53")]
	public uint totalSize
	{
		[Token(Token = "0x600295D")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000A54")]
	public uint highWatermark
	{
		[Token(Token = "0x600295E")]
		[Address(RVA = "0x31783A0", Offset = "0x31769A0", VA = "0x1831783A0")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x600295C")]
	[Address(RVA = "0x3178230", Offset = "0x3176830", VA = "0x183178230")]
	public BestFitAllocator(uint size)
	{
	}

	[Token(Token = "0x600295F")]
	[Address(RVA = "0x31779D0", Offset = "0x3175FD0", VA = "0x1831779D0")]
	public Alloc Allocate(uint size)
	{
		return default(Alloc);
	}

	[Token(Token = "0x6002960")]
	[Address(RVA = "0x3177E70", Offset = "0x3176470", VA = "0x183177E70")]
	public void Free(Alloc alloc)
	{
	}

	[Token(Token = "0x6002961")]
	[Address(RVA = "0x3177D30", Offset = "0x3176330", VA = "0x183177D30")]
	private Block CoalesceBlockWithPrevious(Block block)
	{
		return null;
	}

	[Token(Token = "0x6002962")]
	[Address(RVA = "0x3177CF0", Offset = "0x31762F0", VA = "0x183177CF0")]
	private Block BestFitFindAvailableBlock(uint size)
	{
		return null;
	}

	[Token(Token = "0x6002963")]
	[Address(RVA = "0x31780C0", Offset = "0x31766C0", VA = "0x1831780C0")]
	private void SplitBlock(Block block, uint size)
	{
	}
}
