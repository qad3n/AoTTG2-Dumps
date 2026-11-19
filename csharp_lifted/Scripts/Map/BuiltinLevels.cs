// ==================== AoTTG2 cross-reference ====================
// Type: Map.BuiltinLevels
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Map/BuiltinLevels.c
// Prior real C# source (older reference): Assets/Scripts/Map/BuiltinLevels.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Settings;
using SimpleJSONFixed;

namespace Map;

[Token(Token = "0x20003E3")]
internal class BuiltinLevels
{
	[Token(Token = "0x20003E4")]
	private sealed class BuiltinExperienceDefinition
	{
		[Token(Token = "0x40013D4")]
		[FieldOffset(Offset = "0x10")]
		public string Category;

		[Token(Token = "0x40013D5")]
		[FieldOffset(Offset = "0x18")]
		public string SubCategory;

		[Token(Token = "0x40013D6")]
		[FieldOffset(Offset = "0x20")]
		public string Name;

		[Token(Token = "0x40013D7")]
		[FieldOffset(Offset = "0x28")]
		public string TemplateName;

		[Token(Token = "0x40013D8")]
		[FieldOffset(Offset = "0x30")]
		public string Preview;

		[Token(Token = "0x40013D9")]
		[FieldOffset(Offset = "0x38")]
		public bool HasScoring;

		[Token(Token = "0x40013DA")]
		[FieldOffset(Offset = "0x40")]
		public List<string> UIRules;

		[Token(Token = "0x40013DB")]
		[FieldOffset(Offset = "0x48")]
		public Dictionary<string, List<string>> Variants;

		[Token(Token = "0x60018DC")]
		[Address(RVA = "0x586E0B0", Offset = "0x586D0B0", VA = "0x586E0B0")]
		public BuiltinExperienceDefinition()
		{
			// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels.BuiltinExperienceDefinition$$.ctor): clean
			base();
			return;
		}
	}

