// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIEventRegistration
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x20004C7")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal static class UIEventRegistration
{
	[Token(Token = "0x4001087")]
	[FieldOffset(Offset = "0x0")]
	private static List<IUIElementsUtility> s_Utilities;

	[Token(Token = "0x60025B3")]
	[Address(RVA = "0x3150BC0", Offset = "0x314F1C0", VA = "0x183150BC0")]
	static UIEventRegistration()
	{
	}

	[Token(Token = "0x60025B4")]
	[Address(RVA = "0x3150860", Offset = "0x314EE60", VA = "0x183150860")]
	internal static void RegisterUIElementSystem(IUIElementsUtility utility)
	{
	}

	[Token(Token = "0x60025B5")]
	[Address(RVA = "0x3150A50", Offset = "0x314F050", VA = "0x183150A50")]
	private static void TakeCapture()
	{
	}

	[Token(Token = "0x60025B6")]
	[Address(RVA = "0x31508E0", Offset = "0x314EEE0", VA = "0x1831508E0")]
	private static void ReleaseCapture()
	{
	}

	[Token(Token = "0x60025B7")]
	[Address(RVA = "0x31502A0", Offset = "0x314E8A0", VA = "0x1831502A0")]
	private static bool EndContainerGUIFromException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x60025B8")]
	[Address(RVA = "0x3150650", Offset = "0x314EC50", VA = "0x183150650")]
	private static bool ProcessEvent(int instanceID, IntPtr nativeEventPtr)
	{
		return default(bool);
	}

	[Token(Token = "0x60025B9")]
	[Address(RVA = "0x3150130", Offset = "0x314E730", VA = "0x183150130")]
	private static void CleanupRoots()
	{
	}

	[Token(Token = "0x60025BA")]
	[Address(RVA = "0x31504E0", Offset = "0x314EAE0", VA = "0x1831504E0")]
	internal static void MakeCurrentIMGUIContainerDirty()
	{
	}
}
