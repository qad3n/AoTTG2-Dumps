// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RadeonRays.RestructureBvh
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RadeonRays;

[Token(Token = "0x200001E")]
internal sealed class RestructureBvh : IDisposable
{
	[Token(Token = "0x200001F")]
	private struct ScratchBufferLayout
	{
		[Token(Token = "0x40000A5")]
		[FieldOffset(Offset = "0x0")]
		public uint LeafParents;

		[Token(Token = "0x40000A6")]
		[FieldOffset(Offset = "0x4")]
		public uint TreeletCount;

		[Token(Token = "0x40000A7")]
		[FieldOffset(Offset = "0x8")]
		public uint TreeletRoots;

		[Token(Token = "0x40000A8")]
		[FieldOffset(Offset = "0xC")]
		public uint PrimitiveCounts;

		[Token(Token = "0x40000A9")]
		[FieldOffset(Offset = "0x10")]
		public uint TotalSize;

		[Token(Token = "0x600004C")]
		[Address(RVA = "0x2D94450", Offset = "0x2D92A50", VA = "0x182D94450")]
		public static ScratchBufferLayout Create(uint triangleCount)
		{
			return default(ScratchBufferLayout);
		}

		[Token(Token = "0x600004D")]
		[Address(RVA = "0x2D94600", Offset = "0x2D92C00", VA = "0x182D94600")]
		private uint Reserve(uint size)
		{
			return default(uint);
		}
	}

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x10")]
	private readonly ComputeShader shader;

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0x18")]
	private readonly int kernelInitPrimitiveCounts;

	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0x1C")]
	private readonly int kernelFindTreeletRoots;

	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x20")]
	private readonly int kernelRestructure;

	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0x24")]
	private readonly int kernelPrepareTreeletsDispatchSize;

	[Token(Token = "0x400009E")]
	private const int numIterations = 3;

	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x28")]
	private readonly GraphicsBuffer treeletDispatchIndirectBuffer;

	[Token(Token = "0x40000A0")]
	private const uint kGroupSize = 256u;

	[Token(Token = "0x40000A1")]
	private const uint kTrianglesPerThread = 8u;

	[Token(Token = "0x40000A2")]
	private const uint kTrianglesPerGroup = 2048u;

	[Token(Token = "0x40000A3")]
	private const uint kMinPrimitivesPerTreelet = 64u;

	[Token(Token = "0x40000A4")]
	private const int kMaxThreadGroupsPerDispatch = 65535;

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x2D933A0", Offset = "0x2D919A0", VA = "0x182D933A0")]
	public RestructureBvh(RadeonRaysShaders shaders)
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x2D92E80", Offset = "0x2D91480", VA = "0x182D92E80", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x2D93390", Offset = "0x2D91990", VA = "0x182D93390")]
	public ulong GetScratchDataSizeInDwords(uint triangleCount)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x2D90250", Offset = "0x2D8E850", VA = "0x182D90250")]
	public static uint GetBvhNodeCount(uint leafCount)
	{
		return default(uint);
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x2D92EA0", Offset = "0x2D914A0", VA = "0x182D92EA0")]
	public void Execute(CommandBuffer cmd, GraphicsBuffer vertices, int verticesOffset, uint vertexStride, uint triangleCount, GraphicsBuffer scratch, in BottomLevelLevelAccelStruct result)
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x2D92D10", Offset = "0x2D91310", VA = "0x182D92D10")]
	private void BindKernelArguments(CommandBuffer cmd, int kernel, GraphicsBuffer vertices, GraphicsBuffer scratch, BottomLevelLevelAccelStruct result)
	{
	}
}
