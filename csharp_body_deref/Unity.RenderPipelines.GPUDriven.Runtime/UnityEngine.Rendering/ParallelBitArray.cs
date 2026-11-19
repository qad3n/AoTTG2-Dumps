// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ParallelBitArray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Jobs;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000E8")]
internal struct ParallelBitArray
{
	[Token(Token = "0x4000442")]
	[FieldOffset(Offset = "0x0")]
	private Allocator m_Allocator;

	[Token(Token = "0x4000443")]
	[FieldOffset(Offset = "0x8")]
	private NativeArray<long> m_Bits;

	[Token(Token = "0x4000444")]
	[FieldOffset(Offset = "0x18")]
	private int m_Length;

	[Token(Token = "0x17000075")]
	public int Length
	{
		[Token(Token = "0x60003BD")]
		[Address(RVA = "0x65F18C0", Offset = "0x65F08C0", VA = "0x65F18C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000076")]
	public bool IsCreated
	{
		[Token(Token = "0x60003BE")]
		[Address(RVA = "0x65F18D0", Offset = "0x65F08D0", VA = "0x65F18D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x65F1900", Offset = "0x65F0900", VA = "0x65F1900")]
	public ParallelBitArray(int length, Allocator allocator, NativeArrayOptions options = NativeArrayOptions.ClearMemory)
	{
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x65F1980", Offset = "0x65F0980", VA = "0x65F1980")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x65F19C0", Offset = "0x65F09C0", VA = "0x65F19C0")]
	public void Dispose(JobHandle inputDeps)
	{
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x65F1A10", Offset = "0x65F0A10", VA = "0x65F1A10")]
	public void Resize(int newLength)
	{
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x65E0B10", Offset = "0x65DFB10", VA = "0x65E0B10")]
	public void Set(int index, bool value)
	{
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x65E0AB0", Offset = "0x65DFAB0", VA = "0x65E0AB0")]
	public bool Get(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x65E10C0", Offset = "0x65E00C0", VA = "0x65E10C0")]
	public ulong GetChunk(int chunk_index)
	{
		return default(ulong);
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x65E10D0", Offset = "0x65E00D0", VA = "0x65E10D0")]
	public void SetChunk(int chunk_index, ulong chunk_bits)
	{
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x65F1BB0", Offset = "0x65F0BB0", VA = "0x65F1BB0")]
	public ulong InterlockedReadChunk(int chunk_index)
	{
		return default(ulong);
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x65F1C00", Offset = "0x65F0C00", VA = "0x65F1C00")]
	public void InterlockedOrChunk(int chunk_index, ulong chunk_bits)
	{
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x65F1C80", Offset = "0x65F0C80", VA = "0x65F1C80")]
	public int ChunkCount()
	{
		return default(int);
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x65F1C90", Offset = "0x65F0C90", VA = "0x65F1C90")]
	public ParallelBitArray GetSubArray(int length)
	{
		return default(ParallelBitArray);
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x65F1D10", Offset = "0x65F0D10", VA = "0x65F1D10")]
	public NativeArray<long> GetBitsArray()
	{
		return default(NativeArray<long>);
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x65F1D20", Offset = "0x65F0D20", VA = "0x65F1D20")]
	public void FillZeroes(int length)
	{
	}
}
