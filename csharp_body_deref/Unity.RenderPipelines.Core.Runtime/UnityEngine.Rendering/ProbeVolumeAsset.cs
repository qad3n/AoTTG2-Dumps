// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumeAsset
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering;

[Token(Token = "0x200013C")]
[PreferBinarySerialization]
internal class ProbeVolumeAsset : ScriptableObject
{
	[Serializable]
	[Token(Token = "0x200013D")]
	internal enum AssetVersion
	{
		[Token(Token = "0x400056E")]
		First = 0,
		[Token(Token = "0x400056F")]
		AddProbeVolumesAtlasEncodingModes = 1,
		[Token(Token = "0x4000570")]
		PV2 = 2,
		[Token(Token = "0x4000571")]
		ChunkBasedIndex = 3,
		[Token(Token = "0x4000572")]
		BinaryRuntimeDebugSplit = 4,
		[Token(Token = "0x4000573")]
		BinaryTextureData = 5,
		[Token(Token = "0x4000574")]
		IndirectionEntries = 6,
		[Token(Token = "0x4000575")]
		Max = 7,
		[Token(Token = "0x4000576")]
		Current = 6
	}

	[Serializable]
	[Token(Token = "0x200013E")]
	internal struct CellCounts
	{
		[Token(Token = "0x4000577")]
		[FieldOffset(Offset = "0x0")]
		public int bricksCount;

		[Token(Token = "0x4000578")]
		[FieldOffset(Offset = "0x4")]
		public int probesCount;

		[Token(Token = "0x4000579")]
		[FieldOffset(Offset = "0x8")]
		public int offsetsCount;

		[Token(Token = "0x400057A")]
		[FieldOffset(Offset = "0xC")]
		public int chunksCount;

		[Token(Token = "0x6000A23")]
		[Address(RVA = "0x4BCD6D0", Offset = "0x4BCD6D0", VA = "0x4BCD6D0")]
		public void Add(CellCounts o)
		{
		}
	}

	[Token(Token = "0x4000560")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	protected internal int m_Version;

	[Token(Token = "0x4000561")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	internal ProbeReferenceVolume.Cell[] cells;

	[Token(Token = "0x4000562")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	internal CellCounts[] cellCounts;

	[Token(Token = "0x4000563")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	internal CellCounts totalCellCounts;

	[Token(Token = "0x4000564")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	internal Vector3Int maxCellPosition;

	[Token(Token = "0x4000565")]
	[FieldOffset(Offset = "0x4C")]
	[SerializeField]
	internal Vector3Int minCellPosition;

	[Token(Token = "0x4000566")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	internal Bounds globalBounds;

	[Token(Token = "0x4000567")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	internal ProbeVolumeSHBands bands;

	[Token(Token = "0x4000568")]
	[FieldOffset(Offset = "0x74")]
	[SerializeField]
	internal int chunkSizeInBricks;

	[Token(Token = "0x4000569")]
	[FieldOffset(Offset = "0x78")]
	[SerializeField]
	private string m_AssetFullPath;

	[Token(Token = "0x400056A")]
	[FieldOffset(Offset = "0x80")]
	[SerializeField]
	internal int cellSizeInBricks;

	[Token(Token = "0x400056B")]
	[FieldOffset(Offset = "0x84")]
	[SerializeField]
	internal int simplificationLevels;

	[Token(Token = "0x400056C")]
	[FieldOffset(Offset = "0x88")]
	[SerializeField]
	internal float minDistanceBetweenProbes;

	[Token(Token = "0x1700011D")]
	public int Version
	{
		[Token(Token = "0x6000A18")]
		[Address(RVA = "0x4BCD030", Offset = "0x4BCD030", VA = "0x4BCD030")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700011E")]
	internal int maxSubdivision
	{
		[Token(Token = "0x6000A19")]
		[Address(RVA = "0x4BCD040", Offset = "0x4BCD040", VA = "0x4BCD040")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700011F")]
	internal float minBrickSize
	{
		[Token(Token = "0x6000A1A")]
		[Address(RVA = "0x4BCD050", Offset = "0x4BCD050", VA = "0x4BCD050")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6000A1B")]
	[Address(RVA = "0x4BCD070", Offset = "0x4BCD070", VA = "0x4BCD070")]
	internal bool CompatibleWith(ProbeVolumeAsset otherAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A1C")]
	[Address(RVA = "0x4BCD0E0", Offset = "0x4BCD0E0", VA = "0x4BCD0E0")]
	internal bool IsInvalid()
	{
		return default(bool);
	}

	[Token(Token = "0x6000A1D")]
	[Address(RVA = "0x4BCD100", Offset = "0x4BCD100", VA = "0x4BCD100")]
	public string GetSerializedFullPath()
	{
		return null;
	}

	[Token(Token = "0x6000A1E")]
	[Address(RVA = "0x4BCD110", Offset = "0x4BCD110", VA = "0x4BCD110")]
	private static int AlignUp16(int count)
	{
		return default(int);
	}

	[Token(Token = "0x6000A1F")]
	private NativeArray<T> GetSubArray<T>(NativeArray<byte> input, int count, ref int offset) where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x6000A20")]
	[Address(RVA = "0x4BCD130", Offset = "0x4BCD130", VA = "0x4BCD130")]
	internal bool ResolveSharedCellData(TextAsset cellSharedDataAsset, TextAsset cellSupportDataAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A21")]
	[Address(RVA = "0x4BCD710", Offset = "0x4BCD710", VA = "0x4BCD710")]
	internal bool ResolvePerScenarioCellData(TextAsset cellDataAsset, TextAsset cellOptionalDataAsset, int stateIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A22")]
	[Address(RVA = "0x4BCDDA0", Offset = "0x4BCDDA0", VA = "0x4BCDDA0")]
	public ProbeVolumeAsset()
	{
	}
}
