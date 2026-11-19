// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ShifterSounds
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/ShifterSounds.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/ShifterSounds.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000701")]
internal class ShifterSounds
{
	[Token(Token = "0x400211F")]
	[FieldOffset(Offset = "0x0")]
	public static string Thunder;

	[Token(Token = "0x4002120")]
	[FieldOffset(Offset = "0x8")]
	public static string ErenRoar;

	[Token(Token = "0x4002121")]
	[FieldOffset(Offset = "0x10")]
	public static string AnnieRoar;

	[Token(Token = "0x4002122")]
	[FieldOffset(Offset = "0x18")]
	public static string AnnieHurt;

	[Token(Token = "0x4002123")]
	[FieldOffset(Offset = "0x20")]
	public static string ColossalSteam1;

	[Token(Token = "0x4002124")]
	[FieldOffset(Offset = "0x28")]
	public static string ColossalSteam2;

	[Token(Token = "0x60043A6")]
	[Address(RVA = "0x5B1DAD0", Offset = "0x5B1CAD0", VA = "0x5B1DAD0")]
	public ShifterSounds()
	{
		// Lifted from source/cpp/Characters/ShifterSounds.c (Characters.ShifterSounds$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/ShifterSounds.c.

	// Characters.ShifterSounds$$.cctor: clean
	static ShifterSounds()
	{
		Characters_ShifterSounds_StaticFields pCVar1;

		ShifterSounds.Thunder = "Thunder";
		pCVar1 = typeof(ShifterSounds).static_fields;
		pCVar1.ErenRoar = "ErenRoar";
		pCVar1 = typeof(ShifterSounds).static_fields;
		pCVar1.AnnieRoar = "AnnieRoar";
		pCVar1 = typeof(ShifterSounds).static_fields;
		pCVar1.AnnieHurt = "AnnieHurt";
		pCVar1 = typeof(ShifterSounds).static_fields;
		pCVar1.ColossalSteam1 = "ColossalSteam1";
		pCVar1 = typeof(ShifterSounds).static_fields;
		pCVar1.ColossalSteam2 = "ColossalSteam2";
		return;
	}
}
