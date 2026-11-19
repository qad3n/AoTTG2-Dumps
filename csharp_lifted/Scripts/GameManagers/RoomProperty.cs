// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.RoomProperty
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameManagers/RoomProperty.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PlayerProperty.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace GameManagers;

[Token(Token = "0x20003AB")]
internal class RoomProperty
{
	[Token(Token = "0x40012C4")]
	[FieldOffset(Offset = "0x0")]
	public static string Name;

	[Token(Token = "0x40012C5")]
	[FieldOffset(Offset = "0x8")]
	public static string Map;

	[Token(Token = "0x40012C6")]
	[FieldOffset(Offset = "0x10")]
	public static string GameMode;

	[Token(Token = "0x40012C7")]
	[FieldOffset(Offset = "0x18")]
	public static string Sandbox;

	[Token(Token = "0x40012C8")]
	[FieldOffset(Offset = "0x20")]
	public static string Experience;

	[Token(Token = "0x40012C9")]
	[FieldOffset(Offset = "0x28")]
	public static string Password;

	[Token(Token = "0x40012CA")]
	[FieldOffset(Offset = "0x30")]
	public static string PasswordSalt;

	[Token(Token = "0x40012CB")]
	[FieldOffset(Offset = "0x38")]
	public static string PasswordHash;

	[Token(Token = "0x40012CC")]
	[FieldOffset(Offset = "0x40")]
	public static string AccountRequired;

	[Token(Token = "0x6001764")]
	[Address(RVA = "0x5858F50", Offset = "0x5857F50", VA = "0x5858F50")]
	public RoomProperty()
	{
		// Lifted from source/cpp/GameManagers/RoomProperty.c (GameManagers.RoomProperty$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/GameManagers/RoomProperty.c.

	// GameManagers.RoomProperty$$.cctor: clean
	static RoomProperty()
	{
		GameManagers_RoomProperty_StaticFields pGVar1;

		RoomProperty.Name = "Name";
		pGVar1 = typeof(RoomProperty).static_fields;
		pGVar1.Map = "Map";
		pGVar1 = typeof(RoomProperty).static_fields;
		pGVar1.GameMode = "GameMode";
		pGVar1 = typeof(RoomProperty).static_fields;
		pGVar1.Sandbox = "Sandbox";
		pGVar1 = typeof(RoomProperty).static_fields;
		pGVar1.Experience = "Experience";
		pGVar1 = typeof(RoomProperty).static_fields;
		pGVar1.Password = "Password";
		pGVar1 = typeof(RoomProperty).static_fields;
		pGVar1.PasswordSalt = "PS";
		pGVar1 = typeof(RoomProperty).static_fields;
		pGVar1.PasswordHash = "PH";
		pGVar1 = typeof(RoomProperty).static_fields;
		pGVar1.AccountRequired = "AccountRequired";
		return;
	}
}
