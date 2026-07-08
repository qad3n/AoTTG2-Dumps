using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x200052A")]
[UnityEngine.Bindings.NativeHeader("ModuleOverrides/com.unity.ui/Core/Layout/Native/LayoutNative.h")]
internal static class LayoutNative
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001F67")]
	[Address(RVA = "0x4C94C40", Offset = "0x4C94C40", VA = "0x4C94C40")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = false)]
	internal static extern void CalculateLayout(IntPtr node, float parentWidth, float parentHeight, int parentDirection, IntPtr state);
}
