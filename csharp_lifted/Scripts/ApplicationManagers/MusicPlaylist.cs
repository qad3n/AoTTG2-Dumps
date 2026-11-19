// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.MusicPlaylist
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/MusicPlaylist.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/MusicManager.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace ApplicationManagers;

[Token(Token = "0x2000984")]
public class MusicPlaylist
{
	[Token(Token = "0x4003015")]
	[FieldOffset(Offset = "0x0")]
	public static string None;

	[Token(Token = "0x4003016")]
	[FieldOffset(Offset = "0x8")]
	public static string Menu;

	[Token(Token = "0x4003017")]
	[FieldOffset(Offset = "0x10")]
	public static string Default;

	[Token(Token = "0x4003018")]
	[FieldOffset(Offset = "0x18")]
	public static string Peaceful;

	[Token(Token = "0x4003019")]
	[FieldOffset(Offset = "0x20")]
	public static string Ambient;

	[Token(Token = "0x400301A")]
	[FieldOffset(Offset = "0x28")]
	public static string Battle;

	[Token(Token = "0x400301B")]
	[FieldOffset(Offset = "0x30")]
	public static string Boss;

	[Token(Token = "0x400301C")]
	[FieldOffset(Offset = "0x38")]
	public static string Racing;

	[Token(Token = "0x60058FC")]
	[Address(RVA = "0x5D1BA00", Offset = "0x5D1AA00", VA = "0x5D1BA00")]
	public MusicPlaylist()
	{
		// Lifted from source/cpp/ApplicationManagers/MusicPlaylist.c (ApplicationManagers.MusicPlaylist$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/ApplicationManagers/MusicPlaylist.c.

	// ApplicationManagers.MusicPlaylist$$.cctor: clean
	static MusicPlaylist()
	{
		ApplicationManagers_MusicPlaylist_StaticFields pAVar1;

		MusicPlaylist.None = "None";
		pAVar1 = typeof(MusicPlaylist).static_fields;
		pAVar1.Menu = "Menu";
		pAVar1 = typeof(MusicPlaylist).static_fields;
		pAVar1.Default = "Default";
		pAVar1 = typeof(MusicPlaylist).static_fields;
		pAVar1.Peaceful = "Peaceful";
		pAVar1 = typeof(MusicPlaylist).static_fields;
		pAVar1.Ambient = "Ambient";
		pAVar1 = typeof(MusicPlaylist).static_fields;
		pAVar1.Battle = "Battle";
		pAVar1 = typeof(MusicPlaylist).static_fields;
		pAVar1.Boss = "Boss";
		pAVar1 = typeof(MusicPlaylist).static_fields;
		pAVar1.Racing = "Racing";
		return;
	}
}
