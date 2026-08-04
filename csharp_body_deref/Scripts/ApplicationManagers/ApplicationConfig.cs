// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.ApplicationConfig
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/ApplicationConfig.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/ApplicationConfig.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace ApplicationManagers;

[Token(Token = "0x200077A")]
internal class ApplicationConfig
{
	[Token(Token = "0x40023E4")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string DevelopmentConfigPath;

	[Token(Token = "0x40023E5")]
	[FieldOffset(Offset = "0x8")]
	public static bool DevelopmentMode;

	[Token(Token = "0x40023E6")]
	public const string GameVersion = "7.28.2026";

	[Token(Token = "0x6004876")]
	[Address(RVA = "0x43ABC40", Offset = "0x43ABC40", VA = "0x43ABC40")]
	public static void Init()
	{
	}

	[Token(Token = "0x6004877")]
	[Address(RVA = "0x43ABD00", Offset = "0x43ABD00", VA = "0x43ABD00")]
	public ApplicationConfig()
	{
	}
}
