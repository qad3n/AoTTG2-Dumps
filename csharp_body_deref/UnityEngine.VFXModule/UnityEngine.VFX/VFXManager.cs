// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.VFX.VFXManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine.VFX;

[Token(Token = "0x2000009")]
[UnityEngine.Bindings.StaticAccessor("GetVFXManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
[UnityEngine.Bindings.NativeHeader("Modules/VFX/Public/ScriptBindings/VFXManagerBindings.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/VFX/Public/VFXManager.h")]
public static class VFXManager
{
	[Token(Token = "0x4000018")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly VFXCameraXRSettings kDefaultCameraXRSettings;

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x6D20260", Offset = "0x6D1F260", VA = "0x6D20260")]
	public static void ProcessCameraCommand(Camera cam, CommandBuffer cmd, VFXCameraXRSettings camXRSettings, CullingResults results)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x6D202E0", Offset = "0x6D1F2E0", VA = "0x6D202E0")]
	private static void Internal_ProcessCameraCommand([UnityEngine.Bindings.NotNull] Camera cam, CommandBuffer cmd, VFXCameraXRSettings camXRSettings, IntPtr cullResults, IntPtr customPassCullResults)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x6D20450", Offset = "0x6D1F450", VA = "0x6D20450")]
	public static VFXCameraBufferTypes IsCameraBufferNeeded([UnityEngine.Bindings.NotNull] Camera cam)
	{
		return default(VFXCameraBufferTypes);
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x6D20560", Offset = "0x6D1F560", VA = "0x6D20560")]
	public static void SetCameraBuffer([UnityEngine.Bindings.NotNull] Camera cam, VFXCameraBufferTypes type, Texture buffer, int x, int y, int width, int height)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000014")]
	[Address(RVA = "0x6D203F0", Offset = "0x6D1F3F0", VA = "0x6D203F0")]
	private static extern void Internal_ProcessCameraCommand_Injected(IntPtr cam, IntPtr cmd, [In] ref VFXCameraXRSettings camXRSettings, IntPtr cullResults, IntPtr customPassCullResults);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000015")]
	[Address(RVA = "0x6D20530", Offset = "0x6D1F530", VA = "0x6D20530")]
	private static extern VFXCameraBufferTypes IsCameraBufferNeeded_Injected(IntPtr cam);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000016")]
	[Address(RVA = "0x6D206C0", Offset = "0x6D1F6C0", VA = "0x6D206C0")]
	private static extern void SetCameraBuffer_Injected(IntPtr cam, VFXCameraBufferTypes type, IntPtr buffer, int x, int y, int width, int height);
}
