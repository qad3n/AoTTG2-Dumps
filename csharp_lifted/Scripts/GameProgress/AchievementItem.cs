// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.AchievementItem
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/AchievementItem.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/AchievementItem.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace GameProgress;

[Token(Token = "0x2000361")]
internal class AchievementItem : QuestItem
{
	[Token(Token = "0x40010E4")]
	[FieldOffset(Offset = "0x80")]
	public StringSetting Tier;

	[Token(Token = "0x40010E5")]
	[FieldOffset(Offset = "0x88")]
	public BoolSetting Active;

	[Token(Token = "0x60014FD")]
	[Address(RVA = "0x581C1A0", Offset = "0x581B1A0", VA = "0x581C1A0", Slot = "14")]
	public override string GetQuestName()
	{
		// Lifted from source/cpp/GameProgress/AchievementItem.c (GameProgress.AchievementItem$$GetQuestName): 2 lines keep C-only constructs
		StringSetting pSVar1;
		String str0;
		bool bVar2;
		String* ppSVar3;
		String str1;
		String str3;
		String pSVar4;
		MethodInfo method_00;
		int iStack_24;

		pSVar4 = "A";
		pSVar1 = this.Tier;
		if (pSVar1 == null) goto label_0591c308;
		method_00 = (MethodInfo *)"Bronze";
		bVar2 = (pSVar1._value == "Bronze");
		if (bVar2) {
			pSVar4 = "A";
		}
		else {
			pSVar1 = this.Tier;
			if (pSVar1 == null) goto label_0591c308;
			method_00 = (MethodInfo *)"Silver";
			bVar2 = (pSVar1._value == "Silver");
			if (bVar2) {
				ppSVar3 = &"B";
			}
			else {
				pSVar1 = this.Tier;
				if (pSVar1 == null) goto label_0591c308;
				method_00 = (MethodInfo *)"Gold";
				bVar2 = (pSVar1._value == "Gold");
				if (!bVar2) goto label_0591c2b4;
				ppSVar3 = &"C";
			}
			pSVar4 = *ppSVar3;
		}
	label_0591c2b4: ;
		pSVar1 = this.Category;
		if (pSVar1 != null) {
			str0 = pSVar1._value;
			str1 = this.GetConditionsHash();
			if (this.Amount != null) {
				str3 = iStack_24.ToString();
				pSVar4 = String.Concat(str0, str1, pSVar4, str3);
				return pSVar4;
			}
		}
	label_0591c308: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60014FE")]
	[Address(RVA = "0x581C310", Offset = "0x581B310", VA = "0x581C310")]
	public AchievementItem()
	{
		// Lifted from source/cpp/GameProgress/AchievementItem.c (GameProgress.AchievementItem$$.ctor): clean
		String defaultValue;
		StringSetting __this_00;
		MethodInfo method_00;

		defaultValue = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this_00 = new StringSetting(defaultValue, 0x7fffffff);
		this.Tier = __this_00;
		method_00 = new BoolSetting(false);
		this.Active = (BoolSetting)method_00;
		base();
		return;
	}
}
