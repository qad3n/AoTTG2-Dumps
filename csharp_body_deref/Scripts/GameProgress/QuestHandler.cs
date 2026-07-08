using System.Collections.Generic;
using Characters;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace GameProgress;

[Token(Token = "0x20001CB")]
internal class QuestHandler : BaseGameProgressHandler
{
	[Token(Token = "0x40009EC")]
	[FieldOffset(Offset = "0x10")]
	protected QuestContainer _quest;

	[Token(Token = "0x40009ED")]
	[FieldOffset(Offset = "0x18")]
	protected Dictionary<string, List<QuestItem>> _activeQuests;

	[Token(Token = "0x40009EE")]
	private const int DailyQuestCount = 3;

	[Token(Token = "0x40009EF")]
	private const int WeeklyQuestCount = 3;

	[Token(Token = "0x40009F0")]
	[FieldOffset(Offset = "0x20")]
	protected string[] TitanKillCategories;

	[Token(Token = "0x40009F1")]
	[FieldOffset(Offset = "0x28")]
	protected string[] HumanKillCategories;

	[Token(Token = "0x40009F2")]
	[FieldOffset(Offset = "0x30")]
	protected string[] DamageCategories;

	[Token(Token = "0x40009F3")]
	[FieldOffset(Offset = "0x38")]
	protected string[] SpeedCategories;

	[Token(Token = "0x40009F4")]
	[FieldOffset(Offset = "0x40")]
	protected string[] InteractionCategories;

	[Token(Token = "0x40009F5")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, KillWeapon> NameToKillWeapon;

	[Token(Token = "0x6000A55")]
	[Address(RVA = "0x4106AA0", Offset = "0x4106AA0", VA = "0x4106AA0")]
	public QuestHandler(QuestContainer quest)
	{
	}

	[Token(Token = "0x6000A56")]
	[Address(RVA = "0x410BC70", Offset = "0x410BC70", VA = "0x410BC70")]
	public void ReloadQuests()
	{
	}

	[Token(Token = "0x6000A57")]
	[Address(RVA = "0x410DBF0", Offset = "0x410DBF0", VA = "0x410DBF0")]
	public static string GetTimeToQuestReset(bool daily)
	{
		return null;
	}

	[Token(Token = "0x6000A58")]
	[Address(RVA = "0x410CFD0", Offset = "0x410CFD0", VA = "0x410CFD0")]
	private void LoadQuests()
	{
	}

	[Token(Token = "0x6000A59")]
	[Address(RVA = "0x410DF70", Offset = "0x410DF70", VA = "0x410DF70")]
	private List<QuestItem> CreateQuests(QuestContainer defaultQuest, int currentDay, bool daily, int count)
	{
		return null;
	}

	[Token(Token = "0x6000A5A")]
	[Address(RVA = "0x410D870", Offset = "0x410D870", VA = "0x410D870")]
	private void CacheActiveQuests()
	{
	}

	[Token(Token = "0x6000A5B")]
	[Address(RVA = "0x4107EB0", Offset = "0x4107EB0", VA = "0x4107EB0")]
	protected void AddActiveQuest(QuestItem item)
	{
	}

	[Token(Token = "0x6000A5C")]
	[Address(RVA = "0x410E5B0", Offset = "0x410E5B0", VA = "0x410E5B0", Slot = "9")]
	protected virtual bool CheckKillConditions(List<StringSetting> conditions, KillWeapon weapon)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A5D")]
	[Address(RVA = "0x410E880", Offset = "0x410E880", VA = "0x410E880", Slot = "10")]
	protected virtual bool CheckDamageConditions(List<StringSetting> conditions, KillWeapon weapon, int damage)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A5E")]
	[Address(RVA = "0x410EBB0", Offset = "0x410EBB0", VA = "0x410EBB0", Slot = "11")]
	protected virtual bool CheckSpeedConditions(List<StringSetting> conditions, float speed)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A5F")]
	[Address(RVA = "0x410EE20", Offset = "0x410EE20", VA = "0x410EE20", Slot = "4")]
	public override void RegisterTitanKill(BasicTitan victim, KillMethod method)
	{
	}

	[Token(Token = "0x6000A60")]
	[Address(RVA = "0x410F0F0", Offset = "0x410F0F0", VA = "0x410F0F0", Slot = "5")]
	public override void RegisterHumanKill(Human victim, KillMethod method)
	{
	}

	[Token(Token = "0x6000A61")]
	[Address(RVA = "0x410F3C0", Offset = "0x410F3C0", VA = "0x410F3C0", Slot = "6")]
	public override void RegisterDamage(GameObject victim, KillMethod method, int damage)
	{
	}

	[Token(Token = "0x6000A62")]
	[Address(RVA = "0x410F6F0", Offset = "0x410F6F0", VA = "0x410F6F0", Slot = "7")]
	public override void RegisterSpeed(float speed)
	{
	}

	[Token(Token = "0x6000A63")]
	[Address(RVA = "0x410F9C0", Offset = "0x410F9C0", VA = "0x410F9C0", Slot = "8")]
	public override void RegisterInteraction(GameObject interact, InteractionType interactionType)
	{
	}
}
