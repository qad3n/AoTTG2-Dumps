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
		[Address(RVA = "0x564DCA0", Offset = "0x564CCA0", VA = "0x564DCA0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x564DCB0", Offset = "0x564CCB0", VA = "0x564DCB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public int AllocationCounter
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x564DCE0", Offset = "0x564CCE0", VA = "0x564DCE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x564DCF0", Offset = "0x564CCF0", VA = "0x564DCF0")]
	public ByteArraySlicePool()
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x564DE80", Offset = "0x564CE80", VA = "0x564DE80")]
	public ByteArraySlice Acquire(byte[] buffer, int offset = 0, int count = 0)
	{
		return null;
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x564E280", Offset = "0x564D280", VA = "0x564E280")]
	public ByteArraySlice Acquire(int minByteCount)
	{
		return null;
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x564E090", Offset = "0x564D090", VA = "0x564E090")]
	private ByteArraySlice PopOrCreate(Stack<ByteArraySlice> stack, int stackIndex)
	{
		return null;
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x564DA70", Offset = "0x564CA70", VA = "0x564DA70")]
	internal bool Release(ByteArraySlice slice, int stackIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x564E5D0", Offset = "0x564D5D0", VA = "0x564E5D0")]
	public void ClearPools(int lower = 0, int upper = 2147483647)
	{
	}
}
