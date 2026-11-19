// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.HumanLoadout
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameManagers/HumanLoadout.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Characters;
using Il2CppDummyDll;

namespace GameManagers;

[Token(Token = "0x20003A4")]
internal class HumanLoadout
{
	[Token(Token = "0x4001290")]
	[FieldOffset(Offset = "0x0")]
	public static string Blade;

	[Token(Token = "0x4001291")]
	[FieldOffset(Offset = "0x8")]
	public static string AHSS;

	[Token(Token = "0x4001292")]
	[FieldOffset(Offset = "0x10")]
	public static string Thunderspear;

	[Token(Token = "0x4001293")]
	[FieldOffset(Offset = "0x18")]
	public static string APG;

	[Token(Token = "0x4001294")]
	[FieldOffset(Offset = "0x20")]
	public static string Unarmed;

	[Token(Token = "0x4001295")]
	[FieldOffset(Offset = "0x28")]
	public static string Civilian;

	[Token(Token = "0x6001752")]
	[Address(RVA = "0x5857FA0", Offset = "0x5856FA0", VA = "0x5857FA0")]
	public static List<string> GetAllowed()
	{
		return null;
	}

	[Token(Token = "0x6001753")]
	[Address(RVA = "0x58584B0", Offset = "0x58574B0", VA = "0x58584B0")]
	public static bool AnyAllowed()
	{
		return default(bool);
	}

	[Token(Token = "0x6001754")]
	[Address(RVA = "0x5858570", Offset = "0x5857570", VA = "0x5858570")]
	public static HumanWeapon ToWeapon(string loadout)
	{
		return default(HumanWeapon);
	}

	[Token(Token = "0x6001755")]
	[Address(RVA = "0x58586B0", Offset = "0x58576B0", VA = "0x58586B0")]
	public HumanLoadout()
	{
	}
}
