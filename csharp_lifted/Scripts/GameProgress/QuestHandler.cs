// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.QuestHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/QuestHandler.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/QuestHandler.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
		// Lifted from source/cpp/GameProgress/QuestHandler.c (GameProgress.QuestHandler$$.ctor): clean
		Dictionary<string, List<QuestItem>> __this_00;
		String[] pSVar1;

		__this_00 = new Dictionary<string, List<QuestItem>>();
		this._activeQuests = __this_00;
		pSVar1 = (String[])new string[1];
		if (pSVar1 == null) {
	label_0591aea6: ;
			throw new NullReferenceException();
		}
		if ((int)pSVar1.Length != 0) {
			pSVar1[0] = "KillTitan";
			this.TitanKillCategories = pSVar1;
			pSVar1 = (String[])new string[1];
			if (pSVar1 == null) goto label_0591aea6;
			if ((int)pSVar1.Length != 0) {
				pSVar1[0] = "KillHuman";
				this.HumanKillCategories = pSVar1;
				pSVar1 = (String[])new string[2];
				if (pSVar1 == null) goto label_0591aea6;
				if ((int)pSVar1.Length != 0) {
					pSVar1[0] = "DealDamage";
					if ((pSVar1.Length & 0xfffffffe) != 0) {
						pSVar1[1] = "HitDamage";
						this.DamageCategories = pSVar1;
						pSVar1 = (String[])new string[1];
						if (pSVar1 == null) goto label_0591aea6;
						if ((int)pSVar1.Length != 0) {
							pSVar1[0] = "ReachSpeed";
							this.SpeedCategories = pSVar1;
							pSVar1 = (String[])new string[2];
							if (pSVar1 == null) goto label_0591aea6;
							if ((int)pSVar1.Length != 0) {
								pSVar1[0] = "ShareGas";
								if ((pSVar1.Length & 0xfffffffe) != 0) {
									pSVar1[1] = "CarryPlayer";
									this.InteractionCategories = pSVar1;
									base();
									if (quest == null) {
										return;
									}
									this._quest = quest;
									this.LoadQuests();
									this.CacheActiveQuests();
									return;
								}
							}
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6001557")]
	[Address(RVA = "0x58203D0", Offset = "0x581F3D0", VA = "0x58203D0")]
	public void ReloadQuests()
	{
		// Lifted from source/cpp/GameProgress/QuestHandler.c (GameProgress.QuestHandler$$ReloadQuests): clean
		this.LoadQuests();
		this.CacheActiveQuests();
		return;
	}

	[Token(Token = "0x6001558")]
	[Address(RVA = "0x5822BD0", Offset = "0x5821BD0", VA = "0x5822BD0")]
	public static string GetTimeToQuestReset(bool daily)
	{
		// Lifted from source/cpp/GameProgress/QuestHandler.c (GameProgress.QuestHandler$$GetTimeToQuestReset): 8 lines keep C-only constructs
		uint uVar1;
		String format;
		int iVar2;
		DateTime d1;
		object pIVar3;
		Object[] args;
		object pIVar4;
		String pSVar5;
		int iVar6;
		String* ppSVar7;
		DateTime local_40;
		TimeSpan local_38;

		local_38._ticks = (TimeSpan)0;
		d1 = DateTime.UtcNow;
		local_40._dateData = (DateTime)0;
		local_40 = new DateTime(0x7b2, 1, 1);
		local_38 = (d1 - local_40);
		uVar1 = (typeof(TimeSpan)._2).cctor_finished_or_no_cctor;
		if (daily) {
			if (uVar1 == 0) {
			}
			iVar2 = local_38.Hours;
			local_40._dateData._0_4_ = 0x18 - iVar2;
			pIVar3 = (object)local_40;
			if (iVar2 == 0x17) {
				ppSVar7 = &"hour";
			}
			else {
				ppSVar7 = &"hours";
			}
			pSVar5 = String.Format("Resets in: {0} {1}", pIVar3, (object)*ppSVar7);
			return pSVar5;
		}
		if (uVar1 == 0) {
		}
		iVar2 = local_38.Days;
		iVar6 = (int)((ulong)((long)(iVar2 + -1) * -0x6db6db6d) >> 0x20) + iVar2 + -1;
		iVar6 = iVar2 + ((iVar6 >> 2) - (iVar6 >> 0x1f)) * -7 + -1;
		iVar2 = local_38.Hours;
		args = (Object[])new object[4];
		local_40._dateData._0_4_ = 6 - iVar6;
		pIVar3 = (object)local_40;
		if (args == null) {
			throw new NullReferenceException();
		}
		if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((args.obj).klass)._1).element_class), pIVar4 == null)) {
	label_05922f48: ;
			pIVar3 = new ArrayTypeMismatchException();
			throw pIVar3;
		}
		if ((int)args.Length != 0) {
			args[0] = pIVar3;
			format = "Resets in: {0} {1}, {2} {3}";
			pSVar5 = "days";
			if (iVar6 == 5) {
				pSVar5 = "day";
			}
			if ((pSVar5 != null) &&(pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar5, (((args.obj).klass)._1).element_class), pIVar3 == null)) goto label_05922f48;
			if ((args.Length & 0xfffffffe) != 0) {
				args[1] = (object)pSVar5;
				local_40._dateData._0_4_ = 0x18 - iVar2;
				pIVar3 = (object)local_40;
				if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((args.obj).klass)._1).element_class), pIVar4 == null)) goto label_05922f48;
				if (2 < (uint)args.Length) {
					args[2] = pIVar3;
					pSVar5 = "hours";
					if (iVar2 == 0x17) {
						pSVar5 = "hour";
					}
					if ((pSVar5 != null) &&(pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar5, (((args.obj).klass)._1).element_class), pIVar3 == null)) goto label_05922f48;
					if ((args.Length & 0xfffffffc) != 0) {
						args[3] = (object)pSVar5;
						pSVar5 = String.Format(format, args);
						return pSVar5;
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6001559")]
	[Address(RVA = "0x58220B0", Offset = "0x58210B0", VA = "0x58220B0")]
	private void LoadQuests()
	{
		// Lifted from source/cpp/GameProgress/QuestHandler.c (GameProgress.QuestHandler$$LoadQuests): 42 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		Il2CppClass pIVar4;
		QuestContainer pGVar5;
		List<object> pSVar6;
		Object[] pSVar7;
		ListSetting<QuestItem> pSVar8;
		ulong uVar9;
		bool bVar10;
		int currentDay;
		int iVar11;
		DateTime d1;
		String[] pSVar12;
		Object __this_00;
		String pSVar13;
		String[] __this_01;
		List<QuestItem> pSVar14;
		ListSetting<QuestItem> pSVar15;
		QuestHandler pGVar17;
		QuestHandler __this_02;
		int iVar18;
		byte[] local_98 = new byte[56];
		String[] pSStack_60;
		String[] local_58;
		ListSetting<QuestItem> local_50;
		QuestHandler local_48;
		DateTime local_40;
		TimeSpan local_38;

		if (Il2CppMethodInitialized_07545768 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_QuestItem_AddRange) ;
			Il2CppMethodInitialized_07545768 = true;
		}
		local_38._ticks = (TimeSpan)0;
		local_98._0_8_ = null;
		local_98._8_8_ = null;
		local_98._16_8_ = null;
		d1 = DateTime.UtcNow;
		local_40._dateData = (DateTime)0;
		local_40 = new DateTime(0x7b2, 1, 1);
		local_38 = (d1 - local_40);
		currentDay = local_38.Days;
		pSVar12 = new QuestContainer();
		pSVar13 = ResourcePaths.Info;
		__this_00 = ResourceManager.LoadAsset(pSVar13, "QuestList", false, false);
		if (__this_00 != null) {
			bVar2 = (typeof(TextAsset)._2).typeHierarchyDepth;
			if (((__this_00.klass._2).typeHierarchyDepth < bVar2) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(TextAsset))) {
				throw new InvalidCastException();
			}
			pSVar13 = __this_00.text;
			if (pSVar12 != null) {
				pIVar4 = (pSVar12.obj).klass;
				(*(((GameProgress_QuestContainer_VTable)pIVar4.vtable)._9_DeserializeFromJsonString).methodPtr)(pSVar12,pSVar13,(((GameProgress_QuestContainer_VTable)pIVar4.vtable)._9_DeserializeFromJsonString).method );
				__this_01 = new ListSetting<QuestItem>();
				pGVar5 = this._quest;
				if (((pGVar5 != null) &&(pSVar15 = pGVar5.DailyQuestItems, pSVar15 != null)) && (pSVar6 = (List<object>)pSVar15._value, pSVar6 != null)) {
					local_98._40_8_ = pSVar12;
					((local_98 + 0x30)).GetEnumerator(pSVar6);
					pGVar17 = (QuestHandler)local_98;
					__this_02 = (QuestHandler)local_98;
					local_98._16_8_ = local_58;
					local_98._0_8_ = local_98._48_8_;
					local_98._8_8_ = pSStack_60;
					local_98._48_8_ = null;
					local_98._32_8_ = __this_01;
					pSStack_60 = (String[])local_98;
					pSVar12 = (String[])local_98;
					if (__this_01 == null) {
						while (true) {
							pSStack_60 = pSVar12;
							bVar10 = local_98.MoveNext();
							if (!(bVar10)) break;
							if ((String[])local_98._16_8_ == null) goto label_059227bd;
							if (((Dictionary<string, BaseSetting>*)(local_98._16_8_ + 0x20)) [10] == null) goto label_059227c2;
							pSVar12 = pSStack_60;
							if (*(int)((long)((Dictionary<string, BaseSetting>*)(local_98._16_8_ + 0x20))[10] + 0x1c) == currentDay) {
								throw new NullReferenceException();
							}
						}
					}
					else {
	label_059223e4: ;
						bVar10 = local_98.MoveNext();
						if (bVar10) {
							if ((String[])local_98._16_8_ == null) {
	label_059227bd: ;
								throw new NullReferenceException();
							}
							if (((Dictionary<string, BaseSetting>*)(local_98._16_8_ + 0x20)) [10] == null) {
	label_059227c2: ;
								throw new NullReferenceException();
							}
							if (*(int)((long)((Dictionary<string, BaseSetting>*)(local_98._16_8_ + 0x20))[10] + 0x1c) == currentDay) {
								pSVar6 = *(List<object>*)(local_98._32_8_ + 0x20);
								if (pSVar6 != null) {
									piVar1 = &pSVar6._version;
									*piVar1 = *piVar1 + 1;
									pSVar7 = pSVar6._items;
									if (pSVar7 != null) {
										uVar3 = pSVar6._size;
										if (uVar3 < (uint)pSVar7.Length) {
											pSVar6._size = uVar3 + 1;
											pSVar7[(int)uVar3] = (object)local_98._16_8_;
										}
										else {
											pSVar6.AddWithResize((object)local_98._16_8_);
										}
										goto label_059223e4;
									}
								}
								throw new NullReferenceException();
							}
							goto label_059223e4;
						}
					}
					local_98.Dispose();
					if (((String[])local_98._32_8_ != null) &&(pSVar6 = *(List<object>*)(local_98._32_8_ + 0x20), pSVar6 != null)) {
						pSVar14 = pGVar17.CreateQuests((QuestContainer)local_98._40_8_, currentDay, true, 3 - pSVar6._size);
						pSVar6.AddRange((IEnumerable<T>)pSVar14);
						pSVar15 = new ListSetting<QuestItem>();
						pGVar5 = this._quest;
						if ((pGVar5 != null) &&((pSVar8 = pGVar5.WeeklyQuestItems, pSVar8 != null && (pSVar6 = (List<object>)pSVar8._value, pSVar6 != null)))) {
							iVar18 = (int)((ulong)((long)(currentDay + -1) * -0x6db6db6d) >> 0x20) + currentDay + -1;
							iVar18 = (iVar18 >> 2) - (iVar18 >> 0x1f);
							local_48 = this;
							((local_98 + 0x30)).GetEnumerator(pSVar6);
							local_98._16_8_ = local_58;
							local_98._0_8_ = local_98._48_8_;
							local_98._8_8_ = pSStack_60;
							local_98._48_8_ = null;
							pSStack_60 = (String[])local_98;
							pSVar12 = (String[])local_98;
							local_50 = pSVar15;
							if (pSVar15 == null) {
								while (true) {
									pSStack_60 = pSVar12;
									bVar10 = local_98.MoveNext();
									if (!(bVar10)) break;
									if ((String[])local_98._16_8_ == null) goto label_059227c7;
									if (((Dictionary<string, BaseSetting>*)(local_98._16_8_ + 0x20) )[10] == null) goto label_059227cc;
									iVar11 = *(int)((long)((Dictionary<string, BaseSetting>*)(local_98._16_8_ + 0x20))[10] + 0x1c);
									iVar11 = iVar11 + (int)((ulong)((long)(iVar11 + -1) * -0x6db6db6d) >> 0x20) + -1;
									pSVar12 = pSStack_60;
									if ((iVar11 >> 2) - (iVar11 >> 0x1f) == iVar18) {
										throw new NullReferenceException();
									}
								}
							}
							else {
	label_059225e4: ;
								bVar10 = local_98.MoveNext();
								if (bVar10) {
									if ((String[])local_98._16_8_ == null) {
	label_059227c7: ;
										throw new NullReferenceException();
									}
									if (((Dictionary<string, BaseSetting>*)(local_98._16_8_ + 0x20) )[10] == null) {
	label_059227cc: ;
										throw new NullReferenceException();
									}
									iVar11 = *(int)((long)((Dictionary<string, BaseSetting>*)(local_98._16_8_ + 0x20))[10] + 0x1c);
									iVar11 = iVar11 + (int)((ulong)((long)(iVar11 + -1) * -0x6db6db6d) >> 0x20) + -1;
									if ((iVar11 >> 2) - (iVar11 >> 0x1f) == iVar18) {
										pSVar6 = (List<object>)local_50._value;
										if (pSVar6 != null) {
											piVar1 = &pSVar6._version;
											*piVar1 = *piVar1 + 1;
											pSVar7 = pSVar6._items;
											if (pSVar7 != null) {
												uVar3 = pSVar6._size;
												if (uVar3 < (uint)pSVar7.Length) {
													pSVar6._size = uVar3 + 1;
													pSVar7[(int)uVar3] = (object)local_98._16_8_;
												}
												else {
													pSVar6.AddWithResize((object)local_98._16_8_);
												}
												goto label_059225e4;
											}
										}
										throw new NullReferenceException();
									}
									goto label_059225e4;
								}
							}
							local_98.Dispose();
							pGVar17 = local_48;
							uVar9 = local_98._32_8_;
							if ((local_50 != null) &&(pSVar6 = (List<object>)local_50._value, pSVar6 != null)) {
								pSVar14 = __this_02.CreateQuests((QuestContainer)local_98._40_8_, currentDay, false, 3 - pSVar6._size);
								pSVar6.AddRange((IEnumerable<T>)pSVar14);
								pSVar15 = local_50;
								pGVar5 = pGVar17._quest;
								if ((pGVar5 != null) &&(pSVar8 = pGVar5.DailyQuestItems, pSVar8 != null)) {
									pSVar8.Copy(uVar9);
									pGVar5 = pGVar17._quest;
									if ((pGVar5 != null) &&(pSVar8 = pGVar5.WeeklyQuestItems, pSVar8 != null)) {
										pSVar8.Copy(pSVar15);
										return;
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600155A")]
	[Address(RVA = "0x5822F60", Offset = "0x5821F60", VA = "0x5822F60")]
	private List<QuestItem> CreateQuests(QuestContainer defaultQuest, int currentDay, bool daily, int count)
	{
		// Lifted from source/cpp/GameProgress/QuestHandler.c (GameProgress.QuestHandler$$CreateQuests): 5 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<object> __this_00;
		IntSetting __this_01;
		QuestItem[] pGVar3;
		bool bVar4;
		int iVar5;
		ListSetting<QuestItem> pSVar6;
		List<QuestItem> __this_02;
		HashSet<string> __this_03;
		QuestItem pGVar7;
		MethodInfo pMVar8;
		QuestItem pGVar9;
		String item;

		if (Il2CppMethodInitialized_07545769 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_QuestItem_get_Item) ;
			Il2CppMethodInitialized_07545769 = true;
		}
		if (daily) {
			if (defaultQuest == null) goto label_05923574;
			pSVar6 = defaultQuest.DailyQuestItems;
		}
		else {
			if (defaultQuest == null) goto label_05923574;
			pSVar6 = defaultQuest.WeeklyQuestItems;
		}
		if (pSVar6 != null) {
			__this_00 = (List<object>)pSVar6._value;
			__this_02 = new List<QuestItem>();
			__this_03 = new HashSet<string>();
			if (count < 1) {
				return __this_02;
			}
			if (__this_00 != null) {
				if (__this_03 == null) {
					iVar5 = Random.Range(0, __this_00._size);
					pGVar7 = __this_00.get_Item(iVar5);
					if (pGVar7 != null) {
						pGVar7.GetQuestName();
						throw new NullReferenceException();
					}
				}
				else {
					while(true) {
						iVar5 = Random.Range(0, __this_00._size);
						pGVar7 = __this_00.get_Item(iVar5);
						if (pGVar7 == null) break;
						pMVar8 = (MethodInfo)pGVar7.GetQuestName();
						bVar4 = __this_03.Contains((object)pMVar8);
						if (bVar4) {
							iVar5 = Random.Range(0, __this_00._size);
							pGVar7 = __this_00.get_Item(iVar5);
							if (pGVar7 == null) break;
							pMVar8 = (MethodInfo)pGVar7.GetQuestName();
							bVar4 = __this_03.Contains((object)pMVar8);
							if (!bVar4) goto label_05923430;
							iVar5 = Random.Range(0, __this_00._size);
							pGVar7 = __this_00.get_Item(iVar5);
							if (pGVar7 == null) break;
							pMVar8 = (MethodInfo)pGVar7.GetQuestName();
							bVar4 = __this_03.Contains((object)pMVar8);
							if (!bVar4) goto label_05923430;
							iVar5 = Random.Range(0, __this_00._size);
							pGVar7 = __this_00.get_Item(iVar5);
							if (pGVar7 == null) break;
							pMVar8 = (MethodInfo)pGVar7.GetQuestName();
							bVar4 = __this_03.Contains((object)pMVar8);
							if (!bVar4) goto label_05923430;
							iVar5 = Random.Range(0, __this_00._size);
							pGVar7 = __this_00.get_Item(iVar5);
							if (pGVar7 == null) break;
							pMVar8 = (MethodInfo)pGVar7.GetQuestName();
							bVar4 = __this_03.Contains((object)pMVar8);
							if (!bVar4) goto label_05923430;
							iVar5 = Random.Range(0, __this_00._size);
							pGVar7 = __this_00.get_Item(iVar5);
							if (pGVar7 == null) break;
							pMVar8 = (MethodInfo)pGVar7.GetQuestName();
							bVar4 = __this_03.Contains((object)pMVar8);
							if (!bVar4) goto label_05923430;
							iVar5 = Random.Range(0, __this_00._size);
							pGVar7 = __this_00.get_Item(iVar5);
							if (pGVar7 == null) break;
							pMVar8 = (MethodInfo)pGVar7.GetQuestName();
							bVar4 = __this_03.Contains((object)pMVar8);
							if (!bVar4) goto label_05923430;
							iVar5 = Random.Range(0, __this_00._size);
							pGVar7 = __this_00.get_Item(iVar5);
							if (pGVar7 == null) break;
							pMVar8 = (MethodInfo)pGVar7.GetQuestName();
							bVar4 = __this_03.Contains((object)pMVar8);
							if (!bVar4) goto label_05923430;
							iVar5 = Random.Range(0, __this_00._size);
							pGVar7 = __this_00.get_Item(iVar5);
							if (pGVar7 == null) break;
							pMVar8 = (MethodInfo)pGVar7.GetQuestName();
							bVar4 = __this_03.Contains((object)pMVar8);
							if (!bVar4) goto label_05923430;
							iVar5 = Random.Range(0, __this_00._size);
							pGVar7 = __this_00.get_Item(iVar5);
							if (pGVar7 == null) break;
							pMVar8 = (MethodInfo)pGVar7.GetQuestName();
							bVar4 = __this_03.Contains((object)pMVar8);
							if (!bVar4) goto label_05923430;
						}
						else {
	label_05923430: ;
							pGVar7 = new QuestItem();
							pGVar9 = __this_00.get_Item(iVar5);
							if (pGVar7 == null) break;
							pGVar7.Copy((BaseSetting)pGVar9);
							__this_01 = pGVar7.DayCreated;
							if ((__this_01 == null) ||(__this_01.Value = currentDay, pMVar8 = MethodInfo_System_Collections_Generic_List_QuestItem_Add, __this_02 == null)) break;
							piVar1 = &__this_02._version;
							*piVar1 = *piVar1 + 1;
							pGVar3 = __this_02._items;
							if (pGVar3 == null) break;
							uVar2 = __this_02._size;
							if (uVar2 < (uint)pGVar3.Length) {
								__this_02._size = uVar2 + 1;
								pGVar3[(int)uVar2] = pGVar7;
							}
							else {
								__this_02.AddWithResize((object)pGVar7);
							}
							item = pGVar7.GetQuestName();
							__this_03.Add((object)item);
						}
						count = count + -1;
						if (count == 0) {
							return __this_02;
						}
					}
				}
			}
		}
	label_05923574: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600155B")]
	[Address(RVA = "0x58228C0", Offset = "0x58218C0", VA = "0x58228C0")]
	private void CacheActiveQuests()
	{
		// Lifted from source/cpp/GameProgress/QuestHandler.c (GameProgress.QuestHandler$$CacheActiveQuests): 6 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		QuestContainer pGVar1;
		ListSetting<QuestItem> pSVar2;
		List<object> pSVar3;
		IntSetting pSVar4;
		IntSetting pSVar5;
		bool bVar6;
		byte[] local_60 = new byte[16];
		QuestItem local_50;
		byte[] local_48 = new byte[8];
		QuestItem local_38;

		local_48 = (byte[])0x0;
		local_38 = null;
		__this_00 = (Dictionary<object, object>)this._activeQuests;
		if (__this_00 != null) {
			__this_00.Clear();
			pGVar1 = this._quest;
			if (((pGVar1 != null) &&(pSVar2 = pGVar1.DailyQuestItems, pSVar2 != null)) &&(pSVar3 = (List<object>)pSVar2._value, pSVar3 != null)) {
				local_60.GetEnumerator(pSVar3);
				local_38 = local_50;
				local_48 = (byte[])local_60._0_8_;
				local_60._0_8_ = null;
				local_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_48;
				while(true) {
					bVar6 = local_48.MoveNext();
					if (!bVar6) break;
					if (local_38 == null) {
						throw new NullReferenceException();
					}
					pSVar4 = local_38.Progress;
					if (pSVar4 == null) {
						throw new NullReferenceException();
					}
					pSVar5 = local_38.Amount;
					if (pSVar5 == null) {
						throw new NullReferenceException();
					}
					if (pSVar4._value < pSVar5._value) {
						this.AddActiveQuest(local_38);
					}
				}
				local_48.Dispose();
				pGVar1 = this._quest;
				if (((pGVar1 != null) &&(pSVar2 = pGVar1.WeeklyQuestItems, pSVar2 != null)) &&(pSVar3 = (List<object>)pSVar2._value, pSVar3 != null)) {
					local_60.GetEnumerator(pSVar3);
					local_38 = local_50;
					local_48 = (byte[])local_60._0_8_;
					local_60._0_8_ = null;
					local_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_48;
					while(true) {
						bVar6 = local_48.MoveNext();
						if (!bVar6) {
							local_48.Dispose();
							return;
						}
						if (local_38 == null) {
							throw new NullReferenceException();
						}
						pSVar4 = local_38.Progress;
						if (pSVar4 == null) {
							throw new NullReferenceException();
						}
						pSVar5 = local_38.Amount;
						if (pSVar5 == null) break;
						if (pSVar4._value < pSVar5._value) {
							this.AddActiveQuest(local_38);
						}
					}
					throw new NullReferenceException();
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600155C")]
	[Address(RVA = "0x581BF60", Offset = "0x581AF60", VA = "0x581BF60")]
	protected void AddActiveQuest(QuestItem item)
	{
		// Lifted from source/cpp/GameProgress/QuestHandler.c (GameProgress.QuestHandler$$AddActiveQuest): 3 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		StringSetting pSVar3;
		Dictionary<object, object> pSVar4;
		String key;
		Object[] pSVar5;
		bool bVar7;
		List<QuestItem> __this_00;
		List<object> __this_01;

		if (((item != null) &&(pSVar3 = item.Category, pSVar3 != null)) &&(pSVar4 = (Dictionary<object, object>)this._activeQuests, pSVar4 != null)) {
			key = pSVar3._value;
			bVar7 = pSVar4.ContainsKey((object)key);
			if (!bVar7) {
				pSVar4 = (Dictionary<object, object>)this._activeQuests;
				__this_00 = il2cpp_codegen_object_new(typeof(List<QuestItem>)) ;
				__this_00 = new List<object>();
				if (pSVar4 == null) goto label_0591c0df;
				pSVar4.Add((object)key, (object)__this_00);
			}
			pSVar4 = (Dictionary<object, object>)this._activeQuests;
			if (pSVar4 != null) {
				__this_01 = (List<object>)pSVar4.get_Item((object)key);
				if (__this_01 != null) {
					piVar1 = &__this_01._version;
					*piVar1 = *piVar1 + 1;
					pSVar5 = __this_01._items;
					if (pSVar5 != null) {
						uVar2 = __this_01._size;
						if (uVar2 < (uint)pSVar5.Length) {
							__this_01._size = uVar2 + 1;
							pSVar5[(int)uVar2] = (object)item;
							return;
						}
						__this_01.AddWithResize((object)item);
						return;
					}
				}
			}
		}
	label_0591c0df: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600155D")]
	[Address(RVA = "0x58235A0", Offset = "0x58225A0", VA = "0x58235A0", Slot = "9")]
	protected virtual bool CheckKillConditions(List<StringSetting> conditions, KillWeapon weapon)
	{
		// Lifted from source/cpp/GameProgress/QuestHandler.c (GameProgress.QuestHandler$$CheckKillConditions): 9 lines keep C-only constructs
		String key;
		System_Collections_Generic_Dictionary_string__KillWeapon__o __this_00;
		bool bVar1;
		int iVar2;
		String[] pSVar3;
		int iVar4;
		System_Collections_Generic_List_Enumerator_object__o SStack_68;
		byte[] auStack_48 = new byte[16];
		object pIStack_38;

		SStack_68._list = null;
		SStack_68._index = 0;
		SStack_68._version = 0;
		SStack_68._current = null;
		if (conditions == null) {
			throw new NullReferenceException();
		}
		auStack_48.GetEnumerator((List<object>)conditions);
		SStack_68._current = pIStack_38;
		SStack_68._list = (List<T>)auStack_48._0_8_;
		SStack_68._index = auStack_48._8_4_;
		SStack_68._version = auStack_48._12_4_;
		auStack_48._0_8_ = null;
		auStack_48._8_8_ = &SStack_68;
		do {
			do {
				bVar1 = SStack_68.MoveNext();
				if (!bVar1) {
					iVar4 = 5;
					goto label_0592374c;
				}
				if (SStack_68._current == null) {
					throw new NullReferenceException();
				}
				if (SStack_68._current[2].klass == null) {
					throw new NullReferenceException();
				}
				pSVar3 = SStack_68._current[2].klass.Split(0x3a, 0);
				if (pSVar3 == null) {
					throw new NullReferenceException();
				}
				iVar4 = (int)pSVar3.Length;
				if (iVar4 == 1) {
					throw new IndexOutOfRangeException();
				}
				if (iVar4 == 0) {
					throw new IndexOutOfRangeException();
				}
				key = pSVar3[1];
				bVar1 = (pSVar3[0] == "Weapon");
			} while (!bVar1);
			__this_00 = QuestHandler.NameToKillWeapon;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			iVar2 = __this_00.get_Item((object)key);
		} while (iVar2 == weapon);
		iVar4 = 4;
	label_0592374c: ;
		SStack_68.Dispose();
		return iVar4 != 4;
	}

	[Token(Token = "0x600155E")]
	[Address(RVA = "0x5823810", Offset = "0x5822810", VA = "0x5823810", Slot = "10")]
	protected virtual bool CheckDamageConditions(List<StringSetting> conditions, KillWeapon weapon, int damage)
	{
		// Lifted from source/cpp/GameProgress/QuestHandler.c (GameProgress.QuestHandler$$CheckDamageConditions): 9 lines keep C-only constructs
		String a;
		String s;
		System_Collections_Generic_Dictionary_string__KillWeapon__o __this_00;
		bool bVar1;
		int iVar2;
		String[] pSVar3;
		int iVar4;
		System_Collections_Generic_List_Enumerator_object__o SStack_68;
		byte[] auStack_48 = new byte[16];
		object pIStack_38;

		SStack_68._list = null;
		SStack_68._index = 0;
		SStack_68._version = 0;
		SStack_68._current = null;
		if (conditions == null) {
			throw new NullReferenceException();
		}
		auStack_48.GetEnumerator((List<object>)conditions);
		SStack_68._current = pIStack_38;
		SStack_68._list = (List<T>)auStack_48._0_8_;
		SStack_68._index = auStack_48._8_4_;
		SStack_68._version = auStack_48._12_4_;
		auStack_48._0_8_ = null;
		auStack_48._8_8_ = &SStack_68;
		do {
			do {
				bVar1 = SStack_68.MoveNext();
				if (!bVar1) {
					iVar4 = 6;
					goto label_05923a15;
				}
				if (SStack_68._current == null) {
					throw new NullReferenceException();
				}
				if (SStack_68._current[2].klass == null) {
					throw new NullReferenceException();
				}
				pSVar3 = SStack_68._current[2].klass.Split(0x3a, 0);
				if (pSVar3 == null) {
					throw new NullReferenceException();
				}
				iVar4 = (int)pSVar3.Length;
				if (iVar4 == 0) {
					throw new IndexOutOfRangeException();
				}
				if (iVar4 == 1) {
					throw new IndexOutOfRangeException();
				}
				a = pSVar3[0];
				s = pSVar3[1];
				bVar1 = (a == "Weapon");
				if (bVar1) {
					__this_00 = QuestHandler.NameToKillWeapon;
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					iVar2 = __this_00.get_Item((object)s);
					if (iVar2 != weapon) goto label_05923a09;
				}
				bVar1 = (a == "Damage");
			} while (!bVar1);
			iVar2 = Int32.Parse(s);
		} while (iVar2 <= damage);
	label_05923a09: ;
		iVar4 = 5;
	label_05923a15: ;
		SStack_68.Dispose();
		return iVar4 != 5;
	}

	[Token(Token = "0x600155F")]
	[Address(RVA = "0x5823AE0", Offset = "0x5822AE0", VA = "0x5823AE0", Slot = "11")]
	protected virtual bool CheckSpeedConditions(List<StringSetting> conditions, float speed)
	{
		// Lifted from source/cpp/GameProgress/QuestHandler.c (GameProgress.QuestHandler$$CheckSpeedConditions): 8 lines keep C-only constructs
		String s;
		bool bVar1;
		int iVar2;
		String[] pSVar3;
		int iVar4;
		byte[] auStack_60 = new byte[16];
		object pIStack_50;
		System_Collections_Generic_List_Enumerator_object__o SStack_48;

		if (conditions == null) {
			throw new NullReferenceException();
		}
		auStack_60.GetEnumerator((List<object>)conditions);
		SStack_48._current = pIStack_50;
		SStack_48._list = (List<T>)auStack_60._0_8_;
		SStack_48._index = auStack_60._8_4_;
		SStack_48._version = auStack_60._12_4_;
		auStack_60._0_8_ = null;
		auStack_60._8_8_ = &SStack_48;
		do {
			do {
				bVar1 = SStack_48.MoveNext();
				if (!bVar1) {
					iVar4 = 5;
					goto label_05923c34;
				}
				if (SStack_48._current == null) {
					throw new NullReferenceException();
				}
				if (SStack_48._current[2].klass == null) {
					throw new NullReferenceException();
				}
				pSVar3 = SStack_48._current[2].klass.Split(0x3a, 0);
				if (pSVar3 == null) {
					throw new NullReferenceException();
				}
				iVar4 = (int)pSVar3.Length;
				if (iVar4 == 1) {
					throw new IndexOutOfRangeException();
				}
				if (iVar4 == 0) {
					throw new IndexOutOfRangeException();
				}
				s = pSVar3[1];
				bVar1 = (pSVar3[0] == "Speed");
			} while (!bVar1);
			iVar2 = Int32.Parse(s);
		} while ((float)iVar2 <= speed);
		iVar4 = 4;
	label_05923c34: ;
		SStack_48.Dispose();
		return iVar4 != 4;
	}

	[Token(Token = "0x6001560")]
	[Address(RVA = "0x5823CF0", Offset = "0x5822CF0", VA = "0x5823CF0", Slot = "4")]
	public override void RegisterTitanKill(BasicTitan victim, KillMethod method)
	{
		// Lifted from source/cpp/GameProgress/QuestHandler.c (GameProgress.QuestHandler$$RegisterTitanKill): 8 lines keep C-only constructs
		uint uVar1;
		int val2;
		String[] pSVar2;
		Dictionary<object, object> pSVar3;
		String a;
		Il2CppClass pIVar4;
		object pIVar5;
		bool bVar6;
		int iVar7;
		ulong uVar8;
		List<object> __this_00;
		ulong uVar9;
		byte[] auStack_78 = new byte[8];
		object pIStack_68;
		byte[] auStack_58 = new byte[16];
		object pIStack_48;
		String[] pSStack_40;
		ulong uStack_38;

		if (Il2CppMethodInitialized_0754576f == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value) ;
			Il2CppMethodInitialized_0754576f = true;
		}
		auStack_78 = (byte[])0x0;
		pIStack_68 = null;
		pSVar2 = this.TitanKillCategories;
		if (pSVar2 == null) {
	label_05924009: ;
			throw new NullReferenceException();
		}
		if (0 < (int)pSVar2.Length) {
			uVar8 = pSVar2.Length & 0xffffffff;
			uVar9 = 0;
			pSStack_40 = pSVar2;
			do {
				if (uVar8 <= uVar9) {
					throw new IndexOutOfRangeException();
				}
				pSVar3 = (Dictionary<object, object>)this._activeQuests;
				if (pSVar3 == null) goto label_05924009;
				a = pSStack_40[uVar9];
				uStack_38 = uVar9;
				bVar6 = pSVar3.ContainsKey((object)a);
				if (bVar6) {
					pSVar3 = (Dictionary<object, object>)this._activeQuests;
					if (pSVar3 == null) goto label_05924009;
					__this_00 = (List<object>)pSVar3.get_Item((object)a);
					if (__this_00 == null) goto label_05924009;
					auStack_58.GetEnumerator(__this_00);
					pIStack_68 = pIStack_48;
					auStack_78 = (byte[])auStack_58._0_8_;
					auStack_58._0_8_ = null;
					auStack_58._8_8_ = auStack_78;
	label_05923e80: ;
					bVar6 = auStack_78.MoveNext();
					pIVar5 = pIStack_68;
					if (bVar6) {
						if (pIStack_68 == null) {
							throw new NullReferenceException();
						}
						if (pIStack_68[3].monitor == null) {
							throw new NullReferenceException();
						}
						bVar6 = this.CheckKillConditions(*(List<StringSetting>*)((long)pIStack_68[3].monitor + 0x20), method.Weapon);
						if (bVar6) {
							bVar6 = (a == "KillTitan");
							if (bVar6) {
								pIVar4 = pIVar5[6].klass;
								if (pIVar4 != null) {
									pIVar4.Value = *(int)((long)&(pIVar4._1).namespaze + 4) + 1;
									pIVar4 = pIVar5[6].klass;
									if ((pIVar4 != null) && (pIVar5[4].klass != null)) {
										iVar7 = *(int)((long)&(pIVar4._1).namespaze + 4);
										val2 = *(int)((long)&((pIVar5[4].klass)._1).namespaze + 4);
										iVar7 = Math.Min(iVar7, val2);
										pIVar4.Value = iVar7;
										goto label_05923e80;
									}
								}
								throw new NullReferenceException();
							}
						}
						goto label_05923e80;
					}
					auStack_78.Dispose();
				}
				uVar9 = uStack_38 + 1;
				uVar1 = (uint)pSStack_40.Length;
				uVar8 = (ulong)uVar1;
			} while ((long)uVar9 < (long)(int)uVar1);
		}
		return;
	}

	[Token(Token = "0x6001561")]
	[Address(RVA = "0x58240F0", Offset = "0x58230F0", VA = "0x58240F0", Slot = "5")]
	public override void RegisterHumanKill(Human victim, KillMethod method)
	{
		// Lifted from source/cpp/GameProgress/QuestHandler.c (GameProgress.QuestHandler$$RegisterHumanKill): 8 lines keep C-only constructs
		uint uVar1;
		int val2;
		String[] pSVar2;
		Dictionary<object, object> pSVar3;
		String a;
		Il2CppClass pIVar4;
		object pIVar5;
		bool bVar6;
		int iVar7;
		ulong uVar8;
		List<object> __this_00;
		ulong uVar9;
		byte[] auStack_78 = new byte[8];
		object pIStack_68;
		byte[] auStack_58 = new byte[16];
		object pIStack_48;
		String[] pSStack_40;
		ulong uStack_38;

		if (Il2CppMethodInitialized_07545770 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value) ;
			Il2CppMethodInitialized_07545770 = true;
		}
		auStack_78 = (byte[])0x0;
		pIStack_68 = null;
		pSVar2 = this.HumanKillCategories;
		if (pSVar2 == null) {
	label_05924409: ;
			throw new NullReferenceException();
		}
		if (0 < (int)pSVar2.Length) {
			uVar8 = pSVar2.Length & 0xffffffff;
			uVar9 = 0;
			pSStack_40 = pSVar2;
			do {
				if (uVar8 <= uVar9) {
					throw new IndexOutOfRangeException();
				}
				pSVar3 = (Dictionary<object, object>)this._activeQuests;
				if (pSVar3 == null) goto label_05924409;
				a = pSStack_40[uVar9];
				uStack_38 = uVar9;
				bVar6 = pSVar3.ContainsKey((object)a);
				if (bVar6) {
					pSVar3 = (Dictionary<object, object>)this._activeQuests;
					if (pSVar3 == null) goto label_05924409;
					__this_00 = (List<object>)pSVar3.get_Item((object)a);
					if (__this_00 == null) goto label_05924409;
					auStack_58.GetEnumerator(__this_00);
					pIStack_68 = pIStack_48;
					auStack_78 = (byte[])auStack_58._0_8_;
					auStack_58._0_8_ = null;
					auStack_58._8_8_ = auStack_78;
	label_05924280: ;
					bVar6 = auStack_78.MoveNext();
					pIVar5 = pIStack_68;
					if (bVar6) {
						if (pIStack_68 == null) {
							throw new NullReferenceException();
						}
						if (pIStack_68[3].monitor == null) {
							throw new NullReferenceException();
						}
						bVar6 = this.CheckKillConditions(*(List<StringSetting>*)((long)pIStack_68[3].monitor + 0x20), method.Weapon);
						if (bVar6) {
							bVar6 = (a == "KillHuman");
							if (bVar6) {
								pIVar4 = pIVar5[6].klass;
								if (pIVar4 != null) {
									pIVar4.Value = *(int)((long)&(pIVar4._1).namespaze + 4) + 1;
									pIVar4 = pIVar5[6].klass;
									if ((pIVar4 != null) && (pIVar5[4].klass != null)) {
										iVar7 = *(int)((long)&(pIVar4._1).namespaze + 4);
										val2 = *(int)((long)&((pIVar5[4].klass)._1).namespaze + 4);
										iVar7 = Math.Min(iVar7, val2);
										pIVar4.Value = iVar7;
										goto label_05924280;
									}
								}
								throw new NullReferenceException();
							}
						}
						goto label_05924280;
					}
					auStack_78.Dispose();
				}
				uVar9 = uStack_38 + 1;
				uVar1 = (uint)pSStack_40.Length;
				uVar8 = (ulong)uVar1;
			} while ((long)uVar9 < (long)(int)uVar1);
		}
		return;
	}

	[Token(Token = "0x6001562")]
	[Address(RVA = "0x5824430", Offset = "0x5823430", VA = "0x5824430", Slot = "6")]
	public override void RegisterDamage(GameObject victim, KillMethod method, int damage)
	{
		// Lifted from source/cpp/GameProgress/QuestHandler.c (GameProgress.QuestHandler$$RegisterDamage): 12 lines keep C-only constructs
		uint uVar1;
		int iVar2;
		String[] pSVar3;
		Dictionary<object, object> pSVar4;
		String a;
		Il2CppClass pIVar5;
		object pIVar6;
		bool bVar7;
		int iVar8;
		ulong uVar9;
		List<object> __this_00;
		ulong uVar10;
		byte[] auStack_78 = new byte[8];
		object pIStack_68;
		byte[] auStack_58 = new byte[16];
		object pIStack_48;
		String[] pSStack_40;
		ulong uStack_38;

		if (Il2CppMethodInitialized_07545771 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value) ;
			Il2CppMethodInitialized_07545771 = true;
		}
		auStack_78 = (byte[])0x0;
		pIStack_68 = null;
		pSVar3 = this.DamageCategories;
		if (pSVar3 == null) {
	label_0592484b: ;
			throw new NullReferenceException();
		}
		if (0 < (int)pSVar3.Length) {
			uVar9 = pSVar3.Length & 0xffffffff;
			uVar10 = 0;
			pSStack_40 = pSVar3;
			do {
				if (uVar9 <= uVar10) {
					throw new IndexOutOfRangeException();
				}
				pSVar4 = (Dictionary<object, object>)this._activeQuests;
				if (pSVar4 == null) goto label_0592484b;
				a = pSStack_40[uVar10];
				uStack_38 = uVar10;
				bVar7 = pSVar4.ContainsKey((object)a);
				if (bVar7) {
					pSVar4 = (Dictionary<object, object>)this._activeQuests;
					if (pSVar4 == null) goto label_0592484b;
					__this_00 = (List<object>)pSVar4.get_Item((object)a);
					if (__this_00 == null) goto label_0592484b;
					auStack_58.GetEnumerator(__this_00);
					pIStack_68 = pIStack_48;
					auStack_78 = (byte[])auStack_58._0_8_;
					auStack_58._0_8_ = null;
					auStack_58._8_8_ = auStack_78;
	label_059245d0: ;
					bVar7 = auStack_78.MoveNext();
					pIVar6 = pIStack_68;
					if (bVar7) {
						if (pIStack_68 == null) {
							throw new NullReferenceException();
						}
						if (pIStack_68[3].monitor == null) {
							throw new NullReferenceException();
						}
						bVar7 = this.CheckDamageConditions(*(List<StringSetting>*)((long)pIStack_68[3].monitor + 0x20), method.Weapon, damage);
						if (bVar7) {
							bVar7 = (a == "HitDamage");
							if (bVar7) {
								pIVar5 = pIVar6[6].klass;
								if (pIVar5 != null) {
									pIVar5.Value = *(int)((long)&(pIVar5._1).namespaze + 4) + 1;
									pIVar5 = pIVar6[6].klass;
									if ((pIVar5 != null) && (pIVar6[4].klass != null)) {
										iVar8 = *(int)((long)&(pIVar5._1).namespaze + 4);
										iVar2 = *(int)((long)&((pIVar6[4].klass)._1).namespaze + 4);
										iVar8 = Math.Min(iVar8, iVar2);
										pIVar5.Value = iVar8;
										goto label_059245d0;
									}
								}
								throw new NullReferenceException();
							}
							bVar7 = (a == "DealDamage");
							if (bVar7) {
								pIVar5 = pIVar6[6].klass;
								if (pIVar5 != null) {
									pIVar5.Value = *(int)((long)&(pIVar5._1).namespaze + 4) + damage;
									pIVar5 = pIVar6[6].klass;
									if ((pIVar5 != null) && (pIVar6[4].klass != null)) {
										iVar8 = *(int)((long)&(pIVar5._1).namespaze + 4);
										iVar2 = *(int)((long)&((pIVar6[4].klass)._1).namespaze + 4);
										iVar8 = Math.Min(iVar8, iVar2);
										pIVar5.Value = iVar8;
										goto label_059245d0;
									}
								}
								throw new NullReferenceException();
							}
						}
						goto label_059245d0;
					}
					auStack_78.Dispose();
				}
				uVar10 = uStack_38 + 1;
				uVar1 = (uint)pSStack_40.Length;
				uVar9 = (ulong)uVar1;
			} while ((long)uVar10 < (long)(int)uVar1);
		}
		return;
	}

	[Token(Token = "0x6001563")]
	[Address(RVA = "0x5824880", Offset = "0x5823880", VA = "0x5824880", Slot = "7")]
	public override void RegisterSpeed(float speed)
	{
		// Lifted from source/cpp/GameProgress/QuestHandler.c (GameProgress.QuestHandler$$RegisterSpeed): 8 lines keep C-only constructs
		uint uVar1;
		int val2;
		String[] pSVar2;
		Dictionary<object, object> pSVar3;
		String a;
		Il2CppClass pIVar4;
		object pIVar5;
		bool bVar6;
		int iVar7;
		ulong uVar8;
		List<object> __this_00;
		ulong uVar9;
		byte[] auStack_78 = new byte[8];
		object pIStack_68;
		byte[] auStack_58 = new byte[16];
		object pIStack_48;
		String[] pSStack_40;
		ulong uStack_38;

		if (Il2CppMethodInitialized_07545772 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value) ;
			Il2CppMethodInitialized_07545772 = true;
		}
		auStack_78 = (byte[])0x0;
		pIStack_68 = null;
		pSVar2 = this.SpeedCategories;
		if (pSVar2 == null) {
	label_05924b9b: ;
			throw new NullReferenceException();
		}
		if (0 < (int)pSVar2.Length) {
			uVar8 = pSVar2.Length & 0xffffffff;
			uVar9 = 0;
			pSStack_40 = pSVar2;
			do {
				if (uVar8 <= uVar9) {
					throw new IndexOutOfRangeException();
				}
				pSVar3 = (Dictionary<object, object>)this._activeQuests;
				if (pSVar3 == null) goto label_05924b9b;
				a = pSStack_40[uVar9];
				uStack_38 = uVar9;
				bVar6 = pSVar3.ContainsKey((object)a);
				if (bVar6) {
					pSVar3 = (Dictionary<object, object>)this._activeQuests;
					if (pSVar3 == null) goto label_05924b9b;
					__this_00 = (List<object>)pSVar3.get_Item((object)a);
					if (__this_00 == null) goto label_05924b9b;
					auStack_58.GetEnumerator(__this_00);
					pIStack_68 = pIStack_48;
					auStack_78 = (byte[])auStack_58._0_8_;
					auStack_58._0_8_ = null;
					auStack_58._8_8_ = auStack_78;
	label_05924a10: ;
					bVar6 = auStack_78.MoveNext();
					pIVar5 = pIStack_68;
					if (bVar6) {
						if (pIStack_68 == null) {
							throw new NullReferenceException();
						}
						if (pIStack_68[3].monitor == null) {
							throw new NullReferenceException();
						}
						bVar6 = this.CheckSpeedConditions(*(List<StringSetting>*)((long)pIStack_68[3].monitor + 0x20), speed);
						if (bVar6) {
							bVar6 = (a == "ReachSpeed");
							if (bVar6) {
								pIVar4 = pIVar5[6].klass;
								if (pIVar4 != null) {
									pIVar4.Value = *(int)((long)&(pIVar4._1).namespaze + 4) + 1;
									pIVar4 = pIVar5[6].klass;
									if ((pIVar4 != null) && (pIVar5[4].klass != null)) {
										iVar7 = *(int)((long)&(pIVar4._1).namespaze + 4);
										val2 = *(int)((long)&((pIVar5[4].klass)._1).namespaze + 4);
										iVar7 = Math.Min(iVar7, val2);
										pIVar4.Value = iVar7;
										goto label_05924a10;
									}
								}
								throw new NullReferenceException();
							}
						}
						goto label_05924a10;
					}
					auStack_78.Dispose();
				}
				uVar9 = uStack_38 + 1;
				uVar1 = (uint)pSStack_40.Length;
				uVar8 = (ulong)uVar1;
			} while ((long)uVar9 < (long)(int)uVar1);
		}
		return;
	}

	[Token(Token = "0x6001564")]
	[Address(RVA = "0x5824BD0", Offset = "0x5823BD0", VA = "0x5824BD0", Slot = "8")]
	public override void RegisterInteraction(GameObject interact, InteractionType interactionType)
	{
		// Lifted from source/cpp/GameProgress/QuestHandler.c (GameProgress.QuestHandler$$RegisterInteraction): 11 lines keep C-only constructs
		uint uVar1;
		int iVar2;
		String[] pSVar3;
		Dictionary<object, object> pSVar4;
		String a;
		Il2CppClass pIVar5;
		object pIVar6;
		bool bVar7;
		int iVar8;
		ulong uVar9;
		List<object> __this_00;
		ulong uVar10;
		byte[] auStack_78 = new byte[8];
		object pIStack_68;
		byte[] auStack_58 = new byte[16];
		object pIStack_48;
		String[] pSStack_40;
		ulong uStack_38;

		auStack_78 = (byte[])0x0;
		pIStack_68 = null;
		pSVar3 = this.InteractionCategories;
		if (pSVar3 == null) {
	label_05924f97: ;
			throw new NullReferenceException();
		}
		if ((int)pSVar3.Length < 1) {
			return;
		}
		uVar9 = pSVar3.Length & 0xffffffff;
		uVar10 = 0;
		pSStack_40 = pSVar3;
		do {
			if (uVar9 <= uVar10) {
				throw new IndexOutOfRangeException();
			}
			pSVar4 = (Dictionary<object, object>)this._activeQuests;
			if (pSVar4 == null) goto label_05924f97;
			a = pSStack_40[uVar10];
			uStack_38 = uVar10;
			bVar7 = pSVar4.ContainsKey((object)a);
			if (bVar7) {
				pSVar4 = (Dictionary<object, object>)this._activeQuests;
				if ((pSVar4 == null) ||(__this_00 = (List<object>)pSVar4.get_Item((object)a), __this_00 == null)) goto label_05924f97;
				auStack_58.GetEnumerator(__this_00);
				pIStack_68 = pIStack_48;
				auStack_78 = (byte[])auStack_58._0_8_;
				auStack_58._0_8_ = null;
				auStack_58._8_8_ = auStack_78;
	label_05924d80: ;
				bVar7 = auStack_78.MoveNext();
				pIVar6 = pIStack_68;
				if (bVar7) {
					bVar7 = (a == "ShareGas");
					if (bVar7) {
						if (pIVar6 == null) {
	label_05924f2c: ;
							throw new NullReferenceException();
						}
						pIVar5 = pIVar6[6].klass;
						if (pIVar5 == null) goto label_05924f2c;
						pIVar5.Value = *(int)((long)&(pIVar5._1).namespaze + 4) + 1;
						pIVar5 = pIVar6[6].klass;
						if ((pIVar5 == null) || (pIVar6[4].klass == null)) goto label_05924f2c;
						iVar8 = *(int)((long)&(pIVar5._1).namespaze + 4);
						iVar2 = *(int)((long)&((pIVar6[4].klass)._1).namespaze + 4);
						iVar8 = Math.Min(iVar8, iVar2);
						pIVar5.Value = iVar8;
					}
					else {
						bVar7 = (a == "CarryHuman");
						if (bVar7) {
							if (pIVar6 != null) {
								pIVar5 = pIVar6[6].klass;
								if (pIVar5 != null) {
									pIVar5.Value = *(int)((long)&(pIVar5._1).namespaze + 4) + 1;
									pIVar5 = pIVar6[6].klass;
									if ((pIVar5 != null) && (pIVar6[4].klass != null)) {
										iVar8 = *(int)((long)&(pIVar5._1).namespaze + 4);
										iVar2 = *(int)((long)&((pIVar6[4].klass)._1).namespaze + 4);
										iVar8 = Math.Min(iVar8, iVar2);
										pIVar5.Value = iVar8;
										goto label_05924d80;
									}
								}
							}
							throw new NullReferenceException();
						}
					}
					goto label_05924d80;
				}
				auStack_78.Dispose();
			}
			uVar10 = uStack_38 + 1;
			uVar1 = (uint)pSStack_40.Length;
			uVar9 = (ulong)uVar1;
			if ((long)(int)uVar1 <= (long)uVar10) {
				return;
			}
		} while(true);
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/GameProgress/QuestHandler.c.

	// GameProgress.QuestHandler$$.cctor: 2 lines keep C-only constructs
	static QuestHandler()
	{
		System_Collections_Generic_Dictionary_string__T__o pSVar1;

		pSVar1 = Util.EnumToDict<KillWeapon>();
		QuestHandler.NameToKillWeapon =(System_Collections_Generic_Dictionary_string__KillWeapon__o)pSVar1;
		return;
	}
}
