// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUDrivenCallbacks
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x200038C")]
[UnityEngine.Scripting.RequiredByNativeCode]
internal static class GPUDrivenCallbacks
{
	[Token(Token = "0x600159F")]
	[Address(RVA = "0x2F658E0", Offset = "0x2F63EE0", VA = "0x182F658E0")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	public static void InvokeGPUDrivenLODGroupDataNativeCallback(GPUDrivenLODGroupDataNativeCallback callback, in GPUDrivenLODGroupDataNative lodGroupDataNative, GPUDrivenLODGroupDataCallback target)
	{
	}

	[Token(Token = "0x60015A0")]
	[Address(RVA = "0x2F65910", Offset = "0x2F63F10", VA = "0x182F65910")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	public static void InvokeGPUDrivenRendererDataNativeCallback(GPUDrivenRendererDataNativeCallback callback, in GPUDrivenRendererGroupDataNative rendererDataNative, List<Mesh> meshes, List<Material> materials, GPUDrivenRendererDataCallback target)
	{
	}
}
