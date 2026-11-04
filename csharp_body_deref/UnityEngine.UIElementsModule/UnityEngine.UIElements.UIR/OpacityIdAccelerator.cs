// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.OpacityIdAccelerator
// Update status: CHANGED in this game update
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

[Token(Token = "0x20005B4")]
internal class OpacityIdAccelerator : IDisposable
{
	[Token(Token = "0x20005B5")]
	private struct OpacityIdUpdateJob : IJobParallelFor
	{
		[Token(Token = "0x4001493")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableContainerSafetyRestriction]
		public NativeSlice<Vertex> oldVerts;

		[Token(Token = "0x4001494")]
		[FieldOffset(Offset = "0x10")]
		[NativeDisableContainerSafetyRestriction]
		public NativeSlice<Vertex> newVerts;

		[Token(Token = "0x4001495")]
		[FieldOffset(Offset = "0x20")]
		public Color32 opacityData;

		[Token(Token = "0x6002A5E")]
		[Address(RVA = "0x31977A0", Offset = "0x3195DA0", VA = "0x1831977A0", Slot = "4")]
		public void Execute(int i)
		{
		}
	}

	[Token(Token = "0x400148D")]
	private const int k_VerticesPerBatch = 128;

	[Token(Token = "0x400148E")]
	private const int k_JobLimit = 256;

	[Token(Token = "0x400148F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly MemoryLabel k_MemoryLabel;

	[Token(Token = "0x4001490")]
	[FieldOffset(Offset = "0x10")]
	private NativeArray<JobHandle> m_Jobs;

	[Token(Token = "0x4001491")]
	[FieldOffset(Offset = "0x20")]
	private int m_NextJobIndex;

	[Token(Token = "0x17000A72")]
	protected bool disposed
	{
		[Token(Token = "0x6002A58")]
		[Address(RVA = "0x584270", Offset = "0x582870", VA = "0x180584270")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002A59")]
		[Address(RVA = "0x584290", Offset = "0x582890", VA = "0x180584290")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002A56")]
	[Address(RVA = "0x3197480", Offset = "0x3195A80", VA = "0x183197480")]
	public void CreateJob(NativeSlice<Vertex> oldVerts, NativeSlice<Vertex> newVerts, Color32 opacityData, int vertexCount)
	{
	}

	[Token(Token = "0x6002A57")]
	[Address(RVA = "0x31973D0", Offset = "0x31959D0", VA = "0x1831973D0")]
	public void CompleteJobs()
	{
	}

	[Token(Token = "0x6002A5A")]
	[Address(RVA = "0x31975A0", Offset = "0x3195BA0", VA = "0x1831975A0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002A5B")]
	[Address(RVA = "0x3197600", Offset = "0x3195C00", VA = "0x183197600", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002A5C")]
	[Address(RVA = "0x31976F0", Offset = "0x3195CF0", VA = "0x1831976F0")]
	public OpacityIdAccelerator()
	{
	}
}
