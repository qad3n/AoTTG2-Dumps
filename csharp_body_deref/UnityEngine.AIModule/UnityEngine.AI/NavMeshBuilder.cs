// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AI.NavMeshBuilder
// Update status: CHANGED in this game update
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
[UnityEngine.Bindings.StaticAccessor("NavMeshBuilderBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Modules/AI/Builder/NavMeshBuilder.bindings.h")]
public static class NavMeshBuilder
{
	[Token(Token = "0x6000001")]
	[Address(RVA = "0x2E97D40", Offset = "0x2E96340", VA = "0x182E97D40")]
	public static void CollectSources(Transform root, int includedLayerMask, NavMeshCollectGeometry geometry, int defaultArea, bool generateLinksByDefault, List<NavMeshBuildMarkup> markups, bool includeOnlyMarkedObjects, List<NavMeshBuildSource> results)
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x2E97B90", Offset = "0x2E96190", VA = "0x182E97B90")]
	public static void CollectSources(Transform root, int includedLayerMask, NavMeshCollectGeometry geometry, int defaultArea, List<NavMeshBuildMarkup> markups, List<NavMeshBuildSource> results)
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x2E97970", Offset = "0x2E95F70", VA = "0x182E97970")]
	private static NavMeshBuildSource[] CollectSourcesInternal(int includedLayerMask, Bounds includedWorldBounds, Transform root, bool useBounds, NavMeshCollectGeometry geometry, int defaultArea, bool generateLinksByDefault, NavMeshBuildMarkup[] markups, bool includeOnlyMarkedObjects)
	{
		return null;
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x2E97FF0", Offset = "0x2E965F0", VA = "0x182E97FF0")]
	public static AsyncOperation UpdateNavMeshDataAsync(NavMeshData data, NavMeshBuildSettings buildSettings, List<NavMeshBuildSource> sources, Bounds localBounds)
	{
		return null;
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x2E97F50", Offset = "0x2E96550", VA = "0x182E97F50")]
	private static AsyncOperation UpdateNavMeshDataAsyncListInternal(NavMeshData data, NavMeshBuildSettings buildSettings, object sources, Bounds localBounds)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000006")]
	[Address(RVA = "0x2E97900", Offset = "0x2E95F00", VA = "0x182E97900")]
	private static extern void CollectSourcesInternal_Injected(int includedLayerMask, [In] ref Bounds includedWorldBounds, IntPtr root, bool useBounds, NavMeshCollectGeometry geometry, int defaultArea, bool generateLinksByDefault, ref UnityEngine.Bindings.ManagedSpanWrapper markups, bool includeOnlyMarkedObjects, out UnityEngine.Bindings.BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000007")]
	[Address(RVA = "0x2E97F00", Offset = "0x2E96500", VA = "0x182E97F00")]
	private static extern IntPtr UpdateNavMeshDataAsyncListInternal_Injected(IntPtr data, [In] ref NavMeshBuildSettings buildSettings, object sources, [In] ref Bounds localBounds);
}
