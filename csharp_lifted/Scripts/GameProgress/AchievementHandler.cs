// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.AchievementHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/AchievementHandler.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/AchievementHandler.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace GameProgress;

[Token(Token = "0x200035E")]
internal class AchievementHandler : QuestHandler
{
	[Token(Token = "0x40010DD")]
	[FieldOffset(Offset = "0x48")]
	private AchievementContainer _achievement;

	[Token(Token = "0x60014F6")]
	[Address(RVA = "0x581AB50", Offset = "0x5819B50", VA = "0x581AB50")]
	public AchievementHandler(AchievementContainer achievement)
	{
		// Lifted from source/cpp/GameProgress/AchievementHandler.c (GameProgress.AchievementHandler$$.ctor): clean


		if ((typeof(QuestHandler)._2).cctor_finished_or_no_cctor == 0) {
		}
		base(null);
		this._achievement = achievement;
		this.LoadAchievements();
		this.CacheActiveAchievements();
		return;
	}

	[Token(Token = "0x60014F7")]
	[Address(RVA = "0x581AEB0", Offset = "0x5819EB0", VA = "0x581AEB0")]
	public void ReloadAchievements()
	{
		// Lifted from source/cpp/GameProgress/AchievementHandler.c (GameProgress.AchievementHandler$$ReloadAchievements): clean
		this.LoadAchievements();
		this.CacheActiveAchievements();
		return;
	}

