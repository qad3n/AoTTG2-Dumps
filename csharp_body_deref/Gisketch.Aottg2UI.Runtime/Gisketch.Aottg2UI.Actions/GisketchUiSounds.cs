// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchUiSounds
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchUiSounds.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000F8")]
public static class GisketchUiSounds
{
	[Token(Token = "0x40004E5")]
	private const string Path = "GisketchUI/Sounds/";

	[Token(Token = "0x40004E6")]
	[FieldOffset(Offset = "0x0")]
	private static AudioSource _source;

	[Token(Token = "0x40004E7")]
	[FieldOffset(Offset = "0x8")]
	private static AudioClip _forward;

	[Token(Token = "0x40004E8")]
	[FieldOffset(Offset = "0x10")]
	private static AudioClip _back;

	[Token(Token = "0x40004E9")]
	[FieldOffset(Offset = "0x18")]
	private static AudioClip _hover;

	[Token(Token = "0x40004EA")]
	[FieldOffset(Offset = "0x20")]
	private static int _lastFrame;

	[Token(Token = "0x40004EB")]
	[FieldOffset(Offset = "0x24")]
	private static GisketchUiSoundKind _lastKind;

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x190FF70", Offset = "0x190E570", VA = "0x18190FF70")]
	public static void Play(GisketchUiSoundKind kind)
	{
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x190FC70", Offset = "0x190E270", VA = "0x18190FC70")]
	private static AudioClip Clip(GisketchUiSoundKind kind)
	{
		return null;
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x1910100", Offset = "0x190E700", VA = "0x181910100")]
	private static AudioSource Source()
	{
		return null;
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x1910310", Offset = "0x190E910", VA = "0x181910310")]
	private static float Volume(GisketchUiSoundKind kind)
	{
		return default(float);
	}
}
