// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIElementsRuntimeUtilityNative
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000231")]
[UnityEngine.Bindings.NativeHeader("ModuleOverrides/com.unity.ui/Core/Native/UIElementsRuntimeUtilityNative.h")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "Unity.UIElements" })]
internal static class UIElementsRuntimeUtilityNative
{
	[Token(Token = "0x40007EC")]
	[FieldOffset(Offset = "0x0")]
	internal static Action RepaintOverlayPanelsCallback;

	[Token(Token = "0x40007ED")]
	[FieldOffset(Offset = "0x8")]
	internal static Action UpdateRuntimePanelsCallback;

	[Token(Token = "0x40007EE")]
	[FieldOffset(Offset = "0x10")]
	internal static Action RepaintOffscreenPanelsCallback;

	[Token(Token = "0x6000E34")]
	[Address(RVA = "0x504D9F0", Offset = "0x504D9F0", VA = "0x504D9F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static void RepaintOverlayPanels()
	{
	}

	[Token(Token = "0x6000E35")]
	[Address(RVA = "0x504DA40", Offset = "0x504DA40", VA = "0x504DA40")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static void UpdateRuntimePanels()
	{
	}

	[Token(Token = "0x6000E36")]
	[Address(RVA = "0x504DA90", Offset = "0x504DA90", VA = "0x504DA90")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static void RepaintOffscreenPanels()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E37")]
	[Address(RVA = "0x504DAE0", Offset = "0x504DAE0", VA = "0x504DAE0")]
	public static extern void RegisterPlayerloopCallback();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E38")]
	[Address(RVA = "0x504DB10", Offset = "0x504DB10", VA = "0x504DB10")]
	public static extern void UnregisterPlayerloopCallback();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E39")]
	[Address(RVA = "0x504DB40", Offset = "0x504DB40", VA = "0x504DB40")]
	public static extern void VisualElementCreation();
}
