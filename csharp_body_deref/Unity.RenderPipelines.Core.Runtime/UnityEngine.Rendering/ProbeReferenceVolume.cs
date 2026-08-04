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
using UnityEngine.Experimental.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000121")]
public class ProbeReferenceVolume
{
	[Serializable]
	[Token(Token = "0x2000122")]
	internal struct IndirectionEntryInfo
	{
		[Token(Token = "0x4000491")]
		[FieldOffset(Offset = "0x0")]
		public Vector3Int positionInBricks;

		[Token(Token = "0x4000492")]
		[FieldOffset(Offset = "0xC")]
		public int minSubdiv;

		[Token(Token = "0x4000493")]
		[FieldOffset(Offset = "0x10")]
		public bool hasOnlyBiggerBricks;
	}

	[Serializable]
	[Token(Token = "0x2000123")]
	[DebuggerDisplay("Index = {index} position = {position}")]
	internal class Cell
	{
		[Token(Token = "0x2000124")]
		public struct PerScenarioData
		{
			[Token(Token = "0x17000116")]
			public NativeArray<ushort> shL0L1RxData
			{
				[Token(Token = "0x600099B")]
				[Address(RVA = "0x4BC9590", Offset = "0x4BC9590", VA = "0x4BC9590")]
				[CompilerGenerated]
				readonly get
				{
					return default(NativeArray<ushort>);
				}
				[Token(Token = "0x600099C")]
				[Address(RVA = "0x4BC95A0", Offset = "0x4BC95A0", VA = "0x4BC95A0")]
				[CompilerGenerated]
				internal set
				{
				}
			}

			[Token(Token = "0x17000117")]
			public NativeArray<byte> shL1GL1RyData
			{
				[Token(Token = "0x600099D")]
				[Address(RVA = "0x4BC95B0", Offset = "0x4BC95B0", VA = "0x4BC95B0")]
				[CompilerGenerated]
				readonly get
				{
					return default(NativeArray<byte>);
				}
				[Token(Token = "0x600099E")]
				[Address(RVA = "0x4BC95C0", Offset = "0x4BC95C0", VA = "0x4BC95C0")]
				[CompilerGenerated]
				internal set
				{
				}
			}

			[Token(Token = "0x17000118")]
			public NativeArray<byte> shL1BL1RzData
			{
				[Token(Token = "0x600099F")]
				[Address(RVA = "0x4BC95D0", Offset = "0x4BC95D0", VA = "0x4BC95D0")]
				[CompilerGenerated]
				readonly get
				{
					return default(NativeArray<byte>);
				}
				[Token(Token = "0x60009A0")]
				[Address(RVA = "0x4BC95E0", Offset = "0x4BC95E0", VA = "0x4BC95E0")]
				[CompilerGenerated]
				internal set
				{
				}
			}

			[Token(Token = "0x17000119")]
			public NativeArray<byte> shL2Data_0
			{
				[Token(Token = "0x60009A1")]
				[Address(RVA = "0x4BC95F0", Offset = "0x4BC95F0", VA = "0x4BC95F0")]
				[CompilerGenerated]
				readonly get
				{
					return default(NativeArray<byte>);
				}
				[Token(Token = "0x60009A2")]
				[Address(RVA = "0x4BC9600", Offset = "0x4BC9600", VA = "0x4BC9600")]
				[CompilerGenerated]
				internal set
				{
				}
			}

			[Token(Token = "0x1700011A")]
			public NativeArray<byte> shL2Data_1
			{
				[Token(Token = "0x60009A3")]
				[Address(RVA = "0x4BC9610", Offset = "0x4BC9610", VA = "0x4BC9610")]
				[CompilerGenerated]
				readonly get
				{
					return default(NativeArray<byte>);
				}
				[Token(Token = "0x60009A4")]
				[Address(RVA = "0x4BC9620", Offset = "0x4BC9620", VA = "0x4BC9620")]
				[CompilerGenerated]
				internal set
				{
				}
			}

			[Token(Token = "0x1700011B")]
			public NativeArray<byte> shL2Data_2
			{
				[Token(Token = "0x60009A5")]
				[Address(RVA = "0x4BC9630", Offset = "0x4BC9630", VA = "0x4BC9630")]
				[CompilerGenerated]
				readonly get
				{
					return default(NativeArray<byte>);
				}
				[Token(Token = "0x60009A6")]
				[Address(RVA = "0x4BC9640", Offset = "0x4BC9640", VA = "0x4BC9640")]
				[CompilerGenerated]
				internal set
				{
				}
			}

			[Token(Token = "0x1700011C")]
			public NativeArray<byte> shL2Data_3
			{
				[Token(Token = "0x60009A7")]
				[Address(RVA = "0x4BC9650", Offset = "0x4BC9650", VA = "0x4BC9650")]
				[CompilerGenerated]
				readonly get
				{
					return default(NativeArray<byte>);
				}
				[Token(Token = "0x60009A8")]
				[Address(RVA = "0x4BC9660", Offset = "0x4BC9660", VA = "0x4BC9660")]
				[CompilerGenerated]
				internal set
				{
				}
			}
		}

		[Token(Token = "0x4000494")]
		[FieldOffset(Offset = "0x10")]
		public Vector3Int position;

		[Token(Token = "0x4000495")]
		[FieldOffset(Offset = "0x1C")]
		public int index;

		[Token(Token = "0x4000496")]
		[FieldOffset(Offset = "0x20")]
		public int probeCount;

		[Token(Token = "0x4000497")]
		[FieldOffset(Offset = "0x24")]
		public int minSubdiv;

		[Token(Token = "0x4000498")]
		[FieldOffset(Offset = "0x28")]
		public int maxSubdiv;

		[Token(Token = "0x4000499")]
		[FieldOffset(Offset = "0x2C")]
		public int indexChunkCount;

		[Token(Token = "0x400049A")]
		[FieldOffset(Offset = "0x30")]
		public int shChunkCount;

		[Token(Token = "0x400049B")]
		[FieldOffset(Offset = "0x38")]
		public IndirectionEntryInfo[] indirectionEntryInfo;

		[Token(Token = "0x400049C")]
		[FieldOffset(Offset = "0x40")]
		public bool hasTwoScenarios;

		[Token(Token = "0x400049D")]
		[FieldOffset(Offset = "0x44")]
		public ProbeVolumeSHBands shBands;

		[NonSerialized]
		[Token(Token = "0x40004A4")]
		[FieldOffset(Offset = "0xA8")]
		public PerScenarioData scenario0;

		[NonSerialized]
		[Token(Token = "0x40004A5")]
		[FieldOffset(Offset = "0x118")]
		public PerScenarioData scenario1;

