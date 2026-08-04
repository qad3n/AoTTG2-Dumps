// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.FullscreenHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/FullscreenHandler.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/FullscreenHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x2000786")]
internal class FullscreenHandler : MonoBehaviour
{
	[Token(Token = "0x4002449")]
	[FieldOffset(Offset = "0x0")]
	private static FullscreenHandler _instance;

	[Token(Token = "0x400244A")]
	[FieldOffset(Offset = "0x8")]
	private static Resolution _resolution;

	[Token(Token = "0x400244B")]
	[FieldOffset(Offset = "0x18")]
	private static bool _isFocused;

	[Token(Token = "0x60048CF")]
	[Address(RVA = "0x43B6A50", Offset = "0x43B6A50", VA = "0x43B6A50")]
	public static void Init()
	{
	}

	[Token(Token = "0x60048D0")]
	[Address(RVA = "0x43B6AD0", Offset = "0x43B6AD0", VA = "0x43B6AD0")]
	public static void Apply(int resolutionIndex, FullScreenLevel fullscreenLevel)
	{
	}

	[Token(Token = "0x60048D1")]
	[Address(RVA = "0x43B70F0", Offset = "0x43B70F0", VA = "0x43B70F0")]
	public static int SanitizeResolutionSetting(int resolutionIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60048D2")]
	[Address(RVA = "0x43B7170", Offset = "0x43B7170", VA = "0x43B7170")]
	public static string[] GetResolutionOptions()
	{
		return null;
	}

	[Token(Token = "0x60048D3")]
	[Address(RVA = "0x43B6B80", Offset = "0x43B6B80", VA = "0x43B6B80")]
	private static List<Resolution> GetResolutions()
	{
		return null;
	}

	[Token(Token = "0x60048D4")]
	[Address(RVA = "0x43B6F20", Offset = "0x43B6F20", VA = "0x43B6F20")]
	private static void SetFullscreen(FullScreenLevel fullscreen)
	{
	}

	[Token(Token = "0x60048D5")]
	[Address(RVA = "0x43B7550", Offset = "0x43B7550", VA = "0x43B7550")]
	public static void UpdateFPS()
	{
	}

	[Token(Token = "0x60048D6")]
	[Address(RVA = "0x43B7730", Offset = "0x43B7730", VA = "0x43B7730")]
	public static void UpdateSound()
	{
	}

	[Token(Token = "0x60048D7")]
	[Address(RVA = "0x43B7D30", Offset = "0x43B7D30", VA = "0x43B7D30")]
	public void OnApplicationFocus(bool hasFocus)
	{
	}

	[Token(Token = "0x60048D8")]
	[Address(RVA = "0x43B7DC0", Offset = "0x43B7DC0", VA = "0x43B7DC0")]
	private static bool IsWindowed()
	{
		return default(bool);
	}

	[Token(Token = "0x60048D9")]
	[Address(RVA = "0x43B7E20", Offset = "0x43B7E20", VA = "0x43B7E20")]
	private static bool Supported()
	{
		return default(bool);
	}

	[Token(Token = "0x60048DA")]
	[Address(RVA = "0x43B7E70", Offset = "0x43B7E70", VA = "0x43B7E70")]
	public FullscreenHandler()
	{
	}
}
