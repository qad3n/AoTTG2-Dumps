using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200017D")]
internal static class AottgProfileDialogSelection
{
	[Token(Token = "0x400088F")]
	[FieldOffset(Offset = "0x0")]
	public static string AvatarKey;

	[Token(Token = "0x4000890")]
	[FieldOffset(Offset = "0x8")]
	public static string BannerKey;

	[Token(Token = "0x60008AE")]
	[Address(RVA = "0x40ED9C0", Offset = "0x40ED9C0", VA = "0x40ED9C0")]
	public static void Set(string pickerId, string key)
	{
	}
}
