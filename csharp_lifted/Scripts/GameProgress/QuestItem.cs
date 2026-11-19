// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.QuestItem
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/QuestItem.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/QuestItem.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace GameProgress;

[Token(Token = "0x2000372")]
internal class QuestItem : BaseSettingsContainer
{
	[Token(Token = "0x400113E")]
	[FieldOffset(Offset = "0x30")]
	public StringSetting Category;

	[Token(Token = "0x400113F")]
	[FieldOffset(Offset = "0x38")]
	public ListSetting<StringSetting> Conditions;

	[Token(Token = "0x4001140")]
	[FieldOffset(Offset = "0x40")]
	public IntSetting Amount;

	[Token(Token = "0x4001141")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting RewardType;

	[Token(Token = "0x4001142")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting RewardValue;

	[Token(Token = "0x4001143")]
	[FieldOffset(Offset = "0x58")]
	public StringSetting Icon;

	[Token(Token = "0x4001144")]
	[FieldOffset(Offset = "0x60")]
	public IntSetting Progress;

	[Token(Token = "0x4001145")]
	[FieldOffset(Offset = "0x68")]
	public BoolSetting Daily;

	[Token(Token = "0x4001146")]
	[FieldOffset(Offset = "0x70")]
	public IntSetting DayCreated;

	[Token(Token = "0x4001147")]
	[FieldOffset(Offset = "0x78")]
	public BoolSetting Collected;

	[Token(Token = "0x6001566")]
	[Address(RVA = "0x5825050", Offset = "0x5824050", VA = "0x5825050", Slot = "14")]
	public virtual string GetQuestName()
	{
		// Lifted from source/cpp/GameProgress/QuestItem.c (GameProgress.QuestItem$$GetQuestName): clean
		StringSetting pSVar1;
		IntSetting pSVar2;
		String str1;
		String str2;
		String pSVar3;
		int local_1c;

		pSVar1 = this.Category;
		if (pSVar1 != null) {
			pSVar3 = pSVar1._value;
			str1 = this.GetConditionsHash();
			pSVar2 = this.Amount;
			if (pSVar2 != null) {
				local_1c = pSVar2._value;
				str2 = local_1c.ToString();
				pSVar3 = String.Concat(pSVar3, str1, str2);
				return pSVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001567")]
	[Address(RVA = "0x581BDD0", Offset = "0x581ADD0", VA = "0x581BDD0")]
	public string GetConditionsHash()
	{
		// Lifted from source/cpp/GameProgress/QuestItem.c (GameProgress.QuestItem$$GetConditionsHash): 4 lines keep C-only constructs
		ListSetting<StringSetting> pSVar1;
		List<object> __this_00;
		bool bVar2;
		String str0;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_28;

		if (Il2CppMethodInitialized_07545776 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value) ;
			Il2CppMethodInitialized_07545776 = true;
		}
		str0 = "";
		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		pSVar1 = this.Conditions;
		if ((pSVar1 == null) ||(__this_00 = (List<object>)pSVar1._value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		local_48 = __this_00.GetEnumerator();
		local_28 = (byte)&local_48;
		while(true) {
			bVar2 = local_48.MoveNext();
			if (!bVar2) {
				local_48.Dispose();
				return str0;
			}
			if (local_48._current == null) break;
			str0 = String.Concat(str0, (String)local_48._current[2].klass);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001568")]
	[Address(RVA = "0x581AA80", Offset = "0x5819A80", VA = "0x581AA80")]
	public bool Finished()
	{
		// Lifted from source/cpp/GameProgress/QuestItem.c (GameProgress.QuestItem$$Finished): clean
		IntSetting pSVar1;
		IntSetting pSVar2;

		pSVar1 = this.Progress;
		if ((pSVar1 == null) ||(pSVar2 = this.Amount, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		return pSVar2._value <= pSVar1._value;
	}

	[Token(Token = "0x6001569")]
	[Address(RVA = "0x5824030", Offset = "0x5823030", VA = "0x5824030")]
	public void AddProgress(int count = 1)
	{
		// Lifted from source/cpp/GameProgress/QuestItem.c (GameProgress.QuestItem$$AddProgress): clean
		int val2;
		IntSetting pSVar1;
		IntSetting pSVar2;
		int iVar3;

		pSVar1 = this.Progress;
		if (pSVar1 != null) {
			pSVar1.Value = count + pSVar1._value;
			pSVar1 = this.Progress;
			if ((pSVar1 != null) &&(pSVar2 = this.Amount, pSVar2 != null)) {
				iVar3 = pSVar1._value;
				val2 = pSVar2._value;
				iVar3 = Math.Min(iVar3, val2);
				pSVar1.Value = iVar3;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600156A")]
	[Address(RVA = "0x5821FA0", Offset = "0x5820FA0", VA = "0x5821FA0")]
	public void CollectReward()
	{
		// Lifted from source/cpp/GameProgress/QuestItem.c (GameProgress.QuestItem$$CollectReward): 1 lines keep C-only constructs
		BoolSetting __this_00;
		IntSetting pSVar1;
		IntSetting pSVar2;
		StringSetting pSVar3;
		bool bVar4;
		int exp;

		__this_00 = this.Collected;
		if (__this_00 != null) {
			if (((Settings_TypedSetting_bool__Fields)&__this_00.fields)._value != false) {
				return;
			}
			pSVar1 = this.Progress;
			if ((pSVar1 != null) &&(pSVar2 = this.Amount, pSVar2 != null)) {
				if (pSVar1._value < pSVar2._value) {
					return;
				}
				__this_00.Value = true;
				pSVar3 = this.RewardType;
				if (pSVar3 != null) {
					bVar4 = (pSVar3._value == "Exp");
					if (!bVar4) {
						return;
					}
					pSVar3 = this.RewardValue;
					if (pSVar3 != null) {
						exp = Int32.Parse(pSVar3._value);
						if ((typeof(GameProgressManager)._2).cctor_finished_or_no_cctor == 0) {
							GameProgressManager.AddExp(exp);
							return;
						}
						GameProgressManager.AddExp(exp);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600156B")]
	[Address(RVA = "0x581C3E0", Offset = "0x581B3E0", VA = "0x581C3E0")]
	public QuestItem()
	{
		// Lifted from source/cpp/GameProgress/QuestItem.c (GameProgress.QuestItem$$.ctor): clean
		String pSVar1;
		StringSetting pSVar2;
		ListSetting<StringSetting> __this_00;
		IntSetting pSVar3;
		BoolSetting pSVar4;

		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 0x7fffffff);
		this.Category = pSVar2;
		__this_00 = new ListSetting<StringSetting>();
		this.Conditions = __this_00;
		pSVar3 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this.Amount = pSVar3;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 0x7fffffff);
		this.RewardType = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 0x7fffffff);
		this.RewardValue = pSVar2;
		pSVar1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pSVar2 = new StringSetting(pSVar1, 0x7fffffff);
		this.Icon = pSVar2;
		pSVar3 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this.Progress = pSVar3;
		pSVar4 = new BoolSetting(true);
		this.Daily = pSVar4;
		pSVar3 = new IntSetting(0, -0x80000000, 0x7fffffff);
		this.DayCreated = pSVar3;
		pSVar4 = new BoolSetting(false);
		this.Collected = pSVar4;
		base();
		return;
	}
}
