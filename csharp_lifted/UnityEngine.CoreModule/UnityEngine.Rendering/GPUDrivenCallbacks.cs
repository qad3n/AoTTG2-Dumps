// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUDrivenCallbacks
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003C8")]
[UnityEngine.Scripting.RequiredByNativeCode]
internal static class GPUDrivenCallbacks
{
	[Token(Token = "0x6001755")]
	[Address(RVA = "0x6966010", Offset = "0x6965010", VA = "0x6966010")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	public static void InvokeGPUDrivenLODGroupDataNativeCallback(GPUDrivenLODGroupDataNativeCallback callback, in GPUDrivenLODGroupDataNative lodGroupDataNative, GPUDrivenLODGroupDataCallback target)
	{
	}

	[Token(Token = "0x6001756")]
	[Address(RVA = "0x6966030", Offset = "0x6965030", VA = "0x6966030")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	public static void InvokeGPUDrivenRendererDataNativeCallback(GPUDrivenRendererDataNativeCallback callback, in GPUDrivenRendererGroupDataNative rendererDataNative, List<Mesh> meshes, List<Material> materials, GPUDrivenRendererDataCallback target)
	{
	}
}
