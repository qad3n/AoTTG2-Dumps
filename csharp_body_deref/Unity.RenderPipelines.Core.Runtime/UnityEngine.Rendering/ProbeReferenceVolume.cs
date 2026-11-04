// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeReferenceVolume
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Address(RVA = "0x2B0B410", Offset = "0x2B09A10", VA = "0x182B0B410")]
		public DiskStreamingRequest(int maxRequestCount)
		{
		}

		[Token(Token = "0x60009C1")]
		[Address(RVA = "0x2B0B210", Offset = "0x2B09810", VA = "0x182B0B210")]
		public unsafe void AddReadCommand(int offset, int size, byte* dest)
		{
		}

		[Token(Token = "0x60009C2")]
		[Address(RVA = "0x2B0B340", Offset = "0x2B09940", VA = "0x182B0B340")]
		public int RunCommands(FileHandle file)
		{
			return default(int);
		}

		[Token(Token = "0x60009C3")]
		[Address(RVA = "0x2B0B270", Offset = "0x2B09870", VA = "0x182B0B270")]
		public void Clear()
		{
		}

		[Token(Token = "0x60009C4")]
		[Address(RVA = "0x2B0B240", Offset = "0x2B09840", VA = "0x182B0B240")]
		public void Cancel()
		{
		}

		[Token(Token = "0x60009C5")]
		[Address(RVA = "0x2B0B3C0", Offset = "0x2B099C0", VA = "0x182B0B3C0")]
		public void Wait()
		{
		}

		[Token(Token = "0x60009C6")]
		[Address(RVA = "0x2B0B2D0", Offset = "0x2B098D0", VA = "0x182B0B2D0")]
		public void Dispose()
		{
		}

		[Token(Token = "0x60009C7")]
		[Address(RVA = "0x2B0B310", Offset = "0x2B09910", VA = "0x182B0B310")]
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
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		public BufferLayoutBuilder(int initialOffset = 0)
		{
		}

		[Token(Token = "0x60009C9")]
		[Address(RVA = "0x2B08C80", Offset = "0x2B07280", VA = "0x182B08C80")]
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
			[Address(RVA = "0x2B0AAB0", Offset = "0x2B090B0", VA = "0x182B0AAB0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000119")]
		public int chunkCount
		{
			[Token(Token = "0x60009CE")]
			[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
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
			[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x60009CA")]
		[Address(RVA = "0x2B0A950", Offset = "0x2B08F50", VA = "0x182B0A950")]
		public CellStreamingScratchBuffer(int chunkCount, int chunkSize, bool allocateGraphicsBuffers)
		{
		}

		[Token(Token = "0x60009CB")]
		[Address(RVA = "0x2B0A930", Offset = "0x2B08F30", VA = "0x182B0A930")]
		public void Swap()
		{
		}

		[Token(Token = "0x60009CC")]
		[Address(RVA = "0x2B0A8B0", Offset = "0x2B08EB0", VA = "0x182B0A8B0")]
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
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60009D1")]
			[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700011C")]
		public State state
		{
			[Token(Token = "0x60009D2")]
			[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
			[CompilerGenerated]
			get
			{
				return default(State);
			}
			[Token(Token = "0x60009D3")]
			[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700011D")]
		public CellStreamingScratchBuffer scratchBuffer
		{
			[Token(Token = "0x60009D4")]
			[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60009D5")]
			[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700011E")]
		public CellStreamingScratchBufferLayout scratchBufferLayout
		{
			[Token(Token = "0x60009D6")]
			[Address(RVA = "0x2B0A800", Offset = "0x2B08E00", VA = "0x182B0A800")]
			[CompilerGenerated]
			get
			{
				return default(CellStreamingScratchBufferLayout);
			}
			[Token(Token = "0x60009D7")]
			[Address(RVA = "0x2B0A860", Offset = "0x2B08E60", VA = "0x182B0A860")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700011F")]
		public ProbeVolumeBakingSet.PerScenarioDataInfo scenarioData
		{
			[Token(Token = "0x60009D8")]
			[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60009D9")]
			[Address(RVA = "0x58A900", Offset = "0x588F00", VA = "0x18058A900")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000120")]
		public int poolIndex
		{
			[Token(Token = "0x60009DA")]
			[Address(RVA = "0x25EDB20", Offset = "0x25EC120", VA = "0x1825EDB20")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60009DB")]
			[Address(RVA = "0x2B0A850", Offset = "0x2B08E50", VA = "0x182B0A850")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x17000121")]
		public bool streamSharedData
		{
			[Token(Token = "0x60009DC")]
			[Address(RVA = "0x2B0A840", Offset = "0x2B08E40", VA = "0x182B0A840")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x60009DD")]
			[Address(RVA = "0x2B0A8A0", Offset = "0x2B08EA0", VA = "0x182B0A8A0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x60009DE")]
		[Address(RVA = "0x2B09CF0", Offset = "0x2B082F0", VA = "0x182B09CF0")]
		public bool IsStreaming()
		{
			return default(bool);
		}

		[Token(Token = "0x60009DF")]
		[Address(RVA = "0x2B09A20", Offset = "0x2B08020", VA = "0x182B09A20")]
		public void Cancel()
		{
		}

		[Token(Token = "0x60009E0")]
		[Address(RVA = "0x2B0A2D0", Offset = "0x2B088D0", VA = "0x182B0A2D0")]
		public void WaitAll()
		{
		}

		[Token(Token = "0x60009E1")]
		[Address(RVA = "0x2B09F40", Offset = "0x2B08540", VA = "0x182B09F40")]
		public bool UpdateRequestState(DiskStreamingRequest request, ref bool isComplete)
		{
			return default(bool);
		}

		[Token(Token = "0x60009E2")]
		[Address(RVA = "0x2B09FA0", Offset = "0x2B085A0", VA = "0x182B09FA0")]
		public void UpdateState()
		{
		}

		[Token(Token = "0x60009E3")]
		[Address(RVA = "0x2B09B40", Offset = "0x2B08140", VA = "0x182B09B40")]
		public void Clear()
		{
		}

		[Token(Token = "0x60009E4")]
		[Address(RVA = "0x2B09D10", Offset = "0x2B08310", VA = "0x182B09D10")]
		public void Reset()
		{
		}

		[Token(Token = "0x60009E5")]
		[Address(RVA = "0x2B09B70", Offset = "0x2B08170", VA = "0x182B09B70")]
		public void Dispose()
		{
		}

		[Token(Token = "0x60009E6")]
		[Address(RVA = "0x2B0A4C0", Offset = "0x2B08AC0", VA = "0x182B0A4C0")]
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
		[Address(RVA = "0x2B09770", Offset = "0x2B07D70", VA = "0x182B09770", Slot = "3")]
		public override string ToString()
		{
			return null;
		}

		[Token(Token = "0x60009EC")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
			[Address(RVA = "0xC84140", Offset = "0xC82740", VA = "0x180C84140")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<ushort>);
			}
			[Token(Token = "0x60009EE")]
			[Address(RVA = "0x19377C0", Offset = "0x1935DC0", VA = "0x1819377C0")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x17000123")]
		public NativeArray<byte> skyShadingDirectionIndices
		{
			[Token(Token = "0x60009EF")]
			[Address(RVA = "0x1D94540", Offset = "0x1D92B40", VA = "0x181D94540")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<byte>);
			}
			[Token(Token = "0x60009F0")]
			[Address(RVA = "0x2B09750", Offset = "0x2B07D50", VA = "0x182B09750")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x17000124")]
		public NativeArray<ProbeBrickIndex.Brick> bricks
		{
			[Token(Token = "0x60009F1")]
			[Address(RVA = "0x1C5E410", Offset = "0x1C5CA10", VA = "0x181C5E410")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<ProbeBrickIndex.Brick>);
			}
			[Token(Token = "0x60009F2")]
			[Address(RVA = "0x1C5E490", Offset = "0x1C5CA90", VA = "0x181C5E490")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x17000125")]
		public NativeArray<Vector3> probePositions
		{
			[Token(Token = "0x60009F3")]
			[Address(RVA = "0x18FEB30", Offset = "0x18FD130", VA = "0x1818FEB30")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<Vector3>);
			}
			[Token(Token = "0x60009F4")]
			[Address(RVA = "0x2B09740", Offset = "0x2B07D40", VA = "0x182B09740")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x17000126")]
		public NativeArray<float> touchupVolumeInteraction
		{
			[Token(Token = "0x60009F5")]
			[Address(RVA = "0xCDE970", Offset = "0xCDCF70", VA = "0x180CDE970")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<float>);
			}
			[Token(Token = "0x60009F6")]
			[Address(RVA = "0x12BF2E0", Offset = "0x12BD8E0", VA = "0x1812BF2E0")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x17000127")]
		public NativeArray<Vector3> offsetVectors
		{
			[Token(Token = "0x60009F7")]
			[Address(RVA = "0x12BEF80", Offset = "0x12BD580", VA = "0x1812BEF80")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<Vector3>);
			}
			[Token(Token = "0x60009F8")]
			[Address(RVA = "0x12BF1B0", Offset = "0x12BD7B0", VA = "0x1812BF1B0")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x17000128")]
		public NativeArray<float> validity
		{
			[Token(Token = "0x60009F9")]
			[Address(RVA = "0x2B09720", Offset = "0x2B07D20", VA = "0x182B09720")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<float>);
			}
			[Token(Token = "0x60009FA")]
			[Address(RVA = "0x2B09760", Offset = "0x2B07D60", VA = "0x182B09760")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x17000129")]
		public NativeArray<byte> layer
		{
			[Token(Token = "0x60009FB")]
			[Address(RVA = "0x2B09710", Offset = "0x2B07D10", VA = "0x182B09710")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<byte>);
			}
			[Token(Token = "0x60009FC")]
			[Address(RVA = "0x2B09730", Offset = "0x2B07D30", VA = "0x182B09730")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x60009FD")]
		[Address(RVA = "0x2B08E00", Offset = "0x2B07400", VA = "0x182B08E00")]
		public void CleanupPerScenarioData(in PerScenarioData data)
		{
		}

		[Token(Token = "0x60009FE")]
		[Address(RVA = "0x2B08F50", Offset = "0x2B07550", VA = "0x182B08F50")]
		public void Cleanup(bool cleanScenarioList)
		{
		}

		[Token(Token = "0x60009FF")]
		[Address(RVA = "0x2B09690", Offset = "0x2B07C90", VA = "0x182B09690")]
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
		[Address(RVA = "0x2B098A0", Offset = "0x2B07EA0", VA = "0x182B098A0")]
		public void Clear()
		{
		}

		[Token(Token = "0x6000A01")]
		[Address(RVA = "0x2B098F0", Offset = "0x2B07EF0", VA = "0x182B098F0")]
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
		[Address(RVA = "0x2B09810", Offset = "0x2B07E10", VA = "0x182B09810")]
		public void Clear()
		{
		}

		[Token(Token = "0x6000A03")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Address(RVA = "0x2B08D10", Offset = "0x2B07310", VA = "0x182B08D10")]
		public void MarkUpToDate()
		{
		}

		[Token(Token = "0x6000A05")]
		[Address(RVA = "0x2B08CF0", Offset = "0x2B072F0", VA = "0x182B08CF0")]
		public bool IsUpToDate()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A06")]
		[Address(RVA = "0x2B08CE0", Offset = "0x2B072E0", VA = "0x182B08CE0")]
		public void ForceReupload()
		{
		}

		[Token(Token = "0x6000A07")]
		[Address(RVA = "0x2B08D50", Offset = "0x2B07350", VA = "0x182B08D50")]
		public bool ShouldReupload()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A08")]
		[Address(RVA = "0x2B08D20", Offset = "0x2B07320", VA = "0x182B08D20")]
		public void Prioritize()
		{
		}

		[Token(Token = "0x6000A09")]
		[Address(RVA = "0x2B08D30", Offset = "0x2B07330", VA = "0x182B08D30")]
		public bool ShouldPrioritize()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A0A")]
		[Address(RVA = "0x2B08C90", Offset = "0x2B07290", VA = "0x182B08C90")]
		public void Clear()
		{
		}

		[Token(Token = "0x6000A0B")]
		[Address(RVA = "0x2B08D70", Offset = "0x2B07370", VA = "0x182B08D70")]
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
		[Address(RVA = "0x2B09A00", Offset = "0x2B08000", VA = "0x182B09A00")]
		public bool IsStreaming()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A0D")]
		[Address(RVA = "0x2B099C0", Offset = "0x2B07FC0", VA = "0x182B099C0")]
		public bool IsBlendingStreaming()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A0E")]
		[Address(RVA = "0x2B09970", Offset = "0x2B07F70", VA = "0x182B09970")]
		public void Clear()
		{
		}

		[Token(Token = "0x6000A0F")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Address(RVA = "0x2B0ACB0", Offset = "0x2B092B0", VA = "0x182B0ACB0", Slot = "4")]
		public int CompareTo(Cell other)
		{
			return default(int);
		}

		[Token(Token = "0x6000A11")]
		[Address(RVA = "0x2B0AD00", Offset = "0x2B09300", VA = "0x182B0AD00")]
		public bool UpdateCellScenarioData(string scenario0, string scenario1)
		{
			return default(bool);
		}

		[Token(Token = "0x6000A12")]
		[Address(RVA = "0x2B0AAE0", Offset = "0x2B090E0", VA = "0x182B0AAE0")]
		public void Clear()
		{
		}

		[Token(Token = "0x6000A13")]
		[Address(RVA = "0x2B0ADE0", Offset = "0x2B093E0", VA = "0x182B0ADE0")]
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
		[Address(RVA = "0x2B1EDD0", Offset = "0x2B1D3D0", VA = "0x182B1EDD0")]
		public Volume(Matrix4x4 trs, float maxSubdivision, float minSubdivision)
		{
		}

		[Token(Token = "0x6000A15")]
		[Address(RVA = "0x2B1ED20", Offset = "0x2B1D320", VA = "0x182B1ED20")]
		public Volume(Vector3 corner, Vector3 X, Vector3 Y, Vector3 Z, float maxSubdivision = 1f, float minSubdivision = 0f)
		{
		}

		[Token(Token = "0x6000A16")]
		[Address(RVA = "0x2B1ED80", Offset = "0x2B1D380", VA = "0x182B1ED80")]
		public Volume(Volume copy)
		{
		}

		[Token(Token = "0x6000A17")]
		[Address(RVA = "0x2B1EEA0", Offset = "0x2B1D4A0", VA = "0x182B1EEA0")]
		public Volume(Bounds bounds)
		{
		}

		[Token(Token = "0x6000A18")]
		[Address(RVA = "0x2B1E430", Offset = "0x2B1CA30", VA = "0x182B1E430")]
		public Bounds CalculateAABB()
		{
			return default(Bounds);
		}

		[Token(Token = "0x6000A19")]
		[Address(RVA = "0x2B1E650", Offset = "0x2B1CC50", VA = "0x182B1E650")]
		public void CalculateCenterAndSize(out Vector3 center, out Vector3 size)
		{
		}

		[Token(Token = "0x6000A1A")]
		[Address(RVA = "0x2B1EAF0", Offset = "0x2B1D0F0", VA = "0x182B1EAF0")]
		public void Transform(Matrix4x4 trs)
		{
		}

		[Token(Token = "0x6000A1B")]
		[Address(RVA = "0x2B1E840", Offset = "0x2B1CE40", VA = "0x182B1E840", Slot = "3")]
		public override string ToString()
		{
			return null;
		}

		[Token(Token = "0x6000A1C")]
		[Address(RVA = "0x2B1E730", Offset = "0x2B1CD30", VA = "0x182B1E730", Slot = "4")]
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
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
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
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
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
		[Address(RVA = "0x2B08030", Offset = "0x2B06630", VA = "0x182B08030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FC")]
	public bool loadMaxCellsPerFrame
	{
		[Token(Token = "0x60008EE")]
		[Address(RVA = "0x1C61320", Offset = "0x1C5F920", VA = "0x181C61320")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60008EF")]
		[Address(RVA = "0x1C61420", Offset = "0x1C5FA20", VA = "0x181C61420")]
		set
		{
		}
	}

	[Token(Token = "0x170000FD")]
	private int numberOfCellsLoadedPerFrame
	{
		[Token(Token = "0x60008F0")]
		[Address(RVA = "0x2B08410", Offset = "0x2B06A10", VA = "0x182B08410")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000FE")]
	public int numberOfCellsBlendedPerFrame
	{
		[Token(Token = "0x60008F1")]
		[Address(RVA = "0x1AAAB20", Offset = "0x1AA9120", VA = "0x181AAAB20")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60008F2")]
		[Address(RVA = "0x2B08940", Offset = "0x2B06F40", VA = "0x182B08940")]
		set
		{
		}
	}

	[Token(Token = "0x170000FF")]
	public float turnoverRate
	{
		[Token(Token = "0x60008F3")]
		[Address(RVA = "0x1D981F0", Offset = "0x1D967F0", VA = "0x181D981F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60008F4")]
		[Address(RVA = "0x2B08A50", Offset = "0x2B07050", VA = "0x182B08A50")]
		set
		{
		}
	}

	[Token(Token = "0x17000100")]
	internal Bounds globalBounds
	{
		[Token(Token = "0x6000915")]
		[Address(RVA = "0x2B08230", Offset = "0x2B06830", VA = "0x182B08230")]
		get
		{
			return default(Bounds);
		}
		[Token(Token = "0x6000916")]
		[Address(RVA = "0x2B08810", Offset = "0x2B06E10", VA = "0x182B08810")]
		set
		{
		}
	}

	[Token(Token = "0x17000101")]
	private ProbeVolumeBakingSet m_CurrentBakingSet
	{
		[Token(Token = "0x6000917")]
		[Address(RVA = "0x2B08000", Offset = "0x2B06600", VA = "0x182B08000")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000918")]
		[Address(RVA = "0x2B088E0", Offset = "0x2B06EE0", VA = "0x182B088E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000102")]
	private ProbeVolumeBakingSet m_LazyBakingSet
	{
		[Token(Token = "0x6000919")]
		[Address(RVA = "0x2B083E0", Offset = "0x2B069E0", VA = "0x182B083E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600091A")]
		[Address(RVA = "0x2B08910", Offset = "0x2B06F10", VA = "0x182B08910")]
		set
		{
		}
	}

	[Token(Token = "0x17000103")]
	public bool isInitialized
	{
		[Token(Token = "0x600091B")]
		[Address(RVA = "0x27E58D0", Offset = "0x27E3ED0", VA = "0x1827E58D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000104")]
	internal bool enabledBySRP
	{
		[Token(Token = "0x600091C")]
		[Address(RVA = "0x2B08220", Offset = "0x2B06820", VA = "0x182B08220")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000105")]
	internal bool vertexSampling
	{
		[Token(Token = "0x600091D")]
		[Address(RVA = "0x2B08800", Offset = "0x2B06E00", VA = "0x182B08800")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000106")]
	internal bool hasUnloadedCells
	{
		[Token(Token = "0x600091E")]
		[Address(RVA = "0x2B08260", Offset = "0x2B06860", VA = "0x182B08260")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000107")]
	internal bool supportLightingScenarios
	{
		[Token(Token = "0x600091F")]
		[Address(RVA = "0x27E5940", Offset = "0x27E3F40", VA = "0x1827E5940")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000108")]
	internal bool supportScenarioBlending
	{
		[Token(Token = "0x6000920")]
		[Address(RVA = "0x2B087B0", Offset = "0x2B06DB0", VA = "0x182B087B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000109")]
	internal bool gpuStreamingEnabled
	{
		[Token(Token = "0x6000921")]
		[Address(RVA = "0x2B08250", Offset = "0x2B06850", VA = "0x182B08250")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010A")]
	internal bool diskStreamingEnabled
	{
		[Token(Token = "0x6000922")]
		[Address(RVA = "0x2B08200", Offset = "0x2B06800", VA = "0x182B08200")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010B")]
	public bool probeOcclusion
	{
		[Token(Token = "0x6000923")]
		[Address(RVA = "0x2B08520", Offset = "0x2B06B20", VA = "0x182B08520")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010C")]
	public bool skyOcclusion
	{
		[Token(Token = "0x6000924")]
		[Address(RVA = "0x2B08710", Offset = "0x2B06D10", VA = "0x182B08710")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010D")]
	public bool skyOcclusionShadingDirection
	{
		[Token(Token = "0x6000925")]
		[Address(RVA = "0x2B08670", Offset = "0x2B06C70", VA = "0x182B08670")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010E")]
	private bool useRenderingLayers
	{
		[Token(Token = "0x6000926")]
		[Address(RVA = "0x2B087C0", Offset = "0x2B06DC0", VA = "0x182B087C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010F")]
	public ProbeVolumeSHBands shBands
	{
		[Token(Token = "0x6000927")]
		[Address(RVA = "0x2B08660", Offset = "0x2B06C60", VA = "0x182B08660")]
		get
		{
			return default(ProbeVolumeSHBands);
		}
	}

	[Token(Token = "0x17000110")]
	public ProbeVolumeBakingSet currentBakingSet
	{
		[Token(Token = "0x6000928")]
		[Address(RVA = "0x2B08000", Offset = "0x2B06600", VA = "0x182B08000")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000111")]
	public string lightingScenario
	{
		[Token(Token = "0x6000929")]
		[Address(RVA = "0x2B08340", Offset = "0x2B06940", VA = "0x182B08340")]
		get
		{
			return null;
		}
		[Token(Token = "0x600092A")]
		[Address(RVA = "0x2B08830", Offset = "0x2B06E30", VA = "0x182B08830")]
		set
		{
		}
	}

	[Token(Token = "0x17000112")]
	public string otherScenario
	{
		[Token(Token = "0x600092B")]
		[Address(RVA = "0x2B08470", Offset = "0x2B06A70", VA = "0x182B08470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000113")]
	public float scenarioBlendingFactor
	{
		[Token(Token = "0x600092C")]
		[Address(RVA = "0x2B085C0", Offset = "0x2B06BC0", VA = "0x182B085C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600092D")]
		[Address(RVA = "0x2B08980", Offset = "0x2B06F80", VA = "0x182B08980")]
		set
		{
		}
	}

	[Token(Token = "0x17000114")]
	public ProbeVolumeTextureMemoryBudget memoryBudget
	{
		[Token(Token = "0x6000931")]
		[Address(RVA = "0x219A1B0", Offset = "0x21987B0", VA = "0x18219A1B0")]
		get
		{
			return default(ProbeVolumeTextureMemoryBudget);
		}
	}

	[Token(Token = "0x17000115")]
	internal List<ProbeVolumePerSceneData> perSceneDataList
	{
		[Token(Token = "0x6000932")]
		[Address(RVA = "0x2B08510", Offset = "0x2B06B10", VA = "0x182B08510")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000933")]
		[Address(RVA = "0x2B08960", Offset = "0x2B06F60", VA = "0x182B08960")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000116")]
	internal float indexFragmentationRate
	{
		[Token(Token = "0x600093E")]
		[Address(RVA = "0x2B082B0", Offset = "0x2B068B0", VA = "0x182B082B0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000117")]
	public static ProbeReferenceVolume instance
	{
		[Token(Token = "0x600093F")]
		[Address(RVA = "0x2B082F0", Offset = "0x2B068F0", VA = "0x182B082F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x2AEE210", Offset = "0x2AEC810", VA = "0x182AEE210")]
	public void BindAPVRuntimeResources(CommandBuffer cmdBuffer, bool isProbeVolumeEnabled)
	{
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x2B06AA0", Offset = "0x2B050A0", VA = "0x182B06AA0")]
	public bool UpdateShaderVariablesProbeVolumes(CommandBuffer cmd, ProbeVolumesOptions probeVolumeOptions, int taaFrameIndex, bool supportRenderingLayers = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x2AFE3F0", Offset = "0x2AFC9F0", VA = "0x182AFE3F0")]
	[Obsolete("Use the other override to support sampling offset in debug modes. #from(6000.0)")]
	public void RenderDebug(Camera camera, Texture exposureTexture)
	{
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x2AFE2F0", Offset = "0x2AFC8F0", VA = "0x182AFE2F0")]
	public void RenderDebug(Camera camera, ProbeVolumesOptions options, Texture exposureTexture)
	{
	}

	[Token(Token = "0x60008D7")]
	[Address(RVA = "0x2AF72C0", Offset = "0x2AF58C0", VA = "0x182AF72C0")]
	public bool IsProbeSamplingDebugEnabled()
	{
		return default(bool);
	}

	[Token(Token = "0x60008D8")]
	[Address(RVA = "0x2AF5A80", Offset = "0x2AF4080", VA = "0x182AF5A80")]
	public bool GetProbeSamplingDebugResources(Camera camera, out GraphicsBuffer resultBuffer, out Vector2 coords)
	{
		return default(bool);
	}

	[Token(Token = "0x60008D9")]
	[Address(RVA = "0x2AFFC90", Offset = "0x2AFE290", VA = "0x182AFFC90")]
	private bool TryCreateDebugRenderData()
	{
		return default(bool);
	}

	[Token(Token = "0x60008DA")]
	[Address(RVA = "0x2AF6A00", Offset = "0x2AF5000", VA = "0x182AF6A00")]
	private void InitializeDebug()
	{
	}

	[Token(Token = "0x60008DB")]
	[Address(RVA = "0x2AEF310", Offset = "0x2AED910", VA = "0x182AEF310")]
	private void CleanupDebug()
	{
	}

	[Token(Token = "0x60008DC")]
	private void DebugCellIndexChanged<T>(DebugUI.Field<T> field, T value)
	{
	}

	[Token(Token = "0x60008DD")]
	[Address(RVA = "0x2AF9BB0", Offset = "0x2AF81B0", VA = "0x182AF9BB0")]
	private void RegisterDebug()
	{
	}

	[Token(Token = "0x60008DE")]
	[Address(RVA = "0x2B023A0", Offset = "0x2B009A0", VA = "0x182B023A0")]
	private void UnregisterDebug(bool destroyPanel)
	{
	}

	[Token(Token = "0x60008DF")]
	[Address(RVA = "0x2AFE4A0", Offset = "0x2AFCAA0", VA = "0x182AFE4A0")]
	public void RenderFragmentationOverlay(RenderGraph renderGraph, TextureHandle colorBuffer, TextureHandle depthBuffer, DebugOverlay debugOverlay)
	{
	}

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x2AFF410", Offset = "0x2AFDA10", VA = "0x182AFF410")]
	private bool ShouldCullCell(Vector3 cellPosition, Transform cameraTransform, Plane[] frustumPlanes)
	{
		return default(bool);
	}

	[Token(Token = "0x60008E1")]
	[Address(RVA = "0x2B04930", Offset = "0x2B02F30", VA = "0x182B04930")]
	private static void UpdateDebugFromSelection(ref Vector4[] _AdjustmentVolumeBounds, ref int _AdjustmentVolumeCount)
	{
	}

	[Token(Token = "0x60008E2")]
	[Address(RVA = "0x2AF3D80", Offset = "0x2AF2380", VA = "0x182AF3D80")]
	private Bounds GetCellBounds(Vector3 cellPosition)
	{
		return default(Bounds);
	}

	[Token(Token = "0x60008E3")]
	[Address(RVA = "0x2AFF6D0", Offset = "0x2AFDCD0", VA = "0x182AFF6D0")]
	private bool ShouldCullCell(Vector3 cellPosition, Vector4[] adjustmentVolumeBounds, int adjustmentVolumeCount)
	{
		return default(bool);
	}

	[Token(Token = "0x60008E4")]
	[Address(RVA = "0x2AF2810", Offset = "0x2AF0E10", VA = "0x182AF2810")]
	private void DrawProbeDebug(Camera camera, Texture exposureTexture)
	{
	}

	[Token(Token = "0x60008E5")]
	[Address(RVA = "0x2AFEA40", Offset = "0x2AFD040", VA = "0x182AFEA40")]
	internal void ResetDebugViewToMaxSubdiv()
	{
	}

	[Token(Token = "0x60008E6")]
	[Address(RVA = "0x2AEF9C0", Offset = "0x2AEDFC0", VA = "0x182AEF9C0")]
	private void ClearDebugData()
	{
	}

	[Token(Token = "0x60008E7")]
	[Address(RVA = "0x2AF2080", Offset = "0x2AF0680", VA = "0x182AF2080")]
	private static void DecompressSH(ref SphericalHarmonicsL2 shv)
	{
	}

	[Token(Token = "0x60008E8")]
	[Address(RVA = "0x2AF1FA0", Offset = "0x2AF05A0", VA = "0x182AF1FA0")]
	internal static Vector3 DecodeSkyShadingDirection(uint directionIndex)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60008E9")]
	[Address(RVA = "0x2AF3FE0", Offset = "0x2AF25E0", VA = "0x182AF3FE0")]
	internal bool GetFlattenedProbeData(string scenario, out Vector3[] positions, out SphericalHarmonicsL2[] irradiance, out float[] validity, out Vector4[] occlusion, out Vector4[] skyOcclusion, out Vector3[] skyOcclusionDirections, out Vector3[] virtualOffset)
	{
		return default(bool);
	}

	[Token(Token = "0x60008EA")]
	[Address(RVA = "0x2AF1140", Offset = "0x2AEF740", VA = "0x182AF1140")]
	private CellInstancedDebugProbes CreateInstancedProbes(Cell cell)
	{
		return null;
	}

	[Token(Token = "0x60008EB")]
	[Address(RVA = "0x2AEF9C0", Offset = "0x2AEDFC0", VA = "0x182AEF9C0")]
	private void OnClearLightingdata()
	{
	}

	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x1C61420", Offset = "0x1C5FA20", VA = "0x181C61420")]
	public void EnableMaxCellStreaming(bool value)
	{
	}

	[Token(Token = "0x60008ED")]
	[Address(RVA = "0x2AFF2E0", Offset = "0x2AFD8E0", VA = "0x182AFF2E0")]
	public void SetNumberOfCellsLoadedPerFrame(int numberOfCells)
	{
	}

	[Token(Token = "0x60008F5")]
	[Address(RVA = "0x2AF6940", Offset = "0x2AF4F40", VA = "0x182AF6940")]
	private void InitStreaming()
	{
	}

	[Token(Token = "0x60008F6")]
	[Address(RVA = "0x2AEF4A0", Offset = "0x2AEDAA0", VA = "0x182AEF4A0")]
	private void CleanupStreaming()
	{
	}

	[Token(Token = "0x60008F7")]
	[Address(RVA = "0x2AFEA70", Offset = "0x2AFD070", VA = "0x182AFEA70")]
	internal void ScenarioBlendingChanged(bool scenarioChanged)
	{
	}

	[Token(Token = "0x60008F8")]
	[Address(RVA = "0x2AF0250", Offset = "0x2AEE850", VA = "0x182AF0250")]
	private static void ComputeCellStreamingScore(Cell cell, Vector3 cameraPosition, Vector3 cameraDirection)
	{
	}

	[Token(Token = "0x60008F9")]
	[Address(RVA = "0x2AF0DD0", Offset = "0x2AEF3D0", VA = "0x182AF0DD0")]
	private void ComputeStreamingScore(Vector3 cameraPosition, Vector3 cameraDirection, DynamicArray<Cell> cells)
	{
	}

	[Token(Token = "0x60008FA")]
	[Address(RVA = "0x2AEFB60", Offset = "0x2AEE160", VA = "0x182AEFB60")]
	private void ComputeBestToBeLoadedCells(Vector3 cameraPosition, Vector3 cameraDirection)
	{
	}

	[Token(Token = "0x60008FB")]
	[Address(RVA = "0x2AF09B0", Offset = "0x2AEEFB0", VA = "0x182AF09B0")]
	private void ComputeStreamingScoreAndWorseLoadedCells(Vector3 cameraPosition, Vector3 cameraDirection)
	{
	}

	[Token(Token = "0x60008FC")]
	[Address(RVA = "0x2AEFF30", Offset = "0x2AEE530", VA = "0x182AEFF30")]
	private void ComputeBlendingScore(DynamicArray<Cell> cells, float worstScore)
	{
	}

	[Token(Token = "0x60008FD")]
	[Address(RVA = "0x2B00670", Offset = "0x2AFEC70", VA = "0x182B00670")]
	private bool TryLoadCell(Cell cell, ref int shBudget, ref int indexBudget, DynamicArray<Cell> loadedCells)
	{
		return default(bool);
	}

	[Token(Token = "0x60008FE")]
	[Address(RVA = "0x2B02110", Offset = "0x2B00710", VA = "0x182B02110")]
	private void UnloadBlendingCell(Cell cell, DynamicArray<Cell> unloadedCells)
	{
	}

	[Token(Token = "0x60008FF")]
	[Address(RVA = "0x2B005A0", Offset = "0x2AFEBA0", VA = "0x182B005A0")]
	private bool TryLoadBlendingCell(Cell cell, DynamicArray<Cell> loadedCells)
	{
		return default(bool);
	}

	[Token(Token = "0x6000900")]
	[Address(RVA = "0x2AF0800", Offset = "0x2AEEE00", VA = "0x182AF0800")]
	private void ComputeMinMaxStreamingScore()
	{
	}

	[Token(Token = "0x6000901")]
	[Address(RVA = "0x2B03250", Offset = "0x2B01850", VA = "0x182B03250")]
	public void UpdateCellStreaming(CommandBuffer cmd, Camera camera)
	{
	}

	[Token(Token = "0x6000902")]
	[Address(RVA = "0x2B03270", Offset = "0x2B01870", VA = "0x182B03270")]
	public void UpdateCellStreaming(CommandBuffer cmd, Camera camera, ProbeVolumesOptions options)
	{
	}

	[Token(Token = "0x6000903")]
	[Address(RVA = "0x2AF3A70", Offset = "0x2AF2070", VA = "0x182AF3A70")]
	private int FindWorstBlendingCellToBeLoaded()
	{
		return default(int);
	}

	[Token(Token = "0x6000904")]
	[Address(RVA = "0x2AEF1B0", Offset = "0x2AED7B0", VA = "0x182AEF1B0")]
	private static int BlendingComparer(Cell a, Cell b)
	{
		return default(int);
	}

	[Token(Token = "0x6000905")]
	[Address(RVA = "0x2B02880", Offset = "0x2B00E80", VA = "0x182B02880")]
	private void UpdateBlendingCellStreaming(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000906")]
	[Address(RVA = "0x2AF2300", Offset = "0x2AF0900", VA = "0x182AF2300")]
	private static int DefragComparer(Cell a, Cell b)
	{
		return default(int);
	}

	[Token(Token = "0x6000907")]
	[Address(RVA = "0x2AFFB80", Offset = "0x2AFE180", VA = "0x182AFFB80")]
	private void StartIndexDefragmentation()
	{
	}

	[Token(Token = "0x6000908")]
	[Address(RVA = "0x2B04FB0", Offset = "0x2B035B0", VA = "0x182B04FB0")]
	private void UpdateIndexDefragmentation()
	{
	}

	[Token(Token = "0x6000909")]
	[Address(RVA = "0x2AF7FA0", Offset = "0x2AF65A0", VA = "0x182AF7FA0")]
	private void OnStreamingComplete(CellStreamingRequest request, CommandBuffer cmd)
	{
	}

	[Token(Token = "0x600090A")]
	[Address(RVA = "0x2AF7E50", Offset = "0x2AF6450", VA = "0x182AF7E50")]
	private void OnBlendingStreamingComplete(CellStreamingRequest request, CommandBuffer cmd)
	{
	}

	[Token(Token = "0x600090B")]
	[Address(RVA = "0x2AF9960", Offset = "0x2AF7F60", VA = "0x182AF9960")]
	private void PushDiskStreamingRequest(Cell cell, string scenario, int poolIndex, CellStreamingRequest.OnStreamingCompleteDelegate onStreamingComplete)
	{
	}

	[Token(Token = "0x600090C")]
	[Address(RVA = "0x2AEF280", Offset = "0x2AED880", VA = "0x182AEF280")]
	private void CancelStreamingRequest(Cell cell)
	{
	}

	[Token(Token = "0x600090D")]
	[Address(RVA = "0x2AEF220", Offset = "0x2AED820", VA = "0x182AEF220")]
	private void CancelBlendingStreamingRequest(Cell cell)
	{
	}

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x2AF86A0", Offset = "0x2AF6CA0", VA = "0x182AF86A0")]
	private bool ProcessDiskStreamingRequest(CellStreamingRequest request)
	{
		return default(bool);
	}

	[Token(Token = "0x600090F")]
	[Address(RVA = "0x2AEE0C0", Offset = "0x2AEC6C0", VA = "0x182AEE0C0")]
	private void AllocateScratchBufferPoolIfNeeded()
	{
	}

	[Token(Token = "0x6000910")]
	[Address(RVA = "0x2B02570", Offset = "0x2B00B70", VA = "0x182B02570")]
	private void UpdateActiveRequests(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000911")]
	[Address(RVA = "0x2AF97A0", Offset = "0x2AF7DA0", VA = "0x182AF97A0")]
	private void ProcessNewRequests()
	{
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x2B04960", Offset = "0x2B02F60", VA = "0x182B04960")]
	private void UpdateDiskStreaming(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000913")]
	[Address(RVA = "0x2AF60B0", Offset = "0x2AF46B0", VA = "0x182AF60B0")]
	private bool HasActiveStreamingRequest(Cell cell)
	{
		return default(bool);
	}

	[Token(Token = "0x6000914")]
	[Address(RVA = "0x2AF7DA0", Offset = "0x2AF63A0", VA = "0x182AF7DA0")]
	[Conditional("UNITY_EDITOR")]
	[Conditional("DEVELOPMENT_BUILD")]
	private void LogStreaming(string log)
	{
	}

	[Token(Token = "0x600092E")]
	[Address(RVA = "0x2AF5E10", Offset = "0x2AF4410", VA = "0x182AF5E10")]
	internal static string GetSceneGUID(Scene scene)
	{
		return null;
	}

	[Token(Token = "0x600092F")]
	[Address(RVA = "0x2AFEE30", Offset = "0x2AFD430", VA = "0x182AFEE30")]
	internal void SetActiveScenario(string scenario, bool verbose = true)
	{
	}

	[Token(Token = "0x6000930")]
	[Address(RVA = "0x2AEF0F0", Offset = "0x2AED6F0", VA = "0x182AEF0F0")]
	public void BlendLightingScenario(string otherScenario, float blendingFactor)
	{
	}

	[Token(Token = "0x6000934")]
	[Address(RVA = "0x2AFD870", Offset = "0x2AFBE70", VA = "0x182AFD870")]
	internal void RegisterPerSceneData(ProbeVolumePerSceneData data)
	{
	}

	[Token(Token = "0x6000935")]
	[Address(RVA = "0x2AFEB20", Offset = "0x2AFD120", VA = "0x182AFEB20")]
	internal bool ScheduleBakingSet(ProbeVolumeBakingSet bakingSet)
	{
		return default(bool);
	}

	[Token(Token = "0x6000936")]
	[Address(RVA = "0x2AF98A0", Offset = "0x2AF7EA0", VA = "0x182AF98A0")]
	internal bool ProcessScheduledBakingSet()
	{
		return default(bool);
	}

	[Token(Token = "0x6000937")]
	[Address(RVA = "0x2AFEEF0", Offset = "0x2AFD4F0", VA = "0x182AFEEF0")]
	public void SetActiveScene(Scene scene)
	{
	}

	[Token(Token = "0x6000938")]
	[Address(RVA = "0x2AFEB60", Offset = "0x2AFD160", VA = "0x182AFEB60")]
	public void SetActiveBakingSet(ProbeVolumeBakingSet bakingSet)
	{
	}

	[Token(Token = "0x6000939")]
	[Address(RVA = "0x2AFEFC0", Offset = "0x2AFD5C0", VA = "0x182AFEFC0")]
	private void SetBakingSetAsCurrent(ProbeVolumeBakingSet bakingSet)
	{
	}

	[Token(Token = "0x600093A")]
	[Address(RVA = "0x2AF9B10", Offset = "0x2AF8110", VA = "0x182AF9B10")]
	internal void RegisterBakingSet(ProbeVolumePerSceneData data)
	{
	}

	[Token(Token = "0x600093B")]
	[Address(RVA = "0x2B01EC0", Offset = "0x2B004C0", VA = "0x182B01EC0")]
	internal void UnloadBakingSet()
	{
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x2B024F0", Offset = "0x2B00AF0", VA = "0x182B024F0")]
	internal void UnregisterPerSceneData(ProbeVolumePerSceneData data)
	{
	}

	[Token(Token = "0x600093D")]
	[Address(RVA = "0x2B00380", Offset = "0x2AFE980", VA = "0x182B00380")]
	internal bool TryGetPerSceneData(string sceneGUID, out ProbeVolumePerSceneData perSceneData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000940")]
	[Address(RVA = "0x2AF6D50", Offset = "0x2AF5350", VA = "0x182AF6D50")]
	public void Initialize(in ProbeVolumeSystemParameters parameters)
	{
	}

	[Token(Token = "0x6000941")]
	[Address(RVA = "0x2AFF200", Offset = "0x2AFD800", VA = "0x182AFF200")]
	public void SetEnableStateFromSRP(bool srpEnablesPV)
	{
	}

	[Token(Token = "0x6000942")]
	[Address(RVA = "0x2AFF400", Offset = "0x2AFDA00", VA = "0x182AFF400")]
	public void SetVertexSamplingEnabled(bool value)
	{
	}

	[Token(Token = "0x6000943")]
	[Address(RVA = "0x2AF3BE0", Offset = "0x2AF21E0", VA = "0x182AF3BE0")]
	internal void ForceMemoryBudget(ProbeVolumeTextureMemoryBudget budget)
	{
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x2AF3C00", Offset = "0x2AF2200", VA = "0x182AF3C00")]
	internal void ForceSHBand(ProbeVolumeSHBands shBands)
	{
	}

	[Token(Token = "0x6000945")]
	[Address(RVA = "0x2AF3BF0", Offset = "0x2AF21F0", VA = "0x182AF3BF0")]
	internal void ForceNoDiskStreaming(bool state)
	{
	}

	[Token(Token = "0x6000946")]
	[Address(RVA = "0x2AEF750", Offset = "0x2AEDD50", VA = "0x182AEF750")]
	public void Cleanup()
	{
	}

	[Token(Token = "0x6000947")]
	[Address(RVA = "0x2AF6020", Offset = "0x2AF4620", VA = "0x182AF6020")]
	public int GetVideoMemoryCost()
	{
		return default(int);
	}

	[Token(Token = "0x6000948")]
	[Address(RVA = "0x2AFDAF0", Offset = "0x2AFC0F0", VA = "0x182AFDAF0")]
	private void RemoveCell(int cellIndex)
	{
	}

	[Token(Token = "0x6000949")]
	[Address(RVA = "0x2B02180", Offset = "0x2B00780", VA = "0x182B02180")]
	internal void UnloadCell(Cell cell)
	{
	}

	[Token(Token = "0x600094A")]
	[Address(RVA = "0x2B02000", Offset = "0x2B00600", VA = "0x182B02000")]
	internal void UnloadBlendingCell(Cell cell)
	{
	}

	[Token(Token = "0x600094B")]
	[Address(RVA = "0x2B01BD0", Offset = "0x2B001D0", VA = "0x182B01BD0")]
	internal void UnloadAllCells()
	{
	}

	[Token(Token = "0x600094C")]
	[Address(RVA = "0x2B019E0", Offset = "0x2AFFFE0", VA = "0x182B019E0")]
	internal void UnloadAllBlendingCells()
	{
	}

	[Token(Token = "0x600094D")]
	[Address(RVA = "0x2AED780", Offset = "0x2AEBD80", VA = "0x182AED780")]
	private void AddCell(int cellIndex)
	{
	}

	[Token(Token = "0x600094E")]
	[Address(RVA = "0x2AF74A0", Offset = "0x2AF5AA0", VA = "0x182AF74A0")]
	internal bool LoadCell(Cell cell, bool ignoreErrorLog = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600094F")]
	[Address(RVA = "0x2AF7330", Offset = "0x2AF5930", VA = "0x182AF7330")]
	internal void LoadAllCells()
	{
	}

	[Token(Token = "0x6000950")]
	[Address(RVA = "0x2AF0010", Offset = "0x2AEE610", VA = "0x182AF0010")]
	private void ComputeCellGlobalInfo()
	{
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x2AEDA80", Offset = "0x2AEC080", VA = "0x182AEDA80")]
	internal void AddPendingSceneLoading(string sceneGUID, ProbeVolumeBakingSet bakingSet)
	{
	}

	[Token(Token = "0x6000952")]
	[Address(RVA = "0x2AEDF50", Offset = "0x2AEC550", VA = "0x182AEDF50")]
	internal void AddPendingSceneRemoval(string sceneGUID)
	{
	}

	[Token(Token = "0x6000953")]
	[Address(RVA = "0x2AFE120", Offset = "0x2AFC720", VA = "0x182AFE120")]
	internal void RemovePendingScene(string sceneGUID, List<int> cellList)
	{
	}

	[Token(Token = "0x6000954")]
	[Address(RVA = "0x2AF8210", Offset = "0x2AF6810", VA = "0x182AF8210")]
	private void PerformPendingIndexChangeAndInit()
	{
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x2AFF300", Offset = "0x2AFD900", VA = "0x182AFF300")]
	internal void SetSubdivisionDimensions(float minBrickSize, int maxSubdiv, Vector3 offset)
	{
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x2AF7C90", Offset = "0x2AF6290", VA = "0x182AF7C90")]
	private bool LoadCells(List<int> cellIndices)
	{
		return default(bool);
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x2AF8250", Offset = "0x2AF6850", VA = "0x182AF8250")]
	private void PerformPendingLoading()
	{
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x2AF8090", Offset = "0x2AF6690", VA = "0x182AF8090")]
	private void PerformPendingDeletion()
	{
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x2AF0440", Offset = "0x2AEEA40", VA = "0x182AF0440")]
	internal void ComputeEntryMinMax(ref IndirectionEntryInfo entryInfo, ReadOnlySpan<ProbeBrickIndex.Brick> bricks)
	{
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x2AF5980", Offset = "0x2AF3F80", VA = "0x182AF5980")]
	internal static int GetNumberOfBricksAtSubdiv(IndirectionEntryInfo entryInfo)
	{
		return default(int);
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x2AF8630", Offset = "0x2AF6C30", VA = "0x182AF8630")]
	public void PerformPendingOperations()
	{
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x2AF6A30", Offset = "0x2AF5030", VA = "0x182AF6A30")]
	internal void InitializeGlobalIndirection()
	{
	}

	[Token(Token = "0x600095D")]
	[Address(RVA = "0x2AF61C0", Offset = "0x2AF47C0", VA = "0x182AF61C0")]
	private void InitProbeReferenceVolume()
	{
	}

	[Token(Token = "0x600095E")]
	[Address(RVA = "0x2B07640", Offset = "0x2B05C40", VA = "0x182B07640")]
	private ProbeReferenceVolume()
	{
	}

	[Token(Token = "0x600095F")]
	[Address(RVA = "0x2AF5C20", Offset = "0x2AF4220", VA = "0x182AF5C20")]
	public RuntimeResources GetRuntimeResources()
	{
		return default(RuntimeResources);
	}

	[Token(Token = "0x6000960")]
	[Address(RVA = "0x2AFF210", Offset = "0x2AFD810", VA = "0x182AFF210")]
	internal void SetMaxSubdivision(int maxSubdivision)
	{
	}

	[Token(Token = "0x6000961")]
	[Address(RVA = "0x2AEF300", Offset = "0x2AED900", VA = "0x182AEF300")]
	internal static int CellSize(int subdivisionLevel)
	{
		return default(int);
	}

	[Token(Token = "0x6000962")]
	[Address(RVA = "0x2AEF210", Offset = "0x2AED810", VA = "0x182AEF210")]
	internal float BrickSize(int subdivisionLevel)
	{
		return default(float);
	}

	[Token(Token = "0x6000963")]
	[Address(RVA = "0x2AF7E10", Offset = "0x2AF6410", VA = "0x182AF7E10")]
	internal float MinBrickSize()
	{
		return default(float);
	}

	[Token(Token = "0x6000964")]
	[Address(RVA = "0x2AF7DF0", Offset = "0x2AF63F0", VA = "0x182AF7DF0")]
	internal float MaxBrickSize()
	{
		return default(float);
	}

	[Token(Token = "0x6000965")]
	[Address(RVA = "0x2AF8680", Offset = "0x2AF6C80", VA = "0x182AF8680")]
	internal Vector3 ProbeOffset()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000966")]
	[Address(RVA = "0x2AF5970", Offset = "0x2AF3F70", VA = "0x182AF5970")]
	internal int GetMaxSubdivision()
	{
		return default(int);
	}

	[Token(Token = "0x6000967")]
	[Address(RVA = "0x2AF5910", Offset = "0x2AF3F10", VA = "0x182AF5910")]
	internal int GetMaxSubdivision(float multiplier)
	{
		return default(int);
	}

	[Token(Token = "0x6000968")]
	[Address(RVA = "0x2AF3F60", Offset = "0x2AF2560", VA = "0x182AF3F60")]
	internal float GetDistanceBetweenProbes(int subdivisionLevel)
	{
		return default(float);
	}

	[Token(Token = "0x6000969")]
	[Address(RVA = "0x2AF7E20", Offset = "0x2AF6420", VA = "0x182AF7E20")]
	internal float MinDistanceBetweenProbes()
	{
		return default(float);
	}

	[Token(Token = "0x600096A")]
	[Address(RVA = "0x565FB0", Offset = "0x5645B0", VA = "0x180565FB0")]
	internal int GetGlobalIndirectionEntryMaxSubdiv()
	{
		return default(int);
	}

	[Token(Token = "0x600096B")]
	[Address(RVA = "0x2AF3FC0", Offset = "0x2AF25C0", VA = "0x182AF3FC0")]
	internal int GetEntrySubdivLevel()
	{
		return default(int);
	}

	[Token(Token = "0x600096C")]
	[Address(RVA = "0x2AF3F90", Offset = "0x2AF2590", VA = "0x182AF3F90")]
	internal float GetEntrySize()
	{
		return default(float);
	}

	[Token(Token = "0x600096D")]
	[Address(RVA = "0x2AF1F50", Offset = "0x2AF0550", VA = "0x182AF1F50")]
	public bool DataHasBeenLoaded()
	{
		return default(bool);
	}

	[Token(Token = "0x600096E")]
	[Address(RVA = "0x2AEFA10", Offset = "0x2AEE010", VA = "0x182AEFA10")]
	internal void Clear()
	{
	}

	[Token(Token = "0x600096F")]
	[Address(RVA = "0x2AF5E60", Offset = "0x2AF4460", VA = "0x182AF5E60")]
	private List<ProbeBrickPool.BrickChunkAlloc> GetSourceLocations(int count, int chunkSize, ProbeBrickPool.DataLocation dataLoc)
	{
		return null;
	}

	[Token(Token = "0x6000970")]
	private void UpdateDataLocationTexture<T>(Texture output, NativeArray<T> input) where T : struct
	{
	}

	[Token(Token = "0x6000971")]
	[Address(RVA = "0x2B07240", Offset = "0x2B05840", VA = "0x182B07240")]
	private void UpdateValidityTextureWithoutMask(Texture output, NativeArray<byte> input)
	{
	}

	[Token(Token = "0x6000972")]
	[Address(RVA = "0x2B06380", Offset = "0x2B04980", VA = "0x182B06380")]
	private void UpdatePool(List<ProbeBrickPool.BrickChunkAlloc> chunkList, CellData.PerScenarioData data, NativeArray<byte> validityNeighMaskData, NativeArray<ushort> skyOcclusionL0L1Data, NativeArray<byte> skyShadingDirectionIndices, int chunkIndex, int poolIndex)
	{
	}

	[Token(Token = "0x6000973")]
	[Address(RVA = "0x2B060B0", Offset = "0x2B046B0", VA = "0x182B060B0")]
	private void UpdatePool(CommandBuffer cmd, List<ProbeBrickPool.BrickChunkAlloc> chunkList, CellStreamingScratchBuffer dataBuffer, CellStreamingScratchBufferLayout layout, int poolIndex)
	{
	}

	[Token(Token = "0x6000974")]
	[Address(RVA = "0x2B06E70", Offset = "0x2B05470", VA = "0x182B06E70")]
	private void UpdateSharedData(List<ProbeBrickPool.BrickChunkAlloc> chunkList, NativeArray<byte> validityNeighMaskData, NativeArray<ushort> skyOcclusionData, NativeArray<byte> skyShadingDirectionIndices, int chunkIndex)
	{
	}

	[Token(Token = "0x6000975")]
	[Address(RVA = "0x2AECD30", Offset = "0x2AEB330", VA = "0x182AECD30")]
	private bool AddBlendingBricks(Cell cell)
	{
		return default(bool);
	}

	[Token(Token = "0x6000976")]
	[Address(RVA = "0x2AFE9A0", Offset = "0x2AFCFA0", VA = "0x182AFE9A0")]
	private bool ReservePoolChunks(int brickCount, List<ProbeBrickPool.BrickChunkAlloc> chunkList, bool ignoreErrorLog)
	{
		return default(bool);
	}

	[Token(Token = "0x6000977")]
	[Address(RVA = "0x2AFDA80", Offset = "0x2AFC080", VA = "0x182AFDA80")]
	private void ReleasePoolChunks(List<ProbeBrickPool.BrickChunkAlloc> chunkList)
	{
	}

	[Token(Token = "0x6000978")]
	[Address(RVA = "0x2B05510", Offset = "0x2B03B10", VA = "0x182B05510")]
	private void UpdatePoolAndIndex(Cell cell, CellStreamingScratchBuffer dataBuffer, CellStreamingScratchBufferLayout layout, int poolIndex, CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000979")]
	[Address(RVA = "0x2AED470", Offset = "0x2AEBA70", VA = "0x182AED470")]
	private bool AddBricks(Cell cell)
	{
		return default(bool);
	}

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x2B030E0", Offset = "0x2B016E0", VA = "0x182B030E0")]
	private void UpdateCellIndex(Cell cell)
	{
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x2AFD960", Offset = "0x2AFBF60", VA = "0x182AFD960")]
	private void ReleaseBricks(Cell cell)
	{
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x2B043B0", Offset = "0x2B029B0", VA = "0x182B043B0")]
	internal void UpdateConstantBuffer(CommandBuffer cmd, ProbeVolumeShadingParameters parameters)
	{
	}

	[Token(Token = "0x600097D")]
	[Address(RVA = "0x2AF23C0", Offset = "0x2AF09C0", VA = "0x182AF23C0")]
	private void DeinitProbeReferenceVolume()
	{
	}

	[Token(Token = "0x600097E")]
	[Address(RVA = "0x2AEF490", Offset = "0x2AEDA90", VA = "0x182AEF490")]
	private void CleanupLoadedData()
	{
	}
}
