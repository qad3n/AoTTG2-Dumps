// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace CustomLogic.OfflineEvaluator;

[Token(Token = "0x200065A")]
public class OfflineCustomLogicEvaluator
{
	[Token(Token = "0x4001C20")]
	[FieldOffset(Offset = "0x10")]
	private CustomLogicEvaluator _evaluator;

	[Token(Token = "0x4001C21")]
	[FieldOffset(Offset = "0x18")]
	private CustomLogicCompiler _compiler;

	[Token(Token = "0x4001C22")]
	[FieldOffset(Offset = "0x20")]
	private CustomLogicClassInstance _mainInstance;

	[Token(Token = "0x4001C23")]
	[FieldOffset(Offset = "0x0")]
	private static readonly HashSet<string> OfflineCompatibleBuiltins;

	[Token(Token = "0x6003CFF")]
	[Address(RVA = "0x5A8FC60", Offset = "0x5A8EC60", VA = "0x5A8FC60")]
	public OfflineCustomLogicEvaluator(string script)
	{
		// Lifted from source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c (CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$.ctor): clean
		CustomLogicCompiler pCVar1;
		MethodInfo pMVar2;
		OfflineCustomLogicEvaluator __this_00;

		pMVar2 = null;
		__this_00 = this;
		base();
		__this_00.InitializeSymbols();
		pCVar1 = new CustomLogicCompiler();
		this._compiler = pCVar1;
		pCVar1 = this._compiler;
		pMVar2 = new CustomLogicSourceFile("TestScript.cl", script, 4);
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		pCVar1.AddSourceFile((CustomLogicSourceFile)pMVar2);
		this.CompileAndInitialize();
		return;
	}

	[Token(Token = "0x6003D00")]
	[Address(RVA = "0x5A90120", Offset = "0x5A8F120", VA = "0x5A90120")]
	public OfflineCustomLogicEvaluator(CustomLogicCompiler compiler)
	{
		// Lifted from source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c (CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$.ctor): clean
		OfflineCustomLogicEvaluator __this_00;

		__this_00 = this;
		base();
		__this_00.InitializeSymbols();
		this._compiler = compiler;
		this.CompileAndInitialize();
		return;
	}

