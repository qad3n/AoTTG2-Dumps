using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004E8")]
internal class BestFitAllocator
{
	[Token(Token = "0x20004E9")]
	private class BlockPool : LinkedPool<Block>
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001E62")]
		[Address(RVA = "0x4C8A6D0", Offset = "0x4C8A6D0", VA = "0x4C8A6D0")]
		private static Block CreateBlock()
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001E63")]
		[Address(RVA = "0x4C8A780", Offset = "0x4C8A780", VA = "0x4C8A780")]
		private static void ResetBlock(Block block)
		{
		}

		[Token(Token = "0x6001E64")]
		[Address(RVA = "0x4C89E10", Offset = "0x4C89E10", VA = "0x4C89E10")]
		public BlockPool()
		{
		}
	}

	[Token(Token = "0x20004EA")]
	private class Block : LinkedPoolItem<Block>
	{
		[Token(Token = "0x400103B")]
		[FieldOffset(Offset = "0x18")]
		public uint start;

		[Token(Token = "0x400103C")]
		[FieldOffset(Offset = "0x1C")]
		public uint end;

		[Token(Token = "0x400103D")]
		[FieldOffset(Offset = "0x20")]
		public Block prev;

		[Token(Token = "0x400103E")]
		[FieldOffset(Offset = "0x28")]
		public Block next;

		[Token(Token = "0x400103F")]
		[FieldOffset(Offset = "0x30")]
		public Block prevAvailable;

		[Token(Token = "0x4001040")]
		[FieldOffset(Offset = "0x38")]
		public Block nextAvailable;

		[Token(Token = "0x4001041")]
		[FieldOffset(Offset = "0x40")]
		public bool allocated;

		[Token(Token = "0x1700079B")]
		public uint size
		{
			[Token(Token = "0x6001E65")]
			[Address(RVA = "0x4C8A1A0", Offset = "0x4C8A1A0", VA = "0x4C8A1A0")]
			get
			{
				return default(uint);
			}
		}

		[Token(Token = "0x6001E66")]
		[Address(RVA = "0x4C8A740", Offset = "0x4C8A740", VA = "0x4C8A740")]
		public Block()
		{
		}
	}

	[Token(Token = "0x4001037")]
	[FieldOffset(Offset = "0x18")]
	private Block m_FirstBlock;

	[Token(Token = "0x4001038")]
	[FieldOffset(Offset = "0x20")]
	private Block m_FirstAvailableBlock;

	[Token(Token = "0x4001039")]
	[FieldOffset(Offset = "0x28")]
	private BlockPool m_BlockPool;

	[Token(Token = "0x400103A")]
	[FieldOffset(Offset = "0x30")]
	private uint m_HighWatermark;

	[Token(Token = "0x17000799")]
	public uint totalSize
	{
		[Token(Token = "0x6001E5B")]
		[Address(RVA = "0x4C89EE0", Offset = "0x4C89EE0", VA = "0x4C89EE0")]
		[CompilerGenerated]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x1700079A")]
	public uint highWatermark
	{
		[Token(Token = "0x6001E5C")]
		[Address(RVA = "0x4C89EF0", Offset = "0x4C89EF0", VA = "0x4C89EF0")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x6001E5A")]
	[Address(RVA = "0x4C89D50", Offset = "0x4C89D50", VA = "0x4C89D50")]
	public BestFitAllocator(uint size)
	{
	}

	[Token(Token = "0x6001E5D")]
	[Address(RVA = "0x4C89F00", Offset = "0x4C89F00", VA = "0x4C89F00")]
	public Alloc Allocate(uint size)
	{
		return default(Alloc);
	}

	[Token(Token = "0x6001E5E")]
	[Address(RVA = "0x4C8A320", Offset = "0x4C8A320", VA = "0x4C8A320")]
	public void Free(Alloc alloc)
	{
	}

	[Token(Token = "0x6001E5F")]
	[Address(RVA = "0x4C8A5A0", Offset = "0x4C8A5A0", VA = "0x4C8A5A0")]
	private Block CoalesceBlockWithPrevious(Block block)
	{
		return null;
	}

	[Token(Token = "0x6001E60")]
	[Address(RVA = "0x4C8A150", Offset = "0x4C8A150", VA = "0x4C8A150")]
	private Block BestFitFindAvailableBlock(uint size)
	{
		return null;
	}

	[Token(Token = "0x6001E61")]
	[Address(RVA = "0x4C8A1B0", Offset = "0x4C8A1B0", VA = "0x4C8A1B0")]
	private void SplitBlock(Block block, uint size)
	{
	}
}
