// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.GameProgressContainer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/GameProgressContainer.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/GameProgressContainer.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace GameProgress;

[Token(Token = "0x2000367")]
internal class GameProgressContainer : SaveableSettingsContainer
{
	[Token(Token = "0x40010F8")]
	[FieldOffset(Offset = "0x38")]
	public AchievementContainer Achievement;

	[Token(Token = "0x40010F9")]
	[FieldOffset(Offset = "0x40")]
	public QuestContainer Quest;

	[Token(Token = "0x40010FA")]
	[FieldOffset(Offset = "0x48")]
	public GameStatContainer GameStat;

	[Token(Token = "0x17000250")]
	protected override string FolderPath
	{
		[Token(Token = "0x6001528")]
		[Address(RVA = "0x581F1D0", Offset = "0x581E1D0", VA = "0x581F1D0", Slot = "14")]
		get
		{
			// Lifted from source/cpp/GameProgress/GameProgressContainer.c (GameProgress.GameProgressContainer$$get_FolderPath): clean
			uint uVar1;

			if (Il2CppMethodInitialized_07545744 == false) {
				Il2CppMethodInitialized_07545744 = true;
				uVar1 = (typeof(FolderPaths)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(FolderPaths)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				return FolderPaths.GameProgress;
			}
			return *(String*)((long)(typeof(FolderPaths)).static_fields + 0x38);
		}
	}

	[Token(Token = "0x17000251")]
	protected override string FileName
	{
		[Token(Token = "0x6001529")]
		[Address(RVA = "0x581F240", Offset = "0x581E240", VA = "0x581F240", Slot = "15")]
		get
		{
			// Lifted from source/cpp/GameProgress/GameProgressContainer.c (GameProgress.GameProgressContainer$$get_FileName): clean
			return "GameProgress";
		}
	}

	[Token(Token = "0x17000252")]
	protected override bool Encrypted
	{
		[Token(Token = "0x600152A")]
		[Address(RVA = "0x581F270", Offset = "0x581E270", VA = "0x581F270", Slot = "16")]
		get
		{
			// Lifted from source/cpp/GameProgress/GameProgressContainer.c (GameProgress.GameProgressContainer$$get_Encrypted): clean
			return true;
		}
	}

	[Token(Token = "0x600152B")]
	[Address(RVA = "0x581F280", Offset = "0x581E280", VA = "0x581F280", Slot = "18")]
	public override void Save()
	{
		// Lifted from source/cpp/GameProgress/GameProgressContainer.c (GameProgress.GameProgressContainer$$Save): clean
		QuestContainer __this_00;

		__this_00 = this.Quest;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.CollectRewards();
		this.Save();
		return;
	}

	[Token(Token = "0x600152C")]
	[Address(RVA = "0x581F520", Offset = "0x581E520", VA = "0x581F520")]
	public GameProgressContainer()
	{
		// Lifted from source/cpp/GameProgress/GameProgressContainer.c (GameProgress.GameProgressContainer$$.ctor): clean
		MethodInfo method_00;
		ListSetting<AchievementItem> __this_00;
		MethodInfo method_01;
		GameStatContainer __this_01;

		__this_00 = new ListSetting<AchievementItem>();
		method_00.parameters = (Il2CppType*)__this_00;
		method_00 = new AchievementContainer();
		this.Achievement = (AchievementContainer)method_00;
		method_01 = new QuestContainer();
		this.Quest = (QuestContainer)method_01;
		__this_01 = new GameStatContainer();
		this.GameStat = __this_01;
		base();
		return;
	}
}
