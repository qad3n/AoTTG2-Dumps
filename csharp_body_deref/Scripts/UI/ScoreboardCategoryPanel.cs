// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardCategoryPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ScoreboardCategoryPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardCategoryPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000856")]
internal class ScoreboardCategoryPanel : CategoryPanel
{
	[Token(Token = "0x17000DDC")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004FB3")]
		[Address(RVA = "0x5C3C130", Offset = "0x5C3B130", VA = "0x5C3C130", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000DDD")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004FB4")]
		[Address(RVA = "0x5C3C140", Offset = "0x5C3B140", VA = "0x5C3C140", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004FB5")]
	[Address(RVA = "0x5C3C170", Offset = "0x5C3B170", VA = "0x5C3C170")]
	protected void SetupGisketch(BasePanel parent)
	{
	}

	[Token(Token = "0x6004FB6")]
	[Address(RVA = "0x5C3C630", Offset = "0x5C3B630", VA = "0x5C3C630")]
	private Transform CreateColumn(AottgInGameView view, Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6004FB7")]
	[Address(RVA = "0x5C3C800", Offset = "0x5C3B800", VA = "0x5C3C800")]
	public ScoreboardCategoryPanel()
	{
	}
}
