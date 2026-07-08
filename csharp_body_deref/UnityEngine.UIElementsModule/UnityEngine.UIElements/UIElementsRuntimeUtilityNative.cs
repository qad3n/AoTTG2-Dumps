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
	[Address(RVA = "0x4D260C0", Offset = "0x4D260C0", VA = "0x4D260C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static void RepaintOverlayPanels()
	{
	}

	[Token(Token = "0x6000E35")]
	[Address(RVA = "0x4D26110", Offset = "0x4D26110", VA = "0x4D26110")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static void UpdateRuntimePanels()
	{
	}

	[Token(Token = "0x6000E36")]
	[Address(RVA = "0x4D26160", Offset = "0x4D26160", VA = "0x4D26160")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static void RepaintOffscreenPanels()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E37")]
	[Address(RVA = "0x4D261B0", Offset = "0x4D261B0", VA = "0x4D261B0")]
	public static extern void RegisterPlayerloopCallback();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E38")]
	[Address(RVA = "0x4D261E0", Offset = "0x4D261E0", VA = "0x4D261E0")]
	public static extern void UnregisterPlayerloopCallback();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E39")]
	[Address(RVA = "0x4D26210", Offset = "0x4D26210", VA = "0x4D26210")]
	public static extern void VisualElementCreation();
}
