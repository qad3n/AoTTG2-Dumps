using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004EC")]
internal class Page : IDisposable
{
	[Token(Token = "0x20004ED")]
	public class DataSet<T> : IDisposable where T : struct
	{
		[Token(Token = "0x400104A")]
		[FieldOffset(Offset = "0x0")]
		public Utility.GPUBuffer<T> gpuData;

		[Token(Token = "0x400104B")]
		[FieldOffset(Offset = "0x0")]
		public NativeArray<T> cpuData;

		[Token(Token = "0x400104C")]
		[FieldOffset(Offset = "0x0")]
		public NativeArray<GfxUpdateBufferRange> updateRanges;

		[Token(Token = "0x400104D")]
		[FieldOffset(Offset = "0x0")]
		public GPUBufferAllocator allocator;

		[Token(Token = "0x400104E")]
		[FieldOffset(Offset = "0x0")]
		private readonly uint m_UpdateRangePoolSize;

		[Token(Token = "0x400104F")]
		[FieldOffset(Offset = "0x0")]
		private uint m_ElemStride;

		[Token(Token = "0x4001050")]
		[FieldOffset(Offset = "0x0")]
		private uint m_UpdateRangeMin;

		[Token(Token = "0x4001051")]
		[FieldOffset(Offset = "0x0")]
		private uint m_UpdateRangeMax;

		[Token(Token = "0x4001052")]
		[FieldOffset(Offset = "0x0")]
		private uint m_UpdateRangesEnqueued;

		[Token(Token = "0x4001053")]
		[FieldOffset(Offset = "0x0")]
		private uint m_UpdateRangesBatchStart;

		[Token(Token = "0x4001054")]
		[FieldOffset(Offset = "0x0")]
		private bool m_UpdateRangesSaturated;

		[Token(Token = "0x1700079F")]
		protected bool disposed
		{
			[Token(Token = "0x6001E73")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6001E74")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x6001E72")]
		public DataSet(Utility.GPUBufferType bufferType, uint totalCount, uint maxQueuedFrameCount, uint updateRangePoolSize, bool mockBuffer)
		{
		}

		[Token(Token = "0x6001E75")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6001E76")]
		public void Dispose(bool disposing)
		{
		}

		[Token(Token = "0x6001E77")]
		public void RegisterUpdate(uint start, uint size)
		{
		}

		[Token(Token = "0x6001E78")]
		private bool HasMappedBufferRange()
		{
			return default(bool);
		}

		[Token(Token = "0x6001E79")]
		public void SendUpdates()
		{
		}

		[Token(Token = "0x6001E7A")]
		public void SendFullRange()
		{
		}

		[Token(Token = "0x6001E7B")]
		public void SendPartialRanges()
		{
		}

		[Token(Token = "0x6001E7C")]
		private void ResetUpdateState()
		{
		}
	}

	[Token(Token = "0x4001045")]
	[FieldOffset(Offset = "0x18")]
	public DataSet<Vertex> vertices;

	[Token(Token = "0x4001046")]
	[FieldOffset(Offset = "0x20")]
	public DataSet<ushort> indices;

	[Token(Token = "0x4001047")]
	[FieldOffset(Offset = "0x28")]
	public Page next;

	[Token(Token = "0x4001048")]
	[FieldOffset(Offset = "0x30")]
	public int framesEmpty;

	[Token(Token = "0x1700079D")]
	protected bool disposed
	{
		[Token(Token = "0x6001E6D")]
		[Address(RVA = "0x4C8ABF0", Offset = "0x4C8ABF0", VA = "0x4C8ABF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001E6E")]
		[Address(RVA = "0x4C8AC00", Offset = "0x4C8AC00", VA = "0x4C8AC00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700079E")]
	public bool isEmpty
	{
		[Token(Token = "0x6001E71")]
		[Address(RVA = "0x4C8ACA0", Offset = "0x4C8ACA0", VA = "0x4C8ACA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001E6C")]
	[Address(RVA = "0x4C8AAA0", Offset = "0x4C8AAA0", VA = "0x4C8AAA0")]
	public Page(uint vertexMaxCount, uint indexMaxCount, uint maxQueuedFrameCount, bool mockPage)
	{
	}

	[Token(Token = "0x6001E6F")]
	[Address(RVA = "0x4C89C10", Offset = "0x4C89C10", VA = "0x4C89C10", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001E70")]
	[Address(RVA = "0x4C8AC10", Offset = "0x4C8AC10", VA = "0x4C8AC10", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}
}
