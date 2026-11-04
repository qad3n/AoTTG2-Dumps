// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.PersistentGpuArray
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Token(Token = "0x2000041")]
internal sealed class PersistentGpuArray<Tstruct> : IDisposable where Tstruct : struct
{
	[Token(Token = "0x4000189")]
	[FieldOffset(Offset = "0x0")]
	private BlockAllocator m_SlotAllocator;

	[Token(Token = "0x400018A")]
	[FieldOffset(Offset = "0x0")]
	private ComputeBuffer m_GpuBuffer;

	[Token(Token = "0x400018B")]
	[FieldOffset(Offset = "0x0")]
	private NativeArray<Tstruct> m_CpuList;

	[Token(Token = "0x400018C")]
	[FieldOffset(Offset = "0x0")]
	private BitArray m_Updates;

	[Token(Token = "0x400018D")]
	[FieldOffset(Offset = "0x0")]
	private bool m_gpuBufferDirty;

	[Token(Token = "0x400018E")]
	[FieldOffset(Offset = "0x0")]
	private int m_ElementCount;

	[Token(Token = "0x1700001D")]
	public int elementCount
	{
		[Token(Token = "0x60000E8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60000E9")]
	public PersistentGpuArray(int initialSize)
	{
	}

	[Token(Token = "0x60000EA")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60000EB")]
	public BlockAllocator.Allocation Add(Tstruct element)
	{
		return default(BlockAllocator.Allocation);
	}

	[Token(Token = "0x60000EC")]
	public BlockAllocator.Allocation[] Add(int elementCount)
	{
		return null;
	}

	[Token(Token = "0x60000ED")]
	public void Remove(BlockAllocator.Allocation allocation)
	{
	}

	[Token(Token = "0x60000EE")]
	public void Clear()
	{
	}

	[Token(Token = "0x60000EF")]
	public void Set(BlockAllocator.Allocation allocation, Tstruct element)
	{
	}

	[Token(Token = "0x60000F0")]
	public Tstruct Get(BlockAllocator.Allocation allocation)
	{
		return (Tstruct)null;
	}

	[Token(Token = "0x60000F1")]
	public void ModifyForEach(Func<Tstruct, Tstruct> lambda)
	{
	}

	[Token(Token = "0x60000F2")]
	public ComputeBuffer GetGpuBuffer(CommandBuffer cmd)
	{
		return null;
	}

	[Token(Token = "0x60000F3")]
	private void Grow()
	{
	}
}
