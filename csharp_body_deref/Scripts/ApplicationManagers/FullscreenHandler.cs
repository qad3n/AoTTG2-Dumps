// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.FullscreenHandler
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/FullscreenHandler.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/FullscreenHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x200097B")]
internal class FullscreenHandler : MonoBehaviour
{
	[Token(Token = "0x4002FD6")]
	[FieldOffset(Offset = "0x0")]
	private static FullscreenHandler _instance;

	[Token(Token = "0x4002FD7")]
	[FieldOffset(Offset = "0x8")]
	private static Resolution _resolution;

	[Token(Token = "0x4002FD8")]
	[FieldOffset(Offset = "0x18")]
	private static bool _isFocused;

	[Token(Token = "0x60058A6")]
	[Address(RVA = "0x5D08C90", Offset = "0x5D07C90", VA = "0x5D08C90")]
	public static void Init()
	{
	}

	[Token(Token = "0x60058A7")]
	[Address(RVA = "0x5D14F60", Offset = "0x5D13F60", VA = "0x5D14F60")]
	public static void Apply(int resolutionIndex, FullScreenLevel fullscreenLevel)
	{
	}

	[Token(Token = "0x60058A8")]
	[Address(RVA = "0x5D15700", Offset = "0x5D14700", VA = "0x5D15700")]
	public static int SanitizeResolutionSetting(int resolutionIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60058A9")]
	[Address(RVA = "0x5D15790", Offset = "0x5D14790", VA = "0x5D15790")]
	public static string[] GetResolutionOptions()
	{
		return null;
	}

	[Token(Token = "0x60058AA")]
	[Address(RVA = "0x5D15060", Offset = "0x5D14060", VA = "0x5D15060")]
	private static List<Resolution> GetResolutions()
	{
		return null;
	}

	[Token(Token = "0x60058AB")]
	[Address(RVA = "0x5D15510", Offset = "0x5D14510", VA = "0x5D15510")]
	private static void SetFullscreen(FullScreenLevel fullscreen)
	{
	}

	[Token(Token = "0x60058AC")]
	[Address(RVA = "0x5D15AF0", Offset = "0x5D14AF0", VA = "0x5D15AF0")]
	public static int GetTargetFrameRate(int fpsCap)
	{
		return default(int);
	}

	[Token(Token = "0x60058AD")]
	[Address(RVA = "0x5D15B50", Offset = "0x5D14B50", VA = "0x5D15B50")]
	private static int GetMaxRefreshRate()
	{
		return default(int);
	}

	[Token(Token = "0x60058AE")]
	[Address(RVA = "0x5D15D40", Offset = "0x5D14D40", VA = "0x5D15D40")]
	public static void UpdateFPS()
	{
	}

	[Token(Token = "0x60058AF")]
	[Address(RVA = "0x5D15FD0", Offset = "0x5D14FD0", VA = "0x5D15FD0")]
	public static void UpdateSound()
	{
	}

	[Token(Token = "0x60058B0")]
	[Address(RVA = "0x5D165A0", Offset = "0x5D155A0", VA = "0x5D165A0")]
	public void OnApplicationFocus(bool hasFocus)
	{
	}

	[Token(Token = "0x60058B1")]
	[Address(RVA = "0x5D16630", Offset = "0x5D15630", VA = "0x5D16630")]
	private static bool IsWindowed()
	{
		return default(bool);
	}

	[Token(Token = "0x60058B2")]
	[Address(RVA = "0x5D16690", Offset = "0x5D15690", VA = "0x5D16690")]
	private static bool Supported()
	{
		return default(bool);
	}

	[Token(Token = "0x60058B3")]
	[Address(RVA = "0x5D166E0", Offset = "0x5D156E0", VA = "0x5D166E0")]
	public FullscreenHandler()
	{
	}
}