	[Token(Token = "0x20003E8")]
	[CompilerGenerated]
	private sealed class _003CGetExperienceDefinitions_003Ed__17 : IEnumerable<BuiltinExperienceDefinition>, IEnumerable, IEnumerator<BuiltinExperienceDefinition>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40013E8")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40013E9")]
		[FieldOffset(Offset = "0x18")]
		private BuiltinExperienceDefinition _003C_003E2__current;

		[Token(Token = "0x40013EA")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40013EB")]
		[FieldOffset(Offset = "0x28")]
		private JSONNode.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x40013EC")]
		[FieldOffset(Offset = "0x70")]
		private JSONNode _003Ccategory_003E5__3;

		[Token(Token = "0x40013ED")]
		[FieldOffset(Offset = "0x78")]
		private string _003CcategoryName_003E5__4;

		[Token(Token = "0x40013EE")]
		[FieldOffset(Offset = "0x80")]
		private JSONNode.Enumerator _003C_003E7__wrap4;

		[Token(Token = "0x40013EF")]
		[FieldOffset(Offset = "0xC8")]
		private JSONNode _003CsubCategory_003E5__6;

		[Token(Token = "0x40013F0")]
		[FieldOffset(Offset = "0xD0")]
		private string _003CsubCategoryName_003E5__7;

		[Token(Token = "0x40013F1")]
		[FieldOffset(Offset = "0xD8")]
		private bool _003CexperiencePerMap_003E5__8;

		[Token(Token = "0x40013F2")]
		[FieldOffset(Offset = "0xE0")]
		private JSONNode.Enumerator _003C_003E7__wrap8;

		[Token(Token = "0x40013F3")]
		[FieldOffset(Offset = "0x128")]
		private JSONNode _003Cexperience_003E5__10;

		[Token(Token = "0x40013F4")]
		[FieldOffset(Offset = "0x130")]
		private List<string> _003Crules_003E5__11;

		[Token(Token = "0x40013F5")]
		[FieldOffset(Offset = "0x138")]
		private Dictionary<string, List<string>> _003Cvariants_003E5__12;

		[Token(Token = "0x40013F6")]
		[FieldOffset(Offset = "0x140")]
		private bool _003ChasScoring_003E5__13;

		[Token(Token = "0x40013F7")]
		[FieldOffset(Offset = "0x148")]
		private string[] _003C_003E7__wrap13;

		[Token(Token = "0x40013F8")]
		[FieldOffset(Offset = "0x150")]
		private int _003C_003E7__wrap14;

		[Token(Token = "0x170002A8")]
		private BuiltinExperienceDefinition System_002ECollections_002EGeneric_002EIEnumerator_003CMap_002EBuiltinLevels_002EBuiltinExperienceDefinition_003E_002ECurrent
		{
			[Token(Token = "0x60018ED")]
			[Address(RVA = "0x5875B10", Offset = "0x5874B10", VA = "0x5875B10", Slot = "6")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels.<GetExperienceDefinitions>d__17$$System.Collections.Generic.IEnumerator<Map.BuiltinLevels.BuiltinExperienceDefinition>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170002A9")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60018EF")]
			[Address(RVA = "0x5875B60", Offset = "0x5874B60", VA = "0x5875B60", Slot = "9")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels.<GetExperienceDefinitions>d__17$$System.Collections.IEnumerator.get_Current): clean
				return (object)this.__2__current;
			}
		}

		[Token(Token = "0x60018EA")]
		[Address(RVA = "0x5874C40", Offset = "0x5873C40", VA = "0x5874C40")]
		[DebuggerHidden]
		public _003CGetExperienceDefinitions_003Ed__17(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels.<GetExperienceDefinitions>d__17$$.ctor): clean
			int iVar1;

			base();
			this.__1__state = __1__state;
			iVar1 = Environment.CurrentManagedThreadId;
			this.__l__initialThreadId = iVar1;
			return;
		}

		[Token(Token = "0x60018EB")]
		[Address(RVA = "0x5874C70", Offset = "0x5873C70", VA = "0x5874C70", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels.<GetExperienceDefinitions>d__17$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60018EC")]
		[Address(RVA = "0x5874C80", Offset = "0x5873C80", VA = "0x5874C80", Slot = "8")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels.<GetExperienceDefinitions>d__17$$MoveNext): 69 lines keep C-only constructs
			int piVar1;
			List<string>* targetAddress;
			JSONNode* targetAddress_00;
			uint uVar2;
			int iVar3;
			String pSVar4;
			JSONNode.Enumerator pSVar5;
			JSONNode.Enumerator pSVar6;
			bool bVar7;
			JSONNode pSVar8;
			String pSVar9;
			JSONNode[] ruleSets;
			object pIVar10;
			object pIVar11;
			List<string> pSVar12;
			Dictionary<string, List<string>> pSVar13;
			List<UIRule> pSVar14;
			Func<UIRule, bool> pSVar15;
			UIRule query;
			Map_BuiltinLevels___c_StaticFields pMVar16;
			UIRule categoryQuery;
			String[] pSVar17;
			Func<string, bool> __this_00;
			System_Collections_Generic_IEnumerable_TSource__o source;
			String pSVar18;
			BuiltinLevels.BuiltinExperienceDefinition pMVar19;
			Il2CppClass klass;
			InvalidDataException __this_01;
			MethodInfo pMVar20;
			uint uVar21;
			System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o pSVar22;
			KeyValuePair<string, JSONNode> SVar23;
			ulong uStack_78;
			Dictionary<TKey, TValue> pSStack_70;
			ulong uStack_68;
			object pIStack_60;
			object pIStack_58;
			ulong uStack_50;
			List<T> pSStack_48;
			ulong uStack_40;
			JSONNode pSStack_38;

			iVar3 = this.__1__state;
			if (iVar3 == 2) {
				this.__1__state = -1;
				uVar21 = this.__7__wrap14 + 1;
				this.__7__wrap14 = uVar21;
				pSVar17 = this.__7__wrap13;
				if (pSVar17 != null) {
		label_05975795: ;
					uVar2 = (uint)pSVar17.Length;
					if ((int)uVar21 < (int)uVar2) {
						if (uVar2 <= uVar21) {
		label_05975a9b: ;
							throw new IndexOutOfRangeException();
						}
						pSVar9 = pSVar17[(int)uVar21];
						pSVar12 = this._rules_5__11;
						if ((typeof(BuiltinLevels.c)._2).cctor_finished_or_no_cctor == 0) {
							pMVar16 = typeof(BuiltinLevels.c).static_fields;
							__this_00 = pMVar16.__9__17_2;
						}
						else {
							pMVar16 = typeof(BuiltinLevels.c).static_fields;
							__this_00 = pMVar16.__9__17_2;
						}
						if (__this_00 == null) {
							if (((typeof(BuiltinLevels.c))._2).cctor_finished_or_no_cctor == 0) {
								pMVar16 = typeof(BuiltinLevels.c).static_fields;
							}
							pIVar10 = (object)pMVar16.__9;
							__this_00 = new Func<string, bool>(pIVar10, (intptr_t)MethodInfo_Map_BuiltinLevels_c_GetExperienceDefinitions_b__17_2);
							pMVar16 = typeof(BuiltinLevels.c).static_fields;
							pMVar16.__9__17_2 = __this_00;
						}
						source = Enumerable.Where<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar12, (System_Func_TSource__bool__o)__this_00);
						pSVar12 = (List<string>)Enumerable.ToList<string>(source);
						pSVar18 = String.Concat("!general.MapName=", pSVar9);
						if (pSVar12 != null) {
							piVar1 = &pSVar12._version;
							*piVar1 = *piVar1 + 1;
							pSVar17 = pSVar12._items;
							if (pSVar17 != null) {
								uVar21 = pSVar12._size;
								if (uVar21 < (uint)pSVar17.Length) {
									pSVar12._size = uVar21 + 1;
									pSVar17[(int)uVar21] = pSVar18;
								}
								else {
									pSVar12.AddWithResize((object)pSVar18);
								}
								pSVar18 = this._categoryName_5__4;
								pSVar4 = this._subCategoryName_5__7;
								pSVar8 = this._experience_5__10;
								pSVar13 = this._variants_5__12;
								bVar7 = this._hasScoring_5__13;
								pMVar19 = BuiltinLevels.CreateExperienceDefinition(pSVar18, pSVar4, pSVar9, pSVar8, pSVar12, pSVar13, bVar7);
								this.__2__current = pMVar19;
								this.__1__state = 2;
								return true;
							}
						}
					}
					else {
						this.__7__wrap13 = null;
						this._rules_5__11 = null;
						this._variants_5__12 =null;
						pSVar22 = (System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o)&this._experience_5__10;
						this._experience_5__10 = null;
						while(true) {
		label_059757fe: ;
							pSVar5 = &this.__7__wrap8;
							targetAddress_00 = &this._experience_5__10;
							while (bVar7 = pSVar5.MoveNext()) {
								SVar23 = pSVar5.Current;
								pSVar8 = ((JSONNode)SVar23);
								*targetAddress_00 = pSVar8;
								pSVar8 = *targetAddress_00;
								if (pSVar8 == null) goto label_05975a96;
								pSVar8 = pSVar8.get_Item("Name");
								pSVar9 = ((JSONNode)pSVar8);
								bVar7 = String.IsNullOrEmpty(pSVar9);
								if (!bVar7) {
									ruleSets = (JSONNode[])new JSONNode[3];
									pSVar8 = this._category_5__3;
									if ((pSVar8 == null) ||(pIVar10 = (object)pSVar8.get_Item("UIRules"), ruleSets == null)) goto label_05975a96;
									if ((pIVar10 == null) ||(pIVar11 = il2cpp_vm_Object_IsInst(pIVar10, (((ruleSets.obj).klass)._1).element_class), pIVar11 != null)) {
										if ((int)ruleSets.Length == 0) goto label_05975a9b;
										ruleSets[0] = (JSONNode)pIVar10;
										pSVar8 = this._subCategory_5__6;
										if (pSVar8 == null) goto label_05975a96;
										pIVar10 = (object)pSVar8.get_Item("UIRules");
										if ((pIVar10 == null) ||(pIVar11 = il2cpp_vm_Object_IsInst(pIVar10, (((ruleSets.obj).klass)._1).element_class), pIVar11 != null)) {
											if ((ruleSets.Length & 0xfffffffe) == 0) goto label_05975a9b;
											ruleSets[1] = (JSONNode)pIVar10;
											pSVar8 = *targetAddress_00;
											if (pSVar8 == null) goto label_05975a96;
											pIVar10 = (object)pSVar8.get_Item("UIRules");
											if ((pIVar10 == null) ||(pIVar11 = il2cpp_vm_Object_IsInst(pIVar10, (((ruleSets.obj).klass)._1).element_class), pIVar11 != null)) {
												if ((uint)ruleSets.Length < 3) goto label_05975a9b;
												ruleSets[2] = (JSONNode)pIVar10;
												pSVar12 = BuiltinLevels.ComposeUIRules(ruleSets);
												targetAddress = &this._rules_5__11;
												this._rules_5__11 = pSVar12;
												pSVar13 = PresetDefinition.ReadVariants(this._experience_5__10);
												if ((pSVar13 == null) &&(pSVar13 = PresetDefinition.ReadVariants(this._subCategory_5__6), pSVar13 == null)) {
													pSVar13 = PresetDefinition.ReadVariants(this._category_5__3);
												}
												this._variants_5__12 = pSVar13;
												pSVar8 = this._experience_5__10;
												if (pSVar8 == null) goto label_05975a96;
												bVar7 = pSVar8.HasKey("HasScoring") ;
												if (bVar7) {
													pSVar8 = *targetAddress_00;
												}
												else {
													pSVar8 = this._subCategory_5__6;
													if (pSVar8 == null) goto label_05975a96;
													bVar7 = pSVar8.HasKey("HasScoring");
													if (bVar7) {
														pSVar8 = this._subCategory_5__6;
													}
													else {
														pSVar8 = this._category_5__3;
													}
												}
												if ((pSVar8 == null) ||(pSVar8 = pSVar8.get_Item("HasScoring"), pSVar8 == null)) goto label_05975a96;
												bVar7 = pSVar8.get_AsBool();
												this._hasScoring_5__13 = bVar7;
												if (this._experiencePerMap_5__8 == false) {
													pSVar18 = this._categoryName_5__4;
													pSVar4 = this._subCategoryName_5__7;
													pSVar8 = this._experience_5__10;
													pSVar12 = this._rules_5__11;
													pSVar13 = this._variants_5__12;
													bVar7 = this._hasScoring_5__13;
													pMVar19 = BuiltinLevels.CreateExperienceDefinition(pSVar18, pSVar4, pSVar9, pSVar8, pSVar12, pSVar13, bVar7);
													this.__2__current = pMVar19;
													this.__1__state = 1;
													return true;
												}
												pSVar14 = RuleParser.Parse((IEnumerable<string>)*targetAddress, null);
												if ((typeof(BuiltinLevels.c)._2).cctor_finished_or_no_cctor == 0) {
													pMVar16 = typeof(BuiltinLevels.c).static_fields;
													pSVar15 = pMVar16.__9__17_0;
												}
												else {
													pMVar16 = typeof(BuiltinLevels.c).static_fields;
													pSVar15 = pMVar16.__9__17_0;
												}
												if (pSVar15 == null) {
													if (((typeof(BuiltinLevels.c))._2).cctor_finished_or_no_cctor == 0) {
														pMVar16 = typeof(BuiltinLevels.c).static_fields;
													}
													pIVar10 = (object)pMVar16.__9;
													pSVar15 = new Func<UIRule, bool>(pIVar10, (intptr_t)MethodInfo_Map_BuiltinLevels_c_GetExperienceDefinitions_b__17_0);
													pMVar16 = typeof(BuiltinLevels.c).static_fields;
													pMVar16.__9__17_0 = pSVar15;
												}
												query = Enumerable.FirstOrDefault<UIRule>((System_Collections_Generic_IEnumerable_TSource__o)pSVar14, (System_Func_TSource__bool__o)pSVar15);
												if (query == null) {
													pSVar9 = this._subCategoryName_5__7;
													pSVar18 = il2cpp_codegen_get_runtime_metadata(&"Experience-per-map subcategory requires a general.MapName rule: ");
													pSVar9 = String.Concat(pSVar18, pSVar9);
													klass = il2cpp_codegen_get_runtime_metadata(&typeof(InvalidDataException));
													__this_01 = (InvalidDataException)il2cpp_codegen_object_new(klass);
													__this_01 = new InvalidDataException(pSVar9);
													pMVar20 = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__17_MoveNext);
													throw (object)__this_01;
												}
												pSVar14 = RuleParser.Parse((IEnumerable<string>)*targetAddress, null);
												pMVar16 = typeof(BuiltinLevels.c).static_fields;
												pSVar15 = pMVar16.__9__17_1;
												if (pSVar15 == null) {
													if ((typeof(BuiltinLevels.c)._2).cctor_finished_or_no_cctor == 0) {
														pMVar16 = typeof(BuiltinLevels.c).static_fields;
													}
													pIVar10 = (object)pMVar16.__9;
													pSVar15 = new Func<UIRule, bool>(pIVar10, (intptr_t)MethodInfo_Map_BuiltinLevels_c_GetExperienceDefinitions_b__17_1);
													pMVar16 = typeof(BuiltinLevels.c).static_fields;
													pMVar16.__9__17_1 = pSVar15;
												}
												categoryQuery = Enumerable.FirstOrDefault<UIRule>((System_Collections_Generic_IEnumerable_TSource__o)pSVar14, (System_Func_TSource__bool__o)pSVar15);
												uVar21 = 0;
												pSVar17 = BuiltinLevels.QueryMapsNames(query, categoryQuery) ;
												this.__7__wrap13 = pSVar17;
												this.__7__wrap14 = 0;
												pSVar17 = this.__7__wrap13;
												if (pSVar17 == null) goto label_05975a96;
												goto label_05975795;
											}
										}
									}
									pIVar10 = new ArrayTypeMismatchException();
									throw pIVar10;
								}
							}
							this.__7__wrap8.m_Array._list =null;
							pSVar6 = &this.__7__wrap8;
							pSVar6.m_Array._index = 0;
							pSVar6.m_Array._version = 0;
							this.__7__wrap8.m_Object._current.value = null;
							*(ulong)&this.__7__wrap8.m_Object._getEnumeratorRetType = 0;
							pSVar6 = &this.__7__wrap8;
							pSVar6.m_Object._version = 0;
							pSVar6.m_Object._index = 0;
							this.__7__wrap8.m_Object._current.key = null;
							*(ulong)&pSVar5.fields = 0;
							this.__7__wrap8.m_Object._dictionary =null;
							this.__7__wrap8.m_Array._current = null;
							this._subCategoryName_5__7 = null;
							pSVar22 = (System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o)&this._subCategory_5__6;
							this._subCategory_5__6 = null;
							while(true) {
								pSVar5 = &this.__7__wrap4;
								bVar7 = pSVar5.MoveNext();
								if (bVar7) break;
								pSVar5 = &this.__7__wrap4;
								pSVar5.m_Array._index = 0;
								pSVar5.m_Array._version = 0;
								this.__7__wrap4.m_Array._current = null;
								*(ulong)&this.__7__wrap4.m_Object._getEnumeratorRetType = 0;
								this.__7__wrap4.m_Array._list =null;
								this.__7__wrap4.m_Object._current.key = null;
								this.__7__wrap4.m_Object._current.value = null;
								this.__7__wrap4.m_Object._dictionary =null;
								pSVar5 = &this.__7__wrap4;
								pSVar5.m_Object._version = 0;
								pSVar5.m_Object._index = 0;
								this._categoryName_5__4 = null;
								*(ulong)&this.__7__wrap4 = 0;
								pSVar22 = (System_Collections_Generic_Dictionary_Enumerator_string__JSONNode__o)&this._category_5__3;
								this._category_5__3 = null;
		label_059754fc: ;
								pSVar5 = &this.__7__wrap1;
								bVar7 = pSVar5.MoveNext();
								if (!bVar7) {
									this.__7__wrap1.m_Array._list =null;
									pSVar6 = &this.__7__wrap1;
									pSVar6.m_Array._index = 0;
									pSVar6.m_Array._version = 0;
									this.__7__wrap1.m_Object._current.value = null;
									*(ulong)&this.__7__wrap1.m_Object._getEnumeratorRetType = 0;
									pSVar6 = &this.__7__wrap1;
									pSVar6.m_Object._version = 0;
									pSVar6.m_Object._index = 0;
									this.__7__wrap1.m_Object._current.key = null;
									*(ulong)&pSVar5.fields = 0;
									this.__7__wrap1.m_Object._dictionary =null;
									this.__7__wrap1.m_Array._current = null;
									return false;
								}
								SVar23 = pSVar5.Current;
								pSVar8 = ((JSONNode)SVar23);
								this._category_5__3 = pSVar8;
								pSVar8 = this._category_5__3;
								if (pSVar8 == null) goto label_05975a96;
								pSVar8 = pSVar8.get_Item("Name");
								pSVar9 = ((JSONNode)pSVar8);
								this._categoryName_5__4 = pSVar9;
								pSVar8 = this._category_5__3;
								if ((pSVar8 == null) ||(pSVar8 = pSVar8.get_Item("SubCategories"), pSVar8 == null)) goto label_05975a96;
								uStack_78.unknown(pSVar8);
								this.__7__wrap4.m_Array._current = pSStack_38;
								this.__7__wrap4.m_Array._list = pSStack_48;
								pSVar5 = &this.__7__wrap4;
								pSVar5.m_Array._index = (undefined4)uStack_40;
								pSVar5.m_Array._version = uStack_40._4_4_;
								this.__7__wrap4.m_Object._current.value = pIStack_58;
								*(ulong)&this.__7__wrap4.m_Object._getEnumeratorRetType = uStack_50;
								pSVar5 = &this.__7__wrap4;
								pSVar5.m_Object._version = (undefined4)uStack_68;
								pSVar5.m_Object._index = uStack_68._4_4_;
								this.__7__wrap4.m_Object._current.key = pIStack_60;
								*(ulong)&this.__7__wrap4 = uStack_78;
								this.__7__wrap4.m_Object._dictionary = pSStack_70;
								pSVar22 = &this.__7__wrap4.m_Object;
							}
							SVar23 = pSVar5.Current;
							pSVar8 = ((JSONNode)SVar23);
							this._subCategory_5__6 = pSVar8;
							pSVar8 = this._subCategory_5__6;
							if (pSVar8 == null) break;
							pSVar8 = pSVar8.get_Item("Name");
							pSVar9 = ((JSONNode)pSVar8);
							this._subCategoryName_5__7 = pSVar9;
							pSVar8 = this._subCategory_5__6;
							if ((pSVar8 == null) ||(pSVar8 = pSVar8.get_Item("ExperiencePerMap"), pSVar8 == null)) break;
							bVar7 = pSVar8.get_AsBool();
							this._experiencePerMap_5__8 = bVar7;
							pSVar8 = this._subCategory_5__6;
							if ((pSVar8 == null) ||(pSVar8 = pSVar8.get_Item("Experiences"), pSVar8 == null)) break;
							uStack_78.unknown(pSVar8);
							this.__7__wrap8.m_Array._current = pSStack_38;
							this.__7__wrap8.m_Array._list = pSStack_48;
							pSVar5 = &this.__7__wrap8;
							pSVar5.m_Array._index = (undefined4)uStack_40;
							pSVar5.m_Array._version = uStack_40._4_4_;
							this.__7__wrap8.m_Object._current.value = pIStack_58;
							*(ulong)&this.__7__wrap8.m_Object._getEnumeratorRetType = uStack_50 ;
							pSVar5 = &this.__7__wrap8;
							pSVar5.m_Object._version = (undefined4)uStack_68;
							pSVar5.m_Object._index = uStack_68._4_4_;
							this.__7__wrap8.m_Object._current.key = pIStack_60;
							*(ulong)&this.__7__wrap8 = uStack_78;
							this.__7__wrap8.m_Object._dictionary = pSStack_70;
							pSVar22 = &this.__7__wrap8.m_Object;
						}
					}
				}
			}
			else {
				if (iVar3 == 1) {
					this.__1__state = -1;
					goto label_059757fe;
				}
				if (iVar3 != 0) {
					return false;
				}
				this.__1__state = -1;
				pSVar8 = BuiltinLevels._info;
				bVar7 = (pSVar8 == null);
				if (bVar7) {
					return false;
				}
				pSVar8 = BuiltinLevels._info;
				if (pSVar8 != null) {
					bVar7 = pSVar8.HasKey("Experiences");
					if (!bVar7) {
						return false;
					}
					pSVar8 = BuiltinLevels._info;
					if ((pSVar8 != null) &&(pSVar8 = pSVar8.get_Item("Experiences"), pSVar8 != null)) {
						uStack_78.unknown(pSVar8);
						this.__7__wrap1.m_Array._current = pSStack_38;
						this.__7__wrap1.m_Array._list = pSStack_48;
						pSVar5 = &this.__7__wrap1;
						pSVar5.m_Array._index = (undefined4)uStack_40;
						pSVar5.m_Array._version = uStack_40._4_4_;
						this.__7__wrap1.m_Object._current.value = pIStack_58;
						*(ulong)&this.__7__wrap1.m_Object._getEnumeratorRetType = uStack_50;
						pSVar5 = &this.__7__wrap1;
						pSVar5.m_Object._version = (undefined4)uStack_68;
						pSVar5.m_Object._index = uStack_68._4_4_;
						this.__7__wrap1.m_Object._current.key = pIStack_60;
						*(ulong)&this.__7__wrap1 = uStack_78;
						this.__7__wrap1.m_Object._dictionary = pSStack_70;
						pSVar22 = &this.__7__wrap1.m_Object;
						goto label_059754fc;
					}
				}
			}
		label_05975a96: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x60018EE")]
		[Address(RVA = "0x5875B20", Offset = "0x5874B20", VA = "0x5875B20", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels.<GetExperienceDefinitions>d__17$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Map_BuiltinLevels_GetExperienceDefinitions_d__17_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}

		[Token(Token = "0x60018F0")]
		[Address(RVA = "0x5875B70", Offset = "0x5874B70", VA = "0x5875B70", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<BuiltinExperienceDefinition> System_002ECollections_002EGeneric_002EIEnumerable_003CMap_002EBuiltinLevels_002EBuiltinExperienceDefinition_003E_002EGetEnumerator()
		{
			// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels.<GetExperienceDefinitions>d__17$$System.Collections.Generic.IEnumerable<Map.BuiltinLevels.BuiltinExperienceDefinition>.GetEnumerator): clean
			int iVar1;
			int iVar2;
			BuiltinLevels.d__17<GetExperienceDefinitions> __this_00;

			if ((this.__1__state == -2) &&(iVar1 = this.__l__initialThreadId, iVar2 = Environment.CurrentManagedThreadId, iVar1 == iVar2)) {
				this.__1__state = 0;
				return (IEnumerator<BuiltinLevels.BuiltinExperienceDefinition>)this;
			}
			__this_00 = new BuiltinLevels.d__17<GetExperienceDefinitions>();
			__this_00.__1__state = 0;
			iVar2 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar2;
			return (IEnumerator<BuiltinLevels.BuiltinExperienceDefinition>)__this_00;
		}

		[Token(Token = "0x60018F1")]
		[Address(RVA = "0x5875BF0", Offset = "0x5874BF0", VA = "0x5875BF0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels.<GetExperienceDefinitions>d__17$$System.Collections.IEnumerable.GetEnumerator): clean
			int iVar1;
			int iVar2;
			BuiltinLevels.d__17<GetExperienceDefinitions> __this_00;

			if ((this.__1__state == -2) &&(iVar1 = this.__l__initialThreadId, iVar2 = Environment.CurrentManagedThreadId, iVar1 == iVar2)) {
				this.__1__state = 0;
				return (IEnumerator)this;
			}
			__this_00 = new BuiltinLevels.d__17<GetExperienceDefinitions>();
			__this_00.__1__state = 0;
			iVar2 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar2;
			return (IEnumerator)__this_00;
		}
	}

	[Token(Token = "0x40013CB")]
	[FieldOffset(Offset = "0x0")]
	private static JSONNode _info;

	[Token(Token = "0x40013CC")]
	[FieldOffset(Offset = "0x8")]
	private static List<Experience> _experiences;

	[Token(Token = "0x40013CD")]
	[FieldOffset(Offset = "0x10")]
	public static string CustomMapFolderPath;

	[Token(Token = "0x40013CE")]
	[FieldOffset(Offset = "0x18")]
	public static string CustomMapAutosaveFolderPath;

	[Token(Token = "0x40013CF")]
	[FieldOffset(Offset = "0x20")]
	public static string CustomMapBackupsFolderPath;

	[Token(Token = "0x40013D0")]
	[FieldOffset(Offset = "0x28")]
	public static string CustomLogicFolderPath;

	[Token(Token = "0x40013D1")]
	[FieldOffset(Offset = "0x30")]
	public static string CustomAddonFolderPath;

	[Token(Token = "0x40013D2")]
	[FieldOffset(Offset = "0x38")]
	public static string UseMapLogic;

	[Token(Token = "0x40013D3")]
	private const int MaxCustomFileNameLength = 50;

	[Token(Token = "0x60018A8")]
	[Address(RVA = "0x586CA30", Offset = "0x586BA30", VA = "0x586CA30")]
	public static void Init()
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$Init): 1 lines keep C-only constructs
		byte bVar1;
		bool bVar2;
		Object __this;
		String pSVar3;
		JSONNode pSVar4;

		pSVar4 = BuiltinLevels._info;
		bVar2 = (pSVar4 != null);
		if (bVar2) {
			return;
		}
		pSVar3 = BuiltinLevels.CustomMapFolderPath;
		FolderPaths.TryCreateDirectory(pSVar3);
		FolderPaths.TryCreateDirectory(BuiltinLevels.CustomLogicFolderPath);
		FolderPaths.TryCreateDirectory(BuiltinLevels.CustomMapAutosaveFolderPath);
		FolderPaths.TryCreateDirectory(BuiltinLevels.CustomMapBackupsFolderPath);
		FolderPaths.TryCreateDirectory(BuiltinLevels.CustomAddonFolderPath);
		pSVar3 = ResourcePaths.Info;
		__this = ResourceManager.LoadAsset(pSVar3, "BuiltinMapInfo", false, false);
		if (__this == null) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(TextAsset)._2).typeHierarchyDepth;
		if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(TextAsset))) {
			throw new InvalidCastException();
		}
		pSVar3 = __this.text;
		pSVar4 = JSON.Parse(pSVar3);
		BuiltinLevels._info = pSVar4;
		return;
	}

	[Token(Token = "0x60018A9")]
	[Address(RVA = "0x586CC50", Offset = "0x586BC50", VA = "0x586CC50")]
	public static PresetDefinition LoadExperience(string name)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$LoadExperience): clean
		uint uVar1;
		BuiltinLevels.BuiltinExperienceDefinition pMVar2;
		PresetDefinition __this;

		if (Il2CppMethodInitialized_07545991 == false) {
			Il2CppMethodInitialized_07545991 = true;
			uVar1 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pMVar2 = BuiltinLevels.FindExperience(name);
		}
		else {
			pMVar2 = BuiltinLevels.FindExperience(name);
		}
		if (pMVar2 == null) {
			__this = null;
		}
		else {
			__this = new PresetDefinition();
			if (__this == null) {
				throw new NullReferenceException();
			}
			__this.Category = pMVar2.Category;
			__this.SubCategory = pMVar2.SubCategory;
			__this.Name = pMVar2.Name;
			__this.UIRules = pMVar2.UIRules;
			__this.Variants = pMVar2.Variants;
		}
		return __this;
	}

	[Token(Token = "0x60018AA")]
	[Address(RVA = "0x586CED0", Offset = "0x586BED0", VA = "0x586CED0")]
	public static List<Experience> GetExperiences()
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$GetExperiences): 14 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		BuiltinLevels.d__17<GetExperienceDefinitions> pMVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		Il2CppClass pIVar5;
		String subCategory;
		Il2CppClass name;
		Il2CppClass preview;
		String templateName;
		Experience[] pMVar6;
		bool bVar9;
		BuiltinLevels.d__17<GetExperienceDefinitions> __this;
		VirtualInvokeData pVVar10;
		object pIVar11;
		Experience __this_00;
		List<Experience> __this_01;
		ulong uVar12;
		List<Experience> collection;
		long lVar13;
		object local_58;
		long local_50;
		List<Experience> local_48;
		byte local_38;

		local_58 = null;
		if ((typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor == 0) {
			collection = BuiltinLevels._experiences;
		}
		else {
			collection = BuiltinLevels._experiences;
		}
		if (collection == null) {
			local_48 = new List<Experience>();
			__this = new BuiltinLevels.d__17<GetExperienceDefinitions>(-2);
			if (__this == null) {
				throw new NullReferenceException();
			}
			pMVar3 = __this.klass;
			uVar12 = (ulong)(pMVar3._2).interface_offsets_count;
			local_58 = __this.Dispose();
			local_38 = (byte)&local_58;
			if (local_58 != null) {
				local_50 = 0;
				local_38 = (byte)&local_58;
				do {
					pIVar11 = local_58;
					pIVar5 = local_58.klass;
					uVar12 = (ulong)(pIVar5._2).interface_offsets_count;
					bVar9 = pIVar11.Dispose();
					pIVar11 = local_58;
					if (!bVar9) {
						if (local_58 == null) goto label_0596d326;
						pIVar5 = local_58.klass;
						uVar12 = (ulong)(pIVar5._2).interface_offsets_count;
						if (uVar12 == 0) goto label_0596d2ff;
						pIVar4 = (pIVar5._1).interfaceOffsets;
						lVar13 = 0;
						goto label_0596d2f0;
					}
					if (local_58 == null) {
						throw new NullReferenceException();
					}
					pIVar5 = local_58.klass;
					uVar12 = (ulong)(pIVar5._2).interface_offsets_count;
					pIVar11 = pIVar11.Dispose();
					if (pIVar11 == null) {
						throw new NullReferenceException();
					}
					pIVar5 = pIVar11[1].klass;
					subCategory = pIVar11[1].monitor;
					name = pIVar11[2].klass;
					preview = pIVar11[3].klass;
					bVar9 = *(bool)&pIVar11[3].monitor;
					templateName = pIVar11[2].monitor;
					__this_00 = new Experience((String)pIVar5, subCategory, (String)name, (String)preview, bVar9, templateName);
					if (local_48 == null) {
	label_0596d3b8: ;
						throw new NullReferenceException();
					}
					piVar1 = &local_48._version;
					*piVar1 = *piVar1 + 1;
					pMVar6 = local_48._items;
					if (pMVar6 == null) goto label_0596d3b8;
					uVar2 = local_48._size;
					if (uVar2 < (uint)pMVar6.Length) {
						local_48._size = uVar2 + 1;
						pMVar6[(int)uVar2] = __this_00;
					}
					else {
						local_48.AddWithResize((object)__this_00);
					}
				} while (local_58 != null);
			}
			throw new NullReferenceException();
		}
		if (((typeof(BuiltinLevels))._2).cctor_finished_or_no_cctor != 0) goto label_0596d37f;
		goto label_0596d374;
		while (true) {
			lVar13 = lVar13 + 0x10;
			if (!(uVar12 * 0x10 != lVar13)) break;
	label_0596d2f0: ;
			if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar13) == typeof(IDisposable)) {
				pVVar10 = pIVar5.vtable + *(int)((long)&pIVar4.offset + lVar13);
				goto label_0596d31d;
			}
		}
	label_0596d2ff: ;
	label_0596d31d: ;
		pIVar11.Dispose();
	label_0596d326: ;
		if (local_50 != 0) {
			throw;
		}
		BuiltinLevels._experiences = local_48;
	label_0596d374: ;
		collection = BuiltinLevels._experiences;
	label_0596d37f: ;
		__this_01 = new List<Experience>((IEnumerable<T>)collection);
		return __this_01;
	}

	[Token(Token = "0x60018AB")]
	[Address(RVA = "0x586D480", Offset = "0x586C480", VA = "0x586D480")]
	public static bool HasExperienceScoring(string category, string subCategory, string name)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$HasExperienceScoring): 7 lines keep C-only constructs
		uint uVar1;
		List<Experience> pSVar2;
		bool bVar3;
		BuiltinLevels.c__DisplayClass12_0 __this;
		Func<Experience, bool> __this_00;
		Il2CppClass klass;

		__this = new BuiltinLevels.c__DisplayClass12_0();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.category = category;
		__this.subCategory = subCategory;
		__this.name = name;
		if ((typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor == 0) {
			pSVar2 = BuiltinLevels._experiences;
			klass = typeof(BuiltinLevels);
		}
		else {
			pSVar2 = BuiltinLevels._experiences;
			klass = typeof(BuiltinLevels);
		}
		typeof(BuiltinLevels) = (BuiltinLevels)klass;
		if (pSVar2 == null) {
			BuiltinLevels.GetExperiences();
			uVar1 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (klass._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar2 = BuiltinLevels._experiences;
		__this_00 = new Func<Experience, bool>((object)__this, (intptr_t)MethodInfo_Map_BuiltinLevels_c__DisplayClass12_0_HasExperienceScoring_b__0);
		bVar3 = Enumerable.Any<Experience>((System_Collections_Generic_IEnumerable_TSource__o)pSVar2, (System_Func_TSource__bool__o)__this_00);
		return bVar3;
	}

	[Token(Token = "0x60018AC")]
	[Address(RVA = "0x586D620", Offset = "0x586C620", VA = "0x586D620")]
	public static void ResolveExperiencePreviews(IEnumerable<Experience> experiences)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$ResolveExperiencePreviews): 10 lines keep C-only constructs
		IEnumerable<Experience> pSVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		Il2CppClass pIVar3;
		sbyte cVar4;
		bool bVar5;
		VirtualInvokeData pVVar6;
		object pIVar7;
		Experience experience;
		String pSVar8;
		ulong uVar9;
		String* targetAddress;
		long lVar10;
		object local_40;
		object* local_30;

		if (experiences == null) {
			return;
		}
		pSVar1 = experiences.klass;
		uVar9 = (ulong)(pSVar1._2).interface_offsets_count;
		pIVar7 = experiences.Dispose();
		local_30 = &local_40;
		do {
			local_40 = pIVar7;
			if (pIVar7 == null) {
				throw new NullReferenceException();
			}
			pIVar3 = pIVar7.klass;
			uVar9 = (ulong)(pIVar3._2).interface_offsets_count;
			cVar4 = pIVar7.Dispose();
			pIVar7 = local_40;
			if (cVar4 == false) {
				if (local_40 == null) {
					return;
				}
				pIVar3 = local_40.klass;
				uVar9 = (ulong)(pIVar3._2).interface_offsets_count;
				if (uVar9 == 0) goto label_0596d8ef;
				pIVar2 = (pIVar3._1).interfaceOffsets;
				lVar10 = 0;
				break;
			}
			if (local_40 == null) {
				throw new NullReferenceException();
			}
			pIVar3 = local_40.klass;
			uVar9 = (ulong)(pIVar3._2).interface_offsets_count;
			experience = (Experience)pIVar7.Dispose();
			pIVar7 = local_40;
			if (experience != null) {
				bVar5 = String.IsNullOrEmpty(experience.Preview);
				pIVar7 = local_40;
				if (bVar5) {
					pSVar8 = BuiltinLevels.ResolveExperiencePreview(experience);
					targetAddress = &experience.Preview;
					*targetAddress = pSVar8;
					pIVar7 = local_40;
				}
			}
		} while(true);
		while (true) {
			lVar10 = lVar10 + 0x10;
			if (!(uVar9 * 0x10 != lVar10)) break;
			if (*(IDisposable*)((long)&pIVar2.interfaceType + lVar10) == typeof(IDisposable)) {
				pVVar6 = pIVar3.vtable + *(int)((long)&pIVar2.offset + lVar10);
				goto label_0596d90d;
			}
		}
	label_0596d8ef: ;
	label_0596d90d: ;
		pIVar7.Dispose();
		return;
	}

	[Token(Token = "0x60018AD")]
	[Address(RVA = "0x586D950", Offset = "0x586C950", VA = "0x586D950")]
	private static string ResolveExperiencePreview(Experience experience)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$ResolveExperiencePreview): 19 lines keep C-only constructs
		uint uVar1;
		object pIVar2;
		MethodInfo pMVar3;
		Object pUVar4;
		PresetDefinition __this;
		UIRule pSVar5;
		String[] pSVar6;
		String pSVar7;
		Func<string, string> __this_00;
		System_Collections_Generic_IEnumerable_TResult__o source;
		Map_BuiltinLevels___c_StaticFields pMVar8;
		Func<string, bool> __this_01;
		System_Collections_Generic_IEnumerable_TSource__o pSVar9;
		System_Collections_Generic_List_TSource__o __this_02;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		MethodInfo extraout_RDX_03;
		UIRule query;

		if (experience == null) goto label_0596dd61;
		pMVar3 = (MethodInfo)String.Concat("Data/ExperiencePreview/", experience.Name, "Preview") ;
		pSVar7 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pUVar4 = ResourceManager.LoadAsset(pSVar7, (String)pMVar3, false, false);
		if ((pUVar4 != null) &&((Texture2D)pUVar4.klass == typeof(Texture2D))) {
			return (String)pMVar3;
		}
		pSVar7 = experience.Name;
		__this = BuiltinLevels.LoadExperience(pSVar7);
		pMVar3 = extraout_RDX;
		query = null;
		if ((__this == null) ||(pSVar5 = __this.MapRule, pMVar3 = extraout_RDX_00, pSVar5 == null)) {
	label_0596db79: ;
			if ((typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor == 0) {
				pMVar3 = extraout_RDX_01;
				if (Il2CppMethodInitialized_0754599c == false) goto label_0596dd33;
	label_0596db97: ;
				uVar1 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_0754599c != false) goto label_0596db97;
	label_0596dd33: ;
				Il2CppMethodInitialized_0754599c = true;
				uVar1 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
				pMVar3 = extraout_RDX_02;
			}
			if (uVar1 == 0) {
				pMVar3 = extraout_RDX_03;
			}
			pSVar6 = BuiltinLevels.QueryMapsNames(query, null);
		}
		else {
			if ((pSVar5.DisableEditing == false) || (pSVar5.DefaultValue == null)) {
				query = pSVar5;
				goto label_0596db79;
			}
			pSVar6 = (String[])new string[1];
			pIVar2 = pSVar5.DefaultValue;
			if ((pIVar2 == null) ||(pSVar7 = (String)(*pIVar2.klass.vtable[3].methodPtr)(pIVar2,pIVar2.klass.vtable[3].method), pSVar6 == null)) goto label_0596dd61;
			if ((int)pSVar6.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pSVar6[0] = pSVar7;
		}
		__this_00 = new Func<string, string>(null, (intptr_t)MethodInfo_Map_BuiltinLevels_ResolveMapPreviewPath);
		source = Enumerable.Select<string, string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar6, (System_Func_TSource__TResult__o)__this_00);
		if ((typeof(BuiltinLevels.c)._2).cctor_finished_or_no_cctor == 0) {
			pMVar8 = typeof(BuiltinLevels.c).static_fields;
			__this_01 = pMVar8.__9__14_0;
		}
		else {
			pMVar8 = typeof(BuiltinLevels.c).static_fields;
			__this_01 = pMVar8.__9__14_0;
		}
		if (__this_01 == null) {
			if (((typeof(BuiltinLevels.c))._2).cctor_finished_or_no_cctor == 0) {
				pMVar8 = typeof(BuiltinLevels.c).static_fields;
			}
			pIVar2 = (object)pMVar8.__9;
			__this_01 = new Func<string, bool>(pIVar2, (intptr_t)MethodInfo_Map_BuiltinLevels_c_ResolveExperiencePreview_b__14_0);
			pMVar8 = typeof(BuiltinLevels.c).static_fields;
			pMVar8.__9__14_0 = __this_01;
		}
		pSVar9 = Enumerable.Where<string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_01);
		pSVar9 = Enumerable.Take<string>(pSVar9, 4);
		__this_02 = Enumerable.ToList<string>(pSVar9);
		if (__this_02 != null) {
			if (__this_02._size == 0) {
				return experience.Preview;
			}
			pSVar6 = (String[])__this_02.ToArray();
			pSVar7 = String.Join("|", pSVar6);
			return pSVar7;
		}
	label_0596dd61: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60018AE")]
	[Address(RVA = "0x586DDE0", Offset = "0x586CDE0", VA = "0x586DDE0")]
	private static string ResolveMapPreviewPath(string mapName)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$ResolveMapPreviewPath): 1 lines keep C-only constructs
		String path;
		String pSVar1;
		Object pUVar2;

		pSVar1 = String.Concat("Previews/", mapName, "Preview");
		path = ResourcePaths.BuiltinMaps;
		pUVar2 = ResourceManager.LoadAsset(path, pSVar1, false, false);
		if ((pUVar2 == null) ||((Texture2D)pUVar2.klass != typeof(Texture2D))) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		pSVar1 = String.Concat(ResourcePaths.BuiltinMaps, "/", pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x60018AF")]
	[Address(RVA = "0x586CD70", Offset = "0x586BD70", VA = "0x586CD70")]
	private static BuiltinExperienceDefinition FindExperience(string name)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$FindExperience): 2 lines keep C-only constructs
		bool bVar1;
		BuiltinLevels.c__DisplayClass16_0 __this;
		BuiltinLevels.d__17<GetExperienceDefinitions> __this_00;
		Func<BuiltinLevels.BuiltinExperienceDefinition, bool> __this_01;
		BuiltinLevels.BuiltinExperienceDefinition pMVar2;

		__this = new BuiltinLevels.c__DisplayClass16_0();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.name = name;
		bVar1 = String.IsNullOrEmpty(__this.name);
		if (bVar1) {
			return null;
		}
		__this_00 = new BuiltinLevels.d__17<GetExperienceDefinitions>(-2);
		__this_01 = new Func<BuiltinLevels.BuiltinExperienceDefinition, bool>((object)__this, (intptr_t)MethodInfo_Map_BuiltinLevels_c__DisplayClass16_0_FindExperience_b__0);
		pMVar2 = (BuiltinLevels.BuiltinExperienceDefinition)Enumerable.FirstOrDefault<BuiltinLevels.BuiltinExperienceDefinition>((System_Collections_Generic_IEnumerable_TSource__o)__this_00, (System_Func_TSource__bool__o)__this_01);
		return pMVar2;
	}

	[Token(Token = "0x60018B0")]
	[Address(RVA = "0x586D430", Offset = "0x586C430", VA = "0x586D430")]
	[IteratorStateMachine(typeof(_003CGetExperienceDefinitions_003Ed__17))]
	private static IEnumerable<BuiltinExperienceDefinition> GetExperienceDefinitions()
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$GetExperienceDefinitions): 1 lines keep C-only constructs
		BuiltinLevels.d__17<GetExperienceDefinitions> __this;

		__this = il2cpp_codegen_object_new(typeof(BuiltinLevels.d__17<GetExperienceDefinitions>)) ;
		__this = new BuiltinLevels.d__17<GetExperienceDefinitions>(-2);
		return (IEnumerable<BuiltinLevels.BuiltinExperienceDefinition>)__this;
	}

	[Token(Token = "0x60018B1")]
	[Address(RVA = "0x586DF20", Offset = "0x586CF20", VA = "0x586DF20")]
	private static BuiltinExperienceDefinition CreateExperienceDefinition(string category, string subCategory, string name, JSONNode experience, List<string> rules, Dictionary<string, List<string>> variants, bool hasScoring)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$CreateExperienceDefinition): clean
		BuiltinLevels.BuiltinExperienceDefinition __this;
		JSONNode pSVar1;
		String pSVar2;

		__this = new BuiltinLevels.BuiltinExperienceDefinition();
		if (__this != null) {
			__this.Category = category;
			__this.SubCategory = subCategory;
			__this.Name = name;
			if (experience != null) {
				pSVar1 = experience.get_Item("Name");
				pSVar2 = ((JSONNode)pSVar1);
				__this.TemplateName = pSVar2;
				pSVar1 = experience.get_Item("Preview");
				pSVar2 = ((JSONNode)pSVar1);
				__this.Preview = pSVar2;
				__this.HasScoring = hasScoring;
				__this.UIRules = rules;
				__this.Variants = variants;
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60018B2")]
	[Address(RVA = "0x586E0C0", Offset = "0x586D0C0", VA = "0x586E0C0")]
	private static List<string> ComposeUIRules(params JSONNode[] ruleSets)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$ComposeUIRules): 13 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		OrdinalIgnoreCaseComparer comparer;
		String key;
		String[] pSVar3;
		bool bVar5;
		uint uVar6;
		List<string> pSVar7;
		Dictionary<string, int> __this;
		JSONNode pSVar8;
		Il2CppClass item;
		object pIVar9;
		List<UIRule> __this_00;
		UIRule pSVar10;
		Map_BuiltinLevels___c_StaticFields pMVar11;
		Func<string, bool> __this_01;
		System_Collections_Generic_IEnumerable_TSource__o source;
		uint uVar12;
		ulong uVar13;
		KeyValuePair<string, JSONNode> aKeyValue;
		int local_dc;
		JSONNode[] local_d8;
		ulong local_d0;
		JSONNode.Enumerator local_c8;
		JSONNode.Enumerator local_78;

		local_c8.m_Array._list = null;
		local_c8.m_Array._index = 0;
		local_c8.m_Array._version = 0;
		local_c8.m_Object._current.value = null;
		local_c8.m_Object._getEnumeratorRetType = 0;
		local_c8.m_Object._36_4_ = 0;
		local_c8.m_Object._version = 0;
		local_c8.m_Object._index = 0;
		local_c8.m_Object._current.key = null;
		local_c8.type = 0;
		local_c8._4_4_ = 0;
		local_c8.m_Object._dictionary = null;
		local_c8.m_Array._current = null;
		local_dc = 0;
		pSVar7 = new List<string>();
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		comparer = StringComparer.s_ordinalIgnoreCase;
		__this = il2cpp_codegen_object_new(typeof(Dictionary<string, int>)) ;
		__this = new Dictionary<object, int>((System_Collections_Generic_IEqualityComparer_TKey__o)comparer);
		if (ruleSets == null) {
	label_0596e5f6: ;
			throw new NullReferenceException();
		}
		uVar6 = (uint)ruleSets.Length;
		if (0 < (int)uVar6) {
			uVar13 = 0;
			local_d8 = ruleSets;
			do {
				if (uVar6 <= (uint)uVar13) {
	label_0596e5fb: ;
					throw new IndexOutOfRangeException();
				}
				pSVar8 = local_d8[(int)(uint)uVar13];
				local_d0 = uVar13;
				if (pSVar8 == null) goto label_0596e5f6;
				local_78.unknown(pSVar8);
				local_c8.m_Array._current = local_78.m_Array._current;
				local_c8.m_Array._list = local_78.m_Array._list;
				local_c8.m_Array._index = local_78.m_Array._index;
				local_c8.m_Array._version = local_78.m_Array._version;
				local_c8.m_Object._current.value = local_78.m_Object._current.value;
				local_c8.m_Object._getEnumeratorRetType = local_78.m_Object._getEnumeratorRetType;
				local_c8.m_Object._36_4_ = local_78.m_Object._36_4_;
				local_c8.m_Object._version = local_78.m_Object._version;
				local_c8.m_Object._index = local_78.m_Object._index;
				local_c8.m_Object._current.key = local_78.m_Object._current.key;
				local_c8.type = local_78.type;
				local_c8._4_4_ = local_78._4_4_;
				local_c8.m_Object._dictionary = local_78.m_Object._dictionary;
				while (bVar5 = local_c8.MoveNext()) {
					aKeyValue = local_c8.Current;
					pSVar8 = ((JSONNode)aKeyValue);
					item = (Il2CppClass)((JSONNode)pSVar8);
					pIVar9 = new string[1];
					if (pIVar9 == null) goto label_0596e5f6;
					if (*(int)&pIVar9[1].monitor == 0) goto label_0596e5fb;
					pIVar9[2].klass = item;
					__this_00 = RuleParser.Parse((IEnumerable<string>)pIVar9, null);
					if (__this_00 == null) goto label_0596e5f6;
					if (__this_00._size != 0) {
						pSVar10 = __this_00.get_Item(0);
						if ((pSVar10 == null) ||(__this == null)) goto label_0596e5f6;
						key = pSVar10.SettingId;
						bVar5 = __this.TryGetValue((object)key, ref local_dc);
						if (bVar5) {
							if (pSVar7 == null) goto label_0596e5f6;
							pSVar7.set_Item(local_dc, null);
						}
						else if (pSVar7 == null) goto label_0596e5f6;
						__this.set_Item((object)key, pSVar7._size);
						piVar1 = &pSVar7._version;
						*piVar1 = *piVar1 + 1;
						pSVar3 = pSVar7._items;
						if (pSVar3 == null) goto label_0596e5f6;
						uVar6 = pSVar7._size;
						if (uVar6 < (uint)pSVar3.Length) {
							pSVar7._size = uVar6 + 1;
							pSVar3[(int)uVar6] = (String)item;
						}
						else {
							pSVar7.AddWithResize((object)item);
						}
					}
				}
				uVar12 = (int)local_d0 + 1;
				uVar13 = (ulong)uVar12;
				uVar6 = (uint)local_d8.Length;
			} while ((int)uVar12 < (int)uVar6);
		}
		if ((typeof(BuiltinLevels.c)._2).cctor_finished_or_no_cctor == 0) {
			pMVar11 = typeof(BuiltinLevels.c).static_fields;
			__this_01 = pMVar11.__9__19_0;
		}
		else {
			pMVar11 = typeof(BuiltinLevels.c).static_fields;
			__this_01 = pMVar11.__9__19_0;
		}
		if (__this_01 == null) {
			if (((typeof(BuiltinLevels.c))._2).cctor_finished_or_no_cctor == 0) {
				pMVar11 = typeof(BuiltinLevels.c).static_fields;
			}
			pIVar9 = (object)pMVar11.__9;
			__this_01 = new Func<string, bool>(pIVar9, (intptr_t)MethodInfo_Map_BuiltinLevels_c_ComposeUIRules_b__19_0);
			pMVar11 = typeof(BuiltinLevels.c).static_fields;
			pMVar11.__9__19_0 = __this_01;
		}
		source = Enumerable.Where<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar7, (System_Func_TSource__bool__o)__this_01);
		pSVar7 = (List<string>)Enumerable.ToList<string>(source);
		return pSVar7;
	}

	[Token(Token = "0x60018B3")]
	[Address(RVA = "0x586E600", Offset = "0x586D600", VA = "0x586E600")]
	public static string FindMapCategory(string mapName)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$FindMapCategory): 6 lines keep C-only constructs
		bool bVar1;
		JSONNode pSVar2;
		JSONNode pSVar3;
		String pSVar4;
		KeyValuePair<string, JSONNode> SVar5;
		JSONNode.Enumerator local_118;
		JSONNode.Enumerator local_c8;
		JSONNode.Enumerator local_78;

		local_c8.m_Array._list = null;
		local_c8.m_Array._index = 0;
		local_c8.m_Array._version = 0;
		local_c8.m_Object._current.value = null;
		local_c8.m_Object._getEnumeratorRetType = 0;
		local_c8.m_Object._36_4_ = 0;
		local_c8.m_Object._version = 0;
		local_c8.m_Object._index = 0;
		local_c8.m_Object._current.key = null;
		local_c8.type = 0;
		local_c8._4_4_ = 0;
		local_c8.m_Object._dictionary = null;
		local_c8.m_Array._current = null;
		local_118.m_Array._list = null;
		local_118.m_Array._index = 0;
		local_118.m_Array._version = 0;
		local_118.m_Object._current.value = null;
		local_118.m_Object._getEnumeratorRetType = 0;
		local_118.m_Object._36_4_ = 0;
		local_118.m_Object._version = 0;
		local_118.m_Object._index = 0;
		local_118.m_Object._current.key = null;
		local_118.type = 0;
		local_118._4_4_ = 0;
		local_118.m_Object._dictionary = null;
		local_118.m_Array._current = null;
		pSVar2 = BuiltinLevels._info;
		if ((pSVar2 == null) ||(pSVar2 = pSVar2.get_Item("MapCategories"), pSVar2 == null)) {
	label_0596e8f1: ;
			throw new NullReferenceException();
		}
		local_c8.unknown(pSVar2);
		bVar1 = local_c8.MoveNext();
		if (bVar1) {
			do {
				SVar5 = local_c8.Current;
				pSVar2 = ((JSONNode)SVar5);
				if ((pSVar2 == null) ||(pSVar3 = pSVar2.get_Item("Maps"), pSVar3 == null)) goto label_0596e8f1;
				local_78.unknown(pSVar3);
				local_118.m_Array._current = local_78.m_Array._current;
				local_118.m_Array._list = local_78.m_Array._list;
				local_118.m_Array._index = local_78.m_Array._index;
				local_118.m_Array._version = local_78.m_Array._version;
				local_118.m_Object._current.value = local_78.m_Object._current.value;
				local_118.m_Object._getEnumeratorRetType = local_78.m_Object._getEnumeratorRetType;
				local_118.m_Object._36_4_ = local_78.m_Object._36_4_;
				local_118.m_Object._version = local_78.m_Object._version;
				local_118.m_Object._index = local_78.m_Object._index;
				local_118.m_Object._current.key = local_78.m_Object._current.key;
				local_118.type = local_78.type;
				local_118._4_4_ = local_78._4_4_;
				local_118.m_Object._dictionary = local_78.m_Object._dictionary;
				while (bVar1 = local_118.MoveNext()) {
					SVar5 = local_118.Current;
					pSVar3 = ((JSONNode)SVar5);
					if (pSVar3 == null) goto label_0596e8f1;
					pSVar3 = pSVar3.get_Item("Name");
					bVar1 = (pSVar3 == (object)mapName);
					if (bVar1) {
						pSVar2 = pSVar2.get_Item("Name");
						return pSVar4;
					}
				}
				bVar1 = local_c8.MoveNext();
			} while (bVar1);
		}
		return "General";
	}

	[Token(Token = "0x60018B4")]
	[Address(RVA = "0x586DD70", Offset = "0x586CD70", VA = "0x586DD70")]
	public static string[] QueryMapsNames(UIRule query)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$QueryMapsNames): clean
		uint uVar1;
		String[] pSVar2;

		if (Il2CppMethodInitialized_0754599c == false) {
			Il2CppMethodInitialized_0754599c = true;
			uVar1 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = BuiltinLevels.QueryMapsNames(query, null);
			return pSVar2;
		}
		pSVar2 = BuiltinLevels.QueryMapsNames(query, null);
		return pSVar2;
	}

	[Token(Token = "0x60018B5")]
	[Address(RVA = "0x586E900", Offset = "0x586D900", VA = "0x586E900")]
	public static string[] QueryMapsNames(UIRule query, UIRule categoryQuery)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$QueryMapsNames): 11 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		OrdinalIgnoreCaseComparer comparer;
		List<string> pSVar4;
		object pIVar5;
		bool bVar7;
		List<string> __this;
		HashSet<string> __this_00;
		JSONNode pSVar8;
		JSONNode pSVar9;
		String pSVar10;
		String b;
		String[] pSVar11;
		KeyValuePair<string, JSONNode> SVar12;
		JSONNode.Enumerator local_118;
		JSONNode.Enumerator local_c8;
		JSONNode.Enumerator local_78;

		local_c8.m_Array._list = null;
		local_c8.m_Array._index = 0;
		local_c8.m_Array._version = 0;
		local_c8.m_Object._current.value = null;
		local_c8.m_Object._getEnumeratorRetType = 0;
		local_c8.m_Object._36_4_ = 0;
		local_c8.m_Object._version = 0;
		local_c8.m_Object._index = 0;
		local_c8.m_Object._current.key = null;
		local_c8.type = 0;
		local_c8._4_4_ = 0;
		local_c8.m_Object._dictionary = null;
		local_c8.m_Array._current = null;
		local_118.m_Array._list = null;
		local_118.m_Array._index = 0;
		local_118.m_Array._version = 0;
		local_118.m_Object._current.value = null;
		local_118.m_Object._getEnumeratorRetType = 0;
		local_118.m_Object._36_4_ = 0;
		local_118.m_Object._version = 0;
		local_118.m_Object._index = 0;
		local_118.m_Object._current.key = null;
		local_118.type = 0;
		local_118._4_4_ = 0;
		local_118.m_Object._dictionary = null;
		local_118.m_Array._current = null;
		__this = new List<string>();
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		comparer = StringComparer.s_ordinalIgnoreCase;
		__this_00 = new HashSet<string>((IEqualityComparer<T>)comparer);
		pSVar8 = BuiltinLevels._info;
		if ((pSVar8 == null) ||(pSVar8 = pSVar8.get_Item("MapCategories"), pSVar8 == null)) {
	label_0596f014: ;
			throw new NullReferenceException();
		}
		local_78.unknown(pSVar8);
		local_c8.m_Array._current = local_78.m_Array._current;
		local_c8.m_Array._list = local_78.m_Array._list;
		local_c8.m_Array._index = local_78.m_Array._index;
		local_c8.m_Array._version = local_78.m_Array._version;
		local_c8.m_Object._current.value = local_78.m_Object._current.value;
		local_c8.m_Object._getEnumeratorRetType = local_78.m_Object._getEnumeratorRetType;
		local_c8.m_Object._36_4_ = local_78.m_Object._36_4_;
		local_c8.m_Object._version = local_78.m_Object._version;
		local_c8.m_Object._index = local_78.m_Object._index;
		local_c8.m_Object._current.key = local_78.m_Object._current.key;
		local_c8.type = local_78.type;
		local_c8._4_4_ = local_78._4_4_;
		local_c8.m_Object._dictionary = local_78.m_Object._dictionary;
	label_0596eb80: ;
		if (categoryQuery != null) goto label_0596eb90;
		bVar7 = local_c8.MoveNext();
		if (bVar7) {
			SVar12 = local_c8.Current;
			pSVar8 = ((JSONNode)SVar12);
			if (pSVar8 != null) {
				pSVar9 = pSVar8.get_Item("Name");
				((JSONNode)pSVar9);
				goto label_0596ed28;
			}
		}
		else {
	label_0596efa9: ;
			if (__this != null) {
				pSVar11 = (String[])__this.ToArray();
				return pSVar11;
			}
		}
		goto label_0596f014;
	label_0596eb90: ;
		do {
			bVar7 = local_c8.MoveNext();
			if (!bVar7) goto label_0596efa9;
			SVar12 = local_c8.Current;
			pSVar8 = ((JSONNode)SVar12);
			if (pSVar8 == null) goto label_0596f014;
			pSVar9 = pSVar8.get_Item("Name");
			pSVar10 = ((JSONNode)pSVar9);
			pSVar4 = categoryQuery.AllowedValues;
			if ((pSVar4 == null) || (pSVar4._size < 1)) {
				pIVar5 = categoryQuery.DefaultValue;
				if (pIVar5 == null) {
					b = null;
				}
				else {
					if (pIVar5 == null) goto label_0596f014;
					b = (String)(*pIVar5.klass.vtable[3].methodPtr)(pIVar5,pIVar5.klass.vtable[3].method);
				}
				bVar7 = String.Equals(pSVar10, b, 5);
				if (!bVar7) goto label_0596eb80;
				break;
			}
			bVar7 = UIRule.MatchesAllowedValues(categoryQuery, pSVar10);
		} while (!bVar7);
	label_0596ed28: ;
		pSVar8 = pSVar8.get_Item("Maps");
		if (pSVar8 == null) goto label_0596f014;
		local_78.unknown(pSVar8);
		local_118.m_Array._current = local_78.m_Array._current;
		local_118.m_Array._list = local_78.m_Array._list;
		local_118.m_Array._index = local_78.m_Array._index;
		local_118.m_Array._version = local_78.m_Array._version;
		local_118.m_Object._current.value = local_78.m_Object._current.value;
		local_118.m_Object._getEnumeratorRetType = local_78.m_Object._getEnumeratorRetType;
		local_118.m_Object._36_4_ = local_78.m_Object._36_4_;
		local_118.m_Object._version = local_78.m_Object._version;
		local_118.m_Object._index = local_78.m_Object._index;
		local_118.m_Object._current.key = local_78.m_Object._current.key;
		local_118.type = local_78.type;
		local_118._4_4_ = local_78._4_4_;
		local_118.m_Object._dictionary = local_78.m_Object._dictionary;
		bVar7 = local_118.MoveNext();
		if (bVar7) {
			do {
				SVar12 = local_118.Current;
				pSVar8 = ((JSONNode)SVar12);
				if (((query == null) ||(pSVar4 = query.AllowedValues, pSVar4 == null) ) || (pSVar4._size == 0)) {
					if (pSVar8 == null) goto label_0596f014;
	label_0596eeb9: ;
					pSVar9 = pSVar8.get_Item("Name");
					pSVar10 = ((JSONNode)pSVar9);
					if (__this_00 == null) goto label_0596f014;
					bVar7 = __this_00.Add((object)pSVar10);
					if (bVar7) {
						pSVar8 = pSVar8.get_Item("Name");
						pSVar10 = ((JSONNode)pSVar8);
						if (__this == null) goto label_0596f014;
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pSVar11 = __this._items;
						if (pSVar11 == null) goto label_0596f014;
						uVar3 = __this._size;
						if (uVar3 < (uint)pSVar11.Length) {
							__this._size = uVar3 + 1;
							pSVar11[(int)uVar3] = pSVar10;
						}
						else {
							__this.AddWithResize((object)pSVar10);
						}
					}
				}
				else {
					if (pSVar8 == null) goto label_0596f014;
					pSVar9 = pSVar8.get_Item("Name");
					pSVar10 = ((JSONNode)pSVar9);
					bVar7 = UIRule.MatchesAllowedValues(query, pSVar10);
					if (bVar7) goto label_0596eeb9;
				}
				bVar7 = local_118.MoveNext();
			} while (bVar7);
		}
		goto label_0596eb80;
	}

	[Token(Token = "0x60018B6")]
	[Address(RVA = "0x586F020", Offset = "0x586E020", VA = "0x586F020")]
	public static string[] QueryModeNames(UIRule query)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$QueryModeNames): 3 lines keep C-only constructs
		List<string> pSVar1;
		bool bVar2;
		HashSet<string> __this;
		JSONNode pSVar3;
		JSONNode d;
		String pSVar4;
		String[] pSVar5;
		KeyValuePair<string, JSONNode> SVar6;
		JSONNode.Enumerator local_c8;
		JSONNode.Enumerator local_78;

		__this = new HashSet<string>();
		pSVar3 = BuiltinLevels._info;
		if ((pSVar3 != null) &&(pSVar3 = pSVar3.get_Item("GameModes"), pSVar3 != null)) {
			local_78.unknown(pSVar3);
			local_c8.m_Array._current = local_78.m_Array._current;
			local_c8.m_Array._list = local_78.m_Array._list;
			local_c8.m_Array._index = local_78.m_Array._index;
			local_c8.m_Array._version = local_78.m_Array._version;
			local_c8.m_Object._current.value = local_78.m_Object._current.value;
			local_c8.m_Object._getEnumeratorRetType = local_78.m_Object._getEnumeratorRetType;
			local_c8.m_Object._36_4_ = local_78.m_Object._36_4_;
			local_c8.m_Object._version = local_78.m_Object._version;
			local_c8.m_Object._index = local_78.m_Object._index;
			local_c8.m_Object._current.key = local_78.m_Object._current.key;
			local_c8.type = local_78.type;
			local_c8._4_4_ = local_78._4_4_;
			local_c8.m_Object._dictionary = local_78.m_Object._dictionary;
			bVar2 = local_c8.MoveNext();
			if (bVar2) {
				if (query == null) {
					if (__this == null) {
						SVar6 = local_c8.Current;
						pSVar3 = ((JSONNode)SVar6);
						if (pSVar3 != null) {
							pSVar3 = pSVar3.get_Item("Name");
							((JSONNode)pSVar3);
						}
						goto label_0596f47d;
					}
					do {
						SVar6 = local_c8.Current;
						pSVar3 = ((JSONNode)SVar6);
						if (pSVar3 == null) goto label_0596f47d;
						pSVar3 = pSVar3.get_Item("Name");
						pSVar4 = ((JSONNode)pSVar3);
						__this.Add((object)pSVar4);
						bVar2 = local_c8.MoveNext();
					} while (bVar2);
				}
				else {
					do {
						SVar6 = local_c8.Current;
						pSVar3 = ((JSONNode)SVar6);
						pSVar1 = query.AllowedValues;
						if ((pSVar1 == null) || (pSVar1._size == 0)) {
							if (pSVar3 == null) goto label_0596f47d;
	label_0596f299: ;
							pSVar3 = pSVar3.get_Item("Name");
							pSVar4 = ((JSONNode)pSVar3);
							if (__this == null) goto label_0596f47d;
							__this.Add((object)pSVar4);
						}
						else {
							if (pSVar3 == null) goto label_0596f47d;
							d = pSVar3.get_Item("Name");
							pSVar4 = ((JSONNode)d);
							bVar2 = UIRule.MatchesAllowedValues(query, pSVar4);
							if (bVar2) goto label_0596f299;
						}
						bVar2 = local_c8.MoveNext();
					} while (bVar2);
				}
			}
			if (__this != null) {
				__this.Add((Il2CppObject *)"None");
				__this.Add((object)BuiltinLevels.UseMapLogic);
				pSVar5 = (String[])Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)__this);
				return pSVar5;
			}
		}
	label_0596f47d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60018B7")]
	[Address(RVA = "0x586F490", Offset = "0x586E490", VA = "0x586F490")]
	public static string LoadMap(string category, string name)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$LoadMap): clean
		uint uVar1;
		bool bVar2;
		String pSVar3;
		String local_20;

		local_20 = null;
		bVar2 = (category == "Custom");
		uVar1 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
		if (bVar2) {
			if (uVar1 == 0) {
			}
			pSVar3 = String.Concat(BuiltinLevels.CustomMapFolderPath, "/", name, ".txt");
			bVar2 = File.Exists(pSVar3);
			if (bVar2) {
				pSVar3 = File.ReadAllText(pSVar3);
				return pSVar3;
			}
		}
		else {
			if (uVar1 == 0) {
			}
			bVar2 = BuiltinLevels.TryLoadBuiltinMap(category, name, ref local_20);
			if (bVar2) {
				return local_20;
			}
		}
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	[Token(Token = "0x60018B8")]
	[Address(RVA = "0x586F5B0", Offset = "0x586E5B0", VA = "0x586F5B0")]
	public static bool TryLoadBuiltinMap(string category, string name, out string source)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$TryLoadBuiltinMap): 1 lines keep C-only constructs
		bool bVar1;
		JSONNode pSVar2;
		String name_00;
		String pSVar3;

		*source = (String)**(ulong*)(g_data_07556758 + 0xb8);
		if ((typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor == 0) {
		}
		pSVar2 = BuiltinLevels.GetMap(category, name);
		bVar1 = (pSVar2 == null);
		if (bVar1) {
			pSVar3 = "Unknown builtin map: ";
		}
		else {
			if (pSVar2 == null) {
				throw new NullReferenceException();
			}
			bVar1 = pSVar2.HasKey("Category");
			if (bVar1) {
				pSVar2 = pSVar2.get_Item("Category");
				category = ((JSONNode)pSVar2);
			}
			pSVar3 = ResourcePaths.BuiltinMaps;
			name_00 = String.Concat(category, "/", name, "Map");
			pSVar3 = ResourceManager.TryLoadText(pSVar3, name_00);
			*source = pSVar3;
			bVar1 = String.IsNullOrWhiteSpace(*source);
			if (!bVar1) {
				return true;
			}
			pSVar3 = "Failed to load builtin map: ";
		}
		pSVar3 = String.Concat(pSVar3, category, "/", name);
		Debug.LogError((object)pSVar3);
		return false;
	}

	[Token(Token = "0x60018B9")]
	[Address(RVA = "0x586FB10", Offset = "0x586EB10", VA = "0x586FB10")]
	public static string LoadAutosave(string name)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$LoadAutosave): clean
		bool bVar1;
		String pSVar2;

		pSVar2 = String.Concat(BuiltinLevels.CustomMapAutosaveFolderPath, "/", name, ".txt");
		bVar1 = File.Exists(pSVar2);
		if (bVar1) {
			pSVar2 = File.ReadAllText(pSVar2);
			return pSVar2;
		}
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	[Token(Token = "0x60018BA")]
	[Address(RVA = "0x586FBE0", Offset = "0x586EBE0", VA = "0x586FBE0")]
	public static string LoadLogic(string name)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$LoadLogic): 2 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		JSONNode pSVar3;
		String name_00;
		String pSVar4;
		KeyValuePair<string, JSONNode> aKeyValue;
		JSONNode.Enumerator local_78;

		local_78.m_Array._list = null;
		local_78.m_Array._index = 0;
		local_78.m_Array._version = 0;
		local_78.m_Object._current.value = null;
		local_78.m_Object._getEnumeratorRetType = 0;
		local_78.m_Object._36_4_ = 0;
		local_78.m_Object._version = 0;
		local_78.m_Object._index = 0;
		local_78.m_Object._current.key = null;
		local_78.type = 0;
		local_78._4_4_ = 0;
		local_78.m_Object._dictionary = null;
		local_78.m_Array._current = null;
		bVar2 = (name == "");
		if (bVar2) {
	label_0596fcc0: ;
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		bVar2 = (name == BuiltinLevels.UseMapLogic);
		uVar1 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
		if (bVar2) {
			if (uVar1 == 0) {
			}
			return BuiltinLevels.UseMapLogic;
		}
		if (uVar1 == 0) {
		}
		pSVar3 = BuiltinLevels._info;
		if (pSVar3 != null) {
			pSVar3 = pSVar3.get_Item("GameModes");
			if (pSVar3 != null) {
				local_78.unknown(pSVar3);
				while (bVar2 = local_78.MoveNext()) {
					aKeyValue = local_78.Current;
					pSVar3 = ((JSONNode)aKeyValue);
					if (pSVar3 == null) goto label_0596ff38;
					pSVar3 = pSVar3.get_Item("Name");
					bVar2 = (pSVar3 == (object)name);
					if (bVar2) {
						pSVar4 = ResourcePaths.Modes;
						name_00 = String.Concat(name, "Logic");
						pSVar4 = ResourceManager.TryLoadText(pSVar4, name_00);
						return pSVar4;
					}
				}
				pSVar4 = String.Concat(BuiltinLevels.CustomLogicFolderPath, "/", name, ".cl");
				bVar2 = File.Exists(pSVar4);
				if (!bVar2) {
					pSVar4 = String.Concat(BuiltinLevels.CustomLogicFolderPath, "/", name, ".txt");
					bVar2 = File.Exists(pSVar4);
					if (!bVar2) goto label_0596fcc0;
				}
				pSVar4 = File.ReadAllText(pSVar4);
				return pSVar4;
			}
		}
	label_0596ff38: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60018BB")]
	[Address(RVA = "0x586FF40", Offset = "0x586EF40", VA = "0x586FF40")]
	public static bool IsLogicBuiltin(string name)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$IsLogicBuiltin): 2 lines keep C-only constructs
		bool bVar1;
		bool bVar2;
		JSONNode pSVar3;
		KeyValuePair<string, JSONNode> aKeyValue;
		JSONNode.Enumerator local_78;

		local_78.m_Array._list = null;
		local_78.m_Array._index = 0;
		local_78.m_Array._version = 0;
		local_78.m_Object._current.value = null;
		local_78.m_Object._getEnumeratorRetType = 0;
		local_78.m_Object._36_4_ = 0;
		local_78.m_Object._version = 0;
		local_78.m_Object._index = 0;
		local_78.m_Object._current.key = null;
		local_78.type = 0;
		local_78._4_4_ = 0;
		local_78.m_Object._dictionary = null;
		local_78.m_Array._current = null;
		bVar1 = (name == BuiltinLevels.UseMapLogic);
		if (bVar1) {
			return true;
		}
		pSVar3 = BuiltinLevels._info;
		if (pSVar3 != null) {
			pSVar3 = pSVar3.get_Item("GameModes");
			if (pSVar3 != null) {
				local_78.unknown(pSVar3);
				while(true) {
					bVar1 = local_78.MoveNext();
					if (!bVar1) {
						return bVar1;
					}
					aKeyValue = local_78.Current;
					pSVar3 = ((JSONNode)aKeyValue);
					if (pSVar3 == null) break;
					pSVar3 = pSVar3.get_Item("Name");
					bVar2 = (pSVar3 == (object)name);
					if (bVar2) {
						return bVar1;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60018BC")]
	[Address(RVA = "0x58700F0", Offset = "0x586F0F0", VA = "0x58700F0")]
	public static string[] GetMapCategories()
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$GetMapCategories): 6 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		bool bVar4;
		List<string> __this;
		JSONNode pSVar5;
		String pSVar6;
		String[] pSVar7;
		KeyValuePair<string, JSONNode> SVar8;
		JSONNode.Enumerator local_78;

		local_78.m_Array._list = null;
		local_78.m_Array._index = 0;
		local_78.m_Array._version = 0;
		local_78.m_Object._current.value = null;
		local_78.m_Object._getEnumeratorRetType = 0;
		local_78.m_Object._36_4_ = 0;
		local_78.m_Object._version = 0;
		local_78.m_Object._index = 0;
		local_78.m_Object._current.key = null;
		local_78.type = 0;
		local_78._4_4_ = 0;
		local_78.m_Object._dictionary = null;
		local_78.m_Array._current = null;
		__this = new List<string>();
		pSVar5 = BuiltinLevels._info;
		if (pSVar5 != null) {
			pSVar5 = pSVar5.get_Item("MapCategories");
			if (pSVar5 != null) {
				local_78.unknown(pSVar5);
				bVar4 = local_78.MoveNext();
				if (bVar4) {
					if (__this == null) {
						SVar8 = local_78.Current;
						pSVar5 = ((JSONNode)SVar8);
						if (pSVar5 != null) {
							pSVar5 = pSVar5.get_Item("Name");
							((JSONNode)pSVar5);
							throw new NullReferenceException();
						}
						goto label_059703f2;
					}
					do {
						SVar8 = local_78.Current;
						pSVar5 = ((JSONNode)SVar8);
						if (pSVar5 == null) goto label_059703f2;
						pSVar5 = pSVar5.get_Item("Name");
						pSVar6 = ((JSONNode)pSVar5);
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pSVar7 = __this._items;
						if (pSVar7 == null) goto label_059703f2;
						uVar2 = __this._size;
						if (uVar2 < (uint)pSVar7.Length) {
							__this._size = uVar2 + 1;
							pSVar7[(int)uVar2] = pSVar6;
						}
						else {
							__this.AddWithResize((object)pSVar6);
						}
						bVar4 = local_78.MoveNext();
					} while (bVar4);
				}
				else if (__this == null) goto label_059703f2;
				pSVar6 = "Custom";
				piVar1 = &__this._version;
				*piVar1 = *piVar1 + 1;
				pSVar7 = __this._items;
				if (pSVar7 != null) {
					uVar2 = __this._size;
					if (uVar2 < (uint)pSVar7.Length) {
						__this._size = uVar2 + 1;
						pSVar7[(int)uVar2] = pSVar6;
					}
					else {
						__this.AddWithResize((object)pSVar6);
					}
					pSVar7 = (String[])__this.ToArray();
					return pSVar7;
				}
			}
		}
	label_059703f2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60018BD")]
	[Address(RVA = "0x5870430", Offset = "0x586F430", VA = "0x5870430")]
	public static string[] GetMapNames(string category)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$GetMapNames): 8 lines keep C-only constructs
		int piVar1;
		bool bVar2;
		uint uVar3;
		String[] pSVar4;
		String pSVar5;
		List<string> __this;
		JSONNode pSVar6;
		JSONNode a;
		uint uVar7;
		MethodInfo pMVar8;
		KeyValuePair<string, JSONNode> SVar9;
		JSONNode.Enumerator local_118;
		JSONNode.Enumerator local_c8;
		JSONNode.Enumerator local_78;

		local_c8.m_Array._list = null;
		local_c8.m_Array._index = 0;
		local_c8.m_Array._version = 0;
		local_c8.m_Object._current.value = null;
		local_c8.m_Object._getEnumeratorRetType = 0;
		local_c8.m_Object._36_4_ = 0;
		local_c8.m_Object._version = 0;
		local_c8.m_Object._index = 0;
		local_c8.m_Object._current.key = null;
		local_c8.type = 0;
		local_c8._4_4_ = 0;
		local_c8.m_Object._dictionary = null;
		local_c8.m_Array._current = null;
		local_118.m_Array._list = null;
		local_118.m_Array._index = 0;
		local_118.m_Array._version = 0;
		local_118.m_Object._current.value = null;
		local_118.m_Object._getEnumeratorRetType = 0;
		local_118.m_Object._36_4_ = 0;
		local_118.m_Object._version = 0;
		local_118.m_Object._index = 0;
		local_118.m_Object._current.key = null;
		local_118.type = 0;
		local_118._4_4_ = 0;
		local_118.m_Object._dictionary = null;
		local_118.m_Array._current = null;
		pMVar8 = (MethodInfo *)"Custom";
		bVar2 = (category == "Custom");
		if (bVar2) {
			pSVar4 = BuiltinLevels.GetTxtFiles(BuiltinLevels.CustomMapFolderPath);
			if (pSVar4 != null) {
				uVar3 = (uint)pSVar4.Length;
				if (0 < (int)uVar3) {
					uVar7 = 0;
					do {
						if (uVar3 <= uVar7) {
	label_059708dc: ;
							throw new IndexOutOfRangeException();
						}
						if (pSVar4[(int)uVar7] == null) goto label_05970916;
						pSVar5 = (pSVar4[(int)uVar7]).Replace(".txt", "");
						if ((uint)pSVar4.Length <= uVar7) goto label_059708dc;
						pSVar4[(int)uVar7] = pSVar5;
						uVar7 = uVar7 + 1;
						uVar3 = (uint)pSVar4.Length;
					} while ((int)uVar7 < (int)uVar3);
				}
				return pSVar4;
			}
		}
		else {
			__this = new List<string>();
			pSVar6 = BuiltinLevels._info;
			if ((pSVar6 != null) &&(pSVar6 = pSVar6.get_Item("MapCategories"), pSVar6 != null)) {
				local_c8.unknown(pSVar6);
				bVar2 = local_c8.MoveNext();
				if (bVar2) {
					do {
						SVar9 = local_c8.Current;
						pSVar6 = ((JSONNode)SVar9);
						if (pSVar6 == null) goto label_05970916;
						a = pSVar6.get_Item("Name");
						bVar2 = (a == (object)category);
						if (bVar2) {
							pSVar6 = pSVar6.get_Item("Maps");
							if (pSVar6 == null) goto label_05970916;
							local_78.unknown(pSVar6);
							local_118.m_Array._current = local_78.m_Array._current;
							local_118.m_Array._list = local_78.m_Array._list;
							local_118.m_Array._index = local_78.m_Array._index;
							local_118.m_Array._version = local_78.m_Array._version;
							local_118.m_Object._current.value = local_78.m_Object._current.value;
							local_118.m_Object._getEnumeratorRetType = local_78.m_Object._getEnumeratorRetType;
							local_118.m_Object._36_4_ = local_78.m_Object._36_4_;
							local_118.m_Object._version = local_78.m_Object._version;
							local_118.m_Object._index = local_78.m_Object._index;
							local_118.m_Object._current.key = local_78.m_Object._current.key;
							local_118.type = local_78.type;
							local_118._4_4_ = local_78._4_4_;
							local_118.m_Object._dictionary = local_78.m_Object._dictionary;
							bVar2 = local_118.MoveNext();
							if (bVar2) {
								if (__this == null) {
									SVar9 = local_118.Current;
									pSVar6 = ((JSONNode)SVar9);
									if (pSVar6 != null) {
										pSVar6 = pSVar6.get_Item("Name") ;
										((JSONNode)pSVar6);
										throw new NullReferenceException();
									}
									goto label_05970916;
								}
								do {
									SVar9 = local_118.Current;
									pSVar6 = ((JSONNode)SVar9);
									if (pSVar6 == null) goto label_05970916;
									pSVar6 = pSVar6.get_Item("Name");
									pSVar5 = ((JSONNode)pSVar6);
									piVar1 = &__this._version;
									*piVar1 = *piVar1 + 1;
									pSVar4 = __this._items;
									if (pSVar4 == null) goto label_05970916;
									uVar3 = __this._size;
									if (uVar3 < (uint)pSVar4.Length) {
										__this._size = uVar3 + 1;
										pSVar4[(int)uVar3] = pSVar5;
									}
									else {
										__this.AddWithResize((object)pSVar5);
									}
									bVar2 = local_118.MoveNext();
								} while (bVar2);
							}
						}
						bVar2 = local_c8.MoveNext();
					} while (bVar2);
				}
				if (__this != null) {
					pSVar4 = (String[])__this.ToArray();
					return pSVar4;
				}
			}
		}
	label_05970916: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60018BE")]
	[Address(RVA = "0x5870AD0", Offset = "0x586FAD0", VA = "0x5870AD0")]
	public static string[] GetAutosaveNames()
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$GetAutosaveNames): clean
		uint uVar1;
		String[] pSVar2;
		String pSVar3;
		uint uVar4;

		pSVar2 = BuiltinLevels.GetTxtFiles(BuiltinLevels.CustomMapAutosaveFolderPath);
		if (pSVar2 == null) {
	label_05970bb8: ;
			throw new NullReferenceException();
		}
		uVar1 = (uint)pSVar2.Length;
		if (0 < (int)uVar1) {
			uVar4 = 0;
			do {
				if (uVar1 <= uVar4) {
	label_05970bb3: ;
					throw new IndexOutOfRangeException();
				}
				if (pSVar2[(int)uVar4] == null) goto label_05970bb8;
				pSVar3 = (pSVar2[(int)uVar4]).Replace(".txt", "");
				if ((uint)pSVar2.Length <= uVar4) goto label_05970bb3;
				pSVar2[(int)uVar4] = pSVar3;
				uVar4 = uVar4 + 1;
				uVar1 = (uint)pSVar2.Length;
			} while ((int)uVar4 < (int)uVar1);
		}
		return pSVar2;
	}

	[Token(Token = "0x60018BF")]
	[Address(RVA = "0x586A800", Offset = "0x5869800", VA = "0x586A800")]
	public static string LoadAddon(string name)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$LoadAddon): clean
		bool bVar1;
		String name_00;
		String pSVar2;
		MethodInfo method_00;

		method_00 = (MethodInfo *)"";
		bVar1 = (name == "");
		if (!bVar1) {
			if ((typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor == 0) {
				bVar1 = BuiltinLevels.IsAddonBuiltin(name);
				if (bVar1) goto label_0596a8c2;
			}
			else {
				bVar1 = BuiltinLevels.IsAddonBuiltin(name);
				if (bVar1) {
	label_0596a8c2: ;
					pSVar2 = ResourcePaths.Addons;
					name_00 = String.Concat(name, "Logic");
					pSVar2 = ResourceManager.TryLoadText(pSVar2, name_00);
					return pSVar2;
				}
			}
			pSVar2 = String.Concat(BuiltinLevels.CustomAddonFolderPath, "/", name, ".cl");
			bVar1 = File.Exists(pSVar2);
			if (bVar1) {
				pSVar2 = File.ReadAllText(pSVar2);
				return pSVar2;
			}
		}
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	[Token(Token = "0x60018C0")]
	[Address(RVA = "0x5870BC0", Offset = "0x586FBC0", VA = "0x5870BC0")]
	public static string[] GetAddonNames()
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$GetAddonNames): 4 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		String pSVar3;
		String[] pSVar4;
		bool bVar6;
		List<string> __this;
		HashSet<string> __this_00;
		String[] pSVar7;
		ulong uVar8;
		int iVar9;
		ulong uVar10;

		__this = new List<string>();
		__this_00 = new HashSet<string>();
		pSVar7 = BuiltinLevels.GetBuiltinAddons();
		if (pSVar7 != null) {
			if (__this_00 == null) {
				if (0 < (int)pSVar7.Length) goto label_05970f26;
			}
			else {
				iVar9 = (int)pSVar7.Length;
				uVar8 = pSVar7.Length & 0xffffffff;
				if (__this == null) {
					if (0 < iVar9) {
						uVar10 = 0;
						do {
							if (uVar8 <= uVar10) goto label_05970f21;
							bVar6 = __this_00.Add((object)pSVar7[uVar10]) ;
							if (bVar6) goto label_05970f26;
							uVar10 = uVar10 + 1;
							uVar2 = (uint)pSVar7.Length;
							uVar8 = (ulong)uVar2;
						} while ((long)uVar10 < (long)(int)uVar2);
					}
				}
				else if (0 < iVar9) {
					uVar10 = 0;
					do {
						if (uVar8 <= uVar10) goto label_05970f21;
						pSVar3 = pSVar7[uVar10];
						bVar6 = __this_00.Add((object)pSVar3);
						if (bVar6) {
							piVar1 = &__this._version;
							*piVar1 = *piVar1 + 1;
							pSVar4 = __this._items;
							if (pSVar4 == null) goto label_05970f26;
							uVar2 = __this._size;
							if (uVar2 < (uint)pSVar4.Length) {
								__this._size = uVar2 + 1;
								pSVar4[(int)uVar2] = pSVar3;
							}
							else {
								__this.AddWithResize((object)pSVar3);
							}
						}
						uVar10 = uVar10 + 1;
						uVar2 = (uint)pSVar7.Length;
						uVar8 = (ulong)uVar2;
					} while ((long)uVar10 < (long)(int)uVar2);
				}
			}
			pSVar7 = BuiltinLevels.GetCustomAddons();
			if (pSVar7 == null) goto label_05970f26;
			if (__this_00 == null) {
				if (0 < (int)pSVar7.Length) goto label_05970f26;
			}
			else {
				iVar9 = (int)pSVar7.Length;
				uVar8 = pSVar7.Length & 0xffffffff;
				if (__this == null) {
					if (iVar9 < 1) goto label_05970f26;
					uVar10 = 0;
					do {
						if (uVar8 <= uVar10) goto label_05970f21;
						bVar6 = __this_00.Add((object)pSVar7[uVar10]);
						if (bVar6) goto label_05970f26;
						uVar10 = uVar10 + 1;
						uVar2 = (uint)pSVar7.Length;
						uVar8 = (ulong)uVar2;
					} while ((long)uVar10 < (long)(int)uVar2);
				}
				else {
					if (iVar9 < 1) goto label_05970f01;
					uVar10 = 0;
					do {
						if (uVar8 <= uVar10) {
	label_05970f21: ;
							throw new IndexOutOfRangeException();
						}
						pSVar3 = pSVar7[uVar10];
						bVar6 = __this_00.Add((object)pSVar3);
						if (bVar6) {
							piVar1 = &__this._version;
							*piVar1 = *piVar1 + 1;
							pSVar4 = __this._items;
							if (pSVar4 == null) goto label_05970f26;
							uVar2 = __this._size;
							if (uVar2 < (uint)pSVar4.Length) {
								__this._size = uVar2 + 1;
								pSVar4[(int)uVar2] = pSVar3;
							}
							else {
								__this.AddWithResize((object)pSVar3);
							}
						}
						uVar10 = uVar10 + 1;
						uVar2 = (uint)pSVar7.Length;
						uVar8 = (ulong)uVar2;
					} while ((long)uVar10 < (long)(int)uVar2);
				}
			}
			if (__this != null) {
	label_05970f01: ;
				pSVar7 = (String[])__this.ToArray();
				return pSVar7;
			}
		}
	label_05970f26: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60018C1")]
	[Address(RVA = "0x5870F30", Offset = "0x586FF30", VA = "0x5870F30")]
	public static string[] GetBuiltinAddons()
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$GetBuiltinAddons): 4 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		bool bVar4;
		List<string> __this;
		JSONNode pSVar5;
		String pSVar6;
		String[] pSVar7;
		KeyValuePair<string, JSONNode> SVar8;
		JSONNode.Enumerator local_78;

		local_78.m_Array._list = null;
		local_78.m_Array._index = 0;
		local_78.m_Array._version = 0;
		local_78.m_Object._current.value = null;
		local_78.m_Object._getEnumeratorRetType = 0;
		local_78.m_Object._36_4_ = 0;
		local_78.m_Object._version = 0;
		local_78.m_Object._index = 0;
		local_78.m_Object._current.key = null;
		local_78.type = 0;
		local_78._4_4_ = 0;
		local_78.m_Object._dictionary = null;
		local_78.m_Array._current = null;
		__this = new List<string>();
		pSVar5 = BuiltinLevels._info;
		bVar4 = (pSVar5 == null);
		if (!bVar4) {
			pSVar5 = BuiltinLevels._info;
			if (pSVar5 == null) goto label_059712fd;
			bVar4 = pSVar5.HasKey("Addons");
			if (bVar4) {
				pSVar5 = BuiltinLevels._info;
				if (pSVar5 != null) {
					pSVar5 = pSVar5.get_Item("Addons");
					if (pSVar5 != null) {
						local_78.unknown(pSVar5);
						bVar4 = local_78.MoveNext();
						if (bVar4) {
							if (__this == null) {
								do {
									SVar8 = local_78.Current;
									pSVar5 = ((JSONNode)SVar8);
									if ((pSVar5 == null) ||(pSVar5 = pSVar5.get_Item("Name"), pSVar5 == null)) goto label_059712fd;
									pSVar6 = pSVar5.get_Value();
									bVar4 = String.IsNullOrEmpty(pSVar6);
									if (!bVar4) goto label_059712fd;
									bVar4 = local_78.MoveNext();
								} while (bVar4);
							}
							else {
								do {
									SVar8 = local_78.Current;
									pSVar5 = ((JSONNode)SVar8);
									if ((pSVar5 == null) ||(pSVar5 = pSVar5.get_Item("Name"), pSVar5 == null)) goto label_059712fd;
									pSVar6 = pSVar5.get_Value();
									bVar4 = String.IsNullOrEmpty(pSVar6);
									if (!bVar4) {
										piVar1 = &__this._version;
										*piVar1 = *piVar1 + 1;
										pSVar7 = __this._items;
										if (pSVar7 == null) goto label_059712fd;
										uVar2 = __this._size;
										if (uVar2 < (uint)pSVar7.Length) {
											__this._size = uVar2 + 1;
											pSVar7[(int)uVar2] = pSVar6;
										}
										else {
											__this.AddWithResize((object)pSVar6);
										}
									}
									bVar4 = local_78.MoveNext();
								} while (bVar4);
							}
						}
						if (__this != null) {
							pSVar7 = (String[])__this.ToArray();
							return pSVar7;
						}
					}
				}
				goto label_059712fd;
			}
		}
		if (__this != null) {
			pSVar7 = (String[])__this.ToArray();
			return pSVar7;
		}
	label_059712fd: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60018C2")]
	[Address(RVA = "0x586A740", Offset = "0x5869740", VA = "0x586A740")]
	public static bool IsAddonBuiltin(string name)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$IsAddonBuiltin): clean
		uint uVar1;
		bool bVar2;
		String[] pSVar3;
		ulong uVar4;
		ulong uVar5;

		bVar2 = String.IsNullOrEmpty(name);
		if (!bVar2) {
			pSVar3 = BuiltinLevels.GetBuiltinAddons();
			if (pSVar3 == null) {
				throw new NullReferenceException();
			}
			if (0 < (int)pSVar3.Length) {
				uVar4 = pSVar3.Length & 0xffffffff;
				uVar5 = 0;
				do {
					if (uVar4 <= uVar5) {
						throw new IndexOutOfRangeException();
					}
					bVar2 = (pSVar3[uVar5] == name);
					if (bVar2) {
						return true;
					}
					uVar5 = uVar5 + 1;
					uVar1 = (uint)pSVar3.Length;
					uVar4 = (ulong)uVar1;
				} while ((long)uVar5 < (long)(int)uVar1);
			}
		}
		return false;
	}

	[Token(Token = "0x60018C3")]
	[Address(RVA = "0x5871310", Offset = "0x5870310", VA = "0x5871310")]
	public static string[] GetCustomAddons()
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$GetCustomAddons): clean
		uint uVar1;
		String[] pSVar2;
		String pSVar3;
		uint uVar4;

		pSVar2 = BuiltinLevels.GetClFiles(BuiltinLevels.CustomAddonFolderPath);
		if (pSVar2 == null) {
	label_059713f8: ;
			throw new NullReferenceException();
		}
		uVar1 = (uint)pSVar2.Length;
		if (0 < (int)uVar1) {
			uVar4 = 0;
			do {
				if (uVar1 <= uVar4) {
	label_059713f3: ;
					throw new IndexOutOfRangeException();
				}
				if (pSVar2[(int)uVar4] == null) goto label_059713f8;
				pSVar3 = (pSVar2[(int)uVar4]).Replace(".cl", "");
				if ((uint)pSVar2.Length <= uVar4) goto label_059713f3;
				pSVar2[(int)uVar4] = pSVar3;
				uVar4 = uVar4 + 1;
				uVar1 = (uint)pSVar2.Length;
			} while ((int)uVar4 < (int)uVar1);
		}
		return pSVar2;
	}

	[Token(Token = "0x60018C4")]
	[Address(RVA = "0x5871590", Offset = "0x5870590", VA = "0x5871590")]
	public static void DeleteCustomMap(string name)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$DeleteCustomMap): clean
		uint uVar1;
		String path;

		if (Il2CppMethodInitialized_075459ac == false) {
			Il2CppMethodInitialized_075459ac = true;
			uVar1 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075459af == false) {
			Il2CppMethodInitialized_075459af = true;
			uVar1 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(BuiltinLevels))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		path = String.Concat(BuiltinLevels.CustomMapFolderPath, "/", name, ".txt");
		File.Delete(path);
		return;
	}

	[Token(Token = "0x60018C5")]
	[Address(RVA = "0x5871720", Offset = "0x5870720", VA = "0x5871720")]
	public static void RenameCustomMap(string oldName, string newName)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$RenameCustomMap): clean
		uint uVar1;
		bool bVar2;
		String path;
		String destFileName;
		String path_00;

		if (Il2CppMethodInitialized_075459ad == false) {
			Il2CppMethodInitialized_075459ad = true;
			uVar1 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075459af == false) {
			Il2CppMethodInitialized_075459af = true;
			uVar1 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(BuiltinLevels))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		path = String.Concat(BuiltinLevels.CustomMapFolderPath, "/", oldName, ".txt");
		bVar2 = File.Exists(path);
		if (bVar2) {
			destFileName = String.Concat(path, ".rename");
			if (Il2CppMethodInitialized_075459af == false) {
				Il2CppMethodInitialized_075459af = true;
				uVar1 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(BuiltinLevels))._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			path_00 = String.Concat(BuiltinLevels.CustomMapFolderPath, "/", newName, ".txt");
			File.Move(path, destFileName);
			bVar2 = File.Exists(path_00);
			if (bVar2) {
				File.Delete(path_00);
			}
			File.Move(destFileName, path_00);
			return;
		}
		return;
	}

	[Token(Token = "0x60018C6")]
	[Address(RVA = "0x5871960", Offset = "0x5870960", VA = "0x5871960")]
	public static bool IsValidCustomFileName(string name)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$IsValidCustomFileName): clean
		bool bVar1;
		bool bVar2;
		ushort c;
		String a;
		int iVar3;

		if (name == null) {
			throw new NullReferenceException();
		}
		iVar3 = name._stringLength;
		bVar2 = false;
		if ((iVar3 != 0) && (iVar3 < 0x33)) {
			bVar2 = false;
			a = name.Trim();
			bVar1 = (a != name);
			if (!bVar1) {
				bVar2 = false;
				bVar1 = Util.IsReservedFileName(name);
				if (!bVar1) {
					if (0 < name._stringLength) {
						iVar3 = 0;
						do {
							c = name.get_Chars(iVar3);
							bVar2 = Char.IsLetterOrDigit(c);
							if (!bVar2) {
								if (0x3f < c - 0x20) {
									return false;
								}
								if ((0x8000000000002001U >> ((ulong)(c - 0x20) & 0x3f) & 1) == 0) {
									return false;
								}
							}
							iVar3 = iVar3 + 1;
						} while (iVar3 < name._stringLength);
					}
					bVar2 = true;
				}
			}
		}
		return bVar2;
	}

	[Token(Token = "0x60018C7")]
	[Address(RVA = "0x5871690", Offset = "0x5870690", VA = "0x5871690")]
	private static string GetCustomMapPath(string name)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$GetCustomMapPath): clean
		String pSVar1;

		pSVar1 = String.Concat(BuiltinLevels.CustomMapFolderPath, "/", name, ".txt");
		return pSVar1;
	}

	[Token(Token = "0x60018C8")]
	[Address(RVA = "0x5871A90", Offset = "0x5870A90", VA = "0x5871A90")]
	public static void DeleteCustomLogic(string name)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$DeleteCustomLogic): clean
		String pSVar1;

		pSVar1 = String.Concat(BuiltinLevels.CustomLogicFolderPath, "/", name, ".txt");
		File.Delete(pSVar1);
		pSVar1 = String.Concat(BuiltinLevels.CustomLogicFolderPath, "/", name, ".cl");
		File.Delete(pSVar1);
		return;
	}

	[Token(Token = "0x60018C9")]
	[Address(RVA = "0x5871B60", Offset = "0x5870B60", VA = "0x5871B60")]
	public static void DeleteCustomAddon(string name)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$DeleteCustomAddon): clean
		String path;

		path = String.Concat(BuiltinLevels.CustomAddonFolderPath, "/", name, ".cl");
		File.Delete(path);
		return;
	}

	[Token(Token = "0x60018CA")]
	[Address(RVA = "0x5871C00", Offset = "0x5870C00", VA = "0x5871C00")]
	public static void SaveCustomMap(string name, MapScript script)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$SaveCustomMap): clean
		uint uVar1;
		String path;
		String contents;

		if (Il2CppMethodInitialized_075459b2 == false) {
			Il2CppMethodInitialized_075459b2 = true;
			uVar1 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_075459af == false) {
			Il2CppMethodInitialized_075459af = true;
			uVar1 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(BuiltinLevels))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		path = String.Concat(BuiltinLevels.CustomMapFolderPath, "/", name, ".txt");
		if (script == null) {
			throw new NullReferenceException();
		}
		contents = script.Serialize();
		File.WriteAllText(path, contents);
		return;
	}

	[Token(Token = "0x60018CB")]
	[Address(RVA = "0x5871D30", Offset = "0x5870D30", VA = "0x5871D30")]
	public static void AutosaveCustomMap(string name, MapScript script)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$AutosaveCustomMap): clean
		String path;
		String contents;

		path = String.Concat(BuiltinLevels.CustomMapAutosaveFolderPath, "/", name, ".txt");
		if (script == null) {
			throw new NullReferenceException();
		}
		contents = script.Serialize();
		File.WriteAllText(path, contents);
		return;
	}

	[Token(Token = "0x60018CC")]
	[Address(RVA = "0x5871DF0", Offset = "0x5870DF0", VA = "0x5871DF0")]
	public static void BackupCustomMap(string name, string map, string version)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$BackupCustomMap): clean
		String pSVar1;
		String[] values;
		DateTime local_38;

		Directory.CreateDirectory(BuiltinLevels.CustomMapBackupsFolderPath);
		local_38 = DateTime.Now;
		pSVar1 = local_38.ToString("yyyy-MM-dd-HH-mm-ss-fff");
		values = (String[])new string[6];
		if (values == null) {
			throw new NullReferenceException();
		}
		if ((int)values.Length != 0) {
			values[0] = name;
			if ((values.Length & 0xfffffffe) != 0) {
				values[1] = "-v";
				if (2 < (uint)values.Length) {
					values[2] = version;
					if ((values.Length & 0xfffffffc) != 0) {
						values[3] = "-";
						if (4 < (uint)values.Length) {
							values[4] = pSVar1;
							if (5 < (uint)values.Length) {
								values[5] = ".txt";
								pSVar1 = String.Concat(values);
								pSVar1 = String.Concat(BuiltinLevels.CustomMapBackupsFolderPath, "/", pSVar1);
								File.WriteAllText(pSVar1, map);
								return;
							}
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60018CD")]
	[Address(RVA = "0x5872010", Offset = "0x5871010", VA = "0x5872010")]
	public static void SaveCustomLogic(string name, string script)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$SaveCustomLogic): clean
		String path;

		path = String.Concat(BuiltinLevels.CustomLogicFolderPath, "/", name, ".cl");
		File.WriteAllText(path, script);
		return;
	}

	[Token(Token = "0x60018CE")]
	[Address(RVA = "0x58720B0", Offset = "0x58710B0", VA = "0x58720B0")]
	public static void SaveCustomAddon(string name, string script)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$SaveCustomAddon): clean
		String path;

		path = String.Concat(BuiltinLevels.CustomAddonFolderPath, "/", name, ".cl");
		File.WriteAllText(path, script);
		return;
	}

	[Token(Token = "0x60018CF")]
	[Address(RVA = "0x5872150", Offset = "0x5871150", VA = "0x5872150")]
	public static string[] GetGameModes(string category, string mapName, bool hasMapLogic)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$GetGameModes): 26 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		int iVar4;
		String[] pSVar5;
		bool bVar6;
		List<string> __this;
		JSONNode pSVar7;
		String pSVar8;
		JSONNode a;
		String[] pSVar9;
		ulong uVar10;
		ulong uVar11;
		KeyValuePair<string, JSONNode> SVar13;
		JSONNode.Enumerator local_d8;
		JSONNode.Enumerator local_88;
		String local_40;
		String local_38;

		local_d8.m_Array._list = null;
		local_d8.m_Array._index = 0;
		local_d8.m_Array._version = 0;
		local_d8.m_Object._current.value = null;
		local_d8.m_Object._getEnumeratorRetType = 0;
		local_d8.m_Object._36_4_ = 0;
		local_d8.m_Object._version = 0;
		local_d8.m_Object._index = 0;
		local_d8.m_Object._current.key = null;
		local_d8.type = 0;
		local_d8._4_4_ = 0;
		local_d8.m_Object._dictionary = null;
		local_d8.m_Array._current = null;
		__this = new List<string>();
		if (hasMapLogic) {
			if (__this == null) goto label_05972ccc;
			pSVar8 = BuiltinLevels.UseMapLogic;
			piVar1 = &__this._version;
			*piVar1 = *piVar1 + 1;
			pSVar9 = __this._items;
			if (pSVar9 == null) goto label_05972ccc;
			uVar2 = __this._size;
			if (uVar2 < (uint)pSVar9.Length) {
				__this._size = uVar2 + 1;
				pSVar9[(int)uVar2] = pSVar8;
				goto label_059722d1;
			}
			__this.AddWithResize((object)pSVar8);
			uVar3 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
		}
		else {
	label_059722d1: ;
			uVar3 = (typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		pSVar7 = BuiltinLevels._info;
		local_38 = category;
		if ((pSVar7 == null) ||(local_40 = mapName, pSVar7 = pSVar7.get_Item("GameModes"), pSVar7 == null)) goto label_05972ccc;
		local_88.unknown(pSVar7);
		local_d8.m_Array._current = local_88.m_Array._current;
		local_d8.m_Array._list = local_88.m_Array._list;
		local_d8.m_Array._index = local_88.m_Array._index;
		local_d8.m_Array._version = local_88.m_Array._version;
		local_d8.m_Object._current.value = local_88.m_Object._current.value;
		local_d8.m_Object._getEnumeratorRetType = local_88.m_Object._getEnumeratorRetType;
		local_d8.m_Object._36_4_ = local_88.m_Object._36_4_;
		local_d8.m_Object._version = local_88.m_Object._version;
		local_d8.m_Object._index = local_88.m_Object._index;
		local_d8.m_Object._current.key = local_88.m_Object._current.key;
		local_d8.type = local_88.type;
		local_d8._4_4_ = local_88._4_4_;
		local_d8.m_Object._dictionary = local_88.m_Object._dictionary;
		bVar6 = local_d8.MoveNext();
		if (bVar6) {
			if (__this == null) {
				SVar13 = local_d8.Current;
				pSVar7 = ((JSONNode)SVar13);
				if ((pSVar7 == null) ||(pSVar7 = pSVar7.get_Item("Name"), pSVar7 == null)) goto label_05972ccc;
				goto label_05972d04;
			}
			do {
				SVar13 = local_d8.Current;
				pSVar7 = ((JSONNode)SVar13);
				if ((pSVar7 == null) ||(pSVar7 = pSVar7.get_Item("Name"), pSVar7 == null)) goto label_05972ccc;
				pSVar8 = pSVar7.get_Value();
				piVar1 = &__this._version;
				*piVar1 = *piVar1 + 1;
				pSVar9 = __this._items;
				if (pSVar9 == null) goto label_05972ccc;
				uVar2 = __this._size;
				if (uVar2 < (uint)pSVar9.Length) {
					__this._size = uVar2 + 1;
					pSVar9[(int)uVar2] = pSVar8;
				}
				else {
					__this.AddWithResize((object)pSVar8);
				}
				bVar6 = local_d8.MoveNext();
			} while (bVar6);
		}
		pSVar8 = local_38;
		pSVar7 = BuiltinLevels.GetCategory(local_38);
		a = BuiltinLevels.GetMap(pSVar8, local_40);
		bVar6 = (pSVar7 != null);
		if (bVar6) {
			bVar6 = (a != null);
			if (bVar6) {
				if (a == null) goto label_05972ccc;
				bVar6 = a.HasKey("IncludedModes");
				if (bVar6) {
					if (__this == null) goto label_05972ccc;
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					iVar4 = __this._size;
					__this._size = 0;
					if (0 < iVar4) {
						Array.Clear((Array)__this._items, 0, iVar4);
					}
					pSVar7 = a.get_Item("IncludedModes");
					if (pSVar7 == null) goto label_05972ccc;
					local_88.unknown(pSVar7);
					local_d8.m_Array._current = local_88.m_Array._current;
					local_d8.m_Array._list = local_88.m_Array._list;
					local_d8.m_Array._index = local_88.m_Array._index;
					local_d8.m_Array._version = local_88.m_Array._version;
					local_d8.m_Object._current.value = local_88.m_Object._current.value;
					local_d8.m_Object._getEnumeratorRetType = local_88.m_Object._getEnumeratorRetType;
					local_d8.m_Object._36_4_ = local_88.m_Object._36_4_;
					local_d8.m_Object._version = local_88.m_Object._version;
					local_d8.m_Object._index = local_88.m_Object._index;
					local_d8.m_Object._current.key = local_88.m_Object._current.key;
					local_d8.type = local_88.type;
					local_d8._4_4_ = local_88._4_4_;
					local_d8.m_Object._dictionary = local_88.m_Object._dictionary;
					bVar6 = local_d8.MoveNext();
					if (bVar6) {
						do {
							SVar13 = local_d8.Current;
							pSVar7 = ((JSONNode)SVar13);
							if (pSVar7 == null) goto label_05972ccc;
							pSVar8 = pSVar7.get_Value();
							piVar1 = &__this._version;
							*piVar1 = *piVar1 + 1;
							pSVar9 = __this._items;
							if (pSVar9 == null) goto label_05972ccc;
							uVar2 = __this._size;
							if (uVar2 < (uint)pSVar9.Length) {
								__this._size = uVar2 + 1;
								pSVar9[(int)uVar2] = pSVar8;
							}
							else {
								__this.AddWithResize((object)pSVar8);
							}
							bVar6 = local_d8.MoveNext();
						} while (bVar6);
					}
				}
				else {
					bVar6 = a.HasKey("ExcludedModes");
					if (bVar6) {
						pSVar7 = a.get_Item("ExcludedModes");
						if (pSVar7 == null) goto label_05972ccc;
						local_88.unknown(pSVar7);
						local_d8.m_Array._current = local_88.m_Array._current;
						local_d8.m_Array._list = local_88.m_Array._list;
						local_d8.m_Array._index = local_88.m_Array._index;
						local_d8.m_Array._version = local_88.m_Array._version;
						local_d8.m_Object._current.value = local_88.m_Object._current.value;
						local_d8.m_Object._getEnumeratorRetType = local_88.m_Object._getEnumeratorRetType;
						local_d8.m_Object._36_4_ = local_88.m_Object._36_4_;
						local_d8.m_Object._version = local_88.m_Object._version;
						local_d8.m_Object._index = local_88.m_Object._index;
						local_d8.m_Object._current.key = local_88.m_Object._current.key;
						local_d8.type = local_88.type;
						local_d8._4_4_ = local_88._4_4_;
						local_d8.m_Object._dictionary = local_88.m_Object._dictionary;
						bVar6 = local_d8.MoveNext();
						if (bVar6) {
							if (__this == null) {
	label_05972cd1: ;
								SVar13 = local_d8.Current;
								pSVar7 = ((JSONNode)SVar13);
								if (pSVar7 != null) {
	label_05972d04: ;
									pSVar7.get_Value();
									throw new NullReferenceException();
								}
								goto label_05972ccc;
							}
							do {
								SVar13 = local_d8.Current;
								pSVar7 = ((JSONNode)SVar13);
								if (pSVar7 == null) goto label_05972ccc;
								pSVar8 = pSVar7.get_Value();
								bVar6 = __this.Contains((object)pSVar8);
								if (bVar6) {
									pSVar8 = pSVar7.get_Value();
									__this.Remove((object)pSVar8);
								}
								bVar6 = local_d8.MoveNext();
							} while (bVar6);
						}
					}
					else {
						if (pSVar7 == null) goto label_05972ccc;
						bVar6 = pSVar7.HasKey("IncludedModes");
						if (bVar6) {
							if (__this == null) goto label_05972ccc;
							piVar1 = &__this._version;
							*piVar1 = *piVar1 + 1;
							iVar4 = __this._size;
							__this._size = 0;
							if (0 < iVar4) {
								Array.Clear((Array)__this._items, 0, iVar4);
							}
							pSVar7 = pSVar7.get_Item("IncludedModes");
							if (pSVar7 == null) goto label_05972ccc;
							local_88.unknown(pSVar7);
							local_d8.m_Array._current = local_88.m_Array._current;
							local_d8.m_Array._list = local_88.m_Array._list;
							local_d8.m_Array._index = local_88.m_Array._index;
							local_d8.m_Array._version = local_88.m_Array._version;
							local_d8.m_Object._current.value = local_88.m_Object._current.value;
							local_d8.m_Object._getEnumeratorRetType = local_88.m_Object._getEnumeratorRetType;
							local_d8.m_Object._36_4_ = local_88.m_Object._36_4_;
							local_d8.m_Object._version = local_88.m_Object._version;
							local_d8.m_Object._index = local_88.m_Object._index;
							local_d8.m_Object._current.key = local_88.m_Object._current.key;
							local_d8.type = local_88.type;
							local_d8._4_4_ = local_88._4_4_;
							local_d8.m_Object._dictionary = local_88.m_Object._dictionary;
							bVar6 = local_d8.MoveNext();
							if (bVar6) {
								do {
									SVar13 = local_d8.Current;
									pSVar7 = ((JSONNode)SVar13);
									if (pSVar7 == null) goto label_05972ccc;
									pSVar8 = pSVar7.get_Value();
									piVar1 = &__this._version;
									*piVar1 = *piVar1 + 1;
									pSVar9 = __this._items;
									if (pSVar9 == null) goto label_05972ccc;
									uVar2 = __this._size;
									if (uVar2 < (uint)pSVar9.Length) {
										__this._size = uVar2 + 1;
										pSVar9[(int)uVar2] = pSVar8;
									}
									else {
										__this.AddWithResize((object)pSVar8);
									}
									bVar6 = local_d8.MoveNext();
								} while (bVar6);
							}
						}
						else {
							bVar6 = pSVar7.HasKey("ExcludedModes");
							if (bVar6) {
								pSVar7 = pSVar7.get_Item("ExcludedModes");
								if (pSVar7 == null) goto label_05972ccc;
								local_88.unknown(pSVar7);
								local_d8.m_Array._current = local_88.m_Array._current;
								local_d8.m_Array._list = local_88.m_Array._list;
								local_d8.m_Array._index = local_88.m_Array._index;
								local_d8.m_Array._version = local_88.m_Array._version;
								local_d8.m_Object._current.value = local_88.m_Object._current.value;
								local_d8.m_Object._getEnumeratorRetType = local_88.m_Object._getEnumeratorRetType;
								local_d8.m_Object._36_4_ = local_88.m_Object._36_4_;
								local_d8.m_Object._version = local_88.m_Object._version;
								local_d8.m_Object._index = local_88.m_Object._index;
								local_d8.m_Object._current.key = local_88.m_Object._current.key;
								local_d8.type = local_88.type;
								local_d8._4_4_ = local_88._4_4_;
								local_d8.m_Object._dictionary = local_88.m_Object._dictionary;
								bVar6 = local_d8.MoveNext();
								if (bVar6) {
									if (__this == null) goto label_05972cd1;
									do {
										SVar13 = local_d8.Current;
										pSVar7 = ((JSONNode)SVar13);
										if (pSVar7 == null) goto label_05972ccc;
										pSVar8 = pSVar7.get_Value();
										bVar6 = __this.Contains((object)pSVar8);
										if (bVar6) {
											pSVar8 = pSVar7.get_Value();
											__this.Remove((object)pSVar8) ;
										}
										bVar6 = local_d8.MoveNext();
									} while (bVar6);
								}
							}
						}
					}
				}
			}
		}
		pSVar9 = BuiltinLevels.GetCustomModes();
		if (pSVar9 == null) {
	label_05972ccc: ;
			throw new NullReferenceException();
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		if (0 < (int)pSVar9.Length) {
			uVar10 = pSVar9.Length & 0xffffffff;
			uVar11 = 0;
			do {
				if (uVar10 <= uVar11) {
					throw new IndexOutOfRangeException();
				}
				pSVar8 = pSVar9[uVar11];
				bVar6 = __this.Contains((object)pSVar8);
				if (!bVar6) {
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pSVar5 = __this._items;
					if (pSVar5 == null) goto label_05972ccc;
					uVar2 = __this._size;
					if (uVar2 < (uint)pSVar5.Length) {
						__this._size = uVar2 + 1;
						pSVar5[(int)uVar2] = pSVar8;
					}
					else {
						__this.AddWithResize((object)pSVar8);
					}
				}
				uVar11 = uVar11 + 1;
				uVar2 = (uint)pSVar9.Length;
				uVar10 = (ulong)uVar2;
			} while ((long)uVar11 < (long)(int)uVar2);
			if (__this == null) goto label_05972ccc;
		}
		pSVar9 = (String[])__this.ToArray();
		return pSVar9;
	}

	[Token(Token = "0x60018D0")]
	[Address(RVA = "0x5873380", Offset = "0x5872380", VA = "0x5873380")]
	public static string[] GetSandboxGameModes(string category, string mapName, bool hasMapLogic, out int recommendedModeCount)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$GetSandboxGameModes): 36 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		String[] pSVar4;
		ulong uVar5;
		Dictionary<TKey, TValue> pSVar6;
		bool bVar7;
		String[] pSVar8;
		Func<string, bool> __this;
		System_Collections_Generic_IEnumerable_TSource__o pSVar9;
		System_Collections_Generic_List_TSource__o collection;
		List<string> __this_00;
		List<string> __this_01;
		JSONNode pSVar10;
		String pSVar11;
		ulong uVar12;
		ulong uVar14;
		KeyValuePair<string, JSONNode> aKeyValue;
		byte[] local_d8 = new byte[32];
		Dictionary<TKey, TValue> pSStack_b8;
		String local_b0;
		int iStack_98;
		uint uStack_94;
		int iStack_88;
		int iStack_84;
		List<T> local_78;
		ulong uStack_50;
		ulong uStack_40;

		uStack_40._0_4_ = 0;
		uStack_40._4_4_ = 0;
		uStack_50._0_4_ = 0;
		uStack_50._4_4_ = 0;
		local_78 = null;
		local_d8._0_8_ = null;
		local_d8._8_8_ = null;
		local_d8._16_8_ = null;
		pSVar8 = BuiltinLevels.GetGameModes(category, mapName, hasMapLogic);
		__this = new Func<string, bool>(null, (intptr_t)MethodInfo_Map_BuiltinLevels_IsLogicBuiltin);
		pSVar9 = Enumerable.Where<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar8, (System_Func_TSource__bool__o)__this);
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		pSVar9 = Enumerable.Distinct<string>(pSVar9, (System_Collections_Generic_IEqualityComparer_TSource__o)StringComparer.s_ordinalIgnoreCase);
		collection = Enumerable.ToList<string>(pSVar9);
		if (collection != null) {
			*recommendedModeCount = collection._size;
			__this_00 = new List<string>((IEnumerable<T>)collection);
			__this_01 = new List<string>();
			if (__this_01 != null) {
				pSVar11 = BuiltinLevels.UseMapLogic;
				piVar1 = &__this_01._version;
				*piVar1 = *piVar1 + 1;
				pSVar8 = __this_01._items;
				if (pSVar8 != null) {
					uVar3 = __this_01._size;
					if (uVar3 < (uint)pSVar8.Length) {
						__this_01._size = uVar3 + 1;
						pSVar8[(int)uVar3] = pSVar11;
					}
					else {
						__this_01.AddWithResize((object)pSVar11);
					}
					pSVar10 = BuiltinLevels._info;
					if ((pSVar10 != null) &&(pSVar10 = pSVar10.get_Item("GameModes"), pSVar10 != null)) {
						(local_d8 + 0x18).unknown(pSVar10);
						uStack_40._0_4_ = iStack_88;
						uStack_40._4_4_ = iStack_84;
						uStack_50._0_4_ = iStack_98;
						uStack_50._4_4_ = uStack_94;
						local_78 = (List<T>)local_d8._24_8_;
						bVar7 = local_78.MoveNext();
						if (bVar7) {
							do {
								aKeyValue = local_78.Current;
								pSVar10 = ((JSONNode)aKeyValue);
								if ((pSVar10 == null) ||(pSVar10 = pSVar10.get_Item("Name"), pSVar10 == null)) goto label_05973c39;
								pSVar11 = pSVar10.get_Value();
								piVar1 = &__this_01._version;
								*piVar1 = *piVar1 + 1;
								pSVar8 = __this_01._items;
								if (pSVar8 == null) goto label_05973c39;
								uVar3 = __this_01._size;
								if (uVar3 < (uint)pSVar8.Length) {
									__this_01._size = uVar3 + 1;
									pSVar8[(int)uVar3] = pSVar11;
								}
								else {
									__this_01.AddWithResize((object)pSVar11);
								}
								bVar7 = local_78.MoveNext();
							} while (bVar7);
						}
						pSVar11 = "None";
						piVar1 = &__this_01._version;
						*piVar1 = *piVar1 + 1;
						pSVar8 = __this_01._items;
						if (pSVar8 != null) {
							uVar3 = __this_01._size;
							if (uVar3 < (uint)pSVar8.Length) {
								__this_01._size = uVar3 + 1;
								pSVar8[(int)uVar3] = pSVar11;
							}
							else {
								__this_01.AddWithResize((object)pSVar11);
							}
							((local_d8 + 0x18)).GetEnumerator((List<object>)__this_01);
							local_d8._16_8_ = local_b0;
							local_d8._0_8_ = local_d8._24_8_;
							local_d8._8_8_ = pSStack_b8;
							local_d8._24_8_ = null;
							pSStack_b8 = (Dictionary<TKey, TValue>)local_d8;
							pSVar6 = (Dictionary<TKey, TValue>)local_d8;
							if (__this_00 == null) {
								while (true) {
									pSStack_b8 = pSVar6;
									bVar7 = local_d8.MoveNext();
									uVar5 = local_d8._16_8_;
									if (!(bVar7)) break;
									if (Il2CppMethodInitialized_07542886 == false) {
										Il2CppMethodInitialized_07542886 = true;
										uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
									}
									else {
										uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
									}
									if (uVar2 == 0) {
									}
									bVar7 = Enumerable.Contains<string>(null, (object)uVar5, (System_Collections_Generic_IEqualityComparer_TSource__o)StringComparer.s_ordinalIgnoreCase);
									pSVar6 = pSStack_b8;
									if (!bVar7) {
	label_05973c3e: ;
										throw new NullReferenceException();
									}
								}
							}
							else {
								while (true) {
									bVar7 = local_d8.MoveNext();
									uVar5 = local_d8._16_8_;
									if (!(bVar7)) break;
									if (Il2CppMethodInitialized_07542886 == false) {
										Il2CppMethodInitialized_07542886 = true;
										uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
									}
									else {
										uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
									}
									if (uVar2 == 0) {
									}
									bVar7 = Enumerable.Contains<string>((System_Collections_Generic_IEnumerable_TSource__o)__this_00, (object)uVar5, (System_Collections_Generic_IEqualityComparer_TSource__o)StringComparer.s_ordinalIgnoreCase);
									if (!bVar7) {
										piVar1 = &__this_00._version;
										*piVar1 = *piVar1 + 1;
										pSVar8 = __this_00._items;
										if (pSVar8 == null) goto label_05973c3e;
										uVar3 = __this_00._size;
										if (uVar3 < (uint)pSVar8.Length) {
											__this_00._size = uVar3 + 1;
											pSVar8[(int)uVar3] = (String)uVar5;
										}
										else {
											__this_00.AddWithResize((object)uVar5);
										}
									}
								}
							}
							local_d8.Dispose();
							pSVar8 = BuiltinLevels.GetCustomModes();
							if (pSVar8 != null) {
								if (0 < (int)pSVar8.Length) {
									uVar12 = pSVar8.Length & 0xffffffff;
									uVar14 = 0;
									do {
										if (uVar12 <= uVar14) {
											throw new IndexOutOfRangeException();
										}
										pSVar11 = pSVar8[uVar14];
										if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor == 0) {
											if (Il2CppMethodInitialized_07542886 == false) goto label_05973ab2;
	label_05973a1b: ;
											uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
										}
										else {
											if (Il2CppMethodInitialized_07542886 != false) goto label_05973a1b;
	label_05973ab2: ;
											Il2CppMethodInitialized_07542886 = true;
											uVar2 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
										}
										if (uVar2 == 0) {
										}
										bVar7 = Enumerable.Contains<string>((System_Collections_Generic_IEnumerable_TSource__o)__this_00, (object)pSVar11, (System_Collections_Generic_IEqualityComparer_TSource__o)StringComparer.s_ordinalIgnoreCase);
										if (!bVar7) {
											if (__this_00 == null) goto label_05973c39;
											piVar1 = &__this_00._version;
											*piVar1 = *piVar1 + 1;
											pSVar4 = __this_00._items;
											if (pSVar4 == null) goto label_05973c39;
											uVar3 = __this_00._size;
											if (uVar3 < (uint)pSVar4.Length) {
												__this_00._size = uVar3 + 1;
												pSVar4[(int)uVar3] = pSVar11;
											}
											else {
												__this_00.AddWithResize((object)pSVar11);
											}
										}
										uVar14 = uVar14 + 1;
										uVar3 = (uint)pSVar8.Length;
										uVar12 = (ulong)uVar3;
									} while ((long)uVar14 < (long)(int)uVar3);
								}
								if (__this_00 != null) {
									pSVar8 = (String[])__this_00.ToArray();
									return pSVar8;
								}
							}
						}
					}
				}
			}
		}
	label_05973c39: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60018D1")]
	[Address(RVA = "0x5873CC0", Offset = "0x5872CC0", VA = "0x5873CC0")]
	public static void LoadSandboxMiscSettings(string category, string mapName, string gameMode, InGameMiscSettings settings)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$LoadSandboxMiscSettings): 15 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		OrderedDictionary pSVar3;
		Il2CppClass* ppIVar4;
		object key;
		bool bVar5;
		int value;
		Dictionary<string, JSONNode> __this;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_00;
		JSONNode pSVar6;
		TypedSetting<T> __this_01;
		String value_00;
		float value_01;
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_68;
		byte[] local_48 = new byte[16];
		object local_38;

		local_68._dictionary = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._currentKey = null;
		__this = BuiltinLevels.GetSandboxMiscSettings(category, mapName, gameMode);
		if ((__this == null) ||(__this_00 = __this.Keys, __this_00 == null)) {
			throw new NullReferenceException();
		}
		local_48.GetEnumerator(__this_00);
		local_68._currentKey = local_38;
		local_68._dictionary = (Dictionary<TKey, TValue>)local_48._0_8_;
		local_68._index = local_48._8_4_;
		local_68._version = local_48._12_4_;
		local_48._0_8_ = null;
		local_48._8_8_ = &local_68;
		if (settings == null) {
			local_48._8_8_ = &local_68;
			bVar5 = local_68.MoveNext();
			if (bVar5) {
				__this.get_Item(local_68._currentKey);
				throw new NullReferenceException();
			}
		}
		else {
			while (true) {
				bVar5 = local_68.MoveNext();
				key = local_68._currentKey;
				if (!(bVar5)) break;
				pSVar6 = __this.get_Item(local_68._currentKey);
				pSVar3 = settings.Settings;
				if (pSVar3 == null) {
					throw new NullReferenceException();
				}
				bVar5 = pSVar3.Contains(key);
				if (bVar5) {
					pSVar3 = settings.Settings;
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					__this_01 = (TypedSetting<T>)pSVar3.get_Item(key);
					if (__this_01 != null) {
						bVar1 = (__this_01.klass._2).typeHierarchyDepth;
						bVar2 = (typeof(BaseSetting)._2).typeHierarchyDepth;
						if ((bVar1 < bVar2) ||(ppIVar4 = (__this_01.klass._2).typeHierarchy, ppIVar4[(ulong)bVar2 - 1] != typeof(BaseSetting))) {
							throw new InvalidCastException();
						}
						bVar2 = (typeof(BoolSetting)._2).typeHierarchyDepth;
						if ((bVar1 < bVar2) || (ppIVar4[(ulong)bVar2 - 1] != typeof(BoolSetting))) {
							bVar2 = (typeof(IntSetting)._2).typeHierarchyDepth;
							if ((bVar1 < bVar2) || (ppIVar4[(ulong)bVar2 - 1] != typeof(IntSetting))) {
								bVar2 = (typeof(FloatSetting)._2).typeHierarchyDepth;
								if ((bVar1 < bVar2) ||(ppIVar4[(ulong)bVar2 - 1] != typeof(FloatSetting))) {
									bVar2 = (typeof(StringSetting)._2).typeHierarchyDepth;
									if ((bVar2 <= bVar1) &&(ppIVar4[(ulong)bVar2 - 1] == typeof(StringSetting))) {
										if (pSVar6 == null) {
											throw new NullReferenceException();
										}
										value_00 = pSVar6.ToString();
										bVar1 = (typeof(StringSetting)._2).typeHierarchyDepth;
										if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(StringSetting))) {
											throw new InvalidCastException();
										}
										__this_01.Value = (object)value_00;
									}
								}
								else {
									if (pSVar6 == null) {
										throw new NullReferenceException();
									}
									value_01 = pSVar6.get_AsFloat();
									bVar1 = (typeof(FloatSetting)._2).typeHierarchyDepth;
									if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(FloatSetting))) {
										throw new InvalidCastException();
									}
									__this_01.Value = value_01;
								}
							}
							else {
								if (pSVar6 == null) {
									throw new NullReferenceException();
								}
								value = pSVar6.get_AsInt();
								bVar1 = (typeof(IntSetting)._2).typeHierarchyDepth;
								if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(IntSetting))) {
									throw new InvalidCastException();
								}
								__this_01.Value = value;
							}
						}
						else {
							if (pSVar6 == null) {
								throw new NullReferenceException();
							}
							bVar5 = pSVar6.get_AsBool();
							bVar1 = (typeof(BoolSetting)._2).typeHierarchyDepth;
							if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(BoolSetting))) {
								throw new InvalidCastException();
							}
							__this_01.Value = bVar5;
						}
					}
				}
			}
		}
		local_68.Dispose();
		return;
	}

	[Token(Token = "0x60018D2")]
	[Address(RVA = "0x5870940", Offset = "0x586F940", VA = "0x5870940")]
	private static string[] GetTxtFiles(string path)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$GetTxtFiles): 4 lines keep C-only constructs
		object @object;
		bool bVar1;
		String[] pSVar2;
		Map_BuiltinLevels___c_StaticFields pMVar3;
		Func<string, string> __this;
		System_Collections_Generic_IEnumerable_TResult__o source;

		bVar1 = Directory.Exists(path);
		if (bVar1) {
			pSVar2 = Directory.GetFiles(path, "*.txt", 0);
			if ((typeof(BuiltinLevels.c)._2).cctor_finished_or_no_cctor == 0) {
				pMVar3 = typeof(BuiltinLevels.c).static_fields;
				__this = pMVar3.__9__52_0;
			}
			else {
				pMVar3 = typeof(BuiltinLevels.c).static_fields;
				__this = pMVar3.__9__52_0;
			}
			if (__this == null) {
				if (((typeof(BuiltinLevels.c))._2).cctor_finished_or_no_cctor == 0) {
					pMVar3 = typeof(BuiltinLevels.c).static_fields;
				}
				@object = (object)pMVar3.__9;
				__this = new Func<string, string>(@object, (intptr_t)MethodInfo_Map_BuiltinLevels_c_GetTxtFiles_b__52_0);
				pMVar3 = typeof(BuiltinLevels.c).static_fields;
				pMVar3.__9__52_0 = __this;
			}
			source = Enumerable.Select<string, string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar2, (System_Func_TSource__TResult__o)__this);
			pSVar2 = (String[])Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)source);
			return pSVar2;
		}
		pSVar2 = (String[])new string[0];
		return pSVar2;
	}

	[Token(Token = "0x60018D3")]
	[Address(RVA = "0x5871400", Offset = "0x5870400", VA = "0x5871400")]
	private static string[] GetClFiles(string path)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$GetClFiles): 4 lines keep C-only constructs
		object @object;
		bool bVar1;
		String[] pSVar2;
		Map_BuiltinLevels___c_StaticFields pMVar3;
		Func<string, string> __this;
		System_Collections_Generic_IEnumerable_TResult__o source;

		bVar1 = Directory.Exists(path);
		if (bVar1) {
			pSVar2 = Directory.GetFiles(path, "*.cl", 0);
			if ((typeof(BuiltinLevels.c)._2).cctor_finished_or_no_cctor == 0) {
				pMVar3 = typeof(BuiltinLevels.c).static_fields;
				__this = pMVar3.__9__53_0;
			}
			else {
				pMVar3 = typeof(BuiltinLevels.c).static_fields;
				__this = pMVar3.__9__53_0;
			}
			if (__this == null) {
				if (((typeof(BuiltinLevels.c))._2).cctor_finished_or_no_cctor == 0) {
					pMVar3 = typeof(BuiltinLevels.c).static_fields;
				}
				@object = (object)pMVar3.__9;
				__this = new Func<string, string>(@object, (intptr_t)MethodInfo_Map_BuiltinLevels_c_GetClFiles_b__53_0);
				pMVar3 = typeof(BuiltinLevels.c).static_fields;
				pMVar3.__9__53_0 = __this;
			}
			source = Enumerable.Select<string, string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar2, (System_Func_TSource__TResult__o)__this);
			pSVar2 = (String[])Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)source);
			return pSVar2;
		}
		pSVar2 = (String[])new string[0];
		return pSVar2;
	}

	[Token(Token = "0x60018D4")]
	[Address(RVA = "0x5872EA0", Offset = "0x5871EA0", VA = "0x5872EA0")]
	public static string[] GetCustomModes()
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$GetCustomModes): 11 lines keep C-only constructs
		int piVar1;
		String[] pSVar2;
		bool bVar3;
		uint uVar4;
		List<string> __this;
		HashSet<string> __this_00;
		String[] pSVar5;
		String[] pSVar6;
		String pSVar7;
		String* ppSVar8;
		long lVar9;
		uint uVar10;
		il2cpp_array_size_t piVar12;

		if (Il2CppMethodInitialized_075459bc == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_075459bc = true;
		}
		__this = new List<string>();
		__this_00 = new HashSet<string>();
		pSVar5 = BuiltinLevels.GetClFiles(BuiltinLevels.CustomLogicFolderPath);
		pSVar6 = BuiltinLevels.GetTxtFiles(BuiltinLevels.CustomLogicFolderPath);
		if (pSVar5 == null) goto label_0597336d;
		if (__this == null) {
			if (0 < (int)pSVar5.Length) {
				pSVar7 = pSVar5[0];
				if (pSVar7 == null) goto label_0597336d;
				ppSVar8 = &".cl";
				goto label_059732d1;
			}
	label_059730dc: ;
			if (pSVar6 == null) goto label_0597336d;
			piVar12 = &pSVar6.Length;
			if (__this_00 == null) goto label_05973202;
			uVar4 = (uint)*piVar12;
			if (__this == null) {
				if ((int)uVar4 < 1) goto label_0597336d;
				lVar9 = 0;
				do {
					if (uVar4 <= (uint)lVar9) goto label_059732b8;
					if (pSVar6[lVar9] == null) goto label_0597336d;
					pSVar7 = (pSVar6[lVar9]).Replace(".txt", "");
					bVar3 = __this_00.Contains((object)pSVar7);
					if (!bVar3) goto label_0597336d;
					uVar4 = (uint)*piVar12;
					lVar9 = lVar9 + 1;
				} while ((int)lVar9 < (int)uVar4);
			}
			else if (0 < (int)uVar4) {
				uVar10 = 0;
				do {
					if (uVar4 <= uVar10) {
	label_059732b8: ;
						throw new IndexOutOfRangeException();
					}
					if (pSVar6[(int)uVar10] == null) goto label_0597336d;
					pSVar7 = (pSVar6[(int)uVar10]).Replace(".txt", "");
					bVar3 = __this_00.Contains((object)pSVar7);
					if (!bVar3) {
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pSVar5 = __this._items;
						if (pSVar5 == null) goto label_0597336d;
						uVar4 = __this._size;
						if (uVar4 < (uint)pSVar5.Length) {
							__this._size = uVar4 + 1;
							pSVar5[(int)uVar4] = pSVar7;
						}
						else {
							__this.AddWithResize((object)pSVar7);
						}
						__this_00.Add((object)pSVar7);
					}
					uVar10 = uVar10 + 1;
					uVar4 = (uint)*piVar12;
				} while ((int)uVar10 < (int)uVar4);
			}
		}
		else {
			uVar4 = (uint)pSVar5.Length;
			if (__this_00 != null) {
				if (0 < (int)uVar4) {
					uVar10 = 0;
					do {
						if (uVar4 <= uVar10) goto label_059732b8;
						if (pSVar5[(int)uVar10] == null) goto label_0597336d;
						pSVar7 = (pSVar5[(int)uVar10]).Replace(".cl", "");
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pSVar2 = __this._items;
						if (pSVar2 == null) goto label_0597336d;
						uVar4 = __this._size;
						if (uVar4 < (uint)pSVar2.Length) {
							__this._size = uVar4 + 1;
							pSVar2[(int)uVar4] = pSVar7;
						}
						else {
							__this.AddWithResize((object)pSVar7);
						}
						__this_00.Add((object)pSVar7);
						uVar10 = uVar10 + 1;
						uVar4 = (uint)pSVar5.Length;
					} while ((int)uVar10 < (int)uVar4);
				}
				goto label_059730dc;
			}
			if (0 < (int)uVar4) {
				if (pSVar5[0] != null) {
					pSVar7 = (pSVar5[0]).Replace(".cl", "");
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pSVar5 = __this._items;
					if (pSVar5 != null) {
						uVar4 = __this._size;
						if (uVar4 < (uint)pSVar5.Length) {
							__this._size = uVar4 + 1;
							pSVar5[(int)uVar4] = pSVar7;
							throw new NullReferenceException();
						}
						__this.AddWithResize((object)pSVar7);
					}
				}
				goto label_0597336d;
			}
			if (pSVar6 == null) goto label_0597336d;
	label_05973202: ;
			if (0 < (int)pSVar6.Length) {
				pSVar7 = pSVar6[0];
				if (pSVar7 != null) {
					ppSVar8 = &".txt";
	label_059732d1: ;
					pSVar7.Replace(*ppSVar8, "");
					throw new NullReferenceException();
				}
				goto label_0597336d;
			}
		}
		if (__this != null) {
			pSVar5 = (String[])__this.ToArray();
			return pSVar5;
		}
	label_0597336d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60018D5")]
	[Address(RVA = "0x5874260", Offset = "0x5873260", VA = "0x5874260")]
	private static Dictionary<string, JSONNode> GetSandboxMiscSettings(string category, string mapName, string gameMode)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$GetSandboxMiscSettings): 5 lines keep C-only constructs
		bool bVar1;
		JSONNode a;
		JSONNode a_00;
		Dictionary<string, JSONNode> __this;
		byte[] auVar3 = new byte[16];

		if ((typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor == 0) {
		}
		a = BuiltinLevels.GetMap(category, mapName);
		a_00 = BuiltinLevels.GetGameMode(gameMode);
		__this = new Dictionary<string, JSONNode>();
		bVar1 = (a_00 != null);
		if (bVar1) {
			if (a_00 == null) goto label_05974431;
			bVar1 = a_00.HasKey("MiscSettings");
			if (bVar1) {
				auVar3 = (byte[])a_00.get_Item("MiscSettings");
				if ((typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor == 0) {
				}
				BuiltinLevels.MergeSandboxMiscSettings(__this, auVar3._0_8_);
			}
		}
		bVar1 = (a != null);
		if (bVar1) {
			if (a == null) {
	label_05974431: ;
				throw new NullReferenceException();
			}
			bVar1 = a.HasKey("MiscSettings");
			if (bVar1) {
				auVar3 = (byte[])a.get_Item("MiscSettings");
				if ((typeof(BuiltinLevels)._2).cctor_finished_or_no_cctor == 0) {
				}
				BuiltinLevels.MergeSandboxMiscSettings(__this, auVar3._0_8_);
			}
		}
		return __this;
	}

	[Token(Token = "0x60018D6")]
	[Address(RVA = "0x586F830", Offset = "0x586E830", VA = "0x586F830")]
	private static JSONNode GetMap(string category, string mapName)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$GetMap): 6 lines keep C-only constructs
		bool bVar1;
		JSONNode pSVar2;
		JSONNode pSVar3;
		KeyValuePair<string, JSONNode> SVar4;
		JSONNode.Enumerator local_118;
		JSONNode.Enumerator local_c8;
		JSONNode.Enumerator local_78;

		local_c8.m_Array._list = null;
		local_c8.m_Array._index = 0;
		local_c8.m_Array._version = 0;
		local_c8.m_Object._current.value = null;
		local_c8.m_Object._getEnumeratorRetType = 0;
		local_c8.m_Object._36_4_ = 0;
		local_c8.m_Object._version = 0;
		local_c8.m_Object._index = 0;
		local_c8.m_Object._current.key = null;
		local_c8.type = 0;
		local_c8._4_4_ = 0;
		local_c8.m_Object._dictionary = null;
		local_c8.m_Array._current = null;
		local_118.m_Array._list = null;
		local_118.m_Array._index = 0;
		local_118.m_Array._version = 0;
		local_118.m_Object._current.value = null;
		local_118.m_Object._getEnumeratorRetType = 0;
		local_118.m_Object._36_4_ = 0;
		local_118.m_Object._version = 0;
		local_118.m_Object._index = 0;
		local_118.m_Object._current.key = null;
		local_118.type = 0;
		local_118._4_4_ = 0;
		local_118.m_Object._dictionary = null;
		local_118.m_Array._current = null;
		pSVar2 = BuiltinLevels._info;
		if ((pSVar2 == null) ||(pSVar2 = pSVar2.get_Item("MapCategories"), pSVar2 == null)) {
	label_0596fb0b: ;
			throw new NullReferenceException();
		}
		local_c8.unknown(pSVar2);
		bVar1 = local_c8.MoveNext();
		if (bVar1) {
			do {
				SVar4 = local_c8.Current;
				pSVar2 = ((JSONNode)SVar4);
				if (pSVar2 == null) goto label_0596fb0b;
				pSVar3 = pSVar2.get_Item("Name");
				bVar1 = (pSVar3 == (object)category);
				if (bVar1) {
					pSVar2 = pSVar2.get_Item("Maps");
					if (pSVar2 == null) goto label_0596fb0b;
					local_78.unknown(pSVar2);
					local_118.m_Array._current = local_78.m_Array._current;
					local_118.m_Array._list = local_78.m_Array._list;
					local_118.m_Array._index = local_78.m_Array._index;
					local_118.m_Array._version = local_78.m_Array._version;
					local_118.m_Object._current.value = local_78.m_Object._current.value;
					local_118.m_Object._getEnumeratorRetType = local_78.m_Object._getEnumeratorRetType;
					local_118.m_Object._36_4_ = local_78.m_Object._36_4_;
					local_118.m_Object._version = local_78.m_Object._version;
					local_118.m_Object._index = local_78.m_Object._index;
					local_118.m_Object._current.key = local_78.m_Object._current.key;
					local_118.type = local_78.type;
					local_118._4_4_ = local_78._4_4_;
					local_118.m_Object._dictionary = local_78.m_Object._dictionary;
					while (bVar1 = local_118.MoveNext()) {
						SVar4 = local_118.Current;
						pSVar2 = ((JSONNode)SVar4);
						if (pSVar2 == null) goto label_0596fb0b;
						pSVar3 = pSVar2.get_Item("Name");
						bVar1 = (pSVar3 == (object)mapName);
						if (bVar1) {
							return pSVar2;
						}
					}
				}
				bVar1 = local_c8.MoveNext();
			} while (bVar1);
		}
		return null;
	}

	[Token(Token = "0x60018D7")]
	[Address(RVA = "0x5872D20", Offset = "0x5871D20", VA = "0x5872D20")]
	private static JSONNode GetCategory(string category)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$GetCategory): 2 lines keep C-only constructs
		bool bVar1;
		JSONNode pSVar2;
		JSONNode a;
		KeyValuePair<string, JSONNode> aKeyValue;
		JSONNode.Enumerator local_78;

		local_78.m_Array._list = null;
		local_78.m_Array._index = 0;
		local_78.m_Array._version = 0;
		local_78.m_Object._current.value = null;
		local_78.m_Object._getEnumeratorRetType = 0;
		local_78.m_Object._36_4_ = 0;
		local_78.m_Object._version = 0;
		local_78.m_Object._index = 0;
		local_78.m_Object._current.key = null;
		local_78.type = 0;
		local_78._4_4_ = 0;
		local_78.m_Object._dictionary = null;
		local_78.m_Array._current = null;
		pSVar2 = BuiltinLevels._info;
		if (pSVar2 != null) {
			pSVar2 = pSVar2.get_Item("MapCategories");
			if (pSVar2 != null) {
				local_78.unknown(pSVar2);
				while(true) {
					bVar1 = local_78.MoveNext();
					if (!bVar1) {
						return null;
					}
					aKeyValue = local_78.Current;
					pSVar2 = ((JSONNode)aKeyValue);
					if (pSVar2 == null) break;
					a = pSVar2.get_Item("Name");
					bVar1 = (a == (object)category);
					if (bVar1) {
						return pSVar2;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60018D8")]
	[Address(RVA = "0x5874440", Offset = "0x5873440", VA = "0x5874440")]
	private static JSONNode GetGameMode(string gameMode)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$GetGameMode): 2 lines keep C-only constructs
		bool bVar1;
		JSONNode pSVar2;
		JSONNode a;
		KeyValuePair<string, JSONNode> aKeyValue;
		JSONNode.Enumerator local_78;

		local_78.m_Array._list = null;
		local_78.m_Array._index = 0;
		local_78.m_Array._version = 0;
		local_78.m_Object._current.value = null;
		local_78.m_Object._getEnumeratorRetType = 0;
		local_78.m_Object._36_4_ = 0;
		local_78.m_Object._version = 0;
		local_78.m_Object._index = 0;
		local_78.m_Object._current.key = null;
		local_78.type = 0;
		local_78._4_4_ = 0;
		local_78.m_Object._dictionary = null;
		local_78.m_Array._current = null;
		pSVar2 = BuiltinLevels._info;
		if (pSVar2 != null) {
			pSVar2 = pSVar2.get_Item("GameModes");
			if (pSVar2 != null) {
				local_78.unknown(pSVar2);
				while(true) {
					bVar1 = local_78.MoveNext();
					if (!bVar1) {
						return null;
					}
					aKeyValue = local_78.Current;
					pSVar2 = ((JSONNode)aKeyValue);
					if (pSVar2 == null) break;
					a = pSVar2.get_Item("Name");
					bVar1 = (a == (object)gameMode);
					if (bVar1) {
						return pSVar2;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60018D9")]
	[Address(RVA = "0x58745C0", Offset = "0x58735C0", VA = "0x58745C0")]
	private static void MergeSandboxMiscSettings(Dictionary<string, JSONNode> current, JSONNode node)
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$MergeSandboxMiscSettings): 4 lines keep C-only constructs
		bool bVar1;
		String key;
		object value;
		JSONNode.Enumerator local_118;
		JSONNode.Enumerator local_c8;
		JSONNode.Enumerator local_78;

		local_118.m_Array._list = null;
		local_118.m_Array._index = 0;
		local_118.m_Array._version = 0;
		local_118.m_Object._current.value = null;
		local_118.m_Object._getEnumeratorRetType = 0;
		local_118.m_Object._36_4_ = 0;
		local_118.m_Object._version = 0;
		local_118.m_Object._index = 0;
		local_118.m_Object._current.key = null;
		local_118.type = 0;
		local_118._4_4_ = 0;
		local_118.m_Object._dictionary = null;
		local_118.m_Array._current = null;
		if (node == null) {
			throw new NullReferenceException();
		}
		local_78 = node.Keys;
		local_c8.m_Array._current = local_78.m_Array._current;
		local_c8.m_Array._list = local_78.m_Array._list;
		local_c8.m_Array._index = local_78.m_Array._index;
		local_c8.m_Array._version = local_78.m_Array._version;
		local_c8.m_Object._current.value = local_78.m_Object._current.value;
		local_c8.m_Object._getEnumeratorRetType = local_78.m_Object._getEnumeratorRetType;
		local_c8.m_Object._36_4_ = local_78.m_Object._36_4_;
		local_c8.m_Object._version = local_78.m_Object._version;
		local_c8.m_Object._index = local_78.m_Object._index;
		local_c8.m_Object._current.key = local_78.m_Object._current.key;
		local_c8.type = local_78.type;
		local_c8._4_4_ = local_78._4_4_;
		local_c8.m_Object._dictionary = local_78.m_Object._dictionary;
		local_118 = local_c8.GetEnumerator();
		bVar1 = local_118.MoveNext();
		if (bVar1) {
			if (current == null) {
				local_118.Current;
				throw new NullReferenceException();
			}
			do {
				key = local_118.Current;
				bVar1 = current.ContainsKey((object)key);
				value = (object)node.get_Item(key);
				if (bVar1) {
					current.set_Item((object)key, value);
				}
				else {
					current.Add((object)key, value);
				}
				bVar1 = local_118.MoveNext();
			} while (bVar1);
		}
		return;
	}

	[Token(Token = "0x60018DA")]
	[Address(RVA = "0x5874770", Offset = "0x5873770", VA = "0x5874770")]
	public BuiltinLevels()
	{
		// Lifted from source/cpp/Map/BuiltinLevels.c (Map.BuiltinLevels$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Map/BuiltinLevels.c.

	// Map.BuiltinLevels.<>c__DisplayClass12_0$$.ctor: clean
	private void c__DisplayClass12_0__ctor()
	{
		base();
		return;
	}

	// Map.BuiltinLevels$$.cctor: clean
	static BuiltinLevels()
	{
		Map_BuiltinLevels_StaticFields pMVar1;

		pMVar1 = typeof(BuiltinLevels).static_fields;
		pMVar1.CustomMapFolderPath = FolderPaths.CustomMap;
		pMVar1 = typeof(BuiltinLevels).static_fields;
		pMVar1.CustomMapAutosaveFolderPath = FolderPaths.CustomMapAutosave;
		pMVar1 = typeof(BuiltinLevels).static_fields;
		pMVar1.CustomMapBackupsFolderPath = FolderPaths.CustomMapBackups;
		pMVar1 = typeof(BuiltinLevels).static_fields;
		pMVar1.CustomLogicFolderPath = FolderPaths.CustomLogic;
		pMVar1 = typeof(BuiltinLevels).static_fields;
		pMVar1.CustomAddonFolderPath = FolderPaths.CustomAddon;
		pMVar1 = typeof(BuiltinLevels).static_fields;
		pMVar1.UseMapLogic = "Map Logic";
		return;
	}

	// Map.BuiltinLevels.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new BuiltinLevels.c();
		BuiltinLevels.c.__9 = (BuiltinLevels.c)__this;
		return;
	}

	// Map.BuiltinLevels.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Map.BuiltinLevels.<>c$$<ResolveExperiencePreview>b__14_0: clean
	private bool c__ResolveExperiencePreview_b__14_0(String path)
	{
		bool bVar1;

		bVar1 = String.IsNullOrEmpty(path);
		return !bVar1;
	}

	// Map.BuiltinLevels.<>c$$<GetExperienceDefinitions>b__17_0: clean
	private bool c__GetExperienceDefinitions_b__17_0(UIRule rule)
	{
		bool bVar1;

		if (rule == null) {
			throw new NullReferenceException();
		}
		bVar1 = (rule.SettingId == "general.MapName");
		return bVar1;
	}

	// Map.BuiltinLevels.<>c$$<GetExperienceDefinitions>b__17_1: clean
	private bool c__GetExperienceDefinitions_b__17_1(UIRule rule)
	{
		bool bVar1;

		if (rule == null) {
			throw new NullReferenceException();
		}
		bVar1 = (rule.SettingId == "general.MapCategory");
		return bVar1;
	}

	// Map.BuiltinLevels.<>c$$<GetExperienceDefinitions>b__17_2: 2 lines keep C-only constructs
	private bool c__GetExperienceDefinitions_b__17_2(String rule)
	{
		bool bVar1;
		object rawRules;
		List<UIRule> __this_00;
		UIRule pSVar2;

		rawRules = new string[1];
		if (rawRules != null) {
			if (*(int)&rawRules[1].monitor == 0) {
				throw new IndexOutOfRangeException();
			}
			rawRules[2].klass = (Il2CppClass)rule;
			__this_00 = RuleParser.Parse((IEnumerable<string>)rawRules, null);
			if (__this_00 != null) {
				pSVar2 = __this_00.get_Item(0);
				if (pSVar2 != null) {
					bVar1 = String.Equals(pSVar2.SettingId, "general.MapName", 5);
					return !bVar1;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Map.BuiltinLevels.<>c$$<ComposeUIRules>b__19_0: clean
	private bool c__ComposeUIRules_b__19_0(String rule)
	{
		return rule != null;
	}

	// Map.BuiltinLevels.<>c$$<GetTxtFiles>b__52_0: clean
	private String c__GetTxtFiles_b__52_0(String f)
	{
		uint uVar1;
		String pSVar2;

		if (Il2CppMethodInitialized_075459c7 == false) {
			Il2CppMethodInitialized_075459c7 = true;
			uVar1 = (typeof(Path)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Path)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return pSVar2;
		}
		return pSVar2;
	}

	// Map.BuiltinLevels.<>c$$<GetClFiles>b__53_0: clean
	private String c__GetClFiles_b__53_0(String f)
	{
		uint uVar1;
		String pSVar2;

		if (Il2CppMethodInitialized_075459c8 == false) {
			Il2CppMethodInitialized_075459c8 = true;
			uVar1 = (typeof(Path)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Path)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return pSVar2;
		}
		return pSVar2;
	}

	// Map.BuiltinLevels.<>c__DisplayClass12_0$$<HasExperienceScoring>b__0: clean
	private bool c__DisplayClass12_0__HasExperienceScoring_b__0(Experience experience)
	{
		bool bVar1;

		if (experience == null) {
			throw new NullReferenceException();
		}
		if (experience.HasScoring != false) {
			bVar1 = String.Equals(experience.Category, this.category, 5);
			if (bVar1) {
				bVar1 = String.Equals(experience.SubCategory, this.subCategory, 5);
				if (bVar1) {
					bVar1 = String.Equals(experience.Name, this.name, 5);
					return bVar1;
				}
			}
		}
		return false;
	}

	// Map.BuiltinLevels.<>c__DisplayClass16_0$$.ctor: clean
	private void c__DisplayClass16_0__ctor()
	{
		base();
		return;
	}

	// Map.BuiltinLevels.<>c__DisplayClass16_0$$<FindExperience>b__0: clean
	private bool c__DisplayClass16_0__FindExperience_b__0(BuiltinLevels.BuiltinExperienceDefinition definition)
	{
		bool bVar1;

		if (definition == null) {
			throw new NullReferenceException();
		}
		bVar1 = String.Equals(definition.Name, this.name, 5);
		return bVar1;
	}
}
