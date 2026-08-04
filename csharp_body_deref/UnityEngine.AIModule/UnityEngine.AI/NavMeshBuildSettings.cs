// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AI.NavMeshBuildSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.AI;

[Token(Token = "0x2000010")]
[UnityEngine.Bindings.NativeHeader("Modules/AI/Public/NavMeshBuildSettings.h")]
public struct NavMeshBuildSettings
{
	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x0")]
	private int m_AgentTypeID;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x4")]
	private float m_AgentRadius;

	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x8")]
	private float m_AgentHeight;

	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0xC")]
	private float m_AgentSlope;

	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x10")]
	private float m_AgentClimb;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x14")]
	private float m_LedgeDropHeight;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x18")]
	private float m_MaxJumpAcrossDistance;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x1C")]
	private float m_MinRegionArea;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x20")]
	private int m_OverrideVoxelSize;

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x24")]
	private float m_VoxelSize;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x28")]
	private int m_OverrideTileSize;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x2C")]
	private int m_TileSize;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x30")]
	private int m_BuildHeightMesh;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x34")]
	private uint m_MaxJobWorkers;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x38")]
	private int m_PreserveTilesOutsideBounds;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x3C")]
	private NavMeshBuildDebugSettings m_Debug;

	[Token(Token = "0x17000020")]
	public int agentTypeID
	{
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x4D921F0", Offset = "0x4D921F0", VA = "0x4D921F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000021")]
	public float agentRadius
	{
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x4D92200", Offset = "0x4D92200", VA = "0x4D92200")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x4D92210", Offset = "0x4D92210", VA = "0x4D92210")]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public float agentHeight
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x4D92220", Offset = "0x4D92220", VA = "0x4D92220")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x4D92230", Offset = "0x4D92230", VA = "0x4D92230")]
		set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public float minRegionArea
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x4D92240", Offset = "0x4D92240", VA = "0x4D92240")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public bool overrideVoxelSize
	{
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x4D92250", Offset = "0x4D92250", VA = "0x4D92250")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public float voxelSize
	{
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x4D92260", Offset = "0x4D92260", VA = "0x4D92260")]
		set
		{
		}
	}

	[Token(Token = "0x17000026")]
	public bool overrideTileSize
	{
		[Token(Token = "0x600006A")]
		[Address(RVA = "0x4D92270", Offset = "0x4D92270", VA = "0x4D92270")]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public int tileSize
	{
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x4D92280", Offset = "0x4D92280", VA = "0x4D92280")]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public uint maxJobWorkers
	{
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x4D92290", Offset = "0x4D92290", VA = "0x4D92290")]
		set
		{
		}
	}

	[Token(Token = "0x17000029")]
	public bool buildHeightMesh
	{
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x4D922A0", Offset = "0x4D922A0", VA = "0x4D922A0")]
		set
		{
		}
	}
}
