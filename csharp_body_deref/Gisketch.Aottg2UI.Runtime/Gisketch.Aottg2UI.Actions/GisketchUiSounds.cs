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

[Token(Token = "0x20000D3")]
public static class GisketchUiSounds
{
	[Token(Token = "0x4000421")]
	private const string Path = "GisketchUI/Sounds/";

	[Token(Token = "0x4000422")]
	[FieldOffset(Offset = "0x0")]
	private static AudioSource _source;

	[Token(Token = "0x4000423")]
	[FieldOffset(Offset = "0x8")]
	private static AudioClip _forward;

	[Token(Token = "0x4000424")]
	[FieldOffset(Offset = "0x10")]
	private static AudioClip _back;

	[Token(Token = "0x4000425")]
	[FieldOffset(Offset = "0x18")]
	private static AudioClip _hover;

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x3A9CDA0", Offset = "0x3A9CDA0", VA = "0x3A9CDA0")]
	public static void Play(GisketchUiSoundKind kind)
	{
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x3A9CE30", Offset = "0x3A9CE30", VA = "0x3A9CE30")]
	private static AudioClip Clip(GisketchUiSoundKind kind)
	{
		return null;
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x3A9D010", Offset = "0x3A9D010", VA = "0x3A9D010")]
	private static AudioSource Source()
	{
		return null;
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x3A9D1E0", Offset = "0x3A9D1E0", VA = "0x3A9D1E0")]
	private static float Volume(GisketchUiSoundKind kind)
	{
		return default(float);
	}
}
