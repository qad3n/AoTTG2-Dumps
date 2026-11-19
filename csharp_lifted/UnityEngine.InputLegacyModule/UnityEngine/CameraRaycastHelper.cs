// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.CameraRaycastHelper
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

namespace UnityEngine;

[Token(Token = "0x200000A")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/Camera.h")]
internal class CameraRaycastHelper
{
	[Token(Token = "0x6000018")]
	[Address(RVA = "0x69BDD60", Offset = "0x69BCD60", VA = "0x69BDD60")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::RaycastTry")]
	internal static GameObject RaycastTry(Camera cam, Ray ray, float distance, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x69BDEA0", Offset = "0x69BCEA0", VA = "0x69BDEA0")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::RaycastTry2D")]
	internal static GameObject RaycastTry2D(Camera cam, Ray ray, float distance, int layerMask)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001A")]
	[Address(RVA = "0x69BDE50", Offset = "0x69BCE50", VA = "0x69BDE50")]
	private static extern IntPtr RaycastTry_Injected(IntPtr cam, [In] ref Ray ray, float distance, int layerMask);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001B")]
	[Address(RVA = "0x69BDF90", Offset = "0x69BCF90", VA = "0x69BDF90")]
	private static extern IntPtr RaycastTry2D_Injected(IntPtr cam, [In] ref Ray ray, float distance, int layerMask);
}
