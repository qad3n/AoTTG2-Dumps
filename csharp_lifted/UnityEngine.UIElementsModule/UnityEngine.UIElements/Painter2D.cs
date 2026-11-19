// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Painter2D
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Jobs;
using Unity.Profiling;
using UnityEngine.UIElements.UIR;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002D9")]
public class Painter2D : IDisposable
{
	[Token(Token = "0x20002DA")]
	private struct Painter2DJobData
	{
		[Token(Token = "0x4000B1F")]
		[FieldOffset(Offset = "0x0")]
		public UnsafeMeshGenerationNode node;

		[Token(Token = "0x4000B20")]
		[FieldOffset(Offset = "0x8")]
		public int snapshotIndex;

		[Token(Token = "0x4000B21")]
		[FieldOffset(Offset = "0x10")]
		public IntPtr vectorImagePtr;

		[Token(Token = "0x4000B22")]
		[FieldOffset(Offset = "0x18")]
		public IntPtr texturePtr;
	}

	[Token(Token = "0x20002DB")]
	private struct Painter2DJob : IJobParallelFor
	{
		[Token(Token = "0x4000B23")]
		[FieldOffset(Offset = "0x0")]
		[NativeDisableUnsafePtrRestriction]
		public IntPtr painterHandle;

		[Token(Token = "0x4000B24")]
		[FieldOffset(Offset = "0x8")]
		[ReadOnly]
		public TempMeshAllocator allocator;

		[Token(Token = "0x4000B25")]
		[FieldOffset(Offset = "0x10")]
		[ReadOnly]
		public NativeSlice<Painter2DJobData> jobParameters;

		[Token(Token = "0x6001354")]
		[Address(RVA = "0x6CBFDC0", Offset = "0x6CBEDC0", VA = "0x6CBFDC0", Slot = "4")]
		public void Execute(int i)
		{
		}
	}

	[Token(Token = "0x4000B0D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly MemoryLabel k_MemoryLabel;

	[Token(Token = "0x4000B0E")]
	[FieldOffset(Offset = "0x10")]
	private MeshGenerationContext m_Ctx;

	[Token(Token = "0x4000B0F")]
	[FieldOffset(Offset = "0x18")]
	internal DetachedAllocator m_DetachedAllocator;

	[Token(Token = "0x4000B10")]
	[FieldOffset(Offset = "0x20")]
	internal SafeHandleAccess m_Handle;

	[Token(Token = "0x4000B11")]
	[FieldOffset(Offset = "0x28")]
	private FillGradient m_CachedFillGradient;

	[Token(Token = "0x4000B12")]
	[FieldOffset(Offset = "0x60")]
	private Texture2D m_CachedFillTexture;

	[Token(Token = "0x4000B13")]
	[FieldOffset(Offset = "0x68")]
	private FillGradient m_CachedStrokeFillGradient;

	[Token(Token = "0x4000B14")]
	[FieldOffset(Offset = "0xA0")]
	private List<float> m_CachedDashPattern;

	[Token(Token = "0x4000B15")]
	[FieldOffset(Offset = "0xA8")]
	private List<Painter2DJobData> m_JobSnapshots;

	[Token(Token = "0x4000B16")]
	[FieldOffset(Offset = "0xB0")]
	private List<VectorImage> m_VectorImageToRelease;

	[Token(Token = "0x4000B17")]
	[FieldOffset(Offset = "0xB8")]
	private NativeArray<Painter2DJobData> m_JobParameters;

	[Token(Token = "0x4000B18")]
	[FieldOffset(Offset = "0xC8")]
	private bool m_Disposed;

	[Token(Token = "0x4000B19")]
	private const float k_DashPatternEpsilon = 0.001f;

	[Token(Token = "0x4000B1B")]
	[FieldOffset(Offset = "0x18")]
	private static readonly ProfilerMarker s_StrokeMarker;

	[Token(Token = "0x4000B1C")]
	[FieldOffset(Offset = "0x20")]
	private static readonly ProfilerMarker s_FillMarker;

	[Token(Token = "0x4000B1D")]
	[FieldOffset(Offset = "0x28")]
	private static readonly ProfilerMarker s_ClipMarker;

	[Token(Token = "0x4000B1E")]
	[FieldOffset(Offset = "0xD0")]
	private MeshGenerationCallback m_OnMeshGenerationDelegate;

	[Token(Token = "0x170003EE")]
	internal static bool isPainterActive
	{
		[Token(Token = "0x6001350")]
		[Address(RVA = "0x6CBF900", Offset = "0x6CBE900", VA = "0x6CBF900")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600134B")]
	[Address(RVA = "0x6CBDE20", Offset = "0x6CBCE20", VA = "0x6CBDE20")]
	internal Painter2D(MeshGenerationContext ctx)
	{
	}

	[Token(Token = "0x600134C")]
	[Address(RVA = "0x6CBF470", Offset = "0x6CBE470", VA = "0x6CBF470")]
	public Painter2D()
	{
	}

	[Token(Token = "0x600134D")]
	[Address(RVA = "0x6CBE5D0", Offset = "0x6CBD5D0", VA = "0x6CBE5D0")]
	internal void Reset()
	{
	}

	[Token(Token = "0x600134E")]
	[Address(RVA = "0x6CBE8B0", Offset = "0x6CBD8B0", VA = "0x6CBE8B0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600134F")]
	[Address(RVA = "0x6CBF670", Offset = "0x6CBE670", VA = "0x6CBF670")]
	private void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001351")]
	[Address(RVA = "0x6CBF950", Offset = "0x6CBE950", VA = "0x6CBF950")]
	internal void ScheduleJobs(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6001352")]
	[Address(RVA = "0x6CBFC20", Offset = "0x6CBEC20", VA = "0x6CBFC20")]
	private void OnMeshGeneration(MeshGenerationContext ctx, object data)
	{
	}
}
