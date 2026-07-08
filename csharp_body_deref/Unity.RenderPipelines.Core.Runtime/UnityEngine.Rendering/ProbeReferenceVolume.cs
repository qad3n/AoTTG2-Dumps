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
	[Token(Token = "0x2000122")]
	internal class CellInstancedDebugProbes
	{
		[Token(Token = "0x40004A0")]
		[FieldOffset(Offset = "0x10")]
		public List<Matrix4x4[]> probeBuffers;

		[Token(Token = "0x40004A1")]
		[FieldOffset(Offset = "0x18")]
		public List<Matrix4x4[]> offsetBuffers;

		[Token(Token = "0x40004A2")]
		[FieldOffset(Offset = "0x20")]
		public List<MaterialPropertyBlock> props;

		[Token(Token = "0x6000994")]
		[Address(RVA = "0x48A4770", Offset = "0x48A4770", VA = "0x48A4770")]
		public CellInstancedDebugProbes()
		{
		}
	}

	[Token(Token = "0x2000123")]
	private class RenderFragmentationOverlayPassData
	{
		[Token(Token = "0x40004A3")]
		[FieldOffset(Offset = "0x10")]
		public Material debugFragmentationMaterial;

		[Token(Token = "0x40004A4")]
		[FieldOffset(Offset = "0x18")]
		public DebugOverlay debugOverlay;

		[Token(Token = "0x40004A5")]
		[FieldOffset(Offset = "0x20")]
		public int chunkCount;

		[Token(Token = "0x40004A6")]
		[FieldOffset(Offset = "0x28")]
		public ComputeBuffer debugFragmentationData;

		[Token(Token = "0x40004A7")]
		[FieldOffset(Offset = "0x30")]
		public TextureHandle colorBuffer;

		[Token(Token = "0x40004A8")]
		[FieldOffset(Offset = "0x40")]
		public TextureHandle depthBuffer;

		[Token(Token = "0x6000995")]
		[Address(RVA = "0x48A4780", Offset = "0x48A4780", VA = "0x48A4780")]
		public RenderFragmentationOverlayPassData()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000124")]
	internal struct IndirectionEntryInfo
	{
		[Token(Token = "0x40004A9")]
		[FieldOffset(Offset = "0x0")]
		public Vector3Int positionInBricks;

		[Token(Token = "0x40004AA")]
		[FieldOffset(Offset = "0xC")]
		public int minSubdiv;

		[Token(Token = "0x40004AB")]
		[FieldOffset(Offset = "0x10")]
		public bool hasOnlyBiggerBricks;
	}

	[Serializable]
	[Token(Token = "0x2000125")]
	[DebuggerDisplay("Index = {index} position = {position}")]
	internal class Cell
	{
		[Token(Token = "0x2000126")]
		public struct PerScenarioData
		{
			[Token(Token = "0x17000116")]
			public NativeArray<ushort> shL0L1RxData
			{
				[Token(Token = "0x60009A4")]
				[Address(RVA = "0x48A48B0", Offset = "0x48A48B0", VA = "0x48A48B0")]
				[CompilerGenerated]
				readonly get
				{
					return default(NativeArray<ushort>);
				}
				[Token(Token = "0x60009A5")]
				[Address(RVA = "0x48A48C0", Offset = "0x48A48C0", VA = "0x48A48C0")]
				[CompilerGenerated]
				internal set
				{
				}
			}

			[Token(Token = "0x17000117")]
			public NativeArray<byte> shL1GL1RyData
			{
				[Token(Token = "0x60009A6")]
				[Address(RVA = "0x48A48D0", Offset = "0x48A48D0", VA = "0x48A48D0")]
				[CompilerGenerated]
				readonly get
				{
					return default(NativeArray<byte>);
				}
				[Token(Token = "0x60009A7")]
				[Address(RVA = "0x48A48E0", Offset = "0x48A48E0", VA = "0x48A48E0")]
				[CompilerGenerated]
				internal set
				{
				}
			}

			[Token(Token = "0x17000118")]
			public NativeArray<byte> shL1BL1RzData
			{
				[Token(Token = "0x60009A8")]
				[Address(RVA = "0x48A48F0", Offset = "0x48A48F0", VA = "0x48A48F0")]
				[CompilerGenerated]
				readonly get
				{
					return default(NativeArray<byte>);
				}
				[Token(Token = "0x60009A9")]
				[Address(RVA = "0x48A4900", Offset = "0x48A4900", VA = "0x48A4900")]
				[CompilerGenerated]
				internal set
				{
				}
			}

			[Token(Token = "0x17000119")]
			public NativeArray<byte> shL2Data_0
			{
				[Token(Token = "0x60009AA")]
				[Address(RVA = "0x48A4910", Offset = "0x48A4910", VA = "0x48A4910")]
				[CompilerGenerated]
				readonly get
				{
					return default(NativeArray<byte>);
				}
				[Token(Token = "0x60009AB")]
				[Address(RVA = "0x48A4920", Offset = "0x48A4920", VA = "0x48A4920")]
				[CompilerGenerated]
				internal set
				{
				}
			}

			[Token(Token = "0x1700011A")]
			public NativeArray<byte> shL2Data_1
			{
				[Token(Token = "0x60009AC")]
				[Address(RVA = "0x48A4930", Offset = "0x48A4930", VA = "0x48A4930")]
				[CompilerGenerated]
				readonly get
				{
					return default(NativeArray<byte>);
				}
				[Token(Token = "0x60009AD")]
				[Address(RVA = "0x48A4940", Offset = "0x48A4940", VA = "0x48A4940")]
				[CompilerGenerated]
				internal set
				{
				}
			}

			[Token(Token = "0x1700011B")]
			public NativeArray<byte> shL2Data_2
			{
				[Token(Token = "0x60009AE")]
				[Address(RVA = "0x48A4950", Offset = "0x48A4950", VA = "0x48A4950")]
				[CompilerGenerated]
				readonly get
				{
					return default(NativeArray<byte>);
				}
				[Token(Token = "0x60009AF")]
				[Address(RVA = "0x48A4960", Offset = "0x48A4960", VA = "0x48A4960")]
				[CompilerGenerated]
				internal set
				{
				}
			}

			[Token(Token = "0x1700011C")]
			public NativeArray<byte> shL2Data_3
			{
				[Token(Token = "0x60009B0")]
				[Address(RVA = "0x48A4970", Offset = "0x48A4970", VA = "0x48A4970")]
				[CompilerGenerated]
				readonly get
				{
					return default(NativeArray<byte>);
				}
				[Token(Token = "0x60009B1")]
				[Address(RVA = "0x48A4980", Offset = "0x48A4980", VA = "0x48A4980")]
				[CompilerGenerated]
				internal set
				{
				}
			}
		}

		[Token(Token = "0x40004AC")]
		[FieldOffset(Offset = "0x10")]
		public Vector3Int position;

		[Token(Token = "0x40004AD")]
		[FieldOffset(Offset = "0x1C")]
		public int index;

		[Token(Token = "0x40004AE")]
		[FieldOffset(Offset = "0x20")]
		public int probeCount;

		[Token(Token = "0x40004AF")]
		[FieldOffset(Offset = "0x24")]
		public int minSubdiv;

		[Token(Token = "0x40004B0")]
		[FieldOffset(Offset = "0x28")]
		public int maxSubdiv;

		[Token(Token = "0x40004B1")]
		[FieldOffset(Offset = "0x2C")]
		public int indexChunkCount;

		[Token(Token = "0x40004B2")]
		[FieldOffset(Offset = "0x30")]
		public int shChunkCount;

		[Token(Token = "0x40004B3")]
		[FieldOffset(Offset = "0x38")]
		public IndirectionEntryInfo[] indirectionEntryInfo;

		[Token(Token = "0x40004B4")]
		[FieldOffset(Offset = "0x40")]
		public bool hasTwoScenarios;

		[Token(Token = "0x40004B5")]
		[FieldOffset(Offset = "0x44")]
		public ProbeVolumeSHBands shBands;

		[NonSerialized]
		[Token(Token = "0x40004BC")]
		[FieldOffset(Offset = "0xA8")]
		public PerScenarioData scenario0;

		[NonSerialized]
		[Token(Token = "0x40004BD")]
		[FieldOffset(Offset = "0x118")]
		public PerScenarioData scenario1;

		[Token(Token = "0x1700010F")]
		public NativeArray<ProbeBrickIndex.Brick> bricks
		{
			[Token(Token = "0x6000996")]
			[Address(RVA = "0x48A4790", Offset = "0x48A4790", VA = "0x48A4790")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<ProbeBrickIndex.Brick>);
			}
			[Token(Token = "0x6000997")]
			[Address(RVA = "0x48A47A0", Offset = "0x48A47A0", VA = "0x48A47A0")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x17000110")]
		public NativeArray<byte> validityNeighMaskData
		{
			[Token(Token = "0x6000998")]
			[Address(RVA = "0x48A47B0", Offset = "0x48A47B0", VA = "0x48A47B0")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<byte>);
			}
			[Token(Token = "0x6000999")]
			[Address(RVA = "0x48A47C0", Offset = "0x48A47C0", VA = "0x48A47C0")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x17000111")]
		public NativeArray<Vector3> probePositions
		{
			[Token(Token = "0x600099A")]
			[Address(RVA = "0x48A47D0", Offset = "0x48A47D0", VA = "0x48A47D0")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<Vector3>);
			}
			[Token(Token = "0x600099B")]
			[Address(RVA = "0x48A47E0", Offset = "0x48A47E0", VA = "0x48A47E0")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x17000112")]
		public NativeArray<float> touchupVolumeInteraction
		{
			[Token(Token = "0x600099C")]
			[Address(RVA = "0x48A47F0", Offset = "0x48A47F0", VA = "0x48A47F0")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<float>);
			}
			[Token(Token = "0x600099D")]
			[Address(RVA = "0x48A4800", Offset = "0x48A4800", VA = "0x48A4800")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x17000113")]
		public NativeArray<Vector3> offsetVectors
		{
			[Token(Token = "0x600099E")]
			[Address(RVA = "0x48A4810", Offset = "0x48A4810", VA = "0x48A4810")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<Vector3>);
			}
			[Token(Token = "0x600099F")]
			[Address(RVA = "0x48A4820", Offset = "0x48A4820", VA = "0x48A4820")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x17000114")]
		public NativeArray<float> validity
		{
			[Token(Token = "0x60009A0")]
			[Address(RVA = "0x48A4830", Offset = "0x48A4830", VA = "0x48A4830")]
			[CompilerGenerated]
			get
			{
				return default(NativeArray<float>);
			}
			[Token(Token = "0x60009A1")]
			[Address(RVA = "0x48A4840", Offset = "0x48A4840", VA = "0x48A4840")]
			[CompilerGenerated]
			internal set
			{
			}
		}

		[Token(Token = "0x17000115")]
		public PerScenarioData bakingScenario
		{
			[Token(Token = "0x60009A2")]
			[Address(RVA = "0x48A4850", Offset = "0x48A4850", VA = "0x48A4850")]
			get
			{
				return default(PerScenarioData);
			}
		}

		[Token(Token = "0x60009A3")]
		[Address(RVA = "0x48A48A0", Offset = "0x48A48A0", VA = "0x48A48A0")]
		public Cell()
		{
		}
	}

	[Token(Token = "0x2000127")]
	[DebuggerDisplay("Index = {cell.index} Loaded = {loaded}")]
	internal class CellInfo : IComparable<CellInfo>
	{
		[Token(Token = "0x40004C5")]
		[FieldOffset(Offset = "0x10")]
		public Cell cell;

		[Token(Token = "0x40004C6")]
		[FieldOffset(Offset = "0x18")]
		public BlendingCellInfo blendingCell;

		[Token(Token = "0x40004C7")]
		[FieldOffset(Offset = "0x20")]
		public List<ProbeBrickPool.BrickChunkAlloc> chunkList;

		[Token(Token = "0x40004C8")]
		[FieldOffset(Offset = "0x28")]
		public int[] flatIndicesInGlobalIndirection;

		[Token(Token = "0x40004C9")]
		[FieldOffset(Offset = "0x30")]
		public bool loaded;

		[Token(Token = "0x40004CA")]
		[FieldOffset(Offset = "0x38")]
		public ProbeBrickIndex.CellIndexUpdateInfo updateInfo;

		[Token(Token = "0x40004CB")]
		[FieldOffset(Offset = "0x40")]
		public bool indexUpdated;

		[Token(Token = "0x40004CC")]
		[FieldOffset(Offset = "0x48")]
		public ProbeBrickIndex.CellIndexUpdateInfo tempUpdateInfo;

		[Token(Token = "0x40004CD")]
		[FieldOffset(Offset = "0x50")]
		public int sourceAssetInstanceID;

		[Token(Token = "0x40004CE")]
		[FieldOffset(Offset = "0x54")]
		public float streamingScore;

		[Token(Token = "0x40004CF")]
		[FieldOffset(Offset = "0x58")]
		public int referenceCount;

		[Token(Token = "0x40004D0")]
		[FieldOffset(Offset = "0x60")]
		public CellInstancedDebugProbes debugProbes;

		[Token(Token = "0x60009B2")]
		[Address(RVA = "0x48A4990", Offset = "0x48A4990", VA = "0x48A4990", Slot = "4")]
		public int CompareTo(CellInfo other)
		{
			return default(int);
		}

		[Token(Token = "0x60009B3")]
		[Address(RVA = "0x48A49C0", Offset = "0x48A49C0", VA = "0x48A49C0")]
		public void Clear()
		{
		}

		[Token(Token = "0x60009B4")]
		[Address(RVA = "0x48A4A70", Offset = "0x48A4A70", VA = "0x48A4A70")]
		public CellInfo()
		{
		}
	}

	[Token(Token = "0x2000128")]
	[DebuggerDisplay("Index = {cellInfo.cell.index} Factor = {blendingFactor} Score = {streamingScore}")]
	internal class BlendingCellInfo : IComparable<BlendingCellInfo>
	{
		[Token(Token = "0x40004D1")]
		[FieldOffset(Offset = "0x10")]
		public CellInfo cellInfo;

		[Token(Token = "0x40004D2")]
		[FieldOffset(Offset = "0x18")]
		public List<ProbeBrickPool.BrickChunkAlloc> chunkList;

		[Token(Token = "0x40004D3")]
		[FieldOffset(Offset = "0x20")]
		public float streamingScore;

		[Token(Token = "0x40004D4")]
		[FieldOffset(Offset = "0x24")]
		public float blendingFactor;

		[Token(Token = "0x40004D5")]
		[FieldOffset(Offset = "0x28")]
		public bool blending;

		[Token(Token = "0x60009B5")]
		[Address(RVA = "0x48A4AF0", Offset = "0x48A4AF0", VA = "0x48A4AF0", Slot = "4")]
		public int CompareTo(BlendingCellInfo other)
		{
			return default(int);
		}

		[Token(Token = "0x60009B6")]
		[Address(RVA = "0x48A4B20", Offset = "0x48A4B20", VA = "0x48A4B20")]
		public void Clear()
		{
		}

		[Token(Token = "0x60009B7")]
		[Address(RVA = "0x48A4B80", Offset = "0x48A4B80", VA = "0x48A4B80")]
		public void MarkUpToDate()
		{
		}

		[Token(Token = "0x60009B8")]
		[Address(RVA = "0x48A4B90", Offset = "0x48A4B90", VA = "0x48A4B90")]
		public bool IsUpToDate()
		{
			return default(bool);
		}

		[Token(Token = "0x60009B9")]
		[Address(RVA = "0x48A4BB0", Offset = "0x48A4BB0", VA = "0x48A4BB0")]
		public void ForceReupload()
		{
		}

		[Token(Token = "0x60009BA")]
		[Address(RVA = "0x48A4BC0", Offset = "0x48A4BC0", VA = "0x48A4BC0")]
		public bool ShouldReupload()
		{
			return default(bool);
		}

		[Token(Token = "0x60009BB")]
		[Address(RVA = "0x48A4BE0", Offset = "0x48A4BE0", VA = "0x48A4BE0")]
		public void Prioritize()
		{
		}

		[Token(Token = "0x60009BC")]
		[Address(RVA = "0x48A4BF0", Offset = "0x48A4BF0", VA = "0x48A4BF0")]
		public bool ShouldPrioritize()
		{
			return default(bool);
		}

		[Token(Token = "0x60009BD")]
		[Address(RVA = "0x48A4C10", Offset = "0x48A4C10", VA = "0x48A4C10")]
		public BlendingCellInfo()
		{
		}
	}

	[Token(Token = "0x2000129")]
	internal struct Volume : IEquatable<Volume>
	{
		[Token(Token = "0x40004D6")]
		[FieldOffset(Offset = "0x0")]
		internal Vector3 corner;

		[Token(Token = "0x40004D7")]
		[FieldOffset(Offset = "0xC")]
		internal Vector3 X;

		[Token(Token = "0x40004D8")]
		[FieldOffset(Offset = "0x18")]
		internal Vector3 Y;

		[Token(Token = "0x40004D9")]
		[FieldOffset(Offset = "0x24")]
		internal Vector3 Z;

		[Token(Token = "0x40004DA")]
		[FieldOffset(Offset = "0x30")]
		internal float maxSubdivisionMultiplier;

		[Token(Token = "0x40004DB")]
		[FieldOffset(Offset = "0x34")]
		internal float minSubdivisionMultiplier;

		[Token(Token = "0x60009BE")]
		[Address(RVA = "0x48A4C90", Offset = "0x48A4C90", VA = "0x48A4C90")]
		public Volume(Matrix4x4 trs, float maxSubdivision, float minSubdivision)
		{
		}

		[Token(Token = "0x60009BF")]
		[Address(RVA = "0x48A4D80", Offset = "0x48A4D80", VA = "0x48A4D80")]
		public Volume(Vector3 corner, Vector3 X, Vector3 Y, Vector3 Z, float maxSubdivision = 1f, float minSubdivision = 0f)
		{
		}

		[Token(Token = "0x60009C0")]
		[Address(RVA = "0x48A4DC0", Offset = "0x48A4DC0", VA = "0x48A4DC0")]
		public Volume(Volume copy)
		{
		}

		[Token(Token = "0x60009C1")]
		[Address(RVA = "0x48A4E90", Offset = "0x48A4E90", VA = "0x48A4E90")]
		public Volume(Bounds bounds)
		{
		}

		[Token(Token = "0x60009C2")]
		[Address(RVA = "0x48A4F10", Offset = "0x48A4F10", VA = "0x48A4F10")]
		public Bounds CalculateAABB()
		{
			return default(Bounds);
		}

		[Token(Token = "0x60009C3")]
		[Address(RVA = "0x48A5280", Offset = "0x48A5280", VA = "0x48A5280")]
		public void CalculateCenterAndSize(out Vector3 center, out Vector3 size)
		{
		}

		[Token(Token = "0x60009C4")]
		[Address(RVA = "0x48A54F0", Offset = "0x48A54F0", VA = "0x48A54F0")]
		public void Transform(Matrix4x4 trs)
		{
		}

		[Token(Token = "0x60009C5")]
		[Address(RVA = "0x48A5580", Offset = "0x48A5580", VA = "0x48A5580", Slot = "3")]
		public override string ToString()
		{
			return null;
		}

		[Token(Token = "0x60009C6")]
		[Address(RVA = "0x48A5800", Offset = "0x48A5800", VA = "0x48A5800", Slot = "4")]
		public bool Equals(Volume other)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200012A")]
	internal struct RefVolTransform
	{
		[Token(Token = "0x40004DC")]
		[FieldOffset(Offset = "0x0")]
		public Vector3 posWS;

		[Token(Token = "0x40004DD")]
		[FieldOffset(Offset = "0xC")]
		public Quaternion rot;

		[Token(Token = "0x40004DE")]
		[FieldOffset(Offset = "0x1C")]
		public float scale;
	}

	[Token(Token = "0x200012B")]
	public struct RuntimeResources
	{
		[Token(Token = "0x40004DF")]
		[FieldOffset(Offset = "0x0")]
		public ComputeBuffer index;

		[Token(Token = "0x40004E0")]
		[FieldOffset(Offset = "0x8")]
		public ComputeBuffer cellIndices;

		[Token(Token = "0x40004E1")]
		[FieldOffset(Offset = "0x10")]
		public RenderTexture L0_L1rx;

		[Token(Token = "0x40004E2")]
		[FieldOffset(Offset = "0x18")]
		public RenderTexture L1_G_ry;

		[Token(Token = "0x40004E3")]
		[FieldOffset(Offset = "0x20")]
		public RenderTexture L1_B_rz;

		[Token(Token = "0x40004E4")]
		[FieldOffset(Offset = "0x28")]
		public RenderTexture L2_0;

		[Token(Token = "0x40004E5")]
		[FieldOffset(Offset = "0x30")]
		public RenderTexture L2_1;

		[Token(Token = "0x40004E6")]
		[FieldOffset(Offset = "0x38")]
		public RenderTexture L2_2;

		[Token(Token = "0x40004E7")]
		[FieldOffset(Offset = "0x40")]
		public RenderTexture L2_3;

		[Token(Token = "0x40004E8")]
		[FieldOffset(Offset = "0x48")]
		public Texture3D Validity;
	}

	[Token(Token = "0x200012C")]
	public struct ExtraDataActionInput
	{
	}

	[Token(Token = "0x200012D")]
	private struct InitInfo
	{
		[Token(Token = "0x40004E9")]
		[FieldOffset(Offset = "0x0")]
		public Vector3Int pendingMinCellPosition;

		[Token(Token = "0x40004EA")]
		[FieldOffset(Offset = "0xC")]
		public Vector3Int pendingMaxCellPosition;
	}

	[Token(Token = "0x400044B")]
	private const int kProbesPerBatch = 511;

	[Token(Token = "0x400044C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string k_DebugPanelName;

	[Token(Token = "0x400044F")]
	[FieldOffset(Offset = "0x20")]
	private Mesh m_DebugMesh;

	[Token(Token = "0x4000450")]
	[FieldOffset(Offset = "0x28")]
	private DebugUI.Widget[] m_DebugItems;

	[Token(Token = "0x4000451")]
	[FieldOffset(Offset = "0x30")]
	private Material m_DebugMaterial;

	[Token(Token = "0x4000452")]
	[FieldOffset(Offset = "0x38")]
	private Mesh m_DebugProbeSamplingMesh;

	[Token(Token = "0x4000453")]
	[FieldOffset(Offset = "0x40")]
	private Material m_ProbeSamplingDebugMaterial;

	[Token(Token = "0x4000454")]
	[FieldOffset(Offset = "0x48")]
	private Material m_ProbeSamplingDebugMaterial02;

	[Token(Token = "0x4000455")]
	[FieldOffset(Offset = "0x50")]
	private Texture m_displayNumbersTexture;

	[Token(Token = "0x4000456")]
	[FieldOffset(Offset = "0x8")]
	public static ProbeSamplingDebugData probeSamplingDebugData;

	[Token(Token = "0x4000457")]
	[FieldOffset(Offset = "0x58")]
	private Mesh m_DebugOffsetMesh;

	[Token(Token = "0x4000458")]
	[FieldOffset(Offset = "0x60")]
	private Material m_DebugOffsetMaterial;

	[Token(Token = "0x4000459")]
	[FieldOffset(Offset = "0x68")]
	private Material m_DebugFragmentationMaterial;

	[Token(Token = "0x400045A")]
	[FieldOffset(Offset = "0x70")]
	private Plane[] m_DebugFrustumPlanes;

	[Token(Token = "0x400045B")]
	[FieldOffset(Offset = "0x78")]
	private GUIContent[] m_DebugScenarioNames;

	[Token(Token = "0x400045C")]
	[FieldOffset(Offset = "0x80")]
	private int[] m_DebugScenarioValues;

	[Token(Token = "0x400045D")]
	[FieldOffset(Offset = "0x88")]
	private string m_DebugActiveSceneGUID;

	[Token(Token = "0x400045E")]
	[FieldOffset(Offset = "0x90")]
	private string m_DebugActiveScenario;

	[Token(Token = "0x400045F")]
	[FieldOffset(Offset = "0x98")]
	private DebugUI.EnumField m_DebugScenarioField;

	[Token(Token = "0x4000460")]
	[FieldOffset(Offset = "0xA0")]
	internal ProbeVolumeBakingProcessSettings bakingProcessSettings;

	[Token(Token = "0x4000461")]
	[FieldOffset(Offset = "0xD0")]
	internal Dictionary<Bounds, ProbeBrickIndex.Brick[]> realtimeSubdivisionInfo;

	[Token(Token = "0x4000462")]
	[FieldOffset(Offset = "0xD8")]
	private bool m_MaxSubdivVisualizedIsMaxAvailable;

	[Token(Token = "0x4000463")]
	[FieldOffset(Offset = "0xE0")]
	private DynamicArray<CellInfo> m_LoadedCells;

	[Token(Token = "0x4000464")]
	[FieldOffset(Offset = "0xE8")]
	private DynamicArray<CellInfo> m_ToBeLoadedCells;

	[Token(Token = "0x4000465")]
	[FieldOffset(Offset = "0xF0")]
	private DynamicArray<CellInfo> m_TempCellToLoadList;

	[Token(Token = "0x4000466")]
	[FieldOffset(Offset = "0xF8")]
	private DynamicArray<CellInfo> m_TempCellToUnloadList;

	[Token(Token = "0x4000467")]
	[FieldOffset(Offset = "0x100")]
	private DynamicArray<BlendingCellInfo> m_LoadedBlendingCells;

	[Token(Token = "0x4000468")]
	[FieldOffset(Offset = "0x108")]
	private DynamicArray<BlendingCellInfo> m_ToBeLoadedBlendingCells;

	[Token(Token = "0x4000469")]
	[FieldOffset(Offset = "0x110")]
	private DynamicArray<BlendingCellInfo> m_TempBlendingCellToLoadList;

	[Token(Token = "0x400046A")]
	[FieldOffset(Offset = "0x118")]
	private DynamicArray<BlendingCellInfo> m_TempBlendingCellToUnloadList;

	[Token(Token = "0x400046B")]
	[FieldOffset(Offset = "0x120")]
	private Vector3 m_FrozenCameraPosition;

	[Token(Token = "0x400046C")]
	[FieldOffset(Offset = "0x12C")]
	private Vector3 m_FrozenCameraDirection;

	[Token(Token = "0x400046D")]
	private const float kIndexFragmentationThreshold = 0.2f;

	[Token(Token = "0x400046E")]
	[FieldOffset(Offset = "0x138")]
	private bool m_IndexDefragmentationInProgress;

	[Token(Token = "0x400046F")]
	[FieldOffset(Offset = "0x140")]
	private ProbeBrickIndex m_DefragIndex;

	[Token(Token = "0x4000470")]
	[FieldOffset(Offset = "0x148")]
	private ProbeGlobalIndirection m_DefragCellIndices;

	[Token(Token = "0x4000471")]
	[FieldOffset(Offset = "0x150")]
	private DynamicArray<CellInfo> m_IndexDefragCells;

	[Token(Token = "0x4000472")]
	[FieldOffset(Offset = "0x158")]
	internal float minStreamingScore;

	[Token(Token = "0x4000473")]
	[FieldOffset(Offset = "0x15C")]
	internal float maxStreamingScore;

	[Token(Token = "0x4000474")]
	[FieldOffset(Offset = "0x160")]
	private bool m_HasRemainingCellsToBlend;

	[Token(Token = "0x4000475")]
	[FieldOffset(Offset = "0x161")]
	private bool m_IsInitialized;

	[Token(Token = "0x4000476")]
	[FieldOffset(Offset = "0x162")]
	private bool m_SupportStreaming;

	[Token(Token = "0x4000477")]
	[FieldOffset(Offset = "0x163")]
	private bool m_SupportScenarios;

	[Token(Token = "0x4000478")]
	[FieldOffset(Offset = "0x164")]
	private RefVolTransform m_Transform;

	[Token(Token = "0x4000479")]
	[FieldOffset(Offset = "0x184")]
	private int m_MaxSubdivision;

	[Token(Token = "0x400047A")]
	[FieldOffset(Offset = "0x188")]
	private ProbeBrickPool m_Pool;

	[Token(Token = "0x400047B")]
	[FieldOffset(Offset = "0x190")]
	private ProbeBrickIndex m_Index;

	[Token(Token = "0x400047C")]
	[FieldOffset(Offset = "0x198")]
	private ProbeGlobalIndirection m_CellIndices;

	[Token(Token = "0x400047D")]
	[FieldOffset(Offset = "0x1A0")]
	private ProbeBrickBlendingPool m_BlendingPool;

	[Token(Token = "0x400047E")]
	[FieldOffset(Offset = "0x1A8")]
	private List<ProbeBrickPool.BrickChunkAlloc> m_TmpSrcChunks;

	[Token(Token = "0x400047F")]
	[FieldOffset(Offset = "0x1B0")]
	private float[] m_PositionOffsets;

	[Token(Token = "0x4000480")]
	[FieldOffset(Offset = "0x1B8")]
	private Bounds m_CurrGlobalBounds;

	[Token(Token = "0x4000481")]
	[FieldOffset(Offset = "0x1D0")]
	internal Dictionary<int, CellInfo> cells;

	[Token(Token = "0x4000482")]
	[FieldOffset(Offset = "0x1D8")]
	private ObjectPool<CellInfo> m_CellInfoPool;

	[Token(Token = "0x4000483")]
	[FieldOffset(Offset = "0x1E0")]
	private ObjectPool<BlendingCellInfo> m_BlendingCellInfoPool;

	[Token(Token = "0x4000484")]
	[FieldOffset(Offset = "0x1E8")]
	private ProbeBrickPool.DataLocation m_TemporaryDataLocation;

	[Token(Token = "0x4000485")]
	[FieldOffset(Offset = "0x238")]
	private int m_TemporaryDataLocationMemCost;

	[Token(Token = "0x4000486")]
	[FieldOffset(Offset = "0x240")]
	internal ProbeVolumeSceneData sceneData;

	[Token(Token = "0x4000487")]
	[FieldOffset(Offset = "0x248")]
	private Vector3Int minLoadedCellPos;

	[Token(Token = "0x4000488")]
	[FieldOffset(Offset = "0x254")]
	private Vector3Int maxLoadedCellPos;

	[Token(Token = "0x4000489")]
	[FieldOffset(Offset = "0x260")]
	public Action<ExtraDataActionInput> retrieveExtraDataAction;

	[Token(Token = "0x400048A")]
	[FieldOffset(Offset = "0x268")]
	public Action checksDuringBakeAction;

	[Token(Token = "0x400048B")]
	[FieldOffset(Offset = "0x270")]
	private Dictionary<string, ProbeVolumeAsset> m_PendingAssetsToBeLoaded;

	[Token(Token = "0x400048C")]
	[FieldOffset(Offset = "0x278")]
	private Dictionary<string, ProbeVolumeAsset> m_PendingAssetsToBeUnloaded;

	[Token(Token = "0x400048D")]
	[FieldOffset(Offset = "0x280")]
	private Dictionary<string, ProbeVolumeAsset> m_ActiveAssets;

	[Token(Token = "0x400048E")]
	[FieldOffset(Offset = "0x288")]
	private bool m_NeedLoadAsset;

	[Token(Token = "0x400048F")]
	[FieldOffset(Offset = "0x289")]
	private bool m_ProbeReferenceVolumeInit;

	[Token(Token = "0x4000490")]
	[FieldOffset(Offset = "0x28A")]
	private bool m_EnabledBySRP;

	[Token(Token = "0x4000491")]
	[FieldOffset(Offset = "0x28C")]
	private InitInfo m_PendingInitInfo;

	[Token(Token = "0x4000492")]
	[FieldOffset(Offset = "0x2A4")]
	private bool m_NeedsIndexRebuild;

	[Token(Token = "0x4000493")]
	[FieldOffset(Offset = "0x2A5")]
	private bool m_HasChangedIndex;

	[Token(Token = "0x4000494")]
	[FieldOffset(Offset = "0x2A8")]
	private int m_CBShaderID;

	[Token(Token = "0x4000495")]
	[FieldOffset(Offset = "0x2AC")]
	private int m_NumberOfCellsLoadedPerFrame;

	[Token(Token = "0x4000496")]
	[FieldOffset(Offset = "0x2B0")]
	private int m_NumberOfCellsBlendedPerFrame;

	[Token(Token = "0x4000497")]
	[FieldOffset(Offset = "0x2B4")]
	private float m_TurnoverRate;

	[Token(Token = "0x4000498")]
	[FieldOffset(Offset = "0x2B8")]
	private ProbeVolumeTextureMemoryBudget m_MemoryBudget;

	[Token(Token = "0x4000499")]
	[FieldOffset(Offset = "0x2BC")]
	private ProbeVolumeBlendingTextureMemoryBudget m_BlendingMemoryBudget;

	[Token(Token = "0x400049A")]
	[FieldOffset(Offset = "0x2C0")]
	private ProbeVolumeSHBands m_SHBands;

	[Token(Token = "0x400049B")]
	[FieldOffset(Offset = "0x2C4")]
	private float m_ProbeVolumesWeight;

	[Token(Token = "0x400049C")]
	[FieldOffset(Offset = "0x2C8")]
	internal bool clearAssetsOnVolumeClear;

	[Token(Token = "0x400049D")]
	[FieldOffset(Offset = "0x10")]
	internal static string defaultLightingScenario;

	[Token(Token = "0x400049E")]
	[FieldOffset(Offset = "0x18")]
	private static ProbeReferenceVolume _instance;

	[Token(Token = "0x170000FB")]
	internal ProbeVolumeDebug probeVolumeDebug
	{
		[Token(Token = "0x6000921")]
		[Address(RVA = "0x4893F50", Offset = "0x4893F50", VA = "0x4893F50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FC")]
	public Color[] subdivisionDebugColors
	{
		[Token(Token = "0x6000922")]
		[Address(RVA = "0x4893F60", Offset = "0x4893F60", VA = "0x4893F60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FD")]
	private Mesh debugMesh
	{
		[Token(Token = "0x6000923")]
		[Address(RVA = "0x4893F70", Offset = "0x4893F70", VA = "0x4893F70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FE")]
	internal Bounds globalBounds
	{
		[Token(Token = "0x600093F")]
		[Address(RVA = "0x489E8C0", Offset = "0x489E8C0", VA = "0x489E8C0")]
		get
		{
			return default(Bounds);
		}
		[Token(Token = "0x6000940")]
		[Address(RVA = "0x489E8E0", Offset = "0x489E8E0", VA = "0x489E8E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000FF")]
	public bool isInitialized
	{
		[Token(Token = "0x6000941")]
		[Address(RVA = "0x489E900", Offset = "0x489E900", VA = "0x489E900")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000100")]
	internal bool enabledBySRP
	{
		[Token(Token = "0x6000942")]
		[Address(RVA = "0x489E910", Offset = "0x489E910", VA = "0x489E910")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000101")]
	internal bool hasUnloadedCells
	{
		[Token(Token = "0x6000943")]
		[Address(RVA = "0x489E920", Offset = "0x489E920", VA = "0x489E920")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000102")]
	internal bool supportLightingScenarios
	{
		[Token(Token = "0x6000944")]
		[Address(RVA = "0x489E960", Offset = "0x489E960", VA = "0x489E960")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000103")]
	internal bool enableScenarioBlending
	{
		[Token(Token = "0x6000945")]
		[Address(RVA = "0x489DDC0", Offset = "0x489DDC0", VA = "0x489DDC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000104")]
	internal int numberOfCellsLoadedPerFrame
	{
		[Token(Token = "0x6000946")]
		[Address(RVA = "0x489E970", Offset = "0x489E970", VA = "0x489E970")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000105")]
	public int numberOfCellsBlendedPerFrame
	{
		[Token(Token = "0x6000947")]
		[Address(RVA = "0x489E980", Offset = "0x489E980", VA = "0x489E980")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000948")]
		[Address(RVA = "0x489E990", Offset = "0x489E990", VA = "0x489E990")]
		set
		{
		}
	}

	[Token(Token = "0x17000106")]
	public float turnoverRate
	{
		[Token(Token = "0x6000949")]
		[Address(RVA = "0x489E9B0", Offset = "0x489E9B0", VA = "0x489E9B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600094A")]
		[Address(RVA = "0x489E9C0", Offset = "0x489E9C0", VA = "0x489E9C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000107")]
	public ProbeVolumeSHBands shBands
	{
		[Token(Token = "0x600094B")]
		[Address(RVA = "0x489E9E0", Offset = "0x489E9E0", VA = "0x489E9E0")]
		get
		{
			return default(ProbeVolumeSHBands);
		}
	}

	[Token(Token = "0x17000108")]
	public string lightingScenario
	{
		[Token(Token = "0x600094C")]
		[Address(RVA = "0x489E9F0", Offset = "0x489E9F0", VA = "0x489E9F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600094D")]
		[Address(RVA = "0x489EA10", Offset = "0x489EA10", VA = "0x489EA10")]
		set
		{
		}
	}

	[Token(Token = "0x17000109")]
	public float scenarioBlendingFactor
	{
		[Token(Token = "0x600094E")]
		[Address(RVA = "0x489BB50", Offset = "0x489BB50", VA = "0x489BB50")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600094F")]
		[Address(RVA = "0x489EA30", Offset = "0x489EA30", VA = "0x489EA30")]
		set
		{
		}
	}

	[Token(Token = "0x1700010A")]
	public ProbeVolumeTextureMemoryBudget memoryBudget
	{
		[Token(Token = "0x6000951")]
		[Address(RVA = "0x489EA70", Offset = "0x489EA70", VA = "0x489EA70")]
		get
		{
			return default(ProbeVolumeTextureMemoryBudget);
		}
	}

	[Token(Token = "0x1700010B")]
	public float probeVolumesWeight
	{
		[Token(Token = "0x6000952")]
		[Address(RVA = "0x489EA80", Offset = "0x489EA80", VA = "0x489EA80")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000953")]
		[Address(RVA = "0x489EA90", Offset = "0x489EA90", VA = "0x489EA90")]
		set
		{
		}
	}

	[Token(Token = "0x1700010C")]
	internal List<ProbeVolumePerSceneData> perSceneDataList
	{
		[Token(Token = "0x6000954")]
		[Address(RVA = "0x489EAB0", Offset = "0x489EAB0", VA = "0x489EAB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000955")]
		[Address(RVA = "0x489EAC0", Offset = "0x489EAC0", VA = "0x489EAC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700010D")]
	internal float indexFragmentationRate
	{
		[Token(Token = "0x6000958")]
		[Address(RVA = "0x489EC10", Offset = "0x489EC10", VA = "0x489EC10")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700010E")]
	public static ProbeReferenceVolume instance
	{
		[Token(Token = "0x6000959")]
		[Address(RVA = "0x489EC30", Offset = "0x489EC30", VA = "0x489EC30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000924")]
	[Address(RVA = "0x48940C0", Offset = "0x48940C0", VA = "0x48940C0")]
	public void RenderDebug(Camera camera)
	{
	}

	[Token(Token = "0x6000925")]
	[Address(RVA = "0x4895580", Offset = "0x4895580", VA = "0x4895580")]
	private void InitializeDebug(in ProbeVolumeSystemParameters parameters)
	{
	}

	[Token(Token = "0x6000926")]
	[Address(RVA = "0x48998B0", Offset = "0x48998B0", VA = "0x48998B0")]
	private void CleanupDebug()
	{
	}

	[Token(Token = "0x6000927")]
	private void DebugCellIndexChanged<T>(DebugUI.Field<T> field, T value)
	{
	}

	[Token(Token = "0x6000928")]
	[Address(RVA = "0x4895A50", Offset = "0x4895A50", VA = "0x4895A50")]
	private void RegisterDebug(ProbeVolumeSystemParameters parameters)
	{
	}

	[Token(Token = "0x6000929")]
	[Address(RVA = "0x48999B0", Offset = "0x48999B0", VA = "0x48999B0")]
	private void UnregisterDebug(bool destroyPanel)
	{
	}

	[Token(Token = "0x600092A")]
	[Address(RVA = "0x4899AA0", Offset = "0x4899AA0", VA = "0x4899AA0")]
	public void RenderFragmentationOverlay(RenderGraph renderGraph, TextureHandle colorBuffer, TextureHandle depthBuffer, DebugOverlay debugOverlay)
	{
	}

	[Token(Token = "0x600092B")]
	[Address(RVA = "0x4899EA0", Offset = "0x4899EA0", VA = "0x4899EA0")]
	private bool ShouldCullCell(Vector3 cellPosition, Transform cameraTransform, Plane[] frustumPlanes)
	{
		return default(bool);
	}

	[Token(Token = "0x600092C")]
	[Address(RVA = "0x4894110", Offset = "0x4894110", VA = "0x4894110")]
	private void DrawProbeDebug(Camera camera)
	{
	}

	[Token(Token = "0x600092D")]
	[Address(RVA = "0x489B3D0", Offset = "0x489B3D0", VA = "0x489B3D0")]
	internal void ResetDebugViewToMaxSubdiv()
	{
	}

	[Token(Token = "0x600092E")]
	[Address(RVA = "0x489B4A0", Offset = "0x489B4A0", VA = "0x489B4A0")]
	private void ClearDebugData()
	{
	}

	[Token(Token = "0x600092F")]
	[Address(RVA = "0x489A2E0", Offset = "0x489A2E0", VA = "0x489A2E0")]
	private CellInstancedDebugProbes CreateInstancedProbes(CellInfo cellInfo)
	{
		return null;
	}

	[Token(Token = "0x6000930")]
	[Address(RVA = "0x489B4F0", Offset = "0x489B4F0", VA = "0x489B4F0")]
	private void OnClearLightingdata()
	{
	}

	[Token(Token = "0x6000931")]
	[Address(RVA = "0x489B540", Offset = "0x489B540", VA = "0x489B540")]
	internal void ScenarioBlendingChanged(bool scenarioChanged)
	{
	}

	[Token(Token = "0x6000932")]
	[Address(RVA = "0x489B6B0", Offset = "0x489B6B0", VA = "0x489B6B0")]
	public void SetNumberOfCellsLoadedPerFrame(int numberOfCells)
	{
	}

	[Token(Token = "0x6000933")]
	[Address(RVA = "0x489B6D0", Offset = "0x489B6D0", VA = "0x489B6D0")]
	private void ComputeStreamingScore(Vector3 cameraPosition, Vector3 cameraDirection, DynamicArray<CellInfo> cells)
	{
	}

	[Token(Token = "0x6000934")]
	[Address(RVA = "0x489BA50", Offset = "0x489BA50", VA = "0x489BA50")]
	private void ComputeStreamingScoreForBlending(DynamicArray<BlendingCellInfo> cells, float worstScore)
	{
	}

	[Token(Token = "0x6000935")]
	[Address(RVA = "0x489BB70", Offset = "0x489BB70", VA = "0x489BB70")]
	private bool TryLoadCell(CellInfo cellInfo, ref int shBudget, ref int indexBudget, DynamicArray<CellInfo> loadedCells)
	{
		return default(bool);
	}

	[Token(Token = "0x6000936")]
	[Address(RVA = "0x489C0F0", Offset = "0x489C0F0", VA = "0x489C0F0")]
	private void UnloadBlendingCell(BlendingCellInfo blendingCell, DynamicArray<BlendingCellInfo> unloadedCells)
	{
	}

	[Token(Token = "0x6000937")]
	[Address(RVA = "0x489C200", Offset = "0x489C200", VA = "0x489C200")]
	private bool TryLoadBlendingCell(BlendingCellInfo blendingCell, DynamicArray<BlendingCellInfo> loadedCells)
	{
		return default(bool);
	}

	[Token(Token = "0x6000938")]
	[Address(RVA = "0x489C860", Offset = "0x489C860", VA = "0x489C860")]
	private void ComputeMinMaxStreamingScore()
	{
	}

	[Token(Token = "0x6000939")]
	[Address(RVA = "0x489C9E0", Offset = "0x489C9E0", VA = "0x489C9E0")]
	public void UpdateCellStreaming(CommandBuffer cmd, Camera camera)
	{
	}

	[Token(Token = "0x600093A")]
	[Address(RVA = "0x489E640", Offset = "0x489E640", VA = "0x489E640")]
	private int FindWorstBlendingCellToBeLoaded()
	{
		return default(int);
	}

	[Token(Token = "0x600093B")]
	[Address(RVA = "0x489DE90", Offset = "0x489DE90", VA = "0x489DE90")]
	private void UpdateBlendingCellStreaming(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x489E780", Offset = "0x489E780", VA = "0x489E780")]
	private static int DefragComparer(CellInfo a, CellInfo b)
	{
		return default(int);
	}

	[Token(Token = "0x600093D")]
	[Address(RVA = "0x489DCC0", Offset = "0x489DCC0", VA = "0x489DCC0")]
	private void StartIndexDefragmentation()
	{
	}

	[Token(Token = "0x600093E")]
	[Address(RVA = "0x489D490", Offset = "0x489D490", VA = "0x489D490")]
	private void UpdateIndexDefragmentation()
	{
	}

	[Token(Token = "0x6000950")]
	[Address(RVA = "0x489EA50", Offset = "0x489EA50", VA = "0x489EA50")]
	public void BlendLightingScenario(string otherScenario, float blendingFactor)
	{
	}

	[Token(Token = "0x6000956")]
	[Address(RVA = "0x489EAE0", Offset = "0x489EAE0", VA = "0x489EAE0")]
	internal void RegisterPerSceneData(ProbeVolumePerSceneData data)
	{
	}

	[Token(Token = "0x6000957")]
	[Address(RVA = "0x489EBC0", Offset = "0x489EBC0", VA = "0x489EBC0")]
	internal void UnregisterPerSceneData(ProbeVolumePerSceneData data)
	{
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x489ECA0", Offset = "0x489ECA0", VA = "0x489ECA0")]
	public void Initialize(in ProbeVolumeSystemParameters parameters)
	{
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x489F240", Offset = "0x489F240", VA = "0x489F240")]
	public void SetEnableStateFromSRP(bool srpEnablesPV)
	{
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x489F250", Offset = "0x489F250", VA = "0x489F250")]
	internal void ForceSHBand(ProbeVolumeSHBands shBands)
	{
	}

	[Token(Token = "0x600095D")]
	[Address(RVA = "0x489F540", Offset = "0x489F540", VA = "0x489F540")]
	public void Cleanup()
	{
	}

	[Token(Token = "0x600095E")]
	[Address(RVA = "0x489F5D0", Offset = "0x489F5D0", VA = "0x489F5D0")]
	public int GetVideoMemoryCost()
	{
		return default(int);
	}

	[Token(Token = "0x600095F")]
	[Address(RVA = "0x489F640", Offset = "0x489F640", VA = "0x489F640")]
	private void RemoveCell(Cell cell)
	{
	}

	[Token(Token = "0x6000960")]
	[Address(RVA = "0x489D830", Offset = "0x489D830", VA = "0x489D830")]
	internal void UnloadCell(CellInfo cellInfo)
	{
	}

	[Token(Token = "0x6000961")]
	[Address(RVA = "0x489C160", Offset = "0x489C160", VA = "0x489C160")]
	internal void UnloadBlendingCell(BlendingCellInfo blendingCell)
	{
	}

	[Token(Token = "0x6000962")]
	[Address(RVA = "0x489F8B0", Offset = "0x489F8B0", VA = "0x489F8B0")]
	internal void UnloadAllCells()
	{
	}

	[Token(Token = "0x6000963")]
	[Address(RVA = "0x489B5E0", Offset = "0x489B5E0", VA = "0x489B5E0")]
	internal void UnloadAllBlendingCells()
	{
	}

	[Token(Token = "0x6000964")]
	[Address(RVA = "0x489F980", Offset = "0x489F980", VA = "0x489F980")]
	private void AddCell(Cell cell, int assetInstanceID)
	{
	}

	[Token(Token = "0x6000965")]
	[Address(RVA = "0x489BC40", Offset = "0x489BC40", VA = "0x489BC40")]
	internal bool LoadCell(CellInfo cellInfo, bool ignoreErrorLog = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000966")]
	[Address(RVA = "0x48A08E0", Offset = "0x48A08E0", VA = "0x48A08E0")]
	internal void LoadAllCells()
	{
	}

	[Token(Token = "0x6000967")]
	[Address(RVA = "0x489DA00", Offset = "0x489DA00", VA = "0x489DA00")]
	private void RecomputeMinMaxLoadedCellPos()
	{
	}

	[Token(Token = "0x6000968")]
	[Address(RVA = "0x48A0A40", Offset = "0x48A0A40", VA = "0x48A0A40")]
	private bool CheckCompatibilityWithCollection(ProbeVolumeAsset asset, Dictionary<string, ProbeVolumeAsset> collection)
	{
		return default(bool);
	}

	[Token(Token = "0x6000969")]
	[Address(RVA = "0x48A0C70", Offset = "0x48A0C70", VA = "0x48A0C70")]
	internal void AddPendingAssetLoading(ProbeVolumeAsset asset)
	{
	}

	[Token(Token = "0x600096A")]
	[Address(RVA = "0x48A15A0", Offset = "0x48A15A0", VA = "0x48A15A0")]
	internal void AddPendingAssetRemoval(ProbeVolumeAsset asset)
	{
	}

	[Token(Token = "0x600096B")]
	[Address(RVA = "0x48A1690", Offset = "0x48A1690", VA = "0x48A1690")]
	internal void RemovePendingAsset(ProbeVolumeAsset asset)
	{
	}

	[Token(Token = "0x600096C")]
	[Address(RVA = "0x48A1990", Offset = "0x48A1990", VA = "0x48A1990")]
	private void PerformPendingIndexChangeAndInit()
	{
	}

	[Token(Token = "0x600096D")]
	[Address(RVA = "0x48A19E0", Offset = "0x48A19E0", VA = "0x48A19E0")]
	internal void SetMinBrickAndMaxSubdiv(float minBrickSize, int maxSubdiv)
	{
	}

	[Token(Token = "0x600096E")]
	[Address(RVA = "0x48A1C40", Offset = "0x48A1C40", VA = "0x48A1C40")]
	private void LoadAsset(ProbeVolumeAsset asset)
	{
	}

	[Token(Token = "0x600096F")]
	[Address(RVA = "0x48A1E40", Offset = "0x48A1E40", VA = "0x48A1E40")]
	private void PerformPendingLoading()
	{
	}

	[Token(Token = "0x6000970")]
	[Address(RVA = "0x48A2290", Offset = "0x48A2290", VA = "0x48A2290")]
	private void PerformPendingDeletion()
	{
	}

	[Token(Token = "0x6000971")]
	[Address(RVA = "0x489FC30", Offset = "0x489FC30", VA = "0x489FC30")]
	internal int GetNumberOfBricksAtSubdiv(IndirectionEntryInfo entryInfo, ref ProbeBrickIndex.IndirectionEntryUpdateInfo indirectionEntryUpdateInfo)
	{
		return default(int);
	}

	[Token(Token = "0x6000972")]
	[Address(RVA = "0x48A2500", Offset = "0x48A2500", VA = "0x48A2500")]
	public void PerformPendingOperations()
	{
	}

	[Token(Token = "0x6000973")]
	[Address(RVA = "0x48A2560", Offset = "0x48A2560", VA = "0x48A2560")]
	internal void InitializeGlobalIndirection()
	{
	}

	[Token(Token = "0x6000974")]
	[Address(RVA = "0x489EFB0", Offset = "0x489EFB0", VA = "0x489EFB0")]
	private void InitProbeReferenceVolume(ProbeVolumeTextureMemoryBudget memoryBudget, ProbeVolumeBlendingTextureMemoryBudget blendingMemoryBudget, ProbeVolumeSHBands shBands)
	{
	}

	[Token(Token = "0x6000975")]
	[Address(RVA = "0x48A26D0", Offset = "0x48A26D0", VA = "0x48A26D0")]
	private ProbeReferenceVolume()
	{
	}

	[Token(Token = "0x6000976")]
	[Address(RVA = "0x48A2FD0", Offset = "0x48A2FD0", VA = "0x48A2FD0")]
	public RuntimeResources GetRuntimeResources()
	{
		return default(RuntimeResources);
	}

	[Token(Token = "0x6000977")]
	[Address(RVA = "0x48A1AA0", Offset = "0x48A1AA0", VA = "0x48A1AA0")]
	internal void SetTRS(Vector3 position, Quaternion rotation, float minBrickSize)
	{
	}

	[Token(Token = "0x6000978")]
	[Address(RVA = "0x48A1AD0", Offset = "0x48A1AD0", VA = "0x48A1AD0")]
	internal void SetMaxSubdivision(int maxSubdivision)
	{
	}

	[Token(Token = "0x6000979")]
	[Address(RVA = "0x488C6C0", Offset = "0x488C6C0", VA = "0x488C6C0")]
	internal static int CellSize(int subdivisionLevel)
	{
		return default(int);
	}

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x48A30F0", Offset = "0x48A30F0", VA = "0x48A30F0")]
	internal float BrickSize(int subdivisionLevel)
	{
		return default(float);
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x48A24F0", Offset = "0x48A24F0", VA = "0x48A24F0")]
	internal float MinBrickSize()
	{
		return default(float);
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x489A260", Offset = "0x489A260", VA = "0x489A260")]
	internal float MaxBrickSize()
	{
		return default(float);
	}

	[Token(Token = "0x600097D")]
	[Address(RVA = "0x48A3170", Offset = "0x48A3170", VA = "0x48A3170")]
	internal RefVolTransform GetTransform()
	{
		return default(RefVolTransform);
	}

	[Token(Token = "0x600097E")]
	[Address(RVA = "0x48A3190", Offset = "0x48A3190", VA = "0x48A3190")]
	internal int GetMaxSubdivision()
	{
		return default(int);
	}

	[Token(Token = "0x600097F")]
	[Address(RVA = "0x48A31A0", Offset = "0x48A31A0", VA = "0x48A31A0")]
	internal int GetMaxSubdivision(float multiplier)
	{
		return default(int);
	}

	[Token(Token = "0x6000980")]
	[Address(RVA = "0x48A3210", Offset = "0x48A3210", VA = "0x48A3210")]
	internal float GetDistanceBetweenProbes(int subdivisionLevel)
	{
		return default(float);
	}

	[Token(Token = "0x6000981")]
	[Address(RVA = "0x48A3290", Offset = "0x48A3290", VA = "0x48A3290")]
	internal float MinDistanceBetweenProbes()
	{
		return default(float);
	}

	[Token(Token = "0x6000982")]
	[Address(RVA = "0x48A3300", Offset = "0x48A3300", VA = "0x48A3300")]
	internal int GetGlobalIndirectionEntryMaxSubdiv()
	{
		return default(int);
	}

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x488F350", Offset = "0x488F350", VA = "0x488F350")]
	internal int GetEntrySubdivLevel()
	{
		return default(int);
	}

	[Token(Token = "0x6000984")]
	[Address(RVA = "0x48A2460", Offset = "0x48A2460", VA = "0x48A2460")]
	internal float GetEntrySize()
	{
		return default(float);
	}

	[Token(Token = "0x6000985")]
	[Address(RVA = "0x48A3310", Offset = "0x48A3310", VA = "0x48A3310")]
	public bool DataHasBeenLoaded()
	{
		return default(bool);
	}

	[Token(Token = "0x6000986")]
	[Address(RVA = "0x48A3350", Offset = "0x48A3350", VA = "0x48A3350")]
	internal void Clear()
	{
	}

	[Token(Token = "0x6000987")]
	[Address(RVA = "0x48A34C0", Offset = "0x48A34C0", VA = "0x48A34C0")]
	private List<ProbeBrickPool.BrickChunkAlloc> GetSourceLocations(int count, int chunkSize, ProbeBrickPool.DataLocation dataLoc)
	{
		return null;
	}

	[Token(Token = "0x6000988")]
	[Address(RVA = "0x48A3690", Offset = "0x48A3690", VA = "0x48A3690")]
	private void UpdatePool(List<ProbeBrickPool.BrickChunkAlloc> chunkList, Cell.PerScenarioData data, NativeArray<byte> validityNeighMaskData, int chunkIndex, int poolIndex)
	{
	}

	[Token(Token = "0x6000989")]
	[Address(RVA = "0x48A3E20", Offset = "0x48A3E20", VA = "0x48A3E20")]
	private void UpdatePoolValidity(List<ProbeBrickPool.BrickChunkAlloc> chunkList, Cell.PerScenarioData data, NativeArray<byte> validityNeighMaskData, int chunkIndex)
	{
	}

	[Token(Token = "0x600098A")]
	[Address(RVA = "0x489C280", Offset = "0x489C280", VA = "0x489C280")]
	private bool AddBlendingBricks(BlendingCellInfo blendingCell)
	{
		return default(bool);
	}

	[Token(Token = "0x600098B")]
	[Address(RVA = "0x489FBB0", Offset = "0x489FBB0", VA = "0x489FBB0")]
	private bool ReservePoolChunks(int brickCount, List<ProbeBrickPool.BrickChunkAlloc> chunkList, bool ignoreErrorLog)
	{
		return default(bool);
	}

	[Token(Token = "0x600098C")]
	[Address(RVA = "0x48A0880", Offset = "0x48A0880", VA = "0x48A0880")]
	private void ReleasePoolChunks(List<ProbeBrickPool.BrickChunkAlloc> chunkList)
	{
	}

	[Token(Token = "0x600098D")]
	[Address(RVA = "0x48A04F0", Offset = "0x48A04F0", VA = "0x48A04F0")]
	private bool AddBricks(CellInfo cellInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x600098E")]
	[Address(RVA = "0x48A4010", Offset = "0x48A4010", VA = "0x48A4010")]
	private void UpdateCellIndex(CellInfo cellInfo)
	{
	}

	[Token(Token = "0x600098F")]
	[Address(RVA = "0x489F7D0", Offset = "0x489F7D0", VA = "0x489F7D0")]
	private void ReleaseBricks(CellInfo cellInfo)
	{
	}

	[Token(Token = "0x6000990")]
	[Address(RVA = "0x48A40B0", Offset = "0x48A40B0", VA = "0x48A40B0")]
	public void UpdateConstantBuffer(CommandBuffer cmd, ProbeVolumeShadingParameters parameters)
	{
	}

	[Token(Token = "0x6000991")]
	[Address(RVA = "0x489F2B0", Offset = "0x489F2B0", VA = "0x489F2B0")]
	private void DeinitProbeReferenceVolume()
	{
	}

	[Token(Token = "0x6000992")]
	[Address(RVA = "0x489F2A0", Offset = "0x489F2A0", VA = "0x489F2A0")]
	private void CleanupLoadedData()
	{
	}
}
