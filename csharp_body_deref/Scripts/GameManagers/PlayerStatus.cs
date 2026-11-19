// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.PlayerStatus
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameManagers/PlayerStatus.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
	}
}
