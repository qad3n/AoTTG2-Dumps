// ==================== AoTTG2 cross-reference ====================
// Type: Projectiles.ProjectilePrefabs
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Projectiles/ProjectilePrefabs.c
// Prior real C# source (older reference): Assets/Scripts/Projectiles/ProjectilePrefabs.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Projectiles;

[Token(Token = "0x2000077")]
internal class ProjectilePrefabs
{
	[Token(Token = "0x4000242")]
	[FieldOffset(Offset = "0x0")]
	public static string Thunderspear;

	[Token(Token = "0x4000243")]
	[FieldOffset(Offset = "0x8")]
	public static string CannonBall;

	[Token(Token = "0x4000244")]
	[FieldOffset(Offset = "0x10")]
	public static string Flare;

	[Token(Token = "0x4000245")]
	[FieldOffset(Offset = "0x18")]
	public static string BladeThrow;

	[Token(Token = "0x4000246")]
	[FieldOffset(Offset = "0x20")]
	public static string SmokeBomb;

	[Token(Token = "0x4000247")]
	[FieldOffset(Offset = "0x28")]
	public static string Rock1;

	[Token(Token = "0x4000248")]
	[FieldOffset(Offset = "0x30")]
	public static string Rock2;

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x5772540", Offset = "0x5771540", VA = "0x5772540")]
	public ProjectilePrefabs()
	{
		// Lifted from source/cpp/Projectiles/ProjectilePrefabs.c (Projectiles.ProjectilePrefabs$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Projectiles/ProjectilePrefabs.c.

	// Projectiles.ProjectilePrefabs$$.cctor: clean
	static ProjectilePrefabs()
	{
		Projectiles_ProjectilePrefabs_StaticFields pPVar1;

		ProjectilePrefabs.Thunderspear = "Thunderspear";
		pPVar1 = typeof(ProjectilePrefabs).static_fields;
		pPVar1.CannonBall = "CannonBall";
		pPVar1 = typeof(ProjectilePrefabs).static_fields;
		pPVar1.Flare = "Flare";
		pPVar1 = typeof(ProjectilePrefabs).static_fields;
		pPVar1.BladeThrow = "BladeThrow";
		pPVar1 = typeof(ProjectilePrefabs).static_fields;
		pPVar1.SmokeBomb = "SmokeBomb";
		pPVar1 = typeof(ProjectilePrefabs).static_fields;
		pPVar1.Rock1 = "Rock1";
		pPVar1 = typeof(ProjectilePrefabs).static_fields;
		pPVar1.Rock2 = "Rock2";
		return;
	}
}
