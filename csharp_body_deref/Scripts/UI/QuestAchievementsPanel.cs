// ==================== AoTTG2 cross-reference ====================
// Type: UI.QuestAchievementsPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/QuestAchievementsPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/QuestAchievementsPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20006A8")]
internal class QuestAchievementsPanel : QuestCategoryPanel
{
	[Token(Token = "0x17000CD8")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004270")]
		[Address(RVA = "0x430F050", Offset = "0x430F050", VA = "0x430F050", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004271")]
	[Address(RVA = "0x430F060", Offset = "0x430F060", VA = "0x430F060", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004272")]
	[Address(RVA = "0x4311190", Offset = "0x4311190", VA = "0x4311190")]
	public QuestAchievementsPanel()
	{
	}
}
