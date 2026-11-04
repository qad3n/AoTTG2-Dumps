// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.ApplicationConfig
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/ApplicationConfig.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/ApplicationConfig.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace ApplicationManagers;

[Token(Token = "0x2000903")]
internal class ApplicationConfig
{
	[Token(Token = "0x4002CA9")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string DevelopmentConfigPath;

	[Token(Token = "0x4002CAA")]
	[FieldOffset(Offset = "0x8")]
	public static bool DevelopmentMode;

	[Token(Token = "0x4002CAB")]
	public const string GameVersion = "10.31.2026";

	[Token(Token = "0x60054DE")]
	[Address(RVA = "0x2344350", Offset = "0x2342950", VA = "0x182344350")]
	public static void Init()
	{
	}

	[Token(Token = "0x60054DF")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ApplicationConfig()
	{
	}
}