		[Token(Token = "0x1700010F")]
		public NativeArray<ProbeBrickIndex.Brick> bricks
		{
			[Token(Token = "0x600098D")]
			[Address(RVA = "0x4BC9470", Offset = "0x4BC9470", VA = "0x4BC9470")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<ProbeBrickIndex.Brick>);
			}
			[Token(Token = "0x600098E")]
			[Address(RVA = "0x4BC9480", Offset = "0x4BC9480", VA = "0x4BC9480")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x17000110")]
		public NativeArray<byte> validityNeighMaskData
		{
			[Token(Token = "0x600098F")]
			[Address(RVA = "0x4BC9490", Offset = "0x4BC9490", VA = "0x4BC9490")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<byte>);
			}
			[Token(Token = "0x6000990")]
			[Address(RVA = "0x4BC94A0", Offset = "0x4BC94A0", VA = "0x4BC94A0")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x17000111")]
		public NativeArray<Vector3> probePositions
		{
			[Token(Token = "0x6000991")]
			[Address(RVA = "0x4BC94B0", Offset = "0x4BC94B0", VA = "0x4BC94B0")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<Vector3>);
			}
			[Token(Token = "0x6000992")]
			[Address(RVA = "0x4BC94C0", Offset = "0x4BC94C0", VA = "0x4BC94C0")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x17000112")]
		public NativeArray<float> touchupVolumeInteraction
		{
			[Token(Token = "0x6000993")]
			[Address(RVA = "0x4BC94D0", Offset = "0x4BC94D0", VA = "0x4BC94D0")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<float>);
			}
			[Token(Token = "0x6000994")]
			[Address(RVA = "0x4BC94E0", Offset = "0x4BC94E0", VA = "0x4BC94E0")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x17000113")]
		public NativeArray<Vector3> offsetVectors
		{
			[Token(Token = "0x6000995")]
			[Address(RVA = "0x4BC94F0", Offset = "0x4BC94F0", VA = "0x4BC94F0")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<Vector3>);
			}
			[Token(Token = "0x6000996")]
			[Address(RVA = "0x4BC9500", Offset = "0x4BC9500", VA = "0x4BC9500")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x17000114")]
		public NativeArray<float> validity
		{
			[Token(Token = "0x6000997")]
			[Address(RVA = "0x4BC9510", Offset = "0x4BC9510", VA = "0x4BC9510")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<float>);
			}
			[Token(Token = "0x6000998")]
			[Address(RVA = "0x4BC9520", Offset = "0x4BC9520", VA = "0x4BC9520")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x17000115")]
		public PerScenarioData bakingScenario
		{
			[Token(Token = "0x6000999")]
			[Address(RVA = "0x4BC9530", Offset = "0x4BC9530", VA = "0x4BC9530")]
			get
			{
				return default(PerScenarioData);
			}
		}

		[Token(Token = "0x600099A")]
		[Address(RVA = "0x4BC9580", Offset = "0x4BC9580", VA = "0x4BC9580")]
		public Cell()
		{
		}
	}

	[Token(Token = "0x2000125")]
	[DebuggerDisplay("Index = {cell.index} Loaded = {loaded}")]
	internal class CellInfo : IComparable<CellInfo>
	{
		[Token(Token = "0x40004AD")]
		[FieldOffset(Offset = "0x10")]
		public Cell cell;

		[Token(Token = "0x40004AE")]
		[FieldOffset(Offset = "0x18")]
		public BlendingCellInfo blendingCell;

		[Token(Token = "0x40004AF")]
		[FieldOffset(Offset = "0x20")]
		public List<ProbeBrickPool.BrickChunkAlloc> chunkList;

		[Token(Token = "0x40004B0")]
		[FieldOffset(Offset = "0x28")]
		public int[] flatIndicesInGlobalIndirection;

		[Token(Token = "0x40004B1")]
		[FieldOffset(Offset = "0x30")]
		public bool loaded;

		[Token(Token = "0x40004B2")]
		[FieldOffset(Offset = "0x38")]
		public ProbeBrickIndex.CellIndexUpdateInfo updateInfo;

		[Token(Token = "0x40004B3")]
		[FieldOffset(Offset = "0x40")]
		public bool indexUpdated;

		[Token(Token = "0x40004B4")]
		[FieldOffset(Offset = "0x48")]
		public ProbeBrickIndex.CellIndexUpdateInfo tempUpdateInfo;

		[Token(Token = "0x40004B5")]
		[FieldOffset(Offset = "0x50")]
		public int sourceAssetInstanceID;

		[Token(Token = "0x40004B6")]
		[FieldOffset(Offset = "0x54")]
		public float streamingScore;

		[Token(Token = "0x40004B7")]
		[FieldOffset(Offset = "0x58")]
		public int referenceCount;

		[Token(Token = "0x40004B8")]
		[FieldOffset(Offset = "0x60")]
		public CellInstancedDebugProbes debugProbes;

		[Token(Token = "0x60009A9")]
		[Address(RVA = "0x4BC9670", Offset = "0x4BC9670", VA = "0x4BC9670", Slot = "4")]
		public int CompareTo(CellInfo other)
		{
			return default(int);
		}

		[Token(Token = "0x60009AA")]
		[Address(RVA = "0x4BC96A0", Offset = "0x4BC96A0", VA = "0x4BC96A0")]
		public void Clear()
		{
		}

		[Token(Token = "0x60009AB")]
		[Address(RVA = "0x4BC9750", Offset = "0x4BC9750", VA = "0x4BC9750")]
		public CellInfo()
		{
		}
	}

	[Token(Token = "0x2000126")]
	[DebuggerDisplay("Index = {cellInfo.cell.index} Factor = {blendingFactor} Score = {streamingScore}")]
	internal class BlendingCellInfo : IComparable<BlendingCellInfo>
	{
		[Token(Token = "0x40004B9")]
		[FieldOffset(Offset = "0x10")]
		public CellInfo cellInfo;

		[Token(Token = "0x40004BA")]
		[FieldOffset(Offset = "0x18")]
		public List<ProbeBrickPool.BrickChunkAlloc> chunkList;

		[Token(Token = "0x40004BB")]
		[FieldOffset(Offset = "0x20")]
		public float streamingScore;

		[Token(Token = "0x40004BC")]
		[FieldOffset(Offset = "0x24")]
		public float blendingFactor;

		[Token(Token = "0x40004BD")]
		[FieldOffset(Offset = "0x28")]
		public bool blending;

		[Token(Token = "0x60009AC")]
		[Address(RVA = "0x4BC97D0", Offset = "0x4BC97D0", VA = "0x4BC97D0", Slot = "4")]
		public int CompareTo(BlendingCellInfo other)
		{
			return default(int);
		}

		[Token(Token = "0x60009AD")]
		[Address(RVA = "0x4BC9800", Offset = "0x4BC9800", VA = "0x4BC9800")]
		public void Clear()
		{
		}

		[Token(Token = "0x60009AE")]
		[Address(RVA = "0x4BC9860", Offset = "0x4BC9860", VA = "0x4BC9860")]
		public void MarkUpToDate()
		{
		}

		[Token(Token = "0x60009AF")]
		[Address(RVA = "0x4BC9870", Offset = "0x4BC9870", VA = "0x4BC9870")]
		public bool IsUpToDate()
		{
			return default(bool);
		}

		[Token(Token = "0x60009B0")]
		[Address(RVA = "0x4BC9890", Offset = "0x4BC9890", VA = "0x4BC9890")]
		public void ForceReupload()
		{
		}

		[Token(Token = "0x60009B1")]
		[Address(RVA = "0x4BC98A0", Offset = "0x4BC98A0", VA = "0x4BC98A0")]
		public bool ShouldReupload()
		{
			return default(bool);
		}

		[Token(Token = "0x60009B2")]
		[Address(RVA = "0x4BC98C0", Offset = "0x4BC98C0", VA = "0x4BC98C0")]
		public void Prioritize()
		{
		}

		[Token(Token = "0x60009B3")]
		[Address(RVA = "0x4BC98D0", Offset = "0x4BC98D0", VA = "0x4BC98D0")]
		public bool ShouldPrioritize()
		{
			return default(bool);
		}

		[Token(Token = "0x60009B4")]
		[Address(RVA = "0x4BC98F0", Offset = "0x4BC98F0", VA = "0x4BC98F0")]
		public BlendingCellInfo()
		{
		}
	}

	[Token(Token = "0x2000127")]
	internal struct Volume : IEquatable<Volume>
	{
		[Token(Token = "0x40004BE")]
		[FieldOffset(Offset = "0x0")]
		internal Vector3 corner;

		[Token(Token = "0x40004BF")]
		[FieldOffset(Offset = "0xC")]
		internal Vector3 X;

		[Token(Token = "0x40004C0")]
		[FieldOffset(Offset = "0x18")]
		internal Vector3 Y;

		[Token(Token = "0x40004C1")]
		[FieldOffset(Offset = "0x24")]
		internal Vector3 Z;

		[Token(Token = "0x40004C2")]
		[FieldOffset(Offset = "0x30")]
		internal float maxSubdivisionMultiplier;

		[Token(Token = "0x40004C3")]
		[FieldOffset(Offset = "0x34")]
		internal float minSubdivisionMultiplier;

		[Token(Token = "0x60009B5")]
		[Address(RVA = "0x4BC9970", Offset = "0x4BC9970", VA = "0x4BC9970")]
		public Volume(Matrix4x4 trs, float maxSubdivision, float minSubdivision)
		{
		}

		[Token(Token = "0x60009B6")]
		[Address(RVA = "0x4BC9A60", Offset = "0x4BC9A60", VA = "0x4BC9A60")]
		public Volume(Vector3 corner, Vector3 X, Vector3 Y, Vector3 Z, float maxSubdivision = 1f, float minSubdivision = 0f)
		{
		}

		[Token(Token = "0x60009B7")]
		[Address(RVA = "0x4BC9AA0", Offset = "0x4BC9AA0", VA = "0x4BC9AA0")]
		public Volume(Volume copy)
		{
		}

		[Token(Token = "0x60009B8")]
		[Address(RVA = "0x4BC9B70", Offset = "0x4BC9B70", VA = "0x4BC9B70")]
		public Volume(Bounds bounds)
		{
		}

		[Token(Token = "0x60009B9")]
		[Address(RVA = "0x4BC9BF0", Offset = "0x4BC9BF0", VA = "0x4BC9BF0")]
		public Bounds CalculateAABB()
		{
			return default(Bounds);
		}

		[Token(Token = "0x60009BA")]
		[Address(RVA = "0x4BC9F60", Offset = "0x4BC9F60", VA = "0x4BC9F60")]
		public void CalculateCenterAndSize(out Vector3 center, out Vector3 size)
		{
		}

		[Token(Token = "0x60009BB")]
		[Address(RVA = "0x4BCA1D0", Offset = "0x4BCA1D0", VA = "0x4BCA1D0")]
		public void Transform(Matrix4x4 trs)
		{
		}

		[Token(Token = "0x60009BC")]
		[Address(RVA = "0x4BCA260", Offset = "0x4BCA260", VA = "0x4BCA260", Slot = "3")]
		public override string ToString()
		{
			return null;
		}

		[Token(Token = "0x60009BD")]
		[Address(RVA = "0x4BCA4E0", Offset = "0x4BCA4E0", VA = "0x4BCA4E0", Slot = "4")]
		public bool Equals(Volume other)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000128")]
	internal struct RefVolTransform
	{
		[Token(Token = "0x40004C4")]
		[FieldOffset(Offset = "0x0")]
		public Vector3 posWS;

		[Token(Token = "0x40004C5")]
		[FieldOffset(Offset = "0xC")]
		public Quaternion rot;

		[Token(Token = "0x40004C6")]
		[FieldOffset(Offset = "0x1C")]
		public float scale;
	}

	[Token(Token = "0x2000129")]
	public struct RuntimeResources
	{
		[Token(Token = "0x40004C7")]
		[FieldOffset(Offset = "0x0")]
		public ComputeBuffer index;

		[Token(Token = "0x40004C8")]
		[FieldOffset(Offset = "0x8")]
		public ComputeBuffer cellIndices;

		[Token(Token = "0x40004C9")]
		[FieldOffset(Offset = "0x10")]
		public RenderTexture L0_L1rx;

		[Token(Token = "0x40004CA")]
		[FieldOffset(Offset = "0x18")]
		public RenderTexture L1_G_ry;

		[Token(Token = "0x40004CB")]
		[FieldOffset(Offset = "0x20")]
		public RenderTexture L1_B_rz;

		[Token(Token = "0x40004CC")]
		[FieldOffset(Offset = "0x28")]
		public RenderTexture L2_0;

		[Token(Token = "0x40004CD")]
		[FieldOffset(Offset = "0x30")]
		public RenderTexture L2_1;

		[Token(Token = "0x40004CE")]
		[FieldOffset(Offset = "0x38")]
		public RenderTexture L2_2;

		[Token(Token = "0x40004CF")]
		[FieldOffset(Offset = "0x40")]
		public RenderTexture L2_3;

		[Token(Token = "0x40004D0")]
		[FieldOffset(Offset = "0x48")]
		public Texture3D Validity;
	}

	[Token(Token = "0x200012A")]
	public struct ExtraDataActionInput
	{
	}

	[Token(Token = "0x200012B")]
	private struct InitInfo
	{
		[Token(Token = "0x40004D1")]
		[FieldOffset(Offset = "0x0")]
		public Vector3Int pendingMinCellPosition;

		[Token(Token = "0x40004D2")]
		[FieldOffset(Offset = "0xC")]
		public Vector3Int pendingMaxCellPosition;
	}

	[Token(Token = "0x200012C")]
	internal class CellInstancedDebugProbes
	{
		[Token(Token = "0x40004D3")]
		[FieldOffset(Offset = "0x10")]
		public List<Matrix4x4[]> probeBuffers;

		[Token(Token = "0x40004D4")]
		[FieldOffset(Offset = "0x18")]
		public List<Matrix4x4[]> offsetBuffers;

		[Token(Token = "0x40004D5")]
		[FieldOffset(Offset = "0x20")]
		public List<MaterialPropertyBlock> props;

		[Token(Token = "0x60009BE")]
		[Address(RVA = "0x4BCA630", Offset = "0x4BCA630", VA = "0x4BCA630")]
		public CellInstancedDebugProbes()
		{
		}
	}

	[Token(Token = "0x200012D")]
	private class RenderFragmentationOverlayPassData
	{
		[Token(Token = "0x40004D6")]
		[FieldOffset(Offset = "0x10")]
		public Material debugFragmentationMaterial;

		[Token(Token = "0x40004D7")]
		[FieldOffset(Offset = "0x18")]
		public DebugOverlay debugOverlay;

		[Token(Token = "0x40004D8")]
		[FieldOffset(Offset = "0x20")]
		public int chunkCount;

		[Token(Token = "0x40004D9")]
		[FieldOffset(Offset = "0x28")]
		public ComputeBuffer debugFragmentationData;

		[Token(Token = "0x40004DA")]
		[FieldOffset(Offset = "0x30")]
		public TextureHandle colorBuffer;

		[Token(Token = "0x40004DB")]
		[FieldOffset(Offset = "0x40")]
		public TextureHandle depthBuffer;

		[Token(Token = "0x60009BF")]
		[Address(RVA = "0x4BCA640", Offset = "0x4BCA640", VA = "0x4BCA640")]
		public RenderFragmentationOverlayPassData()
		{
		}
	}

	[Token(Token = "0x400043C")]
	[FieldOffset(Offset = "0x10")]
	private bool m_IsInitialized;

	[Token(Token = "0x400043D")]
	[FieldOffset(Offset = "0x11")]
	private bool m_SupportStreaming;

	[Token(Token = "0x400043E")]
	[FieldOffset(Offset = "0x12")]
	private bool m_SupportScenarios;

	[Token(Token = "0x400043F")]
	[FieldOffset(Offset = "0x14")]
	private RefVolTransform m_Transform;

	[Token(Token = "0x4000440")]
	[FieldOffset(Offset = "0x34")]
	private int m_MaxSubdivision;

	[Token(Token = "0x4000441")]
	[FieldOffset(Offset = "0x38")]
	private ProbeBrickPool m_Pool;

	[Token(Token = "0x4000442")]
	[FieldOffset(Offset = "0x40")]
	private ProbeBrickIndex m_Index;

	[Token(Token = "0x4000443")]
	[FieldOffset(Offset = "0x48")]
	private ProbeGlobalIndirection m_CellIndices;

	[Token(Token = "0x4000444")]
	[FieldOffset(Offset = "0x50")]
	private ProbeBrickBlendingPool m_BlendingPool;

	[Token(Token = "0x4000445")]
	[FieldOffset(Offset = "0x58")]
	private List<ProbeBrickPool.BrickChunkAlloc> m_TmpSrcChunks;

	[Token(Token = "0x4000446")]
	[FieldOffset(Offset = "0x60")]
	private float[] m_PositionOffsets;

	[Token(Token = "0x4000447")]
	[FieldOffset(Offset = "0x68")]
	private Bounds m_CurrGlobalBounds;

	[Token(Token = "0x4000448")]
	[FieldOffset(Offset = "0x80")]
	internal Dictionary<int, CellInfo> cells;

	[Token(Token = "0x4000449")]
	[FieldOffset(Offset = "0x88")]
	private ObjectPool<CellInfo> m_CellInfoPool;

	[Token(Token = "0x400044A")]
	[FieldOffset(Offset = "0x90")]
	private ObjectPool<BlendingCellInfo> m_BlendingCellInfoPool;

	[Token(Token = "0x400044B")]
	[FieldOffset(Offset = "0x98")]
	private ProbeBrickPool.DataLocation m_TemporaryDataLocation;

	[Token(Token = "0x400044C")]
	[FieldOffset(Offset = "0xE8")]
	private int m_TemporaryDataLocationMemCost;

	[Token(Token = "0x400044D")]
	[FieldOffset(Offset = "0xF0")]
	internal ProbeVolumeSceneData sceneData;

	[Token(Token = "0x400044E")]
	[FieldOffset(Offset = "0xF8")]
	private Vector3Int minLoadedCellPos;

	[Token(Token = "0x400044F")]
	[FieldOffset(Offset = "0x104")]
	private Vector3Int maxLoadedCellPos;

	[Token(Token = "0x4000450")]
	[FieldOffset(Offset = "0x110")]
	public Action<ExtraDataActionInput> retrieveExtraDataAction;

	[Token(Token = "0x4000451")]
	[FieldOffset(Offset = "0x118")]
	public Action checksDuringBakeAction;

	[Token(Token = "0x4000452")]
	[FieldOffset(Offset = "0x120")]
	private Dictionary<string, ProbeVolumeAsset> m_PendingAssetsToBeLoaded;

	[Token(Token = "0x4000453")]
	[FieldOffset(Offset = "0x128")]
	private Dictionary<string, ProbeVolumeAsset> m_PendingAssetsToBeUnloaded;

	[Token(Token = "0x4000454")]
	[FieldOffset(Offset = "0x130")]
	private Dictionary<string, ProbeVolumeAsset> m_ActiveAssets;

	[Token(Token = "0x4000455")]
	[FieldOffset(Offset = "0x138")]
	private bool m_NeedLoadAsset;

	[Token(Token = "0x4000456")]
	[FieldOffset(Offset = "0x139")]
	private bool m_ProbeReferenceVolumeInit;

	[Token(Token = "0x4000457")]
	[FieldOffset(Offset = "0x13A")]
	private bool m_EnabledBySRP;

	[Token(Token = "0x4000458")]
	[FieldOffset(Offset = "0x13C")]
	private InitInfo m_PendingInitInfo;

	[Token(Token = "0x4000459")]
	[FieldOffset(Offset = "0x154")]
	private bool m_NeedsIndexRebuild;

	[Token(Token = "0x400045A")]
	[FieldOffset(Offset = "0x155")]
	private bool m_HasChangedIndex;

	[Token(Token = "0x400045B")]
	[FieldOffset(Offset = "0x158")]
	private int m_CBShaderID;

	[Token(Token = "0x400045C")]
	[FieldOffset(Offset = "0x15C")]
	private int m_NumberOfCellsLoadedPerFrame;

	[Token(Token = "0x400045D")]
	[FieldOffset(Offset = "0x160")]
	private int m_NumberOfCellsBlendedPerFrame;

	[Token(Token = "0x400045E")]
	[FieldOffset(Offset = "0x164")]
	private float m_TurnoverRate;

	[Token(Token = "0x400045F")]
	[FieldOffset(Offset = "0x168")]
	private ProbeVolumeTextureMemoryBudget m_MemoryBudget;

	[Token(Token = "0x4000460")]
	[FieldOffset(Offset = "0x16C")]
	private ProbeVolumeBlendingTextureMemoryBudget m_BlendingMemoryBudget;

	[Token(Token = "0x4000461")]
	[FieldOffset(Offset = "0x170")]
	private ProbeVolumeSHBands m_SHBands;

	[Token(Token = "0x4000462")]
	[FieldOffset(Offset = "0x174")]
	private float m_ProbeVolumesWeight;

	[Token(Token = "0x4000463")]
	[FieldOffset(Offset = "0x178")]
	internal bool clearAssetsOnVolumeClear;

	[Token(Token = "0x4000464")]
	[FieldOffset(Offset = "0x0")]
	internal static string defaultLightingScenario;

	[Token(Token = "0x4000465")]
	[FieldOffset(Offset = "0x8")]
	private static ProbeReferenceVolume _instance;

	[Token(Token = "0x4000467")]
	private const int kProbesPerBatch = 511;

	[Token(Token = "0x4000468")]
	[FieldOffset(Offset = "0x10")]
	public static readonly string k_DebugPanelName;

	[Token(Token = "0x400046B")]
	[FieldOffset(Offset = "0x198")]
	private Mesh m_DebugMesh;

	[Token(Token = "0x400046C")]
	[FieldOffset(Offset = "0x1A0")]
	private DebugUI.Widget[] m_DebugItems;

	[Token(Token = "0x400046D")]
	[FieldOffset(Offset = "0x1A8")]
	private Material m_DebugMaterial;

	[Token(Token = "0x400046E")]
	[FieldOffset(Offset = "0x1B0")]
	private Mesh m_DebugProbeSamplingMesh;

	[Token(Token = "0x400046F")]
	[FieldOffset(Offset = "0x1B8")]
	private Material m_ProbeSamplingDebugMaterial;

	[Token(Token = "0x4000470")]
	[FieldOffset(Offset = "0x1C0")]
	private Material m_ProbeSamplingDebugMaterial02;

	[Token(Token = "0x4000471")]
	[FieldOffset(Offset = "0x1C8")]
	private Texture m_displayNumbersTexture;

	[Token(Token = "0x4000472")]
	[FieldOffset(Offset = "0x18")]
	public static ProbeSamplingDebugData probeSamplingDebugData;

	[Token(Token = "0x4000473")]
	[FieldOffset(Offset = "0x1D0")]
	private Mesh m_DebugOffsetMesh;

	[Token(Token = "0x4000474")]
	[FieldOffset(Offset = "0x1D8")]
	private Material m_DebugOffsetMaterial;

	[Token(Token = "0x4000475")]
	[FieldOffset(Offset = "0x1E0")]
	private Material m_DebugFragmentationMaterial;

	[Token(Token = "0x4000476")]
	[FieldOffset(Offset = "0x1E8")]
	private Plane[] m_DebugFrustumPlanes;

	[Token(Token = "0x4000477")]
	[FieldOffset(Offset = "0x1F0")]
	private GUIContent[] m_DebugScenarioNames;

	[Token(Token = "0x4000478")]
	[FieldOffset(Offset = "0x1F8")]
	private int[] m_DebugScenarioValues;

	[Token(Token = "0x4000479")]
	[FieldOffset(Offset = "0x200")]
	private string m_DebugActiveSceneGUID;

	[Token(Token = "0x400047A")]
	[FieldOffset(Offset = "0x208")]
	private string m_DebugActiveScenario;

	[Token(Token = "0x400047B")]
	[FieldOffset(Offset = "0x210")]
	private DebugUI.EnumField m_DebugScenarioField;

	[Token(Token = "0x400047C")]
	[FieldOffset(Offset = "0x218")]
	internal ProbeVolumeBakingProcessSettings bakingProcessSettings;

	[Token(Token = "0x400047D")]
	[FieldOffset(Offset = "0x248")]
	internal Dictionary<Bounds, ProbeBrickIndex.Brick[]> realtimeSubdivisionInfo;

	[Token(Token = "0x400047E")]
	[FieldOffset(Offset = "0x250")]
	private bool m_MaxSubdivVisualizedIsMaxAvailable;

	[Token(Token = "0x400047F")]
	[FieldOffset(Offset = "0x258")]
	private DynamicArray<CellInfo> m_LoadedCells;

	[Token(Token = "0x4000480")]
	[FieldOffset(Offset = "0x260")]
	private DynamicArray<CellInfo> m_ToBeLoadedCells;

	[Token(Token = "0x4000481")]
	[FieldOffset(Offset = "0x268")]
	private DynamicArray<CellInfo> m_TempCellToLoadList;

	[Token(Token = "0x4000482")]
	[FieldOffset(Offset = "0x270")]
	private DynamicArray<CellInfo> m_TempCellToUnloadList;

	[Token(Token = "0x4000483")]
	[FieldOffset(Offset = "0x278")]
	private DynamicArray<BlendingCellInfo> m_LoadedBlendingCells;

	[Token(Token = "0x4000484")]
	[FieldOffset(Offset = "0x280")]
	private DynamicArray<BlendingCellInfo> m_ToBeLoadedBlendingCells;

	[Token(Token = "0x4000485")]
	[FieldOffset(Offset = "0x288")]
	private DynamicArray<BlendingCellInfo> m_TempBlendingCellToLoadList;

	[Token(Token = "0x4000486")]
	[FieldOffset(Offset = "0x290")]
	private DynamicArray<BlendingCellInfo> m_TempBlendingCellToUnloadList;

	[Token(Token = "0x4000487")]
	[FieldOffset(Offset = "0x298")]
	private Vector3 m_FrozenCameraPosition;

	[Token(Token = "0x4000488")]
	[FieldOffset(Offset = "0x2A4")]
	private Vector3 m_FrozenCameraDirection;

	[Token(Token = "0x4000489")]
	private const float kIndexFragmentationThreshold = 0.2f;

	[Token(Token = "0x400048A")]
	[FieldOffset(Offset = "0x2B0")]
	private bool m_IndexDefragmentationInProgress;

	[Token(Token = "0x400048B")]
	[FieldOffset(Offset = "0x2B8")]
	private ProbeBrickIndex m_DefragIndex;

	[Token(Token = "0x400048C")]
	[FieldOffset(Offset = "0x2C0")]
	private ProbeGlobalIndirection m_DefragCellIndices;

	[Token(Token = "0x400048D")]
	[FieldOffset(Offset = "0x2C8")]
	private DynamicArray<CellInfo> m_IndexDefragCells;

	[Token(Token = "0x400048E")]
	[FieldOffset(Offset = "0x2D0")]
	internal float minStreamingScore;

	[Token(Token = "0x400048F")]
	[FieldOffset(Offset = "0x2D4")]
	internal float maxStreamingScore;

	[Token(Token = "0x4000490")]
	[FieldOffset(Offset = "0x2D8")]
	private bool m_HasRemainingCellsToBlend;

	[Token(Token = "0x170000FB")]
	internal Bounds globalBounds
	{
		[Token(Token = "0x600091A")]
		[Address(RVA = "0x4BB8DD0", Offset = "0x4BB8DD0", VA = "0x4BB8DD0")]
		get
		{
			return default(Bounds);
		}
		[Token(Token = "0x600091B")]
		[Address(RVA = "0x4BB8DF0", Offset = "0x4BB8DF0", VA = "0x4BB8DF0")]
		set
		{
		}
	}

	[Token(Token = "0x170000FC")]
	public bool isInitialized
	{
		[Token(Token = "0x600091C")]
		[Address(RVA = "0x4BB8E10", Offset = "0x4BB8E10", VA = "0x4BB8E10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FD")]
	internal bool enabledBySRP
	{
		[Token(Token = "0x600091D")]
		[Address(RVA = "0x4BB8E20", Offset = "0x4BB8E20", VA = "0x4BB8E20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FE")]
	internal bool hasUnloadedCells
	{
		[Token(Token = "0x600091E")]
		[Address(RVA = "0x4BB8E30", Offset = "0x4BB8E30", VA = "0x4BB8E30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FF")]
	internal bool supportLightingScenarios
	{
		[Token(Token = "0x600091F")]
		[Address(RVA = "0x4BB8E70", Offset = "0x4BB8E70", VA = "0x4BB8E70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000100")]
	internal bool enableScenarioBlending
	{
		[Token(Token = "0x6000920")]
		[Address(RVA = "0x4BB8E80", Offset = "0x4BB8E80", VA = "0x4BB8E80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000101")]
	internal int numberOfCellsLoadedPerFrame
	{
		[Token(Token = "0x6000921")]
		[Address(RVA = "0x4BB8F50", Offset = "0x4BB8F50", VA = "0x4BB8F50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000102")]
	public int numberOfCellsBlendedPerFrame
	{
		[Token(Token = "0x6000922")]
		[Address(RVA = "0x4BB8F60", Offset = "0x4BB8F60", VA = "0x4BB8F60")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000923")]
		[Address(RVA = "0x4BB8F70", Offset = "0x4BB8F70", VA = "0x4BB8F70")]
		set
		{
		}
	}

	[Token(Token = "0x17000103")]
	public float turnoverRate
	{
		[Token(Token = "0x6000924")]
		[Address(RVA = "0x4BB8F90", Offset = "0x4BB8F90", VA = "0x4BB8F90")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000925")]
		[Address(RVA = "0x4BB8FA0", Offset = "0x4BB8FA0", VA = "0x4BB8FA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000104")]
	public ProbeVolumeSHBands shBands
	{
		[Token(Token = "0x6000926")]
		[Address(RVA = "0x4BB8FC0", Offset = "0x4BB8FC0", VA = "0x4BB8FC0")]
		get
		{
			return default(ProbeVolumeSHBands);
		}
	}

	[Token(Token = "0x17000105")]
	public string lightingScenario
	{
		[Token(Token = "0x6000927")]
		[Address(RVA = "0x4BB8FD0", Offset = "0x4BB8FD0", VA = "0x4BB8FD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000928")]
		[Address(RVA = "0x4BB8FF0", Offset = "0x4BB8FF0", VA = "0x4BB8FF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000106")]
	public float scenarioBlendingFactor
	{
		[Token(Token = "0x6000929")]
		[Address(RVA = "0x4BB9010", Offset = "0x4BB9010", VA = "0x4BB9010")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600092A")]
		[Address(RVA = "0x4BB9030", Offset = "0x4BB9030", VA = "0x4BB9030")]
		set
		{
		}
	}

	[Token(Token = "0x17000107")]
	public ProbeVolumeTextureMemoryBudget memoryBudget
	{
		[Token(Token = "0x600092C")]
		[Address(RVA = "0x4BB9070", Offset = "0x4BB9070", VA = "0x4BB9070")]
		get
		{
			return default(ProbeVolumeTextureMemoryBudget);
		}
	}

	[Token(Token = "0x17000108")]
	public float probeVolumesWeight
	{
		[Token(Token = "0x600092D")]
		[Address(RVA = "0x4BB9080", Offset = "0x4BB9080", VA = "0x4BB9080")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600092E")]
		[Address(RVA = "0x4BB9090", Offset = "0x4BB9090", VA = "0x4BB9090")]
		set
		{
		}
	}

	[Token(Token = "0x17000109")]
	internal List<ProbeVolumePerSceneData> perSceneDataList
	{
		[Token(Token = "0x600092F")]
		[Address(RVA = "0x4BB90B0", Offset = "0x4BB90B0", VA = "0x4BB90B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000930")]
		[Address(RVA = "0x4BB90C0", Offset = "0x4BB90C0", VA = "0x4BB90C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700010A")]
	internal float indexFragmentationRate
	{
		[Token(Token = "0x6000933")]
		[Address(RVA = "0x4BB9210", Offset = "0x4BB9210", VA = "0x4BB9210")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700010B")]
	public static ProbeReferenceVolume instance
	{
		[Token(Token = "0x6000934")]
		[Address(RVA = "0x4BB9230", Offset = "0x4BB9230", VA = "0x4BB9230")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010C")]
	internal ProbeVolumeDebug probeVolumeDebug
	{
		[Token(Token = "0x600096E")]
		[Address(RVA = "0x4BC02A0", Offset = "0x4BC02A0", VA = "0x4BC02A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010D")]
	public Color[] subdivisionDebugColors
	{
		[Token(Token = "0x600096F")]
		[Address(RVA = "0x4BC02B0", Offset = "0x4BC02B0", VA = "0x4BC02B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010E")]
	private Mesh debugMesh
	{
		[Token(Token = "0x6000970")]
		[Address(RVA = "0x4BC02C0", Offset = "0x4BC02C0", VA = "0x4BC02C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600092B")]
	[Address(RVA = "0x4BB9050", Offset = "0x4BB9050", VA = "0x4BB9050")]
	public void BlendLightingScenario(string otherScenario, float blendingFactor)
	{
	}

	[Token(Token = "0x6000931")]
	[Address(RVA = "0x4BB90E0", Offset = "0x4BB90E0", VA = "0x4BB90E0")]
	internal void RegisterPerSceneData(ProbeVolumePerSceneData data)
	{
	}

	[Token(Token = "0x6000932")]
	[Address(RVA = "0x4BB91C0", Offset = "0x4BB91C0", VA = "0x4BB91C0")]
	internal void UnregisterPerSceneData(ProbeVolumePerSceneData data)
	{
	}

	[Token(Token = "0x6000935")]
	[Address(RVA = "0x4BB92A0", Offset = "0x4BB92A0", VA = "0x4BB92A0")]
	public void Initialize(in ProbeVolumeSystemParameters parameters)
	{
	}

	[Token(Token = "0x6000936")]
	[Address(RVA = "0x4BB9D50", Offset = "0x4BB9D50", VA = "0x4BB9D50")]
	public void SetEnableStateFromSRP(bool srpEnablesPV)
	{
	}

	[Token(Token = "0x6000937")]
	[Address(RVA = "0x4BB9D60", Offset = "0x4BB9D60", VA = "0x4BB9D60")]
	internal void ForceSHBand(ProbeVolumeSHBands shBands)
	{
	}

	[Token(Token = "0x6000938")]
	[Address(RVA = "0x4BBA040", Offset = "0x4BBA040", VA = "0x4BBA040")]
	public void Cleanup()
	{
	}

	[Token(Token = "0x6000939")]
	[Address(RVA = "0x4BBA1E0", Offset = "0x4BBA1E0", VA = "0x4BBA1E0")]
	public int GetVideoMemoryCost()
	{
		return default(int);
	}

	[Token(Token = "0x600093A")]
	[Address(RVA = "0x4BBA240", Offset = "0x4BBA240", VA = "0x4BBA240")]
	private void RemoveCell(Cell cell)
	{
	}

	[Token(Token = "0x600093B")]
	[Address(RVA = "0x4BBA3D0", Offset = "0x4BBA3D0", VA = "0x4BBA3D0")]
	internal void UnloadCell(CellInfo cellInfo)
	{
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x4BBA5A0", Offset = "0x4BBA5A0", VA = "0x4BBA5A0")]
	internal void UnloadBlendingCell(BlendingCellInfo blendingCell)
	{
	}

	[Token(Token = "0x600093D")]
	[Address(RVA = "0x4BBA770", Offset = "0x4BBA770", VA = "0x4BBA770")]
	internal void UnloadAllCells()
	{
	}

	[Token(Token = "0x600093E")]
	[Address(RVA = "0x4BBA840", Offset = "0x4BBA840", VA = "0x4BBA840")]
	internal void UnloadAllBlendingCells()
	{
	}

	[Token(Token = "0x600093F")]
	[Address(RVA = "0x4BBA910", Offset = "0x4BBA910", VA = "0x4BBA910")]
	private void AddCell(Cell cell, int assetInstanceID)
	{
	}

	[Token(Token = "0x6000940")]
	[Address(RVA = "0x4BBAB40", Offset = "0x4BBAB40", VA = "0x4BBAB40")]
	internal bool LoadCell(CellInfo cellInfo, bool ignoreErrorLog = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000941")]
	[Address(RVA = "0x4BBBDE0", Offset = "0x4BBBDE0", VA = "0x4BBBDE0")]
	internal void LoadAllCells()
	{
	}

	[Token(Token = "0x6000942")]
	[Address(RVA = "0x4BBBF40", Offset = "0x4BBBF40", VA = "0x4BBBF40")]
	private void RecomputeMinMaxLoadedCellPos()
	{
	}

	[Token(Token = "0x6000943")]
	[Address(RVA = "0x4BBC200", Offset = "0x4BBC200", VA = "0x4BBC200")]
	private bool CheckCompatibilityWithCollection(ProbeVolumeAsset asset, Dictionary<string, ProbeVolumeAsset> collection)
	{
		return default(bool);
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x4BBC430", Offset = "0x4BBC430", VA = "0x4BBC430")]
	internal void AddPendingAssetLoading(ProbeVolumeAsset asset)
	{
	}

	[Token(Token = "0x6000945")]
	[Address(RVA = "0x4BBCD10", Offset = "0x4BBCD10", VA = "0x4BBCD10")]
	internal void AddPendingAssetRemoval(ProbeVolumeAsset asset)
	{
	}

	[Token(Token = "0x6000946")]
	[Address(RVA = "0x4BBCE00", Offset = "0x4BBCE00", VA = "0x4BBCE00")]
	internal void RemovePendingAsset(ProbeVolumeAsset asset)
	{
	}

	[Token(Token = "0x6000947")]
	[Address(RVA = "0x4BBD100", Offset = "0x4BBD100", VA = "0x4BBD100")]
	private void PerformPendingIndexChangeAndInit()
	{
	}

	[Token(Token = "0x6000948")]
	[Address(RVA = "0x4BBD150", Offset = "0x4BBD150", VA = "0x4BBD150")]
	internal void SetMinBrickAndMaxSubdiv(float minBrickSize, int maxSubdiv)
	{
	}

	[Token(Token = "0x6000949")]
	[Address(RVA = "0x4BBD380", Offset = "0x4BBD380", VA = "0x4BBD380")]
	private void LoadAsset(ProbeVolumeAsset asset)
	{
	}

	[Token(Token = "0x600094A")]
	[Address(RVA = "0x4BBD570", Offset = "0x4BBD570", VA = "0x4BBD570")]
	private void PerformPendingLoading()
	{
	}

	[Token(Token = "0x600094B")]
	[Address(RVA = "0x4BBD9B0", Offset = "0x4BBD9B0", VA = "0x4BBD9B0")]
	private void PerformPendingDeletion()
	{
	}

	[Token(Token = "0x600094C")]
	[Address(RVA = "0x4BBB050", Offset = "0x4BBB050", VA = "0x4BBB050")]
	internal int GetNumberOfBricksAtSubdiv(IndirectionEntryInfo entryInfo, ref ProbeBrickIndex.IndirectionEntryUpdateInfo indirectionEntryUpdateInfo)
	{
		return default(int);
	}

	[Token(Token = "0x600094D")]
	[Address(RVA = "0x4BBDC20", Offset = "0x4BBDC20", VA = "0x4BBDC20")]
	public void PerformPendingOperations()
	{
	}

	[Token(Token = "0x600094E")]
	[Address(RVA = "0x4BBDC80", Offset = "0x4BBDC80", VA = "0x4BBDC80")]
	internal void InitializeGlobalIndirection()
	{
	}

	[Token(Token = "0x600094F")]
	[Address(RVA = "0x4BB9AD0", Offset = "0x4BB9AD0", VA = "0x4BB9AD0")]
	private void InitProbeReferenceVolume(ProbeVolumeTextureMemoryBudget memoryBudget, ProbeVolumeBlendingTextureMemoryBudget blendingMemoryBudget, ProbeVolumeSHBands shBands)
	{
	}

	[Token(Token = "0x6000950")]
	[Address(RVA = "0x4BBDDE0", Offset = "0x4BBDDE0", VA = "0x4BBDDE0")]
	private ProbeReferenceVolume()
	{
	}

	[Token(Token = "0x6000951")]
	[Address(RVA = "0x4BBE630", Offset = "0x4BBE630", VA = "0x4BBE630")]
	public RuntimeResources GetRuntimeResources()
	{
		return default(RuntimeResources);
	}

	[Token(Token = "0x6000952")]
	[Address(RVA = "0x4BBD200", Offset = "0x4BBD200", VA = "0x4BBD200")]
	internal void SetTRS(Vector3 position, Quaternion rotation, float minBrickSize)
	{
	}

	[Token(Token = "0x6000953")]
	[Address(RVA = "0x4BBD220", Offset = "0x4BBD220", VA = "0x4BBD220")]
	internal void SetMaxSubdivision(int maxSubdivision)
	{
	}

	[Token(Token = "0x6000954")]
	[Address(RVA = "0x4BB17B0", Offset = "0x4BB17B0", VA = "0x4BB17B0")]
	internal static int CellSize(int subdivisionLevel)
	{
		return default(int);
	}

	[Token(Token = "0x6000955")]
	[Address(RVA = "0x4BBE740", Offset = "0x4BBE740", VA = "0x4BBE740")]
	internal float BrickSize(int subdivisionLevel)
	{
		return default(float);
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x4BBDC10", Offset = "0x4BBDC10", VA = "0x4BBDC10")]
	internal float MinBrickSize()
	{
		return default(float);
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x4BBE7C0", Offset = "0x4BBE7C0", VA = "0x4BBE7C0")]
	internal float MaxBrickSize()
	{
		return default(float);
	}

	[Token(Token = "0x6000958")]
	[Address(RVA = "0x4BBE840", Offset = "0x4BBE840", VA = "0x4BBE840")]
	internal RefVolTransform GetTransform()
	{
		return default(RefVolTransform);
	}

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x4BBE860", Offset = "0x4BBE860", VA = "0x4BBE860")]
	internal int GetMaxSubdivision()
	{
		return default(int);
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x4BBE870", Offset = "0x4BBE870", VA = "0x4BBE870")]
	internal int GetMaxSubdivision(float multiplier)
	{
		return default(int);
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x4BBE8E0", Offset = "0x4BBE8E0", VA = "0x4BBE8E0")]
	internal float GetDistanceBetweenProbes(int subdivisionLevel)
	{
		return default(float);
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x4BBE960", Offset = "0x4BBE960", VA = "0x4BBE960")]
	internal float MinDistanceBetweenProbes()
	{
		return default(float);
	}

	[Token(Token = "0x600095D")]
	[Address(RVA = "0x4BBE9D0", Offset = "0x4BBE9D0", VA = "0x4BBE9D0")]
	internal int GetGlobalIndirectionEntryMaxSubdiv()
	{
		return default(int);
	}

	[Token(Token = "0x600095E")]
	[Address(RVA = "0x4BB4440", Offset = "0x4BB4440", VA = "0x4BB4440")]
	internal int GetEntrySubdivLevel()
	{
		return default(int);
	}

	[Token(Token = "0x600095F")]
	[Address(RVA = "0x4BBDB80", Offset = "0x4BBDB80", VA = "0x4BBDB80")]
	internal float GetEntrySize()
	{
		return default(float);
	}

	[Token(Token = "0x6000960")]
	[Address(RVA = "0x4BBE9E0", Offset = "0x4BBE9E0", VA = "0x4BBE9E0")]
	public bool DataHasBeenLoaded()
	{
		return default(bool);
	}

	[Token(Token = "0x6000961")]
	[Address(RVA = "0x4BBEA20", Offset = "0x4BBEA20", VA = "0x4BBEA20")]
	internal void Clear()
	{
	}

	[Token(Token = "0x6000962")]
	[Address(RVA = "0x4BBEB90", Offset = "0x4BBEB90", VA = "0x4BBEB90")]
	private List<ProbeBrickPool.BrickChunkAlloc> GetSourceLocations(int count, int chunkSize, ProbeBrickPool.DataLocation dataLoc)
	{
		return null;
	}

	[Token(Token = "0x6000963")]
	[Address(RVA = "0x4BBED50", Offset = "0x4BBED50", VA = "0x4BBED50")]
	private void UpdatePool(List<ProbeBrickPool.BrickChunkAlloc> chunkList, Cell.PerScenarioData data, NativeArray<byte> validityNeighMaskData, int chunkIndex, int poolIndex)
	{
	}

	[Token(Token = "0x6000964")]
	[Address(RVA = "0x4BBF4D0", Offset = "0x4BBF4D0", VA = "0x4BBF4D0")]
	private void UpdatePoolValidity(List<ProbeBrickPool.BrickChunkAlloc> chunkList, Cell.PerScenarioData data, NativeArray<byte> validityNeighMaskData, int chunkIndex)
	{
	}

	[Token(Token = "0x6000965")]
	[Address(RVA = "0x4BBF6B0", Offset = "0x4BBF6B0", VA = "0x4BBF6B0")]
	private bool AddBlendingBricks(BlendingCellInfo blendingCell)
	{
		return default(bool);
	}

	[Token(Token = "0x6000966")]
	[Address(RVA = "0x4BBAFD0", Offset = "0x4BBAFD0", VA = "0x4BBAFD0")]
	private bool ReservePoolChunks(int brickCount, List<ProbeBrickPool.BrickChunkAlloc> chunkList, bool ignoreErrorLog)
	{
		return default(bool);
	}

	[Token(Token = "0x6000967")]
	[Address(RVA = "0x4BBBC80", Offset = "0x4BBBC80", VA = "0x4BBBC80")]
	private void ReleasePoolChunks(List<ProbeBrickPool.BrickChunkAlloc> chunkList)
	{
	}

	[Token(Token = "0x6000968")]
	[Address(RVA = "0x4BBB8F0", Offset = "0x4BBB8F0", VA = "0x4BBB8F0")]
	private bool AddBricks(CellInfo cellInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000969")]
	[Address(RVA = "0x4BBFC80", Offset = "0x4BBFC80", VA = "0x4BBFC80")]
	private void UpdateCellIndex(CellInfo cellInfo)
	{
	}

	[Token(Token = "0x600096A")]
	[Address(RVA = "0x4BBA640", Offset = "0x4BBA640", VA = "0x4BBA640")]
	private void ReleaseBricks(CellInfo cellInfo)
	{
	}

	[Token(Token = "0x600096B")]
	[Address(RVA = "0x4BBFD10", Offset = "0x4BBFD10", VA = "0x4BBFD10")]
	public void UpdateConstantBuffer(CommandBuffer cmd, ProbeVolumeShadingParameters parameters)
	{
	}

	[Token(Token = "0x600096C")]
	[Address(RVA = "0x4BB9DC0", Offset = "0x4BB9DC0", VA = "0x4BB9DC0")]
	private void DeinitProbeReferenceVolume()
	{
	}

	[Token(Token = "0x600096D")]
	[Address(RVA = "0x4BB9DB0", Offset = "0x4BB9DB0", VA = "0x4BB9DB0")]
	private void CleanupLoadedData()
	{
	}

	[Token(Token = "0x6000971")]
	[Address(RVA = "0x4BC0410", Offset = "0x4BC0410", VA = "0x4BC0410")]
	public void RenderDebug(Camera camera)
	{
	}

	[Token(Token = "0x6000972")]
	[Address(RVA = "0x4BB95B0", Offset = "0x4BB95B0", VA = "0x4BB95B0")]
	private void InitializeDebug(in ProbeVolumeSystemParameters parameters)
	{
	}

	[Token(Token = "0x6000973")]
	[Address(RVA = "0x4BBA0D0", Offset = "0x4BBA0D0", VA = "0x4BBA0D0")]
	private void CleanupDebug()
	{
	}

	[Token(Token = "0x6000974")]
	private void DebugCellIndexChanged<T>(DebugUI.Field<T> field, T value)
	{
	}

	[Token(Token = "0x6000975")]
	[Address(RVA = "0x4BC1950", Offset = "0x4BC1950", VA = "0x4BC1950")]
	private void RegisterDebug(ProbeVolumeSystemParameters parameters)
	{
	}

	[Token(Token = "0x6000976")]
	[Address(RVA = "0x4BC57E0", Offset = "0x4BC57E0", VA = "0x4BC57E0")]
	private void UnregisterDebug(bool destroyPanel)
	{
	}

	[Token(Token = "0x6000977")]
	[Address(RVA = "0x4BC58D0", Offset = "0x4BC58D0", VA = "0x4BC58D0")]
	public void RenderFragmentationOverlay(RenderGraph renderGraph, TextureHandle colorBuffer, TextureHandle depthBuffer, DebugOverlay debugOverlay)
	{
	}

	[Token(Token = "0x6000978")]
	[Address(RVA = "0x4BC5CD0", Offset = "0x4BC5CD0", VA = "0x4BC5CD0")]
	private bool ShouldCullCell(Vector3 cellPosition, Transform cameraTransform, Plane[] frustumPlanes)
	{
		return default(bool);
	}

	[Token(Token = "0x6000979")]
	[Address(RVA = "0x4BC0460", Offset = "0x4BC0460", VA = "0x4BC0460")]
	private void DrawProbeDebug(Camera camera)
	{
	}

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x4BC7180", Offset = "0x4BC7180", VA = "0x4BC7180")]
	internal void ResetDebugViewToMaxSubdiv()
	{
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x4BBA720", Offset = "0x4BBA720", VA = "0x4BBA720")]
	private void ClearDebugData()
	{
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x4BC6090", Offset = "0x4BC6090", VA = "0x4BC6090")]
	private CellInstancedDebugProbes CreateInstancedProbes(CellInfo cellInfo)
	{
		return null;
	}

	[Token(Token = "0x600097D")]
	[Address(RVA = "0x4BC7250", Offset = "0x4BC7250", VA = "0x4BC7250")]
	private void OnClearLightingdata()
	{
	}

	[Token(Token = "0x600097E")]
	[Address(RVA = "0x4BC72A0", Offset = "0x4BC72A0", VA = "0x4BC72A0")]
	internal void ScenarioBlendingChanged(bool scenarioChanged)
	{
	}

	[Token(Token = "0x600097F")]
	[Address(RVA = "0x4BC7340", Offset = "0x4BC7340", VA = "0x4BC7340")]
	public void SetNumberOfCellsLoadedPerFrame(int numberOfCells)
	{
	}

	[Token(Token = "0x6000980")]
	[Address(RVA = "0x4BC7360", Offset = "0x4BC7360", VA = "0x4BC7360")]
	private void ComputeStreamingScore(Vector3 cameraPosition, Vector3 cameraDirection, DynamicArray<CellInfo> cells)
	{
	}

	[Token(Token = "0x6000981")]
	[Address(RVA = "0x4BC76E0", Offset = "0x4BC76E0", VA = "0x4BC76E0")]
	private void ComputeStreamingScoreForBlending(DynamicArray<BlendingCellInfo> cells, float worstScore)
	{
	}

	[Token(Token = "0x6000982")]
	[Address(RVA = "0x4BC77E0", Offset = "0x4BC77E0", VA = "0x4BC77E0")]
	private bool TryLoadCell(CellInfo cellInfo, ref int shBudget, ref int indexBudget, DynamicArray<CellInfo> loadedCells)
	{
		return default(bool);
	}

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x4BC78B0", Offset = "0x4BC78B0", VA = "0x4BC78B0")]
	private void UnloadBlendingCell(BlendingCellInfo blendingCell, DynamicArray<BlendingCellInfo> unloadedCells)
	{
	}

	[Token(Token = "0x6000984")]
	[Address(RVA = "0x4BC7920", Offset = "0x4BC7920", VA = "0x4BC7920")]
	private bool TryLoadBlendingCell(BlendingCellInfo blendingCell, DynamicArray<BlendingCellInfo> loadedCells)
	{
		return default(bool);
	}

	[Token(Token = "0x6000985")]
	[Address(RVA = "0x4BC79A0", Offset = "0x4BC79A0", VA = "0x4BC79A0")]
	private void ComputeMinMaxStreamingScore()
	{
	}

	[Token(Token = "0x6000986")]
	[Address(RVA = "0x4BC7B20", Offset = "0x4BC7B20", VA = "0x4BC7B20")]
	public void UpdateCellStreaming(CommandBuffer cmd, Camera camera)
	{
	}

	[Token(Token = "0x6000987")]
	[Address(RVA = "0x4BC90F0", Offset = "0x4BC90F0", VA = "0x4BC90F0")]
	private int FindWorstBlendingCellToBeLoaded()
	{
		return default(int);
	}

	[Token(Token = "0x6000988")]
	[Address(RVA = "0x4BC8950", Offset = "0x4BC8950", VA = "0x4BC8950")]
	private void UpdateBlendingCellStreaming(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000989")]
	[Address(RVA = "0x4BC9230", Offset = "0x4BC9230", VA = "0x4BC9230")]
	private static int DefragComparer(CellInfo a, CellInfo b)
	{
		return default(int);
	}

	[Token(Token = "0x600098A")]
	[Address(RVA = "0x4BBBCE0", Offset = "0x4BBBCE0", VA = "0x4BBBCE0")]
	private void StartIndexDefragmentation()
	{
	}

	[Token(Token = "0x600098B")]
	[Address(RVA = "0x4BC85C0", Offset = "0x4BC85C0", VA = "0x4BC85C0")]
	private void UpdateIndexDefragmentation()
	{
	}
}
