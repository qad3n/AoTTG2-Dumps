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

[Token(Token = "0x2000803")]
internal class QuestAchievementsPanel : QuestCategoryPanel
{
	[Token(Token = "0x17000E1E")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004D64")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004D65")]
	[Address(RVA = "0x2296F30", Offset = "0x2295530", VA = "0x182296F30", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004D66")]
	[Address(RVA = "0x2297A80", Offset = "0x2296080", VA = "0x182297A80")]
	public QuestAchievementsPanel()
	{
	}
}
