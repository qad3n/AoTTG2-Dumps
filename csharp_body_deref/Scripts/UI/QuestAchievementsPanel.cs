using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200065C")]
internal class QuestAchievementsPanel : QuestCategoryPanel
{
	[Token(Token = "0x17000C5E")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004013")]
		[Address(RVA = "0x3FFAD10", Offset = "0x3FFAD10", VA = "0x3FFAD10", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004014")]
	[Address(RVA = "0x3FFAD20", Offset = "0x3FFAD20", VA = "0x3FFAD20", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004015")]
	[Address(RVA = "0x3FFCE50", Offset = "0x3FFCE50", VA = "0x3FFCE50")]
	public QuestAchievementsPanel()
	{
	}
}
