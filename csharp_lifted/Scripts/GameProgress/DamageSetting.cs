// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.DamageSetting
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/GameProgress/DamageSetting.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/DamageSetting.cs
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

namespace GameProgress;

[Token(Token = "0x2000363")]
internal class DamageSetting : BaseSetting
{
	[Token(Token = "0x2000366")]
	[CompilerGenerated]
	private sealed class _003CGetStatLabels_003Ed__19 : IEnumerable<(string, string)>, IEnumerable, IEnumerator<(string, string)>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40010EF")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40010F0")]
		[FieldOffset(Offset = "0x18")]
		private (string title, string value) _003C_003E2__current;

		[Token(Token = "0x40010F1")]
		[FieldOffset(Offset = "0x28")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40010F2")]
		[FieldOffset(Offset = "0x30")]
		public DamageSetting _003C_003E4__this;

		[Token(Token = "0x40010F3")]
		[FieldOffset(Offset = "0x38")]
		private List<KeyValuePair<string, JSONNode>> _003CrootPairs_003E5__2;

		[Token(Token = "0x40010F4")]
		[FieldOffset(Offset = "0x40")]
		private string _003Coverall_003E5__3;

		[Token(Token = "0x40010F5")]
		[FieldOffset(Offset = "0x48")]
		private List<KeyValuePair<string, JSONNode>>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x40010F6")]
		[FieldOffset(Offset = "0x68")]
		private KeyValuePair<string, JSONNode> _003Cokvp_003E5__5;

		[Token(Token = "0x40010F7")]
		[FieldOffset(Offset = "0x78")]
		private JSONNode.Enumerator _003C_003E7__wrap5;

		[Token(Token = "0x1700024E")]
		private (string, string) System_002ECollections_002EGeneric_002EIEnumerator_003C_0028System_002EStringtitle_002CSystem_002EStringvalue_0029_003E_002ECurrent
		{
			[Token(Token = "0x6001523")]
			[Address(RVA = "0x581F080", Offset = "0x581E080", VA = "0x581F080", Slot = "6")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameProgress/DamageSetting.c (GameProgress.DamageSetting.<GetStatLabels>d__19$$System.Collections.Generic.IEnumerator<(System.Stringtitle,System.Stringvalue)>.get_Current): clean
				return (ValueTuple<string, string>)this.__2__current;
			}
		}

		[Token(Token = "0x1700024F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001525")]
			[Address(RVA = "0x581F0D0", Offset = "0x581E0D0", VA = "0x581F0D0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/GameProgress/DamageSetting.c (GameProgress.DamageSetting.<GetStatLabels>d__19$$System.Collections.IEnumerator.get_Current): clean
				object pIVar1;

				return pIVar1;
			}
		}

		[Token(Token = "0x600151E")]
		[Address(RVA = "0x581DCD0", Offset = "0x581CCD0", VA = "0x581DCD0")]
		[DebuggerHidden]
		public _003CGetStatLabels_003Ed__19(int _003C_003E1__state)
		{
			// Lifted from source/cpp/GameProgress/DamageSetting.c (GameProgress.DamageSetting.<GetStatLabels>d__19$$.ctor): clean
			int iVar1;

			base();
			this.__1__state = __1__state;
			iVar1 = Environment.CurrentManagedThreadId;
			this.__l__initialThreadId = iVar1;
			return;
		}

		[Token(Token = "0x600151F")]
		[Address(RVA = "0x581E440", Offset = "0x581D440", VA = "0x581E440", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/GameProgress/DamageSetting.c (GameProgress.DamageSetting.<GetStatLabels>d__19$$System.IDisposable.Dispose): 2 lines keep C-only constructs
			int iVar1;
			byte puVar2;

			iVar1 = this.__1__state;
			if (iVar1 < -2) {
				if (iVar1 != -4) {
					if (iVar1 != -3) {
						return;
					}
					goto label_0591e46b;
				}
		label_0591e47d: ;
				if (Il2CppMethodInitialized_07545741 != false) goto label_0591e49d;
				puVar2 = &Il2CppMethodInitialized_07545741;
			}
			else {
				if (iVar1 == 4) goto label_0591e47d;
				if (iVar1 != 2) {
					return;
				}
		label_0591e46b: ;
				if (Il2CppMethodInitialized_07545740 != false) goto label_0591e49d;
				puVar2 = &Il2CppMethodInitialized_07545740;
			}
			*puVar2 = 1;
		label_0591e49d: ;
			this.__1__state = -1;
			(this.__7__wrap3).Dispose();
			return;
		}

		[Token(Token = "0x6001520")]
		[Address(RVA = "0x581E4D0", Offset = "0x581D4D0", VA = "0x581E4D0", Slot = "8")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/GameProgress/DamageSetting.c (GameProgress.DamageSetting.<GetStatLabels>d__19$$MoveNext): 55 lines keep C-only constructs
			uint uVar1;
			DamageSetting __this_00;
			object @object;
			JSONNode pSVar2;
			JSONNode.Enumerator pSVar3;
			DamageSetting.d__19<GetStatLabels> pGVar4;
			bool bVar5;
			IEnumerable<KeyValuePair<string, JSONNode>> source;
			GameProgress_DamageSetting___c_StaticFields pGVar6;
			Func<T, TResult> __this_01;
			System_Collections_Generic_IEnumerable_TSource__o source_00;
			System_Collections_Generic_List_KeyValuePair_string__JSONNode___o pSVar7;
			String pSVar8;
			long plVar9;
			ulong uVar10;
			String pSVar11;
			MethodInfo extraout_RDX;
			MethodInfo extraout_RDX_00;
			MethodInfo pMVar12;
			MethodInfo extraout_RDX_01;
			MethodInfo pMVar13;
			MethodInfo extraout_RDX_02;
			System_ValueTuple_ulong__ulong__o SVar14;
			KeyValuePair<string, JSONNode> SVar15;
			DamageSetting.d__19<GetStatLabels> pGStack_e0;
			System_ValueTuple_object__object__o SStack_d8;
			byte[] auStack_88 = new byte[16];
			String pSStack_78;
			object pIStack_70;
			object pIStack_68;
			ulong uStack_60;
			List<T> pSStack_58;
			ulong uStack_50;
			JSONNode pSStack_48;
			DamageSetting.d__19<GetStatLabels>* ppGStack_38;

			pGStack_e0 = this;
			if (Il2CppMethodInitialized_0754573f == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_GameProgress_DamageSetting_c_GetStatLabels_b__19_0) ;
				Il2CppMethodInitialized_0754573f = true;
			}
			ppGStack_38 = &pGStack_e0;
			uVar1 = this.__1__state;
			if (uVar1 < 5) {
				__this_00 = this.__4__this;
				switch(uVar1) {
				case 0:
					this.__1__state = -1;
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					pSVar2 = __this_00.root;
					if (pSVar2 == null) {
						throw new NullReferenceException();
					}
					source = pSVar2.Linq;
					pGVar4 = pGStack_e0;
					pGVar6 = typeof(DamageSetting.c).static_fields;
					__this_01 = (Func<T, TResult>)pGVar6.__9__19_0;
					if (__this_01 == null) {
						if ((typeof(DamageSetting.c)._2).cctor_finished_or_no_cctor == 0) {
							pGVar6 = typeof(DamageSetting.c).static_fields;
						}
						@object = (object)pGVar6.__9;
						__this_01 = new Func<KeyValuePair<string, JSONNode>, bool>(@object, (intptr_t)MethodInfo_GameProgress_DamageSetting_c_GetStatLabels_b__19_0);
						pGVar6 = typeof(DamageSetting.c).static_fields;
						pGVar6.__9__19_0 = (Func<KeyValuePair<string, JSONNode>, bool>)__this_01;
					}
					source_00 = Enumerable.Where<KeyValuePair<string, JSONNode>>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_01);
					pSVar7 = (System_Collections_Generic_List_KeyValuePair_string__JSONNode___o)Enumerable.ToList<KeyValuePair<string, JSONNode>>(source_00);
					if (pGVar4 == null) {
						throw new NullReferenceException();
					}
					pGVar4._rootPairs_5__2 = pSVar7;
					pSVar7 = pGStack_e0._rootPairs_5__2;
					if (pSVar7 == null) {
						throw new NullReferenceException();
					}
					pSVar7.Sort((Comparison<T>)DamageSetting.Comparison);
					pSVar11 = "Overall";
					pSVar8 = "";
					pSVar8 = UIManager.GetLocale("MainMenu", "Profile.Stats", pSVar11, "", pSVar8);
					pGStack_e0._overall_5__3 = pSVar8;
					pMVar13 = (MethodInfo)pGStack_e0._overall_5__3;
					pSVar8 = DamageSetting.StatLabel("Highest", (String)pMVar13);
					SVar14 = __this_00.Overall;
					pSVar11 = Format.Suffix(SVar14.Item1);
					SStack_d8.Item1 = null;
					SStack_d8.Item2 = null;
					SStack_d8 = new ValueTuple<@object, @object>((object)pSVar8, (object)pSVar11);
					pGStack_e0.__2__current.Item1 = (String)SStack_d8.Item1;
					pGStack_e0.__2__current.Item2 = (String)SStack_d8.Item2;
					pGStack_e0.__1__state = 1;
					break;
				case 1:
					this.__1__state = -1;
					pSVar7 = this._rootPairs_5__2;
					if (pSVar7 == null) {
						throw new NullReferenceException();
					}
					auStack_88.GetEnumerator((List<T>)pSVar7);
					SStack_d8.Item1 = (object)auStack_88._0_8_;
					SStack_d8.Item2 = (object)auStack_88._8_8_;
					pGStack_e0.__7__wrap3._current.key = pSStack_78;
					pGStack_e0.__7__wrap3._current.value = (JSONNode)pIStack_70;
					pGStack_e0.__7__wrap3._list = (List<T>)auStack_88._0_8_;
					pGStack_e0.__7__wrap3._index = auStack_88._8_4_;
					pGStack_e0.__7__wrap3._version = auStack_88._12_4_;
					pGStack_e0.__1__state = -3;
					while(true) {
						bVar5 = (pGStack_e0.__7__wrap3).MoveNext();
						pGVar4 = pGStack_e0;
						if (!bVar5) break;
						pSVar2 = pGStack_e0.__7__wrap3._current.value;
						pGStack_e0._okvp_5__5.key =pGStack_e0.__7__wrap3._current.key;
						pGStack_e0._okvp_5__5.value = pSVar2;
						pSVar2 = pGStack_e0._okvp_5__5.value;
						if (pSVar2 == null) {
							throw new NullReferenceException();
						}
						auStack_88.unknown(pSVar2);
						SStack_d8.Item1 = (object)auStack_88._0_8_;
						SStack_d8.Item2 = (object)auStack_88._8_8_;
						pGStack_e0.__7__wrap5.m_Array._current = pSStack_48;
						pGStack_e0.__7__wrap5.m_Array._list = pSStack_58;
						pSVar3 = &pGStack_e0.__7__wrap5;
						pSVar3.m_Array._index = (undefined4)uStack_50;
						pSVar3.m_Array._version = uStack_50._4_4_;
						pGStack_e0.__7__wrap5.m_Object._current.value = pIStack_68;
						*(ulong)&pGStack_e0.__7__wrap5.m_Object._getEnumeratorRetType = uStack_60;
						*(String*)&pGStack_e0.__7__wrap5.m_Object._version = pSStack_78;
						pGStack_e0.__7__wrap5.m_Object._current.key = pIStack_70;
						*(ulong)&pGStack_e0.__7__wrap5 = auStack_88._0_8_;
						pGStack_e0.__7__wrap5.m_Object._dictionary =(Dictionary<TKey, TValue>)auStack_88._8_8_;
						this = pGStack_e0;
		label_0591ea7b: ;
						bVar5 = (this.__7__wrap5).MoveNext();
						if (bVar5) {
							SVar15 = (pGStack_e0.__7__wrap5).Current;
							pMVar12 = (MethodInfo)SVar15.value;
							pSVar8 = pGStack_e0._okvp_5__5.key;
							pMVar13 = pMVar12;
							if ((typeof(DamageSetting)._2).cctor_finished_or_no_cctor == 0) {
								pMVar13 = extraout_RDX_01;
							}
							pSVar8 = DamageSetting.MethodLabel(pSVar8, SVar15.key);
							pSVar8 = DamageSetting.StatLabel("Highest", pSVar8);
							if (pMVar12 == null) {
								throw new NullReferenceException();
							}
							plVar9 = (long)(**(code*)(pMVar12.methodPointer + 0x1a8))(pMVar12,"Highest", *(ulong)(pMVar12.methodPointer + 0x1b0));
							if (plVar9 == null) {
								throw new NullReferenceException();
							}
							uVar10 = (**(code*)(*plVar9 + 1000))(plVar9);
							pSVar11 = Format.Suffix(uVar10);
							SStack_d8.Item1 = null;
							SStack_d8.Item2 = null;
							SStack_d8 = new ValueTuple<@object, @object>((object)pSVar8, (object)pSVar11);
							pGStack_e0.__2__current.Item1 = (String)SStack_d8.Item1;
							pGStack_e0.__2__current.Item2 = (String)SStack_d8.Item2;
							pGStack_e0.__1__state = 2;
							goto label_0591ef60;
						}
						pGStack_e0.__7__wrap5.m_Array._list =null;
						pSVar3 = &pGStack_e0.__7__wrap5;
						pSVar3.m_Array._index = 0;
						pSVar3.m_Array._version = 0;
						pGStack_e0.__7__wrap5.m_Object._current.value = null;
						*(ulong)&pGStack_e0.__7__wrap5.m_Object._getEnumeratorRetType = 0;
						pSVar3 = &pGStack_e0.__7__wrap5;
						pSVar3.m_Object._version = 0;
						pSVar3.m_Object._index = 0;
						pGStack_e0.__7__wrap5.m_Object._current.key = null;
						*(ulong)&pGStack_e0.__7__wrap5 = 0;
						pGStack_e0.__7__wrap5.m_Object._dictionary =null;
						pGStack_e0._okvp_5__5.key = null;
						pGStack_e0._okvp_5__5.value = null;
						pGStack_e0.__7__wrap5.m_Array._current = null;
					}
					pGVar4.__1__state = -1;
					(pGVar4.__7__wrap3).Dispose();
					pGStack_e0.__7__wrap3._current.key = null;
					pGStack_e0.__7__wrap3._current.value = null;
					pGStack_e0.__7__wrap3._list = null;
					pGStack_e0.__7__wrap3._index = 0;
					pGStack_e0.__7__wrap3._version = 0;
					pMVar13 = (MethodInfo)pGStack_e0._overall_5__3;
					pMVar12 = extraout_RDX;
					if ((typeof(DamageSetting)._2).cctor_finished_or_no_cctor == 0) {
						pMVar12 = extraout_RDX_00;
					}
					pSVar8 = DamageSetting.StatLabel("Total", (String)pMVar13) ;
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					SVar14 = __this_00.Overall;
					pSVar11 = Format.Suffix(SVar14.Item2);
					SStack_d8.Item1 = null;
					SStack_d8.Item2 = null;
					SStack_d8 = new ValueTuple<@object, @object>((object)pSVar8, (object)pSVar11);
					pGStack_e0.__2__current.Item1 = (String)SStack_d8.Item1;
					pGStack_e0.__2__current.Item2 = (String)SStack_d8.Item2;
					pGStack_e0.__1__state = 3;
					break;
				case 2:
					this.__1__state = -3;
					goto label_0591ea7b;
				case 3:
					this.__1__state = -1;
					pSVar7 = this._rootPairs_5__2;
					if (pSVar7 == null) {
						throw new NullReferenceException();
					}
					auStack_88.GetEnumerator((List<T>)pSVar7);
					SStack_d8.Item1 = (object)auStack_88._0_8_;
					SStack_d8.Item2 = (object)auStack_88._8_8_;
					pGStack_e0.__7__wrap3._current.key = pSStack_78;
					pGStack_e0.__7__wrap3._current.value = (JSONNode)pIStack_70;
					pGStack_e0.__7__wrap3._list = (List<T>)auStack_88._0_8_;
					pGStack_e0.__7__wrap3._index = auStack_88._8_4_;
					pGStack_e0.__7__wrap3._version = auStack_88._12_4_;
					pGStack_e0.__1__state = -4;
					while(true) {
						bVar5 = (pGStack_e0.__7__wrap3).MoveNext();
						pGVar4 = pGStack_e0;
						if (!bVar5) break;
						pSVar2 = pGStack_e0.__7__wrap3._current.value;
						pGStack_e0._okvp_5__5.key =pGStack_e0.__7__wrap3._current.key;
						pGStack_e0._okvp_5__5.value = pSVar2;
						pSVar2 = pGStack_e0._okvp_5__5.value;
						if (pSVar2 == null) {
							throw new NullReferenceException();
						}
						auStack_88.unknown(pSVar2);
						SStack_d8.Item1 = (object)auStack_88._0_8_;
						SStack_d8.Item2 = (object)auStack_88._8_8_;
						pGStack_e0.__7__wrap5.m_Array._current = pSStack_48;
						pGStack_e0.__7__wrap5.m_Array._list = pSStack_58;
						pSVar3 = &pGStack_e0.__7__wrap5;
						pSVar3.m_Array._index = (undefined4)uStack_50;
						pSVar3.m_Array._version = uStack_50._4_4_;
						pGStack_e0.__7__wrap5.m_Object._current.value = pIStack_68;
						*(ulong)&pGStack_e0.__7__wrap5.m_Object._getEnumeratorRetType = uStack_60;
						*(String*)&pGStack_e0.__7__wrap5.m_Object._version = pSStack_78;
						pGStack_e0.__7__wrap5.m_Object._current.key = pIStack_70;
						*(ulong)&pGStack_e0.__7__wrap5 = auStack_88._0_8_;
						pGStack_e0.__7__wrap5.m_Object._dictionary =(Dictionary<TKey, TValue>)auStack_88._8_8_;
						this = pGStack_e0;
		label_0591edca: ;
						bVar5 = (this.__7__wrap5).MoveNext();
						if (bVar5) {
							SVar15 = (pGStack_e0.__7__wrap5).Current;
							pMVar12 = (MethodInfo)SVar15.value;
							pSVar8 = pGStack_e0._okvp_5__5.key;
							pMVar13 = pMVar12;
							if ((typeof(DamageSetting)._2).cctor_finished_or_no_cctor == 0) {
								pMVar13 = extraout_RDX_02;
							}
							pSVar8 = DamageSetting.MethodLabel(pSVar8, SVar15.key);
							pSVar8 = DamageSetting.StatLabel("Total", pSVar8);
							if (pMVar12 == null) {
								throw new NullReferenceException();
							}
							plVar9 = (long)(**(code*)(pMVar12.methodPointer + 0x1a8))(pMVar12,"Total", *(ulong)(pMVar12.methodPointer + 0x1b0));
							if (plVar9 == null) {
								throw new NullReferenceException();
							}
							uVar10 = (**(code*)(*plVar9 + 1000))(plVar9);
							pSVar11 = Format.Suffix(uVar10);
							SStack_d8.Item1 = null;
							SStack_d8.Item2 = null;
							SStack_d8 = new ValueTuple<@object, @object>((object)pSVar8, (object)pSVar11);
							pGStack_e0.__2__current.Item1 = (String)SStack_d8.Item1;
							pGStack_e0.__2__current.Item2 = (String)SStack_d8.Item2;
							pGStack_e0.__1__state = 4;
							goto label_0591ef60;
						}
						pGStack_e0.__7__wrap5.m_Array._list =null;
						pSVar3 = &pGStack_e0.__7__wrap5;
						pSVar3.m_Array._index = 0;
						pSVar3.m_Array._version = 0;
						pGStack_e0.__7__wrap5.m_Object._current.value = null;
						*(ulong)&pGStack_e0.__7__wrap5.m_Object._getEnumeratorRetType = 0;
						pSVar3 = &pGStack_e0.__7__wrap5;
						pSVar3.m_Object._version = 0;
						pSVar3.m_Object._index = 0;
						pGStack_e0.__7__wrap5.m_Object._current.key = null;
						*(ulong)&pGStack_e0.__7__wrap5 = 0;
						pGStack_e0.__7__wrap5.m_Object._dictionary =null;
						pGStack_e0._okvp_5__5.key = null;
						pGStack_e0._okvp_5__5.value = null;
						pGStack_e0.__7__wrap5.m_Array._current = null;
					}
					pGVar4.__1__state = -1;
					(pGVar4.__7__wrap3).Dispose();
					pGStack_e0.__7__wrap3._current.key = null;
					pGStack_e0.__7__wrap3._current.value = null;
					pGStack_e0.__7__wrap3._list = null;
					pGStack_e0.__7__wrap3._index = 0;
					pGStack_e0.__7__wrap3._version = 0;
					goto label_0591ee79;
				case 4:
					this.__1__state = -4;
					goto label_0591edca;
				}
		label_0591ef60: ;
				bVar5 = true;
			}
			else {
		label_0591ee79: ;
				bVar5 = false;
			}
			return bVar5;
		}

		[Token(Token = "0x6001521")]
		[Address(RVA = "0x581F000", Offset = "0x581E000", VA = "0x581F000")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/GameProgress/DamageSetting.c (GameProgress.DamageSetting.<GetStatLabels>d__19$$<>m__Finally1): clean
			this.__1__state = -1;
			(this.__7__wrap3).Dispose();
			return;
		}

		[Token(Token = "0x6001522")]
		[Address(RVA = "0x581F040", Offset = "0x581E040", VA = "0x581F040")]
		private void _003C_003Em__Finally2()
		{
			// Lifted from source/cpp/GameProgress/DamageSetting.c (GameProgress.DamageSetting.<GetStatLabels>d__19$$<>m__Finally2): clean
			this.__1__state = -1;
			(this.__7__wrap3).Dispose();
			return;
		}

		[Token(Token = "0x6001524")]
		[Address(RVA = "0x581F090", Offset = "0x581E090", VA = "0x581F090", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/GameProgress/DamageSetting.c (GameProgress.DamageSetting.<GetStatLabels>d__19$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_GameProgress_DamageSetting_GetStatLabels_d__19_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}

		[Token(Token = "0x6001526")]
		[Address(RVA = "0x581F120", Offset = "0x581E120", VA = "0x581F120", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<(string, string)> System_002ECollections_002EGeneric_002EIEnumerable_003C_0028System_002EStringtitle_002CSystem_002EStringvalue_0029_003E_002EGetEnumerator()
		{
			// Lifted from source/cpp/GameProgress/DamageSetting.c (GameProgress.DamageSetting.<GetStatLabels>d__19$$System.Collections.Generic.IEnumerable<(System.Stringtitle,System.Stringvalue)>.GetEnumerator): clean
			int iVar1;
			int iVar2;
			DamageSetting.d__19<GetStatLabels> __this_00;

			if ((this.__1__state == -2) &&(iVar1 = this.__l__initialThreadId, iVar2 = Environment.CurrentManagedThreadId, iVar1 == iVar2)) {
				this.__1__state = 0;
				return (IEnumerator)this;
			}
			__this_00 = new DamageSetting.d__19<GetStatLabels>();
			__this_00.__1__state = 0;
			iVar2 = Environment.CurrentManagedThreadId;
			__this_00.__l__initialThreadId = iVar2;
			__this_00.__4__this = this.__4__this;
			return (IEnumerator)__this_00;
		}

		[Token(Token = "0x6001527")]
		[Address(RVA = "0x581F1C0", Offset = "0x581E1C0", VA = "0x581F1C0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			// Lifted from source/cpp/GameProgress/DamageSetting.c (GameProgress.DamageSetting.<GetStatLabels>d__19$$System.Collections.IEnumerable.GetEnumerator): clean
			IEnumerator pSVar1;

			pSVar1 = this.System.Collections.Generic.IEnumerable<(System.Stringtitle,System.Stringvalue)>.GetEnumerator();
			return pSVar1;
		}
	}

	[Token(Token = "0x40010E6")]
	private const string OverallKey = "Overall";

	[Token(Token = "0x40010E7")]
	private const string HighestKey = "Highest";

	[Token(Token = "0x40010E8")]
	private const string TotalKey = "Total";

	[Token(Token = "0x40010E9")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Comparison<KeyValuePair<string, JSONNode>> Comparison;

	[Token(Token = "0x40010EA")]
	[FieldOffset(Offset = "0x18")]
	private JSONNode root;

	[Token(Token = "0x1700024C")]
	private (ulong highest, ulong total) this[KillMethod method]
	{
		[Token(Token = "0x6001506")]
		[Address(RVA = "0x581CAB0", Offset = "0x581BAB0", VA = "0x581CAB0")]
		get
		{
			// Lifted from source/cpp/GameProgress/DamageSetting.c (GameProgress.DamageSetting$$get_Item): 11 lines keep C-only constructs
			System_ValueTuple_ulong__ulong__Fields SVar1;
			bool bVar2;
			sbyte cVar3;
			String pSVar4;
			JSONNode pSVar5;
			long plVar6;
			ulong item1;
			ulong item2;
			String value;
			System_ValueTuple_ulong__ulong__o local_58;
			Enum local_48;

			value = method.Special;
			pSVar5 = this.root;
			local_48.klass = (Enum)typeof(KillWeapon);
			local_48.monitor = (IntPtr)0xffffffffffffffff;
			pSVar4 = local_48.ToString();
			if (pSVar5 == null) goto label_0591cdf1;
			bVar2 = pSVar5.HasKey(pSVar4);
			if (bVar2) {
				pSVar5 = this.root;
				local_48.klass = (Enum)typeof(KillWeapon);
				local_48.monitor = (IntPtr)0xffffffffffffffff;
				pSVar4 = local_48.ToString();
				if (pSVar5 == null) {
		label_0591cdf1: ;
					throw new NullReferenceException();
				}
				pSVar5 = pSVar5.get_Item(pSVar4);
				bVar2 = String.IsNullOrEmpty(value);
				if (pSVar5 == null) goto label_0591cdf1;
				pSVar4 = value;
				if (bVar2) {
					pSVar4 = "None";
				}
				bVar2 = pSVar5.HasKey(pSVar4);
				if (bVar2) {
					pSVar5 = this.root;
					local_48.klass = (Enum)typeof(KillWeapon);
					local_48.monitor = (IntPtr)0xffffffffffffffff;
					pSVar4 = local_48.ToString();
					if (pSVar5 == null) goto label_0591cdf1;
					pSVar5 = pSVar5.get_Item(pSVar4);
					bVar2 = String.IsNullOrEmpty(value);
					if (pSVar5 == null) goto label_0591cdf1;
					if (bVar2) {
						value = "None";
					}
					pSVar5 = pSVar5.get_Item(value);
					if (pSVar5 == null) goto label_0591cdf1;
					cVar3 = (**(code*)((long)pSVar5.klass + 0x2f8))(pSVar5,"Highest",*(ulong)((long)pSVar5.klass + 0x300));
					if (cVar3 == false) {
						item1 = 0;
					}
					else {
						plVar6 = (long)(**(code*)((long)pSVar5.klass + 0x1a8))(pSVar5,"Highest",*(ulong)((long)pSVar5.klass + 0x1b0)) ;
						if (plVar6 == null) goto label_0591cdf1;
						item1 = (**(code*)(*plVar6 + 1000))(plVar6,*(ulong)(*plVar6 + 0x3f0));
					}
					cVar3 = (**(code*)((long)pSVar5.klass + 0x2f8))(pSVar5,"Total",*(ulong)((long)pSVar5.klass + 0x300));
					if (cVar3 == false) {
						item2 = 0;
					}
					else {
						plVar6 = (long)(**(code*)((long)pSVar5.klass + 0x1a8))(pSVar5,"Total",*(ulong)((long)pSVar5.klass + 0x1b0)) ;
						if (plVar6 == null) goto label_0591cdf1;
						item2 = (**(code*)(*plVar6 + 1000))(plVar6,*(ulong)(*plVar6 + 0x3f0));
					}
					goto label_0591cdd4;
				}
			}
			item1 = 0;
			item2 = 0;
		label_0591cdd4: ;
			local_58.Item2 = 0;
			local_58.Item1 = 0;
			local_58 = new ValueTuple<ulong, ulong>(item1, item2);
			SVar1.Item2 = local_58.Item2;
			SVar1.Item1 = local_58.Item1;
			return (System_ValueTuple_ulong__ulong__o)SVar1;
		}
		[Token(Token = "0x6001507")]
		[Address(RVA = "0x581CEB0", Offset = "0x581BEB0", VA = "0x581CEB0")]
		set
		{
			// Lifted from source/cpp/GameProgress/DamageSetting.c (GameProgress.DamageSetting$$set_Item): 7 lines keep C-only constructs
			bool bVar1;
			String pSVar2;
			JSONObject pSVar3;
			JSONNode pSVar4;
			JSONNode pSVar5;
			ulong uVar6;
			String value_00;
			int iVar7;
			ulong uVar8;
			Enum local_60;
			int local_44;
			ulong local_40;
			ulong local_38;

			uVar8 = value.Item2;
			uVar6 = value.Item1;
			value_00 = method.Special;
			pSVar4 = this.root;
			local_60.klass = (Enum)typeof(KillWeapon);
			local_60.monitor = (IntPtr)0xffffffffffffffff;
			iVar7 = method.Weapon;
			pSVar2 = local_60.ToString();
			if (pSVar4 != null) {
				bVar1 = pSVar4.HasKey(pSVar2);
				local_40 = uVar6;
				local_38 = uVar8;
				if (!bVar1) {
					pSVar4 = this.root;
					local_60.klass = (Enum)typeof(KillWeapon);
					local_60.monitor = (IntPtr)0xffffffffffffffff;
					pSVar2 = local_60.ToString();
					pSVar3 = new JSONObject();
					if (pSVar4 == null) goto label_0591d320;
					pSVar4.Add(pSVar2, (JSONNode)pSVar3);
				}
				uVar8 = local_38;
				uVar6 = local_40;
				pSVar4 = this.root;
				local_60.klass = (Enum)typeof(KillWeapon);
				local_60.monitor = (IntPtr)0xffffffffffffffff;
				pSVar2 = local_60.ToString();
				if (pSVar4 != null) {
					pSVar4 = pSVar4.get_Item(pSVar2);
					bVar1 = String.IsNullOrEmpty(value_00);
					if (pSVar4 != null) {
						pSVar2 = value_00;
						if (bVar1) {
							pSVar2 = "None";
						}
						bVar1 = pSVar4.HasKey(pSVar2);
						if (!bVar1) {
							pSVar4 = this.root;
							local_60.klass = (Enum)typeof(KillWeapon);
							local_60.monitor = (IntPtr)0xffffffffffffffff;
							pSVar2 = local_60.ToString();
							if (pSVar4 == null) goto label_0591d320;
							local_44 = iVar7;
							pSVar4 = pSVar4.get_Item(pSVar2);
							bVar1 = String.IsNullOrEmpty(value_00);
							pSVar2 = "None";
							pSVar3 = new JSONObject();
							if (pSVar4 == null) goto label_0591d320;
							if (!bVar1) {
								pSVar2 = value_00;
							}
							pSVar4.Add(pSVar2, (JSONNode)pSVar3);
							uVar8 = local_38;
							uVar6 = local_40;
							iVar7 = local_44;
						}
						pSVar4 = this.root;
						local_60.klass = (Enum)typeof(KillWeapon);
						local_60.monitor = (IntPtr)0xffffffffffffffff;
						pSVar2 = local_60.ToString();
						if (pSVar4 != null) {
							pSVar4 = pSVar4.get_Item(pSVar2);
							bVar1 = String.IsNullOrEmpty(value_00);
							if (pSVar4 != null) {
								if (bVar1) {
									value_00 = "None";
								}
								pSVar4 = pSVar4.get_Item(value_00);
								pSVar5 = ((JSONNode)uVar6);
								if (pSVar4 != null) {
									(**(code*)((long)pSVar4.klass + 0x1b8))(pSVar4,"Highest",pSVar5,*(ulong)((long)pSVar4.klass + 0x1c0));
									pSVar5 = ((JSONNode)uVar8);
									(**(code*)((long)pSVar4.klass + 0x1b8))(pSVar4,"Total",pSVar5,*(ulong)((long)pSVar4.klass + 0x1c0));
									return;
								}
							}
						}
					}
				}
			}
		label_0591d320: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700024D")]
	private (ulong highest, ulong total) Overall
	{
		[Token(Token = "0x6001508")]
		[Address(RVA = "0x581D330", Offset = "0x581C330", VA = "0x581D330")]
		get
		{
			// Lifted from source/cpp/GameProgress/DamageSetting.c (GameProgress.DamageSetting$$get_Overall): 4 lines keep C-only constructs
			System_ValueTuple_ulong__ulong__Fields SVar1;
			bool bVar2;
			JSONNode pSVar3;
			JSONNode pSVar4;
			ulong item1;
			ulong item2;
			System_ValueTuple_ulong__ulong__o local_28;

			pSVar3 = this.root;
			if (pSVar3 == null) {
		label_0591d4d1: ;
				throw new NullReferenceException();
			}
			bVar2 = pSVar3.HasKey("Overall");
			if (!bVar2) {
				item1 = 0;
				item2 = 0;
			}
			else {
				pSVar3 = this.root;
				if ((pSVar3 == null) ||(pSVar3 = pSVar3.get_Item("Overall"), pSVar3 == null)) goto label_0591d4d1;
				bVar2 = pSVar3.HasKey("Highest");
				if (bVar2) {
					pSVar4 = pSVar3.get_Item("Highest");
					if (pSVar4 == null) goto label_0591d4d1;
					item1 = (**(code*)((long)pSVar4.klass + 1000))(pSVar4,*(ulong)((long)pSVar4.klass + 0x3f0));
				}
				else {
					item1 = 0;
				}
				bVar2 = pSVar3.HasKey("Total");
				if (bVar2) {
					pSVar3 = pSVar3.get_Item("Total");
					if (pSVar3 == null) goto label_0591d4d1;
					item2 = (**(code*)((long)pSVar3.klass + 1000))(pSVar3,*(ulong)((long)pSVar3.klass + 0x3f0));
				}
				else {
					item2 = 0;
				}
			}
			local_28.Item2 = 0;
			local_28.Item1 = 0;
			local_28 = new ValueTuple<ulong, ulong>(item1, item2);
			SVar1.Item2 = local_28.Item2;
			SVar1.Item1 = local_28.Item1;
			return (System_ValueTuple_ulong__ulong__o)SVar1;
		}
		[Token(Token = "0x6001509")]
		[Address(RVA = "0x581D4E0", Offset = "0x581C4E0", VA = "0x581D4E0")]
		set
		{
			// Lifted from source/cpp/GameProgress/DamageSetting.c (GameProgress.DamageSetting$$set_Overall): 2 lines keep C-only constructs
			long lVar1;
			bool bVar2;
			JSONObject __this_00;
			JSONNode pSVar3;
			JSONNode pSVar4;

			pSVar3 = this.root;
			if (pSVar3 != null) {
				bVar2 = pSVar3.HasKey("Overall");
				if (!bVar2) {
					pSVar3 = this.root;
					__this_00 = new JSONObject();
					if (pSVar3 == null) goto label_0591d655;
					pSVar3.Add("Overall", (JSONNode)__this_00);
				}
				pSVar3 = this.root;
				if (pSVar3 != null) {
					pSVar3 = pSVar3.get_Item("Overall");
					if (pSVar3 != null) {
						pSVar4 = pSVar3.get_Item("Highest");
						if (pSVar4 != null) {
							(**(code*)((long)pSVar4.klass + 0x3f8))(pSVar4,value.Item1,*(ulong)((long)pSVar4.klass + 0x400));
							pSVar3 = pSVar3.get_Item("Total");
							if (pSVar3 != null) {
								lVar1 = (long)pSVar3.klass;
								(**(code*)(lVar1 + 0x3f8))(pSVar3,value.Item2,*(ulong)(lVar1 + 0x400),lVar1, *(code*)(lVar1 + 0x3f8));
								return;
							}
						}
					}
				}
			}
		label_0591d655: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x6001505")]
	[Address(RVA = "0x581C6F0", Offset = "0x581B6F0", VA = "0x581C6F0")]
	static DamageSetting()
	{
		// Lifted from source/cpp/GameProgress/DamageSetting.c (GameProgress.DamageSetting$$.cctor): 13 lines keep C-only constructs
		object @object;
		Il2CppType handle;
		DamageSetting.c__DisplayClass5_0 __this;
		Type enumType;
		object pIVar2;
		Func<T, TResult> __this_00;
		object source;
		System_Collections_Generic_IEnumerable_TResult__o first;
		System_Collections_Generic_IEnumerable_TSource__o pSVar3;
		Object[] source_00;
		Func<string, string> __this_01;
		Func<string, int> __this_02;
		System_Collections_Generic_Dictionary_TKey__TElement__o pSVar4;
		Comparison<T> __this_03;

		__this = new DamageSetting.c__DisplayClass5_0();
		handle = TypeRef_GameProgress_KillWeapon;
		enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		pIVar2 = (object)Enum.GetValues(enumType);
		@object = (object)DamageSetting.c.__9;
		source = null;
		__this_00 = new Func<KillWeapon, string>(@object, (intptr_t)MethodInfo_GameProgress_DamageSetting_c_cctor_b__5_0);
		if ((pIVar2 != null) &&(source = (pIVar2 as KillWeapon[]), source == null)) {
			throw new InvalidCastException();
		}
		first = Enumerable.Select<KillWeapon, string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TResult__o)__this_00);
		pSVar3 = Enumerable.Concat<string>((System_Collections_Generic_IEnumerable_TSource__o)first, (System_Collections_Generic_IEnumerable_TSource__o)HumanSpecials.AnySpecials);
		pSVar3 = Enumerable.Concat<string>(pSVar3, (System_Collections_Generic_IEnumerable_TSource__o)HumanSpecials.AHSSSpecials);
		pSVar3 = Enumerable.Concat<string>(pSVar3, (System_Collections_Generic_IEnumerable_TSource__o)HumanSpecials.BladeSpecials);
		pSVar3 = Enumerable.Concat<string>(pSVar3, (System_Collections_Generic_IEnumerable_TSource__o)HumanSpecials.ShifterSpecials);
		source_00 = Enumerable.ToArray<string>(pSVar3);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.i = 0;
		pIVar2 = (object)DamageSetting.c.__9;
		__this_01 = new Func<string, string>(pIVar2, (intptr_t)MethodInfo_GameProgress_DamageSetting_c_cctor_b__5_1);
		__this_02 = new Func<string, int>((object)__this, (intptr_t)MethodInfo_GameProgress_DamageSetting_c__DisplayClass5_0_cctor_b__2);
		pSVar4 = Enumerable.ToDictionary<string, string, int>((System_Collections_Generic_IEnumerable_TSource__o)source_00, (System_Func_TSource__TKey__o)__this_01, (System_Func_TSource__TElement__o)__this_02);
		__this.orderByString = (Dictionary<string, int>)pSVar4;
		__this_03 = new Comparison<KeyValuePair<string, JSONNode>>((object)__this, (intptr_t)MethodInfo_GameProgress_DamageSetting_c__DisplayClass5_0_cctor_b__3);
		DamageSetting.Comparison =(Comparison<KeyValuePair<string, JSONNode>>)__this_03;
		return;
	}

	[Token(Token = "0x600150A")]
	[Address(RVA = "0x581D660", Offset = "0x581C660", VA = "0x581D660")]
	public DamageSetting()
	{
		// Lifted from source/cpp/GameProgress/DamageSetting.c (GameProgress.DamageSetting$$.ctor): clean
		base();
		this.SetDefault();
		return;
	}

	[Token(Token = "0x600150B")]
	[Address(RVA = "0x581D690", Offset = "0x581C690", VA = "0x581D690", Slot = "4")]
	public override void SetDefault()
	{
		// Lifted from source/cpp/GameProgress/DamageSetting.c (GameProgress.DamageSetting$$SetDefault): clean
		JSONObject __this_00;

		__this_00 = new JSONObject();
		this.root = (JSONNode)__this_00;
		return;
	}

	[Token(Token = "0x600150C")]
	[Address(RVA = "0x581D6F0", Offset = "0x581C6F0", VA = "0x581D6F0", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		// Lifted from source/cpp/GameProgress/DamageSetting.c (GameProgress.DamageSetting$$SerializeToJsonObject): clean
		return this.root;
	}

	[Token(Token = "0x600150D")]
	[Address(RVA = "0x581D700", Offset = "0x581C700", VA = "0x581D700", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
		// Lifted from source/cpp/GameProgress/DamageSetting.c (GameProgress.DamageSetting$$DeserializeFromJsonObject): clean
		this.root = json;
		return;
	}

	[Token(Token = "0x600150E")]
	[Address(RVA = "0x581D710", Offset = "0x581C710", VA = "0x581D710")]
	public void ClearRecords()
	{
		// Lifted from source/cpp/GameProgress/DamageSetting.c (GameProgress.DamageSetting$$ClearRecords): 10 lines keep C-only constructs
		bool bVar1;
		IEnumerable<KeyValuePair<string, JSONNode>> pSVar2;
		System_Collections_Generic_List_TSource__o pSVar3;
		JSONNode pSVar4;
		JSONNode pSVar5;
		MethodInfo method_00;
		byte[] auStack_a8 = new byte[8];
		ulong uStack_a0;
		String pSStack_98;
		JSONNode pSStack_90;
		byte[] auStack_88 = new byte[16];
		String pSStack_78;
		JSONNode pSStack_70;
		byte[] auStack_58 = new byte[8];
		JSONNode pSStack_40;

		pSStack_98 = null;
		pSStack_90 = null;
		auStack_a8 = (byte[])0x0;
		uStack_a0._0_4_ = 0;
		uStack_a0._4_4_ = 0;
		pSStack_40 = null;
		auStack_58 = (byte[])0x0;
		pSVar5 = this.root;
		if (pSVar5 != null) {
			pSVar2 = pSVar5.Linq;
			pSVar3 = Enumerable.ToList<KeyValuePair<string, JSONNode>>((System_Collections_Generic_IEnumerable_TSource__o)pSVar2);
			if (pSVar3 != null) {
				auStack_88.GetEnumerator((List<T>)pSVar3);
				pSStack_98 = pSStack_78;
				pSStack_90 = pSStack_70;
				auStack_a8 = (byte[])auStack_88._0_8_;
				uStack_a0 = (System_Collections_Generic_List_Enumerator_T__o)auStack_88._8_8_;
				do {
					while(true) {
						bVar1 = auStack_a8.MoveNext();
						pSVar5 = pSStack_90;
						if (!bVar1) {
							auStack_a8.Dispose();
							return;
						}
						method_00 = (MethodInfo *)"Overall";
						bVar1 = (pSStack_98 == "Overall");
						if (!bVar1) break;
						DamageSetting.ClearRecord(pSVar5);
					}
					if (pSVar5 == null) {
						throw new NullReferenceException();
					}
					pSVar2 = pSVar5.Linq;
					pSVar3 = Enumerable.ToList<KeyValuePair<string, JSONNode>>((System_Collections_Generic_IEnumerable_TSource__o)pSVar2);
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					auStack_88.GetEnumerator((List<T>)pSVar3);
					pSStack_40 = pSStack_70;
					auStack_58 = (byte[])auStack_88._0_8_;
					auStack_88._0_8_ = null;
					auStack_88._8_8_ = (System_Collections_Generic_List_Enumerator_T__o)auStack_58;
					while (true) {
						bVar1 = auStack_58.MoveNext();
						pSVar5 = pSStack_40;
						if (!(bVar1)) break;
						if ((pSVar5 == null) ||(pSVar4 = pSVar5.get_Item("Highest"), pSVar4 == null)) {
	label_0591d9e9: ;
							throw new NullReferenceException();
						}
						pSVar4.set_AsULong(0);
						pSVar5 = pSVar5.get_Item("Total");
						if (pSVar5 == null) goto label_0591d9e9;
						pSVar5.set_AsULong(0);
					}
					auStack_58.Dispose() ;
				} while(true);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600150F")]
	[Address(RVA = "0x581DAE0", Offset = "0x581CAE0", VA = "0x581DAE0")]
	private static void ClearRecord(JSONNode record)
	{
		// Lifted from source/cpp/GameProgress/DamageSetting.c (GameProgress.DamageSetting$$ClearRecord): clean
		JSONNode pSVar1;

		if (record != null) {
			pSVar1 = record.get_Item("Highest");
			if (pSVar1 != null) {
				pSVar1.set_AsULong(0);
				pSVar1 = record.get_Item("Total");
				if (pSVar1 != null) {
					pSVar1.set_AsULong(0);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001510")]
	[Address(RVA = "0x581DB90", Offset = "0x581CB90", VA = "0x581DB90")]
	public void Register(KillMethod method, ulong damage)
	{
		// Lifted from source/cpp/GameProgress/DamageSetting.c (GameProgress.DamageSetting$$Register): 5 lines keep C-only constructs
		System_ValueTuple_ulong__ulong__o value;
		ulong uVar1;
		System_ValueTuple_ulong__ulong__o SVar3;
		KillMethod method_00;
		KillMethod method_01;
		System_ValueTuple_ulong__ulong__o SStack_38;

		method_00.Special = method.Special;
		method_00.Weapon = method.Weapon;
		SVar3 = this.Overall;
		uVar1 = SVar3.Item1;
		if (SVar3.Item1 <= damage) {
			uVar1 = damage;
		}
		SStack_38.Item1 = 0;
		SStack_38.Item2 = 0;
		SStack_38 = new ValueTuple<ulong, ulong>(uVar1, SVar3.Item2 + damage);
		SVar3.Item2 = SStack_38.Item2;
		SVar3.Item1 = SStack_38.Item1;
		this.Overall = SVar3;
		method_00._4_4_ = 0;
		SVar3 = this.get_Item(method_00);
		uVar1 = SVar3.Item1;
		if (SVar3.Item1 <= damage) {
			uVar1 = damage;
		}
		SStack_38.Item1 = 0;
		SStack_38.Item2 = 0;
		SStack_38 = new ValueTuple<ulong, ulong>(uVar1, SVar3.Item2 + damage);
		value.Item2 = SStack_38.Item2;
		value.Item1 = SStack_38.Item1;
		method_01._4_4_ = 0;
		method_01.Weapon = method_00.Weapon;
		method_01.Special = method_00.Special;
		this.set_Item(method_01, value);
		return;
	}

	[Token(Token = "0x6001511")]
	[Address(RVA = "0x581DC60", Offset = "0x581CC60", VA = "0x581DC60")]
	[IteratorStateMachine(typeof(_003CGetStatLabels_003Ed__19))]
	public IEnumerable<(string, string)> GetStatLabels()
	{
		// Lifted from source/cpp/GameProgress/DamageSetting.c (GameProgress.DamageSetting$$GetStatLabels): clean
		int iVar1;
		DamageSetting.d__19<GetStatLabels> __this_00;

		__this_00 = new DamageSetting.d__19<GetStatLabels>();
		__this_00.__1__state = -2;
		iVar1 = Environment.CurrentManagedThreadId;
		__this_00.__l__initialThreadId = iVar1;
		__this_00.__4__this = this;
		return (IEnumerable<ValueTuple<string, string>>)__this_00;
	}

	[Token(Token = "0x6001512")]
	[Address(RVA = "0x581DD00", Offset = "0x581CD00", VA = "0x581DD00")]
	private static string StatLocale(string item, string defaultValue = "")
	{
		// Lifted from source/cpp/GameProgress/DamageSetting.c (GameProgress.DamageSetting$$StatLocale): clean
		String pSVar1;

		pSVar1 = UIManager.GetLocale("MainMenu", "Profile.Stats", item, "", defaultValue);
		return pSVar1;
	}

	[Token(Token = "0x6001513")]
	[Address(RVA = "0x581DDA0", Offset = "0x581CDA0", VA = "0x581DDA0")]
	private static string StatLabel(string recordKey, string method)
	{
		// Lifted from source/cpp/GameProgress/DamageSetting.c (GameProgress.DamageSetting$$StatLabel): clean
		uint uVar1;
		String item;
		String pSVar2;

		item = String.Concat(recordKey, "Damage");
		pSVar2 = "";
		if ((typeof(DamageSetting)._2).cctor_finished_or_no_cctor == 0) {
			pSVar2 = "";
		}
		"" = pSVar2;
		if (Il2CppMethodInitialized_07545737 == false) {
			Il2CppMethodInitialized_07545737 = true;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar2 = UIManager.GetLocale("MainMenu", "Profile.Stats", item, "", pSVar2);
		pSVar2 = String.Format(pSVar2, (object)method);
		return pSVar2;
	}

	[Token(Token = "0x6001514")]
	[Address(RVA = "0x581DEF0", Offset = "0x581CEF0", VA = "0x581DEF0")]
	private static string MethodLabel(string weapon, string special)
	{
		// Lifted from source/cpp/GameProgress/DamageSetting.c (GameProgress.DamageSetting$$MethodLabel): clean
		bool bVar1;
		String pSVar2;

		pSVar2 = DamageSetting.WeaponLabel(weapon);
		bVar1 = (special == "None");
		if (bVar1) {
			return pSVar2;
		}
		pSVar2 = String.Concat(pSVar2, " (", special, ")");
		return pSVar2;
	}

	[Token(Token = "0x6001515")]
	[Address(RVA = "0x581DFB0", Offset = "0x581CFB0", VA = "0x581DFB0")]
	private static string WeaponLabel(string weapon)
	{
		// Lifted from source/cpp/GameProgress/DamageSetting.c (GameProgress.DamageSetting$$WeaponLabel): clean
		uint uVar1;
		bool bVar2;
		String pSVar3;

		bVar2 = (weapon == "Thunderspear");
		if (bVar2) {
			weapon = "ThunderSpear";
			pSVar3 = "";
			goto label_0591e0d9;
		}
		bVar2 = (weapon == "Shifter");
		if ((bVar2) || (bVar2 = (weapon == "Titan"))) {
			pSVar3 = UIManager.GetLocaleCommon(weapon);
			return pSVar3;
		}
		if ((typeof(DamageSetting)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07545737 != false) goto label_0591e159;
	label_0591e1a7: ;
			Il2CppMethodInitialized_07545737 = true;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_07545737 == false) goto label_0591e1a7;
	label_0591e159: ;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar3 = weapon;
	label_0591e0d9: ;
		pSVar3 = UIManager.GetLocale("MainMenu", "Profile.Stats", weapon, "", pSVar3);
		return pSVar3;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/GameProgress/DamageSetting.c.

	// GameProgress.DamageSetting.<>c__DisplayClass5_0$$.ctor: clean
	private void c__DisplayClass5_0__ctor()
	{
		base();
		return;
	}

	// GameProgress.DamageSetting.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new DamageSetting.c();
		DamageSetting.c.__9 = (DamageSetting.c)__this;
		return;
	}

	// GameProgress.DamageSetting.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// GameProgress.DamageSetting.<>c$$<.cctor>b__5_0: 1 lines keep C-only constructs
	private String c__cctor_b__5_0(int w)
	{
		String pSVar1;
		Enum local_20;

		local_20.klass = (Enum)typeof(KillWeapon);
		local_20.monitor = (IntPtr)0xffffffffffffffff;
		return pSVar1;
	}

	// GameProgress.DamageSetting.<>c$$<.cctor>b__5_1: clean
	private String c__cctor_b__5_1(String k)
	{
		return k;
	}

	// GameProgress.DamageSetting.<>c$$<GetStatLabels>b__19_0: clean
	private bool c__GetStatLabels_b__19_0(KeyValuePair<string, JSONNode> kvp)
	{
		bool bVar1;

		bVar1 = (kvp.key != "Overall");
		return bVar1;
	}

	// GameProgress.DamageSetting.<>c__DisplayClass5_0$$<.cctor>b__2: clean
	private int c__DisplayClass5_0__cctor_b__2(String v)
	{
		int iVar1;

		iVar1 = this.i;
		this.i = iVar1 + 1;
		return iVar1;
	}

	// GameProgress.DamageSetting.<>c__DisplayClass5_0$$<.cctor>b__3: clean
	private int c__DisplayClass5_0__cctor_b__3(KeyValuePair<string, JSONNode> lhs, KeyValuePair<string, JSONNode> rhs)
	{
		Dictionary<object, int> pSVar1;
		bool bVar2;
		bool bVar3;
		int iVar4;
		int local_30;
		int local_2c;

		local_2c = 0;
		local_30 = 0;
		pSVar1 = (Dictionary<object, int>)this.orderByString;
		if (pSVar1 != null) {
			bVar2 = pSVar1.TryGetValue((object)rhs.key, ref local_2c);
			pSVar1 = (Dictionary<object, int>)this.orderByString;
			if (pSVar1 != null) {
				bVar3 = pSVar1.TryGetValue((object)lhs.key, ref local_30);
				if (bVar2 && bVar3) {
					iVar4 = local_2c - local_30;
				}
				else {
					iVar4 = 1;
					if ((!bVar2 || bVar3) && (iVar4 = -1, bVar2 || !bVar3)) {
						iVar4 = String.Compare(lhs.key, rhs.key);
					}
				}
				return iVar4;
			}
		}
		throw new NullReferenceException();
	}
}
