using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x2000737")]
internal class FullscreenHandler : MonoBehaviour
{
	[Token(Token = "0x40022E7")]
	[FieldOffset(Offset = "0x0")]
	private static FullscreenHandler _instance;

	[Token(Token = "0x40022E8")]
	[FieldOffset(Offset = "0x8")]
	private static Resolution _resolution;

	[Token(Token = "0x40022E9")]
	[FieldOffset(Offset = "0x18")]
	private static bool _isFocused;

	[Token(Token = "0x6004660")]
	[Address(RVA = "0x409D8D0", Offset = "0x409D8D0", VA = "0x409D8D0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004661")]
	[Address(RVA = "0x409D950", Offset = "0x409D950", VA = "0x409D950")]
	public static void Apply(int resolutionIndex, FullScreenLevel fullscreenLevel)
	{
	}

	[Token(Token = "0x6004662")]
	[Address(RVA = "0x409DF70", Offset = "0x409DF70", VA = "0x409DF70")]
	public static int SanitizeResolutionSetting(int resolutionIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6004663")]
	[Address(RVA = "0x409DFF0", Offset = "0x409DFF0", VA = "0x409DFF0")]
	public static string[] GetResolutionOptions()
	{
		return null;
	}

	[Token(Token = "0x6004664")]
	[Address(RVA = "0x409DA00", Offset = "0x409DA00", VA = "0x409DA00")]
	private static List<Resolution> GetResolutions()
	{
		return null;
	}

	[Token(Token = "0x6004665")]
	[Address(RVA = "0x409DDA0", Offset = "0x409DDA0", VA = "0x409DDA0")]
	private static void SetFullscreen(FullScreenLevel fullscreen)
	{
	}

	[Token(Token = "0x6004666")]
	[Address(RVA = "0x409E3D0", Offset = "0x409E3D0", VA = "0x409E3D0")]
	public static void UpdateFPS()
	{
	}

	[Token(Token = "0x6004667")]
	[Address(RVA = "0x409E5B0", Offset = "0x409E5B0", VA = "0x409E5B0")]
	public static void UpdateSound()
	{
	}

	[Token(Token = "0x6004668")]
	[Address(RVA = "0x409EBB0", Offset = "0x409EBB0", VA = "0x409EBB0")]
	public void OnApplicationFocus(bool hasFocus)
	{
	}

	[Token(Token = "0x6004669")]
	[Address(RVA = "0x409EC40", Offset = "0x409EC40", VA = "0x409EC40")]
	private static bool IsWindowed()
	{
		return default(bool);
	}

	[Token(Token = "0x600466A")]
	[Address(RVA = "0x409ECA0", Offset = "0x409ECA0", VA = "0x409ECA0")]
	private static bool Supported()
	{
		return default(bool);
	}

	[Token(Token = "0x600466B")]
	[Address(RVA = "0x409ECF0", Offset = "0x409ECF0", VA = "0x409ECF0")]
	public FullscreenHandler()
	{
	}
}
