// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.LODGroupDataPoolBurst
// Update status: NEW in this game update
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
		[Address(RVA = "0x2BED690", Offset = "0x2BEBC90", VA = "0x182BED690")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x6000341")]
		[Address(RVA = "0x2BED820", Offset = "0x2BEBE20", VA = "0x182BED820")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x6000342")]
		[Address(RVA = "0x2BED9A0", Offset = "0x2BEBFA0", VA = "0x182BED9A0")]
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
		[Address(RVA = "0x2BEC6A0", Offset = "0x2BEACA0", VA = "0x182BEC6A0")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x6000348")]
		[Address(RVA = "0x2BEC830", Offset = "0x2BEAE30", VA = "0x182BEC830")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x6000349")]
		[Address(RVA = "0x2BEC9B0", Offset = "0x2BEAFB0", VA = "0x182BEC9B0")]
		public static int Invoke(in NativeArray<EntityId> lodGroupsID, ref NativeList<LODGroupData> lodGroupsData, ref NativeList<LODGroupCullingData> lodGroupCullingData, ref NativeParallelHashMap<int, GPUInstanceIndex> lodGroupDataHash, ref NativeList<GPUInstanceIndex> freeLODGroupDataHandles, ref NativeArray<GPUInstanceIndex> lodGroupInstances)
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x2BED9A0", Offset = "0x2BEBFA0", VA = "0x182BED9A0")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	[MonoPInvokeCallback(typeof(UnityEngine_002ERendering_002EFreeLODGroupData_000002F0_0024PostfixBurstDelegate))]
	public static int FreeLODGroupData(in NativeArray<EntityId> destroyedLODGroupsID, ref NativeList<LODGroupData> lodGroupsData, ref NativeParallelHashMap<int, GPUInstanceIndex> lodGroupDataHash, ref NativeList<GPUInstanceIndex> freeLODGroupDataHandles)
	{
		return default(int);
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x2BEC9B0", Offset = "0x2BEAFB0", VA = "0x182BEC9B0")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	[MonoPInvokeCallback(typeof(UnityEngine_002ERendering_002EAllocateOrGetLODGroupDataInstances_000002F1_0024PostfixBurstDelegate))]
	public static int AllocateOrGetLODGroupDataInstances(in NativeArray<EntityId> lodGroupsID, ref NativeList<LODGroupData> lodGroupsData, ref NativeList<LODGroupCullingData> lodGroupCullingData, ref NativeParallelHashMap<int, GPUInstanceIndex> lodGroupDataHash, ref NativeList<GPUInstanceIndex> freeLODGroupDataHandles, ref NativeArray<GPUInstanceIndex> lodGroupInstances)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600033A")]
	[Address(RVA = "0x2BF18C0", Offset = "0x2BEFEC0", VA = "0x182BF18C0")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	internal static int FreeLODGroupData_0024BurstManaged(in NativeArray<EntityId> destroyedLODGroupsID, ref NativeList<LODGroupData> lodGroupsData, ref NativeParallelHashMap<int, GPUInstanceIndex> lodGroupDataHash, ref NativeList<GPUInstanceIndex> freeLODGroupDataHandles)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600033B")]
	[Address(RVA = "0x2BF1690", Offset = "0x2BEFC90", VA = "0x182BF1690")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	internal static int AllocateOrGetLODGroupDataInstances_0024BurstManaged(in NativeArray<EntityId> lodGroupsID, ref NativeList<LODGroupData> lodGroupsData, ref NativeList<LODGroupCullingData> lodGroupCullingData, ref NativeParallelHashMap<int, GPUInstanceIndex> lodGroupDataHash, ref NativeList<GPUInstanceIndex> freeLODGroupDataHandles, ref NativeArray<GPUInstanceIndex> lodGroupInstances)
	{
		return default(int);
	}
}
