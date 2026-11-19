// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUPrefixSum
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001C6")]
public struct GPUPrefixSum
{
	[Token(Token = "0x20001C7")]
	[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@6c7e6aba313a\\Runtime\\Utilities\\GPUPrefixSum\\GPUPrefixSum.Data.cs")]
	internal static class ShaderDefs
	{
		[Token(Token = "0x40008DB")]
		public const int GroupSize = 128;

		[Token(Token = "0x40008DC")]
		public const int ArgsBufferStride = 16;

		[Token(Token = "0x40008DD")]
		public const int ArgsBufferUpper = 0;

		[Token(Token = "0x40008DE")]
		public const int ArgsBufferLower = 8;

		[Token(Token = "0x6000E19")]
		[Address(RVA = "0x6549150", Offset = "0x6548150", VA = "0x6549150")]
		public static int DivUpGroup(int value)
		{
			return default(int);
		}

		[Token(Token = "0x6000E1A")]
		[Address(RVA = "0x6549170", Offset = "0x6548170", VA = "0x6549170")]
		public static int AlignUpGroup(int value)
		{
			return default(int);
		}

		[Token(Token = "0x6000E1B")]
		[Address(RVA = "0x6549190", Offset = "0x6548190", VA = "0x6549190")]
		public static void CalculateTotalBufferSize(int maxElementCount, out int totalSize, out int levelCounts)
		{
		}
	}

	[Token(Token = "0x20001C8")]
	[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@6c7e6aba313a\\Runtime\\Utilities\\GPUPrefixSum\\GPUPrefixSum.Data.cs")]
	public struct LevelOffsets
	{
		[Token(Token = "0x40008DF")]
		[FieldOffset(Offset = "0x0")]
		public uint count;

		[Token(Token = "0x40008E0")]
		[FieldOffset(Offset = "0x4")]
		public uint offset;

		[Token(Token = "0x40008E1")]
		[FieldOffset(Offset = "0x8")]
		public uint parentOffset;
	}

	[Token(Token = "0x20001C9")]
	public struct RenderGraphResources
	{
		[Token(Token = "0x40008E2")]
		[FieldOffset(Offset = "0x0")]
		internal int alignedElementCount;

		[Token(Token = "0x40008E3")]
		[FieldOffset(Offset = "0x4")]
		internal int maxBufferCount;

		[Token(Token = "0x40008E4")]
		[FieldOffset(Offset = "0x8")]
		internal int maxLevelCount;

		[Token(Token = "0x40008E5")]
		[FieldOffset(Offset = "0xC")]
		internal BufferHandle prefixBuffer0;

		[Token(Token = "0x40008E6")]
		[FieldOffset(Offset = "0x18")]
		internal BufferHandle prefixBuffer1;

		[Token(Token = "0x40008E7")]
		[FieldOffset(Offset = "0x24")]
		internal BufferHandle totalLevelCountBuffer;

		[Token(Token = "0x40008E8")]
		[FieldOffset(Offset = "0x30")]
		internal BufferHandle levelOffsetBuffer;

		[Token(Token = "0x40008E9")]
		[FieldOffset(Offset = "0x3C")]
		internal BufferHandle indirectDispatchArgsBuffer;

		[Token(Token = "0x170001CA")]
		public BufferHandle output
		{
			[Token(Token = "0x6000E1C")]
			[Address(RVA = "0x65491E0", Offset = "0x65481E0", VA = "0x65491E0")]
			get
			{
				return default(BufferHandle);
			}
		}

		[Token(Token = "0x6000E1D")]
		[Address(RVA = "0x65491F0", Offset = "0x65481F0", VA = "0x65491F0")]
		[Obsolete("This Create signature is deprecated and will be removed in the future. Please use Create(IBaseRenderGraphBuilder) instead. #from(6000.3)")]
		public static RenderGraphResources Create(int newMaxElementCount, RenderGraph renderGraph, RenderGraphBuilder builder, bool outputIsTemp = false)
		{
			return default(RenderGraphResources);
		}

		[Token(Token = "0x6000E1E")]
		[Address(RVA = "0x6549270", Offset = "0x6548270", VA = "0x6549270")]
		private void Initialize(int newMaxElementCount, RenderGraph renderGraph, RenderGraphBuilder builder, bool outputIsTemp = false)
		{
		}

		[Token(Token = "0x6000E1F")]
		[Address(RVA = "0x65495C0", Offset = "0x65485C0", VA = "0x65495C0")]
		public static RenderGraphResources Create(int newMaxElementCount, RenderGraph renderGraph, IBaseRenderGraphBuilder builder, bool outputIsTemp = false)
		{
			return default(RenderGraphResources);
		}

		[Token(Token = "0x6000E20")]
		[Address(RVA = "0x6549630", Offset = "0x6548630", VA = "0x6549630")]
		private void Initialize(int newMaxElementCount, RenderGraph renderGraph, IBaseRenderGraphBuilder builder, bool outputIsTemp = false)
		{
		}
	}

	[Token(Token = "0x20001CA")]
	public struct SupportResources
	{
		[Token(Token = "0x40008EA")]
		[FieldOffset(Offset = "0x0")]
		internal bool ownsResources;

		[Token(Token = "0x40008EB")]
		[FieldOffset(Offset = "0x4")]
		internal int alignedElementCount;

		[Token(Token = "0x40008EC")]
		[FieldOffset(Offset = "0x8")]
		internal int maxBufferCount;

		[Token(Token = "0x40008ED")]
		[FieldOffset(Offset = "0xC")]
		internal int maxLevelCount;

		[Token(Token = "0x40008EE")]
		[FieldOffset(Offset = "0x10")]
		internal GraphicsBuffer prefixBuffer0;

		[Token(Token = "0x40008EF")]
		[FieldOffset(Offset = "0x18")]
		internal GraphicsBuffer prefixBuffer1;

		[Token(Token = "0x40008F0")]
		[FieldOffset(Offset = "0x20")]
		internal GraphicsBuffer totalLevelCountBuffer;

		[Token(Token = "0x40008F1")]
		[FieldOffset(Offset = "0x28")]
		internal GraphicsBuffer levelOffsetBuffer;

		[Token(Token = "0x40008F2")]
		[FieldOffset(Offset = "0x30")]
		internal GraphicsBuffer indirectDispatchArgsBuffer;

		[Token(Token = "0x170001CB")]
		public GraphicsBuffer output
		{
			[Token(Token = "0x6000E21")]
			[Address(RVA = "0x6549BF0", Offset = "0x6548BF0", VA = "0x6549BF0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E22")]
		[Address(RVA = "0x6549C00", Offset = "0x6548C00", VA = "0x6549C00")]
		public static SupportResources Create(int maxElementCount)
		{
			return default(SupportResources);
		}

		[Token(Token = "0x6000E23")]
		[Address(RVA = "0x6549F20", Offset = "0x6548F20", VA = "0x6549F20")]
		public static SupportResources Load(RenderGraphResources shaderGraphResources)
		{
			return default(SupportResources);
		}

		[Token(Token = "0x6000E24")]
		[Address(RVA = "0x6549C70", Offset = "0x6548C70", VA = "0x6549C70")]
		internal void Resize(int newMaxElementCount)
		{
		}

		[Token(Token = "0x6000E25")]
		[Address(RVA = "0x6549FD0", Offset = "0x6548FD0", VA = "0x6549FD0")]
		private void LoadFromShaderGraph(RenderGraphResources shaderGraphResources)
		{
		}

		[Token(Token = "0x6000E26")]
		[Address(RVA = "0x654A0D0", Offset = "0x65490D0", VA = "0x654A0D0")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x20001CB")]
	public struct DirectArgs
	{
		[Token(Token = "0x40008F3")]
		[FieldOffset(Offset = "0x0")]
		public bool exclusive;

		[Token(Token = "0x40008F4")]
		[FieldOffset(Offset = "0x4")]
		public int inputCount;

		[Token(Token = "0x40008F5")]
		[FieldOffset(Offset = "0x8")]
		public GraphicsBuffer input;

		[Token(Token = "0x40008F6")]
		[FieldOffset(Offset = "0x10")]
		public SupportResources supportResources;
	}

	[Token(Token = "0x20001CC")]
	public struct IndirectDirectArgs
	{
		[Token(Token = "0x40008F7")]
		[FieldOffset(Offset = "0x0")]
		public bool exclusive;

		[Token(Token = "0x40008F8")]
		[FieldOffset(Offset = "0x4")]
		public int inputCountBufferByteOffset;

		[Token(Token = "0x40008F9")]
		[FieldOffset(Offset = "0x8")]
		public ComputeBuffer inputCountBuffer;

		[Token(Token = "0x40008FA")]
		[FieldOffset(Offset = "0x10")]
		public GraphicsBuffer input;

		[Token(Token = "0x40008FB")]
		[FieldOffset(Offset = "0x18")]
		public SupportResources supportResources;
	}

	[Token(Token = "0x20001CD")]
	public struct SystemResources
	{
		[Token(Token = "0x40008FC")]
		[FieldOffset(Offset = "0x0")]
		public ComputeShader computeAsset;

		[Token(Token = "0x40008FD")]
		[FieldOffset(Offset = "0x8")]
		internal int kernelCalculateLevelDispatchArgsFromConst;

		[Token(Token = "0x40008FE")]
		[FieldOffset(Offset = "0xC")]
		internal int kernelCalculateLevelDispatchArgsFromBuffer;

		[Token(Token = "0x40008FF")]
		[FieldOffset(Offset = "0x10")]
		internal int kernelPrefixSumOnGroup;

		[Token(Token = "0x4000900")]
		[FieldOffset(Offset = "0x14")]
		internal int kernelPrefixSumOnGroupExclusive;

		[Token(Token = "0x4000901")]
		[FieldOffset(Offset = "0x18")]
		internal int kernelPrefixSumNextInput;

		[Token(Token = "0x4000902")]
		[FieldOffset(Offset = "0x1C")]
		internal int kernelPrefixSumResolveParent;

		[Token(Token = "0x4000903")]
		[FieldOffset(Offset = "0x20")]
		internal int kernelPrefixSumResolveParentExclusive;

		[Token(Token = "0x6000E28")]
		[Address(RVA = "0x6548630", Offset = "0x6547630", VA = "0x6548630")]
		internal void LoadKernels()
		{
		}
	}

	[Token(Token = "0x20001CE")]
	private static class ShaderIDs
	{
		[Token(Token = "0x4000904")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int _InputBuffer;

		[Token(Token = "0x4000905")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int _OutputBuffer;

		[Token(Token = "0x4000906")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int _InputCountBuffer;

		[Token(Token = "0x4000907")]
		[FieldOffset(Offset = "0xC")]
		public static readonly int _TotalLevelsBuffer;

		[Token(Token = "0x4000908")]
		[FieldOffset(Offset = "0x10")]
		public static readonly int _OutputTotalLevelsBuffer;

		[Token(Token = "0x4000909")]
		[FieldOffset(Offset = "0x14")]
		public static readonly int _OutputDispatchLevelArgsBuffer;

		[Token(Token = "0x400090A")]
		[FieldOffset(Offset = "0x18")]
		public static readonly int _LevelsOffsetsBuffer;

		[Token(Token = "0x400090B")]
		[FieldOffset(Offset = "0x1C")]
		public static readonly int _OutputLevelsOffsetsBuffer;

		[Token(Token = "0x400090C")]
		[FieldOffset(Offset = "0x20")]
		public static readonly int _PrefixSumIntArgs;
	}

	[Token(Token = "0x40008DA")]
	[FieldOffset(Offset = "0x0")]
	private SystemResources resources;

	[Token(Token = "0x6000E12")]
	[Address(RVA = "0x6548600", Offset = "0x6547600", VA = "0x6548600")]
	public GPUPrefixSum(SystemResources resources)
	{
	}

	[Token(Token = "0x6000E13")]
	[Address(RVA = "0x65487C0", Offset = "0x65477C0", VA = "0x65487C0")]
	private Vector4 PackPrefixSumArgs(int a, int b, int c, int d)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000E14")]
	[Address(RVA = "0x65487E0", Offset = "0x65477E0", VA = "0x65487E0")]
	internal void ExecuteCommonIndirect(CommandBuffer cmdBuffer, GraphicsBuffer inputBuffer, in SupportResources supportResources, bool isExclusive)
	{
	}

	[Token(Token = "0x6000E15")]
	[Address(RVA = "0x6548C30", Offset = "0x6547C30", VA = "0x6548C30")]
	public void DispatchDirect(IComputeCommandBuffer cmdBuffer, in DirectArgs arguments)
	{
	}

	[Token(Token = "0x6000E16")]
	[Address(RVA = "0x6548CB0", Offset = "0x6547CB0", VA = "0x6548CB0")]
	public void DispatchDirect(CommandBuffer cmdBuffer, in DirectArgs arguments)
	{
	}

	[Token(Token = "0x6000E17")]
	[Address(RVA = "0x6548EC0", Offset = "0x6547EC0", VA = "0x6548EC0")]
	public void DispatchIndirect(IComputeCommandBuffer cmdBuffer, in IndirectDirectArgs arguments)
	{
	}

	[Token(Token = "0x6000E18")]
	[Address(RVA = "0x6548F40", Offset = "0x6547F40", VA = "0x6548F40")]
	public void DispatchIndirect(CommandBuffer cmdBuffer, in IndirectDirectArgs arguments)
	{
	}
}
