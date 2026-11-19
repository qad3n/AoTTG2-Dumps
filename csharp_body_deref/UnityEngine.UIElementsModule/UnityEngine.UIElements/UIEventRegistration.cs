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
	[Address(RVA = "0x6B527B0", Offset = "0x6B517B0", VA = "0x6B527B0")]
	static UIEventRegistration()
	{
	}

	[Token(Token = "0x60025B4")]
	[Address(RVA = "0x6B52D60", Offset = "0x6B51D60", VA = "0x6B52D60")]
	internal static void RegisterUIElementSystem(IUIElementsUtility utility)
	{
	}

	[Token(Token = "0x60025B5")]
	[Address(RVA = "0x6B52E00", Offset = "0x6B51E00", VA = "0x6B52E00")]
	private static void TakeCapture()
	{
	}

	[Token(Token = "0x60025B6")]
	[Address(RVA = "0x6B52FF0", Offset = "0x6B51FF0", VA = "0x6B52FF0")]
	private static void ReleaseCapture()
	{
	}

	[Token(Token = "0x60025B7")]
	[Address(RVA = "0x6B53200", Offset = "0x6B52200", VA = "0x6B53200")]
	private static bool EndContainerGUIFromException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x60025B8")]
	[Address(RVA = "0x6B53460", Offset = "0x6B52460", VA = "0x6B53460")]
	private static bool ProcessEvent(int instanceID, IntPtr nativeEventPtr)
	{
		return default(bool);
	}

	[Token(Token = "0x60025B9")]
	[Address(RVA = "0x6B536B0", Offset = "0x6B526B0", VA = "0x6B536B0")]
	private static void CleanupRoots()
	{
	}

	[Token(Token = "0x60025BA")]
	[Address(RVA = "0x6B538C0", Offset = "0x6B528C0", VA = "0x6B538C0")]
	internal static void MakeCurrentIMGUIContainerDirty()
	{
	}
}
