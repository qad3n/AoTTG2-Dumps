// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicEvaluator
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicEvaluator.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicEvaluator.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Characters;
using Il2CppDummyDll;
using Map;
using Photon.Realtime;
using Settings;
using UnityEngine;
using Utility;

namespace CustomLogic;

[Token(Token = "0x200064C")]
internal class CustomLogicEvaluator
{
	[Token(Token = "0x2000650")]
	[CompilerGenerated]
	private sealed class _003CEvaluateBlockCoroutine_003Ed__87 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001C05")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001C06")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001C07")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public List<CustomLogicBaseAst> statements;

		[Token(Token = "0x4001C08")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CustomLogicEvaluator _003C_003E4__this;

		[Token(Token = "0x4001C09")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CustomLogicClassInstance classInstance;

		[Token(Token = "0x4001C0A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Dictionary<string, object> localVariables;

		[Token(Token = "0x4001C0B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private ConditionalEvalState _003CconditionalState_003E5__2;

		[Token(Token = "0x4001C0C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private List<CustomLogicBaseAst>.Enumerator _003C_003E7__wrap2;

		[Token(Token = "0x4001C0D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private CustomLogicBaseAst _003Cstatement_003E5__4;

		[Token(Token = "0x4001C0E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private float _003Ctime_003E5__5;

		[Token(Token = "0x4001C0F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private CustomLogicConditionalBlockAst _003Cconditional_003E5__6;

		[Token(Token = "0x4001C10")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private CoroutineWithData _003Ccwd_003E5__7;

		[Token(Token = "0x4001C11")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private CustomLogicForBlockAst _003CforBlock_003E5__8;

		[Token(Token = "0x4001C12")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		private List<object>.Enumerator _003C_003E7__wrap8;

		[Token(Token = "0x17000A8E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003CE8")]
			[Address(RVA = "0x5A8F360", Offset = "0x5A8E360", VA = "0x5A8F360", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__87$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000A8F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003CEA")]
			[Address(RVA = "0x5A8F3B0", Offset = "0x5A8E3B0", VA = "0x5A8F3B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__87$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6003CE3")]
		[Address(RVA = "0x5A8D8A0", Offset = "0x5A8C8A0", VA = "0x5A8D8A0")]
		[DebuggerHidden]
		public _003CEvaluateBlockCoroutine_003Ed__87(int _003C_003E1__state)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__87$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6003CE4")]
		[Address(RVA = "0x5A8D8C0", Offset = "0x5A8C8C0", VA = "0x5A8D8C0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__87$$System.IDisposable.Dispose): 4 lines keep C-only constructs
			uint uVar1;
			CustomLogicEvaluator.d__87<EvaluateBlockCoroutine> pCVar2;
			CustomLogicEvaluator.d__87<EvaluateBlockCoroutine>* ppCVar3;
			CustomLogicEvaluator.d__87<EvaluateBlockCoroutine> local_28;
			byte local_18;

			local_18 = (byte)&local_28;
			uVar1 = this.__1__state;
			if (((uVar1 & 0xfffffffe) == 0xfffffffc) || (uVar1 - 1 < 0x13)) {
				local_28 = this;
				ppCVar3 = &local_28;
				if ((uVar1 + 4 < 0x18) && (ppCVar3 = &local_28, (0xe00001U >> (uVar1 + 4 & 0x1f) & 1) != 0)) {
					ppCVar3 = &local_28;
					if (Il2CppMethodInitialized_075473e8 == false) {
						Il2CppMethodInitialized_075473e8 = true;
						ppCVar3 = (CustomLogicEvaluator.d__87<EvaluateBlockCoroutine>*)local_18;
					}
					local_18 = (byte)ppCVar3;
					this.__1__state = -3;
					(this.__7__wrap8).Dispose();
					ppCVar3 = (CustomLogicEvaluator.d__87<EvaluateBlockCoroutine>*)local_18;
				}
				local_18 = (byte)ppCVar3;
				pCVar2 = local_28;
				pCVar2.__1__state = -1;
				(pCVar2.__7__wrap2).Dispose();
			}
			return;
		}

		[Token(Token = "0x6003CE5")]
		[Address(RVA = "0x5A8D9E0", Offset = "0x5A8C9E0", VA = "0x5A8D9E0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__87$$MoveNext): 46 lines keep C-only constructs
			CustomLogicBaseAst* targetAddress;
			byte bVar1;
			byte bVar2;
			uint uVar3;
			int iVar4;
			uint uVar5;
			CustomLogicEvaluator __this_00;
			List<CustomLogicBaseAst> __this_01;
			Il2CppClass pIVar6;
			CustomLogicAssignmentExpressionAst assignment;
			CustomLogicAssignmentExpressionAst pCVar7;
			CustomLogicConditionalBlockAst pCVar8;
			CustomLogicToken pCVar9;
			CustomLogicForBlockAst pCVar10;
			CustomLogicBaseAst pCVar11;
			CustomLogicBaseAst pCVar12;
			CustomLogicVariableExpressionAst pCVar13;
			String key;
			CustomLogicStartAst pCVar14;
			CustomLogicClassInstance pCVar15;
			Dictionary<object, object> pSVar16;
			CustomLogicBaseExpressionAst pCVar17;
			CustomLogicBaseExpressionAst pCVar18;
			CustomLogicManager pCVar19;
			CustomLogicConditionalBlockAst pCVar20;
			CustomLogicForBlockAst pCVar21;
			CustomLogicEvaluator.d__87<EvaluateBlockCoroutine> pCVar22;
			bool bVar23;
			WaitForSeconds pUVar24;
			int piVar25;
			sbyte pcVar26;
			object pIVar27;
			object key_00;
			CustomLogicClassDefinitionAst pCVar28;
			IEnumerator pSVar29;
			CoroutineWithData pUVar30;
			int iVar31;
			int iVar32;
			CoroutineWithData* ppUVar33;
			float fVar34;
			CustomLogicEvaluator.d__87<EvaluateBlockCoroutine> local_70;
			float local_64;
			System_Collections_Generic_List_Enumerator_T__o local_60;
			CustomLogicEvaluator.d__87<EvaluateBlockCoroutine>* local_40;

			local_70 = this;
			local_40 = &local_70;
			uVar3 = this.__1__state;
			if (0x13 < uVar3) {
				return false;
			}
			__this_00 = this.__4__this;
			switch(uVar3) {
			case 0:
				this.__1__state = -1;
				this._conditionalState_5__2 = 0;
				__this_01 = this.statements;
				if (__this_01 == null) {
					throw new NullReferenceException();
				}
				local_60 = __this_01.GetEnumerator();
				local_70.__7__wrap2._current =(CustomLogicBaseAst)local_60._current;
				local_70.__7__wrap2._list = local_60._list;
				local_70.__7__wrap2._index = local_60._index;
				local_70.__7__wrap2._version = local_60._version;
				local_70.__1__state = -3;
				do {
					bVar23 = (local_70.__7__wrap2).MoveNext();
					pCVar22 = local_70;
					if (!bVar23) {
						pCVar22.__1__state = -1;
						(pCVar22.__7__wrap2).Dispose();
						local_70.__7__wrap2._list = null;
						local_70.__7__wrap2._index = 0;
						local_70.__7__wrap2._version = 0;
						local_70.__7__wrap2._current = null;
						return false;
					}
					local_70._statement_5__4 = local_70.__7__wrap2._current;
					assignment = (CustomLogicAssignmentExpressionAst)local_70._statement_5__4;
					if (assignment == null) {
						throw new NullReferenceException();
					}
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					__this_00._currentLineNumber = assignment.Line;
					pCVar21 = typeof(CustomLogicForBlockAst);
					pCVar20 = typeof(CustomLogicConditionalBlockAst);
					pCVar7 = assignment.klass;
					bVar1 = (pCVar7._2).typeHierarchyDepth;
					bVar2 = (typeof(CustomLogicAssignmentExpressionAst)._2).typeHierarchyDepth;
					if ((bVar1 < bVar2) ||((pCVar7._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicAssignmentExpressionAst))) {
						bVar2 = (typeof(CustomLogicReturnExpressionAst)._2).typeHierarchyDepth;
						if ((((bVar2 <= bVar1) &&((pCVar7._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CustomLogicReturnExpressionAst))) ||((bVar2 = (typeof(CustomLogicBreakExpressionAst)._2).typeHierarchyDepth, bVar2 <= bVar1 &&((pCVar7._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CustomLogicBreakExpressionAst))))) ||((bVar2 = (typeof(CustomLogicContinueExpressionAst)._2).typeHierarchyDepth, bVar2 <= bVar1 &&((pCVar7._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CustomLogicContinueExpressionAst))))) {
							local_70.__2__current = (object)assignment;
							local_70.__1__state = 1;
							return true;
						}
						bVar2 = (typeof(CustomLogicWaitExpressionAst)._2).typeHierarchyDepth;
						if ((bVar2 <= bVar1) &&((pCVar7._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CustomLogicWaitExpressionAst))) {
							pIVar27 = __this_00.EvaluateExpression(local_70.classInstance, local_70.localVariables, assignment.Left);
							pCVar14 = __this_00._start;
							if (pCVar14 == null) {
								throw new NullReferenceException();
							}
							pCVar15 = local_70.classInstance;
							if (pCVar15 == null) {
								throw new NullReferenceException();
							}
							pSVar16 = (Dictionary<object, object>)pCVar14.Classes;
							key_00 = (object)pCVar15.unknown();
							if (pSVar16 == null) {
								throw new NullReferenceException();
							}
							pCVar28 = pSVar16.get_Item(key_00);
							if (pCVar28 == null) {
								throw new NullReferenceException();
							}
							pCVar9 = pCVar28.Token;
							if (pCVar9 == null) {
								throw new NullReferenceException();
							}
							piVar25 = (int)il2cpp_runtime_helper_02abd3a0(pCVar9.Value);
							if (pIVar27 == null) {
								local_70.__2__current = null;
								local_70.__1__state = 2;
								return true;
							}
							pCVar17 = assignment.Left;
							if (pCVar17 != null) {
								pCVar18 = pCVar17.klass;
								bVar1 = (typeof(CustomLogicMethodCallExpressionAst)._2).typeHierarchyDepth;
								if ((bVar1 <= (pCVar18._2).typeHierarchyDepth) &&((pCVar18._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicMethodCallExpressionAst))) {
									if ((*piVar25 == 4) || (pIVar27.klass != typeof(Coroutine))) {
										local_70.__2__current = null;
										local_70.__1__state = 4;
										return true;
									}
									local_70.__2__current = pIVar27;
									local_70.__1__state = 3;
									return true;
								}
							}
							uVar5 = (typeof(MiscExtensions)._2).cctor_finished_or_no_cctor;
							if (*piVar25 != 4) {
								if (uVar5 == 0) {
								}
								local_64 = MiscExtensions.UnboxToFloat(pIVar27);
								pUVar24 = new WaitForSeconds(local_64);
								local_70.__2__current = (object)pUVar24;
								local_70.__1__state = 6;
								return true;
							}
							if (uVar5 == 0) {
							}
							fVar34 = MiscExtensions.UnboxToFloat(pIVar27);
							local_70._time_5__5 = fVar34;
							this = local_70;
							goto joined_r0x05b8ddf1;
						}
						bVar2 = (typeof(CustomLogicConditionalBlockAst)._2).typeHierarchyDepth;
						if ((bVar1 < bVar2) ||((pCVar7._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicConditionalBlockAst))) {
							bVar2 = (typeof(CustomLogicForBlockAst)._2).typeHierarchyDepth;
							if ((bVar1 < bVar2) ||((pCVar7._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicForBlockAst))) {
								bVar2 = (typeof(CustomLogicBaseExpressionAst)._2).typeHierarchyDepth;
								if ((bVar2 <= bVar1) &&((pCVar7._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CustomLogicBaseExpressionAst))) {
									__this_00.EvaluateExpression(local_70.classInstance, local_70.localVariables, (CustomLogicBaseExpressionAst)assignment);
								}
							}
							else {
								local_70._forBlock_5__8 = (CustomLogicForBlockAst)assignment;
								if (((assignment.klass._2).typeHierarchyDepth < bVar2) ||((assignment.klass._2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass)pCVar21)) {
									throw new InvalidCastException();
								}
								pCVar10 = local_70._forBlock_5__8;
								if (pCVar10 == null) {
									throw new NullReferenceException();
								}
								pIVar27 = __this_00.EvaluateExpression(local_70.classInstance, local_70.localVariables, pCVar10.Iterable);
								if (pIVar27 == null) {
									throw new NullReferenceException();
								}
								bVar1 = (typeof(CustomLogicListBuiltin)._2).typeHierarchyDepth;
								if (((pIVar27.klass._2).typeHierarchyDepth < bVar1) ||((pIVar27.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicListBuiltin))) {
									throw new InvalidCastException();
								}
								if (pIVar27[3].klass == null) {
									throw new NullReferenceException();
								}
								local_60 = pIVar27[3].klass.GetEnumerator();
								local_70.__7__wrap8._current = local_60._current;
								local_70.__7__wrap8._list = local_60._list;
								local_70.__7__wrap8._index = local_60._index;
								local_70.__7__wrap8._version = local_60._version;
								local_70.__1__state = -4;
		label_05b8e6d0: ;
								bVar23 = (local_70.__7__wrap8).MoveNext();
								pCVar22 = local_70;
								if (bVar23) {
									pCVar10 = local_70._forBlock_5__8;
									if (pCVar10 == null) {
										throw new NullReferenceException();
									}
									pCVar13 = pCVar10.Variable;
									if (pCVar13 == null) {
										throw new NullReferenceException();
									}
									pSVar16 = (Dictionary<object, object>)local_70.localVariables;
									if (pSVar16 == null) {
										throw new NullReferenceException();
									}
									pIVar27 = local_70.__7__wrap8._current;
									key = pCVar13.Name;
									bVar23 = pSVar16.ContainsKey((object)key);
									pSVar16 = (Dictionary<object, object>)local_70.localVariables;
									if (bVar23) {
										if (pSVar16 == null) {
											throw new NullReferenceException();
										}
										pSVar16.set_Item((object)key, pIVar27);
									}
									else {
										if (pSVar16 == null) {
											throw new NullReferenceException();
										}
										pSVar16.Add((object)key, pIVar27);
									}
									pCVar10 = local_70._forBlock_5__8;
									if (pCVar10 == null) {
										throw new NullReferenceException();
									}
									if (__this_00 == null) {
										throw new NullReferenceException();
									}
									pCVar19 = CustomLogicManager._instance;
									pSVar29 = __this_00.EvaluateBlockCoroutine(local_70.classInstance, local_70.localVariables, pCVar10.Statements);
									pUVar30 = new CoroutineWithData((MonoBehaviour)pCVar19, pSVar29);
									local_70._cwd_5__7 = pUVar30;
									pUVar30 = local_70._cwd_5__7;
									if (pUVar30 == null) {
										throw new NullReferenceException();
									}
									local_70.__2__current = (object)pUVar30._Coroutine_k__BackingField;
									local_70.__1__state = 0x11;
									return true;
								}
								pCVar22.__1__state = -3;
								(pCVar22.__7__wrap8).Dispose();
								local_70.__7__wrap8._index = 0;
								local_70.__7__wrap8._version = 0;
								local_70.__7__wrap8._current = null;
								local_70._forBlock_5__8 = null;
								local_70.__7__wrap8._list = null;
							}
						}
						else {
							local_70._conditional_5__6 = (CustomLogicConditionalBlockAst)assignment;
							if (((assignment.klass._2).typeHierarchyDepth < bVar2) ||((assignment.klass._2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass)pCVar20)) {
								throw new InvalidCastException();
							}
							pCVar8 = local_70._conditional_5__6;
							if (pCVar8 == null) {
								throw new NullReferenceException();
							}
							pCVar9 = pCVar8.Token;
							if (pCVar9 == null) {
								throw new NullReferenceException();
							}
							pIVar27 = pCVar9.Value;
							if (pIVar27 == null) {
								throw new NullReferenceException();
							}
							if ((pIVar27.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
								throw new InvalidCastException();
							}
							piVar25 = il2cpp_vm_Object_Unbox(pIVar27);
							pCVar8 = local_70._conditional_5__6;
							if (*piVar25 == 0x2a) {
								if (pCVar8 == null) {
									throw new NullReferenceException();
								}
								pIVar27 = __this_00.EvaluateExpression(local_70.classInstance, local_70.localVariables, pCVar8.Condition);
								if (pIVar27 == null) {
									throw new NullReferenceException();
								}
								if ((pIVar27.klass._1).element_class != *(Il2CppClass*)(g_data_075566f0 + 0x40)) {
									throw new InvalidCastException();
								}
								pcVar26 = il2cpp_vm_Object_Unbox(pIVar27);
								if (*pcVar26 != false) {
									pCVar8 = local_70._conditional_5__6;
									if (pCVar8 == null) {
										throw new NullReferenceException();
									}
									pCVar19 = CustomLogicManager._instance;
									pSVar29 = __this_00.EvaluateBlockCoroutine(local_70.classInstance, local_70.localVariables, pCVar8.Statements);
									pUVar30 = new CoroutineWithData((MonoBehaviour)pCVar19, pSVar29);
									local_70._cwd_5__7 = pUVar30;
									pUVar30 = local_70._cwd_5__7;
									if (pUVar30 == null) {
										throw new NullReferenceException();
									}
									local_70.__2__current = (object)pUVar30._Coroutine_k__BackingField;
									local_70.__1__state = 8;
									return true;
								}
								iVar31 = 2;
		switchD_05b8ebde_default: ;
								local_70._conditionalState_5__2 = iVar31;
							}
							else {
								if (pCVar8 == null) {
									throw new NullReferenceException();
								}
								pCVar9 = pCVar8.Token;
								if (pCVar9 == null) {
									throw new NullReferenceException();
								}
								pIVar27 = pCVar9.Value;
								if (pIVar27 == null) {
									throw new NullReferenceException();
								}
								if ((pIVar27.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
									throw new InvalidCastException();
								}
								piVar25 = il2cpp_vm_Object_Unbox(pIVar27);
								if (*piVar25 == 0x2d) {
		label_05b8e79e: ;
									pCVar8 = local_70._conditional_5__6;
									if (pCVar8 == null) {
										throw new NullReferenceException();
									}
									if (__this_00 == null) {
										throw new NullReferenceException();
									}
									pIVar27 = __this_00.EvaluateExpression(local_70.classInstance, local_70.localVariables, pCVar8.Condition);
									if (pIVar27 == null) {
										throw new NullReferenceException();
									}
									if ((pIVar27.klass._1).element_class != *(Il2CppClass*)(g_data_075566f0 + 0x40)) {
										throw new InvalidCastException();
									}
									pcVar26 = il2cpp_vm_Object_Unbox(pIVar27);
									if (*pcVar26 != false) {
										pCVar8 = local_70._conditional_5__6;
										if (pCVar8 == null) {
											throw new NullReferenceException();
										}
										pCVar19 = CustomLogicManager._instance;
										pSVar29 = __this_00.EvaluateBlockCoroutine(local_70.classInstance, local_70.localVariables, pCVar8.Statements);
										pUVar30 = new CoroutineWithData((MonoBehaviour)pCVar19, pSVar29);
										local_70._cwd_5__7 = pUVar30;
										pUVar30 = local_70._cwd_5__7;
										if (pUVar30 == null) {
											throw new NullReferenceException();
										}
										local_70.__2__current = (object)pUVar30._Coroutine_k__BackingField ;
										local_70.__1__state = 10;
										return true;
									}
									iVar31 = 0;
									goto switchD_05b8ebde_default;
								}
								pCVar8 = local_70._conditional_5__6;
								if (pCVar8 == null) {
									throw new NullReferenceException();
								}
								pCVar9 = pCVar8.Token;
								if (pCVar9 == null) {
									throw new NullReferenceException();
								}
								pIVar27 = pCVar9.Value;
								if (pIVar27 == null) {
									throw new NullReferenceException();
								}
								if ((pIVar27.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
									throw new InvalidCastException();
								}
								piVar25 = il2cpp_vm_Object_Unbox(pIVar27);
								if (*piVar25 == 0x2b) {
									iVar4 = local_70._conditionalState_5__2;
									if ((iVar4 == 4) || (iVar31 = 0, iVar4 == 2)) {
										pCVar8 = local_70._conditional_5__6;
										if (pCVar8 == null) {
											throw new NullReferenceException();
										}
										pCVar19 = CustomLogicManager._instance;
										pSVar29 = __this_00.EvaluateBlockCoroutine(local_70.classInstance, local_70.localVariables, pCVar8.Statements);
										pUVar30 = new CoroutineWithData((MonoBehaviour)pCVar19, pSVar29);
										local_70._cwd_5__7 = pUVar30;
										pUVar30 = local_70._cwd_5__7;
										if (pUVar30 == null) {
											throw new NullReferenceException();
										}
										local_70.__2__current = (object)pUVar30._Coroutine_k__BackingField ;
										local_70.__1__state = 0xd;
										return true;
									}
									goto switchD_05b8ebde_default;
								}
								pCVar8 = local_70._conditional_5__6;
								if (pCVar8 == null) {
									throw new NullReferenceException();
								}
								pCVar9 = pCVar8.Token;
								if (pCVar9 == null) {
									throw new NullReferenceException();
								}
								pIVar27 = pCVar9.Value;
								if (pIVar27 == null) {
									throw new NullReferenceException();
								}
								if ((pIVar27.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
									throw new InvalidCastException();
								}
								piVar25 = il2cpp_vm_Object_Unbox(pIVar27);
								if (*piVar25 == 0x2c) {
									iVar31 = 4;
									switch(local_70._conditionalState_5__2) {
									case 1:
									case 3:
										goto switchD_05b8ebde_caseD_1;
									case 2:
									case 4:
										pCVar8 = local_70._conditional_5__6;
										if (pCVar8 == null) {
											throw new NullReferenceException();
										}
										pIVar27 = __this_00.EvaluateExpression(local_70.classInstance, local_70.localVariables, pCVar8.Condition);
										pcVar26 = (sbyte)il2cpp_runtime_helper_02abd3a0(pIVar27, g_data_075566f0);
										iVar31 = 4;
										if (*pcVar26 != false) {
											pCVar8 = local_70._conditional_5__6;
											if (pCVar8 == null) {
												throw new NullReferenceException();
											}
											pCVar19 = CustomLogicManager._instance;
											pSVar29 = __this_00.EvaluateBlockCoroutine(local_70.classInstance, local_70.localVariables, pCVar8.Statements);
											pUVar30 = new CoroutineWithData((MonoBehaviour)pCVar19, pSVar29);
											local_70._cwd_5__7 = pUVar30;
											pUVar30 = local_70._cwd_5__7;
											if (pUVar30 == null) {
												throw new NullReferenceException();
											}
											local_70.__2__current =(object)pUVar30._Coroutine_k__BackingField;
											local_70.__1__state = 0xf;
											return true;
										}
									}
									goto switchD_05b8ebde_default;
								}
							}
		switchD_05b8ebde_caseD_1: ;
							local_70._conditional_5__6 = null;
						}
					}
					else {
						__this_00.EvaluateAssignmentExpression(local_70.classInstance, local_70.localVariables, assignment);
					}
		label_05b8e828: ;
					targetAddress = &local_70._statement_5__4;
					pCVar11 = local_70._statement_5__4;
					if (pCVar11 == null) {
		label_05b8e865: ;
						local_70._conditionalState_5__2 = 0;
					}
					else {
						pCVar12 = pCVar11.klass;
						bVar1 = (typeof(CustomLogicConditionalBlockAst)._2).typeHierarchyDepth;
						if (((pCVar12._2).typeHierarchyDepth < bVar1) ||((pCVar12._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicConditionalBlockAst))) goto label_05b8e865;
					}
					*targetAddress = null;
				} while(true);
			case 1:
				this.__1__state = -3;
				goto label_05b8e1d5;
			default: ;
				this.__1__state = -3;
				goto label_05b8e828;
			case 5:
				this.__1__state = -3;
				fVar34 = this._time_5__5 + -0.1;
				this._time_5__5 = fVar34;
		joined_r0x05b8ddf1: ;
				if (0.0 < fVar34) {
					if (((typeof(CustomLogicManager))._2).cctor_finished_or_no_cctor == 0) {
					}
					if (CustomLogicManager.SkipCutscene == false) {
						pUVar24 = new WaitForSeconds(0.1);
						local_70.__2__current = (object)pUVar24;
						local_70.__1__state = 5;
						return true;
					}
					this = local_70;
				}
				goto label_05b8de2e;
			case 6:
				this.__1__state = -3;
		label_05b8de2e: ;
				this.__2__current = null;
				local_70.__1__state = 7;
				break;
			case 8:
				this.__1__state = -3;
				pUVar30 = this._cwd_5__7;
				if (pUVar30 == null) {
					throw new NullReferenceException();
				}
				this.__2__current = pUVar30.Result;
				local_70.__1__state = 9;
				break;
			case 9:
				this.__1__state = -3;
				pUVar30 = this._cwd_5__7;
				if (pUVar30 == null) {
					throw new NullReferenceException();
				}
				pIVar27 = pUVar30.Result;
				iVar32 = 1;
				iVar31 = 1;
				goto joined_r0x05b8e102;
			case 10:
				this.__1__state = -3;
				pUVar30 = this._cwd_5__7;
				if (pUVar30 == null) {
					throw new NullReferenceException();
				}
				this.__2__current = pUVar30.Result;
				local_70.__1__state = 0xb;
				break;
			case 0xb:
				this.__1__state = -3;
				pUVar30 = this._cwd_5__7;
				if (pUVar30 == null) {
					throw new NullReferenceException();
				}
				pIVar27 = pUVar30.Result;
				if (pIVar27 != null) {
					pIVar6 = pIVar27.klass;
					bVar1 = (pIVar6._2).typeHierarchyDepth;
					bVar2 = (typeof(CustomLogicBreakExpressionAst)._2).typeHierarchyDepth;
					if (((bVar2 <= bVar1) &&((pIVar6._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CustomLogicBreakExpressionAst))) ||((bVar2 = (typeof(CustomLogicContinueExpressionAst)._2).typeHierarchyDepth, bVar2 <= bVar1 &&((pIVar6._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CustomLogicContinueExpressionAst))))) {
						this.__2__current = null;
						local_70.__1__state = 0xc;
						return true;
					}
				}
				goto label_05b8df08;
			case 0xc:
				this.__1__state = -3;
				pUVar30 = this._cwd_5__7;
				if (pUVar30 == null) {
					throw new NullReferenceException();
				}
		label_05b8df08: ;
				pIVar27 = pUVar30.Result;
				if (pIVar27 == null) {
		label_05b8df6b: ;
					ppUVar33 = &this._cwd_5__7;
					*ppUVar33 = null;
					goto label_05b8e79e;
				}
				pIVar6 = pIVar27.klass;
				bVar1 = (pIVar6._2).typeHierarchyDepth;
				bVar2 = (typeof(CustomLogicReturnExpressionAst)._2).typeHierarchyDepth;
				if (((bVar1 < bVar2) ||((pIVar6._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicReturnExpressionAst))) &&((bVar2 = (typeof(CustomLogicBreakExpressionAst)._2).typeHierarchyDepth, bVar1 < bVar2 ||((pIVar6._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicBreakExpressionAst))))) goto label_05b8df6b;
				goto label_05b8e1d5;
			case 0xd:
				this.__1__state = -3;
				pUVar30 = this._cwd_5__7;
				if (pUVar30 == null) {
					throw new NullReferenceException();
				}
				this.__2__current = pUVar30.Result;
				local_70.__1__state = 0xe;
				break;
			case 0xe:
				this.__1__state = -3;
				pUVar30 = this._cwd_5__7;
				if (pUVar30 == null) {
					throw new NullReferenceException();
				}
				pIVar27 = pUVar30.Result;
				if (pIVar27 != null) {
					pIVar6 = pIVar27.klass;
					bVar1 = (pIVar6._2).typeHierarchyDepth;
					bVar2 = (typeof(CustomLogicReturnExpressionAst)._2).typeHierarchyDepth;
					if ((((bVar2 <= bVar1) &&((pIVar6._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CustomLogicReturnExpressionAst))) ||((bVar2 = (typeof(CustomLogicBreakExpressionAst)._2).typeHierarchyDepth, bVar2 <= bVar1 &&((pIVar6._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CustomLogicBreakExpressionAst))))) ||((bVar2 = (typeof(CustomLogicContinueExpressionAst)._2).typeHierarchyDepth, bVar2 <= bVar1 &&((pIVar6._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CustomLogicContinueExpressionAst))))) goto label_05b8e1d5;
				}
				ppUVar33 = &this._cwd_5__7;
				*ppUVar33 = null;
				iVar31 = 0;
				goto switchD_05b8ebde_default;
			case 0xf:
				this.__1__state = -3;
				pUVar30 = this._cwd_5__7;
				if (pUVar30 == null) {
					throw new NullReferenceException();
				}
				this.__2__current = pUVar30.Result;
				local_70.__1__state = 0x10;
				break;
			case 0x10:
				this.__1__state = -3;
				pUVar30 = this._cwd_5__7;
				if (pUVar30 == null) {
					throw new NullReferenceException();
				}
				pIVar27 = pUVar30.Result;
				iVar32 = 3;
				iVar31 = 3;
		joined_r0x05b8e102: ;
				if (pIVar27 == null) {
		label_05b8e17b: ;
					this._conditionalState_5__2 = iVar31;
					ppUVar33 = &this._cwd_5__7;
					*ppUVar33 = null;
					goto switchD_05b8ebde_caseD_1;
				}
				pIVar6 = pIVar27.klass;
				bVar1 = (pIVar6._2).typeHierarchyDepth;
				bVar2 = ((typeof(CustomLogicReturnExpressionAst))._2).typeHierarchyDepth;
				if (((bVar1 < bVar2) ||((pIVar6._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicReturnExpressionAst))) &&((bVar2 = ((typeof(CustomLogicBreakExpressionAst))._2).typeHierarchyDepth, bVar1 < bVar2 ||((pIVar6._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicBreakExpressionAst))))) {
					bVar2 = ((typeof(CustomLogicContinueExpressionAst))._2).typeHierarchyDepth;
					iVar31 = iVar32;
					if ((bVar1 < bVar2) ||((pIVar6._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicContinueExpressionAst))) goto label_05b8e17b;
				}
		label_05b8e1d5: ;
				this.__1__state = -1;
				(this.__7__wrap2).Dispose();
				return false;
			case 0x11:
				this.__1__state = -4;
				pUVar30 = this._cwd_5__7;
				if (pUVar30 == null) {
					throw new NullReferenceException();
				}
				this.__2__current = pUVar30.Result;
				local_70.__1__state = 0x12;
				break;
			case 0x12:
				this.__1__state = -4;
				pUVar30 = this._cwd_5__7;
				if (pUVar30 == null) {
					throw new NullReferenceException();
				}
				pIVar27 = pUVar30.Result;
				if (pIVar27 != null) {
					pIVar6 = pIVar27.klass;
					bVar1 = (pIVar6._2).typeHierarchyDepth;
					bVar2 = (typeof(CustomLogicBreakExpressionAst)._2).typeHierarchyDepth;
					if (((bVar2 <= bVar1) &&((pIVar6._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CustomLogicBreakExpressionAst))) ||((bVar2 = (typeof(CustomLogicContinueExpressionAst)._2).typeHierarchyDepth, bVar2 <= bVar1 &&((pIVar6._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CustomLogicContinueExpressionAst))))) {
						this.__2__current = null;
						local_70.__1__state = 0x13;
						return true;
					}
				}
				goto label_05b8e05a;
			case 0x13:
				this.__1__state = -4;
				pUVar30 = this._cwd_5__7;
				if (pUVar30 == null) {
					throw new NullReferenceException();
				}
		label_05b8e05a: ;
				pIVar27 = pUVar30.Result;
				if (pIVar27 == null) {
		label_05b8e0bd: ;
					ppUVar33 = &this._cwd_5__7;
					*ppUVar33 = null;
					goto label_05b8e6d0;
				}
				pIVar6 = pIVar27.klass;
				bVar1 = (pIVar6._2).typeHierarchyDepth;
				bVar2 = (typeof(CustomLogicReturnExpressionAst)._2).typeHierarchyDepth;
				if (((bVar1 < bVar2) ||((pIVar6._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicReturnExpressionAst))) &&((bVar2 = (typeof(CustomLogicBreakExpressionAst)._2).typeHierarchyDepth, bVar1 < bVar2 ||((pIVar6._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicBreakExpressionAst))))) goto label_05b8e0bd;
				this.__1__state = -3;
				(this.__7__wrap8).Dispose();
				this = local_70;
				goto label_05b8e1d5;
			}
			return true;
		}

		[Token(Token = "0x6003CE6")]
		[Address(RVA = "0x5A8F320", Offset = "0x5A8E320", VA = "0x5A8F320")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__87$$<>m__Finally1): clean
			this.__1__state = -1;
			(this.__7__wrap2).Dispose();
			return;
		}

		[Token(Token = "0x6003CE7")]
		[Address(RVA = "0x5A8F2D0", Offset = "0x5A8E2D0", VA = "0x5A8F2D0")]
		private void _003C_003Em__Finally2()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__87$$<>m__Finally2): clean
			this.__1__state = -3;
			(this.__7__wrap8).Dispose();
			return;
		}

		[Token(Token = "0x6003CE9")]
		[Address(RVA = "0x5A8F370", Offset = "0x5A8E370", VA = "0x5A8F370", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator.<EvaluateBlockCoroutine>d__87$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_CustomLogic_CustomLogicEvaluator_EvaluateBlockCoroutine_d__87_System_Collections_IEnumerator_Res);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000651")]
	[CompilerGenerated]
	private sealed class _003COnSecond_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001C13")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001C14")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001C15")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CustomLogicEvaluator _003C_003E4__this;

		[Token(Token = "0x17000A90")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003CEE")]
			[Address(RVA = "0x5A8F770", Offset = "0x5A8E770", VA = "0x5A8F770", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator.<OnSecond>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000A91")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003CF0")]
			[Address(RVA = "0x5A8F7C0", Offset = "0x5A8E7C0", VA = "0x5A8F7C0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator.<OnSecond>d__18$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6003CEB")]
		[Address(RVA = "0x5A8F3C0", Offset = "0x5A8E3C0", VA = "0x5A8F3C0")]
		[DebuggerHidden]
		public _003COnSecond_003Ed__18(int _003C_003E1__state)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator.<OnSecond>d__18$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6003CEC")]
		[Address(RVA = "0x5A8F3E0", Offset = "0x5A8E3E0", VA = "0x5A8F3E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator.<OnSecond>d__18$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6003CED")]
		[Address(RVA = "0x5A8F3F0", Offset = "0x5A8E3F0", VA = "0x5A8F3F0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator.<OnSecond>d__18$$MoveNext): 7 lines keep C-only constructs
			int iVar1;
			CustomLogicEvaluator __this_00;
			PhotonView __this_01;
			Dictionary<int, object> pSVar2;
			byte uVar3;
			bool bVar4;
			Object[] parameters;
			object pIVar5;
			object pIVar6;
			System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_02;
			CustomLogicNetworkViewBuiltin __this_03;
			WaitForSeconds __this_04;
			ulong local_58;
			System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_50;
			System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;

			local_48._dictionary = null;
			local_48._index = 0;
			local_48._version = 0;
			local_48._currentKey = null;
			iVar1 = this.__1__state;
			if (iVar1 != 1) {
				if (iVar1 != 0) {
					return false;
				}
				this.__1__state = -1;
		label_05b8f69b: ;
				__this_04 = new WaitForSeconds(1.0);
				this.__2__current = (object)__this_04;
				this.__1__state = 1;
				return true;
			}
			__this_00 = this.__4__this;
			this.__1__state = -1;
			if (__this_00 != null) {
				__this_00.EvaluateMethodForCallbacks("OnSecond", null);
				if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
					uVar3 = PhotonNetwork.IsMasterClient;
				}
				else {
					uVar3 = PhotonNetwork.IsMasterClient;
				}
				if (!(bool)uVar3) goto label_05b8f69b;
				local_58._4_4_ = (undefined4)((ulong)local_58 >> 0x20);
				__this_01 = RPCManager.PhotonView;
				parameters = (Object[])new object[1];
				local_58 = CONCAT44(local_58._4_4_, __this_00.CurrentTime);
				pIVar5 = (object)local_58;
				if (parameters != null) {
					if ((pIVar5 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((parameters.obj).klass)._1).element_class), pIVar6 == null)) {
						pIVar5 = new ArrayTypeMismatchException();
						throw pIVar5;
					}
					if ((int)parameters.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					parameters[0] = pIVar5;
					if (__this_01 != null) {
						__this_01.RPC("SyncCurrentTimeRPC", 1, parameters);
						pSVar2 = (Dictionary<int, object>)__this_00.IdToNetworkView;
						if ((pSVar2 != null) &&(__this_02 = pSVar2.Keys, __this_02 != null)) {
							local_48 = __this_02.GetEnumerator();
							local_58 = 0;
							local_50 = &local_48;
							while (bVar4 = local_48.MoveNext()) {
								pSVar2 = (Dictionary<int, object>)__this_00.IdToNetworkView;
								if (pSVar2 == null) {
									throw new NullReferenceException();
								}
								__this_03 = pSVar2.get_Item((int32_t)local_48._currentKey);
								if (__this_03 == null) {
									throw new NullReferenceException();
								}
								__this_03.OnSecond();
							}
							local_48.Dispose();
							goto label_05b8f69b;
						}
					}
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x6003CEF")]
		[Address(RVA = "0x5A8F780", Offset = "0x5A8E780", VA = "0x5A8F780", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator.<OnSecond>d__18$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_CustomLogic_CustomLogicEvaluator_OnSecond_d__18_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4001BDD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private object[] _networkCallback;

	[Token(Token = "0x4001BDE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private List<object> emptyList;

	[Token(Token = "0x4001BDF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public float CurrentTime;

	[Token(Token = "0x4001BE0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	public bool HasSetMusic;

	[Token(Token = "0x4001BE1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public Dictionary<int, CustomLogicNetworkViewBuiltin> IdToNetworkView;

	[Token(Token = "0x4001BE2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public Dictionary<string, CustomLogicNetworkViewBuiltin> AddonToNetworkView;

	[Token(Token = "0x4001BE3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public Dictionary<int, CustomLogicMapObjectBuiltin> IdToMapObjectBuiltin;

	[Token(Token = "0x4001BE4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected CustomLogicStartAst _start;

	[Token(Token = "0x4001BE5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected Dictionary<string, CustomLogicClassInstance> _staticClasses;

	[Token(Token = "0x4001BE6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected Dictionary<string, CustomLogicClassInstance> _addonClasses;

	[Token(Token = "0x4001BE7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected Dictionary<string, Dictionary<CustomLogicSourceType, CustomLogicClassInstance>> _namespacedStaticClasses;

	[Token(Token = "0x4001BE8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	protected Dictionary<string, List<CustomLogicClassInstance>> _callbacks;

	[Token(Token = "0x4001BE9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public Dictionary<int, Dictionary<string, float>> PlayerIdToLastPropertyChanges;

	[Token(Token = "0x4001BEA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	public string ScoreboardHeader;

	[Token(Token = "0x4001BEB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	public string ScoreboardProperty;

	[Token(Token = "0x4001BEC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly object[] EmptyArgs;

	[Token(Token = "0x4001BED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public bool DefaultShowKillScore;

	[Token(Token = "0x4001BEE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x81")]
	public bool DefaultShowKillFeed;

	[Token(Token = "0x4001BEF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x82")]
	public bool DefaultAddKillScore;

	[Token(Token = "0x4001BF0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x83")]
	public bool ShowScoreboardLoadout;

	[Token(Token = "0x4001BF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x84")]
	public bool ShowScoreboardStatus;

	[Token(Token = "0x4001BF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	public string ForcedCharacterType;

	[Token(Token = "0x4001BF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	public string ForcedLoadout;

	[Token(Token = "0x4001BF7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Stack<(string className, string methodName, CustomLogicSourceType? ns)> _executionStack;

	[Token(Token = "0x4001BF8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private int _currentLineNumber;

	[Token(Token = "0x4001BF9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	public object[] Parameters3;

	[Token(Token = "0x4001BFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private string add;

	[Token(Token = "0x4001BFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private string sub;

	[Token(Token = "0x4001BFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private string mul;

	[Token(Token = "0x4001BFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private string div;

	[Token(Token = "0x4001BFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private string mod;

	[Token(Token = "0x4001BFF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private string eq;

	[Token(Token = "0x4001C00")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private string copy;

	[Token(Token = "0x17000A8B")]
	public CustomLogicCompiler Compiler
	{
		[Token(Token = "0x6003CBE")]
		[Address(RVA = "0x5A886A0", Offset = "0x5A876A0", VA = "0x5A886A0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$get_Compiler): clean
			return this._Compiler_k__BackingField;
		}
		[Token(Token = "0x6003CBF")]
		[Address(RVA = "0x5A886B0", Offset = "0x5A876B0", VA = "0x5A886B0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$set_Compiler): clean
			this._Compiler_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000A8C")]
	public bool CaptureErrors
	{
		[Token(Token = "0x6003CC0")]
		[Address(RVA = "0x5A886D0", Offset = "0x5A876D0", VA = "0x5A886D0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$get_CaptureErrors): clean
			return this._CaptureErrors_k__BackingField;
		}
		[Token(Token = "0x6003CC1")]
		[Address(RVA = "0x5A886E0", Offset = "0x5A876E0", VA = "0x5A886E0")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$set_CaptureErrors): clean
			this._CaptureErrors_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000A8D")]
	public List<CustomLogicError> CapturedErrors
	{
		[Token(Token = "0x6003CC2")]
		[Address(RVA = "0x5A886F0", Offset = "0x5A876F0", VA = "0x5A886F0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$get_CapturedErrors): clean
			return this._CapturedErrors_k__BackingField;
		}
		[Token(Token = "0x6003CC3")]
		[Address(RVA = "0x5A88700", Offset = "0x5A87700", VA = "0x5A88700")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$set_CapturedErrors): clean
			this._CapturedErrors_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6003C92")]
	[Address(RVA = "0x5A7A300", Offset = "0x5A79300", VA = "0x5A7A300")]
	public void Start(Dictionary<string, BaseSetting> modeSettings, Dictionary<string, Dictionary<string, BaseSetting>> addonSettings)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$Start): 45 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		BaseSetting pSVar3;
		CustomLogicManager __this_00;
		Dictionary<TKey, TValue> pSVar4;
		Dictionary<TKey, TValue> key;
		bool bVar5;
		CustomLogicClassInstance pCVar6;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o pSVar7;
		BaseSetting pSVar8;
		object pIVar9;
		Dictionary<object, object> pSVar10;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o pSVar11;
		CustomLogicEvaluator.d__18<OnSecond> __this_01;
		MethodInfo* method_00;
		byte[] local_f8 = new byte[16];
		Dictionary<TKey, TValue> local_e8;
		uint local_dc;
		ulong local_d8;
		byte[] local_c8 = new byte[8];
		ulong uStack_c0;
		Dictionary<TKey, TValue> local_b8;
		byte[] local_a8 = new byte[8];
		ulong uStack_a0;
		Dictionary<TKey, TValue> local_98;
		byte[] local_88 = new byte[8];
		ulong uStack_80;
		Dictionary<TKey, TValue> local_78;
		byte[] local_68 = new byte[8];
		ulong uStack_60;
		Dictionary<TKey, TValue> local_58;
		byte[] local_48 = new byte[8];
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o pSStack_40;
		Dictionary<TKey, TValue> local_38;

		local_c8 = (byte[])0x0;
		uStack_c0._0_4_ = 0;
		uStack_c0._4_4_ = 0;
		local_b8 = null;
		local_88 = (byte[])0x0;
		uStack_80._0_4_ = 0;
		uStack_80._4_4_ = 0;
		local_78 = null;
		local_a8 = (byte[])0x0;
		uStack_a0._0_4_ = 0;
		uStack_a0._4_4_ = 0;
		local_98 = null;
		local_68 = (byte[])0x0;
		uStack_60._0_4_ = 0;
		uStack_60._4_4_ = 0;
		local_58 = null;
		local_48 = (byte[])0x0;
		local_38 = null;
		this.Init();
		this.CurrentTime = 0.0;
		pSVar10 = (Dictionary<object, object>)this._staticClasses;
		if (pSVar10 == null) {
			throw new NullReferenceException();
		}
		pCVar6 = pSVar10.get_Item((Il2CppObject *)"Main");
		if (modeSettings == null) {
			throw new NullReferenceException();
		}
		pSVar7 = modeSettings.Keys;
		if (pSVar7 == null) {
			throw new NullReferenceException();
		}
		local_f8.GetEnumerator(pSVar7) ;
		local_b8 = local_e8;
		local_c8 = (byte[])local_f8._0_8_;
		uStack_c0 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_f8._8_8_ ;
		local_f8._0_8_ = null;
		local_f8._8_8_ = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_c8;
		while (true) {
			bVar5 = local_c8.MoveNext();
			pSVar4 = local_b8;
			if (!(bVar5)) break;
			pSVar8 = modeSettings.get_Item((object)local_b8);
			if (pSVar8 != null) {
				pSVar3 = pSVar8.klass;
				bVar1 = (pSVar3._2).typeHierarchyDepth;
				bVar2 = (typeof(FloatSetting)._2).typeHierarchyDepth;
				if ((bVar1 < bVar2) ||((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(FloatSetting))) {
					bVar2 = (typeof(StringSetting)._2).typeHierarchyDepth;
					if ((bVar1 < bVar2) ||((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(StringSetting))) {
						bVar2 = (typeof(IntSetting)._2).typeHierarchyDepth;
						if ((bVar1 < bVar2) ||((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(IntSetting))) {
							bVar2 = (typeof(BoolSetting)._2).typeHierarchyDepth;
							if ((bVar2 <= bVar1) &&((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(BoolSetting))) {
								if (pCVar6 == null) {
									throw new NullReferenceException();
								}
								pSVar10 = (Dictionary<object, object>)pCVar6.Variables;
								local_d8 = CONCAT71(local_d8._1_7_, *(byte)((long)&(*(ulong)((sbyte)pSVar8 + 0x18)) + 1));
								pIVar9 = (object)local_d8;
								if (pSVar10 == null) {
									throw new NullReferenceException();
								}
								pSVar10.set_Item((object)pSVar4, pIVar9);
							}
						}
						else {
							if (pCVar6 == null) {
								throw new NullReferenceException();
							}
							pSVar10 = (Dictionary<object, object>)pCVar6.Variables;
							local_d8 = CONCAT44(local_d8._4_4_, *(uint)((long)&(*(ulong)((sbyte)pSVar8 + 0x18)) + 4));
							pIVar9 = (object)local_d8;
							if (pSVar10 == null) {
								throw new NullReferenceException();
							}
							pSVar10.set_Item((object)pSVar4, pIVar9);
						}
					}
					else {
						if (pCVar6 == null) {
							throw new NullReferenceException();
						}
						pSVar10 = (Dictionary<object, object>)pCVar6.Variables;
						if (pSVar10 == null) {
							throw new NullReferenceException();
						}
						pSVar10.set_Item((object)pSVar4, (*(ulong)((sbyte)pSVar8 + 0x20)));
					}
				}
				else {
					if (pCVar6 == null) {
						throw new NullReferenceException();
					}
					pSVar10 = (Dictionary<object, object>)pCVar6.Variables;
					local_d8 = CONCAT44(local_d8._4_4_, *(uint)((long)&(*(ulong)((sbyte)pSVar8 + 0x18)) + 4));
					pIVar9 = (object)local_d8;
					if (pSVar10 == null) {
						throw new NullReferenceException();
					}
					pSVar10.set_Item((object)pSVar4, pIVar9);
				}
			}
		}
		local_c8.Dispose();
		pSVar10 = (Dictionary<object, object>)this._addonClasses;
		if (pSVar10 == null) {
			throw new NullReferenceException();
		}
		pSVar7 = pSVar10.Keys;
		if (pSVar7 == null) {
			throw new NullReferenceException();
		}
		local_f8.GetEnumerator(pSVar7);
		local_78 = local_e8;
		local_88 = (byte[])local_f8._0_8_;
		uStack_80 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_f8._8_8_ ;
		local_d8 = 0;
		if (addonSettings == null ) {
			do {
				bVar5 = local_88.MoveNext();
			} while (bVar5);
		}
		else {
			while (true) {
				bVar5 = local_88.MoveNext();
				pSVar4 = local_78;
				if (!(bVar5)) break;
				bVar5 = addonSettings.ContainsKey((object)local_78);
				if (bVar5) {
					pSVar10 = (Dictionary<object, object>)this._addonClasses;
					if (pSVar10 == null) {
						throw new NullReferenceException();
					}
					pCVar6 = pSVar10.get_Item((object)pSVar4);
					pSVar10 = (Dictionary<object, object>)addonSettings.get_Item((object)pSVar4);
					if (pSVar10 == null) {
						throw new NullReferenceException();
					}
					pSVar7 = pSVar10.Keys;
					if (pSVar7 == null) {
						throw new NullReferenceException();
					}
					local_f8.GetEnumerator(pSVar7);
					local_b8 = local_e8;
					local_c8 = (byte[])local_f8._0_8_;
					uStack_c0 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_f8._8_8_;
					local_f8._0_8_ = null;
					local_f8._8_8_ = local_c8;
					while (true) {
						bVar5 = local_c8.MoveNext();
						key = local_b8;
						if (!(bVar5)) break;
						pSVar10 = (Dictionary<object, object>)addonSettings.get_Item((object)pSVar4);
						if (pSVar10 == null) {
							throw new NullReferenceException();
						}
						pSVar8 = pSVar10.get_Item((object)key);
						if (pSVar8 != null) {
							pSVar3 = pSVar8.klass;
							bVar1 = (pSVar3._2).typeHierarchyDepth;
							bVar2 = (typeof(FloatSetting)._2).typeHierarchyDepth;
							if ((bVar1 < bVar2) ||((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(FloatSetting)) ) {
								bVar2 = (typeof(StringSetting)._2).typeHierarchyDepth;
								if ((bVar1 < bVar2) ||((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(StringSetting))) {
									bVar2 = (typeof(IntSetting)._2).typeHierarchyDepth;
									if ((bVar1 < bVar2) ||((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(IntSetting))) {
										bVar2 = (typeof(BoolSetting)._2).typeHierarchyDepth;
										if ((bVar2 <= bVar1) &&((pSVar3._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(BoolSetting))) {
											if (pCVar6 == null) {
												throw new NullReferenceException();
											}
											pSVar10 = (Dictionary<object, object>)pCVar6.Variables;
											local_dc = CONCAT31(local_dc._1_3_, *(byte)((long)&(*(ulong)((sbyte)pSVar8 + 0x18)) + 1));
											pIVar9 = (object)local_dc;
											if (pSVar10 == null) {
												throw new NullReferenceException();
											}
											pSVar10.set_Item((object)key, pIVar9);
										}
									}
									else {
										if (pCVar6 == null) {
											throw new NullReferenceException();
										}
										pSVar10 = (Dictionary<object, object>)pCVar6.Variables;
										local_dc = *(uint)((long)&(*(ulong)((sbyte)pSVar8 + 0x18)) + 4);
										pIVar9 = (object)local_dc;
										if (pSVar10 == null) {
											throw new NullReferenceException();
										}
										pSVar10.set_Item((object)key, pIVar9);
									}
								}
								else {
									if (pCVar6 == null) {
										throw new NullReferenceException();
									}
									pSVar10 = (Dictionary<object, object>)pCVar6.Variables;
									if (pSVar10 == null) {
										throw new NullReferenceException();
									}
									pSVar10.set_Item((object)key, (*(ulong)((sbyte)pSVar8 + 0x20)));
								}
							}
							else {
								if (pCVar6 == null) {
									throw new NullReferenceException();
								}
								pSVar10 = (Dictionary<object, object>)pCVar6.Variables;
								local_dc = *(uint)((long)&(*(ulong)((sbyte)pSVar8 + 0x18)) + 4);
								pIVar9 = (object)local_dc;
								if (pSVar10 == null) {
									throw new NullReferenceException();
								}
								pSVar10.set_Item((object)key, pIVar9);
							}
						}
					}
					local_c8.Dispose();
				}
			}
		}
		local_88.Dispose();
		pSVar10 = (Dictionary<object, object>)this._staticClasses;
		if (pSVar10 == null) {
			throw new NullReferenceException();
		}
		pSVar11 = pSVar10.Values;
		if (pSVar11 == null) {
			throw new NullReferenceException();
		}
		local_f8.GetEnumerator(pSVar11);
		local_98 = local_e8;
		local_a8 = (byte[])local_f8._0_8_;
		uStack_a0 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_f8._8_8_ ;
		local_f8._0_8_ = null;
		local_f8._8_8_ =(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o)local_a8;
		while (true) {
			bVar5 = local_a8.MoveNext();
			pSVar4 = local_98;
			if (!(bVar5)) break;
			this.EvaluateMethod((CustomLogicClassInstance)local_98, "Init", null, 0);
			if (pSVar4 == null) {
				throw new NullReferenceException();
			}
			*(bool)((long)&pSVar4._buckets + 1) = true;
		}
		local_a8.Dispose();
		pSVar10 = (Dictionary<object, object>)this._namespacedStaticClasses;
		if (pSVar10 == null) {
			throw new NullReferenceException();
		}
		pSVar11 = pSVar10.Values;
		if (pSVar11 == null) {
			throw new NullReferenceException();
		}
		local_f8.GetEnumerator(pSVar11);
		local_58 = local_e8;
		local_68 = (byte[])local_f8._0_8_;
		uStack_60 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o)local_f8._8_8_;
		local_d8 = 0;
		while (bVar5 = local_68.MoveNext()) {
			if (local_58 == null) {
				throw new NullReferenceException();
			}
			pSVar11 = local_58.Values;
			if (pSVar11 == null) {
				throw new NullReferenceException();
			}
			local_f8.GetEnumerator(pSVar11);
			local_38 = local_e8;
			local_48 = (byte[])local_f8._0_8_;
			pSStack_40 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o)local_f8._8_8_;
			local_f8._0_8_ = null;
			local_f8._8_8_ =(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o)local_48;
			while (true) {
				bVar5 = local_48.MoveNext();
				pSVar4 = local_38;
				if (!(bVar5)) break;
				this.EvaluateMethod((CustomLogicClassInstance)local_38, "Init", null, 0);
				if (pSVar4 == null) {
					throw new NullReferenceException();
				}
				*(byte)((long)&pSVar4._buckets + 1) = 1;
			}
			local_48.Dispose();
		}
		local_68.Dispose();
		pSVar10 = (Dictionary<object, object>)this._addonClasses;
		if (pSVar10 == null) {
			throw new NullReferenceException();
		}
		pSVar11 = pSVar10.Values;
		if (pSVar11 == null) {
			throw new NullReferenceException();
		}
		method_00 = & MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_CustomLogicClassInstance_GetEnumera ;
		local_f8.GetEnumerator(pSVar11);
		local_98 = local_e8;
		local_a8 = (byte[])local_f8._0_8_;
		uStack_a0 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_f8._8_8_ ;
		local_f8._0_8_ = null;
		local_f8._8_8_ =(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o)local_a8;
		while (bVar5 = local_a8.MoveNext()) {
			this.AddCallbacks((CustomLogicClassInstance)local_98);
		}
		local_a8.Dispose();
		this.EvaluateMethodForCallbacks("Init", null);
		pSVar10 = (Dictionary<object, object>)this._staticClasses;
		if (pSVar10 == null) {
			throw new NullReferenceException();
		}
		pCVar6 = pSVar10.get_Item((Il2CppObject *)"Main");
		this.AddCallbacks(pCVar6);
		this.EvaluateMethodForCallbacks("OnGameStart", null);
		if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
			__this_00 = CustomLogicManager._instance;
		}
		else {
			__this_00 = CustomLogicManager._instance;
		}
		__this_01 = new CustomLogicEvaluator.d__18<OnSecond>(0);
		if (__this_01 != null) {
			__this_01.__4__this = this;
			if (__this_00 != null) {
				__this_00.StartCoroutine((IEnumerator)__this_01);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C93")]
	[Address(RVA = "0x5A82C30", Offset = "0x5A81C30", VA = "0x5A82C30")]
	protected void AddCallbacks(CustomLogicClassInstance instance)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$AddCallbacks): 10 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		CustomLogicStartAst pCVar3;
		Dictionary<object, object> pSVar4;
		Object[] pSVar5;
		bool bVar7;
		object pIVar8;
		CustomLogicClassDefinitionAst pCVar9;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_00;
		List<CustomLogicClassInstance> __this_01;
		List<object> __this_02;
		byte[] local_60 = new byte[16];
		object local_50;
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;

		pCVar3 = this._start;
		if ((pCVar3 != null) &&(instance != null)) {
			pSVar4 = (Dictionary<object, object>)pCVar3.Classes;
			pIVar8 = (object)instance.unknown();
			if (pSVar4 != null) {
				pCVar9 = pSVar4.get_Item(pIVar8);
				if ((pCVar9 != null) &&(pSVar4 = (Dictionary<object, object>)pCVar9.Methods, pSVar4 != null)) {
					__this_00 = pSVar4.Keys;
					if (__this_00 != null) {
						local_60.GetEnumerator(__this_00);
						local_48._currentKey = local_50;
						local_48._dictionary =(Dictionary<TKey, TValue>)local_60._0_8_;
						local_48._index = local_60._8_4_;
						local_48._version = local_60._12_4_;
						local_60._0_8_ = null;
						local_60._8_8_ = &local_48;
						while(true) {
							bVar7 = local_48.MoveNext();
							pIVar8 = local_48._currentKey;
							if (!bVar7) {
								local_48.Dispose();
								return;
							}
							pSVar4 = (Dictionary<object, object>)this._callbacks;
							if (pSVar4 == null) {
								throw new NullReferenceException();
							}
							bVar7 = pSVar4.ContainsKey(local_48._currentKey);
							if (!bVar7) {
								pSVar4 = (Dictionary<object, object>)this._callbacks;
								__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<CustomLogicClassInstance>));
								__this_01 = new List<object>();
								if (pSVar4 == null) {
									throw new NullReferenceException();
								}
								pSVar4.Add(pIVar8, (object)__this_01);
							}
							pSVar4 = (Dictionary<object, object>)this._callbacks;
							if (pSVar4 == null) {
								throw new NullReferenceException();
							}
							__this_02 = (List<object>)pSVar4.get_Item(pIVar8);
							if (__this_02 == null) break;
							piVar1 = &__this_02._version;
							*piVar1 = *piVar1 + 1;
							pSVar5 = __this_02._items;
							if (pSVar5 == null) break;
							uVar2 = __this_02._size;
							if (uVar2 < (uint)pSVar5.Length) {
								__this_02._size = uVar2 + 1;
								pSVar5[(int)uVar2] = (object)instance;
							}
							else {
								__this_02.AddWithResize((object)instance);
							}
						}
						throw new NullReferenceException();
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C94")]
	[Address(RVA = "0x5A832F0", Offset = "0x5A822F0", VA = "0x5A832F0")]
	protected void RemoveCallbacks(CustomLogicClassInstance instance)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$RemoveCallbacks): 7 lines keep C-only constructs
		CustomLogicStartAst pCVar1;
		Dictionary<object, object> pSVar2;
		bool bVar3;
		object pIVar4;
		CustomLogicClassDefinitionAst pCVar5;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_00;
		List<object> __this_01;
		byte[] auStack_60 = new byte[16];
		object pIStack_50;
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_48;

		pCVar1 = this._start;
		if ((pCVar1 != null) &&(instance != null)) {
			pSVar2 = (Dictionary<object, object>)pCVar1.Classes;
			pIVar4 = (object)instance.unknown();
			if (pSVar2 != null) {
				pCVar5 = pSVar2.get_Item(pIVar4);
				if ((pCVar5 != null) &&(pSVar2 = (Dictionary<object, object>)pCVar5.Methods, pSVar2 != null)) {
					__this_00 = pSVar2.Keys;
					if (__this_00 != null) {
						auStack_60.GetEnumerator(__this_00);
						SStack_48._currentKey = pIStack_50;
						SStack_48._dictionary =(Dictionary<TKey, TValue>)auStack_60._0_8_;
						SStack_48._index = auStack_60._8_4_;
						SStack_48._version = auStack_60._12_4_;
						auStack_60._0_8_ = null;
						auStack_60._8_8_ = &SStack_48;
						while(true) {
							do {
								bVar3 = SStack_48.MoveNext();
								pIVar4 = SStack_48._currentKey;
								if (!bVar3) {
									SStack_48.Dispose();
									return;
								}
								pSVar2 = (Dictionary<object, object>)this._callbacks;
								if (pSVar2 == null) {
									throw new NullReferenceException();
								}
								bVar3 = pSVar2.ContainsKey(SStack_48._currentKey);
							} while (!bVar3);
							pSVar2 = (Dictionary<object, object>)this._callbacks;
							if (pSVar2 == null) {
								throw new NullReferenceException();
							}
							__this_01 = (List<object>)pSVar2.get_Item(pIVar4);
							if (__this_01 == null) break;
							bVar3 = __this_01.Contains((object)instance);
							if (bVar3) {
								__this_01.Remove((object)instance);
							}
						}
						throw new NullReferenceException();
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C95")]
	[Address(RVA = "0x5A7B690", Offset = "0x5A7A690", VA = "0x5A7B690")]
	public void OnTick()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$OnTick): clean
		float fVar1;
		float fVar2;

		this.EvaluateMethodForCallbacks("OnTick", null);
		fVar1 = this.CurrentTime;
		fVar2 = Time.fixedDeltaTime;
		this.CurrentTime = fVar2 + fVar1;
		return;
	}

	[Token(Token = "0x6003C96")]
	[Address(RVA = "0x5A7BA20", Offset = "0x5A7AA20", VA = "0x5A7BA20")]
	public void OnFrame()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$OnFrame): clean


		this.EvaluateMethodForCallbacks("OnFrame", null);
		return;
	}

	[Token(Token = "0x6003C97")]
	[Address(RVA = "0x5A7BB50", Offset = "0x5A7AB50", VA = "0x5A7BB50")]
	public void OnLateFrame()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$OnLateFrame): clean


		this.EvaluateMethodForCallbacks("OnLateFrame", null);
		return;
	}

	[Token(Token = "0x6003C98")]
	[Address(RVA = "0x5A83590", Offset = "0x5A82590", VA = "0x5A83590")]
	public void OnButtonClick(string name)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$OnButtonClick): 1 lines keep C-only constructs
		Object[] parameters;
		object pIVar1;

		parameters = ArrayPool<object>.New(1);
		if (parameters == null) {
			throw new NullReferenceException();
		}
		if (name != null) {
			pIVar1 = il2cpp_vm_Object_IsInst((object)name, (((parameters.obj).klass)._1).element_class);
			if (pIVar1 == null) {
				pIVar1 = new ArrayTypeMismatchException();
				throw pIVar1;
			}
		}
		if ((int)parameters.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		parameters[0] = (object)name;
		this.EvaluateMethodForCallbacks("OnButtonClick", parameters) ;
		ArrayPool<object>.Free(parameters);
		return;
	}

	[Token(Token = "0x6003C99")]
	[Address(RVA = "0x5A83690", Offset = "0x5A82690", VA = "0x5A83690")]
	public void OnPlayerSpawn(Player player, BaseCharacter character)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$OnPlayerSpawn): 2 lines keep C-only constructs
		CustomLogicPlayerBuiltin __this_00;
		CustomLogicCharacterBuiltin obj;
		Object[] parameters;
		object pIVar1;

		__this_00 = new CustomLogicPlayerBuiltin(player);
		if ((typeof(CustomLogicEvaluator)._2).cctor_finished_or_no_cctor == 0) {
			obj = CustomLogicEvaluator.GetCharacterBuiltin(character);
		}
		else {
			obj = CustomLogicEvaluator.GetCharacterBuiltin(character);
		}
		if (obj == null) {
			return;
		}
		parameters = (Object[])new object[2];
		if (parameters == null) {
			throw new NullReferenceException();
		}
		if ((__this_00 != null) &&(pIVar1 = il2cpp_vm_Object_IsInst((object)__this_00, (((parameters.obj).klass)._1).element_class), pIVar1 == null)) {
	label_05b837f9: ;
			pIVar1 = new ArrayTypeMismatchException();
			throw pIVar1;
		}
		if ((int)parameters.Length != 0) {
			parameters[0] = (object)__this_00;
			pIVar1 = il2cpp_vm_Object_IsInst((object)obj, (((parameters.obj).klass)._1).element_class);
			if (pIVar1 == null) goto label_05b837f9;
			if ((parameters.Length & 0xfffffffe) != 0) {
				parameters[1] = (object)obj;
				this.EvaluateMethodForCallbacks("OnPlayerSpawn", parameters);
				return;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6003C9A")]
	[Address(RVA = "0x5A83810", Offset = "0x5A82810", VA = "0x5A83810")]
	public void OnCharacterSpawn(BaseCharacter character)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$OnCharacterSpawn): 1 lines keep C-only constructs
		uint uVar1;
		CustomLogicCharacterBuiltin obj;
		Object[] parameters;
		object pIVar2;

		if (Il2CppMethodInitialized_075473ae == false) {
			Il2CppMethodInitialized_075473ae = true;
			uVar1 = (typeof(CustomLogicEvaluator)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicEvaluator)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			obj = CustomLogicEvaluator.GetCharacterBuiltin(character);
		}
		else {
			obj = CustomLogicEvaluator.GetCharacterBuiltin(character);
		}
		if (obj == null) {
			return;
		}
		parameters = (Object[])new object[1];
		if (parameters == null) {
			throw new NullReferenceException();
		}
		pIVar2 = il2cpp_vm_Object_IsInst((object)obj, (((parameters.obj).klass)._1).element_class);
		if (pIVar2 == null) {
			pIVar2 = new ArrayTypeMismatchException();
			throw pIVar2;
		}
		if ((int)parameters.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		parameters[0] = (object)obj;
		this.EvaluateMethodForCallbacks("OnCharacterSpawn", parameters) ;
		return;
	}

	[Token(Token = "0x6003C9B")]
	[Address(RVA = "0x5A83940", Offset = "0x5A82940", VA = "0x5A83940")]
	public void OnCharacterReloaded(BaseCharacter character)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$OnCharacterReloaded): 1 lines keep C-only constructs
		uint uVar1;
		CustomLogicCharacterBuiltin obj;
		Object[] parameters;
		object pIVar2;

		if (Il2CppMethodInitialized_075473af == false) {
			Il2CppMethodInitialized_075473af = true;
			uVar1 = (typeof(CustomLogicEvaluator)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicEvaluator)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			obj = CustomLogicEvaluator.GetCharacterBuiltin(character);
		}
		else {
			obj = CustomLogicEvaluator.GetCharacterBuiltin(character);
		}
		if (obj == null) {
			return;
		}
		parameters = (Object[])new object[1];
		if (parameters == null) {
			throw new NullReferenceException();
		}
		pIVar2 = il2cpp_vm_Object_IsInst((object)obj, (((parameters.obj).klass)._1).element_class);
		if (pIVar2 == null) {
			pIVar2 = new ArrayTypeMismatchException();
			throw pIVar2;
		}
		if ((int)parameters.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		parameters[0] = (object)obj;
		this.EvaluateMethodForCallbacks("OnCharacterReloaded", parameters) ;
		return;
	}

	[Token(Token = "0x6003C9C")]
	[Address(RVA = "0x5A83A70", Offset = "0x5A82A70", VA = "0x5A83A70")]
	public void OnCharacterDie(BaseCharacter victim, BaseCharacter killer, string killerName)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$OnCharacterDie): 3 lines keep C-only constructs
		CustomLogicCharacterBuiltin obj;
		CustomLogicCharacterBuiltin obj_00;
		Object[] parameters;
		object pIVar1;

		obj = CustomLogicEvaluator.GetCharacterBuiltin(victim);
		obj_00 = CustomLogicEvaluator.GetCharacterBuiltin(killer);
		parameters = (Object[])new object[3];
		if (parameters == null) {
			throw new NullReferenceException();
		}
		if (obj != null) {
			pIVar1 = il2cpp_vm_Object_IsInst((object)obj, (((parameters.obj).klass)._1).element_class);
			if (pIVar1 == null) goto label_05b83bc5;
		}
		if ((int)parameters.Length != 0) {
			parameters[0] = (object)obj;
			if (obj_00 != null) {
				pIVar1 = il2cpp_vm_Object_IsInst((object)obj_00, (((parameters.obj).klass)._1).element_class);
				if (pIVar1 == null) goto label_05b83bc5;
			}
			if ((parameters.Length & 0xfffffffe) != 0) {
				parameters[1] = (object)obj_00;
				if (killerName != null) {
					pIVar1 = il2cpp_vm_Object_IsInst((object)killerName, (((parameters.obj).klass)._1).element_class);
					if (pIVar1 == null) {
	label_05b83bc5: ;
						pIVar1 = new ArrayTypeMismatchException();
						throw pIVar1;
					}
				}
				if (2 < (uint)parameters.Length) {
					parameters[2] = (object)killerName;
					this.EvaluateMethodForCallbacks("OnCharacterDie", parameters);
					return;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6003C9D")]
	[Address(RVA = "0x5A83BE0", Offset = "0x5A82BE0", VA = "0x5A83BE0")]
	public void OnCharacterDamaged(BaseCharacter victim, BaseCharacter killer, string killerName, int damage)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$OnCharacterDamaged): 8 lines keep C-only constructs
		ulong in_RAX;
		CustomLogicCharacterBuiltin obj;
		CustomLogicCharacterBuiltin obj_00;
		Object[] parameters;
		object pIVar1;
		object pIVar2;
		ulong uStack_38;

		uStack_38 = in_RAX;
		obj = CustomLogicEvaluator.GetCharacterBuiltin(victim);
		obj_00 = CustomLogicEvaluator.GetCharacterBuiltin(killer);
		parameters = (Object[])new object[4];
		if (parameters == null) {
			throw new NullReferenceException();
		}
		if (obj != null) {
			pIVar1 = il2cpp_vm_Object_IsInst((object)obj, (((parameters.obj).klass)._1).element_class);
			if (pIVar1 == null) goto label_05b83da3;
		}
		if ((int)parameters.Length != 0) {
			parameters[0] = (object)obj;
			if (obj_00 != null) {
				pIVar1 = il2cpp_vm_Object_IsInst((object)obj_00, (((parameters.obj).klass)._1).element_class);
				if (pIVar1 == null) goto label_05b83da3;
			}
			if ((parameters.Length & 0xfffffffe) == 0) goto label_05b83d9e;
			parameters[1] = (object)obj_00;
			if (killerName != null) {
				pIVar1 = il2cpp_vm_Object_IsInst((object)killerName, (((parameters.obj).klass)._1).element_class);
				if (pIVar1 == null) goto label_05b83da3;
			}
			if (2 < (uint)parameters.Length) {
				parameters[2] = (object)killerName;
				uStack_38 = CONCAT44(damage, (undefined4)uStack_38);
				pIVar1 = (object)(((long)&uStack_38 + 4));
				if (pIVar1 != null) {
					pIVar2 = il2cpp_vm_Object_IsInst(pIVar1, (((parameters.obj).klass)._1).element_class);
					if (pIVar2 == null) {
	label_05b83da3: ;
						pIVar1 = new ArrayTypeMismatchException();
						throw pIVar1;
					}
				}
				if ((parameters.Length & 0xfffffffc) != 0) {
					parameters[3] = pIVar1;
					this.EvaluateMethodForCallbacks("OnCharacterDamaged", parameters);
					return;
				}
			}
		}
	label_05b83d9e: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6003C9E")]
	[Address(RVA = "0x5A83DC0", Offset = "0x5A82DC0", VA = "0x5A83DC0")]
	public object OnChatInput(string message)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$OnChatInput): 15 lines keep C-only constructs
		CustomLogicEvaluator __this_00;
		Dictionary<object, object> pSVar1;
		bool bVar2;
		object pIVar3;
		CustomLogicClassInstance pCVar4;
		Object[] parameterValues;
		sbyte pcVar5;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_01;
		object pIVar6;
		MethodInfo* parameterValues_00;
		int iVar7;
		byte local_69;
		object local_68;
		byte[] local_60 = new byte[16];
		CustomLogicClassInstance local_50;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;

		local_48._dictionary = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._currentValue = null;
		__this_00 = CustomLogicManager.Evaluator;
		local_60[0] = 1;
		pIVar3 = (object)local_60;
		if (__this_00 == null) {
			return pIVar3;
		}
		pSVar1 = (Dictionary<object, object>)this._staticClasses;
		if (pSVar1 == null) goto label_05b841ca;
		pCVar4 = pSVar1.get_Item((Il2CppObject *)"Main");
		bVar2 = __this_00.HasMethod(pCVar4, "OnChatInput");
		if (bVar2) {
			pSVar1 = (Dictionary<object, object>)this._staticClasses;
			if (pSVar1 == null) goto label_05b841ca;
			pCVar4 = pSVar1.get_Item((Il2CppObject *)"Main");
			parameterValues = (Object[])new object[1];
			if (parameterValues == null) goto label_05b841ca;
			if ((message != null) &&(pIVar3 = il2cpp_vm_Object_IsInst((object)message, (((parameterValues.obj).klass)._1).element_class), pIVar3 == null)) {
				pIVar3 = new ArrayTypeMismatchException();
				throw pIVar3;
			}
			if ((int)parameterValues.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			parameterValues[0] = (object)message;
			pIVar3 = __this_00.EvaluateMethod(pCVar4, "OnChatInput", parameterValues, 0);
			if (pIVar3 == null) {
				pIVar3 = null;
			}
			else if (((Object[])pIVar3.klass == g_data_075566f0) &&(pcVar5 = il2cpp_vm_Object_Unbox(pIVar3), *pcVar5 == false)) {
				local_60._0_8_ = local_60._0_8_ & 0xffffffffffffff00;
				pIVar3 = (object)local_60;
				return pIVar3;
			}
		}
		pSVar1 = (Dictionary<object, object>)this._addonClasses;
		if ((pSVar1 != null) &&(local_68 = pIVar3, __this_01 = pSVar1.Values, __this_01 != null)) {
			parameterValues_00 = & MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_CustomLogicClassInstance_GetEnumera ;
			local_60.GetEnumerator(__this_01);
			local_48._currentValue = (object)local_50;
			local_48._dictionary = (Dictionary<TKey, TValue>)local_60._0_8_;
			local_48._index = local_60._8_4_;
			local_48._version = local_60._12_4_;
			local_60._0_8_ = null;
			local_60._8_8_ = &local_48;
			do {
				do {
					bVar2 = local_48.MoveNext();
					pIVar3 = local_48._currentValue;
					if (!bVar2) {
						iVar7 = 3;
						pIVar6 = null;
						pIVar3 = local_68;
						goto label_05b8417f;
					}
					if ((CustomLogicClassInstance)local_48._currentValue ==null) {
						throw new NullReferenceException();
					}
					bVar2 = (*(((CustomLogicClassInstance)(local_48._currentValue).klass).vtable) ._4_get_Enabled.methodPtr)(local_48._currentValue,(((CustomLogicClassInstance)(local_48._currentValue).klass) .vtable)._4_get_Enabled.method);
				} while ((!bVar2) ||(bVar2 = __this_00.HasMethod((CustomLogicClassInstance)pIVar3, "OnChatInput"), !bVar2));
				parameterValues_00 = (MethodInfo*)new object[1];
				if ((Object[])parameterValues_00 == null) {
					throw new NullReferenceException();
				}
				if ((message != null) &&(pIVar6 = il2cpp_vm_Object_IsInst((object)message, (((((Object[])parameterValues_00).obj).klass)._1).element_class), pIVar6 == null)) {
					pIVar3 = new ArrayTypeMismatchException();
					throw pIVar3;
				}
				if ((int)((Object[])parameterValues_00).Length == 0) {
					throw new IndexOutOfRangeException();
				}
				((Object[])parameterValues_00)[0] = (object)message;
				pIVar3 = __this_00.EvaluateMethod((CustomLogicClassInstance)pIVar3, "OnChatInput", (Object[])parameterValues_00, 0);
			} while (((pIVar3 == null) ||(parameterValues_00 = (MethodInfo*)pIVar3.klass,(Object[])parameterValues_00 != g_data_075566f0)) ||(pcVar5 = il2cpp_vm_Object_Unbox(pIVar3), pIVar3 = local_68, *pcVar5 != false));
			local_69 = 0;
			pIVar6 = (object)local_69;
			iVar7 = 6;
	label_05b8417f: ;
			local_48.Dispose();
			if (iVar7 == 6) {
				return pIVar6;
			}
			return pIVar3;
		}
	label_05b841ca: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003C9F")]
	[Address(RVA = "0x5A84260", Offset = "0x5A83260", VA = "0x5A84260")]
	public void OnPlayerJoin(Player player)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$OnPlayerJoin): 2 lines keep C-only constructs
		byte bVar1;
		Dictionary<object, object> __this_00;
		CustomLogicPlayerBuiltin __this_01;
		Object[] parameters;
		object pIVar2;
		CustomLogicUIBuiltin __this_02;

		__this_01 = new CustomLogicPlayerBuiltin(player);
		parameters = (Object[])new object[1];
		if (parameters != null) {
			if (__this_01 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)__this_01, (((parameters.obj).klass)._1).element_class);
				if (pIVar2 == null) {
					pIVar2 = new ArrayTypeMismatchException();
					throw pIVar2;
				}
			}
			if ((int)parameters.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			parameters[0] = (object)__this_01;
			this.EvaluateMethodForCallbacks("OnPlayerJoin", parameters);
			__this_00 = (Dictionary<object, object>)this._staticClasses;
			if (__this_00 != null) {
				__this_02 = (CustomLogicUIBuiltin)__this_00.get_Item((Il2CppObject *)"UI");
				if (__this_02 != null) {
					bVar1 = (typeof(CustomLogicUIBuiltin)._2).typeHierarchyDepth;
					if (((__this_02.klass._2).typeHierarchyDepth < bVar1) ||((__this_02.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicUIBuiltin))) {
						throw new InvalidCastException();
					}
					__this_02.OnPlayerJoin(player);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003CA0")]
	[Address(RVA = "0x5A843E0", Offset = "0x5A833E0", VA = "0x5A843E0")]
	public void OnPlayerLeave(Player player)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$OnPlayerLeave): 1 lines keep C-only constructs
		CustomLogicPlayerBuiltin __this_00;
		Object[] parameters;
		object pIVar1;

		__this_00 = new CustomLogicPlayerBuiltin(player);
		parameters = (Object[])new object[1];
		if (parameters == null) {
			throw new NullReferenceException();
		}
		if (__this_00 != null) {
			pIVar1 = il2cpp_vm_Object_IsInst((object)__this_00, (((parameters.obj).klass)._1).element_class);
			if (pIVar1 == null) {
				pIVar1 = new ArrayTypeMismatchException();
				throw pIVar1;
			}
		}
		if ((int)parameters.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		parameters[0] = (object)__this_00;
		this.EvaluateMethodForCallbacks("OnPlayerLeave", parameters) ;
		return;
	}

	[Token(Token = "0x6003CA1")]
	[Address(RVA = "0x5A844C0", Offset = "0x5A834C0", VA = "0x5A844C0")]
	public void OnNetworkMessage(Player sender, string message, double sentServerTimestamp)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$OnNetworkMessage): 3 lines keep C-only constructs
		Object[] pSVar1;
		CustomLogicEvaluator __this_00;
		Dictionary<object, object> pSVar2;
		bool bVar3;
		CustomLogicPlayerBuiltin __this_01;
		object pIVar4;
		object pIVar5;
		CustomLogicClassInstance pCVar6;
		double local_30;

		__this_01 = new CustomLogicPlayerBuiltin(sender);
		pSVar1 = this._networkCallback;
		if (pSVar1 == null) goto label_05b846fa;
		if ((__this_01 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst((object)__this_01, (((pSVar1.obj).klass)._1).element_class), pIVar4 == null)) {
	label_05b84704: ;
			pIVar4 = new ArrayTypeMismatchException();
			throw pIVar4;
		}
		if ((int)pSVar1.Length == 0) {
	label_05b846ff: ;
			throw new IndexOutOfRangeException();
		}
		pSVar1[0] = (object)__this_01;
		pSVar1 = this._networkCallback;
		if (pSVar1 == null) goto label_05b846fa;
		if ((message != null) &&(pIVar4 = il2cpp_vm_Object_IsInst((object)message, (((pSVar1.obj).klass)._1).element_class), pIVar4 == null)) goto label_05b84704;
		if ((pSVar1.Length & 0xfffffffe) == 0) goto label_05b846ff;
		pSVar1[1] = (object)message;
		pSVar1 = this._networkCallback;
		local_30 = sentServerTimestamp;
		pIVar4 = (object)local_30;
		if (pSVar1 == null) goto label_05b846fa;
		if ((pIVar4 != null) &&(pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pSVar1.obj).klass)._1).element_class), pIVar5 == null)) goto label_05b84704;
		if ((uint)pSVar1.Length < 3) goto label_05b846ff;
		pSVar1[2] = pIVar4;
		if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
			__this_00 = CustomLogicManager.Evaluator;
		}
		else {
			__this_00 = CustomLogicManager.Evaluator;
		}
		if (__this_00 != null) {
			pSVar2 = (Dictionary<object, object>)this._staticClasses;
			if (pSVar2 == null) {
	label_05b846fa: ;
				throw new NullReferenceException();
			}
			pCVar6 = pSVar2.get_Item((Il2CppObject *)"Main");
			bVar3 = __this_00.HasMethod(pCVar6, "OnNetworkMessage");
			if (bVar3) {
				pSVar2 = (Dictionary<object, object>)this._staticClasses;
				if (pSVar2 == null) goto label_05b846fa;
				pCVar6 = pSVar2.get_Item((Il2CppObject *)"Main");
				__this_00.EvaluateMethod(pCVar6, "OnNetworkMessage", this._networkCallback, 0);
			}
		}
		return;
	}

	[Token(Token = "0x6003CA2")]
	[Address(RVA = "0x5A6AAA0", Offset = "0x5A69AA0", VA = "0x5A6AAA0")]
	public static CustomLogicCharacterBuiltin GetCharacterBuiltin(BaseCharacter character)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$GetCharacterBuiltin): 5 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		BaseCharacter pCVar3;
		bool bVar4;
		CustomLogicHorseBuiltin __this;
		CustomLogicHumanBuiltin __this_00;
		CustomLogicTitanBuiltin __this_01;
		CustomLogicWallColossalBuiltin __this_02;
		WallColossalShifter shifter;
		CustomLogicShifterBuiltin __this_03;
		BaseShifter shifter_00;

		bVar4 = ((Object)character == null);
		if (bVar4) {
			return null;
		}
		if (character == null) {
			return null;
		}
		pCVar3 = character.klass;
		bVar1 = (pCVar3._2).typeHierarchyDepth;
		bVar2 = (typeof(Horse)._2).typeHierarchyDepth;
		if ((bVar2 <= bVar1) &&((pCVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(Horse))) {
			__this = new CustomLogicHorseBuiltin((Horse)character);
			return (CustomLogicCharacterBuiltin)__this;
		}
		bVar2 = (typeof(Human)._2).typeHierarchyDepth;
		if ((bVar1 < bVar2) ||((pCVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(Human))) {
			bVar2 = (typeof(BasicTitan)._2).typeHierarchyDepth;
			if ((bVar1 < bVar2) ||((pCVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BasicTitan))) {
				bVar2 = (typeof(WallColossalShifter)._2).typeHierarchyDepth;
				if ((bVar2 <= bVar1) &&((pCVar3._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(WallColossalShifter))) {
					shifter = (WallColossalShifter)il2cpp_codegen_is_inst_class((object)character, typeof(WallColossalShifter)) ;
					__this_02 = new CustomLogicWallColossalBuiltin(shifter);
					return (CustomLogicCharacterBuiltin)__this_02;
				}
				bVar2 = (typeof(BaseShifter)._2).typeHierarchyDepth;
				if (bVar1 < bVar2) {
					return null;
				}
				if ((pCVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(BaseShifter)) {
					shifter_00 = (BaseShifter)il2cpp_codegen_is_inst_class((object)character, typeof(BaseShifter));
					__this_03 = new CustomLogicShifterBuiltin(shifter_00);
					return (CustomLogicCharacterBuiltin)__this_03;
				}
				return null;
			}
			bVar1 = (typeof(BasicTitan)._2).typeHierarchyDepth;
			if ((bVar1 <= (character.klass._2).typeHierarchyDepth) &&((character.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(BasicTitan))) {
				__this_01 = new CustomLogicTitanBuiltin((BasicTitan)character);
				return (CustomLogicCharacterBuiltin)__this_01;
			}
		}
		else {
			bVar1 = (typeof(Human)._2).typeHierarchyDepth;
			if ((bVar1 <= (character.klass._2).typeHierarchyDepth) &&((character.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Human))) {
				__this_00 = new CustomLogicHumanBuiltin((Human)character);
				return (CustomLogicCharacterBuiltin)__this_00;
			}
		}
		throw new InvalidCastException();
	}

	[Token(Token = "0x6003CA3")]
	[Address(RVA = "0x5A830F0", Offset = "0x5A820F0", VA = "0x5A830F0")]
	[IteratorStateMachine(typeof(_003COnSecond_003Ed__18))]
	private IEnumerator OnSecond()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$OnSecond): clean
		CustomLogicEvaluator.d__18<OnSecond> __this_00;

		__this_00 = new CustomLogicEvaluator.d__18<OnSecond>(0);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6003CA4")]
	[Address(RVA = "0x5A818D0", Offset = "0x5A808D0", VA = "0x5A818D0")]
	private void Init()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$Init): 58 lines keep C-only constructs
		byte bVar1;
		Dictionary<object, object> pSVar2;
		HashSet<object> pSVar3;
		Object[] args;
		CustomLogicStartAst pCVar4;
		CustomLogicToken pCVar5;
		object pIVar6;
		Dictionary<string, CustomLogicSourceType> pSVar7;
		Dictionary<int, object> pSVar8;
		bool bVar9;
		int iVar10;
		BuiltinClassInstance value;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o pSVar11;
		CustomLogicClassDefinitionAst pCVar12;
		int piVar13;
		CustomLogicClassInstance pCVar14;
		Dictionary<CustomLogicSourceType, CustomLogicClassInstance> __this_00;
		Dictionary<TKey, TValue> pSVar15;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o pSVar16;
		MapObject obj;
		MethodInfo* method_00;
		MethodInfo extraout_RDX;
		MethodInfo pMVar17;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		byte[] local_158 = new byte[16];
		Dictionary<TKey, TValue> local_148;
		Nullable<CustomLogicSourceType> local_140;
		int local_138;
		int local_134;
		Nullable<CustomLogicSourceType> local_130;
		byte[] local_128 = new byte[8];
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o pSStack_120;
		Dictionary<TKey, TValue> local_118;
		byte[] local_108 = new byte[8];
		Dictionary<TKey, TValue> local_f8;
		byte[] local_e8 = new byte[8];
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o pSStack_e0;
		Dictionary<TKey, TValue> local_d8;
		byte[] local_c8 = new byte[8];
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o pSStack_c0;
		Dictionary<TKey, TValue> local_b8;
		byte[] local_a8 = new byte[8];
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o pSStack_a0;
		Dictionary<TKey, TValue> local_98;
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_88;
		byte[] local_68 = new byte[8];
		Dictionary<TKey, TValue> local_58;
		Dictionary<string, Dictionary<CustomLogicSourceType, CustomLogicClassInstance>> local_48;

		if (Il2CppMethodInitialized_075473b8 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(Dictionary<CustomLogicSourceType, CustomLogicClassInstance>)) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_get_HasValue) ;
			Il2CppMethodInitialized_075473b8 = true;
		}
		local_a8 = (byte[])0x0;
		local_98 = null;
		local_c8 = (byte[])0x0;
		local_b8 = null;
		local_140.hasValue = false;
		local_140._1_3_ = 0;
		local_140.value = 0;
		local_134 = 0;
		local_130.hasValue = false;
		local_130._1_3_ = 0;
		local_130.value = 0;
		local_138 = 0;
		local_e8 = (byte[])0x0;
		local_d8 = null;
		local_128 = (byte[])0x0;
		local_118 = null;
		local_108 = (byte[])0x0;
		local_f8 = null;
		local_68 = (byte[])0x0;
		local_58 = null;
		local_88._dictionary = null;
		local_88._index = 0;
		local_88._version = 0;
		local_88._currentKey = null;
		pSVar2 = (Dictionary<object, object>)this._addonClasses;
		if (pSVar2 != null) {
			pSVar2.Clear();
			pSVar2 = (Dictionary<object, object>)this.AddonToNetworkView;
			if (pSVar2 != null) {
				pSVar2.Clear();
				pSVar3 = (HashSet<object>)CustomLogicBuiltinTypes.StaticTypeNames;
				if (pSVar3 != null) {
					local_158.GetEnumerator(pSVar3);
					local_98 = local_148;
					local_a8 = (byte[])local_158._0_8_;
					pSStack_a0 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_158._8_8_;
					local_158._0_8_ = null;
					local_158._8_8_ =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_a8;
					while (true) {
						bVar9 = local_a8.MoveNext();
						pSVar15 = local_98;
						if (!(bVar9)) break;
						args = CustomLogicEvaluator.EmptyArgs;
						value = CustomLogicBuiltinTypes.CreateClassInstance((String)pSVar15, args);
						pSVar2 = (Dictionary<object, object>)this._staticClasses;
						if (pSVar2 == null) {
							throw new NullReferenceException();
						}
						pSVar2.set_Item((object)pSVar15, (object)value);
					}
					local_a8.Dispose();
					pCVar4 = this._start;
					if (((pCVar4 != null) &&(pSVar2 = (Dictionary<object, object>)pCVar4.Classes, pSVar2 != null)) &&(pSVar11 = pSVar2.Keys, pSVar11 != null)) {
						local_158.GetEnumerator(pSVar11);
						local_b8 = local_148;
						local_c8 = (byte[])local_158._0_8_;
						pSStack_c0 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_158._8_8_;
						local_158._0_8_ = null;
						local_158._8_8_ =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_c8;
						while (true) {
							bVar9 = local_c8.MoveNext();
							pSVar15 = local_b8;
							if (!(bVar9)) break;
							bVar9 = ((String)local_b8 == "Main");
							if (bVar9) {
								this.CreateStaticClass((String)pSVar15) ;
							}
							else {
								pCVar4 = this._start;
								if (pCVar4 == null) {
									throw new NullReferenceException();
								}
								pSVar2 = (Dictionary<object, object>)pCVar4.Classes;
								if (pSVar2 == null) {
									throw new NullReferenceException();
								}
								pCVar12 = pSVar2.get_Item((object)pSVar15);
								if (pCVar12 == null) {
									throw new NullReferenceException();
								}
								pCVar5 = pCVar12.Token;
								if (pCVar5 == null) {
									throw new NullReferenceException();
								}
								pIVar6 = pCVar5.Value;
								if (pIVar6 == null) {
									throw new NullReferenceException();
								}
								if ((pIVar6.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
									throw new InvalidCastException();
								}
								piVar13 = il2cpp_vm_Object_Unbox(pIVar6);
								if (*piVar13 == 2) {
									local_140.hasValue = false;
									local_140._1_3_ = 0;
									local_140.value = 0;
									pCVar4 = this._start;
									if (pCVar4 == null) {
										throw new NullReferenceException();
									}
									pSVar7 = pCVar4.ClassNamespaces;
									if (pSVar7 == null) {
										throw new NullReferenceException();
									}
									bVar9 = pSVar7.TryGetValue((object)pSVar15, ref local_134);
									if (bVar9) {
										local_140 = new Nullable<Int32Enum>(local_134);
									}
									pCVar14 = this.CreateClassInstance((String)pSVar15, CustomLogicEvaluator.EmptyArgs, false, (Nullable<CustomLogicSourceType>)local_140);
									if (pCVar14 == null) {
										throw new NullReferenceException();
									}
									pCVar14._Namespace_k__BackingField = local_140;
									pSVar3 = (HashSet<object>)CustomLogicBuiltinTypes.StaticTypeNames;
									if (pSVar3 == null) {
										throw new NullReferenceException();
									}
									bVar9 = pSVar3.Contains((object)pSVar15);
									if (bVar9) {
										pSVar2 = (Dictionary<object, object>)this._namespacedStaticClasses;
										if (pSVar2 == null) {
											throw new NullReferenceException();
										}
										bVar9 = pSVar2.ContainsKey((object)pSVar15);
										if (!bVar9) {
											local_48 = this._namespacedStaticClasses;
											__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<CustomLogicSourceType, CustomLogicClassInstance>));
											__this_00 = new Dictionary<Int32Enum, object>();
											if (local_48 ==null) {
												throw new NullReferenceException();
											}
											local_48.set_Item((object)pSVar15, (object)__this_00);
										}
										if (local_140.hasValue != false) {
											pSVar2 = (Dictionary<object, object>)this._namespacedStaticClasses;
											if (pSVar2 == null) {
												throw new NullReferenceException();
											}
											pSVar15 = (Dictionary<TKey, TValue>)pSVar2.get_Item((object)pSVar15);
											iVar10 = local_140.Value;
											if (pSVar15 == null) {
												throw new NullReferenceException();
											}
											pSVar15.set_Item(iVar10, (object)pCVar14);
										}
									}
									else {
										pSVar2 = (Dictionary<object, object>)this._staticClasses;
										if (pSVar2 == null) {
											throw new NullReferenceException();
										}
										pSVar2.set_Item((object)pSVar15, (object)pCVar14);
									}
								}
								else {
									pCVar4 = this._start;
									if (pCVar4 == null) {
										throw new NullReferenceException();
									}
									pSVar2 = (Dictionary<object, object>)pCVar4.Classes;
									if (pSVar2 == null) {
										throw new NullReferenceException();
									}
									pCVar12 = pSVar2.get_Item((object)pSVar15);
									if (pCVar12 == null) {
										throw new NullReferenceException();
									}
									pCVar5 = pCVar12.Token;
									if (pCVar5 == null) {
										throw new NullReferenceException();
									}
									pIVar6 = pCVar5.Value;
									if (pIVar6 == null) {
										throw new NullReferenceException();
									}
									if ((pIVar6.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
										throw new InvalidCastException();
									}
									piVar13 = il2cpp_vm_Object_Unbox(pIVar6);
									if (*piVar13 == 3) {
										local_130.hasValue = false;
										local_130._1_3_ = 0;
										local_130.value = 0;
										pCVar4 = this._start;
										if (pCVar4 == null) {
											throw new NullReferenceException();
										}
										pSVar7 = pCVar4.ClassNamespaces;
										if (pSVar7 == null) {
											throw new NullReferenceException();
										}
										bVar9 = pSVar7.TryGetValue((object)pSVar15, ref local_138);
										if (bVar9) {
											local_130 = new Nullable<Int32Enum>(local_138);
										}
										pCVar14 = this.CreateClassInstance((String)pSVar15, CustomLogicEvaluator.EmptyArgs, false, (Nullable<CustomLogicSourceType>)local_130);
										if (pCVar14 == null) {
											throw new NullReferenceException();
										}
										pCVar14._Namespace_k__BackingField = local_130;
										pSVar2 = (Dictionary<object, object>)this._addonClasses;
										if (pSVar2 == null) {
											throw new NullReferenceException();
										}
										pSVar2.set_Item((object)pSVar15, (object)pCVar14);
									}
								}
							}
						}
						local_c8.Dispose();
						pSVar2 = (Dictionary<object, object>)this._staticClasses;
						if ((pSVar2 != null) &&(pSVar11 = pSVar2.Keys, pSVar11 != null)) {
							local_158.GetEnumerator(pSVar11);
							local_d8 = local_148;
							local_e8 = (byte[])local_158._0_8_;
							pSStack_e0 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_158._8_8_;
							local_158._0_8_ = null;
							local_158._8_8_ =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_e8;
							while (bVar9 = local_e8.MoveNext()) {
								pSVar2 = (Dictionary<object, object>)this._staticClasses;
								if (pSVar2 == null) {
									throw new NullReferenceException();
								}
								pSVar2.get_Item((object)local_d8);
							}
							local_e8.Dispose();
							pSVar2 = (Dictionary<object, object>)this._staticClasses;
							if ((pSVar2 != null) &&(pSVar16 = pSVar2.Values, pSVar16 != null)) {
								local_158.GetEnumerator(pSVar16);
								local_118 = local_148;
								local_128 = (byte[])local_158._0_8_;
								pSStack_120 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_158._8_8_;
								local_158._0_8_ = null;
								local_158._8_8_ =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_128 ;
	label_05b82398: ;
								bVar9 = local_128.MoveNext();
								if (bVar9) {
									pMVar17 = extraout_RDX;
									if (local_118 != null) goto code_r0x05b823b2;
									goto label_05b82390;
								}
								local_128.Dispose();
								pSVar2 = (Dictionary<object, object>)this._namespacedStaticClasses;
								if ((pSVar2 != null) &&(pSVar16 = pSVar2.Values, pSVar16 != null)) {
									local_158.GetEnumerator(pSVar16);
									local_f8 = local_148;
									local_108 = (byte[])local_158._0_8_;
									while (bVar9 = local_108.MoveNext()) {
										if (local_f8 == null) {
											throw new NullReferenceException();
										}
										pSVar16 = local_f8.Values;
										if (pSVar16 == null) {
											throw new NullReferenceException();
										}
										local_158.GetEnumerator(pSVar16);
										local_58 = local_148;
										local_68 = (byte[])local_158._0_8_;
										local_158._0_8_ = null;
										local_158._8_8_ =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_68;
	label_05b82508: ;
										bVar9 = local_68.MoveNext();
										if (bVar9) {
											pMVar17 = extraout_RDX_00;
											if (local_58 != null) goto code_r0x05b82525;
											goto label_05b82500;
										}
										local_68.Dispose();
									}
									local_108.Dispose();
									pSVar2 = (Dictionary<object, object>)this._addonClasses;
									if (pSVar2 != null) {
										pSVar16 = pSVar2.Values;
										if (pSVar16 != null) {
											local_158.GetEnumerator(pSVar16);
											local_118 = local_148;
											local_128 = (byte[])local_158._0_8_;
											local_158._0_8_ = null;
											local_158._8_8_ =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_128;
	label_05b82648: ;
											bVar9 = local_128.MoveNext();
											if (bVar9) {
												pMVar17 = extraout_RDX_01;
												if (local_118 != null) goto code_r0x05b82661;
												goto label_05b82640;
											}
											pMVar17 = MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_CustomLogicClassInstance ;
											local_128.Dispose();
											this.CreateAddonNetworkChannels();
											pSVar8 = (Dictionary<int, object>)MapLoader.IdToMapObject;
											if ((pSVar8 != null) &&(pSVar11 = pSVar8.Keys, pSVar11 != null)) {
												method_00 = & MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_int_MapObject_GetEnumerator ;
												local_88 = pSVar11.GetEnumerator();
												local_158._0_8_ = null;
												local_158._8_8_ = &local_88;
												while(true) {
													bVar9 = local_88.MoveNext();
													if (!bVar9) {
														local_88.Dispose();
														return;
													}
													iVar10 = (int32_t)local_88._currentKey;
													pSVar8 = (Dictionary<int, object>)MapLoader.IdToMapObject;
													if (pSVar8 == null) break;
													obj = pSVar8.get_Item(iVar10);
													this.LoadMapObjectComponents(obj, false);
												}
												throw new NullReferenceException();
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	code_r0x05b823b2: ;
		bVar1 = (typeof(BuiltinClassInstance)._2).typeHierarchyDepth;
		pMVar17 = (MethodInfo)(ulong)bVar1;
		if (((local_118.klass._2).typeHierarchyDepth < bVar1) ||((local_118.klass._2).typeHierarchy[(long)&pMVar17[-1].field_0x57] !=typeof(BuiltinClassInstance))) {
	label_05b82390: ;
			this.RunAssignmentsClassInstance((CustomLogicClassInstance)local_118);
		}
		goto label_05b82398;
	code_r0x05b82525: ;
		bVar1 = (typeof(BuiltinClassInstance)._2).typeHierarchyDepth;
		pMVar17 = (MethodInfo)(ulong)bVar1;
		if (((local_58.klass._2).typeHierarchyDepth < bVar1) ||((local_58.klass._2).typeHierarchy[(long)&pMVar17[-1].field_0x57] !=typeof(BuiltinClassInstance))) {
	label_05b82500: ;
			this.RunAssignmentsClassInstance((CustomLogicClassInstance)local_58);
		}
		goto label_05b82508;
	code_r0x05b82661: ;
		bVar1 = (typeof(BuiltinClassInstance)._2).typeHierarchyDepth;
		pMVar17 = (MethodInfo)(ulong)bVar1;
		if (((local_118.klass._2).typeHierarchyDepth < bVar1) ||((local_118.klass._2).typeHierarchy[(long)&pMVar17[-1].field_0x57] !=typeof(BuiltinClassInstance))) {
	label_05b82640: ;
			this.RunAssignmentsClassInstance((CustomLogicClassInstance)local_118);
		}
		goto label_05b82648;
	}

	[Token(Token = "0x6003CA5")]
	[Address(RVA = "0x5A85000", Offset = "0x5A84000", VA = "0x5A85000")]
	private void CreateAddonNetworkChannels()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$CreateAddonNetworkChannels): 14 lines keep C-only constructs
		uint uVar1;
		Dictionary<object, object> pSVar2;
		object pIVar3;
		Dictionary<int, object> pSVar4;
		MapScriptBaseObject pMVar5;
		bool bVar6;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o source;
		CustomLogic_CustomLogicEvaluator___c_StaticFields pCVar7;
		Func<string, string> __this_00;
		System_Linq_IOrderedEnumerable_TSource__o source_00;
		System_Collections_Generic_List_TSource__o __this_01;
		MapScriptSceneObject __this_02;
		String pSVar8;
		MapObject mapObject;
		CustomLogicPhotonSync __this_03;
		CustomLogicNetworkViewBuiltin __this_04;
		CustomLogicClassInstance instance;
		MethodInfo* method_00;
		int key;
		System_Collections_Generic_List_Enumerator_object__o local_68;
		byte[] local_48 = new byte[16];
		String local_38;

		local_68._list = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		pSVar2 = (Dictionary<object, object>)this._addonClasses;
		if (pSVar2 != null) {
			source = pSVar2.Keys;
			if ((typeof(CustomLogicEvaluator.c)._2).cctor_finished_or_no_cctor == 0) {
				pCVar7 = typeof(CustomLogicEvaluator.c).static_fields;
				__this_00 = pCVar7.__9__20_0;
			}
			else {
				pCVar7 = typeof(CustomLogicEvaluator.c).static_fields;
				__this_00 = pCVar7.__9__20_0;
			}
			if (__this_00 == null) {
				if (((typeof(CustomLogicEvaluator.c))._2).cctor_finished_or_no_cctor == 0) {
					pCVar7 = typeof(CustomLogicEvaluator.c).static_fields;
				}
				pIVar3 = (object)pCVar7.__9;
				__this_00 = new Func<string, string>(pIVar3, (intptr_t)MethodInfo_CustomLogic_CustomLogicEvaluator_c_CreateAddonNetworkChannels_b__20_0);
				pCVar7 = typeof(CustomLogicEvaluator.c).static_fields;
				pCVar7.__9__20_0 = __this_00;
			}
			source_00 = Enumerable.OrderBy<string, string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TKey__o)__this_00);
			__this_01 = Enumerable.ToList<string>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
			if (__this_01 != null) {
				method_00 = &MethodInfo_System_Collections_Generic_List_string_GetEnumerator;
				local_48.GetEnumerator((List<object>)__this_01);
				local_68._current = (object)local_38;
				local_68._list = (List<T>)local_48._0_8_;
				local_68._index = local_48._8_4_;
				local_68._version = local_48._12_4_;
				local_48._0_8_ = null;
				local_48._8_8_ = &local_68;
				key = -500000;
				do {
					bVar6 = local_68.MoveNext();
					pIVar3 = local_68._current;
					if (!bVar6) {
						local_68.Dispose();
						return;
					}
					uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
					while(true) {
						if (uVar1 == 0) {
						}
						pSVar4 = (Dictionary<int, object>)MapLoader.IdToMapObject;
						if (pSVar4 == null) {
							throw new NullReferenceException();
						}
						bVar6 = pSVar4.ContainsKey(key);
						if (!bVar6) break;
						key = key + -1;
						uVar1 = (typeof(MapLoader)._2).cctor_finished_or_no_cctor;
					}
					__this_02 = new MapScriptSceneObject();
					if (__this_02 == null) {
						throw new NullReferenceException();
					}
					__this_02.Id = key;
					__this_02.Parent = MapLoader.ROOT_OBJECT_ID;
					pSVar8 = String.Concat("CLAddon_", (String)pIVar3);
					__this_02.Name = pSVar8;
					__this_02.Asset = "None";
					__this_02.Active = false;
					__this_02.Static = true;
					__this_02.Visible = false;
					__this_02.Networked = true;
					__this_02.CollideMode = MapObjectCollideMode.None;
					__this_02.CollideWith = MapObjectCollideWith.All;
					mapObject = MapLoader.LoadObject((MapScriptBaseObject)__this_02, false);
					MapLoader.SetParent(mapObject);
					this.SetupMapObject(mapObject);
					__this_03 = this.SetupNetworking(mapObject);
					bVar6 = ((Object)__this_03 != null);
					if (bVar6) {
						if (mapObject == null) {
							throw new NullReferenceException();
						}
						pMVar5 = mapObject.ScriptObject;
						if (pMVar5 == null) {
							throw new NullReferenceException();
						}
						if (__this_03 == null) {
							throw new NullReferenceException();
						}
						__this_03.Init(pMVar5.Id, false) ;
					}
					else if (mapObject == null) {
						throw new NullReferenceException();
					}
					pMVar5 = mapObject.ScriptObject;
					if (pMVar5 == null) {
						throw new NullReferenceException();
					}
					pSVar4 = (Dictionary<int, object>)this.IdToNetworkView;
					if (pSVar4 == null) {
						throw new NullReferenceException();
					}
					bVar6 = pSVar4.ContainsKey(pMVar5.Id);
					if (bVar6) {
						pMVar5 = mapObject.ScriptObject;
						if (pMVar5 == null) {
							throw new NullReferenceException();
						}
						pSVar4 = (Dictionary<int, object>)this.IdToNetworkView;
						if (pSVar4 == null) {
							throw new NullReferenceException();
						}
						__this_04 = pSVar4.get_Item(pMVar5.Id);
						pSVar2 = (Dictionary<object, object>)this.AddonToNetworkView;
						if (pSVar2 == null) {
							throw new NullReferenceException();
						}
						pSVar2.set_Item(pIVar3, (object)__this_04);
						pSVar2 = (Dictionary<object, object>)this._addonClasses;
						if (pSVar2 == null) {
							throw new NullReferenceException();
						}
						instance = pSVar2.get_Item(pIVar3);
						if (instance == null) {
							throw new NullReferenceException();
						}
						pSVar2 = (Dictionary<object, object>)instance.Variables;
						if (pSVar2 == null) {
							throw new NullReferenceException();
						}
						pSVar2.set_Item((Il2CppObject *)"NetworkView", (object)__this_04);
						if (__this_04 == null) {
							throw new NullReferenceException();
						}
						__this_04.RegisterAddonInstance(instance);
					}
					key = key + -1;
				} while(true);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003CA6")]
	[Address(RVA = "0x5A82F70", Offset = "0x5A81F70", VA = "0x5A82F70")]
	private void EvaluateMethodForCallbacks(string methodName, [Optional] object[] parameters)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$EvaluateMethodForCallbacks): clean
		Dictionary<object, object> pSVar1;
		bool bVar2;
		List<object> __this_00;
		CustomLogicClassInstance pCVar3;
		int index;

		pSVar1 = (Dictionary<object, object>)this._callbacks;
		if (pSVar1 == null) {
	label_05b830dd: ;
			throw new NullReferenceException();
		}
		bVar2 = pSVar1.ContainsKey((object)methodName);
		if (bVar2) {
			pSVar1 = (Dictionary<object, object>)this._callbacks;
			if ((pSVar1 == null) ||(__this_00 = (List<object>)pSVar1.get_Item((object)methodName), __this_00 == null)) goto label_05b830dd;
			if (0 < __this_00._size) {
				index = 0;
				do {
					bVar2 = (methodName == "Init");
					pCVar3 = __this_00.get_Item(index);
					if (bVar2) {
						if (pCVar3 == null) goto label_05b830dd;
						if (pCVar3.Inited == false) {
	label_05b83050: ;
							pCVar3 = __this_00.get_Item(index);
							this.EvaluateMethod(pCVar3, methodName, parameters, 0);
						}
					}
					else {
						if (pCVar3 == null) goto label_05b830dd;
						bVar2 = pCVar3.get_Enabled();
						if (bVar2) goto label_05b83050;
					}
					index = index + 1;
				} while (index < __this_00._size);
			}
		}
		return;
	}

	[Token(Token = "0x6003CA7")]
	[Address(RVA = "0x5A856E0", Offset = "0x5A846E0", VA = "0x5A856E0")]
	public void LoadMapObjectComponents(MapObject obj, bool init = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$LoadMapObjectComponents): 1 lines keep C-only constructs
		byte bVar1;
		MapScriptBaseObject pMVar2;
		MapScriptBaseObject pMVar3;
		bool rigidbody;
		bool bVar4;
		CustomLogicPhotonSync __this_00;
		MethodInfo method_00;

		if (obj == null) {
	label_05b857e0: ;
			throw new NullReferenceException();
		}
		pMVar2 = obj.ScriptObject;
		if (pMVar2 != null) {
			pMVar3 = pMVar2.klass;
			bVar1 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
			if ((bVar1 <= (pMVar3._2).typeHierarchyDepth) &&(method_00 = (MethodInfo)(pMVar3._2).typeHierarchy, *(MapScriptSceneObject*)((long)method_00 + (long)(ulong)bVar1 * 8 + -8) == typeof(MapScriptSceneObject))) {
				__this_00 = this.SetupNetworking(obj);
				this.SetupMapObject(obj);
				rigidbody = this.LoadRuntimeMapObjectComponents(obj, init);
				bVar4 = ((Object)__this_00 != null);
				if (bVar4) {
					pMVar2 = obj.ScriptObject;
					if ((pMVar2 != null) &&(__this_00 != null)) {
						__this_00.Init(pMVar2.Id, rigidbody);
						return;
					}
					goto label_05b857e0;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6003CA8")]
	[Address(RVA = "0x5A6FF50", Offset = "0x5A6EF50", VA = "0x5A6FF50")]
	public bool LoadRuntimeMapObjectComponents(MapObject obj, bool init = false)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$LoadRuntimeMapObjectComponents): 7 lines keep C-only constructs
		byte bVar1;
		MapScriptBaseObject pMVar2;
		List<object> __this_00;
		CustomLogicStartAst pCVar3;
		Dictionary<object, object> pSVar4;
		bool bVar5;
		object pIVar6;
		MapObject obj_00;
		bool bVar7;
		CustomLogicComponentInstance pCVar8;
		System_Collections_Generic_List_Enumerator_object__o local_68;
		MapObject local_50;
		byte[] local_48 = new byte[16];
		MapScriptComponent local_38;

		local_68._list = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		if ((obj != null) &&(pMVar2 = obj.ScriptObject, pMVar2 != null)) {
			bVar1 = (typeof(MapScriptSceneObject)._2).typeHierarchyDepth;
			if (((pMVar2.klass._2).typeHierarchyDepth < bVar1) ||((pMVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapScriptSceneObject))) {
				throw new InvalidCastException();
			}
			__this_00 = *(List<object>*)&(*(uint)((sbyte)pMVar2 + 0x80));
			if (__this_00 != null) {
				local_50 = obj;
				local_48.GetEnumerator(__this_00);
				obj_00 = local_50;
				local_68._current = (object)local_38;
				local_68._list = (List<T>)local_48._0_8_;
				local_68._index = local_48._8_4_;
				local_68._version = local_48._12_4_;
				local_48._0_8_ = null;
				local_48._8_8_ = &local_68;
				if (init) {
					while (true) {
						bVar7 = local_68.MoveNext();
						pIVar6 = local_68._current;
						if (!(bVar7)) break;
						pCVar3 = this._start;
						if (pCVar3 == null) {
	label_05b70269: ;
							throw new NullReferenceException();
						}
						if ((MapScriptComponent)local_68._current == null) {
	label_05b70273: ;
							throw new NullReferenceException();
						}
						pSVar4 = (Dictionary<object, object>)pCVar3.Classes;
						if (pSVar4 == null) {
	label_05b7025f: ;
							throw new NullReferenceException();
						}
						bVar7 = pSVar4.ContainsKey((object)((MapScriptComponent)((long)local_68._current + 0x10)) .ComponentName);
						if (bVar7) {
							pCVar8 = this.CreateComponentInstance(((MapScriptComponent)((long)pIVar6 + 0x10)).ComponentName, obj_00, (MapScriptComponent)pIVar6);
							obj_00.RegisterComponentInstance(pCVar8);
							this.EvaluateMethod((CustomLogicClassInstance)pCVar8, "Init", null, 0);
							if (pCVar8 == null) {
								throw new NullReferenceException();
							}
							pCVar8.Inited = true;
							bVar7 = (((MapScriptComponent)((long)pIVar6 + 0x10)).ComponentName == "Rigidbody");
							if (bVar7) {
							}
						}
					}
				}
				else {
					while (true) {
						bVar7 = local_68.MoveNext();
						pIVar6 = local_68._current;
						if (!(bVar7)) break;
						pCVar3 = this._start;
						if (pCVar3 == null) goto label_05b70269;
						if ((MapScriptComponent)local_68._current == null) goto label_05b70273;
						pSVar4 = (Dictionary<object, object>)pCVar3.Classes;
						if (pSVar4 == null) goto label_05b7025f;
						bVar7 = pSVar4.ContainsKey((object)((MapScriptComponent)((long)local_68._current + 0x10)) .ComponentName);
						if (bVar7) {
							pCVar8 = this.CreateComponentInstance(((MapScriptComponent)((long)pIVar6 + 0x10)).ComponentName, obj_00, (MapScriptComponent)pIVar6);
							obj_00.RegisterComponentInstance(pCVar8);
							bVar7 = (((MapScriptComponent)((long)pIVar6 + 0x10)).ComponentName == "Rigidbody");
							if (bVar7) {
							}
						}
					}
				}
				local_68.Dispose();
				return bVar5;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003CA9")]
	[Address(RVA = "0x5A860A0", Offset = "0x5A850A0", VA = "0x5A860A0")]
	public CustomLogicComponentInstance AddMapObjectComponent(MapObject obj, string componentName)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$AddMapObjectComponent): 13 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		CustomLogicStartAst pCVar4;
		Dictionary<object, object> pSVar5;
		List<CustomLogicAssignmentExpressionAst> __this_00;
		long plVar6;
		long plVar7;
		String[] pSVar8;
		MapScriptBaseObject pMVar9;
		CustomLogicMapObjectBuiltin pCVar10;
		MapObject pMVar11;
		Dictionary<int, object> __this_01;
		object pIVar12;
		CustomLogicEvaluator __this_02;
		MapObject obj_00;
		bool bVar13;
		List<string> __this_03;
		CustomLogicClassDefinitionAst pCVar14;
		String pSVar15;
		String pSVar16;
		MapScriptComponent __this_04;
		CustomLogicPhotonSync __this_05;
		CustomLogicComponentInstance instance;
		Il2CppClass klass;
		Exception __this_06;
		MethodInfo pMVar17;
		MapScriptBaseObject pMVar18;
		int mapObjectId;
		object local_80;
		byte[] local_78 = new byte[8];
		object local_68;
		byte[] local_60 = new byte[16];
		object local_50;
		CustomLogicEvaluator local_48;
		String local_40;
		MapObject local_38;

		local_78 = (byte[])0x0;
		local_68 = null;
		local_80 = null;
		pCVar4 = this._start;
		if ((pCVar4 != null) &&(pSVar5 = (Dictionary<object, object>)pCVar4.Classes, pSVar5 != null)) {
			bVar13 = pSVar5.ContainsKey((object)componentName);
			if (!bVar13) {
				pSVar16 = il2cpp_codegen_get_runtime_metadata(&"No component named ");
				pSVar15 = il2cpp_codegen_get_runtime_metadata(&" found");
				pSVar16 = String.Concat(pSVar16, componentName, pSVar15);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this_06 = (Exception)il2cpp_codegen_object_new(klass);
				__this_06 = new Exception(pSVar16);
				pMVar17 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_AddMapObjectComponent);
				throw (object)__this_06;
			}
			__this_03 = new List<string>();
			pCVar4 = this._start;
			if (((pCVar4 != null) &&(pSVar5 = (Dictionary<object, object>)pCVar4.Classes, pSVar5 != null)) &&(pCVar14 = pSVar5.get_Item((object)componentName), pCVar14 != null)) {
				__this_00 = pCVar14.Assignments;
				local_48 = this;
				local_40 = componentName;
				local_38 = obj;
				if (__this_00 != null) {
					local_60.GetEnumerator((List<object>)__this_00);
					local_68 = local_50;
					local_78 = (byte[])local_60._0_8_;
					local_60._0_8_ = null;
					local_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_78;
	label_05b862e0: ;
					bVar13 = local_78.MoveNext();
					pIVar12 = local_68;
					if (bVar13) {
						if (local_68 == null) {
							throw new NullReferenceException();
						}
						plVar6 = local_68[1].monitor;
						if (plVar6 != null) {
							bVar2 = (typeof(CustomLogicVariableExpressionAst)._2).typeHierarchyDepth;
							if ((bVar2 <= *(byte)(*plVar6 + 0x130)) &&(*(CustomLogicVariableExpressionAst*)(*(long)(*plVar6 + 200) + -8 + (ulong)bVar2 * 8) == typeof(CustomLogicVariableExpressionAst))) {
								plVar7 = local_68[2].monitor;
								if (plVar7 != null) {
									bVar2 = (typeof(CustomLogicPrimitiveExpressionAst)._2).typeHierarchyDepth;
									if ((bVar2 <= *(byte)(*plVar7 + 0x130)) &&(*(CustomLogicPrimitiveExpressionAst*)(*(long)(*plVar7 + 200) + -8 + (ulong)bVar2 * 8) == typeof(CustomLogicPrimitiveExpressionAst))) {
										bVar13 = ((String)plVar6[3] == "Description");
										if (bVar13) goto label_05b862e0;
										if ((String)plVar6[3] == null) {
											throw new NullReferenceException();
										}
										bVar13 = plVar6[3].EndsWith("Tooltip");
										if (((bVar13) && ((long)plVar7[3] != null)) && (*(long)plVar7[3] == g_data_07556758) ) goto label_05b862e0;
										if ((String)plVar6[3] == null) {
											throw new NullReferenceException();
										}
										pMVar17 = (MethodInfo *)"Dropbox";
										bVar13 = plVar6[3].EndsWith("Dropbox");
										if (((bVar13) && ((long)plVar7[3] != null)) && (*(long)plVar7[3] == g_data_07556758) ) goto label_05b862e0;
									}
								}
								pSVar16 = (String)plVar6[3];
								pSVar15 = CustomLogicUtils.SerializeAst(pIVar12[2].monitor);
								pSVar16 = String.Concat(pSVar16, ":", pSVar15) ;
								if (__this_03 != null) {
									piVar1 = &__this_03._version;
									*piVar1 = *piVar1 + 1;
									pSVar8 = __this_03._items;
									if (pSVar8 != null) {
										uVar3 = __this_03._size;
										if (uVar3 < (uint)pSVar8.Length) {
											__this_03._size = uVar3 + 1;
											pSVar8[(int)uVar3] = pSVar16;
										}
										else {
											__this_03.AddWithResize((object)pSVar16);
										}
										goto label_05b862e0;
									}
								}
								throw new NullReferenceException();
							}
						}
						goto label_05b862e0;
					}
					local_78.Dispose();
					__this_04 = new MapScriptComponent();
					obj_00 = local_38;
					pSVar16 = local_40;
					__this_02 = local_48;
					if (__this_04 != null) {
						__this_04.ComponentName = local_40;
						__this_04.Parameters = __this_03;
						__this_05 = __this_02.SetupNetworking(obj_00);
						__this_02.SetupMapObject(obj_00);
						instance = __this_02.CreateComponentInstance(pSVar16, obj_00, __this_04);
						if (obj_00 != null) {
							obj_00.RegisterComponentInstance(instance);
							pMVar18 = null;
							__this_02.EvaluateMethod((CustomLogicClassInstance)instance, "Init", null, 0);
							if (instance != null) {
								instance.Inited = true;
								bVar13 = ((Object)__this_05 != null);
								if (bVar13) {
									pMVar9 = obj_00.ScriptObject;
									if (pMVar9 != null) {
										mapObjectId = pMVar9.Id;
										bVar13 = (pSVar16 == "Rigidbody");
										if (__this_05 != null) goto label_05b865c1;
									}
								}
								else {
									bVar13 = (pSVar16 == "Rigidbody");
									if (!bVar13) {
										return instance;
									}
									pCVar10 = instance.MapObject;
									if (((pCVar10 != null) &&(pMVar11 = pCVar10.Value, pMVar11 != null)) &&((pMVar18 = pMVar11.ScriptObject, pMVar18 != null &&(__this_01 = (Dictionary<int, object>)__this_02.IdToNetworkView, __this_01 != null)))) {
										bVar13 = __this_01.TryGetValue(pMVar18.Id, ref local_80);
										if (!bVar13) {
											return instance;
										}
										if (((local_80 != null) &&(pMVar18 = obj_00.ScriptObject, pMVar18 != null)) && (__this_05 = local_80[3].monitor, __this_05 != null)) {
											mapObjectId = pMVar18.Id;
											bVar13 = true;
	label_05b865c1: ;
											__this_05.Init(mapObjectId, bVar13);
											return instance;
										}
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

	[Token(Token = "0x6003CAA")]
	[Address(RVA = "0x5A86760", Offset = "0x5A85760", VA = "0x5A86760")]
	public void RemoveComponent(CustomLogicComponentInstance instance)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$RemoveComponent): clean


		if (instance == null) {
			throw new NullReferenceException();
		}
		instance.DestroyLineRenderers();
		this.RemoveCallbacks((CustomLogicClassInstance)instance);
		return;
	}

	[Token(Token = "0x6003CAB")]
	[Address(RVA = "0x5A85C80", Offset = "0x5A84C80", VA = "0x5A85C80")]
	public CustomLogicComponentInstance CreateComponentInstance(string className, MapObject obj, MapScriptComponent script)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$CreateComponentInstance): 20 lines keep C-only constructs
		Nullable<CustomLogicSourceType> pSVar1;
		Dictionary<string, object>* ppSVar2;
		MapScriptBaseObject pMVar3;
		Dictionary<int, object> pSVar4;
		CustomLogicStartAst pCVar5;
		Dictionary<string, CustomLogicSourceType> __this_00;
		object __this_01;
		bool bVar6;
		CustomLogicNetworkViewBuiltin networkView;
		CustomLogicMapObjectBuiltin obj_00;
		MethodInfo pMVar7;
		HashSet<GameObject> __this_02;
		Transform t;
		CustomLogicCollisionHandler __this_03;
		MethodInfo extraout_RDX_02;
		MethodInfo extraout_RDX_03;
		int local_6c;
		MethodInfo local_68;
		byte[] local_60 = new byte[16];
		GameObject local_50;
		System_Collections_Generic_HashSet_Enumerator_T__o local_48;

		if (Il2CppMethodInitialized_075473be == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_GameObject_ctor) ;
			Il2CppMethodInitialized_075473be = true;
		}
		local_6c = 0;
		local_48._set = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		if ((obj == null) ||(pMVar3 = obj.ScriptObject, pMVar3 == null)) goto label_05b8602c;
		if (pMVar3.Networked == false) {
			networkView = null;
			pSVar4 = (Dictionary<int, object>)this.IdToMapObjectBuiltin;
		}
		else {
			pSVar4 = (Dictionary<int, object>)this.IdToNetworkView;
			if (pSVar4 == null) goto label_05b8602c;
			networkView = pSVar4.get_Item(pMVar3.Id);
			pMVar3 = obj.ScriptObject;
			if (pMVar3 == null) goto label_05b8602c;
			pSVar4 = (Dictionary<int, object>)this.IdToMapObjectBuiltin;
		}
		local_68 = (MethodInfo)obj;
		if (pSVar4 != null) {
			obj_00 = pSVar4.get_Item(pMVar3.Id);
			pMVar7 = new CustomLogicComponentInstance(className, obj_00, script, networkView) ;
			pCVar5 = this._start;
			if ((pCVar5 != null) &&(__this_00 = pCVar5.ClassNamespaces, __this_00 != null)) {
				bVar6 = __this_00.TryGetValue((object)className, ref local_6c);
				if (bVar6) {
					local_60[0] = false;
					local_60._1_3_ = 0;
					local_60._4_4_ = 0;
					local_60 = new Nullable<Int32Enum>(local_6c);
					if (pMVar7 == null) goto label_05b8602c;
					pSVar1 = (Nullable<CustomLogicSourceType>)((long)&pMVar7.klass + 4);
					pSVar1.hasValue = (bool)local_60[0];
					*(undefined3)&pSVar1.field_0x1 = local_60._1_3_;
					pSVar1.value = local_60._4_4_;
				}
				if (networkView != null) {
					networkView.RegisterComponentInstance((CustomLogicComponentInstance)pMVar7);
				}
				this.RunAssignmentsClassInstance((CustomLogicClassInstance)pMVar7);
				if (pMVar7 != null) {
					pMVar7.LoadVariables();
					this.AddCallbacks((CustomLogicClassInstance)pMVar7);
					bVar6 = pMVar7.UsesCollider();
					if (!bVar6) {
						return (CustomLogicComponentInstance)pMVar7;
					}
					__this_02 = new HashSet<GameObject>();
					ppSVar2 = (Dictionary<string, object>*)&local_68.name;
					if (*ppSVar2 != null) {
						local_68 = pMVar7;
						t = (*ppSVar2).transform;
						this.FindSubcolliders(t, __this_02);
						if (__this_02 != null) {
							local_60.GetEnumerator((HashSet<object>)__this_02);
							local_48._current = (object)local_50;
							local_48._set = (HashSet<T>)local_60._0_8_;
							local_48._index = local_60._8_4_;
							local_48._version = local_60._12_4_;
							local_60[0] = false;
							local_60._1_3_ = 0;
							local_60._4_4_ = 0;
							local_60._8_8_ = &local_48;
							while(true) {
								bVar6 = local_48.MoveNext() ;
								__this_01 = local_48._current;
								if (!bVar6) {
									local_48.Dispose();
									return (CustomLogicComponentInstance)local_68;
								}
								if ((GameObject)local_48._current == null) break;
								__this_03 = local_48._current.GetComponent<CustomLogicCollisionHandler>();
								bVar6 = ((Object)__this_03 == null);
								pMVar7 = extraout_RDX_02;
								if (bVar6) {
									__this_03 = __this_01.AddComponent<CustomLogicCollisionHandler>();
									pMVar7 = extraout_RDX_03;
								}
								if (__this_03 == null) {
									throw new NullReferenceException();
								}
								__this_03.RegisterInstance((CustomLogicComponentInstance)local_68);
							}
							throw new NullReferenceException();
						}
					}
				}
			}
		}
	label_05b8602c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003CAC")]
	[Address(RVA = "0x5A86790", Offset = "0x5A85790", VA = "0x5A86790")]
	private void FindSubcolliders(Transform t, HashSet<GameObject> set)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$FindSubcolliders): 13 lines keep C-only constructs
		byte bVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		Dictionary<object, object> __this_00;
		bool bVar4;
		sbyte cVar5;
		Object x;
		GameObject pUVar6;
		object pIVar7;
		VirtualInvokeData pVVar8;
		MethodInfo method_00;
		Transform t_00;
		ulong uVar9;
		long lVar10;
		object local_60;
		object local_58;
		CustomLogicEvaluator local_50;
		object* local_40;
		object* local_38;

		local_50 = this;
		local_58 = null;
		if (t == null) {
	label_05b86b36: ;
			throw new NullReferenceException();
		}
		x = (Object)t.GetComponent<Collider>();
		bVar4 = (x != null);
		if (bVar4) {
			pUVar6 = t.gameObject;
			if (set == null) goto label_05b86b36;
			set.Add((object)pUVar6);
		}
		pIVar7 = (object)t.GetEnumerator();
		local_40 = &local_60;
		local_38 = &local_58;
		do {
			local_60 = pIVar7;
			if (pIVar7 == null) {
				throw new NullReferenceException();
			}
			pIVar2 = pIVar7.klass;
			uVar9 = (ulong)(pIVar2._2).interface_offsets_count;
			cVar5 = pIVar7.Dispose();
			pIVar7 = local_60;
			if (cVar5 == false) {
				pIVar7 = (local_60 as IDisposable);
				if (pIVar7 == null) {
					return;
				}
				pIVar2 = pIVar7.klass;
				uVar9 = (ulong)(pIVar2._2).interface_offsets_count;
				local_58 = pIVar7;
				if (uVar9 == 0) goto label_05b86adf;
				pIVar3 = (pIVar2._1).interfaceOffsets;
				lVar10 = 0;
				break;
			}
			if (local_60 == null) {
				throw new NullReferenceException();
			}
			pIVar2 = local_60.klass;
			uVar9 = (ulong)(pIVar2._2).interface_offsets_count;
			if (uVar9 != 0) {
				pIVar3 = (pIVar2._1).interfaceOffsets;
				lVar10 = 0;
				do {
					if (*(IEnumerator*)((long)&pIVar3.interfaceType + lVar10) == typeof(IEnumerator)) {
						method_00 = (MethodInfo)(pIVar2.vtable + (*(int)((long)&pIVar3.offset + lVar10) + 1));
						goto label_05b869d7;
					}
					lVar10 = lVar10 + 0x10;
				} while (uVar9 * 0x10 != lVar10);
			}
			method_00 = (MethodInfo)GetInterfaceInvokeDataFromVTableSlowPath(local_60, typeof(IEnumerator), 1);
	label_05b869d7: ;
			t_00 = (Transform)(*method_00.methodPointer)(pIVar7,(MethodInfo)method_00.virtualMethodPointer);
			if (t_00 != null) {
				bVar1 = (typeof(Transform)._2).typeHierarchyDepth;
				method_00 = (MethodInfo)(ulong)bVar1;
				if (((t_00.klass._2).typeHierarchyDepth < bVar1) ||((t_00.klass._2).typeHierarchy[(long)&method_00[-1].field_0x57] !=typeof(Transform))) {
					throw new InvalidCastException();
				}
			}
			if (t_00 == null) {
				throw new NullReferenceException();
			}
			__this_00 = (Dictionary<object, object>)MapLoader.GoToMapObject;
			pUVar6 = t_00.gameObject;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			bVar4 = __this_00.ContainsKey((object)pUVar6);
			pIVar7 = local_60;
			if (!bVar4) {
				local_50.FindSubcolliders(t_00, set);
				pIVar7 = local_60;
			}
		} while(true);
		while (true) {
			lVar10 = lVar10 + 0x10;
			if (!(uVar9 * 0x10 != lVar10)) break;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar10) == typeof(IDisposable)) {
				pVVar8 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar10);
				goto label_05b86afd;
			}
		}
	label_05b86adf: ;
	label_05b86afd: ;
		pIVar7.Dispose();
		return;
	}

	[Token(Token = "0x6003CAD")]
	[Address(RVA = "0x5A857F0", Offset = "0x5A847F0", VA = "0x5A857F0")]
	public CustomLogicMapObjectBuiltin SetupMapObject(MapObject obj)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$SetupMapObject): clean
		int key;
		MapScriptBaseObject pMVar1;
		Dictionary<int, object> pSVar2;
		bool bVar3;
		CustomLogicMapObjectBuiltin pCVar4;

		if (((obj == null) ||(pMVar1 = obj.ScriptObject, pMVar1 == null)) ||(pSVar2 = (Dictionary<int, object>)this.IdToMapObjectBuiltin, pSVar2 == null)) goto label_05b858f0;
		bVar3 = pSVar2.ContainsKey(pMVar1.Id);
		if (!bVar3) {
			pMVar1 = obj.ScriptObject;
			if (pMVar1 == null) goto label_05b858f0;
			pSVar2 = (Dictionary<int, object>)this.IdToMapObjectBuiltin;
			key = pMVar1.Id;
			pCVar4 = new CustomLogicMapObjectBuiltin(obj);
			if (pSVar2 == null) goto label_05b858f0;
			pSVar2.Add(key, (object)pCVar4);
		}
		pMVar1 = obj.ScriptObject;
		if ((pMVar1 != null) &&(pSVar2 = (Dictionary<int, object>)this.IdToMapObjectBuiltin, pSVar2 != null)) {
			pCVar4 = pSVar2.get_Item(pMVar1.Id);
			return pCVar4;
		}
	label_05b858f0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003CAE")]
	[Address(RVA = "0x5A6C380", Offset = "0x5A6B380", VA = "0x5A6C380")]
	public CustomLogicMapObjectBuiltin GetOrCreateMapObjectBuiltin(MapObject obj)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$GetOrCreateMapObjectBuiltin): clean
		int key;
		MapScriptBaseObject pMVar1;
		Dictionary<int, object> pSVar2;
		bool bVar3;
		CustomLogicMapObjectBuiltin pCVar4;

		if (obj == null) {
			return null;
		}
		pMVar1 = obj.ScriptObject;
		if ((pMVar1 == null) ||(pSVar2 = (Dictionary<int, object>)this.IdToMapObjectBuiltin, pSVar2 == null)) goto label_05b6c48b;
		bVar3 = pSVar2.ContainsKey(pMVar1.Id);
		if (!bVar3) {
			pMVar1 = obj.ScriptObject;
			if (pMVar1 == null) goto label_05b6c48b;
			pSVar2 = (Dictionary<int, object>)this.IdToMapObjectBuiltin;
			key = pMVar1.Id;
			pCVar4 = new CustomLogicMapObjectBuiltin(obj);
			if (pSVar2 == null) goto label_05b6c48b;
			pSVar2.Add(key, (object)pCVar4);
		}
		pMVar1 = obj.ScriptObject;
		if ((pMVar1 != null) &&(pSVar2 = (Dictionary<int, object>)this.IdToMapObjectBuiltin, pSVar2 != null)) {
			pCVar4 = pSVar2.get_Item(pMVar1.Id);
			return pCVar4;
		}
	label_05b6c48b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003CAF")]
	[Address(RVA = "0x5A85900", Offset = "0x5A84900", VA = "0x5A85900")]
	public CustomLogicPhotonSync SetupNetworking(MapObject obj)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$SetupNetworking): 27 lines keep C-only constructs
		ulong uVar1;
		ulong uVar2;
		ulong uVar3;
		int key;
		MapScriptBaseObject pMVar4;
		Dictionary<int, object> pSVar5;
		bool bVar8;
		CustomLogicNetworkViewBuiltin __this_00;
		Object[] data;
		object pIVar9;
		object pIVar10;
		GameObject __this_01;
		CustomLogicPhotonSync pCVar11;
		uint uVar12;
		uint uVar13;
		float fVar14;
		Quaternion rotation;
		Vector3 position;
		byte local_65;
		float local_64;
		int[] local_60 = new int[2];
		ulong local_58;
		ulong uStack_50;
		ulong local_48;
		ulong local_38;

		if ((obj != null) &&(pMVar4 = obj.ScriptObject, pMVar4 != null)) {
			if (pMVar4.Networked == false) {
				return null;
			}
			pSVar5 = (Dictionary<int, object>)this.IdToNetworkView;
			if (pSVar5 != null) {
				bVar8 = pSVar5.ContainsKey(pMVar4.Id);
				if (bVar8) {
					return null;
				}
				pMVar4 = obj.ScriptObject;
				if (pMVar4 != null) {
					pSVar5 = (Dictionary<int, object>)this.IdToNetworkView;
					key = pMVar4.Id;
					__this_00 = new CustomLogicNetworkViewBuiltin(obj);
					if (pSVar5 != null) {
						pSVar5.Add(key, (object)__this_00);
						bVar8 = PhotonNetwork.IsMasterClient;
						if (!bVar8) {
							return null;
						}
						data = (Object[])new object[3];
						local_60[1] = 1;
						pIVar9 = (object)(local_60 + 1);
						if (data != null) {
							if ((pIVar9 != null) &&(pIVar10 = il2cpp_vm_Object_IsInst(pIVar9, (((data.obj).klass)._1).element_class), pIVar10 == null)) goto label_05b85c6c;
							if ((int)data.Length == 0) goto label_05b85c67;
							data[0] = pIVar9;
							pMVar4 = obj.ScriptObject;
							if (pMVar4 == null) goto label_05b85c62;
							local_60[0] = pMVar4.Id;
							pIVar9 = (object)local_60;
							if ((pIVar9 != null) &&(pIVar10 = il2cpp_vm_Object_IsInst(pIVar9, (((data.obj).klass)._1).element_class), pIVar10 == null)) {
	label_05b85c6c: ;
								pIVar9 = new ArrayTypeMismatchException();
								throw pIVar9;
							}
							if ((data.Length & 0xfffffffe) != 0) {
								data[1] = pIVar9;
								local_65 = 0;
								pIVar9 = (object)local_65;
								if ((pIVar9 != null) &&(pIVar10 = il2cpp_vm_Object_IsInst(pIVar9, (((data.obj).klass)._1).element_class), pIVar10 == null)) goto label_05b85c6c;
								if (2 < (uint)data.Length) {
									data[2] = pIVar9;
									uVar1._0_4_ = (Vector3.zeroVector).x;
									uVar1._4_4_ = (Vector3.zeroVector).y;
									fVar14 = (Vector3.zeroVector).z;
									uVar12 = 0;
									uVar13 = 0;
									if (g_data_0753e72b == false) {
										uStack_50 = 0;
										local_64 = fVar14;
										local_58 = uVar1;
										g_data_0753e72b = true;
										uVar1._0_4_ = (undefined4)local_58;
										uVar1._4_4_ = local_58._4_4_;
										uVar12 = (undefined4)uStack_50;
										uVar13 = uStack_50._4_4_;
										fVar14 = local_64;
									}
									uVar2._0_4_ = (Quaternion.identityQuaternion).x;
									uVar2._4_4_ = (Quaternion.identityQuaternion).y;
									uVar3._0_4_ = (Quaternion.identityQuaternion).z;
									uVar3._4_4_ = (Quaternion.identityQuaternion).w;
									if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
										local_58 = CONCAT44(uVar1._4_4_, (undefined4)uVar1);
										uStack_50 = CONCAT44(uVar13, uVar12);
										local_64 = fVar14;
										local_48 = uVar3;
										local_38 = uVar2;
										uVar1._0_4_ = (undefined4)local_58;
										uVar1._4_4_ = local_58._4_4_;
										fVar14 = local_64;
										uVar2._0_4_ = (undefined4)local_38;
										uVar2._4_4_ = local_38._4_4_;
										uVar3._0_4_ = (undefined4)local_48;
										uVar3._4_4_ = local_48._4_4_;
									}
									rotation.y = (float)uVar2._4_4_;
									rotation.x = (float)(undefined4)uVar2;
									rotation.w = (float)uVar3._4_4_;
									rotation.z = (float)(undefined4)uVar3;
									position.y = (float)uVar1._4_4_;
									position.x = (float)(undefined4)uVar1;
									position.z = fVar14;
									__this_01 = PhotonNetwork.Instantiate("Game/CustomLogicPhotonSyncDynamicPrefab", position, rotation, 0, data);
									if (__this_01 != null) {
										pCVar11 = __this_01.GetComponent<CustomLogicPhotonSync>();
										return pCVar11;
									}
									goto label_05b85c62;
								}
							}
	label_05b85c67: ;
							throw new IndexOutOfRangeException();
						}
					}
				}
			}
		}
	label_05b85c62: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003CB0")]
	[Address(RVA = "0x5A86BA0", Offset = "0x5A85BA0", VA = "0x5A86BA0")]
	public string GetLineNumberString(int lineNumber)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$GetLineNumberString): clean
		CustomLogicCompiler __this_00;
		String pSVar1;

		__this_00 = this._Compiler_k__BackingField;
		if (__this_00 == null) {
			return pSVar1;
		}
		return pSVar1;
	}

	[Token(Token = "0x6003CB1")]
	[Address(RVA = "0x5A83160", Offset = "0x5A82160", VA = "0x5A83160")]
	private void LogCustomLogicError(string errorMessage, bool showInChat)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$LogCustomLogicError): clean
		uint uVar1;
		UISettings pSVar2;
		BoolSetting pSVar3;
		InputSettings pSVar4;
		GeneralInputSettings pSVar5;
		KeybindSetting pSVar6;
		bool bVar7;
		String str1;

		DebugConsole.LogCustomLogic(errorMessage, false);
		if (showInChat) {
			if ((typeof(ChatManager)._2).cctor_finished_or_no_cctor == 0) {
				bVar7 = ChatManager.IsChatAvailable();
			}
			else {
				bVar7 = ChatManager.IsChatAvailable();
			}
			if (bVar7) {
				pSVar2 = SettingsManager.UISettings;
				if ((pSVar2 == null) ||(pSVar3 = pSVar2.ChatCLErrors, pSVar3 == null)) {
	label_05b832e2: ;
					throw new NullReferenceException();
				}
				if (pSVar3._value == false) {
					pSVar4 = SettingsManager.InputSettings;
					if (((pSVar4 == null) ||(pSVar5 = pSVar4.General, pSVar5 == null)) ||(pSVar6 = pSVar5.DebugWindow, pSVar6 == null)) goto label_05b832e2;
					str1 = pSVar6.ToString();
					errorMessage = String.Concat("CL Runtime Exception, press ", str1, " to view in debug console");
					uVar1 = (typeof(ChatManager)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = ((typeof(ChatManager))._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				ChatManager.AddException(errorMessage);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6003CB2")]
	[Address(RVA = "0x5A86BD0", Offset = "0x5A85BD0", VA = "0x5A86BD0")]
	public CustomLogicStartAst GetStartAst()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$GetStartAst): clean
		return this._start;
	}

	[Token(Token = "0x6003CB3")]
	[Address(RVA = "0x5A86BE0", Offset = "0x5A85BE0", VA = "0x5A86BE0")]
	public Dictionary<string, CustomLogicClassInstance> GetStaticClasses()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$GetStaticClasses): clean
		return this._staticClasses;
	}

	[Token(Token = "0x6003CB4")]
	[Address(RVA = "0x5A86BF0", Offset = "0x5A85BF0", VA = "0x5A86BF0")]
	public Dictionary<string, Dictionary<CustomLogicSourceType, CustomLogicClassInstance>> GetNamespacedStaticClasses()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$GetNamespacedStaticClasses): clean
		return this._namespacedStaticClasses;
	}

	[Token(Token = "0x6003CB5")]
	[Address(RVA = "0x5A77610", Offset = "0x5A76610", VA = "0x5A77610")]
	public Dictionary<string, BaseSetting> GetModeSettings()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$GetModeSettings): 7 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		object pIVar2;
		bool bVar3;
		CustomLogicClassInstance classInstance;
		Dictionary<string, BaseSetting> __this_00;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_01;
		object pIVar4;
		BaseSetting pSVar5;
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_68;
		Dictionary<string, BaseSetting> pSStack_50;
		byte[] auStack_48 = new byte[16];
		String pSStack_38;

		SStack_68._dictionary = null;
		SStack_68._index = 0;
		SStack_68._version = 0;
		SStack_68._currentKey = null;
		classInstance = this.CreateClassInstance("Main", CustomLogicEvaluator.EmptyArgs, false, (Nullable<CustomLogicSourceType>)0x0);
		this.RunAssignmentsClassInstance(classInstance);
		__this_00 = new Dictionary<string, BaseSetting>();
		if (classInstance == null) {
			throw new NullReferenceException();
		}
		pSVar1 = (Dictionary<object, object>)classInstance.Variables;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		__this_01 = pSVar1.Keys;
		if (__this_01 == null) {
			throw new NullReferenceException();
		}
		auStack_48.GetEnumerator(__this_01);
		SStack_68._currentKey = (object)pSStack_38;
		SStack_68._dictionary = (Dictionary<TKey, TValue>)auStack_48._0_8_;
		SStack_68._index = auStack_48._8_4_;
		SStack_68._version = auStack_48._12_4_;
		auStack_48._0_8_ = null;
		auStack_48._8_8_ = &SStack_68;
		pSStack_50 = __this_00;
		if (__this_00 == null) {
			while (true) {
				bVar3 = SStack_68.MoveNext();
				pIVar2 = SStack_68._currentKey;
				if (!(bVar3)) break;
				if ((String)SStack_68._currentKey == null) goto label_05b77997;
				bVar3 = SStack_68._currentKey.StartsWith("_");
				if (!bVar3) {
					bVar3 = ((String)pIVar2 == "Type");
					if ((!bVar3) || (classInstance._containsTypeOverride != false)) {
						pSVar1 = (Dictionary<object, object>)classInstance.Variables;
						if (pSVar1 == null) goto label_05b7799c;
						pIVar4 = pSVar1.get_Item(pIVar2);
						pSVar5 = this.CreateInspectorSetting("Main", (String)pIVar2, pIVar4);
						if (pSVar5 != null) {
							throw new NullReferenceException();
						}
					}
				}
			}
		}
		else {
			while (true) {
				bVar3 = SStack_68.MoveNext();
				pIVar2 = SStack_68._currentKey;
				if (!(bVar3)) break;
				if ((String)SStack_68._currentKey == null) {
	label_05b77997: ;
					throw new NullReferenceException();
				}
				bVar3 = SStack_68._currentKey.StartsWith("_");
				if (!bVar3) {
					bVar3 = ((String)pIVar2 == "Type");
					if ((!bVar3) || (classInstance._containsTypeOverride != false)) {
						pSVar1 = (Dictionary<object, object>)classInstance.Variables;
						if (pSVar1 == null) {
	label_05b7799c: ;
							throw new NullReferenceException();
						}
						pIVar4 = pSVar1.get_Item(pIVar2);
						pSVar5 = this.CreateInspectorSetting("Main", (String)pIVar2, pIVar4);
						if (pSVar5 != null) {
							pSStack_50.Add(pIVar2, (object)pSVar5);
						}
					}
				}
			}
		}
		SStack_68.Dispose();
		return pSStack_50;
	}

	[Token(Token = "0x6003CB6")]
	[Address(RVA = "0x5A787E0", Offset = "0x5A777E0", VA = "0x5A787E0")]
	public Dictionary<string, Dictionary<string, BaseSetting>> GetAddonSettings()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$GetAddonSettings): 14 lines keep C-only constructs
		CustomLogicStartAst pCVar1;
		Dictionary<object, object> pSVar2;
		CustomLogicToken pCVar3;
		String className;
		String pSVar4;
		bool bVar5;
		Dictionary<string, Dictionary<string, BaseSetting>> __this_00;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o pSVar6;
		CustomLogicClassDefinitionAst pCVar7;
		int piVar8;
		CustomLogicClassInstance classInstance;
		Dictionary<string, BaseSetting> __this_01;
		object pIVar9;
		BaseSetting pSVar10;
		byte[] local_90 = new byte[16];
		String local_80;
		byte[] local_78 = new byte[8];
		ulong uStack_70;
		String local_68;
		Dictionary<string, BaseSetting> local_60;
		byte[] local_58 = new byte[8];
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o pSStack_50;
		String local_48;

		local_78 = (byte[])0x0;
		uStack_70._0_4_ = 0;
		uStack_70._4_4_ = 0;
		local_68 = null;
		local_58 = (byte[])0x0;
		local_48 = null;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, Dictionary<string, BaseSetting>>));
		__this_00 = new Dictionary<object, object>();
		pCVar1 = this._start;
		if (((pCVar1 == null) ||(pSVar2 = (Dictionary<object, object>)pCVar1.Classes, pSVar2 == null)) ||(pSVar6 = pSVar2.Keys, pSVar6 == null)) {
			throw new NullReferenceException();
		}
		local_90.GetEnumerator(pSVar6);
		local_68 = local_80;
		local_78 = (byte[])local_90._0_8_;
		uStack_70 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_90._8_8_ ;
		do {
			do {
				bVar5 = local_78.MoveNext();
				className = local_68;
				if (!bVar5) {
					local_78.Dispose();
					return __this_00;
				}
				pCVar1 = this._start;
				if (pCVar1 == null) {
					throw new NullReferenceException();
				}
				pSVar2 = (Dictionary<object, object>)pCVar1.Classes;
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				pCVar7 = pSVar2.get_Item((object)local_68);
				if (pCVar7 == null) {
					throw new NullReferenceException();
				}
				pCVar3 = pCVar7.Token;
				if (pCVar3 == null) {
					throw new NullReferenceException();
				}
				pIVar9 = pCVar3.Value;
				if (pIVar9 == null) {
					throw new NullReferenceException();
				}
				if ((pIVar9.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
					throw new InvalidCastException();
				}
				piVar8 = il2cpp_vm_Object_Unbox(pIVar9);
			} while (*piVar8 != 3);
			classInstance = this.CreateClassInstance(className, CustomLogicEvaluator.EmptyArgs, false, (Nullable<CustomLogicSourceType>)0x0);
			this.RunAssignmentsClassInstance(classInstance);
			__this_01 = new Dictionary<string, BaseSetting>() ;
			if (classInstance == null) {
				throw new NullReferenceException();
			}
			pSVar2 = (Dictionary<object, object>)classInstance.Variables;
			if (pSVar2 == null) {
				throw new NullReferenceException();
			}
			pSVar6 = pSVar2.Keys;
			if (pSVar6 == null) {
				throw new NullReferenceException();
			}
			local_90.GetEnumerator(pSVar6);
			local_48 = local_80;
			local_58 = (byte[])local_90._0_8_;
			pSStack_50 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_90._8_8_;
			local_90._0_8_ = null;
			local_90._8_8_ =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_58;
			local_60 = __this_01;
			if (__this_01 == null) {
				while (true) {
					bVar5 = local_58.MoveNext();
					pSVar4 = local_48;
					if (!(bVar5)) break;
					if (local_48 == null) goto label_05b78d31;
					bVar5 = local_48.StartsWith("_");
					if (!bVar5) {
						bVar5 = (pSVar4 == "Type");
						if ((!bVar5) || (classInstance._containsTypeOverride != false)) {
							pSVar2 = (Dictionary<object, object>)classInstance.Variables;
							if (pSVar2 == null) goto label_05b78d3b;
							pIVar9 = pSVar2.get_Item((object)pSVar4);
							pSVar10 = this.CreateInspectorSetting(className, pSVar4, pIVar9);
							if (pSVar10 != null) {
								throw new NullReferenceException();
							}
						}
					}
				}
			}
			else {
				while (true) {
					bVar5 = local_58.MoveNext();
					pSVar4 = local_48;
					if (!(bVar5)) break;
					if (local_48 == null) {
	label_05b78d31: ;
						throw new NullReferenceException();
					}
					bVar5 = local_48.StartsWith("_");
					if (!bVar5) {
						bVar5 = (pSVar4 == "Type");
						if ((!bVar5) || (classInstance._containsTypeOverride != false)) {
							pSVar2 = (Dictionary<object, object>)classInstance.Variables;
							if (pSVar2 == null) {
	label_05b78d3b: ;
								throw new NullReferenceException();
							}
							pIVar9 = pSVar2.get_Item((object)pSVar4);
							pSVar10 = this.CreateInspectorSetting(className, pSVar4, pIVar9);
							if (pSVar10 != null) {
								local_60.Add((object)pSVar4, (object)pSVar10);
							}
						}
					}
				}
			}
			local_58.Dispose();
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.set_Item((object)className, (object)local_60) ;
		} while(true);
	}

	[Token(Token = "0x6003CB7")]
	[Address(RVA = "0x5A87160", Offset = "0x5A86160", VA = "0x5A87160")]
	public Dictionary<string, BaseSetting> GetComponentSettings(string component, List<string> parameters)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$GetComponentSettings): 13 lines keep C-only constructs
		int iVar1;
		Dictionary<object, object> pSVar2;
		String pSVar3;
		bool bVar4;
		Dictionary<string, string> __this_00;
		CustomLogicClassInstance classInstance;
		String[] pSVar5;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_01;
		object obj;
		String value;
		BaseSetting value_00;
		byte[] local_98 = new byte[16];
		String local_88;
		String local_80;
		byte[] local_78 = new byte[8];
		ulong uStack_70;
		String local_68;
		System_Collections_Generic_List_Enumerator_object__o local_58;
		Dictionary<string, BaseSetting> local_40;
		CustomLogicEvaluator local_38;

		local_80 = component;
		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		local_78 = (byte[])0x0;
		uStack_70._0_4_ = 0;
		uStack_70._4_4_ = 0;
		local_68 = null;
		local_40 = new Dictionary<string, BaseSetting>();
		__this_00 = new Dictionary<string, string>();
		classInstance = this.CreateClassInstance(local_80, CustomLogicEvaluator.EmptyArgs, false, (Nullable<CustomLogicSourceType>)0x0);
		this.RunAssignmentsClassInstance(classInstance);
		if (parameters == null) {
			throw new NullReferenceException();
		}
		local_98.GetEnumerator((List<object>)parameters);
		local_58._current = (object)local_88;
		local_58._list = (List<T>)local_98._0_8_;
		local_58._index = local_98._8_4_;
		local_58._version = local_98._12_4_;
		local_98._0_8_ = null;
		local_98._8_8_ = &local_58;
		if (__this_00 == null) {
			bVar4 = local_58.MoveNext();
			if (bVar4) {
				if ((String)local_58._current != null) {
					pSVar5 = local_58._current.Split(0x3a, 0);
					if (pSVar5 != null) {
						iVar1 = (int)pSVar5.Length;
						if (iVar1 == 0) {
	label_05b87731: ;
							throw new IndexOutOfRangeException();
						}
						if (iVar1 != 1) {
							throw new NullReferenceException();
						}
	label_05b87729: ;
						throw new IndexOutOfRangeException();
					}
	label_05b87715: ;
					throw new NullReferenceException();
				}
	label_05b876f4: ;
				throw new NullReferenceException();
			}
		}
		else {
			while (bVar4 = local_58.MoveNext()) {
				if ((String)local_58._current == null) goto label_05b876f4;
				pSVar5 = local_58._current.Split(0x3a, 0);
				if (pSVar5 == null) goto label_05b87715;
				iVar1 = (int)pSVar5.Length;
				if (iVar1 == 1) goto label_05b87729;
				if (iVar1 == 0) goto label_05b87731;
				__this_00.Add((object)pSVar5[0], (object)pSVar5[1]);
			}
		}
		local_58.Dispose();
		if (classInstance == null) {
			throw new NullReferenceException();
		}
		pSVar2 = (Dictionary<object, object>)classInstance.Variables;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		__this_01 = pSVar2.Keys;
		if (__this_01 == null) {
			throw new NullReferenceException();
		}
		local_98.GetEnumerator(__this_01);
		local_68 = local_88;
		local_78 = (byte[])local_98._0_8_;
		uStack_70 = (System_Collections_Generic_List_Enumerator_object__o)local_98._8_8_;
		local_98._0_8_ = null;
		local_98._8_8_ = local_78;
		if (__this_00 == null) {
			while (true) {
				bVar4 = local_78.MoveNext();
				pSVar3 = local_68;
				if (!(bVar4)) break;
				if (local_68 == null) {
	label_05b876a5: ;
					throw new NullReferenceException();
				}
				bVar4 = local_68.StartsWith("_");
				if (!bVar4) {
					bVar4 = (pSVar3 == "Type");
					if ((!bVar4) || (classInstance._containsTypeOverride != false)) {
						pSVar2 = (Dictionary<object, object>)classInstance.Variables;
						if (pSVar2 != null) {
							pSVar2.get_Item((object)pSVar3);
							throw new NullReferenceException();
						}
	label_05b87671: ;
						throw new NullReferenceException();
					}
				}
			}
		}
		else {
			local_38 = this;
			while (true) {
				bVar4 = local_78.MoveNext();
				pSVar3 = local_68;
				if (!(bVar4)) break;
				if (local_68 == null) goto label_05b876a5;
				bVar4 = local_68.StartsWith("_");
				if (!bVar4) {
					bVar4 = (pSVar3 == "Type");
					if ((!bVar4) || (classInstance._containsTypeOverride != false)) {
						pSVar2 = (Dictionary<object, object>)classInstance.Variables;
						if (pSVar2 == null) goto label_05b87671;
						obj = pSVar2.get_Item((object)pSVar3);
						bVar4 = __this_00.ContainsKey((object)pSVar3);
						if (bVar4) {
							value = __this_00.get_Item((object)pSVar3);
							obj = CustomLogicComponentInstance.DeserializeValue(obj, value);
						}
						value_00 = local_38.CreateInspectorSetting(local_80, pSVar3, obj);
						if (value_00 != null) {
							if (local_40 == null) {
								throw new NullReferenceException();
							}
							local_40.Add((object)pSVar3, (object)value_00);
						}
					}
				}
			}
		}
		local_78.Dispose();
		return local_40;
	}

	[Token(Token = "0x6003CB8")]
	[Address(RVA = "0x5A86C10", Offset = "0x5A85C10", VA = "0x5A86C10")]
	private BaseSetting CreateInspectorSetting(string className, string variableName, object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$CreateInspectorSetting): 15 lines keep C-only constructs
		float defaultValue;
		byte bVar1;
		byte bVar2;
		bool defaultValue_00;
		int defaultValue_01;
		CustomLogicStartAst pCVar3;
		Dictionary<object, object> __this_00;
		List<CustomLogicAssignmentExpressionAst> source;
		Il2CppClass pIVar4;
		Vector3 defaultValue_02;
		CustomLogicEvaluator.c__DisplayClass40_0 __this_01;
		CustomLogicClassDefinitionAst pCVar5;
		Func<CustomLogicAssignmentExpressionAst, bool> __this_02;
		CustomLogicAssignmentExpressionAst assignment;
		InspectorSettingMetadata pSVar6;
		System_Collections_Generic_IEnumerable_TResult__o collection;
		HashSet<int> __this_03;
		ColorSetting __this_04;
		float pfVar7;
		int piVar8;
		IntPtr pvVar9;
		int maxValue;
		int minValue;
		float local_50;
		float local_4c;

		if (Il2CppMethodInitialized_075473c7 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicEvaluator.c__DisplayClass40_0)) ;
			Il2CppMethodInitialized_075473c7 = true;
		}
		__this_01 = new CustomLogicEvaluator.c__DisplayClass40_0();
		if (__this_01 == null) goto label_05b8714c;
		__this_01.variableName = variableName;
		pCVar3 = this._start;
		if (((pCVar3 == null) ||(__this_00 = (Dictionary<object, object>)pCVar3.Classes, __this_00 == null)) ||(pCVar5 = __this_00.get_Item((object)className), pCVar5 == null)) goto label_05b8714c;
		source = pCVar5.Assignments;
		__this_02 = new Func<CustomLogicAssignmentExpressionAst, bool>((object)__this_01, (intptr_t) MethodInfo_CustomLogic_CustomLogicEvaluator_c__DisplayClass40_0_CreateInspectorSetting_b__0);
		assignment = Enumerable.FirstOrDefault<CustomLogicAssignmentExpressionAst>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_02) ;
		pSVar6 = CustomLogicEvaluator.CreateInspectorMetadata(assignment);
		if (value == null) {
	label_05b86e99: ;
			if (pSVar6 == null) {
	label_05b8714c: ;
				throw new NullReferenceException();
			}
			if (pSVar6.MapObjectList == false) {
				return null;
			}
			if (value == null) {
				return null;
			}
			bVar1 = (typeof(CustomLogicListBuiltin)._2).typeHierarchyDepth;
			if ((value.klass._2).typeHierarchyDepth < bVar1) {
				return null;
			}
			if ((value.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicListBuiltin)) {
				return null;
			}
			collection = Enumerable.OfType<int>((IEnumerable)value[3].klass);
			__this_03 = new HashSet<int>((IEnumerable<T>)collection);
			__this_04 = new IntSetting((HashSet<T>)__this_03);
			goto label_05b87116;
		}
		pIVar4 = value.klass;
		if (pIVar4 == g_data_07556740) {
			pfVar7 = il2cpp_vm_Object_Unbox(value);
			if (pSVar6 == null) goto label_05b8714c;
			defaultValue = *pfVar7;
			if ((pSVar6.HasClamp == false) && (pSVar6.HasSlider == false)) {
				local_50 = 3.4028235e+38;
				local_4c = -3.4028235e+38;
			}
			else {
				local_4c = pSVar6.Min;
				local_50 = pSVar6.Max;
			}
			__this_04 = new IntSetting(defaultValue, local_4c, local_50);
			goto label_05b87116;
		}
		if (pIVar4 == g_data_07556758) {
			__this_04 = new IntSetting((String)value, 0x7fffffff);
			goto label_05b87116;
		}
		if (pIVar4 != g_data_07556710) {
			if (pIVar4 == g_data_075566f0) {
				pvVar9 = il2cpp_vm_Object_Unbox(value);
				defaultValue_00 = *(bool)pvVar9;
				__this_04 = new IntSetting(defaultValue_00);
				goto label_05b87116;
			}
			bVar1 = (pIVar4._2).typeHierarchyDepth;
			bVar2 = (typeof(CustomLogicColorBuiltin)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pIVar4._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CustomLogicColorBuiltin))) {
				pIVar4 = value[3].klass;
				__this_04 = new IntSetting((Color255)pIVar4, 0);
				goto label_05b87116;
			}
			bVar2 = (typeof(CustomLogicVector3Builtin)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pIVar4._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CustomLogicVector3Builtin))) {
				defaultValue_02 = *(Vector3)(value + 3);
				__this_04 = new IntSetting((Vector3)defaultValue_02);
				goto label_05b87116;
			}
			goto label_05b86e99;
		}
		piVar8 = il2cpp_vm_Object_Unbox(value);
		if (pSVar6 == null) goto label_05b8714c;
		defaultValue_01 = *piVar8;
		if (pSVar6.HasClamp == false) {
			maxValue = 0x7fffffff;
			if (pSVar6.HasSlider == false) {
				minValue = -0x80000000;
			}
			else {
				minValue = (int32_t)pSVar6.Min;
				if (pSVar6.HasSlider != false) goto label_05b87013;
			}
		}
		else {
			minValue = (int32_t)pSVar6.Min;
	label_05b87013: ;
			maxValue = (int32_t)pSVar6.Max;
		}
		__this_04 = new IntSetting(defaultValue_01, minValue, maxValue);
	label_05b87116: ;
		if (__this_04 == null) {
			return null;
		}
		((StringSetting)&__this_04.fields).InspectorMetadata = pSVar6;
		return (BaseSetting)__this_04;
	}

	[Token(Token = "0x6003CB9")]
	[Address(RVA = "0x5A6D350", Offset = "0x5A6C350", VA = "0x5A6D350")]
	public object ApplyComponentInspectorRules(string className, string variableName, object value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$ApplyComponentInspectorRules): 33 lines keep C-only constructs
		float fVar1;
		float fVar2;
		byte bVar3;
		int iVar4;
		int iVar5;
		CustomLogicStartAst pCVar6;
		Dictionary<object, object> __this_00;
		List<CustomLogicAssignmentExpressionAst> source;
		Dictionary<int, object> pSVar7;
		List<object> pSVar8;
		Object[] pSVar9;
		bool bVar11;
		CustomLogicEvaluator.c__DisplayClass41_0 __this_01;
		CustomLogicClassDefinitionAst pCVar12;
		Func<CustomLogicAssignmentExpressionAst, bool> __this_02;
		CustomLogicAssignmentExpressionAst assignment;
		InspectorSettingMetadata pSVar13;
		float pfVar14;
		int piVar15;
		int piVar16;
		CustomLogicMapObjectBuiltin pCVar17;
		CustomLogicListBuiltin __this_03;
		int iVar18;
		int iVar19;
		Il2CppClass pIVar20;
		uint uVar21;
		float fVar22;
		byte[] local_70 = new byte[16];
		object local_60;
		MapObject local_58;
		MapObject local_50;
		System_Collections_Generic_List_Enumerator_object__o local_48;

		if (Il2CppMethodInitialized_075473c8 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicEvaluator.c__DisplayClass41_0)) ;
			Il2CppMethodInitialized_075473c8 = true;
		}
		local_50 = null;
		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		local_58 = null;
		__this_01 = new CustomLogicEvaluator.c__DisplayClass41_0();
		if (__this_01 == null) goto label_05b6d923;
		__this_01.variableName = variableName;
		pCVar6 = this._start;
		if (((pCVar6 == null) ||(__this_00 = (Dictionary<object, object>)pCVar6.Classes, __this_00 == null)) ||(pCVar12 = __this_00.get_Item((object)className), pCVar12 == null)) goto label_05b6d923;
		source = pCVar12.Assignments;
		__this_02 = new Func<CustomLogicAssignmentExpressionAst, bool>((object)__this_01, (intptr_t) MethodInfo_CustomLogic_CustomLogicEvaluator_c__DisplayClass41_0_ApplyComponentInspectorRules_b__0);
		assignment = Enumerable.FirstOrDefault<CustomLogicAssignmentExpressionAst>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_02) ;
		pSVar13 = CustomLogicEvaluator.CreateInspectorMetadata(assignment);
		if (pSVar13 == null) goto label_05b6d923;
		if (pSVar13.HasClamp == false) {
	label_05b6d5d8: ;
			if (pSVar13.MapObject != false) {
				if (value == null) {
					return null;
				}
				pIVar20 = value.klass;
				bVar3 = (typeof(CustomLogicMapObjectBuiltin)._2).typeHierarchyDepth;
				if ((bVar3 <= (pIVar20._2).typeHierarchyDepth) &&((pIVar20._2).typeHierarchy[(ulong)bVar3 - 1] ==typeof(CustomLogicMapObjectBuiltin))) {
					return value;
				}
				if (pIVar20 != g_data_07556710) {
					return null;
				}
				piVar16 = il2cpp_vm_Object_Unbox(value);
				iVar5 = *piVar16;
				pSVar7 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if (pSVar7 != null) {
					bVar11 = pSVar7.TryGetValue(iVar5, (object*)&local_50);
					if (bVar11) {
						pCVar17 = this.GetOrCreateMapObjectBuiltin(local_50);
						return (object)pCVar17;
					}
					return null;
				}
				goto label_05b6d923;
			}
		}
		else {
			if (value != null) {
				if (value.klass == g_data_07556710) {
					piVar15 = il2cpp_vm_Object_Unbox(value);
					iVar18 = (int)pSVar13.Min;
					iVar4 = *piVar15;
					iVar19 = (int)pSVar13.Max;
					if (iVar4 < iVar19) {
						iVar19 = iVar4;
					}
					if (iVar4 < iVar18) {
						iVar19 = iVar18;
					}
					local_70._0_4_ = iVar19;
					pIVar20 = g_data_07556710;
				}
				else {
					if (value.klass != g_data_07556740) goto label_05b6d5d8;
					pfVar14 = il2cpp_vm_Object_Unbox(value);
					fVar1 = *pfVar14;
					fVar2 = pSVar13.Min;
					fVar22 = pSVar13.Max;
					if (fVar1 <= fVar22) {
						fVar22 = fVar1;
					}
					uVar21 = -(uint)(fVar2 <= fVar1);
					local_70._0_4_ = ~uVar21 & (uint)fVar2 | (uint)fVar22 & uVar21;
					pIVar20 = g_data_07556740;
				}
				value = (object)local_70;
				goto label_05b6d5d8;
			}
			value = null;
			if (pSVar13.MapObject != false) {
				return null;
			}
		}
		if (pSVar13.MapObjectList == false) {
			return value;
		}
		__this_03 = new CustomLogicListBuiltin();
		if (value == null) {
			return (object)__this_03;
		}
		bVar3 = (typeof(CustomLogicListBuiltin)._2).typeHierarchyDepth;
		if ((value.klass._2).typeHierarchyDepth < bVar3) {
			return (object)__this_03;
		}
		if ((value.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(CustomLogicListBuiltin)) {
			return (object)__this_03;
		}
		if (value[3].klass != null) {
			local_70.GetEnumerator((List<object>)value[3].klass);
			local_48._current = local_60;
			local_48._list = (List<T>)local_70._0_8_;
			local_48._index = local_70._8_4_;
			local_48._version = local_70._12_4_;
			local_70._0_8_ = null;
			local_70._8_8_ = &local_48;
	label_05b6d761: ;
			do {
				do {
					while(true) {
						do {
							bVar11 = local_48.MoveNext();
							if (!bVar11) {
								local_48.Dispose();
								return (object)__this_03;
							}
						} while (local_48._current == null);
						pIVar20 = (local_48._current).klass;
						bVar3 = (typeof(CustomLogicMapObjectBuiltin)._2).typeHierarchyDepth;
						if (((pIVar20._2).typeHierarchyDepth < bVar3) ||((pIVar20._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(CustomLogicMapObjectBuiltin))) break;
						if (__this_03 == null) {
							throw new NullReferenceException();
						}
						pSVar8 = __this_03.List;
						if (pSVar8 == null) {
	label_05b6d928: ;
							throw new NullReferenceException();
						}
						piVar16 = &pSVar8._version;
						*piVar16 = *piVar16 + 1;
						pSVar9 = pSVar8._items;
						if (pSVar9 == null) goto label_05b6d928;
						uVar21 = pSVar8._size;
						if (uVar21 < (uint)pSVar9.Length) {
							pSVar8._size = uVar21 + 1;
							pSVar9[(int)uVar21] = local_48._current;
						}
						else {
							pSVar8.AddWithResize(local_48._current);
						}
					}
				} while (pIVar20 != g_data_07556710);
				piVar16 = il2cpp_vm_Object_Unbox(local_48._current);
				iVar5 = *piVar16;
				pSVar7 = (Dictionary<int, object>)MapLoader.IdToMapObject;
				if (pSVar7 == null) {
					throw new NullReferenceException();
				}
				bVar11 = pSVar7.TryGetValue(iVar5, (object*)&local_58);
			} while (!bVar11);
			if (__this_03 == null) {
				throw new NullReferenceException();
			}
			pSVar8 = __this_03.List;
			pCVar17 = this.GetOrCreateMapObjectBuiltin(local_58);
			if (pSVar8 != null) {
				piVar16 = &pSVar8._version;
				*piVar16 = *piVar16 + 1;
				pSVar9 = pSVar8._items;
				if (pSVar9 != null) {
					uVar21 = pSVar8._size;
					if (uVar21 < (uint)pSVar9.Length) {
						pSVar8._size = uVar21 + 1;
						pSVar9[(int)uVar21] = (object)pCVar17;
					}
					else {
						pSVar8.AddWithResize((object)pCVar17);
					}
					goto label_05b6d761;
				}
			}
			throw new NullReferenceException();
		}
	label_05b6d923: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003CBA")]
	[Address(RVA = "0x5A879A0", Offset = "0x5A869A0", VA = "0x5A879A0")]
	private static InspectorSettingMetadata CreateInspectorMetadata(CustomLogicAssignmentExpressionAst assignment)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$CreateInspectorMetadata): 26 lines keep C-only constructs
		float val1;
		List<CustomLogicDecorator> __this;
		List<object> pSVar1;
		System_Collections_Generic_IEnumerable_TSource__o source;
		bool bVar2;
		bool bVar3;
		InspectorSettingMetadata __this_00;
		String pSVar4;
		object pIVar5;
		Func<object, string> __this_01;
		System_Collections_Generic_IEnumerable_TResult__o source_00;
		List<string> pSVar6;
		object pIVar7;
		Il2CppClass pIVar8;
		Exception __this_02;
		MethodInfo lastManagedFrame;
		byte bVar9;
		List<string>* targetAddress;
		float fVar10;
		float val2;
		System_Collections_Generic_List_Enumerator_object__o local_88;
		byte[] local_70 = new byte[16];
		object local_60;
		String* local_58;
		String* local_50;
		List<string>* local_48;
		String* local_40;
		InspectorSettingMetadata local_38;

		local_88._list = null;
		local_88._index = 0;
		local_88._version = 0;
		local_88._current = null;
		__this_00 = new InspectorSettingMetadata();
		if (assignment != null) {
			__this = assignment.Decorators;
			if (__this == null) {
				throw new NullReferenceException();
			}
			local_70.GetEnumerator((List<object>)__this);
			local_88._current = local_60;
			local_88._list = (List<T>)local_70._0_8_;
			local_88._index = local_70._8_4_;
			local_88._version = local_70._12_4_;
			local_70._0_8_ = null;
			local_50 = &__this_00.GroupId;
			local_58 = &__this_00.GroupHeader;
			local_40 = &__this_00.Header;
			targetAddress = &__this_00.Dropbox;
			local_38 = &__this_00.fields;
			local_70._8_8_ = &local_88;
			local_48 = targetAddress;
	label_05b87b70: ;
			bVar2 = local_88.MoveNext();
			pIVar5 = local_88._current;
			if (bVar2) {
				if (local_88._current == null) {
					throw new NullReferenceException();
				}
				if (local_88._current[1].klass == null) {
					throw new NullReferenceException();
				}
				pSVar4 = local_88._current[1].klass.ToLowerInvariant();
				bVar2 = (pSVar4 == "tooltip");
				if (bVar2) {
					pSVar1 = pIVar5[1].monitor;
					if (pSVar1 == null) {
						throw new NullReferenceException();
					}
					if (pSVar1._size == 1) {
						pIVar5 = pSVar1.get_Item(0);
						pSVar4 = Convert.ToString(pIVar5);
						if (__this_00 == null) {
							throw new NullReferenceException();
						}
						local_38.Tooltip = pSVar4;
						goto label_05b87b70;
					}
				}
				bVar2 = (pSVar4 == "dropbox");
				if (bVar2) {
					source = pIVar5[1].monitor;
					__this_01 = new Func<object, string>(null, (intptr_t)MethodInfo_System_Convert_ToString);
					source_00 = Enumerable.Select<object, string>(source, (System_Func_TSource__TResult__o)__this_01);
					pSVar6 = (List<string>)Enumerable.ToList<string>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					*targetAddress = pSVar6;
					goto label_05b87b70;
				}
				bVar2 = (pSVar4 == "header");
				if (bVar2) {
					pSVar1 = pIVar5[1].monitor;
					if (pSVar1 == null) {
						throw new NullReferenceException();
					}
					if (pSVar1._size == 1) {
						pIVar5 = pSVar1.get_Item(0);
						pSVar4 = Convert.ToString(pIVar5);
						if (__this_00 == null) {
							throw new NullReferenceException();
						}
						*local_40 = pSVar4;
						goto label_05b87b70;
					}
				}
				bVar2 = (pSVar4 == "group");
				if (bVar2) {
					pSVar1 = pIVar5[1].monitor;
					if (pSVar1 == null) {
						throw new NullReferenceException();
					}
					if (pSVar1._size == 2) {
						pIVar7 = pSVar1.get_Item(0);
						pSVar4 = Convert.ToString(pIVar7);
						if (__this_00 == null) {
							throw new NullReferenceException();
						}
						*local_50 = pSVar4;
						if (pIVar5[1].monitor == null) {
							throw new NullReferenceException();
						}
						pIVar5 = pIVar5[1].monitor.get_Item(1);
						pSVar4 = Convert.ToString(pIVar5);
						*local_58 = pSVar4;
						goto label_05b87b70;
					}
				}
				bVar2 = (pSVar4 == "clamp");
				if (!bVar2) {
					bVar2 = (pSVar4 == "slider");
					if (bVar2) goto label_05b87e40;
	label_05b87e53: ;
					bVar2 = (pSVar4 == "mapobject");
					if (bVar2) {
						if (pIVar5[1].monitor == null) {
							throw new NullReferenceException();
						}
						if (*(int)((long)pIVar5[1].monitor + 0x18) == 0) {
							if (__this_00 == null) {
								throw new NullReferenceException();
							}
							__this_00.MapObject = true;
							goto label_05b87b70;
						}
					}
					bVar2 = (pSVar4 == "mapobjectlist");
					if (bVar2) {
						if (pIVar5[1].monitor == null) {
							throw new NullReferenceException();
						}
						if (*(int)((long)pIVar5[1].monitor + 0x18) == 0) {
							if (__this_00 == null) {
								throw new NullReferenceException();
							}
							__this_00.MapObjectList = true;
						}
					}
					goto label_05b87b70;
				}
	label_05b87e40: ;
				pSVar1 = pIVar5[1].monitor;
				if (pSVar1 == null) {
					throw new NullReferenceException();
				}
				if (pSVar1._size < 2) goto label_05b87e53;
				pIVar7 = pSVar1.get_Item(0);
				fVar10 = Convert.ToSingle(pIVar7);
				if (pIVar5[1].monitor == null) {
					throw new NullReferenceException();
				}
				pIVar7 = pIVar5[1].monitor.get_Item(1);
				val2 = Convert.ToSingle(pIVar7);
				if (val2 < fVar10) {
					pIVar8 = pIVar5[1].klass;
					pSVar4 = il2cpp_codegen_get_runtime_metadata(&" minimum cannot exceed maximum");
					pSVar4 = String.Concat((String)pIVar8, pSVar4);
					pIVar8 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
					__this_02 = (Exception)il2cpp_codegen_object_new(pIVar8);
					__this_02 = new Exception(pSVar4);
					lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_CreateInspectorMetadata);
					throw (object)__this_02;
				}
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				if ((__this_00.HasClamp == false) && (__this_00.HasSlider == false)) {
					__this_00.Min = fVar10;
					__this_00.Max = val2;
					bVar9 = 0;
				}
				else {
					val1 = __this_00.Min;
					fVar10 = Math.Max(val1, fVar10);
					__this_00.Min = fVar10;
					fVar10 = Math.Min(__this_00.Max, val2);
					__this_00.Max = fVar10;
					bVar9 = __this_00.HasClamp;
				}
				bVar2 = (pSVar4 == "clamp");
				__this_00.HasClamp = (bool)(bVar9 | bVar2);
				bVar2 = __this_00.HasSlider;
				bVar3 = (pSVar4 == "slider");
				__this_00.HasSlider = (bool)(bVar2 | bVar3);
				bVar2 = (pSVar4 == "slider");
				targetAddress = local_48;
				if (bVar2) {
					pSVar1 = pIVar5[1].monitor;
					if (pSVar1 == null) {
						throw new NullReferenceException();
					}
					if (pSVar1._size == 3) {
						pIVar5 = pSVar1.get_Item(2);
						fVar10 = Convert.ToSingle(pIVar5);
						__this_00.SliderInterval = fVar10;
					}
				}
				goto label_05b87b70;
			}
			local_88.Dispose();
		}
		return __this_00;
	}

	[Token(Token = "0x6003CBB")]
	[Address(RVA = "0x5A88250", Offset = "0x5A87250", VA = "0x5A88250")]
	public List<string> GetComponentNames()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$GetComponentNames): 15 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		CustomLogicStartAst pCVar3;
		Dictionary<object, object> pSVar4;
		CustomLogicToken pCVar5;
		object obj;
		String[] pSVar6;
		object pIVar7;
		bool bVar9;
		List<string> __this_00;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_01;
		CustomLogicClassDefinitionAst pCVar10;
		int piVar11;
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_68;
		byte[] local_48 = new byte[16];
		String local_38;

		local_68._dictionary = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._currentKey = null;
		__this_00 = new List<string>();
		pCVar3 = this._start;
		if ((pCVar3 != null) &&(pSVar4 = (Dictionary<object, object>)pCVar3.Classes, pSVar4 != null)) {
			__this_01 = pSVar4.Keys;
			if (__this_01 != null) {
				local_48.GetEnumerator(__this_01);
				local_68._currentKey = (object)local_38;
				local_68._dictionary = (Dictionary<TKey, TValue>)local_48._0_8_;
				local_68._index = local_48._8_4_;
				local_68._version = local_48._12_4_;
				local_48._0_8_ = null;
				local_48._8_8_ = &local_68;
				if (__this_00 == null) {
					do {
						bVar9 = local_68.MoveNext();
						if (!bVar9) goto label_05b8853f;
						pCVar3 = this._start;
						if (pCVar3 == null) goto label_05b8857b;
						pSVar4 = (Dictionary<object, object>)pCVar3.Classes;
						if (pSVar4 == null) goto label_05b88580;
						pCVar10 = pSVar4.get_Item(local_68._currentKey);
						if (pCVar10 == null) goto label_05b8856c;
						pCVar5 = pCVar10.Token;
						if (pCVar5 == null) goto label_05b88576;
						pIVar7 = pCVar5.Value;
						if (pIVar7 == null) goto label_05b88567;
						if ((pIVar7.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) goto label_05b88571;
						piVar11 = il2cpp_vm_Object_Unbox(pIVar7);
					} while (*piVar11 != 0);
	label_05b8853a: ;
					throw new NullReferenceException();
				}
				do {
					do {
						bVar9 = local_68.MoveNext();
						pIVar7 = local_68._currentKey;
						if (!bVar9) {
	label_05b8853f: ;
							local_68.Dispose();
							return __this_00;
						}
						pCVar3 = this._start;
						if (pCVar3 == null) {
	label_05b8857b: ;
							throw new NullReferenceException();
						}
						pSVar4 = (Dictionary<object, object>)pCVar3.Classes;
						if (pSVar4 == null) {
	label_05b88580: ;
							throw new NullReferenceException();
						}
						pCVar10 = pSVar4.get_Item(local_68._currentKey);
						if (pCVar10 == null) {
	label_05b8856c: ;
							throw new NullReferenceException();
						}
						pCVar5 = pCVar10.Token;
						if (pCVar5 == null) {
	label_05b88576: ;
							throw new NullReferenceException();
						}
						obj = pCVar5.Value;
						if (obj == null) {
	label_05b88567: ;
							throw new NullReferenceException();
						}
						if ((obj.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
	label_05b88571: ;
							throw new InvalidCastException();
						}
						piVar11 = il2cpp_vm_Object_Unbox(obj);
					} while (*piVar11 != 0);
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar6 = __this_00._items;
					if (pSVar6 == null) goto label_05b8853a;
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pSVar6.Length) {
						__this_00._size = uVar2 + 1;
						pSVar6[(int)uVar2] = (String)pIVar7;
					}
					else {
						__this_00.AddWithResize(pIVar7);
					}
				} while(true);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003CBC")]
	[Address(RVA = "0x5A88610", Offset = "0x5A87610", VA = "0x5A88610")]
	public CustomLogicClassInstance GetStaticClass(string className)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$GetStaticClass): clean
		Dictionary<object, object> pSVar1;
		bool bVar2;
		CustomLogicClassInstance pCVar3;

		pSVar1 = (Dictionary<object, object>)this._staticClasses;
		if (pSVar1 != null) {
			bVar2 = pSVar1.ContainsKey((object)className);
			if (!bVar2) {
				return null;
			}
			pSVar1 = (Dictionary<object, object>)this._staticClasses;
			if (pSVar1 != null) {
				pCVar3 = pSVar1.get_Item((object)className);
				return pCVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003CBD")]
	[Address(RVA = "0x5A84720", Offset = "0x5A83720", VA = "0x5A84720")]
	public void CreateStaticClass(string className)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$CreateStaticClass): 1 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		CustomLogicStartAst pCVar2;
		Dictionary<string, CustomLogicSourceType> __this_00;
		bool bVar3;
		CustomLogicClassInstance value;
		int local_24;
		Nullable<CustomLogicSourceType> local_20;

		local_24 = 0;
		pSVar1 = (Dictionary<object, object>)this._staticClasses;
		if (pSVar1 != null) {
			bVar3 = pSVar1.ContainsKey((object)className);
			if (bVar3) {
				return;
			}
			local_20.hasValue = false;
			local_20._1_3_ = 0;
			local_20.value = 0;
			pCVar2 = this._start;
			if ((pCVar2 != null) &&(__this_00 = pCVar2.ClassNamespaces, __this_00 != null)) {
				bVar3 = __this_00.TryGetValue((object)className, ref local_24);
				if (bVar3) {
					local_20 = new Nullable<Int32Enum>(local_24);
				}
				value = this.CreateClassInstance(className, CustomLogicEvaluator.EmptyArgs, false, (Nullable<CustomLogicSourceType>)local_20);
				if (value != null) {
					value._Namespace_k__BackingField = local_20;
					pSVar1 = (Dictionary<object, object>)this._staticClasses;
					if (pSVar1 != null) {
						pSVar1.Add((object)className, (object)value);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003CC4")]
	[Address(RVA = "0x5A78210", Offset = "0x5A77210", VA = "0x5A78210")]
	public CustomLogicEvaluator(CustomLogicStartAst start, [Optional] CustomLogicCompiler compiler)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$.ctor): 9 lines keep C-only constructs
		Object[] pSVar1;
		List<object> __this_00;
		Dictionary<int, CustomLogicNetworkViewBuiltin> __this_01;
		Dictionary<string, CustomLogicNetworkViewBuiltin> __this_02;
		Dictionary<int, CustomLogicMapObjectBuiltin> __this_03;
		Dictionary<string, CustomLogicClassInstance> pSVar2;
		Dictionary<string, Dictionary<CustomLogicSourceType, CustomLogicClassInstance>> __this_04;
		Dictionary<string, List<CustomLogicClassInstance>> __this_05;
		Dictionary<int, Dictionary<string, float>> __this_06;
		List<CustomLogicError> __this_07;
		Stack<ValueTuple<string, string, Nullable<CustomLogicSourceType>>> __this_08;

		pSVar1 = (Object[])new object[3];
		this._networkCallback = pSVar1;
		__this_00 = new List<object>();
		this.emptyList = __this_00;
		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<int, CustomLogicNetworkViewBuiltin>));
		__this_01 = new Dictionary<int, object>();
		this.IdToNetworkView = __this_01;
		__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, CustomLogicNetworkViewBuiltin>));
		__this_02 = new Dictionary<object, object>();
		this.AddonToNetworkView = __this_02;
		__this_03 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<int, CustomLogicMapObjectBuiltin>));
		__this_03 = new Dictionary<int, object>();
		this.IdToMapObjectBuiltin = __this_03;
		pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, CustomLogicClassInstance>));
		pSVar2 = new Dictionary<object, object>();
		this._staticClasses = pSVar2;
		pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, CustomLogicClassInstance>));
		pSVar2 = new Dictionary<object, object>();
		this._addonClasses = pSVar2;
		__this_04 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, Dictionary<CustomLogicSourceType, CustomLogicClassInstance>>));
		__this_04 = new Dictionary<object, object>();
		this._namespacedStaticClasses = __this_04;
		__this_05 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, List<CustomLogicClassInstance>>));
		__this_05 = new Dictionary<object, object>();
		this._callbacks = __this_05;
		__this_06 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<int, Dictionary<string, float>>));
		__this_06 = new Dictionary<int, object>();
		this.PlayerIdToLastPropertyChanges = __this_06;
		this.ScoreboardProperty = "";
		this.ShowScoreboardStatus = true;
		this.DefaultShowKillScore = true;
		this.DefaultShowKillFeed = true;
		this.DefaultAddKillScore = true;
		this.ShowScoreboardLoadout = true;
		this.ForcedCharacterType = (String)**(ulong*)(g_data_07556758 + 0xb8);
		this.ForcedLoadout = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this_07 = new List<CustomLogicError>();
		this._CapturedErrors_k__BackingField = __this_07;
		__this_08 = il2cpp_codegen_object_new((Il2CppClass)typeof(Stack<ValueTuple<string, string, Nullable<CustomLogicSourceType>>>));
		__this_08 = new Stack<ValueTuple<object, object, Nullable<Int32Enum>>>();
		this._executionStack = __this_08;
		pSVar1 = (Object[])new object[2];
		this.Parameters3 = pSVar1;
		this.add = "__Add__";
		this.sub = "__Sub__";
		this.mul = "__Mul__";
		this.div = "__Div__";
		this.mod = "__Mod__";
		this.eq = "__Eq__";
		this.copy = "__Copy__";
		base();
		this._start = start;
		this._Compiler_k__BackingField = compiler;
		return;
	}

	[Token(Token = "0x6003CC5")]
	[Address(RVA = "0x5A88720", Offset = "0x5A87720", VA = "0x5A88720")]
	public void ClearCapturedErrors()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$ClearCapturedErrors): 2 lines keep C-only constructs
		int piVar1;
		int length;
		List<CustomLogicError> pSVar2;

		pSVar2 = this._CapturedErrors_k__BackingField;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		piVar1 = &pSVar2._version;
		*piVar1 = *piVar1 + 1;
		length = pSVar2._size;
		pSVar2._size = 0;
		if (length < 1) {
			return;
		}
		Array.Clear((Array)pSVar2._items, 0, length);
		return;
	}

	[Token(Token = "0x6003CC6")]
	[Address(RVA = "0x5A86C00", Offset = "0x5A85C00", VA = "0x5A86C00")]
	public CustomLogicClassInstance CreateClassInstance(string className, object[] parameterValues, bool init = true)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$CreateClassInstance): clean
		CustomLogicClassInstance pCVar1;

		pCVar1 = this.CreateClassInstance(className, parameterValues, init, (Nullable<CustomLogicSourceType>)0x0);
		return pCVar1;
	}

	[Token(Token = "0x6003CC7")]
	[Address(RVA = "0x5A84880", Offset = "0x5A83880", VA = "0x5A84880")]
	public CustomLogicClassInstance CreateClassInstance(string className, object[] parameterValues, bool init, CustomLogicSourceType? callerNamespace)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$CreateClassInstance): 11 lines keep C-only constructs
		CustomLogicStartAst pCVar1;
		Dictionary<object, object> pSVar2;
		Dictionary<string, CustomLogicSourceType> pSVar3;
		bool bVar4;
		int iVar5;
		BuiltinClassInstance pCVar6;
		CustomLogicClassInstance pCVar7;
		String pSVar8;
		String str2;
		Il2CppClass klass;
		Exception __this_00;
		MethodInfo lastManagedFrame;
		int iVar9;
		Nullable<CustomLogicSourceType> classNamespace;
		int local_44;
		Nullable<CustomLogicSourceType> local_40;
		int local_34;
		Nullable<CustomLogicSourceType> local_30;

		local_30 = callerNamespace;
		if (Il2CppMethodInitialized_075473cf == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_get_HasValue) ;
			Il2CppMethodInitialized_075473cf = true;
		}
		local_44 = 0;
		local_34 = 0;
		if (callerNamespace.hasValue == false) {
	label_05b849a6: ;
			bVar4 = CustomLogicBuiltinTypes.IsBuiltinType(className);
			if (bVar4) {
				bVar4 = CustomLogicBuiltinTypes.IsAbstract(className);
				if (!bVar4) {
					pCVar6 = CustomLogicBuiltinTypes.CreateClassInstance(className, parameterValues);
					return (CustomLogicClassInstance)pCVar6;
				}
				pSVar8 = il2cpp_codegen_get_runtime_metadata(&"Cannot instantiate abstract type ");
				pSVar8 = String.Concat(pSVar8, className);
	label_05b84b0d: ;
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this_00 = (Exception)il2cpp_codegen_object_new(klass);
				__this_00 = new Exception(pSVar8);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_CreateClassInstance);
				throw (object)__this_00;
			}
			pCVar1 = this._start;
			if ((pCVar1 == null) ||(pSVar2 = (Dictionary<object, object>)pCVar1.Classes, pSVar2 == null)) {
	label_05b84ac2: ;
				throw new NullReferenceException();
			}
			bVar4 = pSVar2.ContainsKey((object)className);
			if (!bVar4) {
				pSVar8 = il2cpp_codegen_get_runtime_metadata(&"Class ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" not found");
				pSVar8 = String.Concat(pSVar8, className, str2);
				goto label_05b84b0d;
			}
			local_40.hasValue = false;
			local_40._1_3_ = 0;
			local_40.value = 0;
			pCVar1 = this._start;
			if ((pCVar1 == null) ||(pSVar3 = pCVar1.ClassNamespaces, pSVar3 == null)) goto label_05b84ac2;
			bVar4 = pSVar3.TryGetValue((object)className, ref local_34);
			if (!bVar4) {
				classNamespace.hasValue = false;
				classNamespace._1_3_ = 0;
				classNamespace.value = 0;
				goto label_05b84aa3;
			}
			iVar9 = local_34;
		}
		else {
			pCVar1 = this._start;
			if ((pCVar1 == null) ||(pSVar2 = (Dictionary<object, object>)pCVar1.Classes, pSVar2 == null)) goto label_05b84ac2;
			bVar4 = pSVar2.ContainsKey((object)className);
			if (!bVar4) goto label_05b849a6;
			pCVar1 = this._start;
			if ((pCVar1 == null) ||(pSVar3 = pCVar1.ClassNamespaces, pSVar3 == null)) goto label_05b84ac2;
			bVar4 = pSVar3.TryGetValue((object)className, ref local_44);
			iVar9 = local_44;
			if ((!bVar4) ||(iVar5 = local_30.Value, iVar9 != iVar5)) goto label_05b849a6;
			local_40.hasValue = false;
			local_40._1_3_ = 0;
			local_40.value = 0;
			iVar9 = local_44;
		}
		local_40 = new Nullable<Int32Enum>(iVar9);
		classNamespace = local_40;
	label_05b84aa3: ;
		pCVar7 = this.CreateUserClassInstance(className, parameterValues, init, (Nullable<CustomLogicSourceType>)classNamespace);
		return pCVar7;
	}

	[Token(Token = "0x6003CC8")]
	[Address(RVA = "0x5A88780", Offset = "0x5A87780", VA = "0x5A88780")]
	private CustomLogicClassInstance CreateUserClassInstance(string className, object[] parameterValues, bool init, CustomLogicSourceType? classNamespace)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$CreateUserClassInstance): clean
		UserClassInstance __this_00;

		__this_00 = new UserClassInstance(className);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00._Namespace_k__BackingField = classNamespace;
		if (init) {
			this.RunAssignmentsClassInstance((CustomLogicClassInstance)__this_00);
			this.EvaluateMethod((CustomLogicClassInstance)__this_00, "Init", parameterValues, 0);
			__this_00.Inited = true;
		}
		return (CustomLogicClassInstance)__this_00;
	}

	[Token(Token = "0x6003CC9")]
	[Address(RVA = "0x5A84B50", Offset = "0x5A83B50", VA = "0x5A84B50")]
	public void RunAssignmentsClassInstance(CustomLogicClassInstance classInstance)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$RunAssignmentsClassInstance): 10 lines keep C-only constructs
		byte bVar1;
		CustomLogicStartAst pCVar2;
		Dictionary<object, object> pSVar3;
		List<CustomLogicAssignmentExpressionAst> __this_00;
		long plVar4;
		String a;
		CustomLogicMethodDefinitionAst ast;
		bool bVar5;
		object pIVar6;
		CustomLogicClassDefinitionAst pCVar7;
		Dictionary<string, object> __this_01;
		UserMethod __this_02;
		byte[] local_c8 = new byte[16];
		object local_b8;
		CustomLogicEvaluator local_b0;
		CustomLogicMethodDefinitionAst local_a8;
		object local_a0;
		byte[] local_98 = new byte[8];
		object local_88;
		CustomLogicClassDefinitionAst local_80;
		System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_78;
		KeyValuePair<object, object> local_48;

		local_b0 = this;
		local_98 = (byte[])0x0;
		local_88 = null;
		local_78._current.key = null;
		local_78._current.value = null;
		local_78._dictionary = null;
		local_78._version = 0;
		local_78._index = 0;
		local_78._getEnumeratorRetType = 0;
		local_78._36_4_ = 0;
		local_48.key = null;
		local_48.value = null;
		local_a0 = null;
		local_a8 = null;
		pCVar2 = local_b0._start;
		if ((pCVar2 != null) &&(classInstance != null)) {
			pSVar3 = (Dictionary<object, object>)pCVar2.Classes;
			pIVar6 = (object)classInstance.unknown();
			if (pSVar3 != null) {
				pCVar7 = pSVar3.get_Item(pIVar6);
				if (pCVar7 != null) {
					__this_00 = pCVar7.Assignments;
					local_80 = pCVar7;
					if (__this_00 != null) {
						local_c8.GetEnumerator((List<object>)__this_00);
						local_88 = local_b8;
						local_98 = (byte[])local_c8._0_8_;
						local_c8._0_8_ = null;
						local_c8._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_98;
						while(true) {
							bVar5 = local_98.MoveNext();
							pIVar6 = local_88;
							if (!bVar5) break;
							if (local_88 == null) {
								throw new NullReferenceException();
							}
							plVar4 = local_88[1].monitor;
							if (plVar4 == null) {
								throw new NullReferenceException();
							}
							bVar1 = (typeof(CustomLogicVariableExpressionAst)._2).typeHierarchyDepth;
							if ((*(byte)(*plVar4 + 0x130) < bVar1) ||(*(CustomLogicVariableExpressionAst*)(*(long)(*plVar4 + 200) + -8 + (ulong)bVar1 * 8) != typeof(CustomLogicVariableExpressionAst))) {
								throw new InvalidCastException();
							}
							a = (String)plVar4[3];
							__this_01 = il2cpp_codegen_object_new(typeof(Dictionary<string, object>));
							__this_01 = new Dictionary<object, object>();
							pIVar6 = local_b0.EvaluateExpression(classInstance, __this_01, pIVar6[2].monitor);
							pSVar3 = (Dictionary<object, object>)classInstance.Variables;
							if (pSVar3 == null) {
								throw new NullReferenceException();
							}
							pSVar3.set_Item((object)a, pIVar6);
							bVar5 = (a == "Type");
							if (bVar5) {
								classInstance._containsTypeOverride = true;
							}
						}
						local_98.Dispose();
						pSVar3 = (Dictionary<object, object>)local_80.Methods;
						if (pSVar3 != null) {
							local_78 = pSVar3.GetEnumerator();
							local_c8._0_8_ = null;
							local_c8._8_8_ = &local_78;
							while(true) {
								bVar5 = local_78.MoveNext();
								if (!bVar5) {
									local_78.Dispose();
									return;
								}
								local_48.key = local_78._current.key;
								local_48.value = local_78._current.value;
								local_48.Deconstruct(ref local_a0, (object*)&local_a8);
								pIVar6 = local_a0;
								ast = local_a8;
								__this_02 = new UserMethod(classInstance, ast);
								pSVar3 = (Dictionary<object, object>)classInstance.Variables;
								if (pSVar3 == null) break;
								pSVar3.set_Item(pIVar6, (object)__this_02);
							}
							throw new NullReferenceException();
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003CCA")]
	[Address(RVA = "0x5A89BA0", Offset = "0x5A88BA0", VA = "0x5A89BA0")]
	[IteratorStateMachine(typeof(_003CEvaluateBlockCoroutine_003Ed__87))]
	private IEnumerator EvaluateBlockCoroutine(CustomLogicClassInstance classInstance, Dictionary<string, object> localVariables, List<CustomLogicBaseAst> statements)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$EvaluateBlockCoroutine): 1 lines keep C-only constructs
		CustomLogicEvaluator.d__87<EvaluateBlockCoroutine> __this_00;

		__this_00 = il2cpp_codegen_object_new(typeof(CustomLogicEvaluator.d__87<EvaluateBlockCoroutine>));
		__this_00 = new CustomLogicEvaluator.d__87<EvaluateBlockCoroutine>(0);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		__this_00.classInstance = classInstance;
		__this_00.localVariables = localVariables;
		__this_00.statements = statements;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6003CCB")]
	[Address(RVA = "0x5A89C50", Offset = "0x5A88C50", VA = "0x5A89C50")]
	private bool EvaluateBlock(CustomLogicClassInstance classInstance, Dictionary<string, object> localVariables, List<CustomLogicBaseAst> statements, out object result)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$EvaluateBlock): 40 lines keep C-only constructs
		byte bVar1;
		CustomLogicToken pCVar2;
		Il2CppClass pIVar3;
		CustomLogicBaseExpressionAst pCVar4;
		CustomLogicBaseExpressionAst pCVar5;
		CustomLogicAssignmentExpressionAst value;
		bool bVar6;
		object pIVar7;
		int piVar8;
		sbyte pcVar9;
		CustomLogicAssignmentExpressionAst pCVar10;
		byte bVar11;
		MethodInfo method_00;
		int iVar12;
		CustomLogicAssignmentExpressionAst expression;
		CustomLogicAssignmentExpressionAst local_e0;
		bool local_d0;
		byte[] local_c0 = new byte[16];
		CustomLogicAssignmentExpressionAst local_b0;
		byte[] local_a8 = new byte[8];
		CustomLogicAssignmentExpressionAst local_98;
		byte[] local_88 = new byte[8];
		ulong uStack_80;
		CustomLogicAssignmentExpressionAst local_78;
		CustomLogicEvaluator local_70;
		object local_68;
		object local_60;
		object local_58;
		object local_50;
		Il2CppClass local_48;

		method_00 = (MethodInfo)result;
		local_88 = (byte[])0x0;
		uStack_80._0_4_ = 0;
		uStack_80._4_4_ = 0;
		local_78 = null;
		local_48 = null;
		local_50 = null;
		local_58 = null;
		local_60 = null;
		local_a8 = (byte[])0x0;
		local_98 = null;
		local_68 = null;
		*result = null;
		if (statements == null) {
			throw new NullReferenceException();
		}
		local_c0.GetEnumerator((List<object>)statements);
		local_78 = local_b0;
		local_88 = (byte[])local_c0._0_8_;
		uStack_80 = (byte)local_c0._8_8_;
		local_d0 = false;
		local_e0 = null;
		local_70 = this;
		do {
			bVar6 = local_88.MoveNext();
			expression = local_78;
			if (!bVar6) {
				iVar12 = 0x24;
	label_05b8a661: ;
				bVar6 = false;
	label_05b8a6c3: ;
				local_88.Dispose();
				if (iVar12 == 7) {
					bVar6 = local_d0;
				}
				return bVar6;
			}
			if (local_78 == null) {
				throw new NullReferenceException();
			}
			this._currentLineNumber = local_78.Line;
			pCVar10 = local_78.klass;
			bVar11 = (pCVar10._2).typeHierarchyDepth;
			bVar1 = (typeof(CustomLogicAssignmentExpressionAst)._2).typeHierarchyDepth;
			if ((bVar1 <= bVar11) &&((pCVar10._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicAssignmentExpressionAst))) {
				this.EvaluateAssignmentExpression(classInstance, localVariables, local_78);
				goto switchD_05b8a576_caseD_1;
			}
			bVar1 = (typeof(CustomLogicReturnExpressionAst)._2).typeHierarchyDepth;
			if ((bVar1 <= bVar11) &&((pCVar10._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicReturnExpressionAst))) {
				pIVar7 = this.EvaluateExpression(classInstance, localVariables, local_78.Left);
				*result = pIVar7;
	label_05b8a6b8: ;
				local_d0 = true;
				iVar12 = 7;
				bVar6 = true;
				goto label_05b8a6c3;
			}
			bVar1 = (typeof(CustomLogicBreakExpressionAst)._2).typeHierarchyDepth;
			if (((bVar1 <= bVar11) &&((pCVar10._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicBreakExpressionAst))) ||((bVar1 = (typeof(CustomLogicContinueExpressionAst)._2).typeHierarchyDepth, bVar1 <= bVar11 &&((pCVar10._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicContinueExpressionAst))))) {
				*result = (object)local_78;
				goto label_05b8a6b8;
			}
			bVar1 = (typeof(CustomLogicConditionalBlockAst)._2).typeHierarchyDepth;
			if ((bVar11 < bVar1) ||((pCVar10._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicConditionalBlockAst))) {
				bVar1 = (typeof(CustomLogicForBlockAst)._2).typeHierarchyDepth;
				if ((bVar1 <= bVar11) &&((pCVar10._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicForBlockAst))) {
					pIVar7 = this.EvaluateExpression(classInstance, localVariables, local_78.Right);
					if (pIVar7 == null) {
						throw new NullReferenceException();
					}
					bVar11 = (typeof(CustomLogicListBuiltin)._2).typeHierarchyDepth;
					if (((pIVar7.klass._2).typeHierarchyDepth < bVar11) ||((pIVar7.klass._2).typeHierarchy[(ulong)bVar11 - 1] !=typeof(CustomLogicListBuiltin))) {
						throw new InvalidCastException();
					}
					if (pIVar7[3].klass == null) {
						throw new NullReferenceException();
					}
					local_c0.GetEnumerator((List<object>)pIVar7[3].klass);
					local_98 = local_b0;
					local_a8 = (byte[])local_c0._0_8_;
					local_c0._0_8_ = null;
					local_c0._8_8_ = local_a8;
					if (localVariables == null) {
						bVar6 = local_a8.MoveNext();
						if (bVar6) {
							if (expression.Operator != null) {
								throw new NullReferenceException();
							}
	label_05b8a600: ;
							throw new NullReferenceException();
						}
						iVar12 = 5;
					}
					else {
						while(true) {
							do {
								bVar6 = local_a8.MoveNext();
								value = local_98;
								iVar12 = 5;
								if (!bVar6) goto label_05b8a442;
								pCVar2 = expression.Operator;
								if (pCVar2 == null) goto label_05b8a600;
								pIVar7 = pCVar2.Value;
								bVar6 = localVariables.ContainsKey(pIVar7);
								if (bVar6) {
									localVariables.set_Item(pIVar7, (object)value);
								}
								else {
									localVariables.Add(pIVar7, (object)value);
								}
								this = local_70;
								method_00 = (MethodInfo)&local_68;
								bVar6 = local_70.EvaluateBlock(classInstance, localVariables, (List<CustomLogicBaseAst>)expression.Left, (object*)method_00);
							} while (!bVar6);
							if (local_68 == null) break;
							pIVar3 = local_68.klass;
							bVar11 = (pIVar3._2).typeHierarchyDepth;
							bVar1 = (typeof(CustomLogicBreakExpressionAst)._2).typeHierarchyDepth;
							if ((bVar1 <= bVar11) &&((pIVar3._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicBreakExpressionAst))) goto label_05b8a442;
							bVar1 = (typeof(CustomLogicContinueExpressionAst)._2).typeHierarchyDepth;
							if ((bVar11 < bVar1) ||((pIVar3._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicContinueExpressionAst))) break;
						}
						*result = local_68;
						local_d0 = true;
						iVar12 = 7;
					}
	label_05b8a442: ;
					local_a8.Dispose() ;
					if (iVar12 == 5) {
						goto switchD_05b8a576_caseD_1;
					}
					if (iVar12 != 0) goto label_05b8a661;
					pCVar10 = expression.klass;
					bVar11 = (pCVar10._2).typeHierarchyDepth;
				}
				bVar1 = (typeof(CustomLogicBaseExpressionAst)._2).typeHierarchyDepth;
				if ((bVar1 <= bVar11) &&((pCVar10._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicBaseExpressionAst))) {
					this.EvaluateExpression(classInstance, localVariables, (CustomLogicBaseExpressionAst)expression);
				}
			}
			else {
				pCVar4 = local_78.Right;
				if (pCVar4 == null) {
					throw new NullReferenceException();
				}
				pCVar5 = (*(ulong)((sbyte)pCVar4 + 0x18));
				if (pCVar5 == null) {
					throw new NullReferenceException();
				}
				if ((((pCVar5._1).image)._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
					throw new InvalidCastException();
				}
				piVar8 = il2cpp_vm_Object_Unbox((object)pCVar5);
				if (*piVar8 == 0x2a) {
					pIVar7 = this.EvaluateExpression(classInstance, localVariables, (CustomLogicBaseExpressionAst)expression.Operator);
					if (pIVar7 == null) {
						throw new NullReferenceException();
					}
					if ((pIVar7.klass._1).element_class != *(Il2CppClass*)(g_data_075566f0 + 0x40)) {
						throw new InvalidCastException();
					}
					pcVar9 = il2cpp_vm_Object_Unbox(pIVar7);
					if (*pcVar9 == false) {
						local_e0 = (CustomLogicAssignmentExpressionAst)0x2;
						goto label_05b8a4df;
					}
					method_00 = (MethodInfo)&local_48;
					bVar6 = this.EvaluateBlock(classInstance, localVariables, (List<CustomLogicBaseAst>)expression.Left, (object*)method_00);
					local_e0 = (CustomLogicAssignmentExpressionAst)0x1;
					if (bVar6) {
						if (local_48 != null) {
							pIVar3 = (local_48._1).image;
							bVar11 = (pIVar3._2).typeHierarchyDepth;
							bVar1 = (typeof(CustomLogicBreakExpressionAst)._2).typeHierarchyDepth;
							if (((bVar1 <= bVar11) &&((pIVar3._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicBreakExpressionAst))) ||((bVar1 = (typeof(CustomLogicContinueExpressionAst)._2).typeHierarchyDepth, bVar1 <= bVar11 &&((pIVar3._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicContinueExpressionAst))))) {
								*result = (object)local_48;
								goto label_05b8a6b8;
							}
						}
						*result = (object)local_48;
	label_05b8a689: ;
						local_d0 = true;
						iVar12 = 7;
						bVar6 = false;
						goto label_05b8a6c3;
					}
				}
				else {
					pCVar4 = expression.Right;
					if (pCVar4 == null) {
						throw new NullReferenceException();
					}
					pCVar5 = (*(ulong)((sbyte)pCVar4 + 0x18));
					if (pCVar5 == null) {
						throw new NullReferenceException();
					}
					if ((((pCVar5._1).image)._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
						throw new InvalidCastException();
					}
					piVar8 = il2cpp_vm_Object_Unbox((object)pCVar5);
					if (*piVar8 == 0x2d) {
	label_05b8a2b0: ;
						do {
							pIVar7 = this.EvaluateExpression(classInstance, localVariables, (CustomLogicBaseExpressionAst)expression.Operator);
							if (pIVar7 == null) {
								throw new NullReferenceException();
							}
							if ((pIVar7.klass._1).element_class != *(Il2CppClass*)(g_data_075566f0 + 0x40)) {
								throw new InvalidCastException();
							}
							pcVar9 = il2cpp_vm_Object_Unbox(pIVar7);
							local_e0 = null;
							if (*pcVar9 == false) goto switchD_05b8a576_caseD_1;
							method_00 = (MethodInfo)&local_50;
							bVar6 = this.EvaluateBlock(classInstance, localVariables, (List<CustomLogicBaseAst>)expression.Left, (object*)method_00);
						} while (!bVar6);
						if (local_50 != null) {
							pIVar3 = local_50.klass;
							bVar11 = (pIVar3._2).typeHierarchyDepth;
							bVar1 = (typeof(CustomLogicBreakExpressionAst)._2).typeHierarchyDepth;
							if ((bVar1 <= bVar11) &&(method_00 = (MethodInfo)classInstance,(pIVar3._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicBreakExpressionAst))) goto switchD_05b8a576_caseD_1;
							bVar1 = (typeof(CustomLogicContinueExpressionAst)._2).typeHierarchyDepth;
							if ((bVar1 <= bVar11) &&((pIVar3._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicContinueExpressionAst))) goto label_05b8a2b0;
						}
						*result = local_50;
						goto label_05b8a689;
					}
					pCVar4 = expression.Right;
					if (pCVar4 == null) {
						throw new NullReferenceException();
					}
					pCVar5 = (*(ulong)((sbyte)pCVar4 + 0x18));
					if (pCVar5 == null) {
						throw new NullReferenceException();
					}
					if ((((pCVar5._1).image)._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
						throw new InvalidCastException();
					}
					piVar8 = il2cpp_vm_Object_Unbox((object)pCVar5);
					iVar12 = (int)local_e0;
					if (*piVar8 == 0x2b) {
						if ((iVar12 == 4) || (iVar12 == 2)) {
							method_00 = (MethodInfo)&local_58;
							bVar6 = this.EvaluateBlock(classInstance, localVariables, (List<CustomLogicBaseAst>)expression.Left, (object*)method_00);
							if (bVar6) {
								if (local_58 != null) {
									pIVar3 = local_58.klass;
									bVar11 = (pIVar3._2).typeHierarchyDepth;
									bVar1 = (typeof(CustomLogicBreakExpressionAst)._2).typeHierarchyDepth;
									if (((bVar1 <= bVar11) &&((pIVar3._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicBreakExpressionAst))) ||((bVar1 = (typeof(CustomLogicContinueExpressionAst)._2).typeHierarchyDepth, bVar1 <= bVar11 &&((pIVar3._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicContinueExpressionAst))))) {
										*result = local_58;
										goto label_05b8a6b8;
									}
								}
								*result = local_58;
								goto label_05b8a689;
							}
						}
						local_e0 = null;
	label_05b8a4df: ;
					}
					else {
						pCVar4 = expression.Right;
						if (pCVar4 == null) {
							throw new NullReferenceException();
						}
						pCVar5 = (*(ulong)((sbyte)pCVar4 + 0x18));
						if (pCVar5 == null) {
							throw new NullReferenceException();
						}
						if ((((pCVar5._1).image)._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
							throw new InvalidCastException();
						}
						piVar8 = il2cpp_vm_Object_Unbox((object)pCVar5);
						if (*piVar8 == 0x2c) {
							switch(iVar12) {
							case 1:
							case 3:
								break;
							case 2:
							case 4:
								pIVar7 = this.EvaluateExpression(classInstance, localVariables, (CustomLogicBaseExpressionAst)expression.Operator);
								if (pIVar7 == null) {
									throw new NullReferenceException();
								}
								if ((pIVar7.klass._1).element_class != *(Il2CppClass*)(g_data_075566f0 + 0x40)) {
									throw new InvalidCastException();
								}
								pcVar9 = il2cpp_vm_Object_Unbox(pIVar7);
								if (*pcVar9 == false) goto switchD_05b8a576_default;
								method_00 = (MethodInfo)&local_60;
								bVar6 = this.EvaluateBlock(classInstance, localVariables, (List<CustomLogicBaseAst>)expression.Left, (object*)method_00);
								local_e0 = (CustomLogicAssignmentExpressionAst)0x3;
								if (bVar6) {
									if (local_60 != null) {
										pIVar3 = local_60.klass;
										bVar11 = (pIVar3._2).typeHierarchyDepth;
										bVar1 = (typeof(CustomLogicBreakExpressionAst)._2).typeHierarchyDepth;
										if (((bVar1 <= bVar11) &&((pIVar3._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicBreakExpressionAst))) ||((bVar1 = (typeof(CustomLogicContinueExpressionAst)._2).typeHierarchyDepth, bVar1 <= bVar11 &&((pIVar3._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicContinueExpressionAst))))) {
											*result = local_60;
											goto label_05b8a6b8;
										}
									}
									*result = local_60;
									goto label_05b8a689;
								}
								break;
							default: ;
	switchD_05b8a576_default: ;
								local_e0 = (CustomLogicAssignmentExpressionAst)0x4;
								goto label_05b8a4df;
							}
						}
					}
				}
			}
	switchD_05b8a576_caseD_1: ;
			bVar11 = (typeof(CustomLogicConditionalBlockAst)._2).typeHierarchyDepth;
			if ((expression.klass._2).typeHierarchyDepth < bVar11) {
				expression = null;
			}
			else if ((expression.klass._2).typeHierarchy[(ulong)bVar11 - 1] !=typeof(CustomLogicConditionalBlockAst)) {
				expression = null;
			}
			if (expression == null) {
				local_e0 = null;
			}
		} while(true);
	}

	[Token(Token = "0x6003CCC")]
	[Address(RVA = "0x5A8A9E0", Offset = "0x5A899E0", VA = "0x5A8A9E0")]
	private void EvaluateAssignmentExpression(CustomLogicClassInstance classInstance, Dictionary<string, object> localVariables, CustomLogicAssignmentExpressionAst assignment)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$EvaluateAssignmentExpression): 29 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		int iVar3;
		CustomLogicToken pCVar4;
		CustomLogicBaseExpressionAst pCVar5;
		CustomLogicBaseExpressionAst pCVar6;
		Dictionary<object, object> pSVar7;
		bool bVar8;
		sbyte cVar9;
		int piVar10;
		CustomLogicClassInstance __this_00;
		object pIVar11;
		Il2CppClass pIVar12;
		String[] values;
		String message;
		Exception __this_01;
		MethodInfo lastManagedFrame;
		uint puVar13;
		String* metadataPointer;
		uint uVar14;
		CustomLogicClassInstance local_50;
		object local_38;

		if (Il2CppMethodInitialized_075473d4 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicClassInstantiateExpressionAst)) ;
			Il2CppMethodInitialized_075473d4 = true;
		}
		local_38 = null;
		if (((assignment == null) ||(pCVar4 = assignment.Operator, pCVar4 == null)) ||(pIVar11 = pCVar4.Value, pIVar11 == null)) goto label_05b8af0d;
		if ((pIVar11.klass._1).element_class != (typeof(CustomLogicSymbol)._1).element_class) {
			throw new InvalidCastException();
		}
		piVar10 = il2cpp_vm_Object_Unbox(pIVar11);
		iVar3 = *piVar10;
		local_50 = (CustomLogicClassInstance)this.EvaluateExpression(classInstance, localVariables, assignment.Right);
		pCVar5 = assignment.Right;
		if (pCVar5 == null) {
	label_05b8ab15: ;
			if (local_50 == null) {
				local_50 = null;
				goto label_05b8ab8c;
			}
			bVar1 = (typeof(CustomLogicClassInstance)._2).typeHierarchyDepth;
			if (((local_50.klass._2).typeHierarchyDepth < bVar1) ||((local_50.klass._2).typeHierarchy[(long)&((MethodInfo)(ulong)bVar1)[-1].field_0x57] !=typeof(CustomLogicClassInstance))) goto label_05b8ab8c;
			bVar8 = local_50.HasVariable(this.copy);
			if (bVar8) {
				local_50 = (CustomLogicClassInstance)this.EvaluateMethod(local_50, this.copy, null, this._currentLineNumber);
				pCVar5 = assignment.Left;
			}
			else {
				pCVar5 = assignment.Left;
			}
		}
		else {
			pCVar6 = pCVar5.klass;
			bVar1 = (typeof(CustomLogicClassInstantiateExpressionAst)._2).typeHierarchyDepth;
			if (((pCVar6._2).typeHierarchyDepth < bVar1) ||((pCVar6._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicClassInstantiateExpressionAst))) goto label_05b8ab15;
	label_05b8ab8c: ;
			pCVar5 = assignment.Left;
		}
		if (pCVar5 == null) {
			return;
		}
		uVar14 = iVar3 - 0x19;
		pCVar6 = pCVar5.klass;
		bVar1 = (pCVar6._2).typeHierarchyDepth;
		bVar2 = ((typeof(CustomLogicVariableExpressionAst))._2).typeHierarchyDepth;
		if ((bVar2 <= bVar1) &&((pCVar6._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CustomLogicVariableExpressionAst))) {
			pCVar6 = (*(ulong)((sbyte)pCVar5 + 0x18));
			if (uVar14 < 0xfffffffc) {
				if (localVariables != null) {
	label_05b8ace6: ;
					localVariables.set_Item((object)pCVar6, (object)local_50);
					return;
				}
			}
			else if (localVariables != null) {
				pIVar11 = localVariables.get_Item((object)pCVar6);
				switch(iVar3) {
				case 0x15:
					local_50 = (CustomLogicClassInstance)this.AddValues(pIVar11, (object)local_50);
					break;
				case 0x16:
					local_50 = (CustomLogicClassInstance)this.SubtractValues(pIVar11, (object)local_50);
					break;
				case 0x17:
					local_50 = (CustomLogicClassInstance)this.MultiplyValues(pIVar11, (object)local_50);
					break;
				case 0x18:
					local_50 = (CustomLogicClassInstance)this.DivideValues(pIVar11, (object)local_50);
					break;
				default: ;
				}
				goto label_05b8ace6;
			}
			goto label_05b8af0d;
		}
		bVar2 = ((typeof(CustomLogicFieldExpressionAst))._2).typeHierarchyDepth;
		if (bVar1 < bVar2) {
			return;
		}
		if ((pCVar6._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicFieldExpressionAst)) {
			return;
		}
		pCVar6 = (*(ulong)((sbyte)pCVar5 + 0x18));
		__this_00 = (CustomLogicClassInstance)this.EvaluateExpression(classInstance, localVariables, (*(ulong)((sbyte)pCVar5 + 0x20)));
		if (__this_00 == null) goto label_05b8af0d;
		bVar1 = (typeof(CustomLogicClassInstance)._2).typeHierarchyDepth;
		pIVar12 = (Il2CppClass)(ulong)bVar1;
		if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(long)((long)&pIVar12[-1].vtable[0xfe].method + 7)] !=typeof(CustomLogicClassInstance))) {
			throw new InvalidCastException();
		}
		if (0xfffffffb < uVar14) {
			pIVar11 = __this_00.GetVariable((String)pCVar6) ;
			if (pIVar11 == null) {
				pIVar11 = null;
			}
			else {
				pIVar12 = pIVar11.klass;
				bVar1 = (typeof(CLPropertyBinding)._2).typeHierarchyDepth;
				if ((bVar1 <= (pIVar12._2).typeHierarchyDepth) &&((pIVar12._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CLPropertyBinding))) {
					pIVar11 = (object)(*pIVar12.vtable[5].methodPtr)(pIVar11,__this_00,pIVar12.vtable[5].method) ;
				}
			}
			puVar13 = &switchD_05b8ad98::switchdataD_010a59dc;
			switch(iVar3) {
			case 0x15:
				local_50 = (CustomLogicClassInstance)this.AddValues(pIVar11, (object)local_50);
				break;
			case 0x16:
				local_50 = (CustomLogicClassInstance)this.SubtractValues(pIVar11, (object)local_50);
				break;
			case 0x17:
				local_50 = (CustomLogicClassInstance)this.MultiplyValues(pIVar11, (object)local_50);
				break;
			case 0x18:
				local_50 = (CustomLogicClassInstance)this.DivideValues(pIVar11, (object)local_50);
				break;
			default: ;
				goto switchD_05b8ad98_default;
			}
			pIVar12 = (Il2CppClass)puVar13;
		}
	switchD_05b8ad98_default: ;
		bVar8 = __this_00.TryGetVariable((String)pCVar6, ref local_38);
		pIVar11 = local_38;
		if (bVar8) {
			if (local_38 != null) {
				pIVar12 = local_38.klass;
				bVar1 = (pIVar12._2).typeHierarchyDepth;
				bVar2 = (typeof(CLPropertyBinding)._2).typeHierarchyDepth;
				if ((bVar2 <= bVar1) &&((pIVar12._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CLPropertyBinding))) {
					cVar9 = (*pIVar12.vtable[4].methodPtr)(local_38,pIVar12.vtable[4].method);
					if (cVar9 == false) {
						pIVar12 = pIVar11.klass;
						(*pIVar12.vtable[6].methodPtr)(pIVar11,__this_00,local_50,pIVar12.vtable[6].method);
						return;
					}
					pIVar12 = il2cpp_codegen_get_runtime_metadata(&typeof(string[]));
					values = (String[])new pIVar12[5];
					metadataPointer = &"Cannot reassign read-only field '";
	label_05b8af77: ;
					pIVar11 = il2cpp_codegen_get_runtime_metadata(metadataPointer);
					il2cpp_codegen_array_set_ref((Array)values, 0, pIVar11);
					pIVar11 = (object)__this_00.unknown();
					il2cpp_codegen_array_set_ref((Array)values, 1, pIVar11);
					pIVar11 = il2cpp_codegen_get_runtime_metadata(&".");
					il2cpp_codegen_array_set_ref((Array)values, 2, pIVar11);
					il2cpp_codegen_array_set_ref((Array)values, 3, (object)pCVar6);
					pIVar11 = il2cpp_codegen_get_runtime_metadata(&"'");
					il2cpp_codegen_array_set_ref((Array)values, 4, pIVar11);
					message = String.Concat(values);
					pIVar12 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
					__this_01 = (Exception)il2cpp_codegen_object_new(pIVar12);
					__this_01 = new Exception(message);
					lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_EvaluateAssignmentExpression);
					throw (object)__this_01;
				}
				bVar2 = (typeof(CLMethodBinding)._2).typeHierarchyDepth;
				if ((bVar2 <= bVar1) &&((pIVar12._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(CLMethodBinding) )) {
					pIVar12 = il2cpp_codegen_get_runtime_metadata(&typeof(string[]));
					values = (String[])new pIVar12[5];
					metadataPointer = &"Cannot reassign built-in method '";
					goto label_05b8af77;
				}
			}
			pSVar7 = (Dictionary<object, object>)__this_00.Variables;
			if (pSVar7 == null) {
	label_05b8af0d: ;
				throw new NullReferenceException();
			}
			pSVar7.set_Item((object)pCVar6, (object)local_50);
		}
		else {
			pSVar7 = (Dictionary<object, object>)__this_00.Variables;
			if (pSVar7 == null) goto label_05b8af0d;
			pSVar7.Add((object)pCVar6, (object)local_50);
		}
		return;
	}

	[Token(Token = "0x6003CCD")]
	[Address(RVA = "0x5A6DB20", Offset = "0x5A6CB20", VA = "0x5A6DB20")]
	public bool HasMethod(CustomLogicClassInstance classInstance, string methodName)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$HasMethod): clean
		CustomLogicStartAst pCVar1;
		Dictionary<object, object> pSVar2;
		bool bVar3;
		object key;
		CustomLogicClassDefinitionAst pCVar4;

		pCVar1 = this._start;
		if ((pCVar1 != null) &&(classInstance != null)) {
			pSVar2 = (Dictionary<object, object>)pCVar1.Classes;
			key = (object)classInstance.unknown();
			if (pSVar2 != null) {
				pCVar4 = pSVar2.get_Item(key);
				if ((pCVar4 != null) &&(pSVar2 = (Dictionary<object, object>)pCVar4.Methods, pSVar2 != null)) {
					bVar3 = pSVar2.ContainsKey((object)methodName);
					return bVar3;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003CCE")]
	[Address(RVA = "0x5A6DC80", Offset = "0x5A6CC80", VA = "0x5A6DC80")]
	public object EvaluateMethod(CustomLogicClassInstance classInstance, string methodName, [Optional] object[] parameterValues, int callerLineNumber = 0)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$EvaluateMethod): 25 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		int iVar3;
		CustomLogicClassInstance pCVar4;
		CustomLogicStartAst pCVar5;
		List<string> pSVar6;
		CustomLogicManager __this_00;
		List<CustomLogicError> __this_01;
		Nullable<CustomLogicSourceType> SVar7;
		CustomLogicError[] pCVar8;
		Stack<ValueTuple<string, string, Nullable<CustomLogicSourceType>>> pSVar9;
		System_ValueTuple_object__object__Nullable_Int32Enum___o item;
		bool bVar10;
		uint uVar11;
		object pIVar12;
		CustomLogicClassDefinitionAst pCVar13;
		CustomLogicMethodDefinitionAst pCVar14;
		Dictionary<string, object> __this_02;
		String pSVar15;
		IEnumerator routine;
		Coroutine pUVar16;
		MethodInfo pMVar17;
		String pSVar18;
		CustomLogicError __this_03;
		Dictionary<object, object> pSVar19;
		String pSVar20;
		Il2CppClass pIVar21;
		Exception __this_04;
		ulong uVar22;
		CustomLogicEvaluator __this_05;
		uint in_register_00000084;
		Object[] local_78;
		CustomLogicEvaluator local_70;
		CustomLogicEvaluator* local_60;
		Coroutine local_58;
		object local_50;
		System_ValueTuple_object__object__Nullable_Int32Enum___o local_48;

		pMVar17 = (MethodInfo)CONCAT44(in_register_00000084, callerLineNumber);
		local_70 = this;
		local_50 = null;
		local_58 = null;
		this._currentLineNumber = callerLineNumber;
		local_78 = parameterValues;
		if (parameterValues == null) {
			local_78 = CustomLogicEvaluator.EmptyArgs;
		}
		if (classInstance == null) {
			throw new NullReferenceException();
		}
		bVar10 = classInstance.TryGetVariable(methodName, ref local_50);
		if ((bVar10) && (local_50 != null)) {
			pIVar21 = local_50.klass;
			bVar2 = (typeof(CLMethodBinding)._2).typeHierarchyDepth;
			if ((bVar2 <= (pIVar21._2).typeHierarchyDepth) &&((pIVar21._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(CLMethodBinding))) {
				pIVar12 = (object)(*pIVar21.vtable[4].methodPtr)(local_50,classInstance,local_78,pIVar21.vtable[4].method);
				return pIVar12;
			}
		}
		pCVar4 = classInstance.klass;
		bVar2 = (typeof(BuiltinClassInstance)._2).typeHierarchyDepth;
		if ((bVar2 <= (pCVar4._2).typeHierarchyDepth) &&((pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(BuiltinClassInstance) )) {
			pSVar15 = (String)classInstance.unknown();
			pSVar20 = il2cpp_codegen_get_runtime_metadata(&"Method ");
			pSVar18 = il2cpp_codegen_get_runtime_metadata(&" not found in class ");
			pSVar15 = String.Concat(pSVar20, methodName, pSVar18, pSVar15);
			pIVar21 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_04 = (Exception)il2cpp_codegen_object_new(pIVar21);
			__this_04 = new Exception(pSVar15);
			pMVar17 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_EvaluateMethod) ;
			throw (object)__this_04;
		}
		pSVar19 = (Dictionary<object, object>)classInstance.Variables;
		if (pSVar19 == null) {
			throw new NullReferenceException();
		}
		bVar10 = pSVar19.ContainsKey((object)methodName);
		if (bVar10) {
			pSVar19 = (Dictionary<object, object>)classInstance.Variables;
			if (pSVar19 == null) {
				throw new NullReferenceException();
			}
			pIVar12 = pSVar19.get_Item((object)methodName);
			if (pIVar12 != null) {
				bVar2 = (typeof(UserMethod)._2).typeHierarchyDepth;
				if ((bVar2 <= (pIVar12.klass._2).typeHierarchyDepth) &&((pIVar12.klass._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(UserMethod))) {
					classInstance = (CustomLogicClassInstance)pIVar12[1].klass;
					pCVar14 = pIVar12[1].monitor;
					goto joined_r0x05b6e03f;
				}
			}
		}
		pCVar5 = local_70._start;
		if (pCVar5 == null) {
			throw new NullReferenceException();
		}
		pSVar19 = (Dictionary<object, object>)pCVar5.Classes;
		pIVar12 = (object)classInstance.unknown();
		if (pSVar19 == null) {
			throw new NullReferenceException();
		}
		pCVar13 = pSVar19.get_Item(pIVar12);
		if (pCVar13 == null) {
			throw new NullReferenceException();
		}
		pSVar19 = (Dictionary<object, object>)pCVar13.Methods;
		if (pSVar19 == null) {
			throw new NullReferenceException();
		}
		bVar10 = pSVar19.ContainsKey((object)methodName);
		if (!bVar10) {
			pMVar17 = (MethodInfo)classInstance.unknown();
			pSVar15 = String.Concat("Method ", methodName, " not found in class ", (String)pMVar17);
			if (local_70._CaptureErrors_k__BackingField == false) {
				__this_05 = (CustomLogic_CustomLogicEvaluator_o *)"Custom logic runtime error: ";
				pSVar15 = String.Concat("Custom logic runtime error: ", pSVar15);
				__this_05.LogCustomLogicError(pSVar15, true);
				return null;
			}
			__this_01 = local_70._CapturedErrors_k__BackingField;
			pSVar18 = (String)classInstance.unknown();
			SVar7 = classInstance._Namespace_k__BackingField;
			pSVar20 = "";
			__this_03 = new CustomLogicError();
			__this_03._Message_k__BackingField = pSVar15;
			__this_03._ClassName_k__BackingField = pSVar18;
			__this_03._MethodName_k__BackingField = methodName;
			__this_03._LineNumber_k__BackingField = 0;
			__this_03._FormattedLineNumber_k__BackingField = pSVar20;
			__this_03._Namespace_k__BackingField = SVar7;
			pMVar17 = MethodInfo_System_Collections_Generic_List_CustomLogicError_Add;
			if (__this_01 != null) {
				piVar1 = &__this_01._version;
				*piVar1 = *piVar1 + 1;
				pCVar8 = __this_01._items;
				if (pCVar8 != null) {
					uVar11 = __this_01._size;
					if (uVar11 < (uint)pCVar8.Length) {
						__this_01._size = uVar11 + 1;
						pCVar8[(int)uVar11] = __this_03;
						return null;
					}
					__this_01.AddWithResize((object)__this_03);
					return null;
				}
			}
			throw new NullReferenceException();
		}
		pCVar5 = local_70._start;
		if (pCVar5 == null) {
			throw new NullReferenceException();
		}
		pSVar19 = (Dictionary<object, object>)pCVar5.Classes;
		pIVar12 = (object)classInstance.unknown();
		if (pSVar19 == null) {
			throw new NullReferenceException();
		}
		pCVar13 = pSVar19.get_Item(pIVar12);
		if (pCVar13 == null) {
			throw new NullReferenceException();
		}
		pSVar19 = (Dictionary<object, object>)pCVar13.Methods;
		if (pSVar19 == null) {
			throw new NullReferenceException();
		}
		pCVar14 = pSVar19.get_Item((object)methodName);
	joined_r0x05b6e03f: ;
		if (pCVar14 == null) {
			throw new NullReferenceException();
		}
		if (pCVar14.Coroutine == false) {
			local_70._currentLineNumber = pCVar14.Line;
			if (local_70._CaptureErrors_k__BackingField != false) {
				if ((Il2CppClass)classInstance == null) {
					throw new NullReferenceException();
				}
				pSVar9 = local_70._executionStack;
				pCVar4 = (((Il2CppClass)classInstance)._1).image;
				pIVar12 = (object)classInstance.unknown();
				local_48.Item1 = null;
				local_48.Item2 = null;
				local_48.Item3.hasValue = false;
				local_48.Item3._1_3_ = 0;
				local_48.Item3.value = 0;
				local_48 = new ValueTuple<object, object, Nullable<Int32Enum>>(pIVar12, (object)methodName, (System_Nullable_Int32Enum__o)((Nullable<CustomLogicSourceType>)((long)&(((Il2CppClass)classInstance)._1).byval_arg.data + 4)).fields);
				if (pSVar9 == null) {
					throw new NullReferenceException();
				}
				item.Item2 = local_48.Item2;
				item.Item1 = local_48.Item1;
				item.Item3 = local_48.Item3;
				pSVar9.Push(item);
			}
			local_60 = &local_70;
			if ((typeof(CollectionPool<Dictionary<string, object>, KeyValuePair<string, object>>)._2). cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init((Il2CppClass)typeof(CollectionPool<Dictionary<string, object>, KeyValuePair<string, object>>)) ;
			}
			pSVar19 = (Dictionary<object, object>)CollectionPool<object, KeyValuePair<object, object>>.Get();
			if (local_78 == null) {
				throw new NullReferenceException();
			}
			pSVar6 = pCVar14.ParameterNames;
			if (pSVar6 == null) {
				throw new NullReferenceException();
			}
			iVar3 = pSVar6._size;
			uVar11 = Math.Min((int32_t)local_78.Length, iVar3);
			if (0 < (int)uVar11) {
				if (pSVar19 == null) {
					pSVar6 = pCVar14.ParameterNames;
					if (pSVar6 != null) {
						pSVar6.get_Item(0);
						if ((int)local_78.Length != 0) {
							throw new NullReferenceException();
						}
	label_05b6e9db: ;
						throw new IndexOutOfRangeException();
					}
	label_05b6e994: ;
					throw new NullReferenceException();
				}
				uVar22 = 0;
				do {
					pSVar6 = pCVar14.ParameterNames;
					if (pSVar6 == null) goto label_05b6e994;
					pSVar15 = pSVar6.get_Item((int32_t)uVar22) ;
					if ((uint)local_78.Length <= uVar22) goto label_05b6e9db;
					pSVar19.Add((object)pSVar15, local_78[uVar22]);
					uVar22 = uVar22 + 1;
				} while (uVar11 != uVar22);
			}
			local_70.EvaluateBlock(classInstance, (Dictionary<string, object>)pSVar19, pCVar14.Statements, (object*)&local_58);
			if ((typeof(CollectionPool<Dictionary<string, object>, KeyValuePair<string, object>>)._2). cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init((Il2CppClass)typeof(CollectionPool<Dictionary<string, object>, KeyValuePair<string, object>>)) ;
			}
			CollectionPool<object, KeyValuePair<object, object>>.Release((object)pSVar19);
			pUVar16 = local_58;
			if (local_70._CaptureErrors_k__BackingField == false) {
				return (object)local_58;
			}
			pSVar9 = local_70._executionStack;
			if (pSVar9 == null) {
				throw new NullReferenceException();
			}
			local_48 = pSVar9.Pop();
			return (object)pUVar16;
		}
		__this_02 = new Dictionary<string, object>();
		if (local_78 == null) {
			throw new NullReferenceException();
		}
		pSVar6 = pCVar14.ParameterNames;
		if (pSVar6 == null) {
			throw new NullReferenceException();
		}
		iVar3 = pSVar6._size;
		uVar11 = Math.Min((int32_t)local_78.Length, iVar3);
		if (0 < (int)uVar11) {
			if (__this_02 == null) {
				pSVar6 = pCVar14.ParameterNames;
				if (pSVar6 != null) {
					pSVar6.get_Item(0);
					if ((int)local_78.Length != 0) {
						throw new NullReferenceException();
					}
	label_05b6e9ba: ;
					throw new IndexOutOfRangeException();
				}
	label_05b6e96a: ;
				throw new NullReferenceException();
			}
			uVar22 = 0;
			do {
				pSVar6 = pCVar14.ParameterNames;
				if (pSVar6 == null) goto label_05b6e96a;
				pSVar15 = pSVar6.get_Item((int32_t)uVar22);
				if ((uint)local_78.Length <= uVar22) goto label_05b6e9ba;
				__this_02.Add((object)pSVar15, local_78[uVar22]);
				uVar22 = uVar22 + 1;
			} while (uVar11 != uVar22);
		}
		__this_00 = CustomLogicManager._instance;
		routine = local_70.EvaluateBlockCoroutine(classInstance, __this_02, pCVar14.Statements);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pUVar16 = __this_00.StartCoroutine(routine);
		return (object)pUVar16;
	}

	[Token(Token = "0x6003CCF")]
	[Address(RVA = "0x5A8B7E0", Offset = "0x5A8A7E0", VA = "0x5A8B7E0")]
	public object EvaluateMethod(UserMethod userMethod, [Optional] object[] parameterValues)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$EvaluateMethod): 8 lines keep C-only constructs
		bool bVar1;
		int iVar2;
		CustomLogicMethodDefinitionAst pCVar3;
		CustomLogicClassInstance pCVar4;
		List<string> pSVar5;
		Stack<ValueTuple<string, string, Nullable<CustomLogicSourceType>>> pSVar6;
		CustomLogicManager __this_00;
		List<CustomLogicBaseAst> pSVar7;
		System_ValueTuple_object__object__Nullable_Int32Enum___o item;
		CustomLogicEvaluator pCVar8;
		uint uVar9;
		Dictionary<string, object> __this_01;
		String pSVar10;
		object item1;
		Dictionary<object, object> __this_02;
		CustomLogicEvaluator.d__87<EvaluateBlockCoroutine> __this_03;
		Coroutine pUVar11;
		ulong uVar12;
		CustomLogicEvaluator local_80;
		CustomLogicClassInstance local_78;
		Dictionary<string, object> local_70;
		String local_68;
		CustomLogicEvaluator* local_58;
		Coroutine local_50;
		System_ValueTuple_object__object__Nullable_Int32Enum___o local_48;

		local_80 = this;
		local_50 = null;
		if ((userMethod == null) ||(pCVar3 = userMethod.Ast, pCVar3 == null)) {
			throw new NullReferenceException();
		}
		local_68 = pCVar3.Name;
		pCVar4 = userMethod.Owner;
		if (parameterValues == null) {
			parameterValues = CustomLogicEvaluator.EmptyArgs;
		}
		bVar1 = pCVar3.Coroutine;
		this._currentLineNumber = pCVar3.Line;
		local_78 = pCVar4;
		if (bVar1 != false) {
			__this_01 = new Dictionary<string, object>();
			local_70 = __this_01;
			if (parameterValues == null) {
				throw new NullReferenceException();
			}
			pSVar5 = pCVar3.ParameterNames;
			if (pSVar5 == null) {
				throw new NullReferenceException();
			}
			iVar2 = pSVar5._size;
			uVar9 = Math.Min((int32_t)parameterValues.Length, iVar2);
			if (0 < (int)uVar9) {
				if (local_70 == null) {
					pSVar5 = pCVar3.ParameterNames;
					if (pSVar5 != null) {
						pSVar5.get_Item(0);
						if ((int)parameterValues.Length != 0) {
							throw new NullReferenceException();
						}
	label_05b8c033: ;
						throw new IndexOutOfRangeException();
					}
	label_05b8bfe7: ;
					throw new NullReferenceException();
				}
				uVar12 = 0;
				do {
					pSVar5 = pCVar3.ParameterNames;
					if (pSVar5 == null) goto label_05b8bfe7;
					pSVar10 = pSVar5.get_Item((int32_t)uVar12) ;
					if ((uint)parameterValues.Length <= uVar12) goto label_05b8c033;
					local_70.Add((object)pSVar10, parameterValues[uVar12]);
					uVar12 = uVar12 + 1;
				} while (uVar9 != uVar12);
			}
			pCVar4 = local_78;
			pCVar8 = local_80;
			__this_00 = CustomLogicManager._instance;
			pSVar7 = pCVar3.Statements;
			__this_03 = il2cpp_codegen_object_new((Il2CppClass)typeof(CustomLogicEvaluator.d__87<EvaluateBlockCoroutine>));
			__this_03 = new CustomLogicEvaluator.d__87<EvaluateBlockCoroutine>(0);
			if (__this_03 != null) {
				__this_03.__4__this = pCVar8;
				__this_03.classInstance = pCVar4;
				__this_03.localVariables = local_70;
				__this_03.statements = pSVar7;
				if (__this_00 != null) {
					pUVar11 = __this_00.StartCoroutine((IEnumerator)__this_03);
					return (object)pUVar11;
				}
			}
			throw new NullReferenceException();
		}
		if (this._CaptureErrors_k__BackingField != false) {
			if (pCVar4 == null) {
				throw new NullReferenceException();
			}
			pSVar6 = this._executionStack;
			item1 = (object)pCVar4.unknown();
			local_48.Item1 = null;
			local_48.Item2 = null;
			local_48.Item3.hasValue = false;
			local_48.Item3._1_3_ = 0;
			local_48.Item3.value = 0;
			local_48 = new ValueTuple<object, object, Nullable<Int32Enum>>(item1, (object)local_68, (System_Nullable_Int32Enum__o)pCVar4._Namespace_k__BackingField);
			if (pSVar6 == null) {
				throw new NullReferenceException();
			}
			item.Item2 = local_48.Item2;
			item.Item1 = local_48.Item1;
			item.Item3 = local_48.Item3;
			pSVar6.Push(item);
		}
		local_58 = &local_80;
		if ((typeof(CollectionPool<Dictionary<string, object>, KeyValuePair<string, object>>)._2). cctor_finished_or_no_cctor == 0) {
		}
		__this_02 = (Dictionary<object, object>)CollectionPool<object, KeyValuePair<object, object>>.Get();
		if (parameterValues == null) {
			throw new NullReferenceException();
		}
		pSVar5 = pCVar3.ParameterNames;
		if (pSVar5 == null) {
			throw new NullReferenceException();
		}
		iVar2 = pSVar5._size;
		uVar9 = Math.Min((int32_t)parameterValues.Length, iVar2);
		if (0 < (int)uVar9) {
			if (__this_02 == null) {
				pSVar5 = pCVar3.ParameterNames;
				if (pSVar5 != null) {
					pSVar5.get_Item(0);
					if ((int)parameterValues.Length != 0) {
						throw new NullReferenceException();
					}
	label_05b8c050: ;
					throw new IndexOutOfRangeException();
				}
	label_05b8c011: ;
				throw new NullReferenceException();
			}
			uVar12 = 0;
			do {
				pSVar5 = pCVar3.ParameterNames;
				if (pSVar5 == null) goto label_05b8c011;
				pSVar10 = pSVar5.get_Item((int32_t)uVar12);
				if ((uint)parameterValues.Length <= uVar12) goto label_05b8c050;
				__this_02.Add((object)pSVar10, parameterValues[uVar12]);
				uVar12 = uVar12 + 1;
			} while (uVar9 != uVar12);
		}
		local_80.EvaluateBlock(local_78, (Dictionary<string, object>)__this_02, pCVar3.Statements, (object*)&local_50);
		if ((typeof(CollectionPool<Dictionary<string, object>, KeyValuePair<string, object>>)._2). cctor_finished_or_no_cctor == 0) {
		}
		CollectionPool<object, KeyValuePair<object, object>>.Release((object)__this_02);
		pUVar11 = local_50;
		if (local_80._CaptureErrors_k__BackingField != false) {
			pSVar6 = local_80._executionStack;
			if (pSVar6 == null) {
				throw new NullReferenceException();
			}
			local_48 = pSVar6.Pop();
		}
		return (object)pUVar11;
	}

	[Token(Token = "0x6003CD0")]
	[Address(RVA = "0x5A88830", Offset = "0x5A87830", VA = "0x5A88830")]
	private object EvaluateExpression(CustomLogicClassInstance classInstance, Dictionary<string, object> localVariables, CustomLogicBaseExpressionAst expression)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$EvaluateExpression): 59 lines keep C-only constructs
		byte bVar1;
		int symbol;
		CustomLogicBaseExpressionAst pCVar2;
		IntPtr pvVar3;
		Dictionary<object, object> pSVar4;
		CustomLogicStartAst pCVar5;
		bool bVar6;
		int iVar7;
		CustomLogicBaseAst expression_00;
		object pIVar8;
		int piVar9;
		Object[] pSVar10;
		CLMethodBinding method_00;
		int piVar11;
		object pIVar12;
		sbyte pcVar13;
		byte puVar14;
		Dictionary<TKey, TValue> __this_00;
		CustomLogicClassInstance pCVar15;
		UserMethod userMethod;
		String str0;
		String str2;
		Il2CppClass pIVar16;
		object pIVar17;
		String pSVar18;
		Exception pSVar19;
		MethodInfo pMVar20;
		ulong uVar21;
		List<object> __this_01;
		long lVar22;
		Nullable<CustomLogicSourceType>[] local_60 = new Nullable<CustomLogicSourceType>[3];
		System_Nullable_Int32Enum__Fields local_48;
		CustomLogicBaseExpressionAst local_40;
		CustomLogicBaseExpressionAst local_38;

		if (Il2CppMethodInitialized_075473d8 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(CustomLogicClassInstantiateExpressionAst)) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_get_HasValue) ;
			Il2CppMethodInitialized_075473d8 = true;
		}
		local_48.hasValue = false;
		local_48._1_3_ = 0;
		local_48.value = 0;
		local_40 = null;
		if (expression == null) {
			throw new NullReferenceException();
		}
		this._currentLineNumber = expression.Line;
		switch(expression.Type) {
		case 4:
			pIVar17 = il2cpp_codegen_is_inst_class((object)expression, typeof(CustomLogicMethodCallExpressionAst));
			if (pIVar17 == null) {
				throw new NullReferenceException();
			}
			pIVar12 = this.EvaluateExpression(classInstance, localVariables, pIVar17[2].monitor);
			pCVar15 = (CustomLogicClassInstance)il2cpp_codegen_is_inst_class(pIVar12, typeof(CustomLogicClassInstance));
			if (pIVar17[2].klass == null) {
				throw new NullReferenceException();
			}
			iVar7 = *(int)&((pIVar17[2].klass)._1).namespaze;
			pSVar10 = ArrayPool<object>.New(iVar7);
			pIVar16 = pIVar17[2].klass;
			if (pIVar16 != null) {
				if (pSVar10 == null) {
					if (0 < *(int)&(pIVar16._1).namespaze) {
						expression_00 = pIVar16.get_Item(0);
						if (expression_00 != null) {
							bVar1 = (typeof(CustomLogicBaseExpressionAst)._2).typeHierarchyDepth;
							if (((expression_00.klass._2).typeHierarchyDepth < bVar1) ||((expression_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicBaseExpressionAst))) {
	label_05b8981b: ;
								throw new InvalidCastException();
							}
						}
						this.EvaluateExpression(classInstance, localVariables, (CustomLogicBaseExpressionAst)expression_00);
						throw new NullReferenceException();
					}
	label_05b8924c: ;
					pIVar17 = this.EvaluateMethod(pCVar15, pIVar17[1].monitor, pSVar10, this._currentLineNumber);
					ArrayPool<object>.Free(pSVar10);
					return pIVar17;
				}
				lVar22 = 0x20;
				uVar21 = 0;
				do {
					if ((long)*(int)&(pIVar16._1).namespaze <= (long)uVar21) goto label_05b8924c;
					expression_00 = pIVar16.get_Item((int32_t)uVar21);
					if (expression_00 != null) {
						bVar1 = (typeof(CustomLogicBaseExpressionAst)._2).typeHierarchyDepth;
						if (((expression_00.klass._2).typeHierarchyDepth < bVar1) ||((expression_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicBaseExpressionAst))) goto label_05b8981b;
					}
					pIVar12 = this.EvaluateExpression(classInstance, localVariables, (CustomLogicBaseExpressionAst)expression_00);
					if ((pIVar12 != null) &&(pIVar8 = il2cpp_vm_Object_IsInst(pIVar12, (((pSVar10.obj).klass)._1).element_class), pIVar8 == null)) {
						pIVar17 = new ArrayTypeMismatchException();
						throw pIVar17;
					}
					if ((uint)pSVar10.Length <= uVar21) {
						throw new IndexOutOfRangeException();
					}
					pSVar10[uVar21] = pIVar12;
					uVar21 = uVar21 + 1;
					pIVar16 = pIVar17[2].klass;
					lVar22 = lVar22 + 8;
				} while (pIVar16 != null);
			}
			throw new NullReferenceException();
		case 5:
			bVar1 = (typeof(CustomLogicClassInstantiateExpressionAst)._2).typeHierarchyDepth;
			method_00 = (CLMethodBinding)(ulong)bVar1;
			if (((expression.klass._2).typeHierarchyDepth < bVar1) ||((expression.klass._2).typeHierarchy[(long)((long)&method_00[-1].vtable._4_Call.method + 7)] !=typeof(CustomLogicClassInstantiateExpressionAst))) {
				throw new InvalidCastException();
			}
			if ((*(ulong)((sbyte)expression + 0x20)) == null) {
				throw new NullReferenceException();
			}
			iVar7 = *(int)((long)(*(ulong)((sbyte)expression + 0x20)) + 0x18);
			pSVar10 = ArrayPool<object>.New(iVar7);
			__this_01 = (*(ulong)((sbyte)expression + 0x20));
			if (__this_01 != null) {
				if (pSVar10 == null) {
					if (0 < __this_01._size) {
						method_00 = (CLMethodBinding)__this_01.get_Item(0);
						if (method_00 != null) {
							pvVar3 = (method_00._1).image;
							bVar1 = (typeof(CustomLogicBaseExpressionAst)._2).typeHierarchyDepth;
							if ((*(byte)((long)pvVar3 + 0x130) < bVar1) ||(*(CustomLogicBaseExpressionAst*)(*(long)((long)pvVar3 + 200) + -8 + (ulong)bVar1 * 8) != typeof(CustomLogicBaseExpressionAst))) {
	label_05b897e5: ;
								throw new InvalidCastException();
							}
						}
						this.EvaluateExpression(classInstance, localVariables, (CustomLogicBaseExpressionAst)method_00);
						throw new NullReferenceException();
					}
	label_05b89184: ;
					pCVar2 = (*(ulong)((sbyte)expression + 0x18));
					bVar6 = CustomLogicBuiltinTypes.IsBuiltinType((String)pCVar2);
					if (!bVar6) {
						pCVar5 = this._start;
						if (pCVar5 == null) {
							throw new NullReferenceException();
						}
						pSVar4 = (Dictionary<object, object>)pCVar5.Classes;
						if (pSVar4 == null) {
							throw new NullReferenceException();
						}
						bVar6 = pSVar4.ContainsKey((object)(*(ulong)((sbyte)expression + 0x18)));
						if (!bVar6) {
							if (localVariables == null) {
								throw new NullReferenceException();
							}
							bVar6 = localVariables.ContainsKey((object)(*(ulong)((sbyte)expression + 0x18)));
							if ((bVar6) &&(pIVar17 = localVariables.get_Item((object)(*(ulong)((sbyte)expression + 0x18))), pIVar17 != null)) {
								pIVar16 = pIVar17.klass;
								bVar1 = (typeof(CLMethodBinding)._2).typeHierarchyDepth;
								method_00 = typeof(CLMethodBinding);
								if ((bVar1 <= (pIVar16._2).typeHierarchyDepth) &&((pIVar16._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CLMethodBinding))) {
									pIVar17 = (object)(*pIVar16.vtable[4].methodPtr)(pIVar17,classInstance,pSVar10,pIVar16.vtable[4].method);
									ArrayPool<object>.Free(pSVar10);
									return pIVar17;
								}
							}
							userMethod = (UserMethod)localVariables.get_Item((object)(*(ulong)((sbyte)expression + 0x18)));
							if (userMethod != null) {
								bVar1 = (typeof(UserMethod)._2).typeHierarchyDepth;
								if (((userMethod.klass._2).typeHierarchyDepth < bVar1) ||(method_00 = (CLMethodBinding)(userMethod.klass._2).typeHierarchy, *(UserMethod*)((long)method_00 + (ulong)bVar1 * 8 + -8) != typeof(UserMethod))) {
									throw new InvalidCastException();
								}
							}
							pIVar17 = this.EvaluateMethod(userMethod, pSVar10);
							ArrayPool<object>.Free(pSVar10);
							return pIVar17;
						}
					}
					if (classInstance == null) {
						throw new NullReferenceException();
					}
					pCVar15 = this.CreateClassInstance((String)(*(ulong)((sbyte)expression + 0x18)), pSVar10, true, (Nullable<CustomLogicSourceType>)classInstance._Namespace_k__BackingField);
					ArrayPool<object>.Free(pSVar10);
					return (object)pCVar15;
				}
				lVar22 = 0x20;
				uVar21 = 0;
				do {
					if ((long)__this_01._size <= (long)uVar21) goto label_05b89184;
					method_00 = (CLMethodBinding)__this_01.get_Item((int32_t)uVar21);
					if (method_00 != null) {
						pvVar3 = (method_00._1).image;
						bVar1 = (typeof(CustomLogicBaseExpressionAst)._2).typeHierarchyDepth;
						if ((*(byte)((long)pvVar3 + 0x130) < bVar1) ||(*(CustomLogicBaseExpressionAst*)(*(long)((long)pvVar3 + 200) + -8 + (ulong)bVar1 * 8) != typeof(CustomLogicBaseExpressionAst))) goto label_05b897e5;
					}
					pIVar17 = this.EvaluateExpression(classInstance, localVariables, (CustomLogicBaseExpressionAst)method_00);
					if ((pIVar17 != null) &&(pIVar12 = il2cpp_vm_Object_IsInst(pIVar17, (((pSVar10.obj).klass)._1).element_class), pIVar12 == null)) {
						pIVar17 = new ArrayTypeMismatchException();
						throw pIVar17;
					}
					if ((uint)pSVar10.Length <= uVar21) {
						throw new IndexOutOfRangeException();
					}
					pSVar10[uVar21] = pIVar17;
					uVar21 = uVar21 + 1;
					__this_01 = (*(ulong)((sbyte)expression + 0x20));
					lVar22 = lVar22 + 8;
				} while (__this_01 != null);
			}
			throw new NullReferenceException();
		case 6:
			bVar1 = (typeof(CustomLogicFieldExpressionAst)._2).typeHierarchyDepth;
			if (((expression.klass._2).typeHierarchyDepth < bVar1) ||((expression.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicFieldExpressionAst))) {
				throw new InvalidCastException();
			}
			pCVar15 = (CustomLogicClassInstance)this.EvaluateExpression(classInstance, localVariables, (*(ulong)((sbyte)expression + 0x20)));
			if (pCVar15 == null) {
				throw new NullReferenceException();
			}
			bVar1 = (typeof(CustomLogicClassInstance)._2).typeHierarchyDepth;
			if (((pCVar15.klass._2).typeHierarchyDepth < bVar1) ||((pCVar15.klass._2).typeHierarchy[(long)&((MethodInfo)(ulong)bVar1)[-1].field_0x57] !=typeof(CustomLogicClassInstance))) {
				throw new InvalidCastException();
			}
			pCVar2 = (*(ulong)((sbyte)expression + 0x18));
			local_38 = null;
			bVar6 = pCVar15.TryGetVariable((String)pCVar2, (object*)&local_38);
			if (!bVar6) {
				pSVar18 = (String)pCVar15.unknown();
				str0 = il2cpp_codegen_get_runtime_metadata(&"Variable ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" not found in class ");
				pSVar18 = String.Concat(str0, (String)pCVar2, str2, pSVar18);
				pIVar16 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				pSVar19 = (Exception)il2cpp_codegen_object_new(pIVar16);
				pSVar19 = new Exception(pSVar18);
				pMVar20 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicClassInstance_GetVariable);
				throw (object)pSVar19;
			}
			if (local_38 == null) {
				return null;
			}
			pIVar16 = (local_38._1).image;
			bVar1 = (typeof(CLPropertyBinding)._2).typeHierarchyDepth;
			if ((pIVar16._2).typeHierarchyDepth < bVar1) {
				return (object)local_38;
			}
			if ((pIVar16._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(CLPropertyBinding) ) {
				return (object)local_38;
			}
			pCVar15 = (CustomLogicClassInstance)(*pIVar16.vtable[5].methodPtr)(local_38,pCVar15,pIVar16.vtable[5].method);
			break;
		case 7:
			bVar1 = (typeof(CustomLogicPrimitiveExpressionAst)._2).typeHierarchyDepth;
			if (((expression.klass._2).typeHierarchyDepth < bVar1) ||((expression.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicPrimitiveExpressionAst))) {
				throw new InvalidCastException();
			}
			return (object)(*(ulong)((sbyte)expression + 0x18));
		case 8:
			pIVar17 = il2cpp_codegen_is_inst_class((object)expression, typeof(CustomLogicUnaryExpressionAst));
			if (pIVar17 == null) {
				throw new NullReferenceException();
			}
			pIVar17 = il2cpp_codegen_is_inst_class((object)expression, typeof(CustomLogicUnaryExpressionAst));
			if (pIVar17[2].klass == null) {
				throw new NullReferenceException();
			}
			piVar9 = (int)il2cpp_runtime_helper_02abd3a0(((pIVar17[2].klass)._1).namespaze, typeof(CustomLogicSymbol));
			iVar7 = *piVar9;
			pIVar17 = il2cpp_codegen_is_inst_class((object)expression, typeof(CustomLogicUnaryExpressionAst));
			if (pIVar17 == null) {
				throw new NullReferenceException();
			}
			pIVar17 = il2cpp_codegen_is_inst_class((object)expression, typeof(CustomLogicUnaryExpressionAst));
			pMVar20 = pIVar17[1].monitor;
			pIVar17 = this.EvaluateExpression(classInstance, localVariables, (CustomLogicBaseExpressionAst)pMVar20);
			pCVar15 = (CustomLogicClassInstance)this.EvaluateUnaryExpression(iVar7, pIVar17);
			break;
		case 9:
			pIVar17 = il2cpp_codegen_is_inst_class((object)expression, typeof(CustomLogicBinopExpressionAst));
			if (pIVar17 == null) {
				throw new NullReferenceException();
			}
			if (pIVar17[2].monitor == null) {
				throw new NullReferenceException();
			}
			piVar11 = (int)il2cpp_runtime_helper_02abd3a0(*(ulong)((long)pIVar17[2].monitor + 0x18), typeof(CustomLogicSymbol));
			symbol = *piVar11;
			if (symbol == 0x19) {
				pIVar12 = this.EvaluateExpression(classInstance, localVariables, pIVar17[1].monitor);
				pcVar13 = (sbyte)il2cpp_runtime_helper_02abd3a0(pIVar12, g_data_075566f0);
				if (*pcVar13 == false) {
					local_60[0] = (Nullable<CustomLogicSourceType>)((ulong)local_60[0] & 0xffffffffffffff00) ;
					pCVar15 = (CustomLogicClassInstance)(object)local_60;
				}
				else {
					pIVar17 = this.EvaluateExpression(classInstance, localVariables, (CustomLogicBaseExpressionAst)pIVar17[2].klass);
					puVar14 = (byte)il2cpp_runtime_helper_02abd3a0(pIVar17, g_data_075566f0);
					local_60[0].hasValue = (bool)*puVar14;
					pCVar15 = (CustomLogicClassInstance)(object)local_60;
				}
			}
			else if (symbol == 0x1a) {
				pIVar12 = this.EvaluateExpression(classInstance, localVariables, pIVar17[1].monitor);
				pcVar13 = (sbyte)il2cpp_runtime_helper_02abd3a0(pIVar12, g_data_075566f0);
				if (*pcVar13 == false) {
					pIVar17 = this.EvaluateExpression(classInstance, localVariables, (CustomLogicBaseExpressionAst)pIVar17[2].klass);
					puVar14 = (byte)il2cpp_runtime_helper_02abd3a0(pIVar17, g_data_075566f0);
					local_60[0].hasValue = (bool)*puVar14;
					pCVar15 = (CustomLogicClassInstance)(object)local_60;
				}
				else {
					local_60[0].hasValue = true;
					pCVar15 = (CustomLogicClassInstance)(object)local_60;
				}
			}
			else {
				pIVar12 = this.EvaluateExpression(classInstance, localVariables, pIVar17[1].monitor);
				pIVar17 = this.EvaluateExpression(classInstance, localVariables, (CustomLogicBaseExpressionAst)pIVar17[2].klass);
				pCVar15 = (CustomLogicClassInstance)this.EvaluateBinopExpression(symbol, pIVar12, pIVar17);
			}
			break;
		case 10:
			bVar1 = (typeof(CustomLogicNotExpressionAst)._2).typeHierarchyDepth;
			if (((expression.klass._2).typeHierarchyDepth < bVar1) ||((expression.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicNotExpressionAst))) {
				throw new InvalidCastException();
			}
			pIVar17 = this.EvaluateExpression(classInstance, localVariables, (CustomLogicBaseExpressionAst)(*(ulong)((sbyte)expression + 0x18)));
			if (pIVar17 == null) {
				throw new NullReferenceException();
			}
			if ((pIVar17.klass._1).element_class != (g_data_075566f0._1).element_class) {
				throw new InvalidCastException();
			}
			puVar14 = il2cpp_vm_Object_Unbox(pIVar17);
			local_60[0] = (Nullable<CustomLogicSourceType>)(CONCAT71(local_60[0]._1_7_, *puVar14) ^ 1);
			pCVar15 = (CustomLogicClassInstance)(object)local_60;
			break;
		case 0xb:
			bVar1 = (typeof(CustomLogicVariableExpressionAst)._2).typeHierarchyDepth;
			if (((expression.klass._2).typeHierarchyDepth < bVar1) ||((expression.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicVariableExpressionAst))) {
				throw new InvalidCastException();
			}
			pCVar2 = (*(ulong)((sbyte)expression + 0x18));
			bVar6 = ((String)pCVar2 == "self");
			if (bVar6) {
				return (object)classInstance;
			}
			pSVar4 = (Dictionary<object, object>)this._staticClasses;
			if (pSVar4 == null) {
				throw new NullReferenceException();
			}
			bVar6 = pSVar4.ContainsKey((object)pCVar2);
			if (!bVar6) {
				pSVar4 = (Dictionary<object, object>)this._namespacedStaticClasses;
				if (pSVar4 == null) {
					throw new NullReferenceException();
				}
				bVar6 = pSVar4.ContainsKey((object)pCVar2);
				if (!bVar6) {
					if (localVariables == null) {
						throw new NullReferenceException();
					}
					pIVar17 = localVariables.get_Item((object)pCVar2);
					return pIVar17;
				}
			}
			if (classInstance == null) {
				throw new NullReferenceException();
			}
			local_48 = *(System_Nullable_Int32Enum__Fields)&classInstance._Namespace_k__BackingField;
			if (local_48.hasValue != false) {
				pSVar4 = (Dictionary<object, object>)this._namespacedStaticClasses;
				if (pSVar4 == null) {
					throw new NullReferenceException();
				}
				bVar6 = pSVar4.ContainsKey((object)pCVar2);
				if (bVar6) {
					pSVar4 = (Dictionary<object, object>)this._namespacedStaticClasses;
					if (pSVar4 == null) {
						throw new NullReferenceException();
					}
					__this_00 = (Dictionary<TKey, TValue>)pSVar4.get_Item((object)pCVar2);
					local_48 = *(System_Nullable_Int32Enum__Fields)&classInstance._Namespace_k__BackingField;
					iVar7 = local_48.Value;
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					bVar6 = __this_00.TryGetValue(iVar7, (object*)&local_40);
					if (bVar6) {
						return (object)local_40;
					}
				}
			}
			pSVar4 = (Dictionary<object, object>)this._staticClasses;
			if (pSVar4 == null) {
				throw new NullReferenceException();
			}
			bVar6 = pSVar4.ContainsKey((object)pCVar2);
			if (!bVar6) {
				local_60[0] = classInstance._Namespace_k__BackingField;
				pIVar16 = il2cpp_codegen_get_runtime_metadata(&typeof(Nullable<CustomLogicSourceType>));
				pIVar17 = (object)local_60;
				pSVar18 = il2cpp_codegen_get_runtime_metadata(&"Static class {0} not found for namespace {1}");
				pSVar18 = String.Format(pSVar18, (object)pCVar2, pIVar17);
				pIVar16 = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				pSVar19 = (Exception)il2cpp_codegen_object_new(pIVar16);
				pSVar19 = new Exception(pSVar18);
				pMVar20 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_EvaluateExpression);
				throw (object)pSVar19;
			}
			pSVar4 = (Dictionary<object, object>)this._staticClasses;
			if (pSVar4 == null) {
				throw new NullReferenceException();
			}
			pCVar15 = pSVar4.get_Item((object)pCVar2);
			break;
		default: ;
			return null;
		}
		return (object)pCVar15;
	}

	[Token(Token = "0x6003CD1")]
	[Address(RVA = "0x5A8C3B0", Offset = "0x5A8B3B0", VA = "0x5A8C3B0")]
	private object EvaluateUnaryExpression(CustomLogicSymbol symbol, object next)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$EvaluateUnaryExpression): 7 lines keep C-only constructs
		int piVar1;
		uint puVar2;
		ulong puVar3;
		object pIVar4;
		Il2CppClass pIVar5;
		ulong local_10;

		if (symbol != 0x21) {
			if ((symbol == 0x22) && (next != null)) {
				pIVar5 = next.klass;
				if (pIVar5 == g_data_07556710) {
					piVar1 = il2cpp_vm_Object_Unbox(next);
					local_10 = CONCAT44(local_10._4_4_, -*piVar1);
					pIVar5 = g_data_07556710;
	label_05b8c442: ;
					return pIVar4;
				}
				if (pIVar5 == g_data_07556740) {
					puVar2 = il2cpp_vm_Object_Unbox(next);
					local_10 = CONCAT44(local_10._4_4_, *puVar2) ^ 0x80000000;
					pIVar5 = g_data_07556740;
					goto label_05b8c442;
				}
				if (pIVar5 == g_data_07556748) {
					puVar3 = (ulong)il2cpp_runtime_helper_02abd3a0(next);
					local_10 = *puVar3 ^ 0x8000000000000000;
					pIVar5 = g_data_07556748;
					goto label_05b8c442;
				}
			}
			next = null;
		}
		return next;
	}

	[Token(Token = "0x6003CD2")]
	[Address(RVA = "0x5A8C460", Offset = "0x5A8B460", VA = "0x5A8C460")]
	private object EvaluateBinopExpression(CustomLogicSymbol symbol, object left, object right)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$EvaluateBinopExpression): 7 lines keep C-only constructs
		bool bVar1;
		object pIVar2;
		MethodInfo method_00;
		byte data;
		float fVar3;
		float fVar4;
		byte uStack_26;
		byte uStack_25;
		byte local_24;
		byte uStack_23;
		byte uStack_22;
		byte uStack_21;

		if (symbol - 0x1bU < 0xb) {
			method_00 = (MethodInfo)((long)&switchD_05b8c4a8::switchdataD_010a59ec +(long)(int)(&switchD_05b8c4a8::switchdataD_010a59ec)[symbol - 0x1bU]);
			switch(symbol) {
			case 0x1b:
				fVar3 = MiscExtensions.UnboxToFloat(left);
				fVar4 = MiscExtensions.UnboxToFloat(right);
				uStack_23 = fVar3 < fVar4;
				data = &uStack_23;
				break;
			case 0x1c:
				fVar3 = MiscExtensions.UnboxToFloat(left);
				fVar4 = MiscExtensions.UnboxToFloat(right);
				local_24 = fVar4 < fVar3;
				data = &local_24;
				break;
			case 0x1d:
				fVar3 = MiscExtensions.UnboxToFloat(left);
				fVar4 = MiscExtensions.UnboxToFloat(right);
				uStack_25 = fVar3 <= fVar4;
				data = &uStack_25;
				break;
			case 0x1e:
				fVar3 = MiscExtensions.UnboxToFloat(left);
				fVar4 = MiscExtensions.UnboxToFloat(right);
				uStack_26 = fVar4 <= fVar3;
				data = &uStack_26;
				break;
			case 0x1f:
				uStack_21 = this.CheckEquals(left, right);
				data = &uStack_21;
				break;
			case 0x20:
				bVar1 = this.CheckEquals(left, right);
				uStack_22 = !bVar1;
				data = &uStack_22;
				break;
			case 0x21:
				pIVar2 = this.AddValues(left, right);
				return pIVar2;
			case 0x22:
				pIVar2 = this.SubtractValues(left, right);
				return pIVar2;
			case 0x23:
				pIVar2 = this.MultiplyValues(left, right);
				return pIVar2;
			case 0x24:
				pIVar2 = this.DivideValues(left, right);
				return pIVar2;
			case 0x25:
				pIVar2 = this.ModuloValues(left, right);
				return pIVar2;
			}
		}
		else {
		}
		return pIVar2;
	}

	[Token(Token = "0x6003CD3")]
	[Address(RVA = "0x5A8CC80", Offset = "0x5A8BC80", VA = "0x5A8CC80")]
	private object ClassMathOperation(object left, object right, string method)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$ClassMathOperation): 10 lines keep C-only constructs
		byte bVar1;
		bool bVar2;
		Object[] parameterValues;
		object pIVar3;
		String pSVar4;
		String str0;
		String str2;
		Il2CppClass klass;
		Exception __this_00;
		MethodInfo pMVar5;
		CustomLogicClassInstance __this_01;

		if (left == null) {
	label_05b8cd09: ;
			if (right == null) goto label_05b8ce36;
			bVar1 = (typeof(CustomLogicClassInstance)._2).typeHierarchyDepth;
			if (((right.klass._2).typeHierarchyDepth < bVar1) ||(__this_01 = (CustomLogicClassInstance)right,(right.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicClassInstance))) {
				throw new InvalidCastException();
			}
		}
		else {
			bVar1 = (typeof(CustomLogicClassInstance)._2).typeHierarchyDepth;
			if (((left.klass._2).typeHierarchyDepth < bVar1) ||(__this_01 = (CustomLogicClassInstance)left,(left.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicClassInstance))) goto label_05b8cd09;
		}
		bVar2 = __this_01.HasVariable(method);
		if (!bVar2) {
			pSVar4 = (String)__this_01.unknown();
			str0 = il2cpp_codegen_get_runtime_metadata(&"No ");
			str2 = il2cpp_codegen_get_runtime_metadata(&" method found in class ");
			pSVar4 = String.Concat(str0, method, str2, pSVar4);
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_00 = (Exception)il2cpp_codegen_object_new(klass);
			__this_00 = new Exception(pSVar4);
			pMVar5 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ClassMathOperation);
			throw (object)__this_00;
		}
		parameterValues = ArrayPool<object>.New(2);
		if (parameterValues == null) {
	label_05b8ce36: ;
			throw new NullReferenceException();
		}
		if (left != null) {
			pIVar3 = il2cpp_vm_Object_IsInst(left, (((parameterValues.obj).klass)._1).element_class);
			if (pIVar3 == null) goto label_05b8ce48;
		}
		if ((int)parameterValues.Length != 0) {
			parameterValues[0] = left;
			if (right != null) {
				pIVar3 = il2cpp_vm_Object_IsInst(right, (((parameterValues.obj).klass)._1).element_class);
				if (pIVar3 == null) {
	label_05b8ce48: ;
					pIVar3 = new ArrayTypeMismatchException();
					throw pIVar3;
				}
			}
			if ((parameterValues.Length & 0xfffffffe) != 0) {
				parameterValues[1] = right;
				pIVar3 = this.EvaluateMethod(__this_01, method, parameterValues, this._currentLineNumber);
				ArrayPool<object>.Free(parameterValues) ;
				return pIVar3;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6003CD4")]
	[Address(RVA = "0x5A8B050", Offset = "0x5A8A050", VA = "0x5A8B050")]
	private object AddValues(object left, object right)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$AddValues): 19 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		bool bVar3;
		int piVar4;
		object pIVar5;
		String pSVar6;
		float data;
		Il2CppClass klass;
		bool bVar7;
		float fVar8;
		float local_30;
		float local_2c;

		if (left == null) {
			bVar7 = false;
		}
		else {
			if (((right != null) && (left.klass == g_data_07556710)) && (right.klass == g_data_07556710)) {
				piVar4 = il2cpp_vm_Object_Unbox(left);
				if ((right.klass._1).element_class != (g_data_07556710._1).element_class) goto label_05b8b2aa;
				iVar2 = *piVar4;
				piVar4 = il2cpp_vm_Object_Unbox(right);
				local_2c = (float)(iVar2 + *piVar4);
				data = &local_2c;
				klass = g_data_07556710;
				goto label_05b8b239;
			}
			bVar7 = left.klass == g_data_07556758;
		}
		bVar3 = bVar7;
		if (right != null) {
			bVar3 = (bool)(right.klass == g_data_07556758 | bVar7);
		}
		if (bVar3) {
			if (bVar7) {
				if (right == null) {
					if (left == null) {
						left = null;
					}
					else if (left.klass != g_data_07556758) goto label_05b8b276;
					right = null;
				}
				else {
					if ((left != null) && (left.klass != g_data_07556758)) {
	label_05b8b276: ;
						throw new InvalidCastException();
					}
					right = (object)(*right.klass.vtable[3].methodPtr)(right,right.klass.vtable[3].method);
				}
			}
			else {
				if (left == null) {
					left = null;
				}
				else {
					left = (object)(*left.klass.vtable[3].methodPtr)(left,left.klass.vtable[3].method);
				}
				if ((right != null) && (right.klass != g_data_07556758)) {
	label_05b8b2aa: ;
					throw new InvalidCastException();
				}
			}
			pSVar6 = String.Concat((String)left, (String)right) ;
			return (object)pSVar6;
		}
		if (left != null) {
			bVar1 = (typeof(CustomLogicClassInstance)._2).typeHierarchyDepth;
			if ((bVar1 <= (left.klass._2).typeHierarchyDepth) &&((left.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicClassInstance))) goto label_05b8b24b;
		}
		if (right != null) {
			bVar1 = (typeof(CustomLogicClassInstance)._2).typeHierarchyDepth;
			if ((bVar1 <= (right.klass._2).typeHierarchyDepth) &&((right.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicClassInstance))) {
	label_05b8b24b: ;
				pIVar5 = this.ClassMathOperation(left, right, this.add);
				return pIVar5;
			}
		}
		fVar8 = MiscExtensions.UnboxToFloat(left);
		local_30 = MiscExtensions.UnboxToFloat(right);
		local_30 = local_30 + fVar8;
		data = &local_30;
		klass = g_data_07556740;
	label_05b8b239: ;
		return pIVar5;
	}

	[Token(Token = "0x6003CD5")]
	[Address(RVA = "0x5A8B2C0", Offset = "0x5A8A2C0", VA = "0x5A8B2C0")]
	private object SubtractValues(object left, object right)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$SubtractValues): 9 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		object pIVar3;
		int piVar4;
		float data;
		Il2CppClass pIVar5;
		float fVar6;
		float local_28;
		float local_24;

		if (left != null) {
			pIVar5 = left.klass;
			if (((right != null) && (pIVar5 == g_data_07556710)) && (right.klass == g_data_07556710)) {
				piVar4 = il2cpp_vm_Object_Unbox(left);
				if ((right.klass._1).element_class != (g_data_07556710._1).element_class) {
					throw new InvalidCastException();
				}
				iVar2 = *piVar4;
				piVar4 = il2cpp_vm_Object_Unbox(right);
				local_24 = (float)(iVar2 - *piVar4);
				data = &local_24;
				pIVar5 = g_data_07556710;
				goto label_05b8b3d0;
			}
			bVar1 = (typeof(CustomLogicClassInstance)._2).typeHierarchyDepth;
			if ((bVar1 <= (pIVar5._2).typeHierarchyDepth) &&((pIVar5._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicClassInstance))) goto label_05b8b3e1;
		}
		if (right != null) {
			bVar1 = (typeof(CustomLogicClassInstance)._2).typeHierarchyDepth;
			if ((bVar1 <= (right.klass._2).typeHierarchyDepth) &&((right.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicClassInstance))) {
	label_05b8b3e1: ;
				pIVar3 = this.ClassMathOperation(left, right, this.sub);
				return pIVar3;
			}
		}
		fVar6 = MiscExtensions.UnboxToFloat(left);
		local_28 = MiscExtensions.UnboxToFloat(right);
		local_28 = fVar6 - local_28;
		data = &local_28;
		pIVar5 = g_data_07556740;
	label_05b8b3d0: ;
		return pIVar3;
	}

	[Token(Token = "0x6003CD6")]
	[Address(RVA = "0x5A8B440", Offset = "0x5A8A440", VA = "0x5A8B440")]
	private object MultiplyValues(object left, object right)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$MultiplyValues): 9 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		object pIVar3;
		int piVar4;
		float data;
		Il2CppClass pIVar5;
		float fVar6;
		float local_28;
		float local_24;

		if (left != null) {
			pIVar5 = left.klass;
			if (((right != null) && (pIVar5 == g_data_07556710)) && (right.klass == g_data_07556710)) {
				piVar4 = il2cpp_vm_Object_Unbox(left);
				if ((right.klass._1).element_class != (g_data_07556710._1).element_class) {
					throw new InvalidCastException();
				}
				iVar2 = *piVar4;
				piVar4 = il2cpp_vm_Object_Unbox(right);
				local_24 = (float)(iVar2 * *piVar4);
				data = &local_24;
				pIVar5 = g_data_07556710;
				goto label_05b8b54c;
			}
			bVar1 = (typeof(CustomLogicClassInstance)._2).typeHierarchyDepth;
			if ((bVar1 <= (pIVar5._2).typeHierarchyDepth) &&((pIVar5._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicClassInstance))) goto label_05b8b55d;
		}
		if (right != null) {
			bVar1 = (typeof(CustomLogicClassInstance)._2).typeHierarchyDepth;
			if ((bVar1 <= (right.klass._2).typeHierarchyDepth) &&((right.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicClassInstance))) {
	label_05b8b55d: ;
				pIVar3 = this.ClassMathOperation(left, right, this.mul);
				return pIVar3;
			}
		}
		fVar6 = MiscExtensions.UnboxToFloat(left);
		local_28 = MiscExtensions.UnboxToFloat(right);
		local_28 = local_28 * fVar6;
		data = &local_28;
		pIVar5 = g_data_07556740;
	label_05b8b54c: ;
		return pIVar3;
	}

	[Token(Token = "0x6003CD7")]
	[Address(RVA = "0x5A8B5C0", Offset = "0x5A8A5C0", VA = "0x5A8B5C0")]
	private object DivideValues(object left, object right)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$DivideValues): 17 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		int piVar3;
		float pfVar4;
		object pIVar5;
		Il2CppClass pIVar6;
		DivideByZeroException __this_00;
		MethodInfo lastManagedFrame;
		float fVar7;
		float local_30;
		float local_2c;

		if (left == null) {
	label_05b8b65d: ;
			if (right != null) {
				pIVar6 = right.klass;
				bVar1 = (typeof(CustomLogicClassInstance)._2).typeHierarchyDepth;
				if ((bVar1 <= (pIVar6._2).typeHierarchyDepth) &&((pIVar6._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicClassInstance))) goto label_05b8b748;
			}
			fVar7 = MiscExtensions.UnboxToFloat(right);
			if ((fVar7 != 0.0) || (NAN(fVar7))) {
				local_30 = MiscExtensions.UnboxToFloat(left);
				local_30 = local_30 / fVar7;
				pfVar4 = &local_30;
				pIVar6 = g_data_07556740;
	label_05b8b6f0: ;
				return pIVar5;
			}
		}
		else {
			if (((left.klass == g_data_07556710) &&(piVar3 = il2cpp_vm_Object_Unbox(left), right != null)) &&(right.klass == g_data_07556710)) {
				iVar2 = *piVar3;
				piVar3 = il2cpp_vm_Object_Unbox(right);
				if (*piVar3 != 0) {
					local_2c = (float)(iVar2 / *piVar3);
					pfVar4 = &local_2c;
					pIVar6 = g_data_07556710;
					goto label_05b8b6f0;
				}
				goto label_05b8b7a4;
			}
			bVar1 = (typeof(CustomLogicClassInstance)._2).typeHierarchyDepth;
			if (((left.klass._2).typeHierarchyDepth < bVar1) ||((left.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicClassInstance))) goto label_05b8b65d;
			if (right == null) goto label_05b8b783;
			pIVar6 = right.klass;
	label_05b8b748: ;
			if (pIVar6 == g_data_07556710) {
				piVar3 = il2cpp_vm_Object_Unbox(right);
				if (*piVar3 == 0) goto label_05b8b7a4;
				if (right.klass != g_data_07556740) goto label_05b8b783;
			}
			else if (pIVar6 != g_data_07556740) goto label_05b8b783;
			pfVar4 = il2cpp_vm_Object_Unbox(right);
			if ((*pfVar4 != 0.0) || (NAN(*pfVar4))) {
	label_05b8b783: ;
				pIVar5 = this.ClassMathOperation(left, right, this.div);
				return pIVar5;
			}
		}
	label_05b8b7a4: ;
		pIVar6 = il2cpp_codegen_get_runtime_metadata(&typeof(DivideByZeroException));
		__this_00 = (DivideByZeroException)il2cpp_codegen_object_new(pIVar6);
		__this_00 = new DivideByZeroException();
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_DivideValues);
		throw (object)__this_00;
	}

	[Token(Token = "0x6003CD8")]
	[Address(RVA = "0x5A8C6D0", Offset = "0x5A8B6D0", VA = "0x5A8C6D0")]
	private object ModuloValues(object left, object right)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$ModuloValues): 9 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		object pIVar3;
		int piVar4;
		float data;
		Il2CppClass pIVar5;
		float x;
		float y;
		float fStack_28;
		float fStack_24;

		if (left != null) {
			pIVar5 = left.klass;
			if (((right != null) && (pIVar5 == g_data_07556710)) && (right.klass == g_data_07556710)) {
				piVar4 = il2cpp_vm_Object_Unbox(left);
				if ((right.klass._1).element_class != (g_data_07556710._1).element_class) {
					throw new InvalidCastException();
				}
				iVar2 = *piVar4;
				piVar4 = il2cpp_vm_Object_Unbox(right);
				fStack_24 = (float)(iVar2 % *piVar4);
				data = &fStack_24;
				pIVar5 = g_data_07556710;
				goto label_05b8c7e4;
			}
			bVar1 = (typeof(CustomLogicClassInstance)._2).typeHierarchyDepth;
			if ((bVar1 <= (pIVar5._2).typeHierarchyDepth) &&((pIVar5._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicClassInstance))) goto label_05b8c7f5;
		}
		if (right != null) {
			bVar1 = (typeof(CustomLogicClassInstance)._2).typeHierarchyDepth;
			if ((bVar1 <= (right.klass._2).typeHierarchyDepth) &&((right.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicClassInstance))) {
	label_05b8c7f5: ;
				pIVar3 = this.ClassMathOperation(left, right, this.mod);
				return pIVar3;
			}
		}
		x = MiscExtensions.UnboxToFloat(left);
		y = MiscExtensions.UnboxToFloat(right);
		fStack_28 = fmodf(x, y, (MethodInfo)right);
		data = &fStack_28;
		pIVar5 = g_data_07556740;
	label_05b8c7e4: ;
		return pIVar3;
	}

	[Token(Token = "0x6003CD9")]
	[Address(RVA = "0x5A8C860", Offset = "0x5A8B860", VA = "0x5A8C860")]
	public bool CheckEquals(object left, object right)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c (CustomLogic.CustomLogicEvaluator$$CheckEquals): 12 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		Il2CppMethodPointer vtableDispatch;
		bool bVar3;
		byte uVar4;
		bool bVar5;
		Object[] pSVar6;
		object pIVar7;
		sbyte pcVar8;

		if (left == null) {
			bVar3 = false;
			if (right == null) {
				return true;
			}
	label_05b8c91c: ;
			bVar1 = (typeof(CustomLogicClassInstance)._2).typeHierarchyDepth;
			if (((right.klass._2).typeHierarchyDepth < bVar1) ||((right.klass._2).typeHierarchy[(long)&((MethodInfo)(ulong)bVar1)[-1].field_0x57] !=typeof(CustomLogicClassInstance))) {
				bVar5 = false;
				goto joined_r0x05b8c941;
			}
			bVar5 = right.HasVariable(this.eq);
			if (bVar3 != false) {
				bVar5 = false;
				uVar2 = (typeof(ArrayPool<object>)._2).cctor_finished_or_no_cctor;
				goto joined_r0x05b8cb10;
			}
			if (!bVar5) {
				bVar5 = false;
				goto joined_r0x05b8cc3c;
			}
			pSVar6 = ArrayPool<object>.New(2);
			if (pSVar6 == null) goto label_05b8cc30;
			if ((left != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(left, (((pSVar6.obj).klass)._1).element_class), pIVar7 == null)) goto label_05b8cc54;
			if ((int)pSVar6.Length == 0) goto label_05b8cc47;
			pSVar6[0] = left;
			pIVar7 = il2cpp_vm_Object_IsInst(right, (((pSVar6.obj).klass)._1).element_class);
			if (pIVar7 == null) goto label_05b8cc54;
			if ((pSVar6.Length & 0xfffffffe) == 0) goto label_05b8cc47;
			pSVar6[1] = right;
			bVar1 = (typeof(CustomLogicClassInstance)._2).typeHierarchyDepth;
			if (((right.klass._2).typeHierarchyDepth < bVar1) ||((right.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicClassInstance))) {
				throw new InvalidCastException();
			}
			pIVar7 = this.EvaluateMethod((CustomLogicClassInstance)right, this.eq, pSVar6, this._currentLineNumber);
			ArrayPool<object>.Free(pSVar6);
		}
		else {
			bVar1 = (typeof(CustomLogicClassInstance)._2).typeHierarchyDepth;
			bVar3 = false;
			if ((bVar1 <= (left.klass._2).typeHierarchyDepth) &&((left.klass._2).typeHierarchy[(long)&((MethodInfo)(ulong)bVar1)[-1].field_0x57] ==typeof(CustomLogicClassInstance))) {
				bVar3 = left.HasVariable(this.eq);
			}
			if (right != null) goto label_05b8c91c;
			bVar5 = true;
	joined_r0x05b8c941: ;
			if (bVar3 == false) {
	joined_r0x05b8cc3c: ;
				if (left == null) {
					return false;
				}
				if (!bVar5) {
					vtableDispatch = left.klass.vtable[0].methodPtr;
					uVar4 = (*vtableDispatch)(left,right,left.klass.vtable[0].method,vtableDispatch);
					return (bool)uVar4;
				}
				return false;
			}
			uVar2 = ((typeof(ArrayPool<object>))._2).cctor_finished_or_no_cctor;
	joined_r0x05b8cb10: ;
			if (uVar2 == 0) {
			}
			pSVar6 = ArrayPool<object>.New(2);
			if (pSVar6 == null) goto label_05b8cc30;
			if ((left != null) &&(pIVar7 = il2cpp_vm_Object_IsInst(left, (((pSVar6.obj).klass)._1).element_class), pIVar7 == null)) {
	label_05b8cc54: ;
				pIVar7 = new ArrayTypeMismatchException();
				throw pIVar7;
			}
			if ((int)pSVar6.Length == 0) {
	label_05b8cc47: ;
				throw new IndexOutOfRangeException();
			}
			pSVar6[0] = left;
			if ((!bVar5) &&(pIVar7 = il2cpp_vm_Object_IsInst(right, (((pSVar6.obj).klass)._1).element_class), pIVar7 == null)) goto label_05b8cc54;
			if ((pSVar6.Length & 0xfffffffe) == 0) goto label_05b8cc47;
			pSVar6[1] = right;
			if (left != null) {
				bVar1 = (typeof(CustomLogicClassInstance)._2).typeHierarchyDepth;
				if (((left.klass._2).typeHierarchyDepth < bVar1) ||((left.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CustomLogicClassInstance))) {
					throw new InvalidCastException();
				}
			}
			pIVar7 = this.EvaluateMethod((CustomLogicClassInstance)left, this.eq, pSVar6, this._currentLineNumber);
			ArrayPool<object>.Free(pSVar6);
		}
		if (pIVar7 != null) {
			if ((pIVar7.klass._1).element_class != *(Il2CppClass*)(g_data_075566f0 + 0x40)) {
				throw new InvalidCastException();
			}
			pcVar8 = il2cpp_vm_Object_Unbox(pIVar7);
			return *pcVar8 != false;
		}
	label_05b8cc30: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003CDA")]
	public static T ConvertTo<T>(object obj)
	{
		return (T)null;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicEvaluator.c.

	// CustomLogic.CustomLogicEvaluator$$ConvertTo<bool>: 7 lines keep C-only constructs
	private static bool ConvertTo_bool(object obj)
	{
		byte bVar1;
		RuntimeTypeHandle SVar2;
		bool bVar3;
		MethodInfo_34BD860_RGCTXs pMVar4;
		Type pSVar5;
		byte puVar6;
		Il2CppClass pIVar7;
		float data;
		float local_30;
		float local_2c;

		pMVar4 = method.rgctx_data;
		if (pMVar4 == null) {
			pMVar4 = method.rgctx_data;
			if (pMVar4 == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
				pMVar4 = method.rgctx_data;
			}
		}
		SVar2.value = (RuntimeTypeHandle)pMVar4._0_T;
		pSVar5 = Type.GetTypeFromHandle(SVar2);
		bVar3 = (pSVar5 == ReflectionExtensions.IntType);
		if (bVar3) {
			local_2c = (float)MiscExtensions.UnboxToInt(obj);
			data = &local_2c;
			pIVar7 = g_data_07556710;
		}
		else {
			SVar2.value = (RuntimeTypeHandle)method.rgctx_data._0_T;
			pSVar5 = Type.GetTypeFromHandle(SVar2);
			bVar3 = (pSVar5 == ReflectionExtensions.FloatType);
			if (!bVar3) {
				pIVar7 = method.rgctx_data._1_T;
				bVar1 = (pIVar7._2).bitflags1;
				goto joined_r0x035bd9a8;
			}
			local_30 = MiscExtensions.UnboxToFloat(obj);
			data = &local_30;
			pIVar7 = g_data_07556740;
		}
		obj = (object)data;
		pIVar7 = method.rgctx_data._1_T;
		bVar1 = (pIVar7._2).bitflags1;
	joined_r0x035bd9a8: ;
		if ((bVar1 & 1) == 0) {
			pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
		}
		if (obj == null) {
			throw new NullReferenceException();
		}
		if ((obj.klass._1).element_class != (pIVar7._1).element_class) {
			throw new InvalidCastException();
		}
		puVar6 = il2cpp_vm_Object_Unbox(obj);
		return (bool)*puVar6;
	}

	// CustomLogic.CustomLogicEvaluator$$ConvertTo<double>: 6 lines keep C-only constructs
	private static double ConvertTo_double(object obj)
	{
		byte bVar1;
		RuntimeTypeHandle SVar2;
		bool bVar3;
		MethodInfo_34BDA40_RGCTXs pMVar4;
		Type pSVar5;
		double pdVar6;
		Il2CppClass pIVar7;
		float data;
		float local_30;
		float local_2c;

		pMVar4 = method.rgctx_data;
		if (pMVar4 == null) {
			pMVar4 = method.rgctx_data;
			if (pMVar4 == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
				pMVar4 = method.rgctx_data;
			}
		}
		SVar2.value = (RuntimeTypeHandle)pMVar4._0_T;
		pSVar5 = Type.GetTypeFromHandle(SVar2);
		bVar3 = (pSVar5 == ReflectionExtensions.IntType);
		if (bVar3) {
			local_2c = (float)MiscExtensions.UnboxToInt(obj);
			data = &local_2c;
			pIVar7 = g_data_07556710;
		}
		else {
			SVar2.value = (RuntimeTypeHandle)method.rgctx_data._0_T;
			pSVar5 = Type.GetTypeFromHandle(SVar2);
			bVar3 = (pSVar5 == ReflectionExtensions.FloatType);
			if (!bVar3) {
				pIVar7 = method.rgctx_data._1_T;
				bVar1 = (pIVar7._2).bitflags1;
				goto joined_r0x035bdb88;
			}
			local_30 = MiscExtensions.UnboxToFloat(obj);
			data = &local_30;
			pIVar7 = g_data_07556740;
		}
		obj = (object)data;
		pIVar7 = method.rgctx_data._1_T;
		bVar1 = (pIVar7._2).bitflags1;
	joined_r0x035bdb88: ;
		if ((bVar1 & 1) == 0) {
			pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
		}
		if (obj == null) {
			throw new NullReferenceException();
		}
		if ((obj.klass._1).element_class != (pIVar7._1).element_class) {
			throw new InvalidCastException();
		}
		return *pdVar6;
	}

	// CustomLogic.CustomLogicEvaluator$$ConvertTo<int>: 6 lines keep C-only constructs
	private static int ConvertTo_int(object obj)
	{
		byte bVar1;
		RuntimeTypeHandle SVar2;
		bool bVar3;
		MethodInfo_34BDC20_RGCTXs pMVar4;
		Type pSVar5;
		int piVar6;
		Il2CppClass pIVar7;
		float data;
		float local_30;
		float local_2c;

		pMVar4 = method.rgctx_data;
		if (pMVar4 == null) {
			pMVar4 = method.rgctx_data;
			if (pMVar4 == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
				pMVar4 = method.rgctx_data;
			}
		}
		SVar2.value = (RuntimeTypeHandle)pMVar4._0_T;
		pSVar5 = Type.GetTypeFromHandle(SVar2);
		bVar3 = (pSVar5 == ReflectionExtensions.IntType);
		if (bVar3) {
			local_2c = (float)MiscExtensions.UnboxToInt(obj);
			data = &local_2c;
			pIVar7 = g_data_07556710;
		}
		else {
			SVar2.value = (RuntimeTypeHandle)method.rgctx_data._0_T;
			pSVar5 = Type.GetTypeFromHandle(SVar2);
			bVar3 = (pSVar5 == ReflectionExtensions.FloatType);
			if (!bVar3) {
				pIVar7 = method.rgctx_data._1_T;
				bVar1 = (pIVar7._2).bitflags1;
				goto joined_r0x035bdd68;
			}
			local_30 = MiscExtensions.UnboxToFloat(obj);
			data = &local_30;
			pIVar7 = g_data_07556740;
		}
		obj = (object)data;
		pIVar7 = method.rgctx_data._1_T;
		bVar1 = (pIVar7._2).bitflags1;
	joined_r0x035bdd68: ;
		if ((bVar1 & 1) == 0) {
			pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
		}
		if (obj == null) {
			throw new NullReferenceException();
		}
		if ((obj.klass._1).element_class != (pIVar7._1).element_class) {
			throw new InvalidCastException();
		}
		return *piVar6;
	}

	// CustomLogic.CustomLogicEvaluator$$ConvertTo<object>: 6 lines keep C-only constructs
	private static object ConvertTo_object(object obj)
	{
		byte bVar1;
		RuntimeTypeHandle SVar2;
		bool bVar3;
		MethodInfo_34BDE00_RGCTXs pMVar4;
		Type pSVar5;
		object pIVar6;
		Il2CppClass pIVar7;
		float data;
		float local_30;
		float local_2c;

		pMVar4 = method.rgctx_data;
		if (pMVar4 == null) {
			pMVar4 = method.rgctx_data;
			if (pMVar4 == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
				pMVar4 = method.rgctx_data;
			}
		}
		SVar2.value = (RuntimeTypeHandle)pMVar4._0_T;
		pSVar5 = Type.GetTypeFromHandle(SVar2);
		bVar3 = (pSVar5 == ReflectionExtensions.IntType);
		if (bVar3) {
			local_2c = (float)MiscExtensions.UnboxToInt(obj);
			data = &local_2c;
			pIVar7 = g_data_07556710;
		}
		else {
			SVar2.value = (RuntimeTypeHandle)method.rgctx_data._0_T;
			pSVar5 = Type.GetTypeFromHandle(SVar2);
			bVar3 = (pSVar5 == ReflectionExtensions.FloatType);
			if (!bVar3) {
				pIVar7 = method.rgctx_data._1_T;
				bVar1 = (pIVar7._2).bitflags1;
				goto joined_r0x035bdf48;
			}
			local_30 = MiscExtensions.UnboxToFloat(obj);
			data = &local_30;
			pIVar7 = g_data_07556740;
		}
		obj = (object)data;
		pIVar7 = method.rgctx_data._1_T;
		bVar1 = (pIVar7._2).bitflags1;
	joined_r0x035bdf48: ;
		if ((bVar1 & 1) == 0) {
			pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
		}
		if (obj == null) {
			pIVar6 = null;
		}
		else {
			pIVar6 = il2cpp_vm_Object_IsInst(obj, pIVar7);
			if (pIVar6 == null) {
				throw new InvalidCastException();
			}
		}
		return pIVar6;
	}

	// CustomLogic.CustomLogicEvaluator$$ConvertTo<float>: 7 lines keep C-only constructs
	private static float ConvertTo_float(object obj)
	{
		byte bVar1;
		RuntimeTypeHandle SVar2;
		bool bVar3;
		MethodInfo_34BDFE0_RGCTXs pMVar4;
		Type pSVar5;
		float pfVar6;
		Il2CppClass pIVar7;
		float local_30;
		float local_2c;

		pMVar4 = method.rgctx_data;
		if (pMVar4 == null) {
			pMVar4 = method.rgctx_data;
			if (pMVar4 == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
				pMVar4 = method.rgctx_data;
			}
		}
		SVar2.value = (RuntimeTypeHandle)pMVar4._0_T;
		pSVar5 = Type.GetTypeFromHandle(SVar2);
		bVar3 = (pSVar5 == ReflectionExtensions.IntType);
		if (bVar3) {
			local_2c = (float)MiscExtensions.UnboxToInt(obj);
			pfVar6 = &local_2c;
			pIVar7 = g_data_07556710;
		}
		else {
			SVar2.value = (RuntimeTypeHandle)method.rgctx_data._0_T;
			pSVar5 = Type.GetTypeFromHandle(SVar2);
			bVar3 = (pSVar5 == ReflectionExtensions.FloatType);
			if (!bVar3) {
				pIVar7 = method.rgctx_data._1_T;
				bVar1 = (pIVar7._2).bitflags1;
				goto joined_r0x035be128;
			}
			local_30 = MiscExtensions.UnboxToFloat(obj);
			pfVar6 = &local_30;
			pIVar7 = g_data_07556740;
		}
		obj = (object)pfVar6;
		pIVar7 = method.rgctx_data._1_T;
		bVar1 = (pIVar7._2).bitflags1;
	joined_r0x035be128: ;
		if ((bVar1 & 1) == 0) {
			pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
		}
		if (obj == null) {
			throw new NullReferenceException();
		}
		if ((obj.klass._1).element_class != (pIVar7._1).element_class) {
			throw new InvalidCastException();
		}
		pfVar6 = il2cpp_vm_Object_Unbox(obj);
		return *pfVar6;
	}

	// CustomLogic.CustomLogicEvaluator$$ConvertTo<Vector3>: 8 lines keep C-only constructs
	private static Vector3 ConvertTo_Vector3(object obj)
	{
		byte bVar1;
		RuntimeTypeHandle SVar2;
		bool bVar3;
		MethodInfo_34BE1C0_RGCTXs pMVar4;
		Type pSVar5;
		Vector3 pUVar6;
		Il2CppClass pIVar7;
		float data;
		float local_30;
		float local_2c;

		pMVar4 = method.rgctx_data;
		if (pMVar4 == null) {
			pMVar4 = method.rgctx_data;
			if (pMVar4 == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
				pMVar4 = method.rgctx_data;
			}
		}
		SVar2.value = (RuntimeTypeHandle)pMVar4._0_T;
		pSVar5 = Type.GetTypeFromHandle(SVar2);
		bVar3 = (pSVar5 == ReflectionExtensions.IntType);
		if (bVar3) {
			local_2c = (float)MiscExtensions.UnboxToInt(obj);
			data = &local_2c;
			pIVar7 = g_data_07556710;
		}
		else {
			SVar2.value = (RuntimeTypeHandle)method.rgctx_data._0_T;
			pSVar5 = Type.GetTypeFromHandle(SVar2);
			bVar3 = (pSVar5 == ReflectionExtensions.FloatType);
			if (!bVar3) {
				pIVar7 = method.rgctx_data._1_T;
				bVar1 = (pIVar7._2).bitflags1;
				goto joined_r0x035be308;
			}
			local_30 = MiscExtensions.UnboxToFloat(obj);
			data = &local_30;
			pIVar7 = g_data_07556740;
		}
		obj = (object)data;
		pIVar7 = method.rgctx_data._1_T;
		bVar1 = (pIVar7._2).bitflags1;
	joined_r0x035be308: ;
		if ((bVar1 & 1) == 0) {
			pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
		}
		if (obj == null) {
			throw new NullReferenceException();
		}
		if ((obj.klass._1).element_class != (pIVar7._1).element_class) {
			throw new InvalidCastException();
		}
		pUVar6 = il2cpp_vm_Object_Unbox(obj);
		return (UnityEngine_Vector3_o)*pUVar6;
	}

	// CustomLogic.CustomLogicEvaluator$$ConvertTo<__Il2CppFullySharedGenericType>: 21 lines keep C-only constructs
	private static __Il2CppFullySharedGenericType ConvertTo___Il2CppFullySharedGenericType(object obj)
	{
		RuntimeTypeHandle SVar1;
		Type pSVar2;
		long lVar3;
		bool bVar4;
		Il2CppRGCTXData pIVar5;
		Type pSVar6;
		object pIVar7;
		Il2CppClass klass;
		IntPtr __src;
		MethodInfo in_RDX;
		IntPtr extraout_RDX;
		byte puVar8;
		ulong __n;
		MethodInfo_34BE3C0 __dest;
		__Il2CppFullySharedGenericType UVar9;
		ulong uStack_60;
		MethodInfo local_58;
		int local_50;
		float local_4c;
		object local_48;
		MethodInfo_34BE3C0 local_40;
		ulong local_38;

		pIVar5 = (in_RDX.field7_0x38).rgctx_data;
		if (pIVar5 == null) {
			uStack_60 = 0x35be3ef;
			uStack_60 = 0x35be3fb;
			pIVar5 = (in_RDX.field7_0x38).rgctx_data;
			if (pIVar5 == null) {
				uStack_60 = 0x35be40c;
				il2cpp_codegen_rgctx_method_init(in_RDX);
				pIVar5 = (in_RDX.field7_0x38).rgctx_data;
			}
		}
		local_38 = (ulong)*(uint)((long)pIVar5[1].klass + 0xfc);
		lVar3 = -(local_38 + 0xf & 0xfffffffffffffff0);
		SVar1.value = (RuntimeTypeHandle)pIVar5.rgctxDataDummy;
		puVar8 = (byte)((long)&local_58 + lVar3);
		local_48 = obj;
		local_40 = method;
		if ((g_data_075567a8._2).cctor_finished_or_no_cctor == 0) {
			*(ulong)((long)&uStack_60 + lVar3) = 0x35be456;
			puVar8 = (byte)((long)&local_58 + lVar3);
		}
		*(ulong)(puVar8 + -8) = 0x35be460;
		pSVar6 = Type.GetTypeFromHandle(SVar1);
		if ((typeof(ReflectionExtensions)._2).cctor_finished_or_no_cctor == 0) {
			*(ulong)(puVar8 + -8) = 0x35be47c;
		}
		pSVar2 = ReflectionExtensions.IntType;
		*(ulong)(puVar8 + -8) = 0x35be494;
		bVar4 = (pSVar6 == pSVar2);
		local_58 = in_RDX;
		if (bVar4) {
			if ((typeof(MiscExtensions)._2).cctor_finished_or_no_cctor == 0) {
				*(ulong)(puVar8 + -8) = 0x35be4b4;
			}
			pIVar7 = local_48;
			*(ulong)(puVar8 + -8) = 0x35be4bf;
			local_50 = MiscExtensions.UnboxToInt(pIVar7);
			*(ulong)(puVar8 + -8) = 0x35be4d6;
			pIVar7 = (object)local_50;
			__n = local_38;
			__dest = local_40;
		}
		else {
			SVar1.value = (RuntimeTypeHandle)((in_RDX.field7_0x38).rgctx_data).rgctxDataDummy;
			if ((g_data_075567a8._2).cctor_finished_or_no_cctor == 0) {
				*(ulong)(puVar8 + -8) = 0x35be509;
			}
			*(ulong)(puVar8 + -8) = 0x35be513;
			pSVar6 = Type.GetTypeFromHandle(SVar1);
			if ((typeof(ReflectionExtensions)._2).cctor_finished_or_no_cctor == 0) {
				*(ulong)(puVar8 + -8) = 0x35be528;
			}
			__n = local_38;
			__dest = local_40;
			pSVar2 = ReflectionExtensions.FloatType;
			*(ulong)(puVar8 + -8) = 0x35be549;
			bVar4 = (pSVar6 == pSVar2);
			pIVar7 = local_48;
			if (bVar4) {
				if ((typeof(MiscExtensions)._2).cctor_finished_or_no_cctor == 0) {
					*(ulong)(puVar8 + -8) = 0x35be569;
				}
				*(ulong)(puVar8 + -8) = 0x35be573;
				local_4c = MiscExtensions.UnboxToFloat(pIVar7);
				*(ulong)(puVar8 + -8) = 0x35be58c;
				pIVar7 = (object)local_4c;
			}
			else {
			}
		}
		klass = (local_58.field7_0x38).rgctx_data[1].klass;
		if (((klass._2).bitflags1 & 1) == 0) {
			*(ulong)(puVar8 + -8) = 0x35be5b2;
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		*(ulong)(puVar8 + -8) = 0x35be5c0;
		__src = (IntPtr)il2cpp_runtime_helper_030d6290(pIVar7, klass, (byte)((long)&local_58 + lVar3));
		*(ulong)(puVar8 + -8) = 0x35be5ce;
		UVar9.klass = memcpy(__dest, __src, __n);
		UVar9.monitor = extraout_RDX;
		return UVar9;
	}

	// CustomLogic.CustomLogicEvaluator$$.cctor: 8 lines keep C-only constructs
	static CustomLogicEvaluator()
	{
		byte bVar1;
		uint uVar2;
		MethodInfo pMVar3;
		Il2CppClass pIVar4;

		pMVar3 = MethodInfo_System_Array_Empty_object;
		if ((MethodInfo_System_Array_Empty_object.field7_0x38).methodMetadataHandle == null) {
			il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_object);
			pIVar4 = *(Il2CppClass*)((long)(pMVar3.field7_0x38).methodMetadataHandle + 0x10);
			bVar1 = (pIVar4._2).bitflags1;
		}
		else {
			pIVar4 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_object.field7_0x38).methodMetadataHandle + 0x10);
			bVar1 = (pIVar4._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
			uVar2 = (pIVar4._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (pIVar4._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pIVar4 = (pMVar3.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar4._2).bitflags1;
		}
		else {
			pIVar4 = (pMVar3.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar4._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
		}
		CustomLogicEvaluator.EmptyArgs = *(Object[]*)pIVar4.static_fields;
		return;
	}

	// CustomLogic.CustomLogicEvaluator.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new CustomLogicEvaluator.c();
		CustomLogicEvaluator.c.__9 =(CustomLogicEvaluator.c)__this;
		return;
	}

	// CustomLogic.CustomLogicEvaluator.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicEvaluator.<>c$$<CreateAddonNetworkChannels>b__20_0: clean
	private String c__CreateAddonNetworkChannels_b__20_0(String x)
	{
		return x;
	}

	// CustomLogic.CustomLogicEvaluator.<>c__DisplayClass40_0$$.ctor: clean
	private void c__DisplayClass40_0__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicEvaluator.<>c__DisplayClass40_0$$<CreateInspectorSetting>b__0: 1 lines keep C-only constructs
	private bool c__DisplayClass40_0__CreateInspectorSetting_b__0(CustomLogicAssignmentExpressionAst item)
	{
		byte bVar1;
		CustomLogicBaseExpressionAst pCVar2;
		bool bVar3;

		if (item == null) {
			throw new NullReferenceException();
		}
		pCVar2 = item.Left;
		if (pCVar2 != null) {
			bVar1 = (typeof(CustomLogicVariableExpressionAst)._2).typeHierarchyDepth;
			if ((bVar1 <= (pCVar2.klass._2).typeHierarchyDepth) &&((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicVariableExpressionAst))) {
				bVar3 = ((String)(*(ulong)((sbyte)pCVar2 + 0x18)) == this.variableName);
				return bVar3;
			}
		}
		return false;
	}

	// CustomLogic.CustomLogicEvaluator.<>c__DisplayClass41_0$$.ctor: clean
	private void c__DisplayClass41_0__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicEvaluator.<>c__DisplayClass41_0$$<ApplyComponentInspectorRules>b__0: 1 lines keep C-only constructs
	private bool c__DisplayClass41_0__ApplyComponentInspectorRules_b__0(CustomLogicAssignmentExpressionAst item)
	{
		byte bVar1;
		CustomLogicBaseExpressionAst pCVar2;
		bool bVar3;

		if (item == null) {
			throw new NullReferenceException();
		}
		pCVar2 = item.Left;
		if (pCVar2 != null) {
			bVar1 = (typeof(CustomLogicVariableExpressionAst)._2).typeHierarchyDepth;
			if ((bVar1 <= (pCVar2.klass._2).typeHierarchyDepth) &&((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicVariableExpressionAst))) {
				bVar3 = ((String)(*(ulong)((sbyte)pCVar2 + 0x18)) == this.variableName);
				return bVar3;
			}
		}
		return false;
	}
}
