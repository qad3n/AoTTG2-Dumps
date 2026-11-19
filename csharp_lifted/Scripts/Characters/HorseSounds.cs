// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HorseSounds
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/HorseSounds.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Horse/HorseSounds.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006B2")]
internal class HorseSounds
{
	[Token(Token = "0x4001E4E")]
	[FieldOffset(Offset = "0x0")]
	public static string Idle1;

	[Token(Token = "0x4001E4F")]
	[FieldOffset(Offset = "0x8")]
	public static string Idle2;

	[Token(Token = "0x4001E50")]
	[FieldOffset(Offset = "0x10")]
	public static string Idle3;

	[Token(Token = "0x4001E51")]
	[FieldOffset(Offset = "0x18")]
	public static string Run;

	[Token(Token = "0x60040E6")]
	[Address(RVA = "0x5AF33A0", Offset = "0x5AF23A0", VA = "0x5AF33A0")]
	public HorseSounds()
	{
		// Lifted from source/cpp/Characters/HorseSounds.c (Characters.HorseSounds$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/HorseSounds.c.

	// Characters.HorseSounds$$.cctor: clean
	static HorseSounds()
	{
		Characters_HorseSounds_StaticFields pCVar1;

		HorseSounds.Idle1 = "Idle1";
		pCVar1 = typeof(HorseSounds).static_fields;
		pCVar1.Idle2 = "Idle2";
		pCVar1 = typeof(HorseSounds).static_fields;
		pCVar1.Idle3 = "Idle3";
		pCVar1 = typeof(HorseSounds).static_fields;
		pCVar1.Run = "Run";
		return;
	}
}
