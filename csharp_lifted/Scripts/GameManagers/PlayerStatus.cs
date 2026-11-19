// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.PlayerStatus
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameManagers/PlayerStatus.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace GameManagers;

[Token(Token = "0x20003A2")]
internal class PlayerStatus
{
	[Token(Token = "0x400128A")]
	[FieldOffset(Offset = "0x0")]
	public static string Alive;

	[Token(Token = "0x400128B")]
	[FieldOffset(Offset = "0x8")]
	public static string Dead;

	[Token(Token = "0x400128C")]
	[FieldOffset(Offset = "0x10")]
	public static string Spectating;

	[Token(Token = "0x600174E")]
	[Address(RVA = "0x5857E00", Offset = "0x5856E00", VA = "0x5857E00")]
	public PlayerStatus()
	{
		// Lifted from source/cpp/GameManagers/PlayerStatus.c (GameManagers.PlayerStatus$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/GameManagers/PlayerStatus.c.

	// GameManagers.PlayerStatus$$.cctor: clean
	static PlayerStatus()
	{
		GameManagers_PlayerStatus_StaticFields pGVar1;

		PlayerStatus.Alive = "Alive";
		pGVar1 = typeof(PlayerStatus).static_fields;
		pGVar1.Dead = "Dead";
		pGVar1 = typeof(PlayerStatus).static_fields;
		pGVar1.Spectating = "Spectating";
		return;
	}
}
