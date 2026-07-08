using Il2CppDummyDll;
using UnityEngine.Experimental.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001AE")]
public struct GPUPrefixSum
{
	[Token(Token = "0x20001AF")]
	[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, "./Library/PackageCache/com.unity.render-pipelines.core@15.0.7/Runtime/Utilities/GPUPrefixSum/GPUPrefixSum.Data.cs")]
	internal static class ShaderDefs
	{
		[Token(Token = "0x400076C")]
		public const int GroupSize = 128;

		[Token(Token = "0x6000CE3")]
		[Address(RVA = "0x48D9D40", Offset = "0x48D9D40", VA = "0x48D9D40")]
		public static int DivUpGroup(int value)
		{
			return default(int);
		}

		[Token(Token = "0x6000CE4")]
		[Address(RVA = "0x48D9D60", Offset = "0x48D9D60", VA = "0x48D9D60")]
		public static int AlignUpGroup(int value)
		{
			return default(int);
		}

		[Token(Token = "0x6000CE5")]
		[Address(RVA = "0x48D9D80", Offset = "0x48D9D80", VA = "0x48D9D80")]
		public static void CalculateTotalBufferSize(int maxElementCount, out int totalSize, out int levelCounts)
		{
		}
	}

	[Token(Token = "0x20001B0")]
	[GenerateHLSL(PackingRules.Exact, false, false, false, 1, false, false, false, -1, "./Library/PackageCache/com.unity.render-pipelines.core@15.0.7/Runtime/Utilities/GPUPrefixSum/GPUPrefixSum.Data.cs")]
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
			[Address(RVA = "0x48D9DF0", Offset = "0x48D9DF0", VA = "0x48D9DF0")]
			get
			{
				return default(BufferHandle);
			}
		}

		[Token(Token = "0x6000CE7")]
		[Address(RVA = "0x48D9E00", Offset = "0x48D9E00", VA = "0x48D9E00")]
		public static RenderGraphResources Create(int newMaxElementCount, RenderGraph renderGraph, RenderGraphBuilder builder, bool outputIsTemp = false)
		{
			return default(RenderGraphResources);
		}

		[Token(Token = "0x6000CE8")]
		[Address(RVA = "0x48D9E80", Offset = "0x48D9E80", VA = "0x48D9E80")]
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
			[Address(RVA = "0x48DA1E0", Offset = "0x48DA1E0", VA = "0x48DA1E0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000CEA")]
		[Address(RVA = "0x48DA1F0", Offset = "0x48DA1F0", VA = "0x48DA1F0")]
		public static SupportResources Create(int maxElementCount)
		{
			return default(SupportResources);
		}

		[Token(Token = "0x6000CEB")]
		[Address(RVA = "0x48DA510", Offset = "0x48DA510", VA = "0x48DA510")]
		public static SupportResources Load(RenderGraphResources shaderGraphResources)
		{
			return default(SupportResources);
		}

		[Token(Token = "0x6000CEC")]
		[Address(RVA = "0x48DA260", Offset = "0x48DA260", VA = "0x48DA260")]
		internal void Resize(int newMaxElementCount)
		{
		}

		[Token(Token = "0x6000CED")]
		[Address(RVA = "0x48DA5C0", Offset = "0x48DA5C0", VA = "0x48DA5C0")]
		private void LoadFromShaderGraph(RenderGraphResources shaderGraphResources)
		{
		}

		[Token(Token = "0x6000CEE")]
		[Address(RVA = "0x48DA6C0", Offset = "0x48DA6C0", VA = "0x48DA6C0")]
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
		[Address(RVA = "0x48D9340", Offset = "0x48D9340", VA = "0x48D9340")]
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
	[Address(RVA = "0x48D9310", Offset = "0x48D9310", VA = "0x48D9310")]
	public GPUPrefixSum(SystemResources resources)
	{
	}

	[Token(Token = "0x6000CDF")]
	[Address(RVA = "0x48D94D0", Offset = "0x48D94D0", VA = "0x48D94D0")]
	private Vector4 PackPrefixSumArgs(int a, int b, int c, int d)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6000CE0")]
	[Address(RVA = "0x48D94F0", Offset = "0x48D94F0", VA = "0x48D94F0")]
	internal void ExecuteCommonIndirect(CommandBuffer cmdBuffer, GraphicsBuffer inputBuffer, in SupportResources supportResources, bool isExclusive)
	{
	}

	[Token(Token = "0x6000CE1")]
	[Address(RVA = "0x48D9910", Offset = "0x48D9910", VA = "0x48D9910")]
	public void DispatchDirect(CommandBuffer cmdBuffer, in DirectArgs arguments)
	{
	}

	[Token(Token = "0x6000CE2")]
	[Address(RVA = "0x48D9B20", Offset = "0x48D9B20", VA = "0x48D9B20")]
	public void DispatchIndirect(CommandBuffer cmdBuffer, in IndirectDirectArgs arguments)
	{
	}
}
