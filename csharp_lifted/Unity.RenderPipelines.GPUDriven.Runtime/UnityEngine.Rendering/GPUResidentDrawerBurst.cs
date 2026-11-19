// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUResidentDrawerBurst
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

[Token(Token = "0x200001E")]
[BurstCompile]
internal static class GPUResidentDrawerBurst
{
	[Token(Token = "0x200001F")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	internal delegate void ClassifyMaterials_000000E8_0024PostfixBurstDelegate(in NativeArray<EntityId> materialIDs, in NativeParallelHashMap<EntityId, BatchMaterialID>.ReadOnly batchMaterialHash, ref NativeList<EntityId> supportedMaterialIDs, ref NativeList<EntityId> unsupportedMaterialIDs, ref NativeList<UnityEngine.Rendering.GPUDrivenPackedMaterialData> supportedPackedMaterialDatas);

	[Token(Token = "0x2000020")]
	internal static class ClassifyMaterials_000000E8_0024BurstDirectCall
	{
		[Token(Token = "0x4000066")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static IntPtr Pointer;

		[Token(Token = "0x60000F2")]
		[Address(RVA = "0x65C0CB0", Offset = "0x65BFCB0", VA = "0x65C0CB0")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x60000F3")]
		[Address(RVA = "0x65C0E20", Offset = "0x65BFE20", VA = "0x65C0E20")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x60000F4")]
		[Address(RVA = "0x65BFFF0", Offset = "0x65BEFF0", VA = "0x65BFFF0")]
		public static void Invoke(in NativeArray<EntityId> materialIDs, in NativeParallelHashMap<EntityId, BatchMaterialID>.ReadOnly batchMaterialHash, ref NativeList<EntityId> supportedMaterialIDs, ref NativeList<EntityId> unsupportedMaterialIDs, ref NativeList<UnityEngine.Rendering.GPUDrivenPackedMaterialData> supportedPackedMaterialDatas)
		{
		}
	}

	[Token(Token = "0x2000021")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	internal delegate void FindUnsupportedRenderers_000000E9_0024PostfixBurstDelegate(in NativeArray<EntityId> unsupportedMaterials, in NativeArray<SmallEntityIdArray>.ReadOnly materialIDArrays, in NativeArray<EntityId>.ReadOnly rendererGroups, ref NativeList<EntityId> unsupportedRenderers);

	[Token(Token = "0x2000022")]
	internal static class FindUnsupportedRenderers_000000E9_0024BurstDirectCall
	{
		[Token(Token = "0x4000067")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static IntPtr Pointer;

		[Token(Token = "0x60000F9")]
		[Address(RVA = "0x65C1010", Offset = "0x65C0010", VA = "0x65C1010")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x60000FA")]
		[Address(RVA = "0x65C1180", Offset = "0x65C0180", VA = "0x65C1180")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x60000FB")]
		[Address(RVA = "0x65C00D0", Offset = "0x65BF0D0", VA = "0x65C00D0")]
		public static void Invoke(in NativeArray<EntityId> unsupportedMaterials, in NativeArray<SmallEntityIdArray>.ReadOnly materialIDArrays, in NativeArray<EntityId>.ReadOnly rendererGroups, ref NativeList<EntityId> unsupportedRenderers)
		{
		}
	}

	[Token(Token = "0x2000023")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	internal delegate void GetMaterialsWithChangedPackedMaterial_000000EA_0024PostfixBurstDelegate(in NativeArray<EntityId> materialIDs, in NativeArray<UnityEngine.Rendering.GPUDrivenPackedMaterialData> packedMaterialDatas, in NativeParallelHashMap<EntityId, UnityEngine.Rendering.GPUDrivenPackedMaterialData>.ReadOnly packedMaterialHash, ref NativeHashSet<EntityId> filteredMaterials);

	[Token(Token = "0x2000024")]
	internal static class GetMaterialsWithChangedPackedMaterial_000000EA_0024BurstDirectCall
	{
		[Token(Token = "0x4000068")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static IntPtr Pointer;

		[Token(Token = "0x6000100")]
		[Address(RVA = "0x65C1370", Offset = "0x65C0370", VA = "0x65C1370")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x6000101")]
		[Address(RVA = "0x65C14E0", Offset = "0x65C04E0", VA = "0x65C14E0")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x6000102")]
		[Address(RVA = "0x65C01A0", Offset = "0x65BF1A0", VA = "0x65C01A0")]
		public static void Invoke(in NativeArray<EntityId> materialIDs, in NativeArray<UnityEngine.Rendering.GPUDrivenPackedMaterialData> packedMaterialDatas, in NativeParallelHashMap<EntityId, UnityEngine.Rendering.GPUDrivenPackedMaterialData>.ReadOnly packedMaterialHash, ref NativeHashSet<EntityId> filteredMaterials)
		{
		}
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x65BF8C0", Offset = "0x65BE8C0", VA = "0x65BF8C0")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	[MonoPInvokeCallback(typeof(UnityEngine_002ERendering_002EClassifyMaterials_000000E8_0024PostfixBurstDelegate))]
	public static void ClassifyMaterials(in NativeArray<EntityId> materialIDs, in NativeParallelHashMap<EntityId, BatchMaterialID>.ReadOnly batchMaterialHash, ref NativeList<EntityId> supportedMaterialIDs, ref NativeList<EntityId> unsupportedMaterialIDs, ref NativeList<UnityEngine.Rendering.GPUDrivenPackedMaterialData> supportedPackedMaterialDatas)
	{
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x65BF9A0", Offset = "0x65BE9A0", VA = "0x65BF9A0")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	[MonoPInvokeCallback(typeof(UnityEngine_002ERendering_002EFindUnsupportedRenderers_000000E9_0024PostfixBurstDelegate))]
	public static void FindUnsupportedRenderers(in NativeArray<EntityId> unsupportedMaterials, in NativeArray<SmallEntityIdArray>.ReadOnly materialIDArrays, in NativeArray<EntityId>.ReadOnly rendererGroups, ref NativeList<EntityId> unsupportedRenderers)
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x65BFA70", Offset = "0x65BEA70", VA = "0x65BFA70")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	[MonoPInvokeCallback(typeof(UnityEngine_002ERendering_002EGetMaterialsWithChangedPackedMaterial_000000EA_0024PostfixBurstDelegate))]
	public static void GetMaterialsWithChangedPackedMaterial(in NativeArray<EntityId> materialIDs, in NativeArray<UnityEngine.Rendering.GPUDrivenPackedMaterialData> packedMaterialDatas, in NativeParallelHashMap<EntityId, UnityEngine.Rendering.GPUDrivenPackedMaterialData>.ReadOnly packedMaterialHash, ref NativeHashSet<EntityId> filteredMaterials)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x65C0320", Offset = "0x65BF320", VA = "0x65C0320")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	internal static void ClassifyMaterials_0024BurstManaged(in NativeArray<EntityId> materialIDs, in NativeParallelHashMap<EntityId, BatchMaterialID>.ReadOnly batchMaterialHash, ref NativeList<EntityId> supportedMaterialIDs, ref NativeList<EntityId> unsupportedMaterialIDs, ref NativeList<UnityEngine.Rendering.GPUDrivenPackedMaterialData> supportedPackedMaterialDatas)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x65C0820", Offset = "0x65BF820", VA = "0x65C0820")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	internal static void FindUnsupportedRenderers_0024BurstManaged(in NativeArray<EntityId> unsupportedMaterials, in NativeArray<SmallEntityIdArray>.ReadOnly materialIDArrays, in NativeArray<EntityId>.ReadOnly rendererGroups, ref NativeList<EntityId> unsupportedRenderers)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x65C09E0", Offset = "0x65BF9E0", VA = "0x65C09E0")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	internal static void GetMaterialsWithChangedPackedMaterial_0024BurstManaged(in NativeArray<EntityId> materialIDs, in NativeArray<UnityEngine.Rendering.GPUDrivenPackedMaterialData> packedMaterialDatas, in NativeParallelHashMap<EntityId, UnityEngine.Rendering.GPUDrivenPackedMaterialData>.ReadOnly packedMaterialHash, ref NativeHashSet<EntityId> filteredMaterials)
	{
	}
}
