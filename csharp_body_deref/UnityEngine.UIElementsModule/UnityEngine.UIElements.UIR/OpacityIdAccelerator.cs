// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.OpacityIdAccelerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Jobs;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x200059F")]
internal class OpacityIdAccelerator : IDisposable
{
	[Token(Token = "0x20005A0")]
	private struct OpacityIdUpdateJob : IJobParallelFor
	{
		[Token(Token = "0x40013D5")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableContainerSafetyRestriction]
		public NativeSlice<Vertex> oldVerts;

		[Token(Token = "0x40013D6")]
		[FieldOffset(Offset = "0x10")]
		[NativeDisableContainerSafetyRestriction]
		public NativeSlice<Vertex> newVerts;

		[Token(Token = "0x40013D7")]
		[FieldOffset(Offset = "0x20")]
		public Color32 opacityData;

		[Token(Token = "0x60029FD")]
		[Address(RVA = "0x6B96A70", Offset = "0x6B95A70", VA = "0x6B96A70", Slot = "4")]
		public void Execute(int i)
		{
		}
	}

	[Token(Token = "0x40013CF")]
	private const int k_VerticesPerBatch = 128;

	[Token(Token = "0x40013D0")]
	private const int k_JobLimit = 256;

	[Token(Token = "0x40013D1")]
	[FieldOffset(Offset = "0x0")]
	private static readonly MemoryLabel k_MemoryLabel;

	[Token(Token = "0x40013D2")]
	[FieldOffset(Offset = "0x10")]
	private NativeArray<JobHandle> m_Jobs;

	[Token(Token = "0x40013D3")]
	[FieldOffset(Offset = "0x20")]
	private int m_NextJobIndex;

	[Token(Token = "0x17000A66")]
	protected bool disposed
	{
		[Token(Token = "0x60029F7")]
		[Address(RVA = "0x6B96860", Offset = "0x6B95860", VA = "0x6B96860")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60029F8")]
		[Address(RVA = "0x6B96870", Offset = "0x6B95870", VA = "0x6B96870")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60029F5")]
	[Address(RVA = "0x6B966D0", Offset = "0x6B956D0", VA = "0x6B966D0")]
	public void CreateJob(NativeSlice<Vertex> oldVerts, NativeSlice<Vertex> newVerts, Color32 opacityData, int vertexCount)
	{
	}

	[Token(Token = "0x60029F6")]
	[Address(RVA = "0x6B967D0", Offset = "0x6B957D0", VA = "0x6B967D0")]
	public void CompleteJobs()
	{
	}

	[Token(Token = "0x60029F9")]
	[Address(RVA = "0x6B96880", Offset = "0x6B95880", VA = "0x6B96880", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60029FA")]
	[Address(RVA = "0x6B968F0", Offset = "0x6B958F0", VA = "0x6B968F0", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60029FB")]
	[Address(RVA = "0x6B96950", Offset = "0x6B95950", VA = "0x6B96950")]
	public OpacityIdAccelerator()
	{
	}
}
