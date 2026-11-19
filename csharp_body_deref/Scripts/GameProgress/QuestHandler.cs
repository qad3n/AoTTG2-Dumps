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

[Token(Token = "0x2000371")]
internal class QuestHandler : BaseGameProgressHandler
{
	[Token(Token = "0x4001134")]
	[FieldOffset(Offset = "0x10")]
	protected QuestContainer _quest;

	[Token(Token = "0x4001135")]
	[FieldOffset(Offset = "0x18")]
	protected Dictionary<string, List<QuestItem>> _activeQuests;

	[Token(Token = "0x4001136")]
	private const int DailyQuestCount = 3;

	[Token(Token = "0x4001137")]
	private const int WeeklyQuestCount = 3;

	[Token(Token = "0x4001138")]
	[FieldOffset(Offset = "0x20")]
	protected string[] TitanKillCategories;

	[Token(Token = "0x4001139")]
	[FieldOffset(Offset = "0x28")]
	protected string[] HumanKillCategories;

	[Token(Token = "0x400113A")]
	[FieldOffset(Offset = "0x30")]
	protected string[] DamageCategories;

	[Token(Token = "0x400113B")]
	[FieldOffset(Offset = "0x38")]
	protected string[] SpeedCategories;

	[Token(Token = "0x400113C")]
	[FieldOffset(Offset = "0x40")]
	protected string[] InteractionCategories;

	[Token(Token = "0x400113D")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, KillWeapon> NameToKillWeapon;

	[Token(Token = "0x6001556")]
	[Address(RVA = "0x581ABC0", Offset = "0x5819BC0", VA = "0x581ABC0")]
	public QuestHandler(QuestContainer quest)
	{
	}

	[Token(Token = "0x6001557")]
	[Address(RVA = "0x58203D0", Offset = "0x581F3D0", VA = "0x58203D0")]
	public void ReloadQuests()
	{
	}

	[Token(Token = "0x6001558")]
	[Address(RVA = "0x5822BD0", Offset = "0x5821BD0", VA = "0x5822BD0")]
	public static string GetTimeToQuestReset(bool daily)
	{
		return null;
	}

	[Token(Token = "0x6001559")]
	[Address(RVA = "0x58220B0", Offset = "0x58210B0", VA = "0x58220B0")]
	private void LoadQuests()
	{
	}

	[Token(Token = "0x600155A")]
	[Address(RVA = "0x5822F60", Offset = "0x5821F60", VA = "0x5822F60")]
	private List<QuestItem> CreateQuests(QuestContainer defaultQuest, int currentDay, bool daily, int count)
	{
		return null;
	}

	[Token(Token = "0x600155B")]
	[Address(RVA = "0x58228C0", Offset = "0x58218C0", VA = "0x58228C0")]
	private void CacheActiveQuests()
	{
	}

	[Token(Token = "0x600155C")]
	[Address(RVA = "0x581BF60", Offset = "0x581AF60", VA = "0x581BF60")]
	protected void AddActiveQuest(QuestItem item)
	{
	}

	[Token(Token = "0x600155D")]
	[Address(RVA = "0x58235A0", Offset = "0x58225A0", VA = "0x58235A0", Slot = "9")]
	protected virtual bool CheckKillConditions(List<StringSetting> conditions, KillWeapon weapon)
	{
		return default(bool);
	}

	[Token(Token = "0x600155E")]
	[Address(RVA = "0x5823810", Offset = "0x5822810", VA = "0x5823810", Slot = "10")]
	protected virtual bool CheckDamageConditions(List<StringSetting> conditions, KillWeapon weapon, int damage)
	{
		return default(bool);
	}

	[Token(Token = "0x600155F")]
	[Address(RVA = "0x5823AE0", Offset = "0x5822AE0", VA = "0x5823AE0", Slot = "11")]
	protected virtual bool CheckSpeedConditions(List<StringSetting> conditions, float speed)
	{
		return default(bool);
	}

	[Token(Token = "0x6001560")]
	[Address(RVA = "0x5823CF0", Offset = "0x5822CF0", VA = "0x5823CF0", Slot = "4")]
	public override void RegisterTitanKill(BasicTitan victim, KillMethod method)
	{
	}

	[Token(Token = "0x6001561")]
	[Address(RVA = "0x58240F0", Offset = "0x58230F0", VA = "0x58240F0", Slot = "5")]
	public override void RegisterHumanKill(Human victim, KillMethod method)
	{
	}

	[Token(Token = "0x6001562")]
	[Address(RVA = "0x5824430", Offset = "0x5823430", VA = "0x5824430", Slot = "6")]
	public override void RegisterDamage(GameObject victim, KillMethod method, int damage)
	{
	}

	[Token(Token = "0x6001563")]
	[Address(RVA = "0x5824880", Offset = "0x5823880", VA = "0x5824880", Slot = "7")]
	public override void RegisterSpeed(float speed)
	{
	}

	[Token(Token = "0x6001564")]
	[Address(RVA = "0x5824BD0", Offset = "0x5823BD0", VA = "0x5824BD0", Slot = "8")]
	public override void RegisterInteraction(GameObject interact, InteractionType interactionType)
	{
	}
}
