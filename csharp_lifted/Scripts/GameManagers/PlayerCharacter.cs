// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.PlayerCharacter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameManagers/PlayerCharacter.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace GameManagers;

[Token(Token = "0x20003A3")]
internal class PlayerCharacter
{
	[Token(Token = "0x400128D")]
	[FieldOffset(Offset = "0x0")]
	public static string Human;

	[Token(Token = "0x400128E")]
	[FieldOffset(Offset = "0x8")]
	public static string Titan;

	[Token(Token = "0x400128F")]
	[FieldOffset(Offset = "0x10")]
	public static string Shifter;

	[Token(Token = "0x6001750")]
	[Address(RVA = "0x5857ED0", Offset = "0x5856ED0", VA = "0x5857ED0")]
	public PlayerCharacter()
	{
		// Lifted from source/cpp/GameManagers/PlayerCharacter.c (GameManagers.PlayerCharacter$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/GameManagers/PlayerCharacter.c.

	// GameManagers.PlayerCharacter$$.cctor: clean
	static PlayerCharacter()
	{
		GameManagers_PlayerCharacter_StaticFields pGVar1;

		PlayerCharacter.Human = "Human";
		pGVar1 = typeof(PlayerCharacter).static_fields;
		pGVar1.Titan = "Titan";
		pGVar1 = typeof(PlayerCharacter).static_fields;
		pGVar1.Shifter = "Shifter";
		return;
	}
}
