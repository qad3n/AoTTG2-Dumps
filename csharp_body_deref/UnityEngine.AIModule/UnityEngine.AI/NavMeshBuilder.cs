// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AI.NavMeshBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.AI;

[Token(Token = "0x2000002")]
[UnityEngine.Bindings.NativeHeader("Modules/AI/Builder/NavMeshBuilder.bindings.h")]
[UnityEngine.Bindings.StaticAccessor("NavMeshBuilderBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
public static class NavMeshBuilder
{
	[Token(Token = "0x6000001")]
	[Address(RVA = "0x4D8F6A0", Offset = "0x4D8F6A0", VA = "0x4D8F6A0")]
	public static void CollectSources(Transform root, int includedLayerMask, NavMeshCollectGeometry geometry, int defaultArea, bool generateLinksByDefault, List<NavMeshBuildMarkup> markups, bool includeOnlyMarkedObjects, List<NavMeshBuildSource> results)
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4D8F990", Offset = "0x4D8F990", VA = "0x4D8F990")]
	public static void CollectSources(Transform root, int includedLayerMask, NavMeshCollectGeometry geometry, int defaultArea, List<NavMeshBuildMarkup> markups, List<NavMeshBuildSource> results)
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4D8F810", Offset = "0x4D8F810", VA = "0x4D8F810")]
	private static NavMeshBuildSource[] CollectSourcesInternal(int includedLayerMask, Bounds includedWorldBounds, Transform root, bool useBounds, NavMeshCollectGeometry geometry, int defaultArea, bool generateLinksByDefault, NavMeshBuildMarkup[] markups, bool includeOnlyMarkedObjects)
	{
		return null;
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4D8FA10", Offset = "0x4D8FA10", VA = "0x4D8FA10")]
	public static AsyncOperation UpdateNavMeshDataAsync(NavMeshData data, NavMeshBuildSettings buildSettings, List<NavMeshBuildSource> sources, Bounds localBounds)
	{
		return null;
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4D8FBD0", Offset = "0x4D8FBD0", VA = "0x4D8FBD0")]
	private static AsyncOperation UpdateNavMeshDataAsyncListInternal(NavMeshData data, NavMeshBuildSettings buildSettings, object sources, Bounds localBounds)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4D8F9B0", Offset = "0x4D8F9B0", VA = "0x4D8F9B0")]
	private static extern NavMeshBuildSource[] CollectSourcesInternal_Injected(int includedLayerMask, [In] ref Bounds includedWorldBounds, IntPtr root, bool useBounds, NavMeshCollectGeometry geometry, int defaultArea, bool generateLinksByDefault, ref UnityEngine.Bindings.ManagedSpanWrapper markups, bool includeOnlyMarkedObjects);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4D8FC90", Offset = "0x4D8FC90", VA = "0x4D8FC90")]
	private static extern AsyncOperation UpdateNavMeshDataAsyncListInternal_Injected(IntPtr data, [In] ref NavMeshBuildSettings buildSettings, object sources, [In] ref Bounds localBounds);
}
