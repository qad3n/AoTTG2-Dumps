// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardScorePanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ScoreboardScorePanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardScorePanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace UI;

[Token(Token = "0x200086B")]
internal class ScoreboardScorePanel : ScoreboardCategoryPanel
{
	[Token(Token = "0x4002AA1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private List<Transform> _rows;

	[Token(Token = "0x4002AA2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Transform _header;

	[Token(Token = "0x4002AA3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private AottgInGameView _view;

	[Token(Token = "0x4002AA4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private Player[] _lastPlayers;

	[Token(Token = "0x4002AA5")]
	private const float MaxSyncDelay = 1f;

	[Token(Token = "0x4002AA6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private float _currentSyncDelay;

	[Token(Token = "0x17000DEE")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6005052")]
		[Address(RVA = "0x5C4BCF0", Offset = "0x5C4ACF0", VA = "0x5C4BCF0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DEF")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6005053")]
		[Address(RVA = "0x5C4BD00", Offset = "0x5C4AD00", VA = "0x5C4BD00", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6005054")]
	[Address(RVA = "0x5C4BD10", Offset = "0x5C4AD10", VA = "0x5C4BD10", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6005055")]
	[Address(RVA = "0x5C4BD80", Offset = "0x5C4AD80", VA = "0x5C4BD80")]
	private void Update()
	{
	}

	[Token(Token = "0x6005056")]
	[Address(RVA = "0x5C49980", Offset = "0x5C48980", VA = "0x5C49980")]
	public void Sync()
	{
	}

	[Token(Token = "0x6005057")]
	[Address(RVA = "0x5C4C440", Offset = "0x5C4B440", VA = "0x5C4C440")]
	private void SetRows(ElementStyle style)
	{
	}

	[Token(Token = "0x6005058")]
	[Address(RVA = "0x5C4BDD0", Offset = "0x5C4ADD0", VA = "0x5C4BDD0")]
	private void SetHeader(ElementStyle style, int currentPlayers, int maxPlayers)
	{
	}

	[Token(Token = "0x6005059")]
	[Address(RVA = "0x5C4C6A0", Offset = "0x5C4B6A0", VA = "0x5C4C6A0")]
	private Transform CreateRow(ElementStyle style, int index)
	{
		return null;
	}

	[Token(Token = "0x600505A")]
	[Address(RVA = "0x5C4CC30", Offset = "0x5C4BC30", VA = "0x5C4CC30")]
	private void SetRow(Transform row, Player player)
	{
	}

	[Token(Token = "0x600505B")]
	[Address(RVA = "0x5C4E310", Offset = "0x5C4D310", VA = "0x5C4E310")]
	internal void OnClickProfile(int index)
	{
	}

	[Token(Token = "0x600505C")]
	[Address(RVA = "0x5C4E3C0", Offset = "0x5C4D3C0", VA = "0x5C4E3C0")]
	internal void OnClickKick(int index)
	{
	}

	[Token(Token = "0x600505D")]
	[Address(RVA = "0x5C4E5E0", Offset = "0x5C4D5E0", VA = "0x5C4E5E0")]
	private void FinishKickPlayer(Player player)
	{
	}

	[Token(Token = "0x600505E")]
	[Address(RVA = "0x5C4E650", Offset = "0x5C4D650", VA = "0x5C4E650")]
	internal void OnClickMute(int index)
	{
	}

	[Token(Token = "0x600505F")]
	[Address(RVA = "0x5C4E700", Offset = "0x5C4D700", VA = "0x5C4E700")]
	public ScoreboardScorePanel()
	{
	}
}
