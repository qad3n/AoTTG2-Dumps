// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.LODGroupDataPoolBurst
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using AOT;
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Collections;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000BF")]
[BurstCompile]
internal static class LODGroupDataPoolBurst
{
	[Token(Token = "0x20000C0")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	internal delegate int FreeLODGroupData_000002F0_0024PostfixBurstDelegate(in NativeArray<EntityId> destroyedLODGroupsID, ref NativeList<LODGroupData> lodGroupsData, ref NativeParallelHashMap<int, GPUInstanceIndex> lodGroupDataHash, ref NativeList<GPUInstanceIndex> freeLODGroupDataHandles);

	[Token(Token = "0x20000C1")]
	internal static class FreeLODGroupData_000002F0_0024BurstDirectCall
	{
		[Token(Token = "0x400039B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static IntPtr Pointer;

		[Token(Token = "0x6000340")]
		[Address(RVA = "0x65EA050", Offset = "0x65E9050", VA = "0x65EA050")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x6000341")]
		[Address(RVA = "0x65EA1C0", Offset = "0x65E91C0", VA = "0x65EA1C0")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x6000342")]
		[Address(RVA = "0x65E9780", Offset = "0x65E8780", VA = "0x65E9780")]
		public static int Invoke(in NativeArray<EntityId> destroyedLODGroupsID, ref NativeList<LODGroupData> lodGroupsData, ref NativeParallelHashMap<int, GPUInstanceIndex> lodGroupDataHash, ref NativeList<GPUInstanceIndex> freeLODGroupDataHandles)
		{
			return default(int);
		}
	}

	[Token(Token = "0x20000C2")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	internal delegate int AllocateOrGetLODGroupDataInstances_000002F1_0024PostfixBurstDelegate(in NativeArray<EntityId> lodGroupsID, ref NativeList<LODGroupData> lodGroupsData, ref NativeList<LODGroupCullingData> lodGroupCullingData, ref NativeParallelHashMap<int, GPUInstanceIndex> lodGroupDataHash, ref NativeList<GPUInstanceIndex> freeLODGroupDataHandles, ref NativeArray<GPUInstanceIndex> lodGroupInstances);

	[Token(Token = "0x20000C3")]
	internal static class AllocateOrGetLODGroupDataInstances_000002F1_0024BurstDirectCall
	{
		[Token(Token = "0x400039C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static IntPtr Pointer;

		[Token(Token = "0x6000347")]
		[Address(RVA = "0x65EA420", Offset = "0x65E9420", VA = "0x65EA420")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x6000348")]
		[Address(RVA = "0x65EA590", Offset = "0x65E9590", VA = "0x65EA590")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x6000349")]
		[Address(RVA = "0x65E9850", Offset = "0x65E8850", VA = "0x65E9850")]
		public static int Invoke(in NativeArray<EntityId> lodGroupsID, ref NativeList<LODGroupData> lodGroupsData, ref NativeList<LODGroupCullingData> lodGroupCullingData, ref NativeParallelHashMap<int, GPUInstanceIndex> lodGroupDataHash, ref NativeList<GPUInstanceIndex> freeLODGroupDataHandles, ref NativeArray<GPUInstanceIndex> lodGroupInstances)
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x65E9560", Offset = "0x65E8560", VA = "0x65E9560")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	[MonoPInvokeCallback(typeof(UnityEngine_002ERendering_002EFreeLODGroupData_000002F0_0024PostfixBurstDelegate))]
	public static int FreeLODGroupData(in NativeArray<EntityId> destroyedLODGroupsID, ref NativeList<LODGroupData> lodGroupsData, ref NativeParallelHashMap<int, GPUInstanceIndex> lodGroupDataHash, ref NativeList<GPUInstanceIndex> freeLODGroupDataHandles)
	{
		return default(int);
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x65E9470", Offset = "0x65E8470", VA = "0x65E9470")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	[MonoPInvokeCallback(typeof(UnityEngine_002ERendering_002EAllocateOrGetLODGroupDataInstances_000002F1_0024PostfixBurstDelegate))]
	public static int AllocateOrGetLODGroupDataInstances(in NativeArray<EntityId> lodGroupsID, ref NativeList<LODGroupData> lodGroupsData, ref NativeList<LODGroupCullingData> lodGroupCullingData, ref NativeParallelHashMap<int, GPUInstanceIndex> lodGroupDataHash, ref NativeList<GPUInstanceIndex> freeLODGroupDataHandles, ref NativeArray<GPUInstanceIndex> lodGroupInstances)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600033A")]
	[Address(RVA = "0x65E9940", Offset = "0x65E8940", VA = "0x65E9940")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	internal static int FreeLODGroupData_0024BurstManaged(in NativeArray<EntityId> destroyedLODGroupsID, ref NativeList<LODGroupData> lodGroupsData, ref NativeParallelHashMap<int, GPUInstanceIndex> lodGroupDataHash, ref NativeList<GPUInstanceIndex> freeLODGroupDataHandles)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600033B")]
	[Address(RVA = "0x65E9BA0", Offset = "0x65E8BA0", VA = "0x65E9BA0")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	internal static int AllocateOrGetLODGroupDataInstances_0024BurstManaged(in NativeArray<EntityId> lodGroupsID, ref NativeList<LODGroupData> lodGroupsData, ref NativeList<LODGroupCullingData> lodGroupCullingData, ref NativeParallelHashMap<int, GPUInstanceIndex> lodGroupDataHash, ref NativeList<GPUInstanceIndex> freeLODGroupDataHandles, ref NativeArray<GPUInstanceIndex> lodGroupInstances)
	{
		return default(int);
	}
}
