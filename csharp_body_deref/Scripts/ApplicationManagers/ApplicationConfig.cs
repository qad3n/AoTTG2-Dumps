using Il2CppDummyDll;

namespace ApplicationManagers;

[Token(Token = "0x200072C")]
internal class ApplicationConfig
{
	[Token(Token = "0x4002287")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string DevelopmentConfigPath;

	[Token(Token = "0x4002288")]
	[FieldOffset(Offset = "0x8")]
	public static bool DevelopmentMode;

	[Token(Token = "0x4002289")]
	public const string GameVersion = "7.03.2026";

	[Token(Token = "0x600460E")]
	[Address(RVA = "0x4093BF0", Offset = "0x4093BF0", VA = "0x4093BF0")]
	public static void Init()
	{
	}

	[Token(Token = "0x600460F")]
	[Address(RVA = "0x4093CB0", Offset = "0x4093CB0", VA = "0x4093CB0")]
	public ApplicationConfig()
	{
	}
}
