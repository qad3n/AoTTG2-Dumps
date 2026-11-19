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

[Token(Token = "0x20002AA")]
[UnityEngine.Bindings.NativeHeader("Modules/UIElements/Core/Native/UIElementsRuntimeUtilityNative.h")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "Unity.UIElements" })]
internal static class UIElementsRuntimeUtilityNative
{
	[Token(Token = "0x4000A20")]
	[FieldOffset(Offset = "0x0")]
	private static Action UpdatePanelsCallback;

	[Token(Token = "0x4000A21")]
	[FieldOffset(Offset = "0x8")]
	private static Action<bool> RepaintPanelsCallback;

	[Token(Token = "0x4000A22")]
	[FieldOffset(Offset = "0x10")]
	private static Action RenderOffscreenPanelsCallback;

	[Token(Token = "0x60011D4")]
	[Address(RVA = "0x6CB31A0", Offset = "0x6CB21A0", VA = "0x6CB31A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static void UpdatePanels()
	{
	}

	[Token(Token = "0x60011D5")]
	[Address(RVA = "0x6CB31F0", Offset = "0x6CB21F0", VA = "0x6CB31F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static void RepaintPanels(bool onlyOffscreen)
	{
	}

	[Token(Token = "0x60011D6")]
	[Address(RVA = "0x6CB3240", Offset = "0x6CB2240", VA = "0x6CB3240")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static void RenderOffscreenPanels()
	{
	}

	[Token(Token = "0x60011D7")]
	[Address(RVA = "0x6CB3290", Offset = "0x6CB2290", VA = "0x6CB3290")]
	public static void SetUpdateCallback(Action callback)
	{
	}

	[Token(Token = "0x60011D8")]
	[Address(RVA = "0x6CB32E0", Offset = "0x6CB22E0", VA = "0x6CB32E0")]
	public static void SetRenderingCallbacks(Action<bool> repaintPanels, Action renderOffscreenPanels)
	{
	}

	[Token(Token = "0x60011D9")]
	[Address(RVA = "0x6CB33A0", Offset = "0x6CB23A0", VA = "0x6CB33A0")]
	public static void UnsetRenderingCallbacks()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011DA")]
	[Address(RVA = "0x6CB3370", Offset = "0x6CB2370", VA = "0x6CB3370")]
	private static extern void RegisterRenderingCallbacks();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011DB")]
	[Address(RVA = "0x6CB3430", Offset = "0x6CB2430", VA = "0x6CB3430")]
	private static extern void UnregisterRenderingCallbacks();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011DC")]
	[Address(RVA = "0x6CB3460", Offset = "0x6CB2460", VA = "0x6CB3460")]
	public static extern void VisualElementCreation();
}