	[Token(Token = "0x60014F8")]
	[Address(RVA = "0x581AED0", Offset = "0x5819ED0", VA = "0x581AED0")]
	private void LoadAchievements()
	{
		// Lifted from source/cpp/GameProgress/AchievementHandler.c (GameProgress.AchievementHandler$$LoadAchievements): 17 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		ListSetting<AchievementItem> pSVar4;
		List<object> pSVar5;
		IntSetting pSVar6;
		Object[] pSVar7;
		object pIVar9;
		bool bVar10;
		ListSetting<AchievementItem> pSVar11;
		Dictionary<string, AchievementItem> __this_00;
		object pIVar12;
		AchievementContainer pGVar13;
		Object __this_01;
		String pSVar14;
		AchievementItem pGVar15;
		byte[] local_68 = new byte[8];
		object local_58;
		byte[] local_50 = new byte[16];
		object local_40;
		ListSetting<AchievementItem> local_38;

		local_68 = (byte[])0x0;
		local_58 = null;
		pSVar11 = new ListSetting<AchievementItem>();
		__this_00 = il2cpp_codegen_object_new(typeof(Dictionary<string, AchievementItem>)) ;
		__this_00 = new Dictionary<object, object>();
		pGVar13 = this._achievement;
		if (((pGVar13 != null) &&(pSVar4 = pGVar13.AchievementItems, pSVar4 != null)) && (pSVar5 = (List<object>)pSVar4._value, pSVar5 != null)) {
			local_50.GetEnumerator(pSVar5) ;
			local_58 = local_40;
			local_68 = (byte[])local_50._0_8_;
			local_50._0_8_ = null;
			local_50._8_8_ = local_68;
			local_38 = pSVar11;
			if (__this_00 == null) {
				bVar10 = local_68.MoveNext();
				if (bVar10) {
					if (local_58 != null) {
						(*local_58.klass.vtable[0xe].methodPtr)(local_58,local_58.klass.vtable[0xe].method);
						throw new NullReferenceException();
					}
	label_0591b4c7: ;
					throw new NullReferenceException();
				}
			}
			else {
				while(true) {
					bVar10 = local_68.MoveNext();
					pIVar9 = local_58;
					if (!bVar10) break;
					if (local_58 == null) goto label_0591b4c7;
					pIVar12 = (object)(*local_58.klass.vtable[0xe].methodPtr)(local_58,local_58.klass.vtable[0xe].method);
					__this_00.Add(pIVar12, pIVar9);
				}
			}
			local_68.Dispose();
			pSVar11 = new ListSetting<AchievementItem>();
			pGVar13.AchievementItems = pSVar11;
			pGVar13 = new AchievementContainer();
			pSVar14 = ResourcePaths.Info;
			__this_01 = ResourceManager.LoadAsset(pSVar14, "AchievementList", false, false);
			if (__this_01 != null) {
				bVar2 = (typeof(TextAsset)._2).typeHierarchyDepth;
				if (((__this_01.klass._2).typeHierarchyDepth < bVar2) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(TextAsset))) {
					throw new InvalidCastException();
				}
				pSVar14 = __this_01.text;
				pGVar13.DeserializeFromJsonString(pSVar14);
				pSVar11 = pGVar13.AchievementItems;
				if ((pSVar11 != null) &&(pSVar5 = (List<object>)pSVar11._value, pSVar5 != null)) {
					local_50.GetEnumerator(pSVar5);
					local_58 = local_40;
					local_68 = (byte[])local_50._0_8_;
					local_50._0_8_ = null;
					local_50._8_8_ = local_68;
					if (__this_00 == null) {
						bVar10 = local_68.MoveNext();
						if (bVar10) {
							if (local_58 != null) {
								(*local_58.klass.vtable[0xe].methodPtr)(local_58,local_58.klass.vtable[0xe].method);
								throw new NullReferenceException();
							}
	label_0591b4d6: ;
							throw new NullReferenceException();
						}
					}
					else {
						while(true) {
							bVar10 = local_68.MoveNext();
							pIVar9 = local_58;
							if (!bVar10) break;
							if (local_58 == null) goto label_0591b4d6;
							pIVar12 = (object)(*local_58.klass.vtable[0xe].methodPtr)(local_58,local_58.klass.vtable[0xe].method);
							bVar10 = __this_00.ContainsKey(pIVar12);
							if (bVar10) {
								pIVar12 = (object)(*pIVar9.klass.vtable[0xe].methodPtr)(pIVar9,pIVar9.klass.vtable[0xe].method);
								pGVar15 = __this_00.get_Item(pIVar12);
								if (pGVar15 == null) {
									throw new NullReferenceException();
								}
								pSVar6 = pGVar15.Progress;
								if (pSVar6 == null) {
									throw new NullReferenceException();
								}
								if (pIVar9[6].klass == null) {
									throw new NullReferenceException();
								}
								pIVar9[6].klass.Value = pSVar6._value;
							}
							if (pIVar9[8].monitor == null) {
								throw new NullReferenceException();
							}
							pIVar9[8].monitor.Value = false;
							if (local_38 == null) {
								throw new NullReferenceException();
							}
							pSVar5 = (List<object>)local_38._value;
							if (pSVar5 == null) {
	label_0591b492: ;
								throw new NullReferenceException();
							}
							piVar1 = &pSVar5._version;
							*piVar1 = *piVar1 + 1;
							pSVar7 = pSVar5._items;
							if (pSVar7 == null) goto label_0591b492;
							uVar3 = pSVar5._size;
							if (uVar3 < (uint)pSVar7.Length) {
								pSVar5._size = uVar3 + 1;
								pSVar7[(int)uVar3] = pIVar9;
							}
							else {
								pSVar5.AddWithResize(pIVar9);
							}
						}
					}
					local_68.Dispose();
					pGVar13 = this._achievement;
					if (pGVar13 != null) {
						pSVar11 = pGVar13.AchievementItems;
						if (pSVar11 != null) {
							pSVar11.Copy(local_38);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60014F9")]
	[Address(RVA = "0x581B5F0", Offset = "0x581A5F0", VA = "0x581B5F0")]
	private void CacheActiveAchievements()
	{
		// Lifted from source/cpp/GameProgress/AchievementHandler.c (GameProgress.AchievementHandler$$CacheActiveAchievements): 22 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Dictionary<@object, @object> __this_00;
		AchievementContainer pGVar3;
		ListSetting<AchievementItem> pSVar4;
		StringSetting pSVar5;
		Object[] pSVar6;
		object @object;
		IntSetting pSVar7;
		IntSetting pSVar8;
		bool bVar9;
		Dictionary<string, List<AchievementItem>> __this_01;
		String pSVar10;
		String pSVar11;
		List<AchievementItem> __this_02;
		List<@object> pSVar12;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_03;
		object source;
		GameProgress_AchievementHandler___c_StaticFields pGVar13;
		Func<AchievementItem, string> __this_04;
		System_Linq_IOrderedEnumerable_TSource__o source_00;
		System_Collections_Generic_List_TSource__o __this_05;
		QuestItem pGVar14;
		MethodInfo pMVar15;
		byte[] local_a0 = new byte[16];
		QuestItem local_90;
		byte[] local_88 = new byte[8];
		QuestItem local_78;
		byte[] local_68 = new byte[8];
		ulong uStack_60;
		QuestItem local_58;
		AchievementHandler local_48;

		local_88 = (byte[])0x0;
		local_78 = null;
		local_68 = (byte[])0x0;
		uStack_60._0_4_ = 0;
		uStack_60._4_4_ = 0;
		local_58 = null;
		__this_00 = (Dictionary<@object, @object>)this._activeQuests;
		if (__this_00 != null) {
			__this_00.Clear();
			__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, List<AchievementItem>>));
			__this_01 = new Dictionary<@object, @object>();
			pGVar3 = this._achievement;
			if (((pGVar3 != null) &&(pSVar4 = pGVar3.AchievementItems, pSVar4 != null) ) && (pSVar12 = (List<@object>)pSVar4._value, local_48 = this, pSVar12 != null)) {
				local_a0.GetEnumerator(pSVar12);
				local_78 = local_90;
				local_88 = (byte[])local_a0._0_8_;
				local_a0._0_8_ = null;
				local_a0._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_88;
				if (__this_01 == null) {
					pMVar15 = MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_MoveNext;
					bVar9 = local_88.MoveNext();
					if (bVar9) {
						if (local_78 != null) {
							pSVar5 = local_78.Category;
							if (pSVar5 != null) {
								pSVar11 = pSVar5._value;
								pSVar10 = local_78.GetConditionsHash();
								String.Concat(pSVar11, pSVar10);
								throw new NullReferenceException();
							}
	label_0591bcb2: ;
							throw new NullReferenceException();
						}
	label_0591bca4: ;
						throw new NullReferenceException();
					}
				}
				else {
					while (true) {
						pMVar15 = MethodInfo_System_Collections_Generic_List_Enumerator_AchievementItem_MoveNext;
						bVar9 = local_88.MoveNext();
						pGVar14 = local_78;
						if (!(bVar9)) break;
						if (local_78 == null) goto label_0591bca4;
						pSVar5 = local_78.Category;
						if (pSVar5 == null) goto label_0591bcb2;
						pSVar11 = pSVar5._value;
						pSVar10 = local_78.GetConditionsHash();
						pSVar11 = String.Concat(pSVar11, pSVar10);
						bVar9 = __this_01.ContainsKey((object)pSVar11);
						if (!bVar9) {
							__this_02 = new List<AchievementItem>();
							__this_01.Add((object)pSVar11, (object)__this_02);
						}
						pSVar12 = (List<@object>)__this_01.get_Item((object)pSVar11);
						pMVar15 = MethodInfo_System_Collections_Generic_List_AchievementItem_Add;
						if (pSVar12 == null) {
	label_0591bc7e: ;
							throw new NullReferenceException();
						}
						piVar1 = &pSVar12._version;
						*piVar1 = *piVar1 + 1;
						pSVar6 = pSVar12._items;
						if (pSVar6 == null) goto label_0591bc7e;
						uVar2 = pSVar12._size;
						if (uVar2 < (uint)pSVar6.Length) {
							pSVar12._size = uVar2 + 1;
							pSVar6[(int)uVar2] = (object)pGVar14;
						}
						else {
							pSVar12.AddWithResize((object)pGVar14);
						}
					}
				}
				local_88.Dispose();
				if ((__this_01 != null) &&(__this_03 = __this_01.Keys, __this_03 != null)) {
					local_a0.GetEnumerator(__this_03);
					local_58 = local_90;
					local_68 = (byte[])local_a0._0_8_;
					uStack_60 = (System_Collections_Generic_List_Enumerator_object__o)local_a0._8_8_;
					do {
						bVar9 = local_68.MoveNext();
						if (!bVar9) {
							local_68.Dispose();
							return;
						}
						source = __this_01.get_Item((object)local_58);
						if ((typeof(AchievementHandler.c)._2).cctor_finished_or_no_cctor == 0) {
							pGVar13 = typeof(AchievementHandler.c).static_fields;
							__this_04 = pGVar13.__9__4_0;
						}
						else {
							pGVar13 = typeof(AchievementHandler.c).static_fields;
							__this_04 = pGVar13.__9__4_0;
						}
						if (__this_04 == null) {
							if (((typeof(AchievementHandler.c))._2).cctor_finished_or_no_cctor == 0) {
								pGVar13 = typeof(AchievementHandler.c).static_fields;
							}
							@object = (object)pGVar13.__9;
							__this_04 = new Func<AchievementItem, string>(@object, (intptr_t)MethodInfo_GameProgress_AchievementHandler_c_CacheActiveAchievements_b__4_0);
							pGVar13 = typeof(AchievementHandler.c).static_fields;
							pGVar13.__9__4_0 = __this_04;
						}
						source_00 = Enumerable.OrderBy<AchievementItem, string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TKey__o)__this_04);
						__this_05 = Enumerable.ToList<AchievementItem>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
						if (__this_05 == null) {
							throw new NullReferenceException();
						}
						local_a0.GetEnumerator((List<@object>)__this_05);
						local_78 = local_90;
						local_88 = (byte[])local_a0._0_8_;
						local_a0._0_8_ = null;
						local_a0._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_88;
						do {
							bVar9 = local_88.MoveNext() ;
							if (!bVar9) {
								pGVar14 = null;
								goto label_0591bba5;
							}
							if (local_78 == null) {
								throw new NullReferenceException();
							}
							pSVar7 = local_78.Progress;
							if (pSVar7 == null) {
								throw new NullReferenceException();
							}
							pSVar8 = local_78.Amount;
							if (pSVar8 == null) {
								throw new NullReferenceException();
							}
						} while (pSVar8._value <= pSVar7._value);
						pGVar14 = local_78;
	label_0591bba5: ;
						local_88.Dispose();
						if (pGVar14 != null) {
							if ((*(ulong)((sbyte)pGVar14 + 0x88)) == null) {
								throw new NullReferenceException();
							}
							((*(ulong)((sbyte)pGVar14 + 0x88))).Value = true;
							local_48.AddActiveQuest(pGVar14);
						}
					} while(true);
				}
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/GameProgress/AchievementHandler.c.

	// GameProgress.AchievementHandler.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AchievementHandler.c();
		AchievementHandler.c.__9 =(AchievementHandler.c)__this;
		return;
	}

	// GameProgress.AchievementHandler.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// GameProgress.AchievementHandler.<>c$$<CacheActiveAchievements>b__4_0: clean
	private String c__CacheActiveAchievements_b__4_0(AchievementItem x)
	{
		String pSVar1;

		if (x == null) {
			throw new NullReferenceException();
		}
		return pSVar1;
	}
}
