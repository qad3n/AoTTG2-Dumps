// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.Page
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000588")]
internal class Page : IDisposable
{
	[Token(Token = "0x2000589")]
	public class DataSet<T> : IDisposable where T : struct
	{
		[Token(Token = "0x400132D")]
		[FieldOffset(Offset = "0x0")]
		private static readonly MemoryLabel s_CpuMemoryLabel;

		[Token(Token = "0x400132E")]
		[FieldOffset(Offset = "0x0")]
		private static readonly MemoryLabel s_RangesMemoryLabel;

		[Token(Token = "0x4001330")]
		[FieldOffset(Offset = "0x0")]
		public Utility.GPUBuffer<T> gpuData;

		[Token(Token = "0x4001331")]
		[FieldOffset(Offset = "0x0")]
		public NativeArray<T> cpuData;

		[Token(Token = "0x4001332")]
		[FieldOffset(Offset = "0x0")]
		public NativeArray<GfxUpdateBufferRange> updateRanges;

		[Token(Token = "0x4001333")]
		[FieldOffset(Offset = "0x0")]
		public GPUBufferAllocator allocator;

		[Token(Token = "0x4001334")]
		[FieldOffset(Offset = "0x0")]
		private readonly uint m_UpdateRangePoolSize;

		[Token(Token = "0x4001335")]
		[FieldOffset(Offset = "0x0")]
		private uint m_ElemStride;

		[Token(Token = "0x4001336")]
		[FieldOffset(Offset = "0x0")]
		private uint m_UpdateRangeMin;

		[Token(Token = "0x4001337")]
		[FieldOffset(Offset = "0x0")]
		private uint m_UpdateRangeMax;

		[Token(Token = "0x4001338")]
		[FieldOffset(Offset = "0x0")]
		private uint m_UpdateRangesEnqueued;

		[Token(Token = "0x4001339")]
		[FieldOffset(Offset = "0x0")]
		private uint m_UpdateRangesBatchStart;

		[Token(Token = "0x400133A")]
		[FieldOffset(Offset = "0x0")]
		private bool m_UpdateRangesSaturated;

		[Token(Token = "0x17000A59")]
		protected bool disposed
		{
			[Token(Token = "0x6002975")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6002976")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x6002974")]
		public DataSet(Utility.GPUBufferType bufferType, uint totalCount, uint maxQueuedFrameCount, uint updateRangePoolSize)
		{
		}

		[Token(Token = "0x6002977")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6002978")]
		public void Dispose(bool disposing)
		{
		}

		[Token(Token = "0x6002979")]
		public void RegisterUpdate(uint start, uint size)
		{
		}

		[Token(Token = "0x600297A")]
		private bool HasMappedBufferRange()
		{
			return default(bool);
		}

		[Token(Token = "0x600297B")]
		public void SendUpdates()
		{
		}

		[Token(Token = "0x600297C")]
		public void SendFullRange()
		{
		}

		[Token(Token = "0x600297D")]
		public void SendPartialRanges()
		{
		}

		[Token(Token = "0x600297E")]
		private void ResetUpdateState()
		{
		}
	}

	[Token(Token = "0x4001329")]
	[FieldOffset(Offset = "0x18")]
	public DataSet<Vertex> vertices;

	[Token(Token = "0x400132A")]
	[FieldOffset(Offset = "0x20")]
	public DataSet<ushort> indices;

	[Token(Token = "0x400132B")]
	[FieldOffset(Offset = "0x28")]
	public Page next;

	[Token(Token = "0x400132C")]
	[FieldOffset(Offset = "0x30")]
	public int framesEmpty;

	[Token(Token = "0x17000A57")]
	protected bool disposed
	{
		[Token(Token = "0x600296F")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002970")]
		[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A58")]
	public bool isEmpty
	{
		[Token(Token = "0x6002973")]
		[Address(RVA = "0x3182EF0", Offset = "0x31814F0", VA = "0x183182EF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600296E")]
	[Address(RVA = "0x3182DC0", Offset = "0x31813C0", VA = "0x183182DC0")]
	public Page(uint vertexMaxCount, uint indexMaxCount, uint maxQueuedFrameCount)
	{
	}

	[Token(Token = "0x6002971")]
	[Address(RVA = "0x3182D60", Offset = "0x3181360", VA = "0x183182D60", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002972")]
	[Address(RVA = "0x3182CD0", Offset = "0x31812D0", VA = "0x183182CD0", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}
}
