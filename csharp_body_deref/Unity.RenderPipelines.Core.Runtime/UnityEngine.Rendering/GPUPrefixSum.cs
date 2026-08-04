// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUPrefixSum
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001AE")]
public struct GPUPrefixSum
{
	[Token(Token = "0x20001AF")]
	[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@15.0.7\\Runtime\\Utilities\\GPUPrefixSum\\GPUPrefixSum.Data.cs")]
	internal static class ShaderDefs
	{
		[Token(Token = "0x400076C")]
		public const int GroupSize = 128;

		[Token(Token = "0x6000CE3")]
		[Address(RVA = "0x4BFEDB0", Offset = "0x4BFEDB0", VA = "0x4BFEDB0")]
		public static int DivUpGroup(int value)
		{
			return default(int);
		}

		[Token(Token = "0x6000CE4")]
		[Address(RVA = "0x4BFEDD0", Offset = "0x4BFEDD0", VA = "0x4BFEDD0")]
		public static int AlignUpGroup(int value)
		{
			return default(int);
		}

		[Token(Token = "0x6000CE5")]
		[Address(RVA = "0x4BFEDF0", Offset = "0x4BFEDF0", VA = "0x4BFEDF0")]
		public static void CalculateTotalBufferSize(int maxElementCount, out int totalSize, out int levelCounts)
		{
		}
	}

	[Token(Token = "0x20001B0")]
	[GenerateHLSL(PackingRules.Exact, false, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@15.0.7\\Runtime\\Utilities\\GPUPrefixSum\\GPUPrefixSum.Data.cs")]
	internal struct LevelOffsets
	{
		[Token(Token = "0x400076D")]
		[FieldOffset(Offset = "0x0")]
		internal uint count;

		[Token(Token = "0x400076E")]
		[FieldOffset(Offset = "0x4")]
		internal uint offset;

		[Token(Token = "0x400076F")]
		[FieldOffset(Offset = "0x8")]
		internal uint parentOffset;
	}

	[Token(Token = "0x20001B1")]
	public struct RenderGraphResources
	{
		[Token(Token = "0x4000770")]
		[FieldOffset(Offset = "0x0")]
		internal int alignedElementCount;

		[Token(Token = "0x4000771")]
		[FieldOffset(Offset = "0x4")]
		internal int maxBufferCount;

		[Token(Token = "0x4000772")]
		[FieldOffset(Offset = "0x8")]
		internal int maxLevelCount;

		[Token(Token = "0x4000773")]
		[FieldOffset(Offset = "0xC")]
		internal BufferHandle prefixBuffer0;

		[Token(Token = "0x4000774")]
		[FieldOffset(Offset = "0x18")]
		internal BufferHandle prefixBuffer1;

		[Token(Token = "0x4000775")]
		[FieldOffset(Offset = "0x24")]
		internal BufferHandle totalLevelCountBuffer;

		[Token(Token = "0x4000776")]
		[FieldOffset(Offset = "0x30")]
		internal BufferHandle levelOffsetBuffer;

		[Token(Token = "0x4000777")]
		[FieldOffset(Offset = "0x3C")]
		internal BufferHandle indirectDispatchArgsBuffer;

		[Token(Token = "0x1700017D")]
		public BufferHandle output
		{
			[Token(Token = "0x6000CE6")]
			[Address(RVA = "0x4BFEE60", Offset = "0x4BFEE60", VA = "0x4BFEE60")]
			get
			{
				return default(BufferHandle);
			}
		}

		[Token(Token = "0x6000CE7")]
		[Address(RVA = "0x4BFEE70", Offset = "0x4BFEE70", VA = "0x4BFEE70")]
		public static RenderGraphResources Create(int newMaxElementCount, RenderGraph renderGraph, RenderGraphBuilder builder, bool outputIsTemp = false)
		{
			return default(RenderGraphResources);
		}

		[Token(Token = "0x6000CE8")]
		[Address(RVA = "0x4BFEEF0", Offset = "0x4BFEEF0", VA = "0x4BFEEF0")]
		private void Initialize(int newMaxElementCount, RenderGraph renderGraph, RenderGraphBuilder builder, bool outputIsTemp = false)
		{
		}
	}

	[Token(Token = "0x20001B2")]
	public struct SupportResources
	{
		[Token(Token = "0x4000778")]
		[FieldOffset(Offset = "0x0")]
		internal bool ownsResources;

		[Token(Token = "0x4000779")]
		[FieldOffset(Offset = "0x4")]
		internal int alignedElementCount;

		[Token(Token = "0x400077A")]
		[FieldOffset(Offset = "0x8")]
		internal int maxBufferCount;

		[Token(Token = "0x400077B")]
		[FieldOffset(Offset = "0xC")]
		internal int maxLevelCount;

		[Token(Token = "0x400077C")]
		[FieldOffset(Offset = "0x10")]
		internal GraphicsBuffer prefixBuffer0;

		[Token(Token = "0x400077D")]
		[FieldOffset(Offset = "0x18")]
		internal GraphicsBuffer prefixBuffer1;

		[Token(Token = "0x400077E")]
		[FieldOffset(Offset = "0x20")]
		internal GraphicsBuffer totalLevelCountBuffer;

		[Token(Token = "0x400077F")]
		[FieldOffset(Offset = "0x28")]
		internal GraphicsBuffer levelOffsetBuffer;

		[Token(Token = "0x4000780")]
		[FieldOffset(Offset = "0x30")]
		internal GraphicsBuffer indirectDispatchArgsBuffer;

		[Token(Token = "0x1700017E")]
		public GraphicsBuffer output
		{
			[Token(Token = "0x6000CE9")]
			[Address(RVA = "0x4BFF250", Offset = "0x4BFF250", VA = "0x4BFF250")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000CEA")]
		[Address(RVA = "0x4BFF260", Offset = "0x4BFF260", VA = "0x4BFF260")]
		public static SupportResources Create(int maxElementCount)
		{
			return default(SupportResources);
		}

		[Token(Token = "0x6000CEB")]
		[Address(RVA = "0x4BFF580", Offset = "0x4BFF580", VA = "0x4BFF580")]
		public static SupportResources Load(RenderGraphResources shaderGraphResources)
		{
			return default(SupportResources);
		}

		[Token(Token = "0x6000CEC")]
		[Address(RVA = "0x4BFF2D0", Offset = "0x4BFF2D0", VA = "0x4BFF2D0")]
		internal void Resize(int newMaxElementCount)
		{
		}

		[Token(Token = "0x6000CED")]
		[Address(RVA = "0x4BFF630", Offset = "0x4BFF630", VA = "0x4BFF630")]
		private void LoadFromShaderGraph(RenderGraphResources shaderGraphResources)
		{
		}

		[Token(Token = "0x6000CEE")]
		[Address(RVA = "0x4BFF730", Offset = "0x4BFF730", VA = "0x4BFF730")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x20001B3")]
	public struct DirectArgs
	{
		[Token(Token = "0x4000781")]
		[FieldOffset(Offset = "0x0")]
		public bool exclusive;

		[Token(Token = "0x4000782")]
		[FieldOffset(Offset = "0x4")]
		public int inputCount;

		[Token(Token = "0x4000783")]
		[FieldOffset(Offset = "0x8")]
		public GraphicsBuffer input;

		[Token(Token = "0x4000784")]
		[FieldOffset(Offset = "0x10")]
		public SupportResources supportResources;
	}

	[Token(Token = "0x20001B4")]
	public struct IndirectDirectArgs
	{
		[Token(Token = "0x4000785")]
		[FieldOffset(Offset = "0x0")]
		public bool exclusive;

		[Token(Token = "0x4000786")]
		[FieldOffset(Offset = "0x4")]
		public int inputCountBufferByteOffset;

		[Token(Token = "0x4000787")]
		[FieldOffset(Offset = "0x8")]
		public ComputeBuffer inputCountBuffer;

		[Token(Token = "0x4000788")]
		[FieldOffset(Offset = "0x10")]
		public GraphicsBuffer input;

		[Token(Token = "0x4000789")]
		[FieldOffset(Offset = "0x18")]
		public SupportResources supportResources;
	}

	[Token(Token = "0x20001B5")]
	public struct SystemResources
	{
		[Token(Token = "0x400078A")]
		[FieldOffset(Offset = "0x0")]
		public ComputeShader computeAsset;

		[Token(Token = "0x400078B")]
		[FieldOffset(Offset = "0x8")]
		internal int kernelCalculateLevelDispatchArgsFromConst;

		[Token(Token = "0x400078C")]
		[FieldOffset(Offset = "0xC")]
		internal int kernelCalculateLevelDispatchArgsFromBuffer;

		[Token(Token = "0x400078D")]
		[FieldOffset(Offset = "0x10")]
		internal int kernelPrefixSumOnGroup;

		[Token(Token = "0x400078E")]
		[FieldOffset(Offset = "0x14")]
		internal int kernelPrefixSumOnGroupExclusive;

		[Token(Token = "0x400078F")]
		[FieldOffset(Offset = "0x18")]
		internal int kernelPrefixSumNextInput;

		[Token(Token = "0x4000790")]
		[FieldOffset(Offset = "0x1C")]
		internal int kernelPrefixSumResolveParent;

		[Token(Token = "0x4000791")]
		[FieldOffset(Offset = "0x20")]
		internal int kernelPrefixSumResolveParentExclusive;

		[Token(Token = "0x6000CF0")]
		[Address(RVA = "0x4BFE3B0", Offset = "0x4BFE3B0", VA = "0x4BFE3B0")]
		internal void LoadKernels()
		{
		}
	}

	[Token(Token = "0x20001B6")]
	private static class ShaderIDs
	{
		[Token(Token = "0x4000792")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int _InputBuffer;

		[Token(Token = "0x4000793")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int _OutputBuffer;

		[Token(Token = "0x4000794")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int _InputCountBuffer;

		[Token(Token = "0x4000795")]
		[FieldOffset(Offset = "0xC")]
		public static readonly int _TotalLevelsBuffer;

		[Token(Token = "0x4000796")]
		[FieldOffset(Offset = "0x10")]
		public static readonly int _OutputTotalLevelsBuffer;

		[Token(Token = "0x4000797")]
		[FieldOffset(Offset = "0x14")]
		public static readonly int _OutputDispatchLevelArgsBuffer;

		[Token(Token = "0x4000798")]
		[FieldOffset(Offset = "0x18")]
		public static readonly int _LevelsOffsetsBuffer;

		[Token(Token = "0x4000799")]
		[FieldOffset(Offset = "0x1C")]
		public static readonly int _OutputLevelsOffsetsBuffer;

		[Token(Token = "0x400079A")]
		[FieldOffset(Offset = "0x20")]
		public static readonly int _PrefixSumIntArgs;
	}

	[Token(Token = "0x400076B")]
	[FieldOffset(Offset = "0x0")]
	private SystemResources resources;

	[Token(Token = "0x6000CDE")]
	[Address(RVA = "0x4BFE380", Offset = "0x4BFE380", VA = "0x4BFE380")]
	public GPUPrefixSum(SystemResources resources)
	{
	}

	[Token(Token = "0x6000CDF")]
	[Address(RVA = "0x4BFE540", Offset = "0x4BFE540", VA = "0x4BFE540")]
	private Vector4 PackPrefixSumArgs(int a, int b, int c, int d)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000CE0")]
	[Address(RVA = "0x4BFE560", Offset = "0x4BFE560", VA = "0x4BFE560")]
	internal void ExecuteCommonIndirect(CommandBuffer cmdBuffer, GraphicsBuffer inputBuffer, in SupportResources supportResources, bool isExclusive)
	{
	}

	[Token(Token = "0x6000CE1")]
	[Address(RVA = "0x4BFE980", Offset = "0x4BFE980", VA = "0x4BFE980")]
	public void DispatchDirect(CommandBuffer cmdBuffer, in DirectArgs arguments)
	{
	}

	[Token(Token = "0x6000CE2")]
	[Address(RVA = "0x4BFEB90", Offset = "0x4BFEB90", VA = "0x4BFEB90")]
	public void DispatchIndirect(CommandBuffer cmdBuffer, in IndirectDirectArgs arguments)
	{
	}
}
