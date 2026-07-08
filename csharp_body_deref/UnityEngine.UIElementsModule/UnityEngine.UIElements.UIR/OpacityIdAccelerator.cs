using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Jobs;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004B2")]
internal class OpacityIdAccelerator : IDisposable
{
	[Token(Token = "0x20004B3")]
	private struct OpacityIdUpdateJob : IJobParallelFor
	{
		[Token(Token = "0x4000EC1")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableContainerSafetyRestriction]
		public NativeSlice<Vertex> oldVerts;

		[Token(Token = "0x4000EC2")]
		[FieldOffset(Offset = "0x10")]
		[NativeDisableContainerSafetyRestriction]
		public NativeSlice<Vertex> newVerts;

		[Token(Token = "0x4000EC3")]
		[FieldOffset(Offset = "0x20")]
		public Color32 opacityData;

		[Token(Token = "0x6001D2F")]
		[Address(RVA = "0x4C6D8C0", Offset = "0x4C6D8C0", VA = "0x4C6D8C0", Slot = "4")]
		public void Execute(int i)
		{
		}
	}

	[Token(Token = "0x4000EBE")]
	[FieldOffset(Offset = "0x10")]
	private NativeArray<JobHandle> m_Jobs;

	[Token(Token = "0x4000EBF")]
	[FieldOffset(Offset = "0x20")]
	private int m_NextJobIndex;

	[Token(Token = "0x17000772")]
	protected bool disposed
	{
		[Token(Token = "0x6001D2A")]
		[Address(RVA = "0x4C6D760", Offset = "0x4C6D760", VA = "0x4C6D760")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001D2B")]
		[Address(RVA = "0x4C6D770", Offset = "0x4C6D770", VA = "0x4C6D770")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001D28")]
	[Address(RVA = "0x4C6D5D0", Offset = "0x4C6D5D0", VA = "0x4C6D5D0")]
	public void CreateJob(NativeSlice<Vertex> oldVerts, NativeSlice<Vertex> newVerts, Color32 opacityData, int vertexCount)
	{
	}

	[Token(Token = "0x6001D29")]
	[Address(RVA = "0x4C6D6D0", Offset = "0x4C6D6D0", VA = "0x4C6D6D0")]
	public void CompleteJobs()
	{
	}

	[Token(Token = "0x6001D2C")]
	[Address(RVA = "0x4C6D780", Offset = "0x4C6D780", VA = "0x4C6D780", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001D2D")]
	[Address(RVA = "0x4C6D7F0", Offset = "0x4C6D7F0", VA = "0x4C6D7F0", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001D2E")]
	[Address(RVA = "0x4C6D850", Offset = "0x4C6D850", VA = "0x4C6D850")]
	public OpacityIdAccelerator()
	{
	}
}
