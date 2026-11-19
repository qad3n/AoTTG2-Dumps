// ==================== AoTTG2 cross-reference ====================
// Type: Characters.CharacterPrefabs
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/CharacterPrefabs.c
// Prior real C# source (older reference): Assets/Scripts/Characters/CharacterPrefabs.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x200069C")]
internal class CharacterPrefabs
{
	[Token(Token = "0x4001DCE")]
	[FieldOffset(Offset = "0x0")]
	public static string Human;

	[Token(Token = "0x4001DCF")]
	[FieldOffset(Offset = "0x8")]
	public static string BasicTitanPrefix;

	[Token(Token = "0x4001DD0")]
	[FieldOffset(Offset = "0x10")]
	public static string Horse;

	[Token(Token = "0x4001DD1")]
	[FieldOffset(Offset = "0x18")]
	public static string ErenShifter;

	[Token(Token = "0x4001DD2")]
	[FieldOffset(Offset = "0x20")]
	public static string AnnieShifter;

	[Token(Token = "0x4001DD3")]
	[FieldOffset(Offset = "0x28")]
	public static string ArmoredShifter;

	[Token(Token = "0x4001DD4")]
	[FieldOffset(Offset = "0x30")]
	public static string WallColossal;

	[Token(Token = "0x6004038")]
	[Address(RVA = "0x5AE2D00", Offset = "0x5AE1D00", VA = "0x5AE2D00")]
	public CharacterPrefabs()
	{
		// Lifted from source/cpp/Characters/CharacterPrefabs.c (Characters.CharacterPrefabs$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/CharacterPrefabs.c.

	// Characters.CharacterPrefabs$$.cctor: clean
	static CharacterPrefabs()
	{
		Characters_CharacterPrefabs_StaticFields pCVar1;

		CharacterPrefabs.Human = "Human/Prefabs/HumanPlayer";
		pCVar1 = typeof(CharacterPrefabs).static_fields;
		pCVar1.BasicTitanPrefix = "Titans/Prefabs/BasicTitan";
		pCVar1 = typeof(CharacterPrefabs).static_fields;
		pCVar1.Horse = "Horse/Prefabs/Horse";
		pCVar1 = typeof(CharacterPrefabs).static_fields;
		pCVar1.ErenShifter = "Shifters/Prefabs/Eren";
		pCVar1 = typeof(CharacterPrefabs).static_fields;
		pCVar1.AnnieShifter = "Shifters/Prefabs/Annie";
		pCVar1 = typeof(CharacterPrefabs).static_fields;
		pCVar1.ArmoredShifter = "Shifters/Prefabs/Armored";
		pCVar1 = typeof(CharacterPrefabs).static_fields;
		pCVar1.WallColossal = "Shifters/Prefabs/WallColossal";
		return;
	}
}
