// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ParallelBitArray
// Update status: NEW in this game update
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
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000076")]
	public bool IsCreated
	{
		[Token(Token = "0x60003BE")]
		[Address(RVA = "0x2BF8870", Offset = "0x2BF6E70", VA = "0x182BF8870")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x2BF87F0", Offset = "0x2BF6DF0", VA = "0x182BF87F0")]
	public ParallelBitArray(int length, Allocator allocator, NativeArrayOptions options = NativeArrayOptions.ClearMemory)
	{
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x2BF81E0", Offset = "0x2BF67E0", VA = "0x182BF81E0")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x2BF8230", Offset = "0x2BF6830", VA = "0x182BF8230")]
	public void Dispose(JobHandle inputDeps)
	{
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x2BF8560", Offset = "0x2BF6B60", VA = "0x182BF8560")]
	public void Resize(int newLength)
	{
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x2BF8730", Offset = "0x2BF6D30", VA = "0x182BF8730")]
	public void Set(int index, bool value)
	{
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x2BF8410", Offset = "0x2BF6A10", VA = "0x182BF8410")]
	public bool Get(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x2BF8370", Offset = "0x2BF6970", VA = "0x182BF8370")]
	public ulong GetChunk(int chunk_index)
	{
		return default(ulong);
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x2BF8720", Offset = "0x2BF6D20", VA = "0x182BF8720")]
	public void SetChunk(int chunk_index, ulong chunk_bits)
	{
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x2BF8500", Offset = "0x2BF6B00", VA = "0x182BF8500")]
	public ulong InterlockedReadChunk(int chunk_index)
	{
		return default(ulong);
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x2BF8480", Offset = "0x2BF6A80", VA = "0x182BF8480")]
	public void InterlockedOrChunk(int chunk_index, ulong chunk_bits)
	{
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
	public int ChunkCount()
	{
		return default(int);
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x2BF8380", Offset = "0x2BF6980", VA = "0x182BF8380")]
	public ParallelBitArray GetSubArray(int length)
	{
		return default(ParallelBitArray);
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0xADC2D0", Offset = "0xADA8D0", VA = "0x180ADC2D0")]
	public NativeArray<long> GetBitsArray()
	{
		return default(NativeArray<long>);
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x2BF8290", Offset = "0x2BF6890", VA = "0x182BF8290")]
	public void FillZeroes(int length)
	{
	}
}
