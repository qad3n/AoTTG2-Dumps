// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.Page
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005E2")]
internal class Page : IDisposable
{
	[Token(Token = "0x20005E3")]
	public class DataSet<T> : IDisposable where T : struct
	{
		[Token(Token = "0x40015D6")]
		[FieldOffset(Offset = "0x0")]
		private static readonly MemoryLabel s_CpuMemoryLabel;

		[Token(Token = "0x40015D7")]
		[FieldOffset(Offset = "0x0")]
		private static readonly MemoryLabel s_RangesMemoryLabel;

		[Token(Token = "0x40015D9")]
		[FieldOffset(Offset = "0x0")]
		public Utility.GPUBuffer<T> gpuData;

		[Token(Token = "0x40015DA")]
		[FieldOffset(Offset = "0x0")]
		public NativeArray<T> cpuData;

		[Token(Token = "0x40015DB")]
		[FieldOffset(Offset = "0x0")]
		public NativeArray<GfxUpdateBufferRange> updateRanges;

		[Token(Token = "0x40015DC")]
		[FieldOffset(Offset = "0x0")]
		public GPUBufferAllocator allocator;

		[Token(Token = "0x40015DD")]
		[FieldOffset(Offset = "0x0")]
		private readonly uint m_UpdateRangePoolSize;

		[Token(Token = "0x40015DE")]
		[FieldOffset(Offset = "0x0")]
		private uint m_ElemStride;

		[Token(Token = "0x40015DF")]
		[FieldOffset(Offset = "0x0")]
		private uint m_UpdateRangeMin;

		[Token(Token = "0x40015E0")]
		[FieldOffset(Offset = "0x0")]
		private uint m_UpdateRangeMax;

		[Token(Token = "0x40015E1")]
		[FieldOffset(Offset = "0x0")]
		private uint m_UpdateRangesEnqueued;

		[Token(Token = "0x40015E2")]
		[FieldOffset(Offset = "0x0")]
		private uint m_UpdateRangesBatchStart;

		[Token(Token = "0x40015E3")]
		[FieldOffset(Offset = "0x0")]
		private bool m_UpdateRangesSaturated;

		[Token(Token = "0x17000AAF")]
		protected bool disposed
		{
			[Token(Token = "0x6002BAF")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6002BB0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x6002BAE")]
		public DataSet(Utility.GPUBufferType bufferType, uint totalCount, uint maxQueuedFrameCount, uint updateRangePoolSize)
		{
		}

		[Token(Token = "0x6002BB1")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6002BB2")]
		public void Dispose(bool disposing)
		{
		}

		[Token(Token = "0x6002BB3")]
		public void RegisterUpdate(uint start, uint size)
		{
		}

		[Token(Token = "0x6002BB4")]
		private bool HasMappedBufferRange()
		{
			return default(bool);
		}

		[Token(Token = "0x6002BB5")]
		public void SendUpdates()
		{
		}

		[Token(Token = "0x6002BB6")]
		public void SendFullRange()
		{
		}

		[Token(Token = "0x6002BB7")]
		public void SendPartialRanges()
		{
		}

		[Token(Token = "0x6002BB8")]
		private void ResetUpdateState()
		{
		}
	}

	[Token(Token = "0x40015D2")]
	[FieldOffset(Offset = "0x18")]
	public DataSet<Vertex> vertices;

	[Token(Token = "0x40015D3")]
	[FieldOffset(Offset = "0x20")]
	public DataSet<ushort> indices;

	[Token(Token = "0x40015D4")]
	[FieldOffset(Offset = "0x28")]
	public Page next;

	[Token(Token = "0x40015D5")]
	[FieldOffset(Offset = "0x30")]
	public int framesEmpty;

	[Token(Token = "0x17000AAD")]
	protected bool disposed
	{
		[Token(Token = "0x6002BA9")]
		[Address(RVA = "0x6BBABE0", Offset = "0x6BB9BE0", VA = "0x6BBABE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002BAA")]
		[Address(RVA = "0x6BBABF0", Offset = "0x6BB9BF0", VA = "0x6BBABF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000AAE")]
	public bool isEmpty
	{
		[Token(Token = "0x6002BAD")]
		[Address(RVA = "0x6BB4850", Offset = "0x6BB3850", VA = "0x6BB4850")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002BA8")]
	[Address(RVA = "0x6BB4720", Offset = "0x6BB3720", VA = "0x6BB4720")]
	public Page(uint vertexMaxCount, uint indexMaxCount, uint maxQueuedFrameCount)
	{
	}

	[Token(Token = "0x6002BAB")]
	[Address(RVA = "0x6BB9D60", Offset = "0x6BB8D60", VA = "0x6BB9D60", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002BAC")]
	[Address(RVA = "0x6BBAC00", Offset = "0x6BB9C00", VA = "0x6BBAC00", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}
}
