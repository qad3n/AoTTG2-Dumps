using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000CE")]
public static class GisketchUiSounds
{
	[Token(Token = "0x40003F0")]
	private const string Path = "GisketchUI/Sounds/";

	[Token(Token = "0x40003F1")]
	[FieldOffset(Offset = "0x0")]
	private static AudioSource _source;

	[Token(Token = "0x40003F2")]
	[FieldOffset(Offset = "0x8")]
	private static AudioClip _forward;

	[Token(Token = "0x40003F3")]
	[FieldOffset(Offset = "0x10")]
	private static AudioClip _back;

	[Token(Token = "0x40003F4")]
	[FieldOffset(Offset = "0x18")]
	private static AudioClip _hover;

	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x3A1DFC0", Offset = "0x3A1DFC0", VA = "0x3A1DFC0")]
	public static void Play(GisketchUiSoundKind kind)
	{
	}

	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x3A30270", Offset = "0x3A30270", VA = "0x3A30270")]
	private static AudioClip Clip(GisketchUiSoundKind kind)
	{
		return null;
	}

	[Token(Token = "0x60005C4")]
	[Address(RVA = "0x3A30450", Offset = "0x3A30450", VA = "0x3A30450")]
	private static AudioSource Source()
	{
		return null;
	}

	[Token(Token = "0x60005C5")]
	[Address(RVA = "0x3A30620", Offset = "0x3A30620", VA = "0x3A30620")]
	private static float Volume(GisketchUiSoundKind kind)
	{
		return default(float);
	}
}
