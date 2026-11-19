// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.ApplicationConfig
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/ApplicationConfig.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/ApplicationConfig.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace ApplicationManagers;

[Token(Token = "0x200096D")]
internal class ApplicationConfig
{
	[Token(Token = "0x4002F6A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string DevelopmentConfigPath;

	[Token(Token = "0x4002F6B")]
	[FieldOffset(Offset = "0x8")]
	public static bool DevelopmentMode;

	[Token(Token = "0x4002F6C")]
	public const string GameVersion = "11.15.2026";

	[Token(Token = "0x600583F")]
	[Address(RVA = "0x5D080A0", Offset = "0x5D070A0", VA = "0x5D080A0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6005840")]
	[Address(RVA = "0x5D08160", Offset = "0x5D07160", VA = "0x5D08160")]
	public ApplicationConfig()
	{
	}
}
