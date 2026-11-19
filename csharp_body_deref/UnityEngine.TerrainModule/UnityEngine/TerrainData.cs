// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TerrainData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000006")]
[UnityEngine.Bindings.NativeHeader("Modules/Terrain/Public/TerrainDataScriptingInterface.h")]
[UnityEngine.Bindings.NativeHeader("TerrainScriptingClasses.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public sealed class TerrainData : Object
{
	[Token(Token = "0x2000007")]
	private enum BoundaryValueType
	{
		[Token(Token = "0x400000C")]
		MaxHeightmapRes,
		[Token(Token = "0x400000D")]
		MinDetailResPerPatch,
		[Token(Token = "0x400000E")]
		MaxDetailResPerPatch,
		[Token(Token = "0x400000F")]
		MaxDetailPatchCount,
		[Token(Token = "0x4000010")]
		MaxCoveragePerRes,
		[Token(Token = "0x4000011")]
		MinAlphamapRes,
		[Token(Token = "0x4000012")]
		MaxAlphamapRes,
		[Token(Token = "0x4000013")]
		MinBaseMapRes,
		[Token(Token = "0x4000014")]
		MaxBaseMapRes
	}

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly int k_MaximumResolution;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x4")]
	internal static readonly int k_MinimumDetailResolutionPerPatch;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly int k_MaximumDetailResolutionPerPatch;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0xC")]
	internal static readonly int k_MaximumDetailPatchCount;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly int k_MinimumAlphamapResolution;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x14")]
	internal static readonly int k_MaximumAlphamapResolution;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly int k_MinimumBaseMapResolution;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x1C")]
	internal static readonly int k_MaximumBaseMapResolution;

	[Token(Token = "0x17000007")]
	public RenderTexture heightmapTexture
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x69F3D30", Offset = "0x69F2D30", VA = "0x69F3D30")]
		[UnityEngine.Bindings.NativeName("GetHeightmap().GetHeightmapTexture")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000008")]
	public int heightmapResolution
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x69F3E40", Offset = "0x69F2E40", VA = "0x69F3E40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000009")]
	private int internalHeightmapResolution
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x69F3E50", Offset = "0x69F2E50", VA = "0x69F3E50")]
		[UnityEngine.Bindings.NativeName("GetHeightmap().GetResolution")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000A")]
	public Vector3 heightmapScale
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x69F3F30", Offset = "0x69F2F30", VA = "0x69F3F30")]
		[UnityEngine.Bindings.NativeName("GetHeightmap().GetScale")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700000B")]
	public int holesResolution
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x69F4050", Offset = "0x69F3050", VA = "0x69F4050")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000C")]
	public Vector3 size
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x69F4060", Offset = "0x69F3060", VA = "0x69F4060")]
		[UnityEngine.Bindings.NativeName("GetHeightmap().GetSize")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700000D")]
	public TreeInstance[] treeInstances
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x69F4550", Offset = "0x69F3550", VA = "0x69F4550")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000E")]
	public TreePrototype[] treePrototypes
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x69F4700", Offset = "0x69F3700", VA = "0x69F4700")]
		[UnityEngine.Bindings.FreeFunction("TerrainDataScriptingInterface::GetTreePrototypes", HasExplicitThis = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000F")]
	internal Terrain[] users
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x69F39C0", Offset = "0x69F29C0", VA = "0x69F39C0")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000017")]
	[Address(RVA = "0x69F3D00", Offset = "0x69F2D00", VA = "0x69F3D00")]
	[UnityEngine.Bindings.ThreadSafe]
	[UnityEngine.Bindings.StaticAccessor("TerrainDataScriptingInterface", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern int GetBoundaryValue(BoundaryValueType type);

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x69F4180", Offset = "0x69F3180", VA = "0x69F4180")]
	public float[,] GetHeights(int xBase, int yBase, int width, int height)
	{
		return null;
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x69F4240", Offset = "0x69F3240", VA = "0x69F4240")]
	[UnityEngine.Bindings.FreeFunction("TerrainDataScriptingInterface::GetHeights", HasExplicitThis = true)]
	private float[,] Internal_GetHeights(int xBase, int yBase, int width, int height)
	{
		return null;
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x69F4370", Offset = "0x69F3370", VA = "0x69F4370")]
	public bool[,] GetHoles(int xBase, int yBase, int width, int height)
	{
		return null;
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x69F4420", Offset = "0x69F3420", VA = "0x69F4420")]
	[UnityEngine.Bindings.FreeFunction("TerrainDataScriptingInterface::GetHoles", HasExplicitThis = true)]
	private bool[,] Internal_GetHoles(int xBase, int yBase, int width, int height)
	{
		return null;
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x69F4560", Offset = "0x69F3560", VA = "0x69F4560")]
	[UnityEngine.Bindings.NativeName("GetTreeDatabase().GetInstances")]
	private TreeInstance[] Internal_GetTreeInstances()
	{
		return null;
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x69F47E0", Offset = "0x69F37E0", VA = "0x69F47E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[UnityEngine.Bindings.NativeName("GetSplatDatabase().GetAlphamapResolution")]
	internal float GetAlphamapResolutionInternal()
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000028")]
	[Address(RVA = "0x69F3E10", Offset = "0x69F2E10", VA = "0x69F3E10")]
	private static extern IntPtr get_heightmapTexture_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x69F3F00", Offset = "0x69F2F00", VA = "0x69F3F00")]
	private static extern int get_internalHeightmapResolution_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002A")]
	[Address(RVA = "0x69F4010", Offset = "0x69F3010", VA = "0x69F4010")]
	private static extern void get_heightmapScale_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x69F4140", Offset = "0x69F3140", VA = "0x69F4140")]
	private static extern void get_size_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002C")]
	[Address(RVA = "0x69F4320", Offset = "0x69F3320", VA = "0x69F4320")]
	private static extern float[,] Internal_GetHeights_Injected(IntPtr _unity_self, int xBase, int yBase, int width, int height);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002D")]
	[Address(RVA = "0x69F4500", Offset = "0x69F3500", VA = "0x69F4500")]
	private static extern bool[,] Internal_GetHoles_Injected(IntPtr _unity_self, int xBase, int yBase, int width, int height);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002E")]
	[Address(RVA = "0x69F46C0", Offset = "0x69F36C0", VA = "0x69F46C0")]
	private static extern void Internal_GetTreeInstances_Injected(IntPtr _unity_self, out UnityEngine.Bindings.BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002F")]
	[Address(RVA = "0x69F47B0", Offset = "0x69F37B0", VA = "0x69F47B0")]
	private static extern TreePrototype[] get_treePrototypes_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000030")]
	[Address(RVA = "0x69F4890", Offset = "0x69F3890", VA = "0x69F4890")]
	private static extern float GetAlphamapResolutionInternal_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000031")]
	[Address(RVA = "0x69F48C0", Offset = "0x69F38C0", VA = "0x69F48C0")]
	private static extern Terrain[] get_users_Injected(IntPtr _unity_self);
}
