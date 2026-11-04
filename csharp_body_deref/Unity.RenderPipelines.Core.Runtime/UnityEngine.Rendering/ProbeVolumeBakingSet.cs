// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumeBakingSet
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.IO.LowLevel.Unsafe;
using Unity.Mathematics;
using UnityEngine.Serialization;

namespace UnityEngine.Rendering;

[Token(Token = "0x200012C")]
public sealed class ProbeVolumeBakingSet : ScriptableObject, ISerializationCallbackReceiver
{
	[Token(Token = "0x200012D")]
	internal enum Version
	{
		[Token(Token = "0x40005C6")]
		Initial,
		[Token(Token = "0x40005C7")]
		RemoveProbeVolumeSceneData,
		[Token(Token = "0x40005C8")]
		AssetsAlwaysReferenced
	}

	[Serializable]
	[Token(Token = "0x200012E")]
	internal class PerScenarioDataInfo
	{
		[Token(Token = "0x40005C9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public int sceneHash;

		[Token(Token = "0x40005CA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public ProbeVolumeStreamableAsset cellDataAsset;

		[Token(Token = "0x40005CB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public ProbeVolumeStreamableAsset cellOptionalDataAsset;

		[Token(Token = "0x40005CC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public ProbeVolumeStreamableAsset cellProbeOcclusionDataAsset;

		[Token(Token = "0x40005CD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private bool m_HasValidData;

		[Token(Token = "0x6000A8E")]
		[Address(RVA = "0x2B0C230", Offset = "0x2B0A830", VA = "0x182B0C230")]
		public void Initialize(ProbeVolumeSHBands shBands)
		{
		}

		[Token(Token = "0x6000A8F")]
		[Address(RVA = "0x2B0C2A0", Offset = "0x2B0A8A0", VA = "0x182B0C2A0")]
		public bool IsValid()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A90")]
		[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00")]
		public bool HasValidData(ProbeVolumeSHBands shBands)
		{
			return default(bool);
		}

		[Token(Token = "0x6000A91")]
		[Address(RVA = "0x2B0C1C0", Offset = "0x2B0A7C0", VA = "0x182B0C1C0")]
		public bool ComputeHasValidData(ProbeVolumeSHBands shBands)
		{
			return default(bool);
		}

		[Token(Token = "0x6000A92")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public PerScenarioDataInfo()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200012F")]
	internal struct CellCounts
	{
		[Token(Token = "0x40005CE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int bricksCount;

		[Token(Token = "0x40005CF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		public int chunksCount;

		[Token(Token = "0x6000A93")]
		[Address(RVA = "0x2B08DF0", Offset = "0x2B073F0", VA = "0x182B08DF0")]
		public void Add(CellCounts o)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000130")]
	private struct SerializedPerSceneCellList
	{
		[Token(Token = "0x40005D0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public string sceneGUID;

		[Token(Token = "0x40005D1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public List<int> cellList;
	}

	[Serializable]
	[Token(Token = "0x2000131")]
	internal struct ProbeLayerMask
	{
		[Token(Token = "0x40005D2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public RenderingLayerMask mask;

		[Token(Token = "0x40005D3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public string name;
	}

	[Token(Token = "0x4000580")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[SerializeField]
	internal bool singleSceneMode;

	[Token(Token = "0x4000581")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x19")]
	[SerializeField]
	internal bool dialogNoProbeVolumeInSetShown;

	[Token(Token = "0x4000582")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	[SerializeField]
	internal ProbeVolumeBakingProcessSettings settings;

	[Token(Token = "0x4000583")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	[SerializeField]
	private List<string> m_SceneGUIDs;

	[Token(Token = "0x4000584")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	[SerializeField]
	[Obsolete("This is now contained in the SceneBakeData structure. #from(2023.3)")]
	[FormerlySerializedAs("scenesToNotBake")]
	internal List<string> obsoleteScenesToNotBake;

	[Token(Token = "0x4000585")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	[SerializeField]
	[FormerlySerializedAs("lightingScenarios")]
	internal List<string> m_LightingScenarios;

	[Token(Token = "0x4000586")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	[SerializeField]
	internal SerializedDictionary<int, ProbeReferenceVolume.CellDesc> cellDescs;

	[Token(Token = "0x4000587")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	internal Dictionary<int, ProbeReferenceVolume.CellData> cellDataMap;

	[Token(Token = "0x4000588")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private List<int> m_TotalIndexList;

	[Token(Token = "0x4000589")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	[SerializeField]
	private List<SerializedPerSceneCellList> m_SerializedPerSceneCellList;

	[Token(Token = "0x400058A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	internal Dictionary<string, List<int>> perSceneCellLists;

	[Token(Token = "0x400058B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	[SerializeField]
	internal ProbeVolumeStreamableAsset cellSharedDataAsset;

	[Token(Token = "0x400058C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	[SerializeField]
	internal SerializedDictionary<string, PerScenarioDataInfo> scenarios;

	[Token(Token = "0x400058D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	[SerializeField]
	internal ProbeVolumeStreamableAsset cellBricksDataAsset;

	[Token(Token = "0x400058E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	[SerializeField]
	internal ProbeVolumeStreamableAsset cellSupportDataAsset;

	[Token(Token = "0x400058F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	[SerializeField]
	internal int chunkSizeInBricks;

	[Token(Token = "0x4000590")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB4")]
	[SerializeField]
	internal Vector3Int maxCellPosition;

	[Token(Token = "0x4000591")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	[SerializeField]
	internal Vector3Int minCellPosition;

	[Token(Token = "0x4000592")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCC")]
	[SerializeField]
	internal Bounds globalBounds;

	[Token(Token = "0x4000593")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE4")]
	[SerializeField]
	internal int bakedSimplificationLevels;

	[Token(Token = "0x4000594")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	[SerializeField]
	internal float bakedMinDistanceBetweenProbes;

	[Token(Token = "0x4000595")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xEC")]
	[SerializeField]
	internal bool bakedProbeOcclusion;

	[Token(Token = "0x4000596")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	[SerializeField]
	internal int bakedSkyOcclusionValue;

	[Token(Token = "0x4000597")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF4")]
	[SerializeField]
	internal int bakedSkyShadingDirectionValue;

	[Token(Token = "0x4000598")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	[SerializeField]
	internal Vector3 bakedProbeOffset;

	[Token(Token = "0x4000599")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x104")]
	[SerializeField]
	internal int bakedMaskCount;

	[Token(Token = "0x400059A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	[SerializeField]
	internal uint4 bakedLayerMasks;

	[Token(Token = "0x400059B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	[SerializeField]
	internal int maxSHChunkCount;

	[Token(Token = "0x400059C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x11C")]
	[SerializeField]
	internal int L0ChunkSize;

	[Token(Token = "0x400059D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	[SerializeField]
	internal int L1ChunkSize;

	[Token(Token = "0x400059E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x124")]
	[SerializeField]
	internal int L2TextureChunkSize;

	[Token(Token = "0x400059F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	[SerializeField]
	internal int ProbeOcclusionChunkSize;

	[Token(Token = "0x40005A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x12C")]
	[SerializeField]
	internal int sharedValidityMaskChunkSize;

	[Token(Token = "0x40005A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	[SerializeField]
	internal int sharedSkyOcclusionL0L1ChunkSize;

	[Token(Token = "0x40005A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x134")]
	[SerializeField]
	internal int sharedSkyShadingDirectionIndicesChunkSize;

	[Token(Token = "0x40005A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	[SerializeField]
	internal int sharedDataChunkSize;

	[Token(Token = "0x40005A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x13C")]
	[SerializeField]
	internal int supportPositionChunkSize;

	[Token(Token = "0x40005A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	[SerializeField]
	internal int supportValidityChunkSize;

	[Token(Token = "0x40005A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x144")]
	[SerializeField]
	internal int supportTouchupChunkSize;

	[Token(Token = "0x40005A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	[SerializeField]
	internal int supportLayerMaskChunkSize;

	[Token(Token = "0x40005A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14C")]
	[SerializeField]
	internal int supportOffsetsChunkSize;

	[Token(Token = "0x40005A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	[SerializeField]
	internal int supportDataChunkSize;

	[Token(Token = "0x40005AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	[SerializeField]
	internal string lightingScenario;

	[Token(Token = "0x40005AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private string m_OtherScenario;

	[Token(Token = "0x40005AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private float m_ScenarioBlendingFactor;

	[Token(Token = "0x40005AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private ReadCommandArray m_ReadCommandArray;

	[Token(Token = "0x40005AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private NativeArray<ReadCommand> m_ReadCommandBuffer;

	[Token(Token = "0x40005AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private Stack<NativeArray<byte>> m_ReadOperationScratchBuffers;

	[Token(Token = "0x40005B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	private List<int> m_PrunedIndexList;

	[Token(Token = "0x40005B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	private List<int> m_PrunedScenarioIndexList;

	[Token(Token = "0x40005B2")]
	internal const int k_MaxSkyOcclusionBakingSamples = 8192;

	[Token(Token = "0x40005B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A8")]
	[SerializeField]
	private Version version;

	[Token(Token = "0x40005B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1AC")]
	[SerializeField]
	internal bool freezePlacement;

	[Token(Token = "0x40005B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B0")]
	[SerializeField]
	public Vector3 probeOffset;

	[Token(Token = "0x40005B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1BC")]
	[Range(2f, 5f)]
	public int simplificationLevels;

	[Token(Token = "0x40005B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C0")]
	[Min(0.1f)]
	public float minDistanceBetweenProbes;

	[Token(Token = "0x40005B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C4")]
	public LayerMask renderersLayerMask;

	[Token(Token = "0x40005B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C8")]
	[Min(0f)]
	public float minRendererVolumeSize;

	[Token(Token = "0x40005BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1CC")]
	public bool skyOcclusion;

	[Token(Token = "0x40005BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D0")]
	[Logarithmic(1, 8192)]
	public int skyOcclusionBakingSamples;

	[Token(Token = "0x40005BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D4")]
	[Range(0f, 5f)]
	public int skyOcclusionBakingBounces;

	[Token(Token = "0x40005BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D8")]
	[Range(0f, 1f)]
	public float skyOcclusionAverageAlbedo;

	[Token(Token = "0x40005BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1DC")]
	public bool skyOcclusionBackFaceCulling;

	[Token(Token = "0x40005BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1DD")]
	public bool skyOcclusionShadingDirection;

	[Token(Token = "0x40005C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1DE")]
	[SerializeField]
	internal bool useRenderingLayers;

	[Token(Token = "0x40005C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E0")]
	[SerializeField]
	internal ProbeLayerMask[] renderingLayerMasks;

	[Token(Token = "0x40005C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E8")]
	private bool m_HasSupportData;

	[Token(Token = "0x40005C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E9")]
	private bool m_SharedDataIsValid;

	[Token(Token = "0x40005C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1EA")]
	private bool m_UseStreamingAsset;

	[Token(Token = "0x1700012B")]
	internal bool hasDilation
	{
		[Token(Token = "0x6000A58")]
		[Address(RVA = "0x2B186E0", Offset = "0x2B16CE0", VA = "0x182B186E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700012C")]
	public IReadOnlyList<string> sceneGUIDs
	{
		[Token(Token = "0x6000A59")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012D")]
	public IReadOnlyList<string> lightingScenarios
	{
		[Token(Token = "0x6000A5A")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012E")]
	internal bool bakedSkyOcclusion
	{
		[Token(Token = "0x6000A5B")]
		[Address(RVA = "0x2B18630", Offset = "0x2B16C30", VA = "0x182B18630")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A5C")]
		[Address(RVA = "0x2B18740", Offset = "0x2B16D40", VA = "0x182B18740")]
		set
		{
		}
	}

	[Token(Token = "0x1700012F")]
	internal bool bakedSkyShadingDirection
	{
		[Token(Token = "0x6000A5D")]
		[Address(RVA = "0x2B18640", Offset = "0x2B16C40", VA = "0x182B18640")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A5E")]
		[Address(RVA = "0x2B18760", Offset = "0x2B16D60", VA = "0x182B18760")]
		set
		{
		}
	}

	[Token(Token = "0x17000130")]
	internal string otherScenario
	{
		[Token(Token = "0x6000A5F")]
		[Address(RVA = "0x2602AD0", Offset = "0x26010D0", VA = "0x182602AD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000131")]
	internal float scenarioBlendingFactor
	{
		[Token(Token = "0x6000A60")]
		[Address(RVA = "0x2B18730", Offset = "0x2B16D30", VA = "0x182B18730")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000132")]
	public int cellSizeInBricks
	{
		[Token(Token = "0x6000A61")]
		[Address(RVA = "0x2B18650", Offset = "0x2B16C50", VA = "0x182B18650")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000133")]
	public int maxSubdivision
	{
		[Token(Token = "0x6000A62")]
		[Address(RVA = "0x2B18700", Offset = "0x2B16D00", VA = "0x182B18700")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000134")]
	public float minBrickSize
	{
		[Token(Token = "0x6000A63")]
		[Address(RVA = "0x2B18710", Offset = "0x2B16D10", VA = "0x182B18710")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000135")]
	public float cellSizeInMeters
	{
		[Token(Token = "0x6000A64")]
		[Address(RVA = "0x2B18680", Offset = "0x2B16C80", VA = "0x182B18680")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x2B14520", Offset = "0x2B12B20", VA = "0x182B14520")]
	internal uint4 ComputeRegionMasks()
	{
		return default(uint4);
	}

	[Token(Token = "0x6000A66")]
	[Address(RVA = "0x2B14940", Offset = "0x2B12F40", VA = "0x182B14940")]
	internal static int GetCellSizeInBricks(int simplificationLevels)
	{
		return default(int);
	}

	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x2B149B0", Offset = "0x2B12FB0", VA = "0x182B149B0")]
	internal static int GetMaxSubdivision(int simplificationLevels)
	{
		return default(int);
	}

	[Token(Token = "0x6000A68")]
	[Address(RVA = "0x2B149C0", Offset = "0x2B12FC0", VA = "0x182B149C0")]
	internal static float GetMinBrickSize(float minDistanceBetweenProbes)
	{
		return default(float);
	}

	[Token(Token = "0x6000A69")]
	[Address(RVA = "0x2B15560", Offset = "0x2B13B60", VA = "0x182B15560")]
	private void OnValidate()
	{
	}

	[Token(Token = "0x6000A6A")]
	[Address(RVA = "0x2B153B0", Offset = "0x2B139B0", VA = "0x182B153B0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x2B15280", Offset = "0x2B13880", VA = "0x182B15280")]
	internal void Migrate()
	{
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x2B144D0", Offset = "0x2B12AD0", VA = "0x182B144D0")]
	private bool ComputeHasValidSharedData()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x2B14DE0", Offset = "0x2B133E0", VA = "0x182B14DE0")]
	internal bool HasValidSharedData()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x2B14090", Offset = "0x2B12690", VA = "0x182B14090")]
	internal bool CheckCompatibleCellLayout()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x2B14480", Offset = "0x2B12A80", VA = "0x182B14480")]
	private bool ComputeHasSupportData()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x2B14DD0", Offset = "0x2B133D0", VA = "0x182B14DD0")]
	internal bool HasSupportData()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A71")]
	[Address(RVA = "0x2B14A60", Offset = "0x2B13060", VA = "0x182B14A60")]
	public bool HasBakedData([Optional] string scenario)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A72")]
	[Address(RVA = "0x2B17AA0", Offset = "0x2B160A0", VA = "0x182B17AA0", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000A73")]
	[Address(RVA = "0x2B17F30", Offset = "0x2B16530", VA = "0x182B17F30", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000A74")]
	[Address(RVA = "0x2B14DF0", Offset = "0x2B133F0", VA = "0x182B14DF0")]
	internal void Initialize(bool useStreamingAsset)
	{
	}

	[Token(Token = "0x6000A75")]
	[Address(RVA = "0x2B14110", Offset = "0x2B12710", VA = "0x182B14110")]
	internal void Cleanup()
	{
	}

	[Token(Token = "0x6000A76")]
	[Address(RVA = "0x2B17820", Offset = "0x2B15E20", VA = "0x182B17820")]
	internal void SetActiveScenario(string scenario, bool verbose = true)
	{
	}

	[Token(Token = "0x6000A77")]
	[Address(RVA = "0x2B13D60", Offset = "0x2B12360", VA = "0x182B13D60")]
	internal void BlendLightingScenario(string otherScenario, float blendingFactor)
	{
	}

	[Token(Token = "0x6000A78")]
	[Address(RVA = "0x2B14680", Offset = "0x2B12C80", VA = "0x182B14680")]
	internal int GetBakingHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000A79")]
	[Address(RVA = "0x2B13D30", Offset = "0x2B12330", VA = "0x182B13D30")]
	private static int AlignUp16(int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000A7A")]
	private NativeArray<T> GetSubArray<T>(NativeArray<byte> input, int count, ref int offset) where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000A7B")]
	[Address(RVA = "0x2B15AB0", Offset = "0x2B140B0", VA = "0x182B15AB0")]
	private NativeArray<byte> RequestScratchBuffer(int size)
	{
		return default(NativeArray<byte>);
	}

	[Token(Token = "0x6000A7C")]
	[Address(RVA = "0x2B14610", Offset = "0x2B12C10", VA = "0x182B14610")]
	private bool FileExists(string path)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A7D")]
	private NativeArray<T> LoadStreambleAssetData<T>(ProbeVolumeStreamableAsset asset, List<int> cellIndices) where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000A7E")]
	private void ReleaseStreamableAssetData<T>(NativeArray<T> buffer) where T : struct
	{
	}

	[Token(Token = "0x6000A7F")]
	[Address(RVA = "0x2B15870", Offset = "0x2B13E70", VA = "0x182B15870")]
	internal void PruneCellIndexList(List<int> cellIndices, List<int> prunedIndexList)
	{
	}

	[Token(Token = "0x6000A80")]
	[Address(RVA = "0x2B156E0", Offset = "0x2B13CE0", VA = "0x182B156E0")]
	private void PruneCellIndexListForScenario(List<int> cellIndices, PerScenarioDataInfo scenarioData, List<int> prunedIndexList)
	{
	}

	[Token(Token = "0x6000A81")]
	[Address(RVA = "0x2B149E0", Offset = "0x2B12FE0", VA = "0x182B149E0")]
	internal List<int> GetSceneCellIndexList(string sceneGUID)
	{
		return null;
	}

	[Token(Token = "0x6000A82")]
	[Address(RVA = "0x2B15BF0", Offset = "0x2B141F0", VA = "0x182B15BF0")]
	private bool ResolveAllCellData()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A83")]
	[Address(RVA = "0x2B15C30", Offset = "0x2B14230", VA = "0x182B15C30")]
	internal bool ResolveCellData(List<int> cellIndices)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A84")]
	[Address(RVA = "0x2B16F80", Offset = "0x2B15580", VA = "0x182B16F80")]
	private void ResolveSharedCellData(List<int> cellIndices, NativeArray<ProbeBrickIndex.Brick> bricksData, NativeArray<byte> cellSharedData, NativeArray<byte> cellSupportData)
	{
	}

	[Token(Token = "0x6000A85")]
	[Address(RVA = "0x2B16D10", Offset = "0x2B15310", VA = "0x182B16D10")]
	internal bool ResolveSharedCellData(List<int> cellIndices)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A86")]
	[Address(RVA = "0x2B16080", Offset = "0x2B14680", VA = "0x182B16080")]
	internal bool ResolvePerScenarioCellData(List<int> cellIndices)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A87")]
	[Address(RVA = "0x2B16640", Offset = "0x2B14C40", VA = "0x182B16640")]
	internal bool ResolvePerScenarioCellData(NativeArray<byte> cellData, NativeArray<byte> cellOptionalData, NativeArray<byte> cellProbeOcclusionData, string scenario, List<int> cellIndices)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A88")]
	[Address(RVA = "0x2B15A20", Offset = "0x2B14020", VA = "0x182B15A20")]
	internal void ReleaseCell(int cellIndex)
	{
	}

	[Token(Token = "0x6000A89")]
	[Address(RVA = "0x2B148C0", Offset = "0x2B12EC0", VA = "0x182B148C0")]
	internal ProbeReferenceVolume.CellDesc GetCellDesc(int cellIndex)
	{
		return null;
	}

	[Token(Token = "0x6000A8A")]
	[Address(RVA = "0x2B14840", Offset = "0x2B12E40", VA = "0x182B14840")]
	internal ProbeReferenceVolume.CellData GetCellData(int cellIndex)
	{
		return null;
	}

	[Token(Token = "0x6000A8B")]
	[Address(RVA = "0x2B14970", Offset = "0x2B12F70", VA = "0x182B14970")]
	internal int GetChunkGPUMemory(ProbeVolumeSHBands shBands)
	{
		return default(int);
	}

	[Token(Token = "0x6000A8C")]
	[Address(RVA = "0x2B14BD0", Offset = "0x2B131D0", VA = "0x182B14BD0")]
	internal bool HasSameSceneGUIDs(ProbeVolumeBakingSet other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A8D")]
	[Address(RVA = "0x2B181A0", Offset = "0x2B167A0", VA = "0x182B181A0")]
	public ProbeVolumeBakingSet()
	{
	}
}
