// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceDataSystemBurst
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
		[Address(RVA = "0x65E3620", Offset = "0x65E2620", VA = "0x65E3620")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x60002D9")]
		[Address(RVA = "0x65E3780", Offset = "0x65E2780", VA = "0x65E3780")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x60002DA")]
		[Address(RVA = "0x65E2440", Offset = "0x65E1440", VA = "0x65E2440")]
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
		[Address(RVA = "0x65E39C0", Offset = "0x65E29C0", VA = "0x65E39C0")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x60002E0")]
		[Address(RVA = "0x65E3B30", Offset = "0x65E2B30", VA = "0x65E3B30")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x60002E1")]
		[Address(RVA = "0x65E2580", Offset = "0x65E1580", VA = "0x65E2580")]
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
		[Address(RVA = "0x65E3D70", Offset = "0x65E2D70", VA = "0x65E3D70")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x60002E7")]
		[Address(RVA = "0x65E3EE0", Offset = "0x65E2EE0", VA = "0x65E3EE0")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x60002E8")]
		[Address(RVA = "0x65E2670", Offset = "0x65E1670", VA = "0x65E2670")]
		public static void Invoke(in NativeArray<InstanceHandle>.ReadOnly instances, ref InstanceAllocators instanceAllocators, ref CPUInstanceData instanceData, ref CPUPerCameraInstanceData perCameraInstanceData, ref CPUSharedInstanceData sharedInstanceData, ref NativeParallelMultiHashMap<int, InstanceHandle> rendererGroupInstanceMultiHash)
		{
		}
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x65E2230", Offset = "0x65E1230", VA = "0x65E2230")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	[MonoPInvokeCallback(typeof(UnityEngine_002ERendering_002EReallocateInstances_0000029E_0024PostfixBurstDelegate))]
	public static void ReallocateInstances(bool implicitInstanceIndices, in NativeArray<EntityId> rendererGroupIDs, in NativeArray<UnityEngine.Rendering.GPUDrivenPackedRendererData> packedRendererData, in NativeArray<int> instanceOffsets, in NativeArray<int> instanceCounts, ref InstanceAllocators instanceAllocators, ref CPUInstanceData instanceData, ref CPUPerCameraInstanceData perCameraInstanceData, ref CPUSharedInstanceData sharedInstanceData, ref NativeArray<InstanceHandle> instances, ref NativeParallelMultiHashMap<int, InstanceHandle> rendererGroupInstanceMultiHash)
	{
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x65E2260", Offset = "0x65E1260", VA = "0x65E2260")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	[MonoPInvokeCallback(typeof(UnityEngine_002ERendering_002EFreeRendererGroupInstances_0000029F_0024PostfixBurstDelegate))]
	public static void FreeRendererGroupInstances(in NativeArray<EntityId>.ReadOnly rendererGroupsID, ref InstanceAllocators instanceAllocators, ref CPUInstanceData instanceData, ref CPUPerCameraInstanceData perCameraInstanceData, ref CPUSharedInstanceData sharedInstanceData, ref NativeParallelMultiHashMap<int, InstanceHandle> rendererGroupInstanceMultiHash)
	{
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x65E2350", Offset = "0x65E1350", VA = "0x65E2350")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	[MonoPInvokeCallback(typeof(UnityEngine_002ERendering_002EFreeInstances_000002A0_0024PostfixBurstDelegate))]
	public static void FreeInstances(in NativeArray<InstanceHandle>.ReadOnly instances, ref InstanceAllocators instanceAllocators, ref CPUInstanceData instanceData, ref CPUPerCameraInstanceData perCameraInstanceData, ref CPUSharedInstanceData sharedInstanceData, ref NativeParallelMultiHashMap<int, InstanceHandle> rendererGroupInstanceMultiHash)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x65E2760", Offset = "0x65E1760", VA = "0x65E2760")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	internal static void ReallocateInstances_0024BurstManaged(bool implicitInstanceIndices, in NativeArray<EntityId> rendererGroupIDs, in NativeArray<UnityEngine.Rendering.GPUDrivenPackedRendererData> packedRendererData, in NativeArray<int> instanceOffsets, in NativeArray<int> instanceCounts, ref InstanceAllocators instanceAllocators, ref CPUInstanceData instanceData, ref CPUPerCameraInstanceData perCameraInstanceData, ref CPUSharedInstanceData sharedInstanceData, ref NativeArray<InstanceHandle> instances, ref NativeParallelMultiHashMap<int, InstanceHandle> rendererGroupInstanceMultiHash)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x65E2D00", Offset = "0x65E1D00", VA = "0x65E2D00")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	internal static void FreeRendererGroupInstances_0024BurstManaged(in NativeArray<EntityId>.ReadOnly rendererGroupsID, ref InstanceAllocators instanceAllocators, ref CPUInstanceData instanceData, ref CPUPerCameraInstanceData perCameraInstanceData, ref CPUSharedInstanceData sharedInstanceData, ref NativeParallelMultiHashMap<int, InstanceHandle> rendererGroupInstanceMultiHash)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x65E2FC0", Offset = "0x65E1FC0", VA = "0x65E2FC0")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	internal static void FreeInstances_0024BurstManaged(in NativeArray<InstanceHandle>.ReadOnly instances, ref InstanceAllocators instanceAllocators, ref CPUInstanceData instanceData, ref CPUPerCameraInstanceData perCameraInstanceData, ref CPUSharedInstanceData sharedInstanceData, ref NativeParallelMultiHashMap<int, InstanceHandle> rendererGroupInstanceMultiHash)
	{
	}
}
