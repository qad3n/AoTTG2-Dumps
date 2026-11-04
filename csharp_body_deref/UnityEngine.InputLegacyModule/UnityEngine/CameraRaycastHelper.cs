// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.CameraRaycastHelper
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000009")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/Camera.h")]
internal class CameraRaycastHelper
{
	[Token(Token = "0x6000012")]
	[Address(RVA = "0x2FC3550", Offset = "0x2FC1B50", VA = "0x182FC3550")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::RaycastTry")]
	internal static GameObject RaycastTry(Camera cam, Ray ray, float distance, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x2FC3420", Offset = "0x2FC1A20", VA = "0x182FC3420")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::RaycastTry2D")]
	internal static GameObject RaycastTry2D(Camera cam, Ray ray, float distance, int layerMask)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000014")]
	[Address(RVA = "0x2FC34E0", Offset = "0x2FC1AE0", VA = "0x182FC34E0")]
	private static extern IntPtr RaycastTry_Injected(IntPtr cam, [In] ref Ray ray, float distance, int layerMask);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000015")]
	[Address(RVA = "0x2FC33B0", Offset = "0x2FC19B0", VA = "0x182FC33B0")]
	private static extern IntPtr RaycastTry2D_Injected(IntPtr cam, [In] ref Ray ray, float distance, int layerMask);
}
