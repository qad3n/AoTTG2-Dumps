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
		[Address(RVA = "0x4F951F0", Offset = "0x4F951F0", VA = "0x4F951F0", Slot = "4")]
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
		[Address(RVA = "0x4F95090", Offset = "0x4F95090", VA = "0x4F95090")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001D2B")]
		[Address(RVA = "0x4F950A0", Offset = "0x4F950A0", VA = "0x4F950A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001D28")]
	[Address(RVA = "0x4F94F00", Offset = "0x4F94F00", VA = "0x4F94F00")]
	public void CreateJob(NativeSlice<Vertex> oldVerts, NativeSlice<Vertex> newVerts, Color32 opacityData, int vertexCount)
	{
	}

	[Token(Token = "0x6001D29")]
	[Address(RVA = "0x4F95000", Offset = "0x4F95000", VA = "0x4F95000")]
	public void CompleteJobs()
	{
	}

	[Token(Token = "0x6001D2C")]
	[Address(RVA = "0x4F950B0", Offset = "0x4F950B0", VA = "0x4F950B0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001D2D")]
	[Address(RVA = "0x4F95120", Offset = "0x4F95120", VA = "0x4F95120", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001D2E")]
	[Address(RVA = "0x4F95180", Offset = "0x4F95180", VA = "0x4F95180")]
	public OpacityIdAccelerator()
	{
	}
}
