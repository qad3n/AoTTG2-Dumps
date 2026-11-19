// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUDrivenProcessor
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20003C9")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/GPUDrivenProcessor.h")]
internal class GPUDrivenProcessor
{
	[Token(Token = "0x20003CA")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6001771")]
		[Address(RVA = "0x6967220", Offset = "0x6966220", VA = "0x6967220")]
		public static IntPtr ConvertToNative(GPUDrivenProcessor obj)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x4000C20")]
	[FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x4000C23")]
	[FieldOffset(Offset = "0x0")]
	private static GPUDrivenRendererDataNativeCallback s_NativeRendererCallback;

	[Token(Token = "0x4000C24")]
	[FieldOffset(Offset = "0x8")]
	private static GPUDrivenLODGroupDataNativeCallback s_NativeLODGroupCallback;

	[Token(Token = "0x170003BB")]
	internal List<Mesh> scratchMeshes
	{
		[Token(Token = "0x6001757")]
		[Address(RVA = "0x6966050", Offset = "0x6965050", VA = "0x6966050")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001758")]
		[Address(RVA = "0x6966060", Offset = "0x6965060", VA = "0x6966060")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003BC")]
	internal List<Material> scratchMaterials
	{
		[Token(Token = "0x6001759")]
		[Address(RVA = "0x6966070", Offset = "0x6965070", VA = "0x6966070")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600175A")]
		[Address(RVA = "0x6966080", Offset = "0x6965080", VA = "0x6966080")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170003BD")]
	public bool enablePartialRendering
	{
		[Token(Token = "0x6001766")]
		[Address(RVA = "0x6966AB0", Offset = "0x6965AB0", VA = "0x6966AB0")]
		set
		{
		}
	}

	[Token(Token = "0x600175B")]
	[Address(RVA = "0x6966090", Offset = "0x6965090", VA = "0x6966090")]
	public GPUDrivenProcessor()
	{
	}

	[Token(Token = "0x600175C")]
	[Address(RVA = "0x69661F0", Offset = "0x69651F0", VA = "0x69661F0", Slot = "1")]
	~GPUDrivenProcessor()
	{
	}

	[Token(Token = "0x600175D")]
	[Address(RVA = "0x6966370", Offset = "0x6965370", VA = "0x6966370")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600175E")]
	[Address(RVA = "0x69662E0", Offset = "0x69652E0", VA = "0x69662E0")]
	private void Destroy()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600175F")]
	[Address(RVA = "0x69661C0", Offset = "0x69651C0", VA = "0x69661C0")]
	private static extern IntPtr Internal_Create();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001760")]
	[Address(RVA = "0x6966460", Offset = "0x6965460", VA = "0x6966460")]
	private static extern void Internal_Destroy(IntPtr ptr);

	[Token(Token = "0x6001761")]
	[Address(RVA = "0x6966490", Offset = "0x6965490", VA = "0x6966490")]
	private void EnableGPUDrivenRenderingAndDispatchRendererData(ReadOnlySpan<EntityId> renderersID, GPUDrivenRendererDataNativeCallback callback, List<Mesh> meshes, List<Material> materials, GPUDrivenRendererDataCallback param, bool materialUpdateOnly)
	{
	}

	[Token(Token = "0x6001762")]
	[Address(RVA = "0x6966620", Offset = "0x6965620", VA = "0x6966620")]
	public void EnableGPUDrivenRenderingAndDispatchRendererData(ReadOnlySpan<EntityId> renderersID, GPUDrivenRendererDataCallback callback, bool materialUpdateOnly = false)
	{
	}

	[Token(Token = "0x6001763")]
	[Address(RVA = "0x6966720", Offset = "0x6965720", VA = "0x6966720")]
	public void DisableGPUDrivenRendering(ReadOnlySpan<EntityId> renderersID)
	{
	}

	[Token(Token = "0x6001764")]
	[Address(RVA = "0x6966870", Offset = "0x6965870", VA = "0x6966870")]
	private void DispatchLODGroupData(ReadOnlySpan<EntityId> lodGroupID, GPUDrivenLODGroupDataNativeCallback callback, GPUDrivenLODGroupDataCallback param)
	{
	}

	[Token(Token = "0x6001765")]
	[Address(RVA = "0x69669E0", Offset = "0x69659E0", VA = "0x69669E0")]
	public void DispatchLODGroupData(ReadOnlySpan<EntityId> lodGroupID, GPUDrivenLODGroupDataCallback callback)
	{
	}

	[Token(Token = "0x6001767")]
	[Address(RVA = "0x6966BA0", Offset = "0x6965BA0", VA = "0x6966BA0")]
	public void ClearMaterialFilters()
	{
	}

	[Token(Token = "0x6001768")]
	[Address(RVA = "0x6966C80", Offset = "0x6965C80", VA = "0x6966C80")]
	[UnityEngine.Bindings.FreeFunction("GPUDrivenProcessor::ClassifyMaterials", IsThreadSafe = true)]
	private static int ClassifyMaterialsImpl(ReadOnlySpan<EntityId> materialIDs, Span<EntityId> unsupportedMaterialIDs, Span<EntityId> supportedMaterialIDs, Span<GPUDrivenPackedMaterialData> supportedPackedMaterialDatas)
	{
		return default(int);
	}

	[Token(Token = "0x6001769")]
	[Address(RVA = "0x6966EC0", Offset = "0x6965EC0", VA = "0x6966EC0")]
	public static int ClassifyMaterials(NativeArray<EntityId> materialIDs, NativeArray<EntityId> unsupportedMaterialIDs, NativeArray<EntityId> supportedMaterialIDs, NativeArray<GPUDrivenPackedMaterialData> supportedPackedMaterialDatas)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600176B")]
	[Address(RVA = "0x69665C0", Offset = "0x69655C0", VA = "0x69665C0")]
	private static extern void EnableGPUDrivenRenderingAndDispatchRendererData_Injected(IntPtr _unity_self, ref ManagedSpanWrapper renderersID, GPUDrivenRendererDataNativeCallback callback, List<Mesh> meshes, List<Material> materials, GPUDrivenRendererDataCallback param, bool materialUpdateOnly);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600176C")]
	[Address(RVA = "0x6966830", Offset = "0x6965830", VA = "0x6966830")]
	private static extern void DisableGPUDrivenRendering_Injected(IntPtr _unity_self, ref ManagedSpanWrapper renderersID);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600176D")]
	[Address(RVA = "0x6966990", Offset = "0x6965990", VA = "0x6966990")]
	private static extern void DispatchLODGroupData_Injected(IntPtr _unity_self, ref ManagedSpanWrapper lodGroupID, GPUDrivenLODGroupDataNativeCallback callback, GPUDrivenLODGroupDataCallback param);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600176E")]
	[Address(RVA = "0x6966B60", Offset = "0x6965B60", VA = "0x6966B60")]
	private static extern void set_enablePartialRendering_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600176F")]
	[Address(RVA = "0x6966C50", Offset = "0x6965C50", VA = "0x6966C50")]
	private static extern void ClearMaterialFilters_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001770")]
	[Address(RVA = "0x6966E70", Offset = "0x6965E70", VA = "0x6966E70")]
	private static extern int ClassifyMaterialsImpl_Injected(ref ManagedSpanWrapper materialIDs, ref ManagedSpanWrapper unsupportedMaterialIDs, ref ManagedSpanWrapper supportedMaterialIDs, ref ManagedSpanWrapper supportedPackedMaterialDatas);
}
