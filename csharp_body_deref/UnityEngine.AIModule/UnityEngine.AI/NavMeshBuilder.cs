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
[UnityEngine.Bindings.StaticAccessor("NavMeshBuilderBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Modules/AI/Builder/NavMeshBuilder.bindings.h")]
public static class NavMeshBuilder
{
	[Token(Token = "0x6000001")]
	[Address(RVA = "0x68934F0", Offset = "0x68924F0", VA = "0x68934F0")]
	public static void CollectSources(Transform root, int includedLayerMask, NavMeshCollectGeometry geometry, int defaultArea, bool generateLinksByDefault, List<NavMeshBuildMarkup> markups, bool includeOnlyMarkedObjects, List<NavMeshBuildSource> results)
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x68938A0", Offset = "0x68928A0", VA = "0x68938A0")]
	public static void CollectSources(Transform root, int includedLayerMask, NavMeshCollectGeometry geometry, int defaultArea, List<NavMeshBuildMarkup> markups, List<NavMeshBuildSource> results)
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x6893660", Offset = "0x6892660", VA = "0x6893660")]
	private static NavMeshBuildSource[] CollectSourcesInternal(int includedLayerMask, Bounds includedWorldBounds, Transform root, bool useBounds, NavMeshCollectGeometry geometry, int defaultArea, bool generateLinksByDefault, NavMeshBuildMarkup[] markups, bool includeOnlyMarkedObjects)
	{
		return null;
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x6893920", Offset = "0x6892920", VA = "0x6893920")]
	public static AsyncOperation UpdateNavMeshDataAsync(NavMeshData data, NavMeshBuildSettings buildSettings, List<NavMeshBuildSource> sources, Bounds localBounds)
	{
		return null;
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x6893AE0", Offset = "0x6892AE0", VA = "0x6893AE0")]
	private static AsyncOperation UpdateNavMeshDataAsyncListInternal(NavMeshData data, NavMeshBuildSettings buildSettings, object sources, Bounds localBounds)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000006")]
	[Address(RVA = "0x68938C0", Offset = "0x68928C0", VA = "0x68938C0")]
	private static extern void CollectSourcesInternal_Injected(int includedLayerMask, [In] ref Bounds includedWorldBounds, IntPtr root, bool useBounds, NavMeshCollectGeometry geometry, int defaultArea, bool generateLinksByDefault, ref UnityEngine.Bindings.ManagedSpanWrapper markups, bool includeOnlyMarkedObjects, out UnityEngine.Bindings.BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000007")]
	[Address(RVA = "0x6893BA0", Offset = "0x6892BA0", VA = "0x6893BA0")]
	private static extern IntPtr UpdateNavMeshDataAsyncListInternal_Injected(IntPtr data, [In] ref NavMeshBuildSettings buildSettings, object sources, [In] ref Bounds localBounds);
}
