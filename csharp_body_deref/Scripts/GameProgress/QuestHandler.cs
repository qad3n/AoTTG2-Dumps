// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.QuestHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/QuestHandler.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/QuestHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Characters;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace GameProgress;

[Token(Token = "0x20001FE")]
internal class QuestHandler : BaseGameProgressHandler
{
	[Token(Token = "0x4000AB2")]
	[FieldOffset(Offset = "0x10")]
	protected QuestContainer _quest;

	[Token(Token = "0x4000AB3")]
	[FieldOffset(Offset = "0x18")]
	protected Dictionary<string, List<QuestItem>> _activeQuests;

	[Token(Token = "0x4000AB4")]
	private const int DailyQuestCount = 3;

	[Token(Token = "0x4000AB5")]
	private const int WeeklyQuestCount = 3;

	[Token(Token = "0x4000AB6")]
	[FieldOffset(Offset = "0x20")]
	protected string[] TitanKillCategories;

	[Token(Token = "0x4000AB7")]
	[FieldOffset(Offset = "0x28")]
	protected string[] HumanKillCategories;

	[Token(Token = "0x4000AB8")]
	[FieldOffset(Offset = "0x30")]
	protected string[] DamageCategories;

	[Token(Token = "0x4000AB9")]
	[FieldOffset(Offset = "0x38")]
	protected string[] SpeedCategories;

	[Token(Token = "0x4000ABA")]
	[FieldOffset(Offset = "0x40")]
	protected string[] InteractionCategories;

	[Token(Token = "0x4000ABB")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, KillWeapon> NameToKillWeapon;

	[Token(Token = "0x6000BD2")]
	[Address(RVA = "0x4438C10", Offset = "0x4438C10", VA = "0x4438C10")]
	public QuestHandler(QuestContainer quest)
	{
	}

	[Token(Token = "0x6000BD3")]
	[Address(RVA = "0x443E2C0", Offset = "0x443E2C0", VA = "0x443E2C0")]
	public void ReloadQuests()
	{
	}

	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x4440430", Offset = "0x4440430", VA = "0x4440430")]
	public static string GetTimeToQuestReset(bool daily)
	{
		return null;
	}

	[Token(Token = "0x6000BD5")]
	[Address(RVA = "0x443F810", Offset = "0x443F810", VA = "0x443F810")]
	private void LoadQuests()
	{
	}

	[Token(Token = "0x6000BD6")]
	[Address(RVA = "0x44407B0", Offset = "0x44407B0", VA = "0x44407B0")]
	private List<QuestItem> CreateQuests(QuestContainer defaultQuest, int currentDay, bool daily, int count)
	{
		return null;
	}

	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x44400B0", Offset = "0x44400B0", VA = "0x44400B0")]
	private void CacheActiveQuests()
	{
	}

	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x443A1D0", Offset = "0x443A1D0", VA = "0x443A1D0")]
	protected void AddActiveQuest(QuestItem item)
	{
	}

	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x4440DF0", Offset = "0x4440DF0", VA = "0x4440DF0", Slot = "9")]
	protected virtual bool CheckKillConditions(List<StringSetting> conditions, KillWeapon weapon)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x44410C0", Offset = "0x44410C0", VA = "0x44410C0", Slot = "10")]
	protected virtual bool CheckDamageConditions(List<StringSetting> conditions, KillWeapon weapon, int damage)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x44413F0", Offset = "0x44413F0", VA = "0x44413F0", Slot = "11")]
	protected virtual bool CheckSpeedConditions(List<StringSetting> conditions, float speed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BDC")]
	[Address(RVA = "0x4441660", Offset = "0x4441660", VA = "0x4441660", Slot = "4")]
	public override void RegisterTitanKill(BasicTitan victim, KillMethod method)
	{
	}

	[Token(Token = "0x6000BDD")]
	[Address(RVA = "0x44419E0", Offset = "0x44419E0", VA = "0x44419E0", Slot = "5")]
	public override void RegisterHumanKill(Human victim, KillMethod method)
	{
	}

	[Token(Token = "0x6000BDE")]
	[Address(RVA = "0x4441CA0", Offset = "0x4441CA0", VA = "0x4441CA0", Slot = "6")]
	public override void RegisterDamage(GameObject victim, KillMethod method, int damage)
	{
	}

	[Token(Token = "0x6000BDF")]
	[Address(RVA = "0x4441FD0", Offset = "0x4441FD0", VA = "0x4441FD0", Slot = "7")]
	public override void RegisterSpeed(float speed)
	{
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x44422A0", Offset = "0x44422A0", VA = "0x44422A0", Slot = "8")]
	public override void RegisterInteraction(GameObject interact, InteractionType interactionType)
	{
	}
}
