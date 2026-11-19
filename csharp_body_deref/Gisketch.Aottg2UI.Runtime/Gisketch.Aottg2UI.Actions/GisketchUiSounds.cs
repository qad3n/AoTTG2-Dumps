// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchUiSounds
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchUiSounds.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000FE")]
public static class GisketchUiSounds
{
	[Token(Token = "0x400050C")]
	private const string Path = "GisketchUI/Sounds/";

	[Token(Token = "0x400050D")]
	[FieldOffset(Offset = "0x0")]
	private static AudioSource _source;

	[Token(Token = "0x400050E")]
	[FieldOffset(Offset = "0x8")]
	private static AudioClip _forward;

	[Token(Token = "0x400050F")]
	[FieldOffset(Offset = "0x10")]
	private static AudioClip _back;

	[Token(Token = "0x4000510")]
	[FieldOffset(Offset = "0x18")]
	private static AudioClip _hover;

	[Token(Token = "0x4000511")]
	[FieldOffset(Offset = "0x20")]
	private static int _lastFrame;

	[Token(Token = "0x4000512")]
	[FieldOffset(Offset = "0x24")]
	private static GisketchUiSoundKind _lastKind;

	[Token(Token = "0x60007BB")]
	[Address(RVA = "0x52AA530", Offset = "0x52A9530", VA = "0x52AA530")]
	public static void Play(GisketchUiSoundKind kind)
	{
	}

	[Token(Token = "0x60007BC")]
	[Address(RVA = "0x52AAE30", Offset = "0x52A9E30", VA = "0x52AAE30")]
	private static AudioClip Clip(GisketchUiSoundKind kind)
	{
		return null;
	}

	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x52AB0D0", Offset = "0x52AA0D0", VA = "0x52AB0D0")]
	private static AudioSource Source()
	{
		return null;
	}

	[Token(Token = "0x60007BE")]
	[Address(RVA = "0x52AB2D0", Offset = "0x52AA2D0", VA = "0x52AB2D0")]
	private static float Volume(GisketchUiSoundKind kind)
	{
		return default(float);
	}
}
