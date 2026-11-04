// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Accessibility.AccessibilitySettings
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Accessibility;

[Token(Token = "0x200000D")]
[UnityEngine.Bindings.NativeHeader("Modules/Accessibility/Native/AccessibilitySettings.h")]
public static class AccessibilitySettings
{
	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<float> fontScaleChanged;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<bool> boldTextStatusChanged;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x10")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<bool> closedCaptioningStatusChanged;

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x2E7FC60", Offset = "0x2E7E260", VA = "0x182E7FC60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_OnFontScaleChanged(float newFontScale)
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x2E7FA80", Offset = "0x2E7E080", VA = "0x182E7FA80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_OnBoldTextStatusChanged(bool enabled)
	{
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x2E7FB70", Offset = "0x2E7E170", VA = "0x182E7FB70")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_OnClosedCaptioningStatusChanged(bool enabled)
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x2E7FE20", Offset = "0x2E7E420", VA = "0x182E7FE20")]
	internal static void InvokeFontScaleChanged(float newFontScale)
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x2E7FD60", Offset = "0x2E7E360", VA = "0x182E7FD60")]
	internal static void InvokeBoldTextStatusChanged(bool enabled)
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x2E7FDC0", Offset = "0x2E7E3C0", VA = "0x182E7FDC0")]
	internal static void InvokeClosedCaptionStatusChanged(bool enabled)
	{
	}
}
