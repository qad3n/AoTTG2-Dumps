// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardProfilePopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/ScoreboardProfilePopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardProfilePopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using Photon.Realtime;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x200086A")]
internal class ScoreboardProfilePopup : AottgScoreboardPopup
{
	[Token(Token = "0x4002A9D")]
	private const float ContentWidth = 484f;

	[Token(Token = "0x4002A9E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private ProfileSettings _profile;

	[Token(Token = "0x4002A9F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private readonly List<GameObject> _items;

	[Token(Token = "0x4002AA0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private Transform _content;

	[Token(Token = "0x17000DED")]
	protected override string DialogId
	{
		[Token(Token = "0x6005048")]
		[Address(RVA = "0x5C4A400", Offset = "0x5C49400", VA = "0x5C4A400", Slot = "62")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6005049")]
	[Address(RVA = "0x5C4A430", Offset = "0x5C49430", VA = "0x5C4A430", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600504A")]
	[Address(RVA = "0x5C4A4C0", Offset = "0x5C494C0", VA = "0x5C4A4C0")]
	public void Show(Player player)
	{
	}

	[Token(Token = "0x600504B")]
	[Address(RVA = "0x5C4BA70", Offset = "0x5C4AA70", VA = "0x5C4BA70")]
	private static string Locale(string item)
	{
		return null;
	}

	[Token(Token = "0x600504C")]
	[Address(RVA = "0x5C4B6B0", Offset = "0x5C4A6B0", VA = "0x5C4B6B0")]
	private void AddRow(string label, string value)
	{
	}

	[Token(Token = "0x600504D")]
	[Address(RVA = "0x5C4B840", Offset = "0x5C4A840", VA = "0x5C4B840")]
	private string GetAuthoritativeDisplayName(Player player)
	{
		return null;
	}

	[Token(Token = "0x600504E")]
	[Address(RVA = "0x5C4BB00", Offset = "0x5C4AB00", VA = "0x5C4BB00")]
	private string GetDisplayUserId(Player player)
	{
		return null;
	}

	[Token(Token = "0x600504F")]
	[Address(RVA = "0x5C4BA00", Offset = "0x5C4AA00", VA = "0x5C4BA00")]
	private string GetPatreonTierLabel(Player player)
	{
		return null;
	}

	[Token(Token = "0x6005050")]
	[Address(RVA = "0x5C4B3C0", Offset = "0x5C4A3C0", VA = "0x5C4B3C0")]
	private void AddEffectRow(Player player, string labelKey, string value, bool enabled, string effectName, Color colorA, Color colorB, Color colorC, Color colorD)
	{
	}

	[Token(Token = "0x6005051")]
	[Address(RVA = "0x5C4BC70", Offset = "0x5C4AC70", VA = "0x5C4BC70")]
	public ScoreboardProfilePopup()
	{
	}
}
