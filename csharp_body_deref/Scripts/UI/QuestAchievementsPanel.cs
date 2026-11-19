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

[Token(Token = "0x2000885")]
internal class QuestAchievementsPanel : QuestCategoryPanel
{
	[Token(Token = "0x17000E32")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6005129")]
		[Address(RVA = "0x5C58590", Offset = "0x5C57590", VA = "0x5C58590", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600512A")]
	[Address(RVA = "0x5C585A0", Offset = "0x5C575A0", VA = "0x5C585A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600512B")]
	[Address(RVA = "0x5C5A030", Offset = "0x5C59030", VA = "0x5C5A030")]
	public QuestAchievementsPanel()
	{
	}
}
