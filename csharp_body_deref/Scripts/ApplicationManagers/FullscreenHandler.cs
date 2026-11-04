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

[Token(Token = "0x2000911")]
internal class FullscreenHandler : MonoBehaviour
{
	[Token(Token = "0x4002D18")]
	[FieldOffset(Offset = "0x0")]
	private static FullscreenHandler _instance;

	[Token(Token = "0x4002D19")]
	[FieldOffset(Offset = "0x8")]
	private static Resolution _resolution;

	[Token(Token = "0x4002D1A")]
	[FieldOffset(Offset = "0x18")]
	private static bool _isFocused;

	[Token(Token = "0x6005545")]
	[Address(RVA = "0x234EFA0", Offset = "0x234D5A0", VA = "0x18234EFA0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6005546")]
	[Address(RVA = "0x234E960", Offset = "0x234CF60", VA = "0x18234E960")]
	public static void Apply(int resolutionIndex, FullScreenLevel fullscreenLevel)
	{
	}

	[Token(Token = "0x6005547")]
	[Address(RVA = "0x234F2B0", Offset = "0x234D8B0", VA = "0x18234F2B0")]
	public static int SanitizeResolutionSetting(int resolutionIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6005548")]
	[Address(RVA = "0x234EA00", Offset = "0x234D000", VA = "0x18234EA00")]
	public static string[] GetResolutionOptions()
	{
		return null;
	}

	[Token(Token = "0x6005549")]
	[Address(RVA = "0x234ECB0", Offset = "0x234D2B0", VA = "0x18234ECB0")]
	private static List<Resolution> GetResolutions()
	{
		return null;
	}

	[Token(Token = "0x600554A")]
	[Address(RVA = "0x234F320", Offset = "0x234D920", VA = "0x18234F320")]
	private static void SetFullscreen(FullScreenLevel fullscreen)
	{
	}

	[Token(Token = "0x600554B")]
	[Address(RVA = "0x234F590", Offset = "0x234DB90", VA = "0x18234F590")]
	public static void UpdateFPS()
	{
	}

	[Token(Token = "0x600554C")]
	[Address(RVA = "0x234F740", Offset = "0x234DD40", VA = "0x18234F740")]
	public static void UpdateSound()
	{
	}

	[Token(Token = "0x600554D")]
	[Address(RVA = "0x234F090", Offset = "0x234D690", VA = "0x18234F090")]
	public void OnApplicationFocus(bool hasFocus)
	{
	}

	[Token(Token = "0x600554E")]
	[Address(RVA = "0x234F030", Offset = "0x234D630", VA = "0x18234F030")]
	private static bool IsWindowed()
	{
		return default(bool);
	}

	[Token(Token = "0x600554F")]
	[Address(RVA = "0x234F540", Offset = "0x234DB40", VA = "0x18234F540")]
	private static bool Supported()
	{
		return default(bool);
	}

	[Token(Token = "0x6005550")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public FullscreenHandler()
	{
	}
}
