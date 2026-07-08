using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200012B")]
internal static class AottgCreditsStateKeys
{
	[Token(Token = "0x40006EA")]
	public const string Loading = "credits.loading";

	[Token(Token = "0x40006EB")]
	public const string Ready = "credits.ready";

	[Token(Token = "0x40006EC")]
	public const string Empty = "credits.empty";

	[Token(Token = "0x40006ED")]
	public const string Failed = "credits.failed";

	[Token(Token = "0x40006EE")]
	public const string Refreshing = "credits.refreshing";

	[Token(Token = "0x40006EF")]
	public const string Error = "credits.error";
}
