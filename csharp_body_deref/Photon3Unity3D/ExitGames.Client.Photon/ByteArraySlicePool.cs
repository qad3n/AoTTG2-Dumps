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
		[Address(RVA = "0x3B671F0", Offset = "0x3B671F0", VA = "0x3B671F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x3B67200", Offset = "0x3B67200", VA = "0x3B67200")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public int AllocationCounter
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x3B67230", Offset = "0x3B67230", VA = "0x3B67230")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x3B67240", Offset = "0x3B67240", VA = "0x3B67240")]
	public ByteArraySlicePool()
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x3B673E0", Offset = "0x3B673E0", VA = "0x3B673E0")]
	public ByteArraySlice Acquire(byte[] buffer, int offset = 0, int count = 0)
	{
		return null;
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x3B67850", Offset = "0x3B67850", VA = "0x3B67850")]
	public ByteArraySlice Acquire(int minByteCount)
	{
		return null;
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x3B67660", Offset = "0x3B67660", VA = "0x3B67660")]
	private ByteArraySlice PopOrCreate(Stack<ByteArraySlice> stack, int stackIndex)
	{
		return null;
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x3B66FC0", Offset = "0x3B66FC0", VA = "0x3B66FC0")]
	internal bool Release(ByteArraySlice slice, int stackIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x3B67BC0", Offset = "0x3B67BC0", VA = "0x3B67BC0")]
	public void ClearPools(int lower = 0, int upper = int.MaxValue)
	{
	}
}
