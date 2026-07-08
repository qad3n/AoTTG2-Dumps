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
	[Address(RVA = "0x4C3CB10", Offset = "0x4C3CB10", VA = "0x4C3CB10")]
	static UIEventRegistration()
	{
	}

	[Token(Token = "0x6001A04")]
	[Address(RVA = "0x4C3D070", Offset = "0x4C3D070", VA = "0x4C3D070")]
	internal static void RegisterUIElementSystem(IUIElementsUtility utility)
	{
	}

	[Token(Token = "0x6001A05")]
	[Address(RVA = "0x4C3D110", Offset = "0x4C3D110", VA = "0x4C3D110")]
	private static void TakeCapture()
	{
	}

	[Token(Token = "0x6001A06")]
	[Address(RVA = "0x4C3D310", Offset = "0x4C3D310", VA = "0x4C3D310")]
	private static void ReleaseCapture()
	{
	}

	[Token(Token = "0x6001A07")]
	[Address(RVA = "0x4C3D540", Offset = "0x4C3D540", VA = "0x4C3D540")]
	private static bool EndContainerGUIFromException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A08")]
	[Address(RVA = "0x4C3D7A0", Offset = "0x4C3D7A0", VA = "0x4C3D7A0")]
	private static bool ProcessEvent(int instanceID, IntPtr nativeEventPtr)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A09")]
	[Address(RVA = "0x4C3DA10", Offset = "0x4C3DA10", VA = "0x4C3DA10")]
	private static void CleanupRoots()
	{
	}

	[Token(Token = "0x6001A0A")]
	[Address(RVA = "0x4C3DC40", Offset = "0x4C3DC40", VA = "0x4C3DC40")]
	internal static void MakeCurrentIMGUIContainerDirty()
	{
	}
}
