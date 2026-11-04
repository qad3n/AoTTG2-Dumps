// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUResidentDrawerBurst
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
		[Address(RVA = "0x2BBC8A0", Offset = "0x2BBAEA0", VA = "0x182BBC8A0")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x60000F3")]
		[Address(RVA = "0x2BBCA30", Offset = "0x2BBB030", VA = "0x182BBCA30")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x60000F4")]
		[Address(RVA = "0x2BBCBB0", Offset = "0x2BBB1B0", VA = "0x182BBCBB0")]
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
		[Address(RVA = "0x2BC1EF0", Offset = "0x2BC04F0", VA = "0x182BC1EF0")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x60000FA")]
		[Address(RVA = "0x2BC2080", Offset = "0x2BC0680", VA = "0x182BC2080")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x60000FB")]
		[Address(RVA = "0x2BC2200", Offset = "0x2BC0800", VA = "0x182BC2200")]
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
		[Address(RVA = "0x2BC95E0", Offset = "0x2BC7BE0", VA = "0x182BC95E0")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x6000101")]
		[Address(RVA = "0x2BC9770", Offset = "0x2BC7D70", VA = "0x182BC9770")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x6000102")]
		[Address(RVA = "0x2BC98F0", Offset = "0x2BC7EF0", VA = "0x182BC98F0")]
		public static void Invoke(in NativeArray<EntityId> materialIDs, in NativeArray<UnityEngine.Rendering.GPUDrivenPackedMaterialData> packedMaterialDatas, in NativeParallelHashMap<EntityId, UnityEngine.Rendering.GPUDrivenPackedMaterialData>.ReadOnly packedMaterialHash, ref NativeHashSet<EntityId> filteredMaterials)
		{
		}
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x2BBCBB0", Offset = "0x2BBB1B0", VA = "0x182BBCBB0")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	[MonoPInvokeCallback(typeof(UnityEngine_002ERendering_002EClassifyMaterials_000000E8_0024PostfixBurstDelegate))]
	public static void ClassifyMaterials(in NativeArray<EntityId> materialIDs, in NativeParallelHashMap<EntityId, BatchMaterialID>.ReadOnly batchMaterialHash, ref NativeList<EntityId> supportedMaterialIDs, ref NativeList<EntityId> unsupportedMaterialIDs, ref NativeList<UnityEngine.Rendering.GPUDrivenPackedMaterialData> supportedPackedMaterialDatas)
	{
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x2BC4BD0", Offset = "0x2BC31D0", VA = "0x182BC4BD0")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	[MonoPInvokeCallback(typeof(UnityEngine_002ERendering_002EFindUnsupportedRenderers_000000E9_0024PostfixBurstDelegate))]
	public static void FindUnsupportedRenderers(in NativeArray<EntityId> unsupportedMaterials, in NativeArray<SmallEntityIdArray>.ReadOnly materialIDArrays, in NativeArray<EntityId>.ReadOnly rendererGroups, ref NativeList<EntityId> unsupportedRenderers)
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x2BC4CB0", Offset = "0x2BC32B0", VA = "0x182BC4CB0")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	[MonoPInvokeCallback(typeof(UnityEngine_002ERendering_002EGetMaterialsWithChangedPackedMaterial_000000EA_0024PostfixBurstDelegate))]
	public static void GetMaterialsWithChangedPackedMaterial(in NativeArray<EntityId> materialIDs, in NativeArray<UnityEngine.Rendering.GPUDrivenPackedMaterialData> packedMaterialDatas, in NativeParallelHashMap<EntityId, UnityEngine.Rendering.GPUDrivenPackedMaterialData>.ReadOnly packedMaterialHash, ref NativeHashSet<EntityId> filteredMaterials)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x2BC4570", Offset = "0x2BC2B70", VA = "0x182BC4570")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	internal static void ClassifyMaterials_0024BurstManaged(in NativeArray<EntityId> materialIDs, in NativeParallelHashMap<EntityId, BatchMaterialID>.ReadOnly batchMaterialHash, ref NativeList<EntityId> supportedMaterialIDs, ref NativeList<EntityId> unsupportedMaterialIDs, ref NativeList<UnityEngine.Rendering.GPUDrivenPackedMaterialData> supportedPackedMaterialDatas)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x2BC4A30", Offset = "0x2BC3030", VA = "0x182BC4A30")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	internal static void FindUnsupportedRenderers_0024BurstManaged(in NativeArray<EntityId> unsupportedMaterials, in NativeArray<SmallEntityIdArray>.ReadOnly materialIDArrays, in NativeArray<EntityId>.ReadOnly rendererGroups, ref NativeList<EntityId> unsupportedRenderers)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x2BC4BE0", Offset = "0x2BC31E0", VA = "0x182BC4BE0")]
	[BurstCompile(DisableSafetyChecks = true, OptimizeFor = OptimizeFor.Performance)]
	internal static void GetMaterialsWithChangedPackedMaterial_0024BurstManaged(in NativeArray<EntityId> materialIDs, in NativeArray<UnityEngine.Rendering.GPUDrivenPackedMaterialData> packedMaterialDatas, in NativeParallelHashMap<EntityId, UnityEngine.Rendering.GPUDrivenPackedMaterialData>.ReadOnly packedMaterialHash, ref NativeHashSet<EntityId> filteredMaterials)
	{
	}
}
