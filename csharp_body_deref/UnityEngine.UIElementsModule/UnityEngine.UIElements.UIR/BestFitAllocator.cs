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

[Token(Token = "0x20005DE")]
internal class BestFitAllocator
{
	[Token(Token = "0x20005DF")]
	private class BlockPool : LinkedPool<Block>
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002B9E")]
		[Address(RVA = "0x6BBAA20", Offset = "0x6BB9A20", VA = "0x6BBAA20")]
		private static Block CreateBlock()
		{
			return null;
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002B9F")]
		[Address(RVA = "0x6BBAAD0", Offset = "0x6BB9AD0", VA = "0x6BBAAD0")]
		private static void ResetBlock(Block block)
		{
		}

		[Token(Token = "0x6002BA0")]
		[Address(RVA = "0x6BBA1E0", Offset = "0x6BB91E0", VA = "0x6BBA1E0")]
		public BlockPool()
		{
		}
	}

	[Token(Token = "0x20005E0")]
	private class Block : LinkedPoolItem<Block>
	{
		[Token(Token = "0x40015C8")]
		[FieldOffset(Offset = "0x18")]
		public uint start;

		[Token(Token = "0x40015C9")]
		[FieldOffset(Offset = "0x1C")]
		public uint end;

		[Token(Token = "0x40015CA")]
		[FieldOffset(Offset = "0x20")]
		public Block prev;

		[Token(Token = "0x40015CB")]
		[FieldOffset(Offset = "0x28")]
		public Block next;

		[Token(Token = "0x40015CC")]
		[FieldOffset(Offset = "0x30")]
		public Block prevAvailable;

		[Token(Token = "0x40015CD")]
		[FieldOffset(Offset = "0x38")]
		public Block nextAvailable;

		[Token(Token = "0x40015CE")]
		[FieldOffset(Offset = "0x40")]
		public bool allocated;

		[Token(Token = "0x17000AAB")]
		public uint size
		{
			[Token(Token = "0x6002BA1")]
			[Address(RVA = "0x6BBA540", Offset = "0x6BB9540", VA = "0x6BBA540")]
			get
			{
				return default(uint);
			}
		}

		[Token(Token = "0x6002BA2")]
		[Address(RVA = "0x6BBAA90", Offset = "0x6BB9A90", VA = "0x6BBAA90")]
		public Block()
		{
		}
	}

	[Token(Token = "0x40015C4")]
	[FieldOffset(Offset = "0x18")]
	private Block m_FirstBlock;

	[Token(Token = "0x40015C5")]
	[FieldOffset(Offset = "0x20")]
	private Block m_FirstAvailableBlock;

	[Token(Token = "0x40015C6")]
	[FieldOffset(Offset = "0x28")]
	private BlockPool m_BlockPool;

	[Token(Token = "0x40015C7")]
	[FieldOffset(Offset = "0x30")]
	private uint m_HighWatermark;

	[Token(Token = "0x17000AA9")]
	public uint totalSize
	{
		[Token(Token = "0x6002B97")]
		[Address(RVA = "0x6BBA2B0", Offset = "0x6BB92B0", VA = "0x6BBA2B0")]
		[CompilerGenerated]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000AAA")]
	public uint highWatermark
	{
		[Token(Token = "0x6002B98")]
		[Address(RVA = "0x6BBA2C0", Offset = "0x6BB92C0", VA = "0x6BBA2C0")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x6002B96")]
	[Address(RVA = "0x6BBA120", Offset = "0x6BB9120", VA = "0x6BBA120")]
	public BestFitAllocator(uint size)
	{
	}

	[Token(Token = "0x6002B99")]
	[Address(RVA = "0x6BBA2D0", Offset = "0x6BB92D0", VA = "0x6BBA2D0")]
	public Alloc Allocate(uint size)
	{
		return default(Alloc);
	}

	[Token(Token = "0x6002B9A")]
	[Address(RVA = "0x6BBA6B0", Offset = "0x6BB96B0", VA = "0x6BBA6B0")]
	public void Free(Alloc alloc)
	{
	}

	[Token(Token = "0x6002B9B")]
	[Address(RVA = "0x6BBA8F0", Offset = "0x6BB98F0", VA = "0x6BBA8F0")]
	private Block CoalesceBlockWithPrevious(Block block)
	{
		return null;
	}

	[Token(Token = "0x6002B9C")]
	[Address(RVA = "0x6BBA500", Offset = "0x6BB9500", VA = "0x6BBA500")]
	private Block BestFitFindAvailableBlock(uint size)
	{
		return null;
	}

	[Token(Token = "0x6002B9D")]
	[Address(RVA = "0x6BBA550", Offset = "0x6BB9550", VA = "0x6BBA550")]
	private void SplitBlock(Block block, uint size)
	{
	}
}
