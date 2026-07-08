using System.Runtime.CompilerServices;
using ApplicationManagers.Credits;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200012A")]
internal static class AottgCreditsScreenState
{
	[Token(Token = "0x170000C2")]
	public static AottgCreditsResponse Credits
	{
		[Token(Token = "0x600063D")]
		[Address(RVA = "0x40724B0", Offset = "0x40724B0", VA = "0x40724B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600063E")]
		[Address(RVA = "0x40724F0", Offset = "0x40724F0", VA = "0x40724F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000C3")]
	public static bool HasCategories
	{
		[Token(Token = "0x600063F")]
		[Address(RVA = "0x4070CC0", Offset = "0x4070CC0", VA = "0x4070CC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000640")]
	[Address(RVA = "0x4067150", Offset = "0x4067150", VA = "0x4067150")]
	public static void Set(AottgCreditsResponse credits)
	{
	}

	[Token(Token = "0x6000641")]
	[Address(RVA = "0x40671A0", Offset = "0x40671A0", VA = "0x40671A0")]
	public static void Clear()
	{
	}
}
