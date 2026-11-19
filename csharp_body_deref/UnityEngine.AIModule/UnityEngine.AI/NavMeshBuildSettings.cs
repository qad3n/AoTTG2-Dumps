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

[Token(Token = "0x2000012")]
[UnityEngine.Bindings.NativeHeader("Modules/AI/Public/NavMeshBuildSettings.h")]
public struct NavMeshBuildSettings
{
	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x0")]
	private int m_AgentTypeID;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x4")]
	private float m_AgentRadius;

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x8")]
	private float m_AgentHeight;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0xC")]
	private float m_AgentSlope;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x10")]
	private float m_AgentClimb;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x14")]
	private float m_LedgeDropHeight;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x18")]
	private float m_MaxJumpAcrossDistance;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x1C")]
	private float m_MinRegionArea;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x20")]
	private int m_OverrideVoxelSize;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x24")]
	private float m_VoxelSize;

	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x28")]
	private int m_OverrideTileSize;

	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x2C")]
	private int m_TileSize;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x30")]
	private int m_BuildHeightMesh;

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x34")]
	private uint m_MaxJobWorkers;

	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x38")]
	private int m_PreserveTilesOutsideBounds;

	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0x3C")]
	private NavMeshBuildDebugSettings m_Debug;

	[Token(Token = "0x1700001F")]
	public int agentTypeID
	{
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x68960D0", Offset = "0x68950D0", VA = "0x68960D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000020")]
	public float agentRadius
	{
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x68960E0", Offset = "0x68950E0", VA = "0x68960E0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000021")]
	public float agentHeight
	{
		[Token(Token = "0x600006E")]
		[Address(RVA = "0x68960F0", Offset = "0x68950F0", VA = "0x68960F0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000022")]
	public float minRegionArea
	{
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x6896100", Offset = "0x6895100", VA = "0x6896100")]
		set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public bool overrideVoxelSize
	{
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x6896110", Offset = "0x6895110", VA = "0x6896110")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public float voxelSize
	{
		[Token(Token = "0x6000071")]
		[Address(RVA = "0x6896120", Offset = "0x6895120", VA = "0x6896120")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public bool overrideTileSize
	{
		[Token(Token = "0x6000072")]
		[Address(RVA = "0x6896130", Offset = "0x6895130", VA = "0x6896130")]
		set
		{
		}
	}

	[Token(Token = "0x17000026")]
	public int tileSize
	{
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x6896140", Offset = "0x6895140", VA = "0x6896140")]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public uint maxJobWorkers
	{
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x6896150", Offset = "0x6895150", VA = "0x6896150")]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public bool buildHeightMesh
	{
		[Token(Token = "0x6000075")]
		[Address(RVA = "0x6896160", Offset = "0x6895160", VA = "0x6896160")]
		set
		{
		}
	}
}
