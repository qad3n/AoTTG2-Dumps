using Gisketch.Aottg2UI.Actions;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000133")]
public static class AottgExternalLinks
{
	[Token(Token = "0x6000675")]
	[Address(RVA = "0x4074DB0", Offset = "0x4074DB0", VA = "0x4074DB0")]
	public static bool TryShow(string url)
	{
		return default(bool);
	}

	[Token(Token = "0x6000676")]
	[Address(RVA = "0x4074DC0", Offset = "0x4074DC0", VA = "0x4074DC0")]
	public static void Show(string url)
	{
	}

	[Token(Token = "0x6000677")]
	[Address(RVA = "0x4074E40", Offset = "0x4074E40", VA = "0x4074E40")]
	public static void Show(GisketchActionContext context, string url)
	{
	}
}
