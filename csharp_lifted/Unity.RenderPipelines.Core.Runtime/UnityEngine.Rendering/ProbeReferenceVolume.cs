// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeReferenceVolume
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.IO.LowLevel.Unsafe;
using UnityEngine.Rendering.RenderGraphModule;
using UnityEngine.SceneManagement;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000FE")]
public class ProbeReferenceVolume
{
	[Token(Token = "0x20000FF")]
	internal static class ShaderIDs
	{
		[Token(Token = "0x400041F")]
		[FieldOffset(Offset = "0x0")]
		public static readonly int _APVResIndex;

		[Token(Token = "0x4000420")]
		[FieldOffset(Offset = "0x4")]
		public static readonly int _APVResCellIndices;

		[Token(Token = "0x4000421")]
		[FieldOffset(Offset = "0x8")]
		public static readonly int _APVResL0_L1Rx;

		[Token(Token = "0x4000422")]
		[FieldOffset(Offset = "0xC")]
		public static readonly int _APVResL1G_L1Ry;

		[Token(Token = "0x4000423")]
		[FieldOffset(Offset = "0x10")]
		public static readonly int _APVResL1B_L1Rz;

		[Token(Token = "0x4000424")]
		[FieldOffset(Offset = "0x14")]
		public static readonly int _APVResL2_0;

		[Token(Token = "0x4000425")]
		[FieldOffset(Offset = "0x18")]
		public static readonly int _APVResL2_1;

		[Token(Token = "0x4000426")]
		[FieldOffset(Offset = "0x1C")]
		public static readonly int _APVResL2_2;

		[Token(Token = "0x4000427")]
		[FieldOffset(Offset = "0x20")]
		public static readonly int _APVResL2_3;

		[Token(Token = "0x4000428")]
		[FieldOffset(Offset = "0x24")]
		public static readonly int _APVProbeOcclusion;

		[Token(Token = "0x4000429")]
		[FieldOffset(Offset = "0x28")]
		public static readonly int _APVResValidity;

		[Token(Token = "0x400042A")]
		[FieldOffset(Offset = "0x2C")]
		public static readonly int _SkyOcclusionTexL0L1;

		[Token(Token = "0x400042B")]
		[FieldOffset(Offset = "0x30")]
		public static readonly int _SkyShadingDirectionIndicesTex;

		[Token(Token = "0x400042C")]
		[FieldOffset(Offset = "0x34")]
		public static readonly int _SkyPrecomputedDirections;

		[Token(Token = "0x400042D")]
		[FieldOffset(Offset = "0x38")]
		public static readonly int _AntiLeakData;
	}

	[Token(Token = "0x2000100")]
	internal class CellInstancedDebugProbes
	{
		[Token(Token = "0x400042E")]
		[FieldOffset(Offset = "0x10")]
		public List<Matrix4x4[]> probeBuffers;

		[Token(Token = "0x400042F")]
		[FieldOffset(Offset = "0x18")]
		public List<Matrix4x4[]> offsetBuffers;

		[Token(Token = "0x4000430")]
		[FieldOffset(Offset = "0x20")]
		public List<MaterialPropertyBlock> props;

		[Token(Token = "0x60009BE")]
		[Address(RVA = "0x65039D0", Offset = "0x65029D0", VA = "0x65039D0")]
		public CellInstancedDebugProbes()
		{
		}
	}

	[Token(Token = "0x2000101")]
	private class RenderFragmentationOverlayPassData
	{
		[Token(Token = "0x4000431")]
		[FieldOffset(Offset = "0x10")]
		public Material debugFragmentationMaterial;

		[Token(Token = "0x4000432")]
		[FieldOffset(Offset = "0x18")]
		public DebugOverlay debugOverlay;

		[Token(Token = "0x4000433")]
		[FieldOffset(Offset = "0x20")]
		public int chunkCount;

		[Token(Token = "0x4000434")]
		[FieldOffset(Offset = "0x28")]
		public ComputeBuffer debugFragmentationData;

		[Token(Token = "0x4000435")]
		[FieldOffset(Offset = "0x30")]
		public TextureHandle colorBuffer;

		[Token(Token = "0x4000436")]
		[FieldOffset(Offset = "0x40")]
		public TextureHandle depthBuffer;

		[Token(Token = "0x60009BF")]
		[Address(RVA = "0x65039E0", Offset = "0x65029E0", VA = "0x65039E0")]
		public RenderFragmentationOverlayPassData()
		{
		}
	}

	[Token(Token = "0x2000102")]
	internal class DiskStreamingRequest
	{
		[Token(Token = "0x4000437")]
		[FieldOffset(Offset = "0x10")]
		private ReadHandle m_ReadHandle;

		[Token(Token = "0x4000438")]
		[FieldOffset(Offset = "0x20")]
		private ReadCommandArray m_ReadCommandArray;

		[Token(Token = "0x4000439")]
		[FieldOffset(Offset = "0x30")]
		private NativeArray<ReadCommand> m_ReadCommandBuffer;

		[Token(Token = "0x400043A")]
		[FieldOffset(Offset = "0x40")]
		private int m_BytesWritten;

		[Token(Token = "0x60009C0")]
		[Address(RVA = "0x65039F0", Offset = "0x65029F0", VA = "0x65039F0")]
		public DiskStreamingRequest(int maxRequestCount)
		{
		}

		[Token(Token = "0x60009C1")]
		[Address(RVA = "0x6503A60", Offset = "0x6502A60", VA = "0x6503A60")]
		public unsafe void AddReadCommand(int offset, int size, byte* dest)
		{
		}

		[Token(Token = "0x60009C2")]
		[Address(RVA = "0x6503A90", Offset = "0x6502A90", VA = "0x6503A90")]
		public int RunCommands(FileHandle file)
		{
			return default(int);
		}

		[Token(Token = "0x60009C3")]
		[Address(RVA = "0x6503B00", Offset = "0x6502B00", VA = "0x6503B00")]
		public void Clear()
		{
		}

		[Token(Token = "0x60009C4")]
		[Address(RVA = "0x6503B70", Offset = "0x6502B70", VA = "0x6503B70")]
		public void Cancel()
		{
		}

		[Token(Token = "0x60009C5")]
		[Address(RVA = "0x6503BA0", Offset = "0x6502BA0", VA = "0x6503BA0")]
		public void Wait()
		{
		}

		[Token(Token = "0x60009C6")]
		[Address(RVA = "0x6503BF0", Offset = "0x6502BF0", VA = "0x6503BF0")]
		public void Dispose()
		{
		}

		[Token(Token = "0x60009C7")]
		[Address(RVA = "0x6503C30", Offset = "0x6502C30", VA = "0x6503C30")]
		public ReadStatus GetStatus()
		{
			return default(ReadStatus);
		}
	}

