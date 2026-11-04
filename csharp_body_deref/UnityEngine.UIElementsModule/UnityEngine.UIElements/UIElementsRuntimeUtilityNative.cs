// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIElementsRuntimeUtilityNative
// Update status: CHANGED in this game update
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
	[Address(RVA = "0x32B8E70", Offset = "0x32B7470", VA = "0x1832B8E70")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static void UpdatePanels()
	{
	}

	[Token(Token = "0x60011D5")]
	[Address(RVA = "0x32B8C20", Offset = "0x32B7220", VA = "0x1832B8C20")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static void RepaintPanels(bool onlyOffscreen)
	{
	}

	[Token(Token = "0x60011D6")]
	[Address(RVA = "0x32B8BD0", Offset = "0x32B71D0", VA = "0x1832B8BD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static void RenderOffscreenPanels()
	{
	}

	[Token(Token = "0x60011D7")]
	[Address(RVA = "0x32B8D30", Offset = "0x32B7330", VA = "0x1832B8D30")]
	public static void SetUpdateCallback(Action callback)
	{
	}

	[Token(Token = "0x60011D8")]
	[Address(RVA = "0x32B8C80", Offset = "0x32B7280", VA = "0x1832B8C80")]
	public static void SetRenderingCallbacks(Action<bool> repaintPanels, Action renderOffscreenPanels)
	{
	}

	[Token(Token = "0x60011D9")]
	[Address(RVA = "0x32B8DC0", Offset = "0x32B73C0", VA = "0x1832B8DC0")]
	public static void UnsetRenderingCallbacks()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011DA")]
	[Address(RVA = "0x32B8BA0", Offset = "0x32B71A0", VA = "0x1832B8BA0")]
	private static extern void RegisterRenderingCallbacks();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011DB")]
	[Address(RVA = "0x32B8D90", Offset = "0x32B7390", VA = "0x1832B8D90")]
	private static extern void UnregisterRenderingCallbacks();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011DC")]
	[Address(RVA = "0x32B8EC0", Offset = "0x32B74C0", VA = "0x1832B8EC0")]
	public static extern void VisualElementCreation();
}
