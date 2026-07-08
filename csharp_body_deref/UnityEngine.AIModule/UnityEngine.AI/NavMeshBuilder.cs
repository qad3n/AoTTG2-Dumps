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
	[Address(RVA = "0x4A67E80", Offset = "0x4A67E80", VA = "0x4A67E80")]
	public static void CollectSources(Transform root, int includedLayerMask, NavMeshCollectGeometry geometry, int defaultArea, bool generateLinksByDefault, List<NavMeshBuildMarkup> markups, bool includeOnlyMarkedObjects, List<NavMeshBuildSource> results)
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4A68170", Offset = "0x4A68170", VA = "0x4A68170")]
	public static void CollectSources(Transform root, int includedLayerMask, NavMeshCollectGeometry geometry, int defaultArea, List<NavMeshBuildMarkup> markups, List<NavMeshBuildSource> results)
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4A67FF0", Offset = "0x4A67FF0", VA = "0x4A67FF0")]
	private static NavMeshBuildSource[] CollectSourcesInternal(int includedLayerMask, Bounds includedWorldBounds, Transform root, bool useBounds, NavMeshCollectGeometry geometry, int defaultArea, bool generateLinksByDefault, NavMeshBuildMarkup[] markups, bool includeOnlyMarkedObjects)
	{
		return null;
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4A681F0", Offset = "0x4A681F0", VA = "0x4A681F0")]
	public static AsyncOperation UpdateNavMeshDataAsync(NavMeshData data, NavMeshBuildSettings buildSettings, List<NavMeshBuildSource> sources, Bounds localBounds)
	{
		return null;
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4A683B0", Offset = "0x4A683B0", VA = "0x4A683B0")]
	private static AsyncOperation UpdateNavMeshDataAsyncListInternal(NavMeshData data, NavMeshBuildSettings buildSettings, object sources, Bounds localBounds)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4A68190", Offset = "0x4A68190", VA = "0x4A68190")]
	private static extern NavMeshBuildSource[] CollectSourcesInternal_Injected(int includedLayerMask, [In] ref Bounds includedWorldBounds, IntPtr root, bool useBounds, NavMeshCollectGeometry geometry, int defaultArea, bool generateLinksByDefault, ref UnityEngine.Bindings.ManagedSpanWrapper markups, bool includeOnlyMarkedObjects);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4A68470", Offset = "0x4A68470", VA = "0x4A68470")]
	private static extern AsyncOperation UpdateNavMeshDataAsyncListInternal_Injected(IntPtr data, [In] ref NavMeshBuildSettings buildSettings, object sources, [In] ref Bounds localBounds);
}
