// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.ByteArraySlicePool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000003")]
public class ByteArraySlicePool
{
	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x10")]
	private int minStackIndex;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x18")]
	internal readonly Stack<ByteArraySlice>[] poolTiers;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x20")]
	private int allocationCounter;

	[Token(Token = "0x17000001")]
	public int MinStackIndex
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x1CBB700", Offset = "0x1CB9D00", VA = "0x181CBB700")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x1CBB710", Offset = "0x1CB9D10", VA = "0x181CBB710")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public int AllocationCounter
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0xE28270", Offset = "0xE26870", VA = "0x180E28270")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x1CBB580", Offset = "0x1CB9B80", VA = "0x181CBB580")]
	public ByteArraySlicePool()
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x1CBADD0", Offset = "0x1CB93D0", VA = "0x181CBADD0")]
	public ByteArraySlice Acquire(byte[] buffer, int offset = 0, int count = 0)
	{
		return null;
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x1CBAAC0", Offset = "0x1CB90C0", VA = "0x181CBAAC0")]
	public ByteArraySlice Acquire(int minByteCount)
	{
		return null;
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x1CBB1D0", Offset = "0x1CB97D0", VA = "0x181CBB1D0")]
	private ByteArraySlice PopOrCreate(Stack<ByteArraySlice> stack, int stackIndex)
	{
		return null;
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x1CBB380", Offset = "0x1CB9980", VA = "0x181CBB380")]
	internal bool Release(ByteArraySlice slice, int stackIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x1CBAFA0", Offset = "0x1CB95A0", VA = "0x181CBAFA0")]
	public void ClearPools(int lower = 0, int upper = 2147483647)
	{
	}
}
