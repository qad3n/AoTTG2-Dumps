// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceDataSystemBurst
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

[Token(Token = "0x2000095")]
[BurstCompile]
internal static class InstanceDataSystemBurst
{
	[Token(Token = "0x2000096")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	internal delegate void ReallocateInstances_0000029E_0024PostfixBurstDelegate(bool implicitInstanceIndices, in NativeArray<EntityId> rendererGroupIDs, in NativeArray<UnityEngine.Rendering.GPUDrivenPackedRendererData> packedRendererData, in NativeArray<int> instanceOffsets, in NativeArray<int> instanceCounts, ref InstanceAllocators instanceAllocators, ref CPUInstanceData instanceData, ref CPUPerCameraInstanceData perCameraInstanceData, ref CPUSharedInstanceData sharedInstanceData, ref NativeArray<InstanceHandle> instances, ref NativeParallelMultiHashMap<int, InstanceHandle> rendererGroupInstanceMultiHash);

	[Token(Token = "0x2000097")]
	internal static class ReallocateInstances_0000029E_0024BurstDirectCall
	{
		[Token(Token = "0x40002DF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static IntPtr Pointer;

		[Token(Token = "0x60002D8")]
		[Address(RVA = "0x2BF9BA0", Offset = "0x2BF81A0", VA = "0x182BF9BA0")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x60002D9")]
		[Address(RVA = "0x2BF9D20", Offset = "0x2BF8320", VA = "0x182BF9D20")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x60002DA")]
		[Address(RVA = "0x2BF9E90", Offset = "0x2BF8490", VA = "0x182BF9E90")]
		public static void Invoke(bool implicitInstanceIndices, in NativeArray<EntityId> rendererGroupIDs, in NativeArray<UnityEngine.Rendering.GPUDrivenPackedRendererData> packedRendererData, in NativeArray<int> instanceOffsets, in NativeArray<int> instanceCounts, ref InstanceAllocators instanceAllocators, ref CPUInstanceData instanceData, ref CPUPerCameraInstanceData perCameraInstanceData, ref CPUSharedInstanceData sharedInstanceData, ref NativeArray<InstanceHandle> instances, ref NativeParallelMultiHashMap<int, InstanceHandle> rendererGroupInstanceMultiHash)
		{
		}
	}

	[Token(Token = "0x2000098")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	internal delegate void FreeRendererGroupInstances_0000029F_0024PostfixBurstDelegate(in NativeArray<EntityId>.ReadOnly rendererGroupsID, ref InstanceAllocators instanceAllocators, ref CPUInstanceData instanceData, ref CPUPerCameraInstanceData perCameraInstanceData, ref CPUSharedInstanceData sharedInstanceData, ref NativeParallelMultiHashMap<int, InstanceHandle> rendererGroupInstanceMultiHash);

	[Token(Token = "0x2000099")]
	internal static class FreeRendererGroupInstances_0000029F_0024BurstDirectCall
	{
		[Token(Token = "0x40002E0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static IntPtr Pointer;

		[Token(Token = "0x60002DF")]
		[Address(RVA = "0x2BEDD40", Offset = "0x2BEC340", VA = "0x182BEDD40")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x60002E0")]
		[Address(RVA = "0x2BEDED0", Offset = "0x2BEC4D0", VA = "0x182BEDED0")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x60002E1")]
		[Address(RVA = "0x2BEE050", Offset = "0x2BEC650", VA = "0x182BEE050")]
		public static void Invoke(in NativeArray<EntityId>.ReadOnly rendererGroupsID, ref InstanceAllocators instanceAllocators, ref CPUInstanceData instanceData, ref CPUPerCameraInstanceData perCameraInstanceData, ref CPUSharedInstanceData sharedInstanceData, ref NativeParallelMultiHashMap<int, InstanceHandle> rendererGroupInstanceMultiHash)
		{
		}
	}

	[Token(Token = "0x200009A")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	internal delegate void FreeInstances_000002A0_0024PostfixBurstDelegate(in NativeArray<InstanceHandle>.ReadOnly instances, ref InstanceAllocators instanceAllocators, ref CPUInstanceData instanceData, ref CPUPerCameraInstanceData perCameraInstanceData, ref CPUSharedInstanceData sharedInstanceData, ref NativeParallelMultiHashMap<int, InstanceHandle> rendererGroupInstanceMultiHash);

	[Token(Token = "0x200009B")]
	internal static class FreeInstances_000002A0_0024BurstDirectCall
	{
		[Token(Token = "0x40002E1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static IntPtr Pointer;

		[Token(Token = "0x60002E6")]
		[Address(RVA = "0x2BECFF0", Offset = "0x2BEB5F0", VA = "0x182BECFF0")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x60002E7")]
		[Address(RVA = "0x2BED180", Offset = "0x2BEB780", VA = "0x182BED180")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x60002E8")]
		[Address(RVA = "0x2BED300", Offset = "0x2BEB900", VA = "0x182BED300")]
		public static void Invoke(in NativeArray<InstanceHandle>.ReadOnly instances, ref InstanceAllocators instanceAllocators, ref CPUInstanceData instanceData, ref CPUPerCameraInstanceData perCameraInstanceData, ref CPUSharedInstanceData sharedInstanceData, ref NativeParallelMultiHashMap<int, InstanceHandle> rendererGroupInstanceMultiHash)
		{
		}
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x2BF0550", Offset = "0x2BEEB50", VA = "0x182BF0550")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	[MonoPInvokeCallback(typeof(UnityEngine_002ERendering_002EReallocateInstances_0000029E_0024PostfixBurstDelegate))]
	public static void ReallocateInstances(bool implicitInstanceIndices, in NativeArray<EntityId> rendererGroupIDs, in NativeArray<UnityEngine.Rendering.GPUDrivenPackedRendererData> packedRendererData, in NativeArray<int> instanceOffsets, in NativeArray<int> instanceCounts, ref InstanceAllocators instanceAllocators, ref CPUInstanceData instanceData, ref CPUPerCameraInstanceData perCameraInstanceData, ref CPUSharedInstanceData sharedInstanceData, ref NativeArray<InstanceHandle> instances, ref NativeParallelMultiHashMap<int, InstanceHandle> rendererGroupInstanceMultiHash)
	{
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x2BEE050", Offset = "0x2BEC650", VA = "0x182BEE050")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	[MonoPInvokeCallback(typeof(UnityEngine_002ERendering_002EFreeRendererGroupInstances_0000029F_0024PostfixBurstDelegate))]
	public static void FreeRendererGroupInstances(in NativeArray<EntityId>.ReadOnly rendererGroupsID, ref InstanceAllocators instanceAllocators, ref CPUInstanceData instanceData, ref CPUPerCameraInstanceData perCameraInstanceData, ref CPUSharedInstanceData sharedInstanceData, ref NativeParallelMultiHashMap<int, InstanceHandle> rendererGroupInstanceMultiHash)
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x2BED300", Offset = "0x2BEB900", VA = "0x182BED300")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	[MonoPInvokeCallback(typeof(UnityEngine_002ERendering_002EFreeInstances_000002A0_0024PostfixBurstDelegate))]
	public static void FreeInstances(in NativeArray<InstanceHandle>.ReadOnly instances, ref InstanceAllocators instanceAllocators, ref CPUInstanceData instanceData, ref CPUPerCameraInstanceData perCameraInstanceData, ref CPUSharedInstanceData sharedInstanceData, ref NativeParallelMultiHashMap<int, InstanceHandle> rendererGroupInstanceMultiHash)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x2BF0040", Offset = "0x2BEE640", VA = "0x182BF0040")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	internal static void ReallocateInstances_0024BurstManaged(bool implicitInstanceIndices, in NativeArray<EntityId> rendererGroupIDs, in NativeArray<UnityEngine.Rendering.GPUDrivenPackedRendererData> packedRendererData, in NativeArray<int> instanceOffsets, in NativeArray<int> instanceCounts, ref InstanceAllocators instanceAllocators, ref CPUInstanceData instanceData, ref CPUPerCameraInstanceData perCameraInstanceData, ref CPUSharedInstanceData sharedInstanceData, ref NativeArray<InstanceHandle> instances, ref NativeParallelMultiHashMap<int, InstanceHandle> rendererGroupInstanceMultiHash)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x2BEFD80", Offset = "0x2BEE380", VA = "0x182BEFD80")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	internal static void FreeRendererGroupInstances_0024BurstManaged(in NativeArray<EntityId>.ReadOnly rendererGroupsID, ref InstanceAllocators instanceAllocators, ref CPUInstanceData instanceData, ref CPUPerCameraInstanceData perCameraInstanceData, ref CPUSharedInstanceData sharedInstanceData, ref NativeParallelMultiHashMap<int, InstanceHandle> rendererGroupInstanceMultiHash)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x2BEFA50", Offset = "0x2BEE050", VA = "0x182BEFA50")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	internal static void FreeInstances_0024BurstManaged(in NativeArray<InstanceHandle>.ReadOnly instances, ref InstanceAllocators instanceAllocators, ref CPUInstanceData instanceData, ref CPUPerCameraInstanceData perCameraInstanceData, ref CPUSharedInstanceData sharedInstanceData, ref NativeParallelMultiHashMap<int, InstanceHandle> rendererGroupInstanceMultiHash)
	{
	}
}
