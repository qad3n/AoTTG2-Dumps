// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HorseAnimations
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/HorseAnimations.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Horse/HorseAnimations.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006B0")]
internal class HorseAnimations
{
	[Token(Token = "0x4001E46")]
	[FieldOffset(Offset = "0x0")]
	public static string Idle0;

	[Token(Token = "0x4001E47")]
	[FieldOffset(Offset = "0x8")]
	public static string Idle1;

	[Token(Token = "0x4001E48")]
	[FieldOffset(Offset = "0x10")]
	public static string Idle2;

	[Token(Token = "0x4001E49")]
	[FieldOffset(Offset = "0x18")]
	public static string Idle3;

	[Token(Token = "0x4001E4A")]
	[FieldOffset(Offset = "0x20")]
	public static string Crazy;

	[Token(Token = "0x4001E4B")]
	[FieldOffset(Offset = "0x28")]
	public static string Run;

	[Token(Token = "0x4001E4C")]
	[FieldOffset(Offset = "0x30")]
	public static string Walk;

	[Token(Token = "0x60040E3")]
	[Address(RVA = "0x5AF3220", Offset = "0x5AF2220", VA = "0x5AF3220")]
	public HorseAnimations()
	{
		// Lifted from source/cpp/Characters/HorseAnimations.c (Characters.HorseAnimations$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/HorseAnimations.c.

	// Characters.HorseAnimations$$.cctor: clean
	static HorseAnimations()
	{
		Characters_HorseAnimations_StaticFields pCVar1;

		HorseAnimations.Idle0 = "horse_idle0";
		pCVar1 = typeof(HorseAnimations).static_fields;
		pCVar1.Idle1 = "horse_idle1";
		pCVar1 = typeof(HorseAnimations).static_fields;
		pCVar1.Idle2 = "horse_idle2";
		pCVar1 = typeof(HorseAnimations).static_fields;
		pCVar1.Idle3 = "horse_idle3";
		pCVar1 = typeof(HorseAnimations).static_fields;
		pCVar1.Crazy = "horse_crazy";
		pCVar1 = typeof(HorseAnimations).static_fields;
		pCVar1.Run = "horse_Run";
		pCVar1 = typeof(HorseAnimations).static_fields;
		pCVar1.Walk = "horse_WALK";
		return;
	}
}
