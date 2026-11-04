// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.HumanLoadout
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/GameManagers/HumanLoadout.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Characters;
using Il2CppDummyDll;

namespace GameManagers;

[Token(Token = "0x2000342")]
internal class HumanLoadout
{
	[Token(Token = "0x40010E0")]
	[FieldOffset(Offset = "0x0")]
	public static string Blade;

	[Token(Token = "0x40010E1")]
	[FieldOffset(Offset = "0x8")]
	public static string AHSS;

	[Token(Token = "0x40010E2")]
	[FieldOffset(Offset = "0x10")]
	public static string Thunderspear;

	[Token(Token = "0x40010E3")]
	[FieldOffset(Offset = "0x18")]
	public static string APG;

	[Token(Token = "0x40010E4")]
	[FieldOffset(Offset = "0x20")]
	public static string Unarmed;

	[Token(Token = "0x40010E5")]
	[FieldOffset(Offset = "0x28")]
	public static string Civilian;

	[Token(Token = "0x60014D2")]
	[Address(RVA = "0x1E67C60", Offset = "0x1E66260", VA = "0x181E67C60")]
	public static List<string> GetAllowed()
	{
		return null;
	}

	[Token(Token = "0x60014D3")]
	[Address(RVA = "0x1E67BA0", Offset = "0x1E661A0", VA = "0x181E67BA0")]
	public static bool AnyAllowed()
	{
		return default(bool);
	}

	[Token(Token = "0x60014D4")]
	[Address(RVA = "0x1E67F70", Offset = "0x1E66570", VA = "0x181E67F70")]
	public static HumanWeapon ToWeapon(string loadout)
	{
		return default(HumanWeapon);
	}

	[Token(Token = "0x60014D5")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public HumanLoadout()
	{
	}
}
