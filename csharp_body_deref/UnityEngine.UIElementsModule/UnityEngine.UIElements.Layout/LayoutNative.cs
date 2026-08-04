// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutNative
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4FBC570", Offset = "0x4FBC570", VA = "0x4FBC570")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = false)]
	internal static extern void CalculateLayout(IntPtr node, float parentWidth, float parentHeight, int parentDirection, IntPtr state);
}
