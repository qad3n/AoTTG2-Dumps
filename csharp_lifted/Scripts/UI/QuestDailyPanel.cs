// ==================== AoTTG2 cross-reference ====================
// Type: UI.QuestDailyPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/QuestDailyPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/QuestDailyPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000887")]
internal class QuestDailyPanel : QuestCategoryPanel
{
	[Token(Token = "0x6005138")]
	[Address(RVA = "0x5C5ADF0", Offset = "0x5C59DF0", VA = "0x5C5ADF0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/QuestDailyPanel.c (UI.QuestDailyPanel$$Setup): clean
		Transform parent_00;
		GameProgressContainer pGVar1;
		QuestContainer pGVar2;
		ListSetting<QuestItem> pSVar3;
		String pSVar4;
		ElementStyle __this_00;
		GameObject __this_01;
		Text pUVar5;
		Color UVar6;

		this.Setup(parent);
		parent_00 = this.SinglePanel;
		pSVar4 = this.get_ThemePanel();
		__this_00 = new ElementStyle(0x18, 120.0, 20.0, pSVar4);
		pSVar4 = QuestHandler.GetTimeToQuestReset(true);
		__this_01 = ElementFactory.CreateDefaultLabel(parent_00, __this_00, pSVar4, 0, 3);
		if (__this_01 != null) {
			pUVar5 = __this_01.GetComponent<Text>();
			pSVar4 = this.get_ThemePanel();
			UVar6 = UIManager.GetThemeColor(pSVar4, "QuestHeader", "ResetTextColor", "DefaultPanel");
			if (pUVar5 != null) {
				pUVar5.set_color(UVar6);
				if ((typeof(GameProgressManager)._2).cctor_finished_or_no_cctor == 0) {
				}
				pGVar1 = GameProgressManager.GameProgress;
				if (((pGVar1 != null) &&(pGVar2 = pGVar1.Quest, pGVar2 != null)) &&(pSVar3 = pGVar2.DailyQuestItems, pSVar3 != null)) {
					this.CreateQuestItems((List<QuestItem>)pSVar3._value);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005139")]
	[Address(RVA = "0x5C5B000", Offset = "0x5C5A000", VA = "0x5C5B000")]
	public QuestDailyPanel()
	{
		// Lifted from source/cpp/UI/QuestDailyPanel.c (UI.QuestDailyPanel$$.ctor): clean
		this.QuestItemWidth = 940.0;
		this.QuestItemHeight = 100.0;
		base();
		return;
	}
}
