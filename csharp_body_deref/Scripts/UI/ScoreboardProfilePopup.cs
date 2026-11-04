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

[Token(Token = "0x20007BE")]
internal class ScoreboardProfilePopup : AottgScoreboardPopup
{
	[Token(Token = "0x400271D")]
	private const float ContentWidth = 484f;

	[Token(Token = "0x400271E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private ProfileSettings _profile;

	[Token(Token = "0x400271F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private readonly List<GameObject> _items;

	[Token(Token = "0x4002720")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private Transform _content;

	[Token(Token = "0x17000D7C")]
	protected override string DialogId
	{
		[Token(Token = "0x6004B29")]
		[Address(RVA = "0x226C930", Offset = "0x226AF30", VA = "0x18226C930", Slot = "62")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004B2A")]
	[Address(RVA = "0x226BA50", Offset = "0x226A050", VA = "0x18226BA50", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004B2B")]
	[Address(RVA = "0x226BAE0", Offset = "0x226A0E0", VA = "0x18226BAE0")]
	public void Show(Player player)
	{
	}

	[Token(Token = "0x6004B2C")]
	[Address(RVA = "0x226B5C0", Offset = "0x2269BC0", VA = "0x18226B5C0")]
	private void AddRow(string label, string value)
	{
	}

	[Token(Token = "0x6004B2D")]
	[Address(RVA = "0x226B780", Offset = "0x2269D80", VA = "0x18226B780")]
	private string GetAuthoritativeDisplayName(Player player)
	{
		return null;
	}

	[Token(Token = "0x6004B2E")]
	[Address(RVA = "0x226B8D0", Offset = "0x2269ED0", VA = "0x18226B8D0")]
	private string GetDisplayUserId(Player player)
	{
		return null;
	}

	[Token(Token = "0x6004B2F")]
	[Address(RVA = "0x226B9D0", Offset = "0x2269FD0", VA = "0x18226B9D0")]
	private string GetPatreonTierLabel(Player player)
	{
		return null;
	}

	[Token(Token = "0x6004B30")]
	[Address(RVA = "0x226B2F0", Offset = "0x22698F0", VA = "0x18226B2F0")]
	private void AddEffectRow(Player player, string labelKey, string value, bool enabled, string effectName, Color colorA, Color colorB, Color colorC, Color colorD)
	{
	}

	[Token(Token = "0x6004B31")]
	[Address(RVA = "0x226C8B0", Offset = "0x226AEB0", VA = "0x18226C8B0")]
	public ScoreboardProfilePopup()
	{
	}
}
