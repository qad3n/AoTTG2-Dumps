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

[Token(Token = "0x20004E8")]
internal class BestFitAllocator
{
	[Token(Token = "0x20004E9")]
	private class BlockPool : LinkedPool<Block>
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001E62")]
		[Address(RVA = "0x4FB2000", Offset = "0x4FB2000", VA = "0x4FB2000")]
		private static Block CreateBlock()
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001E63")]
		[Address(RVA = "0x4FB20B0", Offset = "0x4FB20B0", VA = "0x4FB20B0")]
		private static void ResetBlock(Block block)
		{
		}

		[Token(Token = "0x6001E64")]
		[Address(RVA = "0x4FB1740", Offset = "0x4FB1740", VA = "0x4FB1740")]
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
			[Address(RVA = "0x4FB1AD0", Offset = "0x4FB1AD0", VA = "0x4FB1AD0")]
			get
			{
				return default(uint);
			}
		}

		[Token(Token = "0x6001E66")]
		[Address(RVA = "0x4FB2070", Offset = "0x4FB2070", VA = "0x4FB2070")]
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
		[Address(RVA = "0x4FB1810", Offset = "0x4FB1810", VA = "0x4FB1810")]
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
		[Address(RVA = "0x4FB1820", Offset = "0x4FB1820", VA = "0x4FB1820")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x6001E5A")]
	[Address(RVA = "0x4FB1680", Offset = "0x4FB1680", VA = "0x4FB1680")]
	public BestFitAllocator(uint size)
	{
	}

	[Token(Token = "0x6001E5D")]
	[Address(RVA = "0x4FB1830", Offset = "0x4FB1830", VA = "0x4FB1830")]
	public Alloc Allocate(uint size)
	{
		return default(Alloc);
	}

	[Token(Token = "0x6001E5E")]
	[Address(RVA = "0x4FB1C50", Offset = "0x4FB1C50", VA = "0x4FB1C50")]
	public void Free(Alloc alloc)
	{
	}

	[Token(Token = "0x6001E5F")]
	[Address(RVA = "0x4FB1ED0", Offset = "0x4FB1ED0", VA = "0x4FB1ED0")]
	private Block CoalesceBlockWithPrevious(Block block)
	{
		return null;
	}

	[Token(Token = "0x6001E60")]
	[Address(RVA = "0x4FB1A80", Offset = "0x4FB1A80", VA = "0x4FB1A80")]
	private Block BestFitFindAvailableBlock(uint size)
	{
		return null;
	}

	[Token(Token = "0x6001E61")]
	[Address(RVA = "0x4FB1AE0", Offset = "0x4FB1AE0", VA = "0x4FB1AE0")]
	private void SplitBlock(Block block, uint size)
	{
	}
}
