using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000006")]
[UnityEngine.Bindings.NativeHeader("TerrainScriptingClasses.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/Terrain/Public/TerrainDataScriptingInterface.h")]
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

	[Token(Token = "0x17000005")]
	public Vector3 size
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x4B785E0", Offset = "0x4B785E0", VA = "0x4B785E0")]
		[UnityEngine.Bindings.NativeName("GetHeightmap().GetSize")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000006")]
	internal Terrain[] users
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x4B78180", Offset = "0x4B78180", VA = "0x4B78180")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000011")]
	[Address(RVA = "0x4B784E0", Offset = "0x4B784E0", VA = "0x4B784E0")]
	[UnityEngine.Bindings.ThreadSafe]
	[UnityEngine.Bindings.StaticAccessor("TerrainDataScriptingInterface", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static extern int GetBoundaryValue(BoundaryValueType type);

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x4B78510", Offset = "0x4B78510", VA = "0x4B78510")]
	public TerrainData()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4B785B0", Offset = "0x4B785B0", VA = "0x4B785B0")]
	[UnityEngine.Bindings.FreeFunction("TerrainDataScriptingInterface::Create")]
	private static extern void Internal_Create([UnityEngine.Writable] TerrainData terrainData);

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4B78720", Offset = "0x4B78720", VA = "0x4B78720")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[UnityEngine.Bindings.NativeName("GetSplatDatabase().GetAlphamapResolution")]
	internal float GetAlphamapResolutionInternal()
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4B786E0", Offset = "0x4B786E0", VA = "0x4B786E0")]
	private static extern void get_size_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4B787F0", Offset = "0x4B787F0", VA = "0x4B787F0")]
	private static extern float GetAlphamapResolutionInternal_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4B78820", Offset = "0x4B78820", VA = "0x4B78820")]
	private static extern Terrain[] get_users_Injected(IntPtr _unity_self);
}
