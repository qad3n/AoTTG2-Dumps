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
	[Address(RVA = "0x4B47540", Offset = "0x4B47540", VA = "0x4B47540")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::RaycastTry")]
	internal static GameObject RaycastTry(Camera cam, Ray ray, float distance, int layerMask)
	{
		return null;
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4B47670", Offset = "0x4B47670", VA = "0x4B47670")]
	[UnityEngine.Bindings.FreeFunction("CameraScripting::RaycastTry2D")]
	internal static GameObject RaycastTry2D(Camera cam, Ray ray, float distance, int layerMask)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4B47620", Offset = "0x4B47620", VA = "0x4B47620")]
	private static extern GameObject RaycastTry_Injected(IntPtr cam, [In] ref Ray ray, float distance, int layerMask);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4B47750", Offset = "0x4B47750", VA = "0x4B47750")]
	private static extern GameObject RaycastTry2D_Injected(IntPtr cam, [In] ref Ray ray, float distance, int layerMask);
}
