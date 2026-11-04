// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardScorePanel
// Update status: CHANGED in this game update
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

[Token(Token = "0x20007BF")]
internal class ScoreboardScorePanel : ScoreboardCategoryPanel
{
	[Token(Token = "0x4002721")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private List<Transform> _rows;

	[Token(Token = "0x4002722")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Transform _header;

	[Token(Token = "0x4002723")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private AottgInGameView _view;

	[Token(Token = "0x4002724")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private Player[] _lastPlayers;

	[Token(Token = "0x4002725")]
	private const float MaxSyncDelay = 1f;

	[Token(Token = "0x4002726")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private float _currentSyncDelay;

	[Token(Token = "0x17000D7D")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004B32")]
		[Address(RVA = "0x227DF10", Offset = "0x227C510", VA = "0x18227DF10", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D7E")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004B33")]
		[Address(RVA = "0x846EE0", Offset = "0x8454E0", VA = "0x180846EE0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6004B34")]
	[Address(RVA = "0x227DC10", Offset = "0x227C210", VA = "0x18227DC10", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004B35")]
	[Address(RVA = "0x227DE30", Offset = "0x227C430", VA = "0x18227DE30")]
	private void Update()
	{
	}

	[Token(Token = "0x6004B36")]
	[Address(RVA = "0x227DC90", Offset = "0x227C290", VA = "0x18227DC90")]
	public void Sync()
	{
	}

	[Token(Token = "0x6004B37")]
	[Address(RVA = "0x227D990", Offset = "0x227BF90", VA = "0x18227D990")]
	private void SetRows(ElementStyle style)
	{
	}

	[Token(Token = "0x6004B38")]
	[Address(RVA = "0x227BD30", Offset = "0x227A330", VA = "0x18227BD30")]
	private void SetHeader(ElementStyle style, int currentPlayers, int maxPlayers)
	{
	}

	[Token(Token = "0x6004B39")]
	[Address(RVA = "0x227B450", Offset = "0x2279A50", VA = "0x18227B450")]
	private Transform CreateRow(ElementStyle style, int index)
	{
		return null;
	}

	[Token(Token = "0x6004B3A")]
	[Address(RVA = "0x227C380", Offset = "0x227A980", VA = "0x18227C380")]
	private void SetRow(Transform row, Player player)
	{
	}

	[Token(Token = "0x6004B3B")]
	[Address(RVA = "0x227BC70", Offset = "0x227A270", VA = "0x18227BC70")]
	internal void OnClickProfile(int index)
	{
	}

	[Token(Token = "0x6004B3C")]
	[Address(RVA = "0x227B9F0", Offset = "0x2279FF0", VA = "0x18227B9F0")]
	internal void OnClickKick(int index)
	{
	}

	[Token(Token = "0x6004B3D")]
	[Address(RVA = "0x227B980", Offset = "0x2279F80", VA = "0x18227B980")]
	private void FinishKickPlayer(Player player)
	{
	}

	[Token(Token = "0x6004B3E")]
	[Address(RVA = "0x227BBB0", Offset = "0x227A1B0", VA = "0x18227BBB0")]
	internal void OnClickMute(int index)
	{
	}

	[Token(Token = "0x6004B3F")]
	[Address(RVA = "0x227DE80", Offset = "0x227C480", VA = "0x18227DE80")]
	public ScoreboardScorePanel()
	{
	}
}