	[Token(Token = "0x2000103")]
	[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@6c7e6aba313a\\Runtime\\Lighting\\ProbeVolume\\ProbeReferenceVolume.Streaming.cs", needAccessors = false, generateCBuffer = true)]
	internal struct CellStreamingScratchBufferLayout
	{
		[Token(Token = "0x400043B")]
		[FieldOffset(Offset = "0x0")]
		public int _SharedDestChunksOffset;

		[Token(Token = "0x400043C")]
		[FieldOffset(Offset = "0x4")]
		public int _L0L1rxOffset;

		[Token(Token = "0x400043D")]
		[FieldOffset(Offset = "0x8")]
		public int _L1GryOffset;

		[Token(Token = "0x400043E")]
		[FieldOffset(Offset = "0xC")]
		public int _L1BrzOffset;

		[Token(Token = "0x400043F")]
		[FieldOffset(Offset = "0x10")]
		public int _ValidityOffset;

		[Token(Token = "0x4000440")]
		[FieldOffset(Offset = "0x14")]
		public int _ProbeOcclusionOffset;

		[Token(Token = "0x4000441")]
		[FieldOffset(Offset = "0x18")]
		public int _SkyOcclusionOffset;

		[Token(Token = "0x4000442")]
		[FieldOffset(Offset = "0x1C")]
		public int _SkyShadingDirectionOffset;

		[Token(Token = "0x4000443")]
		[FieldOffset(Offset = "0x20")]
		public int _L2_0Offset;

		[Token(Token = "0x4000444")]
		[FieldOffset(Offset = "0x24")]
		public int _L2_1Offset;

		[Token(Token = "0x4000445")]
		[FieldOffset(Offset = "0x28")]
		public int _L2_2Offset;

		[Token(Token = "0x4000446")]
		[FieldOffset(Offset = "0x2C")]
		public int _L2_3Offset;

		[Token(Token = "0x4000447")]
		[FieldOffset(Offset = "0x30")]
		public int _L0Size;

		[Token(Token = "0x4000448")]
		[FieldOffset(Offset = "0x34")]
		public int _L0ProbeSize;

		[Token(Token = "0x4000449")]
		[FieldOffset(Offset = "0x38")]
		public int _L1Size;

		[Token(Token = "0x400044A")]
		[FieldOffset(Offset = "0x3C")]
		public int _L1ProbeSize;

		[Token(Token = "0x400044B")]
		[FieldOffset(Offset = "0x40")]
		public int _ValiditySize;

		[Token(Token = "0x400044C")]
		[FieldOffset(Offset = "0x44")]
		public int _ValidityProbeSize;

		[Token(Token = "0x400044D")]
		[FieldOffset(Offset = "0x48")]
		public int _ProbeOcclusionSize;

		[Token(Token = "0x400044E")]
		[FieldOffset(Offset = "0x4C")]
		public int _ProbeOcclusionProbeSize;

		[Token(Token = "0x400044F")]
		[FieldOffset(Offset = "0x50")]
		public int _SkyOcclusionSize;

		[Token(Token = "0x4000450")]
		[FieldOffset(Offset = "0x54")]
		public int _SkyOcclusionProbeSize;

		[Token(Token = "0x4000451")]
		[FieldOffset(Offset = "0x58")]
		public int _SkyShadingDirectionSize;

		[Token(Token = "0x4000452")]
		[FieldOffset(Offset = "0x5C")]
		public int _SkyShadingDirectionProbeSize;

		[Token(Token = "0x4000453")]
		[FieldOffset(Offset = "0x60")]
		public int _L2Size;

		[Token(Token = "0x4000454")]
		[FieldOffset(Offset = "0x64")]
		public int _L2ProbeSize;

		[Token(Token = "0x4000455")]
		[FieldOffset(Offset = "0x68")]
		public int _ProbeCountInChunkLine;

		[Token(Token = "0x4000456")]
		[FieldOffset(Offset = "0x6C")]
		public int _ProbeCountInChunkSlice;
	}

	[Token(Token = "0x2000104")]
	internal struct BufferLayoutBuilder
	{
		[Token(Token = "0x4000457")]
		[FieldOffset(Offset = "0x0")]
		private int _Offset;

		[Token(Token = "0x60009C8")]
		[Address(RVA = "0x6503C60", Offset = "0x6502C60", VA = "0x6503C60")]
		public BufferLayoutBuilder(int initialOffset = 0)
		{
		}

		[Token(Token = "0x60009C9")]
		[Address(RVA = "0x6503C70", Offset = "0x6502C70", VA = "0x6503C70")]
		public int AddBlock(int blockSize)
		{
			return default(int);
		}
	}

	[Token(Token = "0x2000105")]
	internal class CellStreamingScratchBuffer
	{
		[Token(Token = "0x4000458")]
		[FieldOffset(Offset = "0x10")]
		public NativeArray<byte> stagingBuffer;

		[Token(Token = "0x400045B")]
		[FieldOffset(Offset = "0x28")]
		private int m_CurrentBuffer;

		[Token(Token = "0x400045C")]
		[FieldOffset(Offset = "0x30")]
		private GraphicsBuffer[] m_GraphicsBuffers;

		[Token(Token = "0x17000118")]
		public GraphicsBuffer buffer
		{
			[Token(Token = "0x60009CD")]
			[Address(RVA = "0x6500600", Offset = "0x64FF600", VA = "0x6500600")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000119")]
		public int chunkCount
		{
			[Token(Token = "0x60009CE")]
			[Address(RVA = "0x6503EF0", Offset = "0x6502EF0", VA = "0x6503EF0")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700011A")]
		public int chunkSize
		{
			[Token(Token = "0x60009CF")]
			[Address(RVA = "0x6503F00", Offset = "0x6502F00", VA = "0x6503F00")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x60009CA")]
		[Address(RVA = "0x6503C80", Offset = "0x6502C80", VA = "0x6503C80")]
		public CellStreamingScratchBuffer(int chunkCount, int chunkSize, bool allocateGraphicsBuffers)
		{
		}

		[Token(Token = "0x60009CB")]
		[Address(RVA = "0x6503E30", Offset = "0x6502E30", VA = "0x6503E30")]
		public void Swap()
		{
		}

		[Token(Token = "0x60009CC")]
		[Address(RVA = "0x6503E50", Offset = "0x6502E50", VA = "0x6503E50")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x2000106")]
	[DebuggerDisplay("Index = {cell.desc.index} State = {state}")]
	internal class CellStreamingRequest
	{
		[Token(Token = "0x2000107")]
		public enum State
		{
			[Token(Token = "0x400046D")]
			Pending,
			[Token(Token = "0x400046E")]
			Active,
			[Token(Token = "0x400046F")]
			Canceled,
			[Token(Token = "0x4000470")]
			Invalid,
			[Token(Token = "0x4000471")]
			Complete
		}

		[Token(Token = "0x2000108")]
		public delegate void OnStreamingCompleteDelegate(CellStreamingRequest request, CommandBuffer cmd);

		[Token(Token = "0x4000464")]
		[FieldOffset(Offset = "0xA8")]
		public OnStreamingCompleteDelegate onStreamingComplete;

		[Token(Token = "0x4000465")]
		[FieldOffset(Offset = "0xB0")]
		public DiskStreamingRequest cellDataStreamingRequest;

		[Token(Token = "0x4000466")]
		[FieldOffset(Offset = "0xB8")]
		public DiskStreamingRequest cellOptionalDataStreamingRequest;

		[Token(Token = "0x4000467")]
		[FieldOffset(Offset = "0xC0")]
		public DiskStreamingRequest cellSharedDataStreamingRequest;

		[Token(Token = "0x4000468")]
		[FieldOffset(Offset = "0xC8")]
		public DiskStreamingRequest cellProbeOcclusionDataStreamingRequest;

		[Token(Token = "0x4000469")]
		[FieldOffset(Offset = "0xD0")]
		public DiskStreamingRequest brickStreamingRequest;

		[Token(Token = "0x400046A")]
		[FieldOffset(Offset = "0xD8")]
		public DiskStreamingRequest supportStreamingRequest;

		[Token(Token = "0x400046B")]
		[FieldOffset(Offset = "0xE0")]
		public int bytesWritten;

		[Token(Token = "0x1700011B")]
		public Cell cell
		{
			[Token(Token = "0x60009D0")]
			[Address(RVA = "0x6503F10", Offset = "0x6502F10", VA = "0x6503F10")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60009D1")]
			[Address(RVA = "0x6503F20", Offset = "0x6502F20", VA = "0x6503F20")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700011C")]
		public State state
		{
			[Token(Token = "0x60009D2")]
			[Address(RVA = "0x6503F30", Offset = "0x6502F30", VA = "0x6503F30")]
			[CompilerGenerated]
			get
			{
				return default(State);
			}
			[Token(Token = "0x60009D3")]
			[Address(RVA = "0x6503F40", Offset = "0x6502F40", VA = "0x6503F40")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700011D")]
		public CellStreamingScratchBuffer scratchBuffer
		{
			[Token(Token = "0x60009D4")]
			[Address(RVA = "0x6503F50", Offset = "0x6502F50", VA = "0x6503F50")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60009D5")]
			[Address(RVA = "0x6503F60", Offset = "0x6502F60", VA = "0x6503F60")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700011E")]
		public CellStreamingScratchBufferLayout scratchBufferLayout
		{
			[Token(Token = "0x60009D6")]
			[Address(RVA = "0x6503F70", Offset = "0x6502F70", VA = "0x6503F70")]
			[CompilerGenerated]
			get
			{
				return default(CellStreamingScratchBufferLayout);
			}
			[Token(Token = "0x60009D7")]
			[Address(RVA = "0x6503FB0", Offset = "0x6502FB0", VA = "0x6503FB0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700011F")]
		public ProbeVolumeBakingSet.PerScenarioDataInfo scenarioData
		{
			[Token(Token = "0x60009D8")]
			[Address(RVA = "0x6504000", Offset = "0x6503000", VA = "0x6504000")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60009D9")]
			[Address(RVA = "0x6504010", Offset = "0x6503010", VA = "0x6504010")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000120")]
		public int poolIndex
		{
			[Token(Token = "0x60009DA")]
			[Address(RVA = "0x6504030", Offset = "0x6503030", VA = "0x6504030")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60009DB")]
			[Address(RVA = "0x6504040", Offset = "0x6503040", VA = "0x6504040")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000121")]
		public bool streamSharedData
		{
			[Token(Token = "0x60009DC")]
			[Address(RVA = "0x6504050", Offset = "0x6503050", VA = "0x6504050")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x60009DD")]
			[Address(RVA = "0x6504060", Offset = "0x6503060", VA = "0x6504060")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x60009DE")]
		[Address(RVA = "0x6504070", Offset = "0x6503070", VA = "0x6504070")]
		public bool IsStreaming()
		{
			return default(bool);
		}

		[Token(Token = "0x60009DF")]
		[Address(RVA = "0x6504080", Offset = "0x6503080", VA = "0x6504080")]
		public void Cancel()
		{
		}

		[Token(Token = "0x60009E0")]
		[Address(RVA = "0x65041B0", Offset = "0x65031B0", VA = "0x65041B0")]
		public void WaitAll()
		{
		}

		[Token(Token = "0x60009E1")]
		[Address(RVA = "0x6504390", Offset = "0x6503390", VA = "0x6504390")]
		public bool UpdateRequestState(DiskStreamingRequest request, ref bool isComplete)
		{
			return default(bool);
		}

		[Token(Token = "0x60009E2")]
		[Address(RVA = "0x65043F0", Offset = "0x65033F0", VA = "0x65043F0")]
		public void UpdateState()
		{
		}

		[Token(Token = "0x60009E3")]
		[Address(RVA = "0x6504600", Offset = "0x6503600", VA = "0x6504600")]
		public void Clear()
		{
		}

		[Token(Token = "0x60009E4")]
		[Address(RVA = "0x6504620", Offset = "0x6503620", VA = "0x6504620")]
		public void Reset()
		{
		}

		[Token(Token = "0x60009E5")]
		[Address(RVA = "0x6504890", Offset = "0x6503890", VA = "0x6504890")]
		public void Dispose()
		{
		}

		[Token(Token = "0x60009E6")]
		[Address(RVA = "0x6504A10", Offset = "0x6503A10", VA = "0x6504A10")]
		public CellStreamingRequest()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000109")]
	internal struct IndirectionEntryInfo
	{
		[Token(Token = "0x4000472")]
		[FieldOffset(Offset = "0x0")]
		public Vector3Int positionInBricks;

		[Token(Token = "0x4000473")]
		[FieldOffset(Offset = "0xC")]
		public int minSubdiv;

		[Token(Token = "0x4000474")]
		[FieldOffset(Offset = "0x10")]
		public Vector3Int minBrickPos;

		[Token(Token = "0x4000475")]
		[FieldOffset(Offset = "0x1C")]
		public Vector3Int maxBrickPosPlusOne;

		[Token(Token = "0x4000476")]
		[FieldOffset(Offset = "0x28")]
		public bool hasMinMax;

		[Token(Token = "0x4000477")]
		[FieldOffset(Offset = "0x29")]
		public bool hasOnlyBiggerBricks;
	}

	[Serializable]
	[Token(Token = "0x200010A")]
	internal class CellDesc
	{
		[Token(Token = "0x4000478")]
		[FieldOffset(Offset = "0x10")]
		public Vector3Int position;

		[Token(Token = "0x4000479")]
		[FieldOffset(Offset = "0x1C")]
		public int index;

		[Token(Token = "0x400047A")]
		[FieldOffset(Offset = "0x20")]
		public int probeCount;

		[Token(Token = "0x400047B")]
		[FieldOffset(Offset = "0x24")]
		public int minSubdiv;

		[Token(Token = "0x400047C")]
		[FieldOffset(Offset = "0x28")]
		public int indexChunkCount;

		[Token(Token = "0x400047D")]
		[FieldOffset(Offset = "0x2C")]
		public int shChunkCount;

		[Token(Token = "0x400047E")]
		[FieldOffset(Offset = "0x30")]
		public int bricksCount;

		[Token(Token = "0x400047F")]
		[FieldOffset(Offset = "0x38")]
		public IndirectionEntryInfo[] indirectionEntryInfo;

		[Token(Token = "0x60009EB")]
		[Address(RVA = "0x6504E70", Offset = "0x6503E70", VA = "0x6504E70", Slot = "3")]
		public override string ToString()
		{
			return null;
		}

		[Token(Token = "0x60009EC")]
		[Address(RVA = "0x6504F10", Offset = "0x6503F10", VA = "0x6504F10")]
		public CellDesc()
		{
		}
	}

	[Token(Token = "0x200010B")]
	internal class CellData
	{
		[Token(Token = "0x200010C")]
		public struct PerScenarioData
		{
			[Token(Token = "0x400048A")]
			[FieldOffset(Offset = "0x0")]
			public NativeArray<ushort> shL0L1RxData;

			[Token(Token = "0x400048B")]
			[FieldOffset(Offset = "0x10")]
			public NativeArray<byte> shL1GL1RyData;

			[Token(Token = "0x400048C")]
			[FieldOffset(Offset = "0x20")]
			public NativeArray<byte> shL1BL1RzData;

			[Token(Token = "0x400048D")]
			[FieldOffset(Offset = "0x30")]
			public NativeArray<byte> shL2Data_0;

			[Token(Token = "0x400048E")]
			[FieldOffset(Offset = "0x40")]
			public NativeArray<byte> shL2Data_1;

			[Token(Token = "0x400048F")]
			[FieldOffset(Offset = "0x50")]
			public NativeArray<byte> shL2Data_2;

			[Token(Token = "0x4000490")]
			[FieldOffset(Offset = "0x60")]
			public NativeArray<byte> shL2Data_3;

			[Token(Token = "0x4000491")]
			[FieldOffset(Offset = "0x70")]
			public NativeArray<byte> probeOcclusion;
		}

		[Token(Token = "0x4000480")]
		[FieldOffset(Offset = "0x10")]
		public NativeArray<byte> validityNeighMaskData;

		[Token(Token = "0x4000483")]
		[FieldOffset(Offset = "0x40")]
		public Dictionary<string, PerScenarioData> scenarios;

		[Token(Token = "0x17000122")]
		public NativeArray<ushort> skyOcclusionDataL0L1
		{
			[Token(Token = "0x60009ED")]
			[Address(RVA = "0x6504F20", Offset = "0x6503F20", VA = "0x6504F20")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<ushort>);
			}
			[Token(Token = "0x60009EE")]
			[Address(RVA = "0x6504F30", Offset = "0x6503F30", VA = "0x6504F30")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x17000123")]
		public NativeArray<byte> skyShadingDirectionIndices
		{
			[Token(Token = "0x60009EF")]
			[Address(RVA = "0x6504F40", Offset = "0x6503F40", VA = "0x6504F40")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<byte>);
			}
			[Token(Token = "0x60009F0")]
			[Address(RVA = "0x6504F50", Offset = "0x6503F50", VA = "0x6504F50")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x17000124")]
		public NativeArray<ProbeBrickIndex.Brick> bricks
		{
			[Token(Token = "0x60009F1")]
			[Address(RVA = "0x6504F60", Offset = "0x6503F60", VA = "0x6504F60")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<ProbeBrickIndex.Brick>);
			}
			[Token(Token = "0x60009F2")]
			[Address(RVA = "0x6504F70", Offset = "0x6503F70", VA = "0x6504F70")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x17000125")]
		public NativeArray<Vector3> probePositions
		{
			[Token(Token = "0x60009F3")]
			[Address(RVA = "0x6504F80", Offset = "0x6503F80", VA = "0x6504F80")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<Vector3>);
			}
			[Token(Token = "0x60009F4")]
			[Address(RVA = "0x6504F90", Offset = "0x6503F90", VA = "0x6504F90")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x17000126")]
		public NativeArray<float> touchupVolumeInteraction
		{
			[Token(Token = "0x60009F5")]
			[Address(RVA = "0x6504FA0", Offset = "0x6503FA0", VA = "0x6504FA0")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<float>);
			}
			[Token(Token = "0x60009F6")]
			[Address(RVA = "0x6504FB0", Offset = "0x6503FB0", VA = "0x6504FB0")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x17000127")]
		public NativeArray<Vector3> offsetVectors
		{
			[Token(Token = "0x60009F7")]
			[Address(RVA = "0x6504FC0", Offset = "0x6503FC0", VA = "0x6504FC0")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<Vector3>);
			}
			[Token(Token = "0x60009F8")]
			[Address(RVA = "0x6504FD0", Offset = "0x6503FD0", VA = "0x6504FD0")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x17000128")]
		public NativeArray<float> validity
		{
			[Token(Token = "0x60009F9")]
			[Address(RVA = "0x6504FE0", Offset = "0x6503FE0", VA = "0x6504FE0")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<float>);
			}
			[Token(Token = "0x60009FA")]
			[Address(RVA = "0x6504FF0", Offset = "0x6503FF0", VA = "0x6504FF0")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x17000129")]
		public NativeArray<byte> layer
		{
			[Token(Token = "0x60009FB")]
			[Address(RVA = "0x6505000", Offset = "0x6504000", VA = "0x6505000")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<byte>);
			}
			[Token(Token = "0x60009FC")]
			[Address(RVA = "0x6505010", Offset = "0x6504010", VA = "0x6505010")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x60009FD")]
		[Address(RVA = "0x6505020", Offset = "0x6504020", VA = "0x6505020")]
		public void CleanupPerScenarioData(in PerScenarioData data)
		{
		}

		[Token(Token = "0x60009FE")]
		[Address(RVA = "0x6505170", Offset = "0x6504170", VA = "0x6505170")]
		public void Cleanup(bool cleanScenarioList)
		{
		}

		[Token(Token = "0x60009FF")]
		[Address(RVA = "0x6505690", Offset = "0x6504690", VA = "0x6505690")]
		public CellData()
		{
		}
	}

	[Token(Token = "0x200010D")]
	internal class CellPoolInfo
	{
		[Token(Token = "0x4000492")]
		[FieldOffset(Offset = "0x10")]
		public List<ProbeBrickPool.BrickChunkAlloc> chunkList;

		[Token(Token = "0x4000493")]
		[FieldOffset(Offset = "0x18")]
		public int shChunkCount;

		[Token(Token = "0x6000A00")]
		[Address(RVA = "0x6505710", Offset = "0x6504710", VA = "0x6505710")]
		public void Clear()
		{
		}

		[Token(Token = "0x6000A01")]
		[Address(RVA = "0x6505750", Offset = "0x6504750", VA = "0x6505750")]
		public CellPoolInfo()
		{
		}
	}

	[Token(Token = "0x200010E")]
	internal class CellIndexInfo
	{
		[Token(Token = "0x4000494")]
		[FieldOffset(Offset = "0x10")]
		public int[] flatIndicesInGlobalIndirection;

		[Token(Token = "0x4000495")]
		[FieldOffset(Offset = "0x18")]
		public ProbeBrickIndex.CellIndexUpdateInfo updateInfo;

		[Token(Token = "0x4000496")]
		[FieldOffset(Offset = "0x20")]
		public bool indexUpdated;

		[Token(Token = "0x4000497")]
		[FieldOffset(Offset = "0x28")]
		public IndirectionEntryInfo[] indirectionEntryInfo;

		[Token(Token = "0x4000498")]
		[FieldOffset(Offset = "0x30")]
		public int indexChunkCount;

		[Token(Token = "0x6000A02")]
		[Address(RVA = "0x65057D0", Offset = "0x65047D0", VA = "0x65057D0")]
		public void Clear()
		{
		}

		[Token(Token = "0x6000A03")]
		[Address(RVA = "0x6505810", Offset = "0x6504810", VA = "0x6505810")]
		public CellIndexInfo()
		{
		}
	}

	[Token(Token = "0x200010F")]
	internal class CellBlendingInfo
	{
		[Token(Token = "0x4000499")]
		[FieldOffset(Offset = "0x10")]
		public List<ProbeBrickPool.BrickChunkAlloc> chunkList;

		[Token(Token = "0x400049A")]
		[FieldOffset(Offset = "0x18")]
		public float blendingScore;

		[Token(Token = "0x400049B")]
		[FieldOffset(Offset = "0x1C")]
		public float blendingFactor;

		[Token(Token = "0x400049C")]
		[FieldOffset(Offset = "0x20")]
		public bool blending;

		[Token(Token = "0x6000A04")]
		[Address(RVA = "0x6505820", Offset = "0x6504820", VA = "0x6505820")]
		public void MarkUpToDate()
		{
		}

		[Token(Token = "0x6000A05")]
		[Address(RVA = "0x6505830", Offset = "0x6504830", VA = "0x6505830")]
		public bool IsUpToDate()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A06")]
		[Address(RVA = "0x6505850", Offset = "0x6504850", VA = "0x6505850")]
		public void ForceReupload()
		{
		}

		[Token(Token = "0x6000A07")]
		[Address(RVA = "0x6505860", Offset = "0x6504860", VA = "0x6505860")]
		public bool ShouldReupload()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A08")]
		[Address(RVA = "0x6505880", Offset = "0x6504880", VA = "0x6505880")]
		public void Prioritize()
		{
		}

		[Token(Token = "0x6000A09")]
		[Address(RVA = "0x6505890", Offset = "0x6504890", VA = "0x6505890")]
		public bool ShouldPrioritize()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A0A")]
		[Address(RVA = "0x65058B0", Offset = "0x65048B0", VA = "0x65058B0")]
		public void Clear()
		{
		}

		[Token(Token = "0x6000A0B")]
		[Address(RVA = "0x6505900", Offset = "0x6504900", VA = "0x6505900")]
		public CellBlendingInfo()
		{
		}
	}

	[Token(Token = "0x2000110")]
	internal class CellStreamingInfo
	{
		[Token(Token = "0x400049D")]
		[FieldOffset(Offset = "0x10")]
		public CellStreamingRequest request;

		[Token(Token = "0x400049E")]
		[FieldOffset(Offset = "0x18")]
		public CellStreamingRequest blendingRequest0;

		[Token(Token = "0x400049F")]
		[FieldOffset(Offset = "0x20")]
		public CellStreamingRequest blendingRequest1;

		[Token(Token = "0x40004A0")]
		[FieldOffset(Offset = "0x28")]
		public float streamingScore;

		[Token(Token = "0x6000A0C")]
		[Address(RVA = "0x6505980", Offset = "0x6504980", VA = "0x6505980")]
		public bool IsStreaming()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A0D")]
		[Address(RVA = "0x65059A0", Offset = "0x65049A0", VA = "0x65059A0")]
		public bool IsBlendingStreaming()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A0E")]
		[Address(RVA = "0x65059D0", Offset = "0x65049D0", VA = "0x65059D0")]
		public void Clear()
		{
		}

		[Token(Token = "0x6000A0F")]
		[Address(RVA = "0x6505A20", Offset = "0x6504A20", VA = "0x6505A20")]
		public CellStreamingInfo()
		{
		}
	}

	[Token(Token = "0x2000111")]
	[DebuggerDisplay("Index = {desc.index} Loaded = {loaded}")]
	internal class Cell : IComparable<Cell>
	{
		[Token(Token = "0x40004A1")]
		[FieldOffset(Offset = "0x10")]
		public CellDesc desc;

		[Token(Token = "0x40004A2")]
		[FieldOffset(Offset = "0x18")]
		public CellData data;

		[Token(Token = "0x40004A3")]
		[FieldOffset(Offset = "0x20")]
		public CellPoolInfo poolInfo;

		[Token(Token = "0x40004A4")]
		[FieldOffset(Offset = "0x28")]
		public CellIndexInfo indexInfo;

		[Token(Token = "0x40004A5")]
		[FieldOffset(Offset = "0x30")]
		public CellBlendingInfo blendingInfo;

		[Token(Token = "0x40004A6")]
		[FieldOffset(Offset = "0x38")]
		public CellStreamingInfo streamingInfo;

		[Token(Token = "0x40004A7")]
		[FieldOffset(Offset = "0x40")]
		public int referenceCount;

		[Token(Token = "0x40004A8")]
		[FieldOffset(Offset = "0x44")]
		public bool loaded;

		[Token(Token = "0x40004A9")]
		[FieldOffset(Offset = "0x48")]
		public CellData.PerScenarioData scenario0;

		[Token(Token = "0x40004AA")]
		[FieldOffset(Offset = "0xC8")]
		public CellData.PerScenarioData scenario1;

		[Token(Token = "0x40004AB")]
		[FieldOffset(Offset = "0x148")]
		public bool hasTwoScenarios;

		[Token(Token = "0x40004AC")]
		[FieldOffset(Offset = "0x150")]
		public CellInstancedDebugProbes debugProbes;

		[Token(Token = "0x6000A10")]
		[Address(RVA = "0x6505A30", Offset = "0x6504A30", VA = "0x6505A30", Slot = "4")]
		public int CompareTo(Cell other)
		{
			return default(int);
		}

		[Token(Token = "0x6000A11")]
		[Address(RVA = "0x6505A70", Offset = "0x6504A70", VA = "0x6505A70")]
		public bool UpdateCellScenarioData(string scenario0, string scenario1)
		{
			return default(bool);
		}

		[Token(Token = "0x6000A12")]
		[Address(RVA = "0x6505B30", Offset = "0x6504B30", VA = "0x6505B30")]
		public void Clear()
		{
		}

		[Token(Token = "0x6000A13")]
		[Address(RVA = "0x6505CC0", Offset = "0x6504CC0", VA = "0x6505CC0")]
		public Cell()
		{
		}
	}

	[Token(Token = "0x2000112")]
	internal struct Volume : IEquatable<Volume>
	{
		[Token(Token = "0x40004AD")]
		[FieldOffset(Offset = "0x0")]
		internal Vector3 corner;

		[Token(Token = "0x40004AE")]
		[FieldOffset(Offset = "0xC")]
		internal Vector3 X;

		[Token(Token = "0x40004AF")]
		[FieldOffset(Offset = "0x18")]
		internal Vector3 Y;

		[Token(Token = "0x40004B0")]
		[FieldOffset(Offset = "0x24")]
		internal Vector3 Z;

		[Token(Token = "0x40004B1")]
		[FieldOffset(Offset = "0x30")]
		internal float maxSubdivisionMultiplier;

		[Token(Token = "0x40004B2")]
		[FieldOffset(Offset = "0x34")]
		internal float minSubdivisionMultiplier;

		[Token(Token = "0x6000A14")]
		[Address(RVA = "0x6505E90", Offset = "0x6504E90", VA = "0x6505E90")]
		public Volume(Matrix4x4 trs, float maxSubdivision, float minSubdivision)
		{
		}

		[Token(Token = "0x6000A15")]
		[Address(RVA = "0x6505F40", Offset = "0x6504F40", VA = "0x6505F40")]
		public Volume(Vector3 corner, Vector3 X, Vector3 Y, Vector3 Z, float maxSubdivision = 1f, float minSubdivision = 0f)
		{
		}

		[Token(Token = "0x6000A16")]
		[Address(RVA = "0x6505F80", Offset = "0x6504F80", VA = "0x6505F80")]
		public Volume(Volume copy)
		{
		}

		[Token(Token = "0x6000A17")]
		[Address(RVA = "0x6506050", Offset = "0x6505050", VA = "0x6506050")]
		public Volume(Bounds bounds)
		{
		}

		[Token(Token = "0x6000A18")]
		[Address(RVA = "0x65060D0", Offset = "0x65050D0", VA = "0x65060D0")]
		public Bounds CalculateAABB()
		{
			return default(Bounds);
		}

		[Token(Token = "0x6000A19")]
		[Address(RVA = "0x6506400", Offset = "0x6505400", VA = "0x6506400")]
		public void CalculateCenterAndSize(out Vector3 center, out Vector3 size)
		{
		}

		[Token(Token = "0x6000A1A")]
		[Address(RVA = "0x6506670", Offset = "0x6505670", VA = "0x6506670")]
		public void Transform(Matrix4x4 trs)
		{
		}

		[Token(Token = "0x6000A1B")]
		[Address(RVA = "0x6506830", Offset = "0x6505830", VA = "0x6506830", Slot = "3")]
		public override string ToString()
		{
			return null;
		}

		[Token(Token = "0x6000A1C")]
		[Address(RVA = "0x6506AB0", Offset = "0x6505AB0", VA = "0x6506AB0", Slot = "4")]
		public bool Equals(Volume other)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000113")]
	internal struct RefVolTransform
	{
		[Token(Token = "0x40004B3")]
		[FieldOffset(Offset = "0x0")]
		public Vector3 posWS;

		[Token(Token = "0x40004B4")]
		[FieldOffset(Offset = "0xC")]
		public Quaternion rot;

		[Token(Token = "0x40004B5")]
		[FieldOffset(Offset = "0x1C")]
		public float scale;
	}

	[Token(Token = "0x2000114")]
	public struct RuntimeResources
	{
		[Token(Token = "0x40004B6")]
		[FieldOffset(Offset = "0x0")]
		public ComputeBuffer index;

		[Token(Token = "0x40004B7")]
		[FieldOffset(Offset = "0x8")]
		public ComputeBuffer cellIndices;

		[Token(Token = "0x40004B8")]
		[FieldOffset(Offset = "0x10")]
		public RenderTexture L0_L1rx;

		[Token(Token = "0x40004B9")]
		[FieldOffset(Offset = "0x18")]
		public RenderTexture L1_G_ry;

		[Token(Token = "0x40004BA")]
		[FieldOffset(Offset = "0x20")]
		public RenderTexture L1_B_rz;

		[Token(Token = "0x40004BB")]
		[FieldOffset(Offset = "0x28")]
		public RenderTexture L2_0;

		[Token(Token = "0x40004BC")]
		[FieldOffset(Offset = "0x30")]
		public RenderTexture L2_1;

		[Token(Token = "0x40004BD")]
		[FieldOffset(Offset = "0x38")]
		public RenderTexture L2_2;

		[Token(Token = "0x40004BE")]
		[FieldOffset(Offset = "0x40")]
		public RenderTexture L2_3;

		[Token(Token = "0x40004BF")]
		[FieldOffset(Offset = "0x48")]
		public RenderTexture ProbeOcclusion;

		[Token(Token = "0x40004C0")]
		[FieldOffset(Offset = "0x50")]
		public RenderTexture Validity;

		[Token(Token = "0x40004C1")]
		[FieldOffset(Offset = "0x58")]
		public RenderTexture SkyOcclusionL0L1;

		[Token(Token = "0x40004C2")]
		[FieldOffset(Offset = "0x60")]
		public RenderTexture SkyShadingDirectionIndices;

		[Token(Token = "0x40004C3")]
		[FieldOffset(Offset = "0x68")]
		public ComputeBuffer SkyPrecomputedDirections;

		[Token(Token = "0x40004C4")]
		[FieldOffset(Offset = "0x70")]
		public ComputeBuffer QualityLeakReductionData;
	}

	[Token(Token = "0x2000115")]
	public struct ExtraDataActionInput
	{
	}

	[Token(Token = "0x40003B7")]
	[FieldOffset(Offset = "0x10")]
	private ComputeBuffer m_EmptyIndexBuffer;

	[Token(Token = "0x40003B8")]
	private const int kProbesPerBatch = 511;

	[Token(Token = "0x40003B9")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string k_DebugPanelName;

	[Token(Token = "0x40003BC")]
	[FieldOffset(Offset = "0x28")]
	private Mesh m_DebugMesh;

	[Token(Token = "0x40003BD")]
	[FieldOffset(Offset = "0x30")]
	private DebugUI.Widget[] m_DebugItems;

	[Token(Token = "0x40003BE")]
	[FieldOffset(Offset = "0x38")]
	private Material m_DebugMaterial;

	[Token(Token = "0x40003BF")]
	[FieldOffset(Offset = "0x40")]
	private Mesh m_DebugProbeSamplingMesh;

	[Token(Token = "0x40003C0")]
	[FieldOffset(Offset = "0x48")]
	private Material m_ProbeSamplingDebugMaterial;

	[Token(Token = "0x40003C1")]
	[FieldOffset(Offset = "0x50")]
	private Material m_ProbeSamplingDebugMaterial02;

	[Token(Token = "0x40003C2")]
	[FieldOffset(Offset = "0x58")]
	private Texture m_DisplayNumbersTexture;

	[Token(Token = "0x40003C3")]
	[FieldOffset(Offset = "0x8")]
	internal static ProbeSamplingDebugData probeSamplingDebugData;

	[Token(Token = "0x40003C4")]
	[FieldOffset(Offset = "0x60")]
	private Mesh m_DebugOffsetMesh;

	[Token(Token = "0x40003C5")]
	[FieldOffset(Offset = "0x68")]
	private Material m_DebugOffsetMaterial;

	[Token(Token = "0x40003C6")]
	[FieldOffset(Offset = "0x70")]
	private Material m_DebugFragmentationMaterial;

	[Token(Token = "0x40003C7")]
	[FieldOffset(Offset = "0x78")]
	private Plane[] m_DebugFrustumPlanes;

	[Token(Token = "0x40003C8")]
	[FieldOffset(Offset = "0x80")]
	private GUIContent[] m_DebugScenarioNames;

	[Token(Token = "0x40003C9")]
	[FieldOffset(Offset = "0x88")]
	private int[] m_DebugScenarioValues;

	[Token(Token = "0x40003CA")]
	[FieldOffset(Offset = "0x90")]
	private string m_DebugActiveSceneGUID;

	[Token(Token = "0x40003CB")]
	[FieldOffset(Offset = "0x98")]
	private string m_DebugActiveScenario;

	[Token(Token = "0x40003CC")]
	[FieldOffset(Offset = "0xA0")]
	private DebugUI.EnumField m_DebugScenarioField;

	[Token(Token = "0x40003CD")]
	[FieldOffset(Offset = "0xA8")]
	internal Dictionary<Bounds, ProbeBrickIndex.Brick[]> realtimeSubdivisionInfo;

	[Token(Token = "0x40003CE")]
	[FieldOffset(Offset = "0xB0")]
	private bool m_MaxSubdivVisualizedIsMaxAvailable;

	[Token(Token = "0x40003CF")]
	[FieldOffset(Offset = "0x10")]
	private static Vector4[] s_BoundsArray;

	[Token(Token = "0x40003D0")]
	[FieldOffset(Offset = "0xB1")]
	private bool m_LoadMaxCellsPerFrame;

	[Token(Token = "0x40003D1")]
	private const int kMaxCellLoadedPerFrame = 10;

	[Token(Token = "0x40003D2")]
	[FieldOffset(Offset = "0xB4")]
	private int m_NumberOfCellsLoadedPerFrame;

	[Token(Token = "0x40003D3")]
	[FieldOffset(Offset = "0xB8")]
	private int m_NumberOfCellsBlendedPerFrame;

	[Token(Token = "0x40003D4")]
	[FieldOffset(Offset = "0xBC")]
	private float m_TurnoverRate;

	[Token(Token = "0x40003D5")]
	[FieldOffset(Offset = "0xC0")]
	private DynamicArray<Cell> m_LoadedCells;

	[Token(Token = "0x40003D6")]
	[FieldOffset(Offset = "0xC8")]
	private DynamicArray<Cell> m_ToBeLoadedCells;

	[Token(Token = "0x40003D7")]
	[FieldOffset(Offset = "0xD0")]
	private DynamicArray<Cell> m_WorseLoadedCells;

	[Token(Token = "0x40003D8")]
	[FieldOffset(Offset = "0xD8")]
	private DynamicArray<Cell> m_BestToBeLoadedCells;

	[Token(Token = "0x40003D9")]
	[FieldOffset(Offset = "0xE0")]
	private DynamicArray<Cell> m_TempCellToLoadList;

	[Token(Token = "0x40003DA")]
	[FieldOffset(Offset = "0xE8")]
	private DynamicArray<Cell> m_TempCellToUnloadList;

	[Token(Token = "0x40003DB")]
	[FieldOffset(Offset = "0xF0")]
	private DynamicArray<Cell> m_LoadedBlendingCells;

	[Token(Token = "0x40003DC")]
	[FieldOffset(Offset = "0xF8")]
	private DynamicArray<Cell> m_ToBeLoadedBlendingCells;

	[Token(Token = "0x40003DD")]
	[FieldOffset(Offset = "0x100")]
	private DynamicArray<Cell> m_TempBlendingCellToLoadList;

	[Token(Token = "0x40003DE")]
	[FieldOffset(Offset = "0x108")]
	private DynamicArray<Cell> m_TempBlendingCellToUnloadList;

	[Token(Token = "0x40003DF")]
	[FieldOffset(Offset = "0x110")]
	private Vector3 m_FrozenCameraPosition;

	[Token(Token = "0x40003E0")]
	[FieldOffset(Offset = "0x11C")]
	private Vector3 m_FrozenCameraDirection;

	[Token(Token = "0x40003E1")]
	private const float kIndexFragmentationThreshold = 0.2f;

	[Token(Token = "0x40003E2")]
	[FieldOffset(Offset = "0x128")]
	private bool m_IndexDefragmentationInProgress;

	[Token(Token = "0x40003E3")]
	[FieldOffset(Offset = "0x130")]
	private ProbeBrickIndex m_DefragIndex;

	[Token(Token = "0x40003E4")]
	[FieldOffset(Offset = "0x138")]
	private ProbeGlobalIndirection m_DefragCellIndices;

	[Token(Token = "0x40003E5")]
	[FieldOffset(Offset = "0x140")]
	private DynamicArray<Cell> m_IndexDefragCells;

	[Token(Token = "0x40003E6")]
	[FieldOffset(Offset = "0x148")]
	private DynamicArray<Cell> m_TempIndexDefragCells;

	[Token(Token = "0x40003E7")]
	[FieldOffset(Offset = "0x150")]
	internal float minStreamingScore;

	[Token(Token = "0x40003E8")]
	[FieldOffset(Offset = "0x154")]
	internal float maxStreamingScore;

	[Token(Token = "0x40003E9")]
	[FieldOffset(Offset = "0x158")]
	private Queue<CellStreamingRequest> m_StreamingQueue;

	[Token(Token = "0x40003EA")]
	[FieldOffset(Offset = "0x160")]
	private List<CellStreamingRequest> m_ActiveStreamingRequests;

	[Token(Token = "0x40003EB")]
	[FieldOffset(Offset = "0x168")]
	private ObjectPool<CellStreamingRequest> m_StreamingRequestsPool;

	[Token(Token = "0x40003EC")]
	[FieldOffset(Offset = "0x170")]
	private bool m_DiskStreamingUseCompute;

	[Token(Token = "0x40003ED")]
	[FieldOffset(Offset = "0x178")]
	private ProbeVolumeScratchBufferPool m_ScratchBufferPool;

	[Token(Token = "0x40003EE")]
	[FieldOffset(Offset = "0x180")]
	private CellStreamingRequest.OnStreamingCompleteDelegate m_OnStreamingComplete;

	[Token(Token = "0x40003EF")]
	[FieldOffset(Offset = "0x188")]
	private CellStreamingRequest.OnStreamingCompleteDelegate m_OnBlendingStreamingComplete;

	[Token(Token = "0x40003F0")]
	[FieldOffset(Offset = "0x18")]
	private static DynamicArray<Cell>.SortComparer s_BlendingComparer;

	[Token(Token = "0x40003F1")]
	[FieldOffset(Offset = "0x20")]
	private static DynamicArray<Cell>.SortComparer s_DefragComparer;

	[Token(Token = "0x40003F2")]
	[FieldOffset(Offset = "0x190")]
	private bool m_IsInitialized;

	[Token(Token = "0x40003F3")]
	[FieldOffset(Offset = "0x191")]
	private bool m_SupportScenarios;

	[Token(Token = "0x40003F4")]
	[FieldOffset(Offset = "0x192")]
	private bool m_SupportScenarioBlending;

	[Token(Token = "0x40003F5")]
	[FieldOffset(Offset = "0x193")]
	private bool m_ForceNoDiskStreaming;

	[Token(Token = "0x40003F6")]
	[FieldOffset(Offset = "0x194")]
	private bool m_SupportDiskStreaming;

	[Token(Token = "0x40003F7")]
	[FieldOffset(Offset = "0x195")]
	private bool m_SupportGPUStreaming;

	[Token(Token = "0x40003F8")]
	[FieldOffset(Offset = "0x196")]
	private bool m_UseStreamingAssets;

	[Token(Token = "0x40003F9")]
	[FieldOffset(Offset = "0x198")]
	private float m_MinBrickSize;

	[Token(Token = "0x40003FA")]
	[FieldOffset(Offset = "0x19C")]
	private int m_MaxSubdivision;

	[Token(Token = "0x40003FB")]
	[FieldOffset(Offset = "0x1A0")]
	private Vector3 m_ProbeOffset;

	[Token(Token = "0x40003FC")]
	[FieldOffset(Offset = "0x1B0")]
	private ProbeBrickPool m_Pool;

	[Token(Token = "0x40003FD")]
	[FieldOffset(Offset = "0x1B8")]
	private ProbeBrickIndex m_Index;

	[Token(Token = "0x40003FE")]
	[FieldOffset(Offset = "0x1C0")]
	private ProbeGlobalIndirection m_CellIndices;

	[Token(Token = "0x40003FF")]
	[FieldOffset(Offset = "0x1C8")]
	private ProbeBrickBlendingPool m_BlendingPool;

	[Token(Token = "0x4000400")]
	[FieldOffset(Offset = "0x1D0")]
	private List<ProbeBrickPool.BrickChunkAlloc> m_TmpSrcChunks;

	[Token(Token = "0x4000401")]
	[FieldOffset(Offset = "0x1D8")]
	private float[] m_PositionOffsets;

	[Token(Token = "0x4000402")]
	[FieldOffset(Offset = "0x1E0")]
	private Bounds m_CurrGlobalBounds;

	[Token(Token = "0x4000403")]
	[FieldOffset(Offset = "0x1F8")]
	internal Dictionary<int, Cell> cells;

	[Token(Token = "0x4000404")]
	[FieldOffset(Offset = "0x200")]
	private ObjectPool<Cell> m_CellPool;

	[Token(Token = "0x4000405")]
	[FieldOffset(Offset = "0x208")]
	private ProbeBrickPool.DataLocation m_TemporaryDataLocation;

	[Token(Token = "0x4000406")]
	[FieldOffset(Offset = "0x270")]
	private int m_TemporaryDataLocationMemCost;

	[Token(Token = "0x4000407")]
	[FieldOffset(Offset = "0x278")]
	[Obsolete("This field is only kept for migration purpose. #from(2023.3)")]
	internal ProbeVolumeSceneData sceneData;

	[Token(Token = "0x4000408")]
	[FieldOffset(Offset = "0x280")]
	private Vector3Int minLoadedCellPos;

	[Token(Token = "0x4000409")]
	[FieldOffset(Offset = "0x28C")]
	private Vector3Int maxLoadedCellPos;

	[Token(Token = "0x400040A")]
	[FieldOffset(Offset = "0x298")]
	public Action<ExtraDataActionInput> retrieveExtraDataAction;

	[Token(Token = "0x400040B")]
	[FieldOffset(Offset = "0x2A0")]
	public Action checksDuringBakeAction;

	[Token(Token = "0x400040C")]
	[FieldOffset(Offset = "0x2A8")]
	private Dictionary<string, (ProbeVolumeBakingSet, List<int>)> m_PendingScenesToBeLoaded;

	[Token(Token = "0x400040D")]
	[FieldOffset(Offset = "0x2B0")]
	private Dictionary<string, List<int>> m_PendingScenesToBeUnloaded;

	[Token(Token = "0x400040E")]
	[FieldOffset(Offset = "0x2B8")]
	private List<string> m_ActiveScenes;

	[Token(Token = "0x400040F")]
	[FieldOffset(Offset = "0x2C0")]
	private ProbeVolumeBakingSetWeakReference m_CurrentBakingSetReference;

	[Token(Token = "0x4000410")]
	[FieldOffset(Offset = "0x2C8")]
	private ProbeVolumeBakingSetWeakReference m_LazyBakingSetReference;

	[Token(Token = "0x4000411")]
	[FieldOffset(Offset = "0x2D0")]
	private bool m_NeedLoadAsset;

	[Token(Token = "0x4000412")]
	[FieldOffset(Offset = "0x2D1")]
	private bool m_ProbeReferenceVolumeInit;

	[Token(Token = "0x4000413")]
	[FieldOffset(Offset = "0x2D2")]
	private bool m_EnabledBySRP;

	[Token(Token = "0x4000414")]
	[FieldOffset(Offset = "0x2D3")]
	private bool m_VertexSampling;

	[Token(Token = "0x4000415")]
	[FieldOffset(Offset = "0x2D4")]
	private bool m_NeedsIndexRebuild;

	[Token(Token = "0x4000416")]
	[FieldOffset(Offset = "0x2D5")]
	private bool m_HasChangedIndex;

	[Token(Token = "0x4000417")]
	[FieldOffset(Offset = "0x2D8")]
	private int m_CBShaderID;

	[Token(Token = "0x4000418")]
	[FieldOffset(Offset = "0x2DC")]
	private ProbeVolumeTextureMemoryBudget m_MemoryBudget;

	[Token(Token = "0x4000419")]
	[FieldOffset(Offset = "0x2E0")]
	private ProbeVolumeBlendingTextureMemoryBudget m_BlendingMemoryBudget;

	[Token(Token = "0x400041A")]
	[FieldOffset(Offset = "0x2E4")]
	private ProbeVolumeSHBands m_SHBands;

	[Token(Token = "0x400041B")]
	[FieldOffset(Offset = "0x2E8")]
	internal bool clearAssetsOnVolumeClear;

	[Token(Token = "0x400041C")]
	[FieldOffset(Offset = "0x28")]
	internal static string defaultLightingScenario;

	[Token(Token = "0x400041D")]
	[FieldOffset(Offset = "0x30")]
	private static ProbeReferenceVolume _instance;

	[Token(Token = "0x170000F9")]
	internal ProbeVolumeDebug probeVolumeDebug
	{
		[Token(Token = "0x60008D2")]
		[Address(RVA = "0x64DC5E0", Offset = "0x64DB5E0", VA = "0x64DC5E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FA")]
	public Color[] subdivisionDebugColors
	{
		[Token(Token = "0x60008D3")]
		[Address(RVA = "0x64DC5F0", Offset = "0x64DB5F0", VA = "0x64DC5F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FB")]
	private Mesh debugMesh
	{
		[Token(Token = "0x60008D4")]
		[Address(RVA = "0x64DC600", Offset = "0x64DB600", VA = "0x64DC600")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FC")]
	public bool loadMaxCellsPerFrame
	{
		[Token(Token = "0x60008EE")]
		[Address(RVA = "0x64E7020", Offset = "0x64E6020", VA = "0x64E7020")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60008EF")]
		[Address(RVA = "0x64E7030", Offset = "0x64E6030", VA = "0x64E7030")]
		set
		{
		}
	}

	[Token(Token = "0x170000FD")]
	private int numberOfCellsLoadedPerFrame
	{
		[Token(Token = "0x60008F0")]
		[Address(RVA = "0x64E7040", Offset = "0x64E6040", VA = "0x64E7040")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000FE")]
	public int numberOfCellsBlendedPerFrame
	{
		[Token(Token = "0x60008F1")]
		[Address(RVA = "0x64E70A0", Offset = "0x64E60A0", VA = "0x64E70A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60008F2")]
		[Address(RVA = "0x64E70B0", Offset = "0x64E60B0", VA = "0x64E70B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000FF")]
	public float turnoverRate
	{
		[Token(Token = "0x60008F3")]
		[Address(RVA = "0x64E70D0", Offset = "0x64E60D0", VA = "0x64E70D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60008F4")]
		[Address(RVA = "0x64E70E0", Offset = "0x64E60E0", VA = "0x64E70E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000100")]
	internal Bounds globalBounds
	{
		[Token(Token = "0x6000915")]
		[Address(RVA = "0x64EE960", Offset = "0x64ED960", VA = "0x64EE960")]
		get
		{
			return default(Bounds);
		}
		[Token(Token = "0x6000916")]
		[Address(RVA = "0x64EE980", Offset = "0x64ED980", VA = "0x64EE980")]
		set
		{
		}
	}

	[Token(Token = "0x17000101")]
	private ProbeVolumeBakingSet m_CurrentBakingSet
	{
		[Token(Token = "0x6000917")]
		[Address(RVA = "0x64DC120", Offset = "0x64DB120", VA = "0x64DC120")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000918")]
		[Address(RVA = "0x64EE9A0", Offset = "0x64ED9A0", VA = "0x64EE9A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000102")]
	private ProbeVolumeBakingSet m_LazyBakingSet
	{
		[Token(Token = "0x6000919")]
		[Address(RVA = "0x64EE9C0", Offset = "0x64ED9C0", VA = "0x64EE9C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600091A")]
		[Address(RVA = "0x64EE9E0", Offset = "0x64ED9E0", VA = "0x64EE9E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000103")]
	public bool isInitialized
	{
		[Token(Token = "0x600091B")]
		[Address(RVA = "0x64EEA00", Offset = "0x64EDA00", VA = "0x64EEA00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000104")]
	internal bool enabledBySRP
	{
		[Token(Token = "0x600091C")]
		[Address(RVA = "0x64EEA10", Offset = "0x64EDA10", VA = "0x64EEA10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000105")]
	internal bool vertexSampling
	{
		[Token(Token = "0x600091D")]
		[Address(RVA = "0x64EEA20", Offset = "0x64EDA20", VA = "0x64EEA20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000106")]
	internal bool hasUnloadedCells
	{
		[Token(Token = "0x600091E")]
		[Address(RVA = "0x64EEA30", Offset = "0x64EDA30", VA = "0x64EEA30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000107")]
	internal bool supportLightingScenarios
	{
		[Token(Token = "0x600091F")]
		[Address(RVA = "0x64EEA70", Offset = "0x64EDA70", VA = "0x64EEA70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000108")]
	internal bool supportScenarioBlending
	{
		[Token(Token = "0x6000920")]
		[Address(RVA = "0x64EEA80", Offset = "0x64EDA80", VA = "0x64EEA80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000109")]
	internal bool gpuStreamingEnabled
	{
		[Token(Token = "0x6000921")]
		[Address(RVA = "0x64EEA90", Offset = "0x64EDA90", VA = "0x64EEA90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010A")]
	internal bool diskStreamingEnabled
	{
		[Token(Token = "0x6000922")]
		[Address(RVA = "0x64EE770", Offset = "0x64ED770", VA = "0x64EE770")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010B")]
	public bool probeOcclusion
	{
		[Token(Token = "0x6000923")]
		[Address(RVA = "0x64EEAA0", Offset = "0x64EDAA0", VA = "0x64EEAA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010C")]
	public bool skyOcclusion
	{
		[Token(Token = "0x6000924")]
		[Address(RVA = "0x64DBFE0", Offset = "0x64DAFE0", VA = "0x64DBFE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010D")]
	public bool skyOcclusionShadingDirection
	{
		[Token(Token = "0x6000925")]
		[Address(RVA = "0x64DC080", Offset = "0x64DB080", VA = "0x64DC080")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010E")]
	private bool useRenderingLayers
	{
		[Token(Token = "0x6000926")]
		[Address(RVA = "0x64EEB40", Offset = "0x64EDB40", VA = "0x64EEB40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010F")]
	public ProbeVolumeSHBands shBands
	{
		[Token(Token = "0x6000927")]
		[Address(RVA = "0x64EEB70", Offset = "0x64EDB70", VA = "0x64EEB70")]
		get
		{
			return default(ProbeVolumeSHBands);
		}
	}

	[Token(Token = "0x17000110")]
	public ProbeVolumeBakingSet currentBakingSet
	{
		[Token(Token = "0x6000928")]
		[Address(RVA = "0x64EEB80", Offset = "0x64EDB80", VA = "0x64EEB80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000111")]
	public string lightingScenario
	{
		[Token(Token = "0x6000929")]
		[Address(RVA = "0x64E92F0", Offset = "0x64E82F0", VA = "0x64E92F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600092A")]
		[Address(RVA = "0x64EEBA0", Offset = "0x64EDBA0", VA = "0x64EEBA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000112")]
	public string otherScenario
	{
		[Token(Token = "0x600092B")]
		[Address(RVA = "0x64EE790", Offset = "0x64ED790", VA = "0x64EE790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000113")]
	public float scenarioBlendingFactor
	{
		[Token(Token = "0x600092C")]
		[Address(RVA = "0x64E87E0", Offset = "0x64E77E0", VA = "0x64E87E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600092D")]
		[Address(RVA = "0x64EEC60", Offset = "0x64EDC60", VA = "0x64EEC60")]
		set
		{
		}
	}

	[Token(Token = "0x17000114")]
	public ProbeVolumeTextureMemoryBudget memoryBudget
	{
		[Token(Token = "0x6000931")]
		[Address(RVA = "0x64EEE60", Offset = "0x64EDE60", VA = "0x64EEE60")]
		get
		{
			return default(ProbeVolumeTextureMemoryBudget);
		}
	}

	[Token(Token = "0x17000115")]
	internal List<ProbeVolumePerSceneData> perSceneDataList
	{
		[Token(Token = "0x6000932")]
		[Address(RVA = "0x64EEE70", Offset = "0x64EDE70", VA = "0x64EEE70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000933")]
		[Address(RVA = "0x64EEE80", Offset = "0x64EDE80", VA = "0x64EEE80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000116")]
	internal float indexFragmentationRate
	{
		[Token(Token = "0x600093E")]
		[Address(RVA = "0x64F0250", Offset = "0x64EF250", VA = "0x64F0250")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000117")]
	public static ProbeReferenceVolume instance
	{
		[Token(Token = "0x600093F")]
		[Address(RVA = "0x64F0280", Offset = "0x64EF280", VA = "0x64F0280")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x64DAB20", Offset = "0x64D9B20", VA = "0x64DAB20")]
	public void BindAPVRuntimeResources(CommandBuffer cmdBuffer, bool isProbeVolumeEnabled)
	{
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x64DBBD0", Offset = "0x64DABD0", VA = "0x64DBBD0")]
	public bool UpdateShaderVariablesProbeVolumes(CommandBuffer cmd, ProbeVolumesOptions probeVolumeOptions, int taaFrameIndex, bool supportRenderingLayers = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x64DC780", Offset = "0x64DB780", VA = "0x64DC780")]
	[Obsolete("Use the other override to support sampling offset in debug modes. #from(6000.0)")]
	public void RenderDebug(Camera camera, Texture exposureTexture)
	{
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x64DC790", Offset = "0x64DB790", VA = "0x64DC790")]
	public void RenderDebug(Camera camera, ProbeVolumesOptions options, Texture exposureTexture)
	{
	}

	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x64DDC10", Offset = "0x64DCC10", VA = "0x64DDC10")]
	public bool IsProbeSamplingDebugEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x60008D8")]
	[Address(RVA = "0x64DDC90", Offset = "0x64DCC90", VA = "0x64DDC90")]
	public bool GetProbeSamplingDebugResources(Camera camera, out GraphicsBuffer resultBuffer, out Vector2 coords)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D9")]
	[Address(RVA = "0x64DDE00", Offset = "0x64DCE00", VA = "0x64DDE00")]
	private bool TryCreateDebugRenderData()
	{
		return default(bool);
	}

	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x64DE4D0", Offset = "0x64DD4D0", VA = "0x64DE4D0")]
	private void InitializeDebug()
	{
	}

	[Token(Token = "0x60008DB")]
	[Address(RVA = "0x64E27B0", Offset = "0x64E17B0", VA = "0x64E27B0")]
	private void CleanupDebug()
	{
	}

	[Token(Token = "0x60008DC")]
	private void DebugCellIndexChanged<T>(DebugUI.Field<T> field, T value)
	{
	}

	[Token(Token = "0x60008DD")]
	[Address(RVA = "0x64DE4F0", Offset = "0x64DD4F0", VA = "0x64DE4F0")]
	private void RegisterDebug()
	{
	}

	[Token(Token = "0x60008DE")]
	[Address(RVA = "0x64E28B0", Offset = "0x64E18B0", VA = "0x64E28B0")]
	private void UnregisterDebug(bool destroyPanel)
	{
	}

	[Token(Token = "0x60008DF")]
	[Address(RVA = "0x64E29D0", Offset = "0x64E19D0", VA = "0x64E29D0")]
	public void RenderFragmentationOverlay(RenderGraph renderGraph, TextureHandle colorBuffer, TextureHandle depthBuffer, DebugOverlay debugOverlay)
	{
	}

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x64E2F10", Offset = "0x64E1F10", VA = "0x64E2F10")]
	private bool ShouldCullCell(Vector3 cellPosition, Transform cameraTransform, Plane[] frustumPlanes)
	{
		return default(bool);
	}

	[Token(Token = "0x60008E1")]
	[Address(RVA = "0x64E3480", Offset = "0x64E2480", VA = "0x64E3480")]
	private static void UpdateDebugFromSelection(ref Vector4[] _AdjustmentVolumeBounds, ref int _AdjustmentVolumeCount)
	{
	}

	[Token(Token = "0x60008E2")]
	[Address(RVA = "0x64E3300", Offset = "0x64E2300", VA = "0x64E3300")]
	private Bounds GetCellBounds(Vector3 cellPosition)
	{
		return default(Bounds);
	}

	[Token(Token = "0x60008E3")]
	[Address(RVA = "0x64E34A0", Offset = "0x64E24A0", VA = "0x64E34A0")]
	private bool ShouldCullCell(Vector3 cellPosition, Vector4[] adjustmentVolumeBounds, int adjustmentVolumeCount)
	{
		return default(bool);
	}

	[Token(Token = "0x60008E4")]
	[Address(RVA = "0x64DC880", Offset = "0x64DB880", VA = "0x64DC880")]
	private void DrawProbeDebug(Camera camera, Texture exposureTexture)
	{
	}

	[Token(Token = "0x60008E5")]
	[Address(RVA = "0x64E4C60", Offset = "0x64E3C60", VA = "0x64E4C60")]
	internal void ResetDebugViewToMaxSubdiv()
	{
	}

	[Token(Token = "0x60008E6")]
	[Address(RVA = "0x64E4C90", Offset = "0x64E3C90", VA = "0x64E4C90")]
	private void ClearDebugData()
	{
	}

	[Token(Token = "0x60008E7")]
	[Address(RVA = "0x64E4CE0", Offset = "0x64E3CE0", VA = "0x64E4CE0")]
	private static void DecompressSH(ref SphericalHarmonicsL2 shv)
	{
	}

	[Token(Token = "0x60008E8")]
	[Address(RVA = "0x64E4EC0", Offset = "0x64E3EC0", VA = "0x64E4EC0")]
	internal static Vector3 DecodeSkyShadingDirection(uint directionIndex)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60008E9")]
	[Address(RVA = "0x64E4FD0", Offset = "0x64E3FD0", VA = "0x64E4FD0")]
	internal bool GetFlattenedProbeData(string scenario, out Vector3[] positions, out SphericalHarmonicsL2[] irradiance, out float[] validity, out Vector4[] occlusion, out Vector4[] skyOcclusion, out Vector3[] skyOcclusionDirections, out Vector3[] virtualOffset)
	{
		return default(bool);
	}

	[Token(Token = "0x60008EA")]
	[Address(RVA = "0x64E3970", Offset = "0x64E2970", VA = "0x64E3970")]
	private CellInstancedDebugProbes CreateInstancedProbes(Cell cell)
	{
		return null;
	}

	[Token(Token = "0x60008EB")]
	[Address(RVA = "0x64E6FA0", Offset = "0x64E5FA0", VA = "0x64E6FA0")]
	private void OnClearLightingdata()
	{
	}

	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x64E6FF0", Offset = "0x64E5FF0", VA = "0x64E6FF0")]
	public void EnableMaxCellStreaming(bool value)
	{
	}

	[Token(Token = "0x60008ED")]
	[Address(RVA = "0x64E7000", Offset = "0x64E6000", VA = "0x64E7000")]
	public void SetNumberOfCellsLoadedPerFrame(int numberOfCells)
	{
	}

	[Token(Token = "0x60008F5")]
	[Address(RVA = "0x64E7100", Offset = "0x64E6100", VA = "0x64E7100")]
	private void InitStreaming()
	{
	}

	[Token(Token = "0x60008F6")]
	[Address(RVA = "0x64E71C0", Offset = "0x64E61C0", VA = "0x64E71C0")]
	private void CleanupStreaming()
	{
	}

	[Token(Token = "0x60008F7")]
	[Address(RVA = "0x64E7870", Offset = "0x64E6870", VA = "0x64E7870")]
	internal void ScenarioBlendingChanged(bool scenarioChanged)
	{
	}

	[Token(Token = "0x60008F8")]
	[Address(RVA = "0x64E79E0", Offset = "0x64E69E0", VA = "0x64E79E0")]
	private static void ComputeCellStreamingScore(Cell cell, Vector3 cameraPosition, Vector3 cameraDirection)
	{
	}

	[Token(Token = "0x60008F9")]
	[Address(RVA = "0x64E7D10", Offset = "0x64E6D10", VA = "0x64E7D10")]
	private void ComputeStreamingScore(Vector3 cameraPosition, Vector3 cameraDirection, DynamicArray<Cell> cells)
	{
	}

	[Token(Token = "0x60008FA")]
	[Address(RVA = "0x64E7DF0", Offset = "0x64E6DF0", VA = "0x64E7DF0")]
	private void ComputeBestToBeLoadedCells(Vector3 cameraPosition, Vector3 cameraDirection)
	{
	}

	[Token(Token = "0x60008FB")]
	[Address(RVA = "0x64E82C0", Offset = "0x64E72C0", VA = "0x64E82C0")]
	private void ComputeStreamingScoreAndWorseLoadedCells(Vector3 cameraPosition, Vector3 cameraDirection)
	{
	}

	[Token(Token = "0x60008FC")]
	[Address(RVA = "0x64E86F0", Offset = "0x64E76F0", VA = "0x64E86F0")]
	private void ComputeBlendingScore(DynamicArray<Cell> cells, float worstScore)
	{
	}

	[Token(Token = "0x60008FD")]
	[Address(RVA = "0x64E8870", Offset = "0x64E7870", VA = "0x64E8870")]
	private bool TryLoadCell(Cell cell, ref int shBudget, ref int indexBudget, DynamicArray<Cell> loadedCells)
	{
		return default(bool);
	}

	[Token(Token = "0x60008FE")]
	[Address(RVA = "0x64E90C0", Offset = "0x64E80C0", VA = "0x64E90C0")]
	private void UnloadBlendingCell(Cell cell, DynamicArray<Cell> unloadedCells)
	{
	}

	[Token(Token = "0x60008FF")]
	[Address(RVA = "0x64E9230", Offset = "0x64E8230", VA = "0x64E9230")]
	private bool TryLoadBlendingCell(Cell cell, DynamicArray<Cell> loadedCells)
	{
		return default(bool);
	}

	[Token(Token = "0x6000900")]
	[Address(RVA = "0x64E9A30", Offset = "0x64E8A30", VA = "0x64E9A30")]
	private void ComputeMinMaxStreamingScore()
	{
	}

	[Token(Token = "0x6000901")]
	[Address(RVA = "0x64E9BE0", Offset = "0x64E8BE0", VA = "0x64E9BE0")]
	public void UpdateCellStreaming(CommandBuffer cmd, Camera camera)
	{
	}

	[Token(Token = "0x6000902")]
	[Address(RVA = "0x64E9BF0", Offset = "0x64E8BF0", VA = "0x64E9BF0")]
	public void UpdateCellStreaming(CommandBuffer cmd, Camera camera, ProbeVolumesOptions options)
	{
	}

	[Token(Token = "0x6000903")]
	[Address(RVA = "0x64EC2C0", Offset = "0x64EB2C0", VA = "0x64EC2C0")]
	private int FindWorstBlendingCellToBeLoaded()
	{
		return default(int);
	}

	[Token(Token = "0x6000904")]
	[Address(RVA = "0x64EC400", Offset = "0x64EB400", VA = "0x64EC400")]
	private static int BlendingComparer(Cell a, Cell b)
	{
		return default(int);
	}

	[Token(Token = "0x6000905")]
	[Address(RVA = "0x64EBA80", Offset = "0x64EAA80", VA = "0x64EBA80")]
	private void UpdateBlendingCellStreaming(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000906")]
	[Address(RVA = "0x64EC450", Offset = "0x64EB450", VA = "0x64EC450")]
	private static int DefragComparer(Cell a, Cell b)
	{
		return default(int);
	}

	[Token(Token = "0x6000907")]
	[Address(RVA = "0x64EB1E0", Offset = "0x64EA1E0", VA = "0x64EB1E0")]
	private void StartIndexDefragmentation()
	{
	}

	[Token(Token = "0x6000908")]
	[Address(RVA = "0x64EAA30", Offset = "0x64E9A30", VA = "0x64EAA30")]
	private void UpdateIndexDefragmentation()
	{
	}

	[Token(Token = "0x6000909")]
	[Address(RVA = "0x64EC4E0", Offset = "0x64EB4E0", VA = "0x64EC4E0")]
	private void OnStreamingComplete(CellStreamingRequest request, CommandBuffer cmd)
	{
	}

	[Token(Token = "0x600090A")]
	[Address(RVA = "0x64ECDE0", Offset = "0x64EBDE0", VA = "0x64ECDE0")]
	private void OnBlendingStreamingComplete(CellStreamingRequest request, CommandBuffer cmd)
	{
	}

	[Token(Token = "0x600090B")]
	[Address(RVA = "0x64ED3A0", Offset = "0x64EC3A0", VA = "0x64ED3A0")]
	private void PushDiskStreamingRequest(Cell cell, string scenario, int poolIndex, CellStreamingRequest.OnStreamingCompleteDelegate onStreamingComplete)
	{
	}

	[Token(Token = "0x600090C")]
	[Address(RVA = "0x64ED550", Offset = "0x64EC550", VA = "0x64ED550")]
	private void CancelStreamingRequest(Cell cell)
	{
	}

	[Token(Token = "0x600090D")]
	[Address(RVA = "0x64ED5D0", Offset = "0x64EC5D0", VA = "0x64ED5D0")]
	private void CancelBlendingStreamingRequest(Cell cell)
	{
	}

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x64ED620", Offset = "0x64EC620", VA = "0x64ED620")]
	private bool ProcessDiskStreamingRequest(CellStreamingRequest request)
	{
		return default(bool);
	}

	[Token(Token = "0x600090F")]
	[Address(RVA = "0x64EE640", Offset = "0x64ED640", VA = "0x64EE640")]
	private void AllocateScratchBufferPoolIfNeeded()
	{
	}

	[Token(Token = "0x6000910")]
	[Address(RVA = "0x64E7560", Offset = "0x64E6560", VA = "0x64E7560")]
	private void UpdateActiveRequests(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000911")]
	[Address(RVA = "0x64E7460", Offset = "0x64E6460", VA = "0x64E7460")]
	private void ProcessNewRequests()
	{
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x64EB540", Offset = "0x64EA540", VA = "0x64EB540")]
	private void UpdateDiskStreaming(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000913")]
	[Address(RVA = "0x64E6EB0", Offset = "0x64E5EB0", VA = "0x64E6EB0")]
	private bool HasActiveStreamingRequest(Cell cell)
	{
		return default(bool);
	}

	[Token(Token = "0x6000914")]
	[Address(RVA = "0x64EE8F0", Offset = "0x64ED8F0", VA = "0x64EE8F0")]
	[Conditional("UNITY_EDITOR")]
	[Conditional("DEVELOPMENT_BUILD")]
	private void LogStreaming(string log)
	{
	}

	[Token(Token = "0x600092E")]
	[Address(RVA = "0x64EED40", Offset = "0x64EDD40", VA = "0x64EED40")]
	internal static string GetSceneGUID(Scene scene)
	{
		return null;
	}

	[Token(Token = "0x600092F")]
	[Address(RVA = "0x64EEBB0", Offset = "0x64EDBB0", VA = "0x64EEBB0")]
	internal void SetActiveScenario(string scenario, bool verbose = true)
	{
	}

	[Token(Token = "0x6000930")]
	[Address(RVA = "0x64EEDA0", Offset = "0x64EDDA0", VA = "0x64EEDA0")]
	public void BlendLightingScenario(string otherScenario, float blendingFactor)
	{
	}

	[Token(Token = "0x6000934")]
	[Address(RVA = "0x64EEEA0", Offset = "0x64EDEA0", VA = "0x64EEEA0")]
	internal void RegisterPerSceneData(ProbeVolumePerSceneData data)
	{
	}

	[Token(Token = "0x6000935")]
	[Address(RVA = "0x64EEFA0", Offset = "0x64EDFA0", VA = "0x64EEFA0")]
	internal bool ScheduleBakingSet(ProbeVolumeBakingSet bakingSet)
	{
		return default(bool);
	}

	[Token(Token = "0x6000936")]
	[Address(RVA = "0x64EEFE0", Offset = "0x64EDFE0", VA = "0x64EEFE0")]
	internal bool ProcessScheduledBakingSet()
	{
		return default(bool);
	}

	[Token(Token = "0x6000937")]
	[Address(RVA = "0x64EF3C0", Offset = "0x64EE3C0", VA = "0x64EF3C0")]
	public void SetActiveScene(Scene scene)
	{
	}

	[Token(Token = "0x6000938")]
	[Address(RVA = "0x64EF090", Offset = "0x64EE090", VA = "0x64EF090")]
	public void SetActiveBakingSet(ProbeVolumeBakingSet bakingSet)
	{
	}

	[Token(Token = "0x6000939")]
	[Address(RVA = "0x64EF830", Offset = "0x64EE830", VA = "0x64EF830")]
	private void SetBakingSetAsCurrent(ProbeVolumeBakingSet bakingSet)
	{
	}

	[Token(Token = "0x600093A")]
	[Address(RVA = "0x64F00F0", Offset = "0x64EF0F0", VA = "0x64F00F0")]
	internal void RegisterBakingSet(ProbeVolumePerSceneData data)
	{
	}

	[Token(Token = "0x600093B")]
	[Address(RVA = "0x64EF700", Offset = "0x64EE700", VA = "0x64EF700")]
	internal void UnloadBakingSet()
	{
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x64F01D0", Offset = "0x64EF1D0", VA = "0x64F01D0")]
	internal void UnregisterPerSceneData(ProbeVolumePerSceneData data)
	{
	}

	[Token(Token = "0x600093D")]
	[Address(RVA = "0x64EF4A0", Offset = "0x64EE4A0", VA = "0x64EF4A0")]
	internal bool TryGetPerSceneData(string sceneGUID, out ProbeVolumePerSceneData perSceneData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000940")]
	[Address(RVA = "0x64F02F0", Offset = "0x64EF2F0", VA = "0x64F02F0")]
	public void Initialize(in ProbeVolumeSystemParameters parameters)
	{
	}

	[Token(Token = "0x6000941")]
	[Address(RVA = "0x64F07A0", Offset = "0x64EF7A0", VA = "0x64F07A0")]
	public void SetEnableStateFromSRP(bool srpEnablesPV)
	{
	}

	[Token(Token = "0x6000942")]
	[Address(RVA = "0x64F07B0", Offset = "0x64EF7B0", VA = "0x64F07B0")]
	public void SetVertexSamplingEnabled(bool value)
	{
	}

	[Token(Token = "0x6000943")]
	[Address(RVA = "0x64F07C0", Offset = "0x64EF7C0", VA = "0x64F07C0")]
	internal void ForceMemoryBudget(ProbeVolumeTextureMemoryBudget budget)
	{
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x64F07D0", Offset = "0x64EF7D0", VA = "0x64F07D0")]
	internal void ForceSHBand(ProbeVolumeSHBands shBands)
	{
	}

	[Token(Token = "0x6000945")]
	[Address(RVA = "0x64F0C80", Offset = "0x64EFC80", VA = "0x64F0C80")]
	internal void ForceNoDiskStreaming(bool state)
	{
	}

	[Token(Token = "0x6000946")]
	[Address(RVA = "0x64F0C90", Offset = "0x64EFC90", VA = "0x64F0C90")]
	public void Cleanup()
	{
	}

	[Token(Token = "0x6000947")]
	[Address(RVA = "0x64F0DC0", Offset = "0x64EFDC0", VA = "0x64F0DC0")]
	public int GetVideoMemoryCost()
	{
		return default(int);
	}

	[Token(Token = "0x6000948")]
	[Address(RVA = "0x64F0E30", Offset = "0x64EFE30", VA = "0x64F0E30")]
	private void RemoveCell(int cellIndex)
	{
	}

	[Token(Token = "0x6000949")]
	[Address(RVA = "0x64EB020", Offset = "0x64EA020", VA = "0x64EB020")]
	internal void UnloadCell(Cell cell)
	{
	}

	[Token(Token = "0x600094A")]
	[Address(RVA = "0x64E9130", Offset = "0x64E8130", VA = "0x64E9130")]
	internal void UnloadBlendingCell(Cell cell)
	{
	}

	[Token(Token = "0x600094B")]
	[Address(RVA = "0x64EE820", Offset = "0x64ED820", VA = "0x64EE820")]
	internal void UnloadAllCells()
	{
	}

	[Token(Token = "0x600094C")]
	[Address(RVA = "0x64E7910", Offset = "0x64E6910", VA = "0x64E7910")]
	internal void UnloadAllBlendingCells()
	{
	}

	[Token(Token = "0x600094D")]
	[Address(RVA = "0x64F10C0", Offset = "0x64F00C0", VA = "0x64F10C0")]
	private void AddCell(int cellIndex)
	{
	}

	[Token(Token = "0x600094E")]
	[Address(RVA = "0x64E8960", Offset = "0x64E7960", VA = "0x64E8960")]
	internal bool LoadCell(Cell cell, bool ignoreErrorLog = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600094F")]
	[Address(RVA = "0x64F1C90", Offset = "0x64F0C90", VA = "0x64F1C90")]
	internal void LoadAllCells()
	{
	}

	[Token(Token = "0x6000950")]
	[Address(RVA = "0x64EB2E0", Offset = "0x64EA2E0", VA = "0x64EB2E0")]
	private void ComputeCellGlobalInfo()
	{
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x64F1DE0", Offset = "0x64F0DE0", VA = "0x64F1DE0")]
	internal void AddPendingSceneLoading(string sceneGUID, ProbeVolumeBakingSet bakingSet)
	{
	}

	[Token(Token = "0x6000952")]
	[Address(RVA = "0x64F22C0", Offset = "0x64F12C0", VA = "0x64F22C0")]
	internal void AddPendingSceneRemoval(string sceneGUID)
	{
	}

	[Token(Token = "0x6000953")]
	[Address(RVA = "0x64F2430", Offset = "0x64F1430", VA = "0x64F2430")]
	internal void RemovePendingScene(string sceneGUID, List<int> cellList)
	{
	}

	[Token(Token = "0x6000954")]
	[Address(RVA = "0x64F2610", Offset = "0x64F1610", VA = "0x64F2610")]
	private void PerformPendingIndexChangeAndInit()
	{
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x64F00B0", Offset = "0x64EF0B0", VA = "0x64F00B0")]
	internal void SetSubdivisionDimensions(float minBrickSize, int maxSubdiv, Vector3 offset)
	{
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x64F29F0", Offset = "0x64F19F0", VA = "0x64F29F0")]
	private bool LoadCells(List<int> cellIndices)
	{
		return default(bool);
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x64F2AE0", Offset = "0x64F1AE0", VA = "0x64F2AE0")]
	private void PerformPendingLoading()
	{
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x64F2F70", Offset = "0x64F1F70", VA = "0x64F2F70")]
	private void PerformPendingDeletion()
	{
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x64F1430", Offset = "0x64F0430", VA = "0x64F1430")]
	internal void ComputeEntryMinMax(ref IndirectionEntryInfo entryInfo, ReadOnlySpan<ProbeBrickIndex.Brick> bricks)
	{
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x64F1820", Offset = "0x64F0820", VA = "0x64F1820")]
	internal static int GetNumberOfBricksAtSubdiv(IndirectionEntryInfo entryInfo)
	{
		return default(int);
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x64F0180", Offset = "0x64EF180", VA = "0x64F0180")]
	public void PerformPendingOperations()
	{
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x64F2650", Offset = "0x64F1650", VA = "0x64F2650")]
	internal void InitializeGlobalIndirection()
	{
	}

	[Token(Token = "0x600095D")]
	[Address(RVA = "0x64EF9C0", Offset = "0x64EE9C0", VA = "0x64EF9C0")]
	private void InitProbeReferenceVolume()
	{
	}

	[Token(Token = "0x600095E")]
	[Address(RVA = "0x64F3100", Offset = "0x64F2100", VA = "0x64F3100")]
	private ProbeReferenceVolume()
	{
	}

	[Token(Token = "0x600095F")]
	[Address(RVA = "0x64DB9F0", Offset = "0x64DA9F0", VA = "0x64DB9F0")]
	public RuntimeResources GetRuntimeResources()
	{
		return default(RuntimeResources);
	}

	[Token(Token = "0x6000960")]
	[Address(RVA = "0x64F2930", Offset = "0x64F1930", VA = "0x64F2930")]
	internal void SetMaxSubdivision(int maxSubdivision)
	{
	}

	[Token(Token = "0x6000961")]
	[Address(RVA = "0x64F1810", Offset = "0x64F0810", VA = "0x64F1810")]
	internal static int CellSize(int subdivisionLevel)
	{
		return default(int);
	}

	[Token(Token = "0x6000962")]
	[Address(RVA = "0x64F3AC0", Offset = "0x64F2AC0", VA = "0x64F3AC0")]
	internal float BrickSize(int subdivisionLevel)
	{
		return default(float);
	}

	[Token(Token = "0x6000963")]
	[Address(RVA = "0x64F3AE0", Offset = "0x64F2AE0", VA = "0x64F3AE0")]
	internal float MinBrickSize()
	{
		return default(float);
	}

	[Token(Token = "0x6000964")]
	[Address(RVA = "0x64E3460", Offset = "0x64E2460", VA = "0x64E3460")]
	internal float MaxBrickSize()
	{
		return default(float);
	}

	[Token(Token = "0x6000965")]
	[Address(RVA = "0x64F3AF0", Offset = "0x64F2AF0", VA = "0x64F3AF0")]
	internal Vector3 ProbeOffset()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000966")]
	[Address(RVA = "0x64F3B10", Offset = "0x64F2B10", VA = "0x64F3B10")]
	internal int GetMaxSubdivision()
	{
		return default(int);
	}

	[Token(Token = "0x6000967")]
	[Address(RVA = "0x64F3B20", Offset = "0x64F2B20", VA = "0x64F3B20")]
	internal int GetMaxSubdivision(float multiplier)
	{
		return default(int);
	}

	[Token(Token = "0x6000968")]
	[Address(RVA = "0x64F3BB0", Offset = "0x64F2BB0", VA = "0x64F3BB0")]
	internal float GetDistanceBetweenProbes(int subdivisionLevel)
	{
		return default(float);
	}

	[Token(Token = "0x6000969")]
	[Address(RVA = "0x64F3BD0", Offset = "0x64F2BD0", VA = "0x64F3BD0")]
	internal float MinDistanceBetweenProbes()
	{
		return default(float);
	}

	[Token(Token = "0x600096A")]
	[Address(RVA = "0x64F3BF0", Offset = "0x64F2BF0", VA = "0x64F3BF0")]
	internal int GetGlobalIndirectionEntryMaxSubdiv()
	{
		return default(int);
	}

	[Token(Token = "0x600096B")]
	[Address(RVA = "0x64F17F0", Offset = "0x64F07F0", VA = "0x64F17F0")]
	internal int GetEntrySubdivLevel()
	{
		return default(int);
	}

	[Token(Token = "0x600096C")]
	[Address(RVA = "0x64F3C00", Offset = "0x64F2C00", VA = "0x64F3C00")]
	internal float GetEntrySize()
	{
		return default(float);
	}

	[Token(Token = "0x600096D")]
	[Address(RVA = "0x64DBFA0", Offset = "0x64DAFA0", VA = "0x64DBFA0")]
	public bool DataHasBeenLoaded()
	{
		return default(bool);
	}

	[Token(Token = "0x600096E")]
	[Address(RVA = "0x64F3C30", Offset = "0x64F2C30", VA = "0x64F3C30")]
	internal void Clear()
	{
	}

	[Token(Token = "0x600096F")]
	[Address(RVA = "0x64F3D90", Offset = "0x64F2D90", VA = "0x64F3D90")]
	private List<ProbeBrickPool.BrickChunkAlloc> GetSourceLocations(int count, int chunkSize, ProbeBrickPool.DataLocation dataLoc)
	{
		return null;
	}

	[Token(Token = "0x6000970")]
	private void UpdateDataLocationTexture<T>(Texture output, NativeArray<T> input) where T : struct
	{
	}

	[Token(Token = "0x6000971")]
	[Address(RVA = "0x64F3F40", Offset = "0x64F2F40", VA = "0x64F3F40")]
	private void UpdateValidityTextureWithoutMask(Texture output, NativeArray<byte> input)
	{
	}

	[Token(Token = "0x6000972")]
	[Address(RVA = "0x64F40C0", Offset = "0x64F30C0", VA = "0x64F40C0")]
	private void UpdatePool(List<ProbeBrickPool.BrickChunkAlloc> chunkList, CellData.PerScenarioData data, NativeArray<byte> validityNeighMaskData, NativeArray<ushort> skyOcclusionL0L1Data, NativeArray<byte> skyShadingDirectionIndices, int chunkIndex, int poolIndex)
	{
	}

	[Token(Token = "0x6000973")]
	[Address(RVA = "0x64ECF00", Offset = "0x64EBF00", VA = "0x64ECF00")]
	private void UpdatePool(CommandBuffer cmd, List<ProbeBrickPool.BrickChunkAlloc> chunkList, CellStreamingScratchBuffer dataBuffer, CellStreamingScratchBufferLayout layout, int poolIndex)
	{
	}

	[Token(Token = "0x6000974")]
	[Address(RVA = "0x64F4770", Offset = "0x64F3770", VA = "0x64F4770")]
	private void UpdateSharedData(List<ProbeBrickPool.BrickChunkAlloc> chunkList, NativeArray<byte> validityNeighMaskData, NativeArray<ushort> skyOcclusionData, NativeArray<byte> skyShadingDirectionIndices, int chunkIndex)
	{
	}

	[Token(Token = "0x6000975")]
	[Address(RVA = "0x64E9380", Offset = "0x64E8380", VA = "0x64E9380")]
	private bool AddBlendingBricks(Cell cell)
	{
		return default(bool);
	}

	[Token(Token = "0x6000976")]
	[Address(RVA = "0x64F1390", Offset = "0x64F0390", VA = "0x64F1390")]
	private bool ReservePoolChunks(int brickCount, List<ProbeBrickPool.BrickChunkAlloc> chunkList, bool ignoreErrorLog)
	{
		return default(bool);
	}

	[Token(Token = "0x6000977")]
	[Address(RVA = "0x64F1C30", Offset = "0x64F0C30", VA = "0x64F1C30")]
	private void ReleasePoolChunks(List<ProbeBrickPool.BrickChunkAlloc> chunkList)
	{
	}

	[Token(Token = "0x6000978")]
	[Address(RVA = "0x64EC590", Offset = "0x64EB590", VA = "0x64EC590")]
	private void UpdatePoolAndIndex(Cell cell, CellStreamingScratchBuffer dataBuffer, CellStreamingScratchBufferLayout layout, int poolIndex, CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000979")]
	[Address(RVA = "0x64F18D0", Offset = "0x64F08D0", VA = "0x64F18D0")]
	private bool AddBricks(Cell cell)
	{
		return default(bool);
	}

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x64ED270", Offset = "0x64EC270", VA = "0x64ED270")]
	private void UpdateCellIndex(Cell cell)
	{
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x64F0FA0", Offset = "0x64EFFA0", VA = "0x64F0FA0")]
	private void ReleaseBricks(Cell cell)
	{
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x64DC140", Offset = "0x64DB140", VA = "0x64DC140")]
	internal void UpdateConstantBuffer(CommandBuffer cmd, ProbeVolumeShadingParameters parameters)
	{
	}

	[Token(Token = "0x600097D")]
	[Address(RVA = "0x64F0970", Offset = "0x64EF970", VA = "0x64F0970")]
	private void DeinitProbeReferenceVolume()
	{
	}

	[Token(Token = "0x600097E")]
	[Address(RVA = "0x64F0DB0", Offset = "0x64EFDB0", VA = "0x64F0DB0")]
	private void CleanupLoadedData()
	{
	}
}
