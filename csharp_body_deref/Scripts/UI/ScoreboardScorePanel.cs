// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardScorePanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ScoreboardScorePanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardScorePanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000663")]
internal class ScoreboardScorePanel : ScoreboardCategoryPanel
{
	[Token(Token = "0x4001F55")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private List<Transform> _rows;

	[Token(Token = "0x4001F56")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Transform _header;

	[Token(Token = "0x4001F57")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private Player[] _lastPlayers;

	[Token(Token = "0x4001F58")]
	private const float MaxSyncDelay = 1f;

	[Token(Token = "0x4001F59")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private float _currentSyncDelay;

	[Token(Token = "0x17000C35")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600403D")]
		[Address(RVA = "0x42E7150", Offset = "0x42E7150", VA = "0x42E7150", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C36")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600403E")]
		[Address(RVA = "0x42E7160", Offset = "0x42E7160", VA = "0x42E7160", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600403F")]
	[Address(RVA = "0x42E7170", Offset = "0x42E7170", VA = "0x42E7170", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004040")]
	[Address(RVA = "0x42E7330", Offset = "0x42E7330", VA = "0x42E7330")]
	private void Update()
	{
	}

	[Token(Token = "0x6004041")]
	[Address(RVA = "0x42E7190", Offset = "0x42E7190", VA = "0x42E7190")]
	public void Sync()
	{
	}

	[Token(Token = "0x6004042")]
	[Address(RVA = "0x42E7A10", Offset = "0x42E7A10", VA = "0x42E7A10")]
	private void SetRows(ElementStyle style)
	{
	}

	[Token(Token = "0x6004043")]
	[Address(RVA = "0x42E7380", Offset = "0x42E7380", VA = "0x42E7380")]
	private void SetHeader(ElementStyle style, int currentPlayers, int maxPlayers)
	{
	}

	[Token(Token = "0x6004044")]
	[Address(RVA = "0x42E7C90", Offset = "0x42E7C90", VA = "0x42E7C90")]
	private Transform CreateRow(ElementStyle style, int index)
	{
		return null;
	}

	[Token(Token = "0x6004045")]
	[Address(RVA = "0x42E8190", Offset = "0x42E8190", VA = "0x42E8190")]
	private void SetRow(Transform row, Player player)
	{
	}

	[Token(Token = "0x6004046")]
	[Address(RVA = "0x42E9610", Offset = "0x42E9610", VA = "0x42E9610")]
	private void OnClickProfile(int index)
	{
	}

	[Token(Token = "0x6004047")]
	[Address(RVA = "0x42E96B0", Offset = "0x42E96B0", VA = "0x42E96B0")]
	private void OnClickKick(int index)
	{
	}

	[Token(Token = "0x6004048")]
	[Address(RVA = "0x42E9810", Offset = "0x42E9810", VA = "0x42E9810")]
	private void FinishKickPlayer(Player player)
	{
	}

	[Token(Token = "0x6004049")]
	[Address(RVA = "0x42E9880", Offset = "0x42E9880", VA = "0x42E9880")]
	private void OnClickMute(int index)
	{
	}

	[Token(Token = "0x600404A")]
	[Address(RVA = "0x42E9920", Offset = "0x42E9920", VA = "0x42E9920")]
	public ScoreboardScorePanel()
	{
	}
}
