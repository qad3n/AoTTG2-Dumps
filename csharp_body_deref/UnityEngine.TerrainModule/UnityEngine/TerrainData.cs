// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TerrainData
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000008")]
[UnityEngine.Bindings.NativeHeader("TerrainScriptingClasses.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Terrain/Public/TerrainDataScriptingInterface.h")]
[UnityEngine.Scripting.UsedByNativeCode]
public sealed class TerrainData : Object
{
	[Token(Token = "0x2000009")]
	private enum BoundaryValueType
	{
		[Token(Token = "0x4000017")]
		MaxHeightmapRes,
		[Token(Token = "0x4000018")]
		MinDetailResPerPatch,
		[Token(Token = "0x4000019")]
		MaxDetailResPerPatch,
		[Token(Token = "0x400001A")]
		MaxDetailPatchCount,
		[Token(Token = "0x400001B")]
		MaxCoveragePerRes,
		[Token(Token = "0x400001C")]
		MinAlphamapRes,
		[Token(Token = "0x400001D")]
		MaxAlphamapRes,
		[Token(Token = "0x400001E")]
		MinBaseMapRes,
		[Token(Token = "0x400001F")]
		MaxBaseMapRes
	}

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly int k_MaximumResolution;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x4")]
	internal static readonly int k_MinimumDetailResolutionPerPatch;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly int k_MaximumDetailResolutionPerPatch;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0xC")]
	internal static readonly int k_MaximumDetailPatchCount;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly int k_MinimumAlphamapResolution;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x14")]
	internal static readonly int k_MaximumAlphamapResolution;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly int k_MinimumBaseMapResolution;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x1C")]
	internal static readonly int k_MaximumBaseMapResolution;

	[Token(Token = "0x1700000A")]
	public RenderTexture heightmapTexture
	{
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x2FF99F0", Offset = "0x2FF7FF0", VA = "0x182FF99F0")]
		[UnityEngine.Bindings.NativeName("GetHeightmap().GetHeightmapTexture")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000B")]
	public int heightmapResolution
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x2FF9800", Offset = "0x2FF7E00", VA = "0x182FF9800")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000C")]
	private int internalHeightmapResolution
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x2FF9800", Offset = "0x2FF7E00", VA = "0x182FF9800")]
		[UnityEngine.Bindings.NativeName("GetHeightmap().GetResolution")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000D")]
	public Vector3 heightmapScale
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x2FF98F0", Offset = "0x2FF7EF0", VA = "0x182FF98F0")]
		[UnityEngine.Bindings.NativeName("GetHeightmap().GetScale")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x1700000E")]
	public int holesResolution
	{
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x2FF9AB0", Offset = "0x2FF80B0", VA = "0x182FF9AB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000F")]
	public Vector3 size
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x2FF9BE0", Offset = "0x2FF81E0", VA = "0x182FF9BE0")]
		[UnityEngine.Bindings.NativeName("GetHeightmap().GetSize")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000010")]
	public TreeInstance[] treeInstances
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x2FF9CA0", Offset = "0x2FF82A0", VA = "0x182FF9CA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000011")]
	public TreePrototype[] treePrototypes
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x2FF9CF0", Offset = "0x2FF82F0", VA = "0x182FF9CF0")]
		[UnityEngine.Bindings.FreeFunction("TerrainDataScriptingInterface::GetTreePrototypes", HasExplicitThis = true)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000012")]
	internal Terrain[] users
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x2FF9DD0", Offset = "0x2FF83D0", VA = "0x182FF9DD0")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001E")]
	[Address(RVA = "0x2FF8F70", Offset = "0x2FF7570", VA = "0x182FF8F70")]
	[UnityEngine.Bindings.StaticAccessor("TerrainDataScriptingInterface", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	[UnityEngine.Bindings.ThreadSafe]
	private static extern int GetBoundaryValue(BoundaryValueType type);

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x2FF8FB0", Offset = "0x2FF75B0", VA = "0x182FF8FB0")]
	public float[,] GetHeights(int xBase, int yBase, int width, int height)
	{
		return null;
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x2FF92E0", Offset = "0x2FF78E0", VA = "0x182FF92E0")]
	[UnityEngine.Bindings.FreeFunction("TerrainDataScriptingInterface::GetHeights", HasExplicitThis = true)]
	private float[,] Internal_GetHeights(int xBase, int yBase, int width, int height)
	{
		return null;
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x2FF9120", Offset = "0x2FF7720", VA = "0x182FF9120")]
	public bool[,] GetHoles(int xBase, int yBase, int width, int height)
	{
		return null;
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x2FF93F0", Offset = "0x2FF79F0", VA = "0x182FF93F0")]
	[UnityEngine.Bindings.FreeFunction("TerrainDataScriptingInterface::GetHoles", HasExplicitThis = true)]
	private bool[,] Internal_GetHoles(int xBase, int yBase, int width, int height)
	{
		return null;
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x2FF9500", Offset = "0x2FF7B00", VA = "0x182FF9500")]
	[UnityEngine.Bindings.NativeName("GetTreeDatabase().GetInstances")]
	private TreeInstance[] Internal_GetTreeInstances()
	{
		return null;
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x2FF8ED0", Offset = "0x2FF74D0", VA = "0x182FF8ED0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[UnityEngine.Bindings.NativeName("GetSplatDatabase().GetAlphamapResolution")]
	internal float GetAlphamapResolutionInternal()
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002F")]
	[Address(RVA = "0x2FF99B0", Offset = "0x2FF7FB0", VA = "0x182FF99B0")]
	private static extern IntPtr get_heightmapTexture_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000030")]
	[Address(RVA = "0x2FF9B50", Offset = "0x2FF8150", VA = "0x182FF9B50")]
	private static extern int get_internalHeightmapResolution_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000031")]
	[Address(RVA = "0x2FF98A0", Offset = "0x2FF7EA0", VA = "0x182FF98A0")]
	private static extern void get_heightmapScale_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000032")]
	[Address(RVA = "0x2FF9B90", Offset = "0x2FF8190", VA = "0x182FF9B90")]
	private static extern void get_size_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000033")]
	[Address(RVA = "0x2FF9290", Offset = "0x2FF7890", VA = "0x182FF9290")]
	private static extern float[,] Internal_GetHeights_Injected(IntPtr _unity_self, int xBase, int yBase, int width, int height);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000034")]
	[Address(RVA = "0x2FF93A0", Offset = "0x2FF79A0", VA = "0x182FF93A0")]
	private static extern bool[,] Internal_GetHoles_Injected(IntPtr _unity_self, int xBase, int yBase, int width, int height);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000035")]
	[Address(RVA = "0x2FF94B0", Offset = "0x2FF7AB0", VA = "0x182FF94B0")]
	private static extern void Internal_GetTreeInstances_Injected(IntPtr _unity_self, out UnityEngine.Bindings.BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000036")]
	[Address(RVA = "0x2FF9CB0", Offset = "0x2FF82B0", VA = "0x182FF9CB0")]
	private static extern TreePrototype[] get_treePrototypes_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000037")]
	[Address(RVA = "0x2FF8E90", Offset = "0x2FF7490", VA = "0x182FF8E90")]
	private static extern float GetAlphamapResolutionInternal_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000038")]
	[Address(RVA = "0x2FF9D90", Offset = "0x2FF8390", VA = "0x182FF9D90")]
	private static extern Terrain[] get_users_Injected(IntPtr _unity_self);
}