	[Token(Token = "0x6003D01")]
	[Address(RVA = "0x5A8FD40", Offset = "0x5A8ED40", VA = "0x5A8FD40")]
	private void InitializeSymbols()
	{
		// Lifted from source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c (CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$InitializeSymbols): clean
		uint uVar1;
		Dictionary<object, int> __this_00;
		int iVar2;

		if (Il2CppMethodInitialized_075473f0 == false) {
			Il2CppMethodInitialized_075473f0 = true;
			uVar1 = (typeof(CustomLogicSymbols)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicSymbols)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = (Dictionary<object, int>)CustomLogicSymbols.Symbols;
		}
		else {
			__this_00 = *(Dictionary<object, int>*)(typeof(CustomLogicSymbols)).static_fields;
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		iVar2 = __this_00.Count;
		if (iVar2 != 0) {
			return;
		}
		if ((typeof(CustomLogicSymbols)._2).cctor_finished_or_no_cctor == 0) {
			CustomLogicSymbols.Init();
			return;
		}
		CustomLogicSymbols.Init();
		return;
	}

	[Token(Token = "0x6003D02")]
	[Address(RVA = "0x5A8FDF0", Offset = "0x5A8EDF0", VA = "0x5A8FDF0")]
	private void CompileAndInitialize()
	{
		// Lifted from source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c (CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$CompileAndInitialize): 7 lines keep C-only constructs
		OfflineCustomLogicEvaluator targetAddress;
		CustomLogicCompiler pCVar1;
		Dictionary<object, object> pSVar3;
		bool bVar4;
		String pSVar5;
		CustomLogicLexer __this_00;
		List<CustomLogicToken> tokens;
		CustomLogicParser __this_01;
		CustomLogicStartAst pCVar6;
		CustomLogicEvaluator pCVar7;
		CustomLogicClassInstance pCVar8;
		String str0;
		Il2CppClass klass;
		Exception __this_02;
		MethodInfo lastManagedFrame;
		String* metadataPointer;

		pCVar1 = this._compiler;
		if (pCVar1 != null) {
			pSVar5 = pCVar1.Compile();
			pCVar1 = this._compiler;
			__this_00 = new CustomLogicLexer(pSVar5, pCVar1);
			if (__this_00 != null) {
				tokens = __this_00.GetTokens();
				bVar4 = String.IsNullOrEmpty(__this_00.Error);
				if (!bVar4) {
					pSVar5 = __this_00.Error;
					metadataPointer = &"Lexer error: ";
	label_05b900c3: ;
					str0 = il2cpp_codegen_get_runtime_metadata(metadataPointer);
					pSVar5 = String.Concat(str0, pSVar5);
					klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
					__this_02 = (Exception)il2cpp_codegen_object_new(klass);
					__this_02 = new Exception(pSVar5);
					lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_CompileAndInitialize);
					throw (object)__this_02;
				}
				pCVar1 = this._compiler;
				__this_01 = new CustomLogicParser(tokens, pCVar1);
				if (__this_01 != null) {
					pCVar6 = __this_01.GetStartAst();
					bVar4 = String.IsNullOrEmpty(__this_01.Error);
					if (!bVar4) {
						pSVar5 = __this_01.Error;
						metadataPointer = &"Parser error: ";
						goto label_05b900c3;
					}
					pCVar1 = this._compiler;
					pCVar7 = new CustomLogicEvaluator(pCVar6, pCVar1);
					targetAddress = &this.fields;
					this._evaluator = pCVar7;
					pCVar7 = this._evaluator;
					if (pCVar7 != null) {
						pCVar7._CaptureErrors_k__BackingField = true;
						CustomLogicManager.Evaluator = pCVar7;
						this.InitializeStaticClasses();
						this.CallInitOnStaticClasses();
						if (targetAddress._evaluator != null) {
							pCVar6 = targetAddress._evaluator._start;
							if (pCVar6 == null) {
								return;
							}
							pSVar3 = (Dictionary<object, object>)pCVar6.Classes;
							if (pSVar3 != null) {
								bVar4 = pSVar3.ContainsKey((Il2CppObject *)"Main");
								pSVar5 = "Main";
								if (!bVar4) {
									return;
								}
								if (targetAddress._evaluator != null) {
									pSVar3 = (Dictionary<object, object>)targetAddress._evaluator._staticClasses;
									if ((pSVar3 == null) ||(bVar4 = pSVar3.ContainsKey((object)pSVar5), !bVar4)) {
										pCVar8 = null;
									}
									else {
										pCVar8 = pSVar3.get_Item((object)pSVar5);
									}
									this._mainInstance = pCVar8;
									return;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003D03")]
	[Address(RVA = "0x5A90160", Offset = "0x5A8F160", VA = "0x5A90160")]
	private void InitializeStaticClasses()
	{
		// Lifted from source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c (CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$InitializeStaticClasses): 49 lines keep C-only constructs
		byte bVar1;
		CustomLogicEvaluator pCVar2;
		Dictionary<object, object> __this_00;
		Dictionary<object, object> __this_01;
		HashSet<object> pSVar3;
		Object[] args;
		Dictionary<object, object> pSVar4;
		CustomLogicToken pCVar5;
		object pIVar6;
		Dictionary<string, CustomLogicSourceType> pSVar7;
		bool bVar8;
		int key;
		BuiltinClassInstance value;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_02;
		CustomLogicClassDefinitionAst pCVar9;
		int piVar10;
		CustomLogicClassInstance pCVar11;
		Dictionary<CustomLogicSourceType, CustomLogicClassInstance> __this_03;
		Dictionary<TKey, TValue> pSVar12;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o pSVar13;
		MethodInfo* method_00;
		CustomLogicStartAst pCVar14;
		byte[] local_110 = new byte[16];
		Dictionary<TKey, TValue> local_100;
		Nullable<CustomLogicSourceType> local_f8;
		CustomLogicStartAst local_f0;
		int local_e8;
		int local_e4;
		Nullable<CustomLogicSourceType> local_e0;
		byte[] local_d8 = new byte[8];
		ulong uStack_d0;
		Dictionary<TKey, TValue> local_c8;
		byte[] local_b8 = new byte[8];
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o pSStack_b0;
		Dictionary<TKey, TValue> local_a8;
		byte[] local_98 = new byte[8];
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o pSStack_90;
		Dictionary<TKey, TValue> local_88;
		byte[] local_78 = new byte[8];
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o pSStack_70;
		Dictionary<TKey, TValue> local_68;
		byte[] local_58 = new byte[8];
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o pSStack_50;
		Dictionary<TKey, TValue> local_48;

		if (Il2CppMethodInitialized_075473f2 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(Dictionary<CustomLogicSourceType, CustomLogicClassInstance>)) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_get_HasValue) ;
			Il2CppMethodInitialized_075473f2 = true;
		}
		local_78 = (byte[])0x0;
		local_68 = null;
		local_98 = (byte[])0x0;
		local_88 = null;
		local_f8.hasValue = false;
		local_f8._1_3_ = 0;
		local_f8.value = 0;
		local_e4 = 0;
		local_e0.hasValue = false;
		local_e0._1_3_ = 0;
		local_e0.value = 0;
		local_e8 = 0;
		local_b8 = (byte[])0x0;
		local_a8 = null;
		local_d8 = (byte[])0x0;
		uStack_d0._0_4_ = 0;
		uStack_d0._4_4_ = 0;
		local_c8 = null;
		local_58 = (byte[])0x0;
		local_48 = null;
		pCVar2 = this._evaluator;
		if (pCVar2 != null) {
			local_f0 = pCVar2._start;
			__this_00 = (Dictionary<object, object>)pCVar2._staticClasses;
			__this_01 = (Dictionary<object, object>)pCVar2._namespacedStaticClasses;
			pSVar3 = (HashSet<object>)CustomLogicBuiltinTypes.StaticTypeNames;
			if (pSVar3 != null) {
				local_110.GetEnumerator(pSVar3);
				local_68 = local_100;
				local_78 = (byte[])local_110._0_8_;
				pSStack_70 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_110._8_8_;
				local_110._0_8_ = null;
				local_110._8_8_ =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_78;
				while (true) {
					bVar8 = local_78.MoveNext();
					pSVar12 = local_68;
					if (!(bVar8)) break;
					pSVar3 = (HashSet<object>)OfflineCustomLogicEvaluator. OfflineCompatibleBuiltins;
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					bVar8 = pSVar3.Contains((object)pSVar12);
					if (bVar8) {
						args = CustomLogicEvaluator.EmptyArgs;
						value = CustomLogicBuiltinTypes.CreateClassInstance((String)pSVar12, args);
						if (__this_00 == null) {
							throw new NullReferenceException();
						}
						__this_00.set_Item((object)pSVar12, (object)value);
					}
				}
				local_78.Dispose();
				pCVar14 = local_f0;
				if (((local_f0 != null) &&(pSVar4 = (Dictionary<object, object>)local_f0.Classes, pSVar4 != null)) &&(__this_02 = pSVar4.Keys, __this_02 != null)) {
					method_00 = & MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_CustomLogicClassDefinitionAst_GetEnum ;
					local_110.GetEnumerator(__this_02);
					local_88 = local_100;
					local_98 = (byte[])local_110._0_8_;
					pSStack_90 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_110._8_8_;
					local_110._0_8_ = null;
					local_110._8_8_ =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_98;
					while (true) {
						bVar8 = local_98.MoveNext();
						pSVar12 = local_88;
						if (!(bVar8)) break;
						bVar8 = ((String)local_88 == "Main");
						if (bVar8) {
							this.CreateStaticClassInternal((String)pSVar12, (Dictionary<string, CustomLogicClassInstance>)__this_00);
						}
						else {
							pSVar4 = (Dictionary<object, object>)pCVar14.Classes;
							if (pSVar4 == null) {
								throw new NullReferenceException();
							}
							pCVar9 = pSVar4.get_Item((object)pSVar12);
							if (pCVar9 == null) {
								throw new NullReferenceException();
							}
							pCVar5 = pCVar9.Token;
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
							piVar10 = il2cpp_vm_Object_Unbox(pIVar6);
							if (*piVar10 == 2) {
								local_f8.hasValue = false;
								local_f8._1_3_ = 0;
								local_f8.value = 0;
								pSVar7 = pCVar14.ClassNamespaces;
								if (pSVar7 == null) {
									throw new NullReferenceException();
								}
								bVar8 = pSVar7.TryGetValue((object)pSVar12, ref local_e4);
								if (bVar8) {
									local_f8 = new Nullable<Int32Enum>(local_e4);
								}
								pCVar2 = this._evaluator;
								if (pCVar2 == null) {
									throw new NullReferenceException();
								}
								pCVar11 = pCVar2.CreateClassInstance((String)pSVar12, CustomLogicEvaluator.EmptyArgs, false, (Nullable<CustomLogicSourceType>)local_f8);
								pCVar14 = local_f0;
								if (pCVar11 == null) {
									throw new NullReferenceException();
								}
								pCVar11._Namespace_k__BackingField = local_f8;
								if ((typeof(CustomLogicBuiltinTypes)._2).cctor_finished_or_no_cctor == 0) {
									il2cpp_codegen_runtime_class_init(typeof(CustomLogicBuiltinTypes)) ;
								}
								pSVar3 = (HashSet<object>)CustomLogicBuiltinTypes.StaticTypeNames;
								if (pSVar3 == null) {
									throw new NullReferenceException();
								}
								bVar8 = pSVar3.Contains((object)pSVar12);
								if (bVar8) {
									if (__this_01 == null) {
										throw new NullReferenceException();
									}
									bVar8 = __this_01.ContainsKey((object)pSVar12);
									if (!bVar8) {
										__this_03 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<CustomLogicSourceType, CustomLogicClassInstance>));
										__this_03 = new Dictionary<Int32Enum, object>();
										method_00 = (MethodInfo*)MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_CustomLogicSourceType_CustomLogicClassIn_718adc0 ;
										__this_01.set_Item((object)pSVar12, (object)__this_03);
									}
									pCVar14 = local_f0;
									if (local_f8.hasValue != false) {
										pSVar12 = (Dictionary<TKey, TValue>)__this_01.get_Item((object)pSVar12);
										key = local_f8.Value;
										if (pSVar12 == null) {
											throw new NullReferenceException();
										}
										method_00 = (MethodInfo*)MethodInfo_System_Collections_Generic_Dictionary_CustomLogicSourceType_CustomLogicClassInstance_set_Item ;
										pSVar12.set_Item(key, (object)pCVar11);
										pCVar14 = local_f0;
									}
								}
								else {
									if (__this_00 == null) {
										throw new NullReferenceException();
									}
									method_00 = (MethodInfo*)MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_set_Item ;
									__this_00.set_Item((object)pSVar12, (object)pCVar11);
								}
							}
							else {
								pSVar4 = (Dictionary<object, object>)pCVar14.Classes;
								if (pSVar4 == null) {
									throw new NullReferenceException();
								}
								pCVar9 = pSVar4.get_Item((object)pSVar12);
								if (pCVar9 == null) {
									throw new NullReferenceException();
								}
								pCVar5 = pCVar9.Token;
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
								piVar10 = il2cpp_vm_Object_Unbox(pIVar6);
								if (*piVar10 == 3) {
									local_e0.hasValue = false;
									local_e0._1_3_ = 0;
									local_e0.value = 0;
									pSVar7 = pCVar14.ClassNamespaces;
									if (pSVar7 == null) {
										throw new NullReferenceException();
									}
									bVar8 = pSVar7.TryGetValue((object)pSVar12, ref local_e8);
									if (bVar8) {
										local_e0 = new Nullable<Int32Enum>(local_e8);
									}
									pCVar2 = this._evaluator;
									if (pCVar2 == null) {
										throw new NullReferenceException();
									}
									pCVar11 = pCVar2.CreateClassInstance((String)pSVar12, CustomLogicEvaluator.EmptyArgs, false, (Nullable<CustomLogicSourceType>)local_e0);
									pCVar14 = local_f0;
									if (pCVar11 == null) {
										throw new NullReferenceException();
									}
									pCVar11._Namespace_k__BackingField = local_e0;
									if (__this_00 == null) {
										throw new NullReferenceException();
									}
									method_00 = (MethodInfo*)MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassInstance_set_Item ;
									__this_00.set_Item((object)pSVar12, (object)pCVar11);
								}
							}
						}
					}
					local_98.Dispose();
					if ((__this_00 != null) &&(pSVar13 = __this_00.Values, pSVar13 != null)) {
						local_110.GetEnumerator(pSVar13);
						local_a8 = local_100;
						local_b8 = (byte[])local_110._0_8_;
						pSStack_b0 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_110._8_8_;
						local_110._0_8_ = null;
						local_110._8_8_ =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_b8;
	label_05b90aa0: ;
						bVar8 = local_b8.MoveNext();
						if (bVar8) {
							if (local_a8 != null) goto code_r0x05b90abc;
							goto label_05b90ae0;
						}
						local_b8.Dispose();
						if ((__this_01 != null) &&(pSVar13 = __this_01.Values, pSVar13 != null)) {
							local_110.GetEnumerator(pSVar13);
							local_c8 = local_100;
							local_d8 = (byte[])local_110._0_8_;
							uStack_d0 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_110._8_8_;
							do {
								bVar8 = local_d8.MoveNext();
								if (!bVar8) {
									local_d8.Dispose();
									return;
								}
								if (local_c8 == null) {
									throw new NullReferenceException();
								}
								pSVar13 = local_c8.Values;
								if (pSVar13 == null) {
									throw new NullReferenceException();
								}
								local_110.GetEnumerator(pSVar13);
								local_48 = local_100;
								local_58 = (byte[])local_110._0_8_;
								pSStack_50 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_110._8_8_;
								local_110._0_8_ = null;
								local_110._8_8_ =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_58;
	label_05b90c20: ;
								bVar8 = local_58.MoveNext();
								if (bVar8) {
									if (local_48 != null) goto code_r0x05b90c3d;
									goto label_05b90c61;
								}
								local_58.Dispose();
							} while(true);
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	code_r0x05b90abc: ;
		bVar1 = (typeof(BuiltinClassInstance)._2).typeHierarchyDepth;
		if (((local_a8.klass._2).typeHierarchyDepth < bVar1) ||((local_a8.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(BuiltinClassInstance))) {
	label_05b90ae0: ;
			pCVar2 = this._evaluator;
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			pCVar2.RunAssignmentsClassInstance((CustomLogicClassInstance)local_a8);
		}
		goto label_05b90aa0;
	code_r0x05b90c3d: ;
		bVar1 = (typeof(BuiltinClassInstance)._2).typeHierarchyDepth;
		if (((local_48.klass._2).typeHierarchyDepth < bVar1) ||((local_48.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(BuiltinClassInstance))) {
	label_05b90c61: ;
			pCVar2 = this._evaluator;
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			pCVar2.RunAssignmentsClassInstance((CustomLogicClassInstance)local_48);
		}
		goto label_05b90c20;
	}

	[Token(Token = "0x6003D04")]
	[Address(RVA = "0x5A91030", Offset = "0x5A90030", VA = "0x5A91030")]
	private void CallInitOnStaticClasses()
	{
		// Lifted from source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c (CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$CallInitOnStaticClasses): 3 lines keep C-only constructs
		CustomLogicEvaluator pCVar1;
		Dictionary<object, object> __this_00;
		object pIVar2;
		bool bVar3;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_01;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_58;
		byte local_30;

		local_58._dictionary = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._currentValue = null;
		pCVar1 = this._evaluator;
		if ((pCVar1 != null) &&(__this_00 = (Dictionary<object, object>)pCVar1._staticClasses, __this_00 != null)) {
			__this_01 = __this_00.Values;
			if (__this_01 != null) {
				local_58 = __this_01.GetEnumerator();
				local_30 = (byte)&local_58;
				while(true) {
					bVar3 = local_58.MoveNext();
					pIVar2 = local_58._currentValue;
					if (!bVar3) {
						local_58.Dispose();
						return;
					}
					pCVar1 = this._evaluator;
					if (pCVar1 == null) break;
					pCVar1.EvaluateMethod((CustomLogicClassInstance)local_58._currentValue, "Init", null, 0);
					if ((CustomLogicClassInstance)pIVar2 == null) {
						throw new NullReferenceException();
					}
					((CustomLogicClassInstance)((long)pIVar2 + 0x10)).Inited = true;
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003D05")]
	[Address(RVA = "0x5A91320", Offset = "0x5A90320", VA = "0x5A91320")]
	private void CreateStaticClassInternal(string className, Dictionary<string, CustomLogicClassInstance> staticClasses)
	{
		// Lifted from source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c (CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$CreateStaticClassInternal): 1 lines keep C-only constructs
		CustomLogicEvaluator pCVar1;
		CustomLogicStartAst pCVar2;
		Dictionary<string, CustomLogicSourceType> __this_00;
		bool bVar3;
		CustomLogicClassInstance value;
		int local_2c;
		Nullable<CustomLogicSourceType> local_28;

		local_2c = 0;
		if (staticClasses != null) {
			bVar3 = staticClasses.ContainsKey((object)className);
			if (bVar3) {
				return;
			}
			pCVar1 = this._evaluator;
			if (pCVar1 != null) {
				pCVar2 = pCVar1._start;
				local_28.hasValue = false;
				local_28._1_3_ = 0;
				local_28.value = 0;
				if ((pCVar2 != null) &&(__this_00 = pCVar2.ClassNamespaces, __this_00 != null)) {
					bVar3 = __this_00.TryGetValue((object)className, ref local_2c);
					if (bVar3) {
						local_28 = new Nullable<Int32Enum>(local_2c);
					}
					pCVar1 = this._evaluator;
					if ((pCVar1 != null) &&(value = pCVar1.CreateClassInstance(className, CustomLogicEvaluator.EmptyArgs, false, (Nullable<CustomLogicSourceType>)local_28), value != null)) {
						value._Namespace_k__BackingField = local_28;
						staticClasses.Add((object)className, (object)value);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003D06")]
	[Address(RVA = "0x5A91490", Offset = "0x5A90490", VA = "0x5A91490")]
	private void RunAssignmentsClassInstance(CustomLogicClassInstance classInstance)
	{
		// Lifted from source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c (CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$RunAssignmentsClassInstance): clean
		CustomLogicEvaluator __this_00;

		__this_00 = this._evaluator;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.RunAssignmentsClassInstance(classInstance);
		return;
	}

	[Token(Token = "0x6003D07")]
	[Address(RVA = "0x5A912E0", Offset = "0x5A902E0", VA = "0x5A912E0")]
	private CustomLogicStartAst GetStartAst()
	{
		// Lifted from source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c (CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetStartAst): clean
		CustomLogicEvaluator pCVar1;

		pCVar1 = this._evaluator;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		return pCVar1._start;
	}

	[Token(Token = "0x6003D08")]
	[Address(RVA = "0x5A91300", Offset = "0x5A90300", VA = "0x5A91300")]
	private Dictionary<string, CustomLogicClassInstance> GetStaticClassesDictionary()
	{
		// Lifted from source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c (CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetStaticClassesDictionary): clean
		CustomLogicEvaluator pCVar1;

		pCVar1 = this._evaluator;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		return pCVar1._staticClasses;
	}

	[Token(Token = "0x6003D09")]
	[Address(RVA = "0x5A91250", Offset = "0x5A90250", VA = "0x5A91250")]
	public CustomLogicClassInstance GetStaticClass(string className)
	{
		// Lifted from source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c (CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetStaticClass): clean
		CustomLogicEvaluator pCVar1;
		Dictionary<object, object> __this_00;
		bool bVar2;
		CustomLogicClassInstance pCVar3;

		pCVar1 = this._evaluator;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		__this_00 = (Dictionary<object, object>)pCVar1._staticClasses;
		if (__this_00 != null) {
			bVar2 = __this_00.ContainsKey((object)className);
			if (bVar2) {
				pCVar3 = __this_00.get_Item((object)className);
				return pCVar3;
			}
		}
		return null;
	}

	[Token(Token = "0x6003D0A")]
	[Address(RVA = "0x5A914B0", Offset = "0x5A904B0", VA = "0x5A914B0")]
	public void CreateStaticClass(string className)
	{
		// Lifted from source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c (CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$CreateStaticClass): clean
		CustomLogicEvaluator pCVar1;

		pCVar1 = this._evaluator;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		this.CreateStaticClassInternal(className, pCVar1._staticClasses);
		return;
	}

	[Token(Token = "0x6003D0B")]
	[Address(RVA = "0x5A911E0", Offset = "0x5A901E0", VA = "0x5A911E0")]
	public bool HasMainClass()
	{
		// Lifted from source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c (CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$HasMainClass): clean
		CustomLogicEvaluator pCVar1;
		CustomLogicStartAst pCVar2;
		Dictionary<object, object> __this_00;
		bool bVar3;

		pCVar1 = this._evaluator;
		if (pCVar1 != null) {
			pCVar2 = pCVar1._start;
			if (pCVar2 == null) {
				return false;
			}
			__this_00 = (Dictionary<object, object>)pCVar2.Classes;
			if (__this_00 != null) {
				bVar3 = __this_00.ContainsKey((Il2CppObject *)"Main");
				return bVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003D0C")]
	[Address(RVA = "0x5A914D0", Offset = "0x5A904D0", VA = "0x5A914D0")]
	public CustomLogicClassInstance GetMainInstance()
	{
		// Lifted from source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c (CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetMainInstance): clean
		return this._mainInstance;
	}

	[Token(Token = "0x6003D0D")]
	[Address(RVA = "0x5A914E0", Offset = "0x5A904E0", VA = "0x5A914E0")]
	public object EvaluateMethod(CustomLogicClassInstance instance, string methodName, params object[] parameters)
	{
		// Lifted from source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c (CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$EvaluateMethod): clean
		CustomLogicEvaluator __this_00;
		object pIVar1;

		__this_00 = this._evaluator;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pIVar1 = __this_00.EvaluateMethod(instance, methodName, parameters, 0);
		return pIVar1;
	}

	[Token(Token = "0x6003D0E")]
	[Address(RVA = "0x5A91500", Offset = "0x5A90500", VA = "0x5A91500")]
	public object EvaluateMethod(string className, string methodName, params object[] parameters)
	{
		// Lifted from source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c (CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$EvaluateMethod): clean
		CustomLogicEvaluator pCVar1;
		CustomLogicClassInstance classInstance;
		object pIVar2;

		pCVar1 = this._evaluator;
		if (pCVar1 != null) {
			classInstance = pCVar1.CreateClassInstance(className, CustomLogicEvaluator.EmptyArgs, true);
			pCVar1 = this._evaluator;
			if (pCVar1 != null) {
				pIVar2 = pCVar1.EvaluateMethod(classInstance, methodName, parameters, 0);
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003D0F")]
	[Address(RVA = "0x5A915B0", Offset = "0x5A905B0", VA = "0x5A915B0")]
	public CustomLogicClassInstance CreateClassInstance(string className, bool init = true)
	{
		// Lifted from source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c (CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$CreateClassInstance): clean
		CustomLogicEvaluator __this_00;
		CustomLogicClassInstance pCVar1;

		__this_00 = this._evaluator;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __this_00.CreateClassInstance(className, CustomLogicEvaluator.EmptyArgs, init, (Nullable<CustomLogicSourceType>)0x0);
		return pCVar1;
	}

	[Token(Token = "0x6003D10")]
	[Address(RVA = "0x5A91630", Offset = "0x5A90630", VA = "0x5A91630")]
	public object EvaluateMainMethod(string methodName, params object[] parameters)
	{
		// Lifted from source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c (CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$EvaluateMainMethod): 5 lines keep C-only constructs
		CustomLogicClassInstance classInstance;
		CustomLogicEvaluator __this_00;
		object pIVar1;
		Il2CppClass klass;
		Exception __this_01;
		String message;
		MethodInfo lastManagedFrame;

		classInstance = this._mainInstance;
		if (classInstance == null) {
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_01 = (Exception)il2cpp_codegen_object_new(klass);
			message = il2cpp_codegen_get_runtime_metadata(&"Main class not found or not initialized");
			__this_01 = new Exception(message);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_EvaluateMainMethod);
			throw (object)__this_01;
		}
		__this_00 = this._evaluator;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pIVar1 = __this_00.EvaluateMethod(classInstance, methodName, parameters, 0);
		return pIVar1;
	}

	[Token(Token = "0x6003D11")]
	[Address(RVA = "0x5A916B0", Offset = "0x5A906B0", VA = "0x5A916B0")]
	public object GetMainVariable(string variableName)
	{
		// Lifted from source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c (CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetMainVariable): 5 lines keep C-only constructs
		CustomLogicClassInstance __this_00;
		object pIVar1;
		Il2CppClass klass;
		Exception __this_01;
		String message;
		MethodInfo lastManagedFrame;

		__this_00 = this._mainInstance;
		if (__this_00 == null) {
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_01 = (Exception)il2cpp_codegen_object_new(klass);
			message = il2cpp_codegen_get_runtime_metadata(&"Main class not found or not initialized");
			__this_01 = new Exception(message);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_GetMainVariable);
			throw (object)__this_01;
		}
		return pIVar1;
	}

	[Token(Token = "0x6003D12")]
	[Address(RVA = "0x5A91710", Offset = "0x5A90710", VA = "0x5A91710")]
	public void SetMainVariable(string variableName, object value)
	{
		// Lifted from source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c (CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$SetMainVariable): 5 lines keep C-only constructs
		CustomLogicClassInstance pCVar1;
		Dictionary<object, object> __this_00;
		Il2CppClass klass;
		Exception __this_01;
		String message;
		MethodInfo lastManagedFrame;

		pCVar1 = this._mainInstance;
		if (pCVar1 == null) {
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_01 = (Exception)il2cpp_codegen_object_new(klass);
			message = il2cpp_codegen_get_runtime_metadata(&"Main class not found or not initialized");
			__this_01 = new Exception(message);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_SetMainVariable);
			throw (object)__this_01;
		}
		__this_00 = (Dictionary<object, object>)pCVar1.Variables;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.set_Item((object)variableName, value);
		return;
	}

	[Token(Token = "0x6003D13")]
	[Address(RVA = "0x5A917C0", Offset = "0x5A907C0", VA = "0x5A917C0")]
	public CustomLogicCompiler GetCompiler()
	{
		// Lifted from source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c (CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetCompiler): clean
		return this._compiler;
	}

	[Token(Token = "0x6003D14")]
	[Address(RVA = "0x5A917D0", Offset = "0x5A907D0", VA = "0x5A917D0")]
	public List<CustomLogicError> GetCapturedErrors()
	{
		// Lifted from source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c (CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetCapturedErrors): clean
		CustomLogicEvaluator pCVar1;

		pCVar1 = this._evaluator;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		return pCVar1._CapturedErrors_k__BackingField;
	}

	[Token(Token = "0x6003D15")]
	[Address(RVA = "0x5A917F0", Offset = "0x5A907F0", VA = "0x5A917F0")]
	public bool HasErrors()
	{
		// Lifted from source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c (CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$HasErrors): clean
		CustomLogicEvaluator pCVar1;
		List<CustomLogicError> pSVar2;

		pCVar1 = this._evaluator;
		if ((pCVar1 == null) ||(pSVar2 = pCVar1._CapturedErrors_k__BackingField, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		return 0 < pSVar2._size;
	}

	[Token(Token = "0x6003D16")]
	[Address(RVA = "0x5A91840", Offset = "0x5A90840", VA = "0x5A91840")]
	public void ClearErrors()
	{
		// Lifted from source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c (CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$ClearErrors): clean
		CustomLogicEvaluator __this_00;

		__this_00 = this._evaluator;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.ClearCapturedErrors();
		return;
	}

	[Token(Token = "0x6003D17")]
	[Address(RVA = "0x5A91860", Offset = "0x5A90860", VA = "0x5A91860")]
	public CustomLogicError GetLastError()
	{
		// Lifted from source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c (CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetLastError): clean
		int iVar1;
		CustomLogicEvaluator pCVar2;
		List<CustomLogicError> __this_00;
		CustomLogicError pCVar3;

		pCVar2 = this._evaluator;
		if ((pCVar2 == null) ||(__this_00 = pCVar2._CapturedErrors_k__BackingField, __this_00 == null)) {
			throw new NullReferenceException();
		}
		iVar1 = __this_00._size;
		if (iVar1 < 1) {
			return null;
		}
		pCVar3 = __this_00.get_Item(iVar1 + -1);
		return pCVar3;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/OfflineEvaluator/OfflineCustomLogicEvaluator.c.

	// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$.cctor: clean
	static OfflineCustomLogicEvaluator()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Math");
		__this.Add((Il2CppObject *)"Convert");
		__this.Add((Il2CppObject *)"Json");
		__this.Add((Il2CppObject *)"Random");
		__this.Add((Il2CppObject *)"String");
		__this.Add((Il2CppObject *)"List");
		__this.Add((Il2CppObject *)"Set");
		__this.Add((Il2CppObject *)"Dict");
		__this.Add((Il2CppObject *)"Range");
		__this.Add((Il2CppObject *)"Vector2");
		__this.Add((Il2CppObject *)"Vector3");
		__this.Add((Il2CppObject *)"Quaternion");
		__this.Add((Il2CppObject *)"Color");
		OfflineCustomLogicEvaluator.OfflineCompatibleBuiltins = __this;
		return;
	}
}
