// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUDrivenProcessor
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x200038D")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/GPUDrivenProcessor.h")]
internal class GPUDrivenProcessor
{
	[Token(Token = "0x200038E")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x60015BB")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToNative(GPUDrivenProcessor obj)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x4000A9C")]
	[FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x4000A9F")]
	[FieldOffset(Offset = "0x0")]
	private static GPUDrivenRendererDataNativeCallback s_NativeRendererCallback;

	[Token(Token = "0x4000AA0")]
	[FieldOffset(Offset = "0x8")]
	private static GPUDrivenLODGroupDataNativeCallback s_NativeLODGroupCallback;

	[Token(Token = "0x17000329")]
	internal List<Mesh> scratchMeshes
	{
		[Token(Token = "0x60015A1")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60015A2")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700032A")]
	internal List<Material> scratchMaterials
	{
		[Token(Token = "0x60015A3")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60015A4")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700032B")]
	public bool enablePartialRendering
	{
		[Token(Token = "0x60015B0")]
		[Address(RVA = "0x2F66B80", Offset = "0x2F65180", VA = "0x182F66B80")]
		set
		{
		}
	}

	[Token(Token = "0x60015A5")]
	[Address(RVA = "0x2F66A20", Offset = "0x2F65020", VA = "0x182F66A20")]
	public GPUDrivenProcessor()
	{
	}

	[Token(Token = "0x60015A6")]
	[Address(RVA = "0x2F66710", Offset = "0x2F64D10", VA = "0x182F66710", Slot = "1")]
	~GPUDrivenProcessor()
	{
	}

	[Token(Token = "0x60015A7")]
	[Address(RVA = "0x2F66300", Offset = "0x2F64900", VA = "0x182F66300")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60015A8")]
	[Address(RVA = "0x2F65E30", Offset = "0x2F64430", VA = "0x182F65E30")]
	private void Destroy()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60015A9")]
	[Address(RVA = "0x2F66770", Offset = "0x2F64D70", VA = "0x182F66770")]
	private static extern IntPtr Internal_Create();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60015AA")]
	[Address(RVA = "0x2F667A0", Offset = "0x2F64DA0", VA = "0x182F667A0")]
	private static extern void Internal_Destroy(IntPtr ptr);

	[Token(Token = "0x60015AB")]
	[Address(RVA = "0x2F665E0", Offset = "0x2F64BE0", VA = "0x182F665E0")]
	private void EnableGPUDrivenRenderingAndDispatchRendererData(ReadOnlySpan<EntityId> renderersID, GPUDrivenRendererDataNativeCallback callback, List<Mesh> meshes, List<Material> materials, GPUDrivenRendererDataCallback param, bool materialUpdateOnly)
	{
	}

	[Token(Token = "0x60015AC")]
	[Address(RVA = "0x2F663E0", Offset = "0x2F649E0", VA = "0x182F663E0")]
	public void EnableGPUDrivenRenderingAndDispatchRendererData(ReadOnlySpan<EntityId> renderersID, GPUDrivenRendererDataCallback callback, bool materialUpdateOnly = false)
	{
	}

	[Token(Token = "0x60015AD")]
	[Address(RVA = "0x2F65F10", Offset = "0x2F64510", VA = "0x182F65F10")]
	public void DisableGPUDrivenRendering(ReadOnlySpan<EntityId> renderersID)
	{
	}

	[Token(Token = "0x60015AE")]
	[Address(RVA = "0x2F66060", Offset = "0x2F64660", VA = "0x182F66060")]
	private void DispatchLODGroupData(ReadOnlySpan<EntityId> lodGroupID, GPUDrivenLODGroupDataNativeCallback callback, GPUDrivenLODGroupDataCallback param)
	{
	}

	[Token(Token = "0x60015AF")]
	[Address(RVA = "0x2F66170", Offset = "0x2F64770", VA = "0x182F66170")]
	public void DispatchLODGroupData(ReadOnlySpan<EntityId> lodGroupID, GPUDrivenLODGroupDataCallback callback)
	{
	}

	[Token(Token = "0x60015B1")]
	[Address(RVA = "0x2F65DA0", Offset = "0x2F643A0", VA = "0x182F65DA0")]
	public void ClearMaterialFilters()
	{
	}

	[Token(Token = "0x60015B2")]
	[Address(RVA = "0x2F65A60", Offset = "0x2F64060", VA = "0x182F65A60")]
	[UnityEngine.Bindings.FreeFunction("GPUDrivenProcessor::ClassifyMaterials", IsThreadSafe = true)]
	private static int ClassifyMaterialsImpl(ReadOnlySpan<EntityId> materialIDs, Span<EntityId> unsupportedMaterialIDs, Span<EntityId> supportedMaterialIDs, Span<GPUDrivenPackedMaterialData> supportedPackedMaterialDatas)
	{
		return default(int);
	}

	[Token(Token = "0x60015B3")]
	[Address(RVA = "0x2F65C10", Offset = "0x2F64210", VA = "0x182F65C10")]
	public static int ClassifyMaterials(NativeArray<EntityId> materialIDs, NativeArray<EntityId> unsupportedMaterialIDs, NativeArray<EntityId> supportedMaterialIDs, NativeArray<GPUDrivenPackedMaterialData> supportedPackedMaterialDatas)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60015B5")]
	[Address(RVA = "0x2F66380", Offset = "0x2F64980", VA = "0x182F66380")]
	private static extern void EnableGPUDrivenRenderingAndDispatchRendererData_Injected(IntPtr _unity_self, ref ManagedSpanWrapper renderersID, GPUDrivenRendererDataNativeCallback callback, List<Mesh> meshes, List<Material> materials, GPUDrivenRendererDataCallback param, bool materialUpdateOnly);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60015B6")]
	[Address(RVA = "0x2F65EC0", Offset = "0x2F644C0", VA = "0x182F65EC0")]
	private static extern void DisableGPUDrivenRendering_Injected(IntPtr _unity_self, ref ManagedSpanWrapper renderersID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60015B7")]
	[Address(RVA = "0x2F66010", Offset = "0x2F64610", VA = "0x182F66010")]
	private static extern void DispatchLODGroupData_Injected(IntPtr _unity_self, ref ManagedSpanWrapper lodGroupID, GPUDrivenLODGroupDataNativeCallback callback, GPUDrivenLODGroupDataCallback param);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60015B8")]
	[Address(RVA = "0x2F66B30", Offset = "0x2F65130", VA = "0x182F66B30")]
	private static extern void set_enablePartialRendering_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60015B9")]
	[Address(RVA = "0x2F65D60", Offset = "0x2F64360", VA = "0x182F65D60")]
	private static extern void ClearMaterialFilters_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60015BA")]
	[Address(RVA = "0x2F65A10", Offset = "0x2F64010", VA = "0x182F65A10")]
	private static extern int ClassifyMaterialsImpl_Injected(ref ManagedSpanWrapper materialIDs, ref ManagedSpanWrapper unsupportedMaterialIDs, ref ManagedSpanWrapper supportedMaterialIDs, ref ManagedSpanWrapper supportedPackedMaterialDatas);
}
