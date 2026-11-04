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

[Token(Token = "0x2000310")]
internal class QuestHandler : BaseGameProgressHandler
{
	[Token(Token = "0x4000F95")]
	[FieldOffset(Offset = "0x10")]
	protected QuestContainer _quest;

	[Token(Token = "0x4000F96")]
	[FieldOffset(Offset = "0x18")]
	protected Dictionary<string, List<QuestItem>> _activeQuests;

	[Token(Token = "0x4000F97")]
	private const int DailyQuestCount = 3;

	[Token(Token = "0x4000F98")]
	private const int WeeklyQuestCount = 3;

	[Token(Token = "0x4000F99")]
	[FieldOffset(Offset = "0x20")]
	protected string[] TitanKillCategories;

	[Token(Token = "0x4000F9A")]
	[FieldOffset(Offset = "0x28")]
	protected string[] HumanKillCategories;

	[Token(Token = "0x4000F9B")]
	[FieldOffset(Offset = "0x30")]
	protected string[] DamageCategories;

	[Token(Token = "0x4000F9C")]
	[FieldOffset(Offset = "0x38")]
	protected string[] SpeedCategories;

	[Token(Token = "0x4000F9D")]
	[FieldOffset(Offset = "0x40")]
	protected string[] InteractionCategories;

	[Token(Token = "0x4000F9E")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, KillWeapon> NameToKillWeapon;

	[Token(Token = "0x60012E4")]
	[Address(RVA = "0x1E39600", Offset = "0x1E37C00", VA = "0x181E39600")]
	public QuestHandler(QuestContainer quest)
	{
	}

	[Token(Token = "0x60012E5")]
	[Address(RVA = "0x1E39550", Offset = "0x1E37B50", VA = "0x181E39550")]
	public void ReloadQuests()
	{
	}

	[Token(Token = "0x60012E6")]
	[Address(RVA = "0x1E37F00", Offset = "0x1E36500", VA = "0x181E37F00")]
	public static string GetTimeToQuestReset(bool daily)
	{
		return null;
	}

	[Token(Token = "0x60012E7")]
	[Address(RVA = "0x1E38270", Offset = "0x1E36870", VA = "0x181E38270")]
	private void LoadQuests()
	{
	}

	[Token(Token = "0x60012E8")]
	[Address(RVA = "0x1E37C70", Offset = "0x1E36270", VA = "0x181E37C70")]
	private List<QuestItem> CreateQuests(QuestContainer defaultQuest, int currentDay, bool daily, int count)
	{
		return null;
	}

	[Token(Token = "0x60012E9")]
	[Address(RVA = "0x1E37330", Offset = "0x1E35930", VA = "0x181E37330")]
	private void CacheActiveQuests()
	{
	}

	[Token(Token = "0x60012EA")]
	[Address(RVA = "0x1E37180", Offset = "0x1E35780", VA = "0x181E37180")]
	protected void AddActiveQuest(QuestItem item)
	{
	}

	[Token(Token = "0x60012EB")]
	[Address(RVA = "0x1E37850", Offset = "0x1E35E50", VA = "0x181E37850", Slot = "9")]
	protected virtual bool CheckKillConditions(List<StringSetting> conditions, KillWeapon weapon)
	{
		return default(bool);
	}

	[Token(Token = "0x60012EC")]
	[Address(RVA = "0x1E375D0", Offset = "0x1E35BD0", VA = "0x181E375D0", Slot = "10")]
	protected virtual bool CheckDamageConditions(List<StringSetting> conditions, KillWeapon weapon, int damage)
	{
		return default(bool);
	}

	[Token(Token = "0x60012ED")]
	[Address(RVA = "0x1E37A80", Offset = "0x1E36080", VA = "0x181E37A80", Slot = "11")]
	protected virtual bool CheckSpeedConditions(List<StringSetting> conditions, float speed)
	{
		return default(bool);
	}

	[Token(Token = "0x60012EE")]
	[Address(RVA = "0x1E392D0", Offset = "0x1E378D0", VA = "0x181E392D0", Slot = "4")]
	public override void RegisterTitanKill(BasicTitan victim, KillMethod method)
	{
	}

	[Token(Token = "0x60012EF")]
	[Address(RVA = "0x1E38BA0", Offset = "0x1E371A0", VA = "0x181E38BA0", Slot = "5")]
	public override void RegisterHumanKill(Human victim, KillMethod method)
	{
	}

	[Token(Token = "0x60012F0")]
	[Address(RVA = "0x1E388F0", Offset = "0x1E36EF0", VA = "0x181E388F0", Slot = "6")]
	public override void RegisterDamage(GameObject victim, KillMethod method, int damage)
	{
	}

	[Token(Token = "0x60012F1")]
	[Address(RVA = "0x1E39050", Offset = "0x1E37650", VA = "0x181E39050", Slot = "7")]
	public override void RegisterSpeed(float speed)
	{
	}

	[Token(Token = "0x60012F2")]
	[Address(RVA = "0x1E38E20", Offset = "0x1E37420", VA = "0x181E38E20", Slot = "8")]
	public override void RegisterInteraction(GameObject interact, InteractionType interactionType)
	{
	}
}
