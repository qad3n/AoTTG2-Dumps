// ==================== AoTTG2 cross-reference ====================
// Type: Settings.HashSetSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/HashSetSetting.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x200010B")]
internal class HashSetSetting<T> : TypedSetting<HashSet<T>>
{
	[Token(Token = "0x600058A")]
	public HashSetSetting(HashSet<T> defaultValue)
	{
	}

	[Token(Token = "0x600058B")]
	public HashSetSetting()
	{
	}

	[Token(Token = "0x600058C")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x600058D")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x600058E")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x600058F")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000590")]
	public void Add(T item)
	{
	}

	[Token(Token = "0x6000591")]
	public void Remove(T item)
	{
	}

	[Token(Token = "0x6000592")]
	public void Toggle(T item)
	{
	}

	[Token(Token = "0x6000593")]
	public void Clear()
	{
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Settings/HashSetSetting.c.

	// Settings.HashSetSetting<int>$$.ctor: clean
	private void int___ctor(HashSet<T> defaultValue)
	{
		base((object)defaultValue);
		return;
	}

	// Settings.HashSetSetting<int>$$.ctor: 8 lines keep C-only constructs
	private void int___ctor()
	{
		Il2CppMethodPointer vtableDispatch;
		Il2CppClass klass;
		HashSet<int> __this_00;
		ulong extraout_RDX;

		base();
		klass = method.klass.rgctx_data._0_System_Collections_Generic_HashSet_T_;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		__this_00 = (HashSet<int>)il2cpp_codegen_object_new(klass);
		__this_00 = new HashSet<int>();
		this.DefaultValue = (HashSet<T>)__this_00;
		vtableDispatch = (this.klass.vtable)._4_SetDefault.methodPtr;
		(*vtableDispatch)(this,(this.klass.vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
		return;
	}

	// Settings.HashSetSetting<int>$$SetDefault: 5 lines keep C-only constructs
	private void int__SetDefault()
	{
		HashSet<T> collection;
		Il2CppClass klass;
		HashSet<int> __this_00;

		collection = this.DefaultValue;
		klass = method.klass.rgctx_data._0_System_Collections_Generic_HashSet_T_;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		__this_00 = (HashSet<int>)il2cpp_codegen_object_new(klass);
		__this_00 = new HashSet<int>((IEnumerable<T>)collection);
		this.Value = (object)__this_00;
		return;
	}

	// Settings.HashSetSetting<int>$$DeserializeFromJsonObject: 11 lines keep C-only constructs
	private void int__DeserializeFromJsonObject(JSONNode json)
	{
		RuntimeTypeHandle SVar1;
		bool bVar2;
		Il2CppClass pIVar3;
		HashSet<int> __this_00;
		JSONArray pSVar4;
		JSONNode pSVar5;
		Type pSVar6;
		Type pSVar7;
		String obj;
		int piVar8;
		KeyValuePair<string, JSONNode> aKeyValue;
		JSONNode.Enumerator SStack_c0;
		JSONNode.Enumerator SStack_78;

		pIVar3 = method.klass.rgctx_data._0_System_Collections_Generic_HashSet_T_;
		if (((pIVar3._2).bitflags1 & 1) == 0) {
			pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
		}
		__this_00 = (HashSet<int>)il2cpp_codegen_object_new(pIVar3);
		__this_00 = new HashSet<int>();
		if ((json != null) &&(pSVar4 = json.get_AsArray(), pSVar4 != null)) {
			SStack_c0.GetEnumerator(pSVar4);
			SStack_78.m_Array._current = SStack_c0.m_Array._current;
			SStack_78.m_Array._list = SStack_c0.m_Array._list;
			SStack_78.m_Array._index = SStack_c0.m_Array._index;
			SStack_78.m_Array._version = SStack_c0.m_Array._version;
			SStack_78.m_Object._current.value = SStack_c0.m_Object._current.value;
			SStack_78.m_Object._getEnumeratorRetType = SStack_c0.m_Object._getEnumeratorRetType;
			SStack_78.m_Object._36_4_ = SStack_c0.m_Object._36_4_;
			SStack_78.m_Object._version = SStack_c0.m_Object._version;
			SStack_78.m_Object._index = SStack_c0.m_Object._index;
			SStack_78.m_Object._current.key = SStack_c0.m_Object._current.key;
			SStack_78.m_Object._dictionary = SStack_c0.m_Object._dictionary;
			bVar2 = SStack_78.MoveNext();
			if (bVar2) {
				do {
					aKeyValue = SStack_78.Current;
					pSVar5 = ((JSONNode)aKeyValue);
					SVar1.value = (RuntimeTypeHandle)method.klass.rgctx_data._9_T;
					pSVar6 = Type.GetTypeFromHandle(SVar1);
					pSVar7 = Type.GetTypeFromHandle(ref (g_data_07556710._1).byval_arg);
					bVar2 = (pSVar6 == pSVar7);
					if (bVar2) {
						if (pSVar5 == null) goto label_05064436;
						SStack_c0.type =pSVar5.get_AsInt();
						obj = (String)(object)SStack_c0;
						if (__this_00 == null) goto label_05064436;
	label_050643a5: ;
						pIVar3 = method.klass.rgctx_data._10_T;
						if (((pIVar3._2).bitflags1 & 1) == 0) {
							pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
						}
						if (obj == null) goto label_05064436;
						if ((obj.klass._1).element_class != (pIVar3._1).element_class) {
							throw new InvalidCastException();
						}
						piVar8 = il2cpp_vm_Object_Unbox((object)obj);
						__this_00.Add(*piVar8);
					}
					else {
						SVar1.value = (RuntimeTypeHandle)method.klass.rgctx_data._9_T;
						pSVar6 = Type.GetTypeFromHandle(SVar1);
						pSVar7 = Type.GetTypeFromHandle((RuntimeTypeHandle)(g_data_07556758 + 0x20));
						bVar2 = (pSVar6 == pSVar7);
						if (bVar2) {
							if ((pSVar5 != null) &&(obj = pSVar5.get_Value(), __this_00 != null)) goto label_050643a5;
							goto label_05064436;
						}
					}
					bVar2 = SStack_78.MoveNext();
				} while (bVar2);
			}
			if (this != null) {
				this.Value = (object)__this_00;
				return;
			}
		}
	label_05064436: ;
		throw new NullReferenceException();
	}

	// Settings.HashSetSetting<int>$$SerializeToJsonObject: 17 lines keep C-only constructs
	private JSONNode int__SerializeToJsonObject()
	{
		IntPtr data;
		HashSet<int> __this_00;
		RuntimeTypeHandle SVar1;
		uint uVar2;
		bool bVar3;
		JSONArray __this_01;
		Type pSVar4;
		Type pSVar5;
		object obj;
		int piVar6;
		JSONNode pSVar7;
		String s;
		object IStack_70;
		byte[] auStack_60 = new byte[16];
		object pIStack_50;
		System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;

		IStack_70.klass = (Il2CppClass)method;
		SStack_48._set = null;
		SStack_48._index = 0;
		SStack_48._version = 0;
		SStack_48._current = null;
		__this_01 = new JSONArray();
		if ((this == null) ||(__this_00 = (HashSet<int>)this._value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		auStack_60.GetEnumerator(__this_00);
		SStack_48._current = pIStack_50;
		SStack_48._set = (HashSet<T>)auStack_60._0_8_;
		SStack_48._index = auStack_60._8_4_;
		SStack_48._version = auStack_60._12_4_;
		auStack_60._0_8_ = null;
		pIStack_50 = &IStack_70;
		data = (IntPtr)((long)&IStack_70.monitor + 4);
		auStack_60._8_8_ = &SStack_48;
		while(true) {
			while(true) {
				bVar3 = SStack_48.MoveNext();
				if (!bVar3) {
					SStack_48.Dispose();
					return (JSONNode)__this_01;
				}
				uVar2 = SStack_48._current._0_4_;
				SVar1.value =(RuntimeTypeHandle)(((IStack_70.klass)._1).byval_arg.data).rgctx_data._9_T;
				pSVar4 = Type.GetTypeFromHandle(SVar1);
				pSVar5 = Type.GetTypeFromHandle((RuntimeTypeHandle)(g_data_07556710 + 0x20));
				bVar3 = (pSVar4 == pSVar5);
				if (bVar3) break;
				SVar1.value =(RuntimeTypeHandle)(((IStack_70.klass)._1).byval_arg.data).rgctx_data._9_T;
				pSVar4 = Type.GetTypeFromHandle(SVar1);
				pSVar5 = Type.GetTypeFromHandle(ref (g_data_07556758._1).byval_arg);
				bVar3 = (pSVar4 == pSVar5);
				if (bVar3) {
					IStack_70.monitor._4_4_ = uVar2;
					s = (String)(object)data;
					if ((s != null) && (s.klass != g_data_07556758)) {
						throw new InvalidCastException();
					}
					pSVar7 = ((JSONNode)s);
					if (__this_01 == null) {
						throw new NullReferenceException();
					}
					__this_01.Add(pSVar7);
				}
			}
			IStack_70.monitor._4_4_ = uVar2;
			obj = (object)data;
			if (obj == null) break;
			if ((obj.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
				throw new InvalidCastException();
			}
			piVar6 = il2cpp_vm_Object_Unbox(obj);
			pSVar7 = ((JSONNode)*piVar6);
			if (__this_01 == null) break;
			__this_01.Add(pSVar7);
		}
		throw new NullReferenceException();
	}

	// Settings.HashSetSetting<int>$$Contains: clean
	private bool int__Contains(int item)
	{
		HashSet<int> __this_00;
		bool bVar1;

		if ((this == null) ||(__this_00 = (HashSet<int>)this._value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		return bVar1;
	}

	// Settings.HashSetSetting<int>$$Add: clean
	private void int__Add(int item)
	{
		HashSet<int> __this_00;

		if ((this == null) ||(__this_00 = (HashSet<int>)this._value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Add(item);
		return;
	}

	// Settings.HashSetSetting<int>$$Remove: clean
	private void int__Remove(int item)
	{
		HashSet<int> __this_00;

		if ((this == null) ||(__this_00 = (HashSet<int>)this._value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Remove(item) ;
		return;
	}

	// Settings.HashSetSetting<int>$$Toggle: clean
	private void int__Toggle(int item)
	{
		HashSet<int> pSVar1;
		bool bVar2;

		if ((this != null) &&(pSVar1 = (HashSet<int>)this._value, pSVar1 != null)) {
			bVar2 = pSVar1.Contains(item);
			pSVar1 = (HashSet<int>)this._value;
			if (bVar2) {
				if (pSVar1 != null) {
					pSVar1.Remove(item);
					return;
				}
			}
			else if (pSVar1 != null) {
				pSVar1.Add(item);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Settings.HashSetSetting<int>$$Clear: clean
	private void int__Clear()
	{
		HashSet<int> __this_00;

		if ((this == null) ||(__this_00 = (HashSet<int>)this._value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.Clear();
		return;
	}

	// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$.ctor: 2 lines keep C-only constructs
	private void Il2CppFullySharedGenericType___ctor(HashSet<T> defaultValue)
	{
		MethodInfo pMVar1;
		HashSet<T> pSStack_8;

		pMVar1 = method.klass.rgctx_data._1_Settings_TypedSetting_HashSet_T____ctor;
		pSStack_8 = defaultValue;
		(*pMVar1.invoker_method)(pMVar1.methodPointer,pMVar1,this,&pSStack_8,defaultValue);
		return;
	}

	// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$.ctor: 10 lines keep C-only constructs
	private void Il2CppFullySharedGenericType___ctor()
	{
		Il2CppMethodPointer vtableDispatch;
		Il2CppClass klass;
		HashSet<T> pSVar1;
		ulong extraout_RDX;

		(*method.klass.rgctx_data._3_Settings_TypedSetting_HashSet_T____ctor.methodPointer)();
		klass = method.klass.rgctx_data._0_System_Collections_Generic_HashSet_T_;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		pSVar1 = (HashSet<T>)il2cpp_codegen_object_new(klass);
		(*method.klass.rgctx_data._4_System_Collections_Generic_HashSet_T___ctor.methodPointer)(pSVar1);
		this.DefaultValue = pSVar1;
		vtableDispatch = (this.klass.vtable)._4_SetDefault.methodPtr;
		(*vtableDispatch)(this,(this.klass.vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
		return;
	}

	// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$SetDefault: 8 lines keep C-only constructs
	private void Il2CppFullySharedGenericType__SetDefault()
	{
		HashSet<T> pSVar1;
		MethodInfo pMVar2;
		Il2CppClass klass;
		object pIVar3;
		object pIStack_28;

		pSVar1 = this.DefaultValue;
		klass = method.klass.rgctx_data._0_System_Collections_Generic_HashSet_T_;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		pIVar3 = il2cpp_codegen_object_new(klass);
		(*method.klass.rgctx_data._6_System_Collections_Generic_HashSet_T___ctor.methodPointer)(pIVar3,pSVar1);
		pMVar2 = method.klass.rgctx_data._8_Settings_TypedSetting_HashSet_T___set_Value;
		pIStack_28 = pIVar3;
		(*pMVar2.invoker_method)(pMVar2.methodPointer,pMVar2,this,&pIStack_28,pIVar3);
		return;
	}

	// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$DeserializeFromJsonObject: 39 lines keep C-only constructs
	private void Il2CppFullySharedGenericType__DeserializeFromJsonObject(JSONNode json)
	{
		Settings_HashSetSetting_T__RGCTXs pSVar1;
		_func_65 p_Var2;
		_func_68 p_Var3;
		InvokerMethod pIVar4;
		RuntimeTypeHandle SVar5;
		_func_4 p_Var6;
		_func_7 p_Var7;
		long lVar8;
		HashSetSetting<T> pSVar9;
		byte puVar10;
		bool bVar11;
		Il2CppClass pIVar12;
		JSONArray pSVar13;
		JSONNode pSVar14;
		Type pSVar15;
		Type pSVar16;
		object pIVar17;
		String pSVar18;
		byte puVar19;
		MethodInfo pMVar20;
		Il2CppMethodPointer pIVar21;
		int piVar22;
		KeyValuePair<string, JSONNode> aKeyValue;
		ulong uStack_b0;
		JSONNode.Enumerator local_a8;
		HashSetSetting<T> local_60;
		byte local_58;
		int local_4c;
		object local_48;
		object local_40;
		byte local_31;

		if (g_data_075420f0 == false) {
			uStack_b0 = 0x5064aaf;
			g_data_075420f0 = true;
		}
		pSVar1 = method.klass.rgctx_data;
		lVar8 = -((ulong)(pSVar1._10_T._2).stack_slot_size + 0xf & 0xfffffffffffffff0);
		puVar19 = (byte)((long)&local_a8 + lVar8);
		local_a8.m_Array._list = null;
		local_a8.m_Array._index = 0;
		local_a8.m_Array._version = 0;
		local_a8.m_Object._current.value = null;
		local_a8.m_Object._getEnumeratorRetType = 0;
		local_a8.m_Object._36_4_ = 0;
		local_a8.m_Object._version = 0;
		local_a8.m_Object._index = 0;
		local_a8.m_Object._current.key = null;
		local_a8.type = 0;
		local_a8._4_4_ = 0;
		local_a8.m_Object._dictionary = null;
		local_a8.m_Array._current = null;
		pIVar12 = pSVar1._0_System_Collections_Generic_HashSet_T_;
		local_58 = puVar19;
		if (((pIVar12._2).bitflags1 & 1) == 0) {
			*(ulong)((long)&uStack_b0 + lVar8) = 0x5064b12;
			pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
			puVar19 = (byte)((long)&local_a8 + lVar8);
		}
		*(ulong)(puVar19 + -8) = 0x5064b1a;
		local_40 = il2cpp_codegen_object_new(pIVar12);
		pIVar21 = method.klass.rgctx_data._4_System_Collections_Generic_HashSet_T___ctor.methodPointer;
		*(ulong)(puVar19 + -8) = 0x5064b32;
		(*pIVar21)();
		if (json != null) {
			pMVar20 = (json.klass.vtable)._45_get_AsArray.method;
			p_Var2 = (json.klass.vtable)._45_get_AsArray.methodPtr;
			local_60 = this;
			*(ulong)(puVar19 + -8) = 0x5064b52;
			pSVar13 = (*p_Var2)(json,pMVar20);
			if (pSVar13 != null) {
				pMVar20 = (pSVar13.klass.vtable)._32_GetEnumerator.method;
				p_Var3 = (pSVar13.klass.vtable)._32_GetEnumerator.methodPtr;
				*(ulong)(puVar19 + -8) = 0x5064b78;
				(*p_Var3)((JSONNode.Enumerator)&local_a8,pSVar13,pMVar20);
				*(ulong)(puVar19 + -8) = 0x5064b82;
				bVar11 = local_a8.MoveNext();
				if (bVar11) {
					do {
						*(ulong)(puVar19 + -8) = 0x5064bdc;
						aKeyValue = local_a8.Current;
						if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
							*(ulong)(puVar19 + -8) = 0x5064bfa;
						}
						*(ulong)(puVar19 + -8) = 0x5064c07;
						pSVar14 = ((JSONNode)aKeyValue);
						SVar5.value = (RuntimeTypeHandle)method.klass.rgctx_data._9_T;
						if ((g_data_075567a8._2).cctor_finished_or_no_cctor == 0) {
							*(ulong)(puVar19 + -8) = 0x5064c2e;
						}
						*(ulong)(puVar19 + -8) = 0x5064c38;
						pSVar15 = Type.GetTypeFromHandle(SVar5);
						*(ulong)(puVar19 + -8) = 0x5064c4a;
						pSVar16 = Type.GetTypeFromHandle(ref (g_data_07556710._1).byval_arg);
						*(ulong)(puVar19 + -8) = 0x5064c57;
						bVar11 = (pSVar15 == pSVar16);
						if (bVar11) {
							if (pSVar14 == null) goto label_05064e0a;
							pMVar20 = (pSVar14.klass.vtable)._35_get_AsInt.method;
							p_Var6 = (pSVar14.klass.vtable)._35_get_AsInt.methodPtr;
							*(ulong)(puVar19 + -8) = 0x5064c7b;
							local_4c = (*p_Var6)(pSVar14,pMVar20);
							*(ulong)(puVar19 + -8) = 0x5064c8b;
							pIVar17 = (object)local_4c;
							pIVar12 = method.klass.rgctx_data._10_T;
							if (((pIVar12._2).bitflags1 & 1) == 0) {
								*(ulong)(puVar19 + -8) = 0x5064cae;
								pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
							}
							puVar10 = local_58;
							*(ulong)(puVar19 + -8) = 0x5064cbd;
							pIVar12 = (Il2CppClass)il2cpp_runtime_helper_030d6290(pIVar17, pIVar12, puVar10);
							if (local_40 == null) goto label_05064e0a;
							pSVar1 = method.klass.rgctx_data;
							if (-1 < (int)(pSVar1._10_T._1).byval_arg.bits) {
								pIVar12 = ((object)pIVar12).klass;
							}
							pMVar20 = pSVar1._11_System_Collections_Generic_HashSet_T__Add;
							pIVar21 = pMVar20.methodPointer;
							piVar22 = (int)&local_31;
							local_48 = (object)pIVar12;
	label_05064bb7: ;
							pIVar17 = local_40;
							pIVar4 = pMVar20.invoker_method;
							*(ulong)(puVar19 + -8) = 0x5064bba;
							(*pIVar4)(pIVar21,pMVar20,pIVar17,&local_48,piVar22);
						}
						else {
							SVar5.value = (RuntimeTypeHandle)method.klass.rgctx_data._9_T;
							if ((g_data_075567a8._2).cctor_finished_or_no_cctor == 0) {
								*(ulong)(puVar19 + -8) = 0x5064d14;
							}
							*(ulong)(puVar19 + -8) = 0x5064d1e;
							pSVar15 = Type.GetTypeFromHandle(SVar5);
							*(ulong)(puVar19 + -8) = 0x5064d33;
							pSVar16 = Type.GetTypeFromHandle((RuntimeTypeHandle)(g_data_07556758 + 0x20));
							*(ulong)(puVar19 + -8) = 0x5064d40;
							bVar11 = (pSVar15 == pSVar16);
							if (bVar11) {
								if (pSVar14 != null) {
									pMVar20 = (pSVar14.klass.vtable)._9_get_Value.method;
									p_Var7 = (pSVar14.klass.vtable)._9_get_Value.methodPtr;
									*(ulong)(puVar19 + -8) = 0x5064d64;
									pSVar18 = (*p_Var7)(pSVar14,pMVar20);
									pIVar12 = method.klass.rgctx_data._10_T;
									if (((pIVar12._2).bitflags1 & 1) == 0) {
										*(ulong)(puVar19 + -8) = 0x5064d87;
										pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
									}
									puVar10 = local_58;
									*(ulong)(puVar19 + -8) = 0x5064d96;
									pIVar12 = (Il2CppClass)il2cpp_runtime_helper_030d6290(pSVar18, pIVar12, puVar10);
									if (local_40 != null) {
										pSVar1 = method.klass.rgctx_data;
										if (-1 < (int)(pSVar1._10_T._1).byval_arg.bits) {
											pIVar12 = ((object)pIVar12).klass;
										}
										pMVar20 = pSVar1._11_System_Collections_Generic_HashSet_T__Add;
										pIVar21 = pMVar20.methodPointer;
										piVar22 = &local_4c;
										local_48 = (object)pIVar12;
										goto label_05064bb7;
									}
								}
								goto label_05064e0a;
							}
						}
						*(ulong)(puVar19 + -8) = 0x5064bc7;
						bVar11 = local_a8.MoveNext();
					} while (bVar11);
				}
				pIVar17 = local_40;
				pSVar9 = local_60;
				if (local_60 != null) {
					pMVar20 = method.klass.rgctx_data._8_Settings_TypedSetting_HashSet_T___set_Value;
					pIVar21 = pMVar20.methodPointer;
					local_48 = local_40;
					pIVar4 = pMVar20.invoker_method;
					*(ulong)(puVar19 + -8) = 0x5064dfb;
					(*pIVar4)(pIVar21,pMVar20,pSVar9,&local_48,pIVar17);
					return;
				}
			}
		}
	label_05064e0a: ;
		*(ulong)(puVar19 + -8) = 0x5064e0f;
		throw new NullReferenceException();
	}

	// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$SerializeToJsonObject: 35 lines keep C-only constructs
	private JSONNode Il2CppFullySharedGenericType__SerializeToJsonObject()
	{
		int n;
		MethodInfo pMVar1;
		Il2CppMethodPointer pIVar2;
		InvokerMethod pIVar3;
		RuntimeTypeHandle SVar4;
		_func_53 p_Var5;
		HashSetSetting<T> pSVar6;
		byte puVar7;
		ulong __n;
		sbyte cVar8;
		bool bVar9;
		uint uVar10;
		Il2CppClass pIVar11;
		ulong uVar12;
		JSONArray pSVar13;
		Type pSVar14;
		Type pSVar15;
		object obj;
		int piVar16;
		JSONNode pSVar17;
		String s;
		Settings_HashSetSetting_T__RGCTXs pSVar18;
		ulong uVar19;
		byte puVar20;
		ulong uVar21;
		byte puVar22;
		byte puVar23;
		byte[] auStack_98 = new byte[8];
		byte puStack_90;
		HashSetSetting<T> pSStack_88;
		ulong uStack_80;
		byte puStack_78;
		MethodInfo_4F64E10* ppMStack_70;
		byte* ppuStack_68;
		byte* ppuStack_60;
		byte puStack_58;
		ulong uStack_50;
		byte puStack_48;
		MethodInfo_4F64E10 pMStack_40;
		JSONArray pSStack_38;

		pSStack_88 = this;
		pMStack_40 = method;
		if (g_data_075420f1 == false) {
			g_data_075420f1 = true;
		}
		pSVar18 = method.klass.rgctx_data;
		pIVar11 = pSVar18._14_System_Collections_Generic_HashSet_Enumerator_T_;
		uVar10 = (pIVar11._2).stack_slot_size;
		uVar21 = (ulong)uVar10;
		uStack_50 = (ulong)(pSVar18._10_T._2).stack_slot_size;
		if (((pIVar11._2).bitflags1 & 1) == 0) {
			pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
			uVar10 = (pIVar11._2).stack_slot_size;
		}
		__n = uStack_50;
		puStack_58 = auStack_98 + -((ulong)(uVar10 + 0x10) + 0xf & 0xfffffffffffffff0);
		uVar19 = uStack_50 + 0xf & 0xfffffffffffffff0;
		puVar23 = puStack_58 + -uVar19;
		uVar12 = uVar21 + 0xf & 0xfffffffffffffff0;
		puVar22 = puVar23 + -uVar12;
		puVar20 = puVar22 + -uVar12;
		uStack_80 = uVar21;
		puStack_48 = puVar20;
		*(ulong)(puVar20 + -8) = 0x5064ee9;
		memset(puVar20, 0, uVar21);
		puVar20 = puVar20 + -uVar19;
		*(ulong)(puVar20 + -8) = 0x5064eff;
		memset(puVar20, 0, __n);
		*(ulong)(puVar20 + -8) = 0x5064f0e;
		*(ulong)(puVar20 + -8) = 0x5064f1b;
		pSVar13 = new JSONArray();
		pSVar6 = pSStack_88;
		if (pSStack_88 != null) {
			pMVar1 = pMStack_40.klass.rgctx_data._12_Settings_TypedSetting_HashSet_T___get_Value;
			pIVar2 = pMVar1.methodPointer;
			pIVar3 = pMVar1.invoker_method;
			pSStack_38 = pSVar13;
			*(ulong)(puVar20 + -8) = 0x5064f4b;
			(*pIVar3)(pIVar2,pMVar1,pSVar6,null,&puStack_78);
			puVar7 = puStack_78;
			if (puStack_78 != null) {
				pMVar1 = pMStack_40.klass.rgctx_data._13_System_Collections_Generic_HashSet_T__GetEnumerator;
				pIVar2 = pMVar1.methodPointer;
				pIVar3 = pMVar1.invoker_method;
				puStack_78 = puVar22;
				*(ulong)(puVar20 + -8) = 0x5064f7c;
				(*pIVar3)(pIVar2,pMVar1,puVar7,&puStack_78,puVar22);
				puVar7 = puStack_48;
				uVar21 = uStack_80;
				*(ulong)(puVar20 + -8) = 0x5064f8c;
				memcpy(puVar7, puVar22, uVar21);
				puStack_78 = null;
				ppMStack_70 = &pMStack_40;
				ppuStack_68 = &puStack_58;
				ppuStack_60 = &puStack_48;
				while(true) {
					while(true) {
						puVar22 = puStack_48;
						pIVar2 = pMStack_40.klass.rgctx_data. _17_System_Collections_Generic_HashSet_Enumerator_T__MoveNext.methodPointer;
						*(ulong)(puVar20 + -8) = 0x5064fdc;
						cVar8 = (*pIVar2)(puVar22);
						pSVar13 = pSStack_38;
						puVar22 = puStack_48;
						if (cVar8 == false) {
							pSVar18 = pMStack_40.klass.rgctx_data;
							pIVar11 = pSVar18._14_System_Collections_Generic_HashSet_Enumerator_T_;
							if (((pIVar11._2).bitflags1 & 1) == 0) {
								*(ulong)(puVar20 + -8) = 0x506522c;
								pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
								pSVar18 = pMStack_40.klass.rgctx_data;
							}
							puVar23 = puStack_48;
							puVar22 = puStack_58;
							pMVar1 = pSVar18._19_System_Collections_Generic_HashSet_T__Contains;
							*(ulong)(puVar20 + -8) = 0x5065258;
							il2cpp_runtime_helper_030d6e00(pIVar11, pMVar1, puVar22, puVar23, 0, 0);
							return (JSONNode)pSVar13;
						}
						pMVar1 = pMStack_40.klass.rgctx_data. _15_System_Collections_Generic_HashSet_Enumerator_T__get_Current;
						pIVar2 = pMVar1.methodPointer;
						pIVar3 = pMVar1.invoker_method;
						puStack_90 = puVar23;
						*(ulong)(puVar20 + -8) = 0x5065012;
						(*pIVar3)(pIVar2,pMVar1,puVar22,&puStack_90,puVar23);
						uVar21 = uStack_50;
						*(ulong)(puVar20 + -8) = 0x5065021;
						memcpy(puVar20, puVar23, uVar21);
						SVar4.value = (RuntimeTypeHandle)pMStack_40.klass.rgctx_data._9_T;
						if ((g_data_075567a8._2).cctor_finished_or_no_cctor == 0) {
							*(ulong)(puVar20 + -8) = 0x5065049;
						}
						*(ulong)(puVar20 + -8) = 0x5065053;
						pSVar14 = Type.GetTypeFromHandle(SVar4);
						*(ulong)(puVar20 + -8) = 0x5065065;
						pSVar15 = Type.GetTypeFromHandle((RuntimeTypeHandle)(g_data_07556710 + 0x20));
						*(ulong)(puVar20 + -8) = 0x5065072;
						bVar9 = (pSVar14 == pSVar15);
						uVar21 = uStack_50;
						if (bVar9) break;
						SVar4.value = (RuntimeTypeHandle)pMStack_40.klass.rgctx_data._9_T;
						if ((g_data_075567a8._2).cctor_finished_or_no_cctor == 0) {
							*(ulong)(puVar20 + -8) = 0x5065148;
						}
						*(ulong)(puVar20 + -8) = 0x5065152;
						pSVar14 = Type.GetTypeFromHandle(SVar4);
						*(ulong)(puVar20 + -8) = 0x5065167;
						pSVar15 = Type.GetTypeFromHandle(ref (g_data_07556758._1).byval_arg);
						*(ulong)(puVar20 + -8) = 0x5065174;
						bVar9 = (pSVar14 == pSVar15);
						uVar21 = uStack_50;
						if (bVar9) {
							*(ulong)(puVar20 + -8) = 0x506518b;
							memcpy(puVar23, puVar20, uVar21);
							pIVar11 = pMStack_40.klass.rgctx_data._10_T;
							*(ulong)(puVar20 + -8) = 0x50651a6;
							s = (String)(object)puVar23;
							if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
								*(ulong)(puVar20 + -8) = 0x50651c1;
							}
							if ((s != null) && (s.klass != g_data_07556758)) {
								*(ulong)(puVar20 + -8) = 0x5065289;
								throw new InvalidCastException();
							}
							*(ulong)(puVar20 + -8) = 0x50651e0;
							pSVar17 = ((JSONNode)s);
							pSVar13 = pSStack_38;
							if (pSStack_38 == null) {
								*(ulong)(puVar20 + -8) = 0x5065281;
								throw new NullReferenceException();
							}
							pMVar1 = (pSStack_38.klass.vtable)._21_Add.method;
							p_Var5 = (pSStack_38.klass.vtable)._21_Add.methodPtr;
							*(ulong)(puVar20 + -8) = 0x5065200;
							(*p_Var5)(pSVar13,pSVar17,pMVar1);
						}
					}
					*(ulong)(puVar20 + -8) = 0x5065089;
					memcpy(puVar23, puVar20, uVar21);
					pIVar11 = pMStack_40.klass.rgctx_data._10_T;
					*(ulong)(puVar20 + -8) = 0x50650a4;
					obj = (object)puVar23;
					if ((typeof(JSONNode)._2).cctor_finished_or_no_cctor == 0) {
						*(ulong)(puVar20 + -8) = 0x50650bf;
					}
					if (obj == null) break;
					if ((obj.klass._1).element_class != *(Il2CppClass*)(g_data_07556710 + 0x40)) {
						*(ulong)(puVar20 + -8) = 0x506527c;
						throw new InvalidCastException();
					}
					*(ulong)(puVar20 + -8) = 0x50650e6;
					piVar16 = il2cpp_vm_Object_Unbox(obj);
					n = *piVar16;
					*(ulong)(puVar20 + -8) = 0x50650ef;
					pSVar17 = ((JSONNode)n);
					pSVar13 = pSStack_38;
					if (pSStack_38 == null) break;
					pMVar1 = (pSStack_38.klass.vtable)._21_Add.method;
					p_Var5 = (pSStack_38.klass.vtable)._21_Add.methodPtr;
					*(ulong)(puVar20 + -8) = 0x5065111;
					(*p_Var5)(pSVar13,pSVar17,pMVar1);
				}
				*(ulong)(puVar20 + -8) = 0x5065274;
				throw new NullReferenceException();
			}
		}
		*(ulong)(puVar20 + -8) = 0x506528e;
		throw new NullReferenceException();
	}

	// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$Contains: 5 lines keep C-only constructs
	private bool Il2CppFullySharedGenericType__Contains(__Il2CppFullySharedGenericType item)
	{
		long lVar1;
		ulong uVar2;
		code *pcVar3;
		long lVar4;
		__Il2CppFullySharedGenericType pUVar5;
		ulong __dest;
		ulong puVar6;
		__Il2CppFullySharedGenericType pUVar7;
		__Il2CppFullySharedGenericType __src;
		ulong __n;
		__Il2CppFullySharedGenericType[] local_48 = new __Il2CppFullySharedGenericType[2];
		byte local_31;

		pUVar7 = item.klass;
		lVar1 = *(long)(*(long)((long)item.monitor + 0x20) + 0xc0);
		__n = (ulong)*(uint)(*(long)(lVar1 + 0x50) + 0xfc);
		lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
		__dest = (ulong)((long)local_48 + lVar4);
		puVar6 = __dest;
		local_48[0] = pUVar7;
		if (this != null) {
			puVar6 = *(ulong*)(lVar1 + 0x60);
			uVar2 = *puVar6;
			pcVar3 = (code)puVar6[2];
			*(ulong)((long)local_48 + lVar4 + -8) = 0x506535e;
			(*pcVar3)(uVar2,puVar6,this,0,local_48 + 1);
			pUVar5 = local_48[1];
			lVar1 = *(long)((long)item.monitor + 0x20);
			__src = (__Il2CppFullySharedGenericType)local_48;
			if (*(int)(*(long)(*(long)(lVar1 + 0xc0) + 0x50) + 0x28) < 0) {
				__src = pUVar7;
			}
			*(ulong)((long)local_48 + lVar4 + -8) = 0x5065389;
			memcpy(__dest, __src, __n);
			puVar6 = (ulong)((long)local_48 + lVar4);
			if (local_48[1] != null) {
				lVar1 = *(long)(lVar1 + 0xc0);
				puVar6 = *(ulong*)(lVar1 + 0x98);
				uVar2 = *puVar6;
				if (-1 < *(int)(*(long)(lVar1 + 0x50) + 0x28)) {
					__dest = (ulong)*__dest;
				}
				pcVar3 = (code)puVar6[2];
				local_48[1] = (__Il2CppFullySharedGenericType)__dest;
				*(ulong)((long)local_48 + lVar4 + -8) = 0x50653be;
				(*pcVar3)(uVar2,puVar6,pUVar5,local_48 + 1,&local_31);
				return (bool)local_31;
			}
		}
		puVar6[-1] = 0x50653d6;
		throw new NullReferenceException();
	}

	// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$Add: 5 lines keep C-only constructs
	private void Il2CppFullySharedGenericType__Add(__Il2CppFullySharedGenericType item)
	{
		long lVar1;
		ulong uVar2;
		code *pcVar3;
		long lVar4;
		__Il2CppFullySharedGenericType pUVar5;
		ulong __dest;
		ulong puVar6;
		__Il2CppFullySharedGenericType pUVar7;
		__Il2CppFullySharedGenericType __src;
		ulong __n;
		__Il2CppFullySharedGenericType[] local_48 = new __Il2CppFullySharedGenericType[2];
		byte local_31;

		pUVar7 = item.klass;
		lVar1 = *(long)(*(long)((long)item.monitor + 0x20) + 0xc0);
		__n = (ulong)*(uint)(*(long)(lVar1 + 0x50) + 0xfc);
		lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
		__dest = (ulong)((long)local_48 + lVar4);
		puVar6 = __dest;
		local_48[0] = pUVar7;
		if (this != null) {
			puVar6 = *(ulong*)(lVar1 + 0x60);
			uVar2 = *puVar6;
			pcVar3 = (code)puVar6[2];
			*(ulong)((long)local_48 + lVar4 + -8) = 0x506543e;
			(*pcVar3)(uVar2,puVar6,this,0,local_48 + 1);
			pUVar5 = local_48[1];
			lVar1 = *(long)((long)item.monitor + 0x20);
			__src = (__Il2CppFullySharedGenericType)local_48;
			if (*(int)(*(long)(*(long)(lVar1 + 0xc0) + 0x50) + 0x28) < 0) {
				__src = pUVar7;
			}
			*(ulong)((long)local_48 + lVar4 + -8) = 0x5065469;
			memcpy(__dest, __src, __n);
			puVar6 = (ulong)((long)local_48 + lVar4);
			if (local_48[1] != null) {
				lVar1 = *(long)(lVar1 + 0xc0);
				puVar6 = *(ulong*)(lVar1 + 0x58);
				uVar2 = *puVar6;
				if (-1 < *(int)(*(long)(lVar1 + 0x50) + 0x28)) {
					__dest = (ulong)*__dest;
				}
				pcVar3 = (code)puVar6[2];
				local_48[1] = (__Il2CppFullySharedGenericType)__dest;
				*(ulong)((long)local_48 + lVar4 + -8) = 0x506549b;
				(*pcVar3)(uVar2,puVar6,pUVar5,local_48 + 1,&local_31);
				return;
			}
		}
		puVar6[-1] = 0x50654af;
		throw new NullReferenceException();
	}

	// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$Remove: 5 lines keep C-only constructs
	private void Il2CppFullySharedGenericType__Remove(__Il2CppFullySharedGenericType item)
	{
		long lVar1;
		ulong uVar2;
		code *pcVar3;
		long lVar4;
		__Il2CppFullySharedGenericType pUVar5;
		ulong __dest;
		ulong puVar6;
		__Il2CppFullySharedGenericType pUVar7;
		__Il2CppFullySharedGenericType __src;
		ulong __n;
		__Il2CppFullySharedGenericType[] apUStack_48 = new __Il2CppFullySharedGenericType[2];
		byte uStack_31;

		pUVar7 = item.klass;
		lVar1 = *(long)(*(long)((long)item.monitor + 0x20) + 0xc0);
		__n = (ulong)*(uint)(*(long)(lVar1 + 0x50) + 0xfc);
		lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
		__dest = (ulong)((long)apUStack_48 + lVar4);
		puVar6 = __dest;
		apUStack_48[0] = pUVar7;
		if (this != null) {
			puVar6 = *(ulong*)(lVar1 + 0x60);
			uVar2 = *puVar6;
			pcVar3 = (code)puVar6[2];
			*(ulong)((long)apUStack_48 + lVar4 + -8) = 0x506550e;
			(*pcVar3)(uVar2,puVar6,this,0,apUStack_48 + 1);
			pUVar5 = apUStack_48[1];
			lVar1 = *(long)((long)item.monitor + 0x20);
			__src = (__Il2CppFullySharedGenericType)apUStack_48;
			if (*(int)(*(long)(*(long)(lVar1 + 0xc0) + 0x50) + 0x28) < 0) {
				__src = pUVar7;
			}
			*(ulong)((long)apUStack_48 + lVar4 + -8) = 0x5065539;
			memcpy(__dest, __src, __n);
			puVar6 = (ulong)((long)apUStack_48 + lVar4);
			if (apUStack_48[1] != null) {
				lVar1 = *(long)(lVar1 + 0xc0);
				puVar6 = *(ulong*)(lVar1 + 0xa0);
				uVar2 = *puVar6;
				if (-1 < *(int)(*(long)(lVar1 + 0x50) + 0x28)) {
					__dest = (ulong)*__dest;
				}
				pcVar3 = (code)puVar6[2];
				apUStack_48[1] = (__Il2CppFullySharedGenericType)__dest;
				*(ulong)((long)apUStack_48 + lVar4 + -8) = 0x506556e;
				(*pcVar3)(uVar2,puVar6,pUVar5,apUStack_48 + 1,&uStack_31);
				return;
			}
		}
		puVar6[-1] = 0x5065582;
		throw new NullReferenceException();
	}

	// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$Toggle: 14 lines keep C-only constructs
	private void Il2CppFullySharedGenericType__Toggle(__Il2CppFullySharedGenericType item)
	{
		int iVar1;
		long lVar2;
		ulong uVar3;
		code *pcVar4;
		long lVar5;
		ulong puVar6;
		HashSetSetting<T> pSVar7;
		IntPtr pvVar8;
		byte puVar9;
		ulong puVar10;
		__Il2CppFullySharedGenericType pUVar11;
		__Il2CppFullySharedGenericType __src;
		ulong uVar12;
		ulong __dest;
		ulong[] apuStack_78 = new ulong[2];
		ulong local_68;
		IntPtr local_60;
		__Il2CppFullySharedGenericType local_58;
		HashSetSetting<T> local_50;
		__Il2CppFullySharedGenericType local_48;
		ulong local_40;
		sbyte local_31;

		pvVar8 = item.monitor;
		pUVar11 = item.klass;
		lVar2 = *(long)(*(long)((long)pvVar8 + 0x20) + 0xc0);
		uVar12 = (ulong)*(uint)(*(long)(lVar2 + 0x50) + 0xfc);
		lVar5 = -(uVar12 + 0xf & 0xfffffffffffffff0);
		__dest = (ulong)((long)apuStack_78 + lVar5);
		puVar10 = __dest;
		local_48 = pUVar11;
		if (this != null) {
			puVar10 = *(ulong*)(lVar2 + 0x60);
			uVar3 = *puVar10;
			pcVar4 = (code)puVar10[2];
			local_50 = this;
			*(ulong)((long)apuStack_78 + lVar5 + -8) = 0x50655f3;
			(*pcVar4)(uVar3,puVar10,this,0,&local_40);
			apuStack_78[1] = local_40;
			lVar2 = *(long)((long)pvVar8 + 0x20);
			__src = (__Il2CppFullySharedGenericType)&local_48;
			if (*(int)(*(long)(*(long)(lVar2 + 0xc0) + 0x50) + 0x28) < 0) {
				__src = pUVar11;
			}
			local_68 = uVar12;
			local_60 = pvVar8;
			local_58 = pUVar11;
			*(ulong)((long)apuStack_78 + lVar5 + -8) = 0x506562d;
			memcpy(__dest, __src, uVar12);
			puVar6 = apuStack_78[1];
			puVar10 = (ulong)((long)apuStack_78 + lVar5);
			if (apuStack_78[1] != null) {
				lVar2 = *(long)(lVar2 + 0xc0);
				puVar10 = *(ulong*)(lVar2 + 0x98);
				uVar3 = *puVar10;
				local_40 = __dest;
				if (-1 < *(int)(*(long)(lVar2 + 0x50) + 0x28)) {
					local_40 = (ulong)*__dest;
				}
				pcVar4 = (code)puVar10[2];
				*(ulong)((long)apuStack_78 + lVar5 + -8) = 0x506566a;
				(*pcVar4)(uVar3,puVar10,puVar6,&local_40,&local_31);
				pSVar7 = local_50;
				pvVar8 = local_60;
				uVar12 = local_68;
				puVar10 = *(ulong*)(*(long)(*(long)((long)local_60 + 0x20) + 0xc0) + 0x60);
				uVar3 = *puVar10;
				if (local_31 == false) {
					pcVar4 = (code)puVar10[2];
					*(ulong)((long)apuStack_78 + lVar5 + -8) = 0x5065715;
					(*pcVar4)(uVar3,puVar10,pSVar7,0,&local_40);
					puVar6 = local_40;
					lVar2 = *(long)((long)pvVar8 + 0x20);
					pUVar11 = (__Il2CppFullySharedGenericType)&local_48;
					if (*(int)(*(long)(*(long)(lVar2 + 0xc0) + 0x50) + 0x28) < 0) {
						pUVar11 = local_58;
					}
					*(ulong)((long)apuStack_78 + lVar5 + -8) = 0x5065741;
					memcpy(__dest, pUVar11, uVar12);
					puVar10 = (ulong)((long)apuStack_78 + lVar5);
					puVar9 = (byte)((long)apuStack_78 + lVar5);
					if (puVar6 == null) goto label_05065761;
					lVar2 = *(long)(lVar2 + 0xc0);
					puVar10 = *(ulong*)(lVar2 + 0x58);
					uVar3 = *puVar10;
					iVar1 = *(int)(*(long)(lVar2 + 0x50) + 0x28);
				}
				else {
					pcVar4 = (code)puVar10[2];
					*(ulong)((long)apuStack_78 + lVar5 + -8) = 0x5065697;
					(*pcVar4)(uVar3,puVar10,pSVar7,0);
					puVar6 = local_40;
					lVar2 = *(long)((long)pvVar8 + 0x20);
					pUVar11 = (__Il2CppFullySharedGenericType)&local_48;
					if (*(int)(*(long)(*(long)(lVar2 + 0xc0) + 0x50) + 0x28) < 0) {
						pUVar11 = local_58;
					}
					*(ulong)((long)apuStack_78 + lVar5 + -8) = 0x50656c3;
					memcpy(__dest, pUVar11, uVar12);
					puVar10 = (ulong)((long)apuStack_78 + lVar5);
					puVar9 = (byte)((long)apuStack_78 + lVar5);
					if (puVar6 == null) goto label_05065761;
					lVar2 = *(long)(lVar2 + 0xc0);
					puVar10 = *(ulong*)(lVar2 + 0xa0);
					uVar3 = *puVar10;
					iVar1 = *(int)(*(long)(lVar2 + 0x50) + 0x28);
				}
				if (-1 < iVar1) {
					puVar9 = (byte)((long)apuStack_78 + lVar5);
					__dest = (ulong)*__dest;
				}
				pcVar4 = (code)puVar10[2];
				local_40 = __dest;
				*(ulong)(puVar9 + -8) = 0x50656fd;
				(*pcVar4)(uVar3,puVar10,puVar6,&local_40,&local_31);
				return;
			}
		}
	label_05065761: ;
		puVar10[-1] = 0x5065766;
		throw new NullReferenceException();
	}

	// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$Clear: 3 lines keep C-only constructs
	private void Il2CppFullySharedGenericType__Clear()
	{
		MethodInfo pMVar1;
		long local_10;

		if (this != null) {
			pMVar1 = method.klass.rgctx_data._12_Settings_TypedSetting_HashSet_T___get_Value;
			(*pMVar1.invoker_method)(pMVar1.methodPointer,pMVar1,this,null,&local_10);
			if (local_10 != 0) {
				(*((method.klass.rgctx_data[1]._0_System_Collections_Generic_HashSet_T_)._1).image)();
				return;
			}
		}
		throw new NullReferenceException();
	}
}
