// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardCategoryPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/ScoreboardCategoryPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardCategoryPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x20007AB")]
internal class ScoreboardCategoryPanel : CategoryPanel
{
	[Token(Token = "0x17000D6B")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004A9C")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D6C")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004A9D")]
		[Address(RVA = "0x22615B0", Offset = "0x225FBB0", VA = "0x1822615B0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004A9E")]
	[Address(RVA = "0x2261010", Offset = "0x225F610", VA = "0x182261010")]
	protected void SetupGisketch(BasePanel parent)
	{
	}

	[Token(Token = "0x6004A9F")]
	[Address(RVA = "0x2260E00", Offset = "0x225F400", VA = "0x182260E00")]
	private Transform CreateColumn(AottgInGameView view, Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6004AA0")]
	[Address(RVA = "0x1DA8AE0", Offset = "0x1DA70E0", VA = "0x181DA8AE0")]
	public ScoreboardCategoryPanel()
	{
	}
}
