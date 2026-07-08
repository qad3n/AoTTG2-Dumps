using Il2CppDummyDll;
using Photon.Realtime;

namespace Photon.Pun.UtilityScripts;

[Token(Token = "0x2000016")]
public static class ScoreExtensions
{
	[Token(Token = "0x600007F")]
	[Address(RVA = "0x3BEED90", Offset = "0x3BEED90", VA = "0x3BEED90")]
	public static void SetScore(this Player player, int newScore)
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x3BEEE40", Offset = "0x3BEEE40", VA = "0x3BEEE40")]
	public static void AddScore(this Player player, int scoreToAddToCurrent)
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x3BEEF00", Offset = "0x3BEEF00", VA = "0x3BEEF00")]
	public static int GetScore(this Player player)
	{
		return default(int);
	}
}
