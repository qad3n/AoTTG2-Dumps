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

namespace UnityEngine.UIElements;

[Token(Token = "0x2000400")]
internal static class UIEventRegistration
{
	[Token(Token = "0x4000C44")]
	[FieldOffset(Offset = "0x0")]
	private static List<IUIElementsUtility> s_Utilities;

	[Token(Token = "0x6001A03")]
	[Address(RVA = "0x4F64440", Offset = "0x4F64440", VA = "0x4F64440")]
	static UIEventRegistration()
	{
	}

	[Token(Token = "0x6001A04")]
	[Address(RVA = "0x4F649A0", Offset = "0x4F649A0", VA = "0x4F649A0")]
	internal static void RegisterUIElementSystem(IUIElementsUtility utility)
	{
	}

	[Token(Token = "0x6001A05")]
	[Address(RVA = "0x4F64A40", Offset = "0x4F64A40", VA = "0x4F64A40")]
	private static void TakeCapture()
	{
	}

	[Token(Token = "0x6001A06")]
	[Address(RVA = "0x4F64C40", Offset = "0x4F64C40", VA = "0x4F64C40")]
	private static void ReleaseCapture()
	{
	}

	[Token(Token = "0x6001A07")]
	[Address(RVA = "0x4F64E70", Offset = "0x4F64E70", VA = "0x4F64E70")]
	private static bool EndContainerGUIFromException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A08")]
	[Address(RVA = "0x4F650D0", Offset = "0x4F650D0", VA = "0x4F650D0")]
	private static bool ProcessEvent(int instanceID, IntPtr nativeEventPtr)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A09")]
	[Address(RVA = "0x4F65340", Offset = "0x4F65340", VA = "0x4F65340")]
	private static void CleanupRoots()
	{
	}

	[Token(Token = "0x6001A0A")]
	[Address(RVA = "0x4F65570", Offset = "0x4F65570", VA = "0x4F65570")]
	internal static void MakeCurrentIMGUIContainerDirty()
	{
	}
}
