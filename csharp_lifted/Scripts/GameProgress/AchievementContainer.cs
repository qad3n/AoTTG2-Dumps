// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.AchievementContainer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/AchievementContainer.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/AchievementContainer.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace GameProgress;

[Token(Token = "0x200035C")]
internal class AchievementContainer : BaseSettingsContainer
{
	[Token(Token = "0x40010D4")]
	[FieldOffset(Offset = "0x30")]
	public ListSetting<AchievementItem> AchievementItems;

	[Token(Token = "0x60014F3")]
	[Address(RVA = "0x581A680", Offset = "0x5819680", VA = "0x581A680")]
	public AchievementCount GetAchievementCount()
	{
		// Lifted from source/cpp/GameProgress/AchievementContainer.c (GameProgress.AchievementContainer$$GetAchievementCount): 24 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		ListSetting<AchievementItem> pSVar8;
		List<object> __this_00;
		object pIVar9;
		bool bVar10;
		AchievementCount __this_01;
		AchievementCount pGVar11;
		byte[] local_78 = new byte[8];
		object local_68;
		byte[] local_58 = new byte[16];
		object local_48;
		AchievementCount local_40;
		AchievementCount local_38;

		local_78 = (byte[])0x0;
		local_68 = null;
		__this_01 = new AchievementCount();
		pSVar8 = this.AchievementItems;
		if ((pSVar8 != null) &&(__this_00 = (List<object>)pSVar8._value, __this_00 != null)) {
			local_58.GetEnumerator(__this_00) ;
			local_68 = local_48;
			local_78 = (byte[])local_58._0_8_;
			local_58._0_8_ = null;
			local_40 = (AchievementCount)&__this_01.FinishedGold;
			local_38 = (AchievementCount)&__this_01.FinishedSilver;
			local_58._8_8_ = local_78;
	label_0591a7c0: ;
			while(true) {
				bVar10 = local_78.MoveNext();
				pIVar9 = local_68;
				if (!bVar10) break;
				if (local_68 == null) {
					throw new NullReferenceException();
				}
				if (local_68[8].klass == null) {
					throw new NullReferenceException();
				}
				bVar10 = (((local_68[8].klass)._1).byval_arg.data == "Bronze");
				if (bVar10) {
					if (__this_01 == null) {
						throw new NullReferenceException();
					}
					piVar1 = &__this_01.TotalBronze;
					*piVar1 = *piVar1 + 1;
					if ((pIVar9[6].klass == null) || (pIVar9[4].klass == null)) {
						throw new NullReferenceException();
					}
					pGVar11 = &__this_01.fields;
					if (*(int)((long)&((pIVar9[4].klass)._1).namespaze + 4) <= *(int)((long)&((pIVar9[6].klass)._1).namespaze + 4)) goto label_0591a970;
				}
				else {
					if (pIVar9[8].klass == null) {
						throw new NullReferenceException();
					}
					bVar10 = (((pIVar9[8].klass)._1).byval_arg.data == "Silver");
					if (!bVar10) goto label_0591a8f0;
					if (__this_01 == null) {
						throw new NullReferenceException();
					}
					piVar1 = &__this_01.TotalSilver;
					*piVar1 = *piVar1 + 1;
					if ((pIVar9[6].klass == null) || (pIVar9[4].klass == null)) {
						throw new NullReferenceException();
					}
					pGVar11 = local_38;
					if (*(int)((long)&((pIVar9[4].klass)._1).namespaze + 4) <= *(int)((long)&((pIVar9[6].klass)._1).namespaze + 4)) goto label_0591a970;
				}
			}
			local_78.Dispose();
			if (__this_01 != null) {
				uVar2 = __this_01.FinishedBronze;
				uVar5 = __this_01.TotalBronze;
				uVar3 = __this_01.FinishedSilver;
				uVar6 = __this_01.TotalSilver;
				uVar4 = __this_01.FinishedGold;
				uVar7 = __this_01.TotalGold;
				__this_01.FinishedAll = uVar4 + uVar3 + uVar2;
				__this_01.TotalAll = uVar7 + uVar6 + uVar5;
				return __this_01;
			}
		}
		throw new NullReferenceException();
	label_0591a8f0: ;
		if (pIVar9[8].klass == null) {
			throw new NullReferenceException();
		}
		bVar10 = (((pIVar9[8].klass)._1).byval_arg.data == "Gold");
		if (bVar10) {
			if (__this_01 == null) {
				throw new NullReferenceException();
			}
			piVar1 = &__this_01.TotalGold;
			*piVar1 = *piVar1 + 1;
			if ((pIVar9[6].klass == null) || (pIVar9[4].klass == null)) {
				throw new NullReferenceException();
			}
			pGVar11 = local_40;
			if (*(int)((long)&((pIVar9[4].klass)._1).namespaze + 4) <= *(int)((long)&((pIVar9[6].klass)._1).namespaze + 4)) {
	label_0591a970: ;
				pGVar11.FinishedBronze = pGVar11.FinishedBronze + 1;
			}
		}
		goto label_0591a7c0;
	}

	[Token(Token = "0x60014F4")]
	[Address(RVA = "0x581AAD0", Offset = "0x5819AD0", VA = "0x581AAD0")]
	public AchievementContainer()
	{
		// Lifted from source/cpp/GameProgress/AchievementContainer.c (GameProgress.AchievementContainer$$.ctor): clean
		ListSetting<AchievementItem> __this_00;

		__this_00 = new ListSetting<AchievementItem>();
		this.AchievementItems = __this_00;
		base();
		return;
	}
}
