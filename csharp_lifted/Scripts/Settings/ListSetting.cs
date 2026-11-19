// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ListSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/ListSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/ListSetting.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x2000113")]
internal class ListSetting<T> : TypedSetting<List<T>>, IListSetting where T : BaseSetting, new()
{
	[Token(Token = "0x60005CB")]
	public ListSetting(List<T> defaultValue)
	{
	}

	[Token(Token = "0x60005CC")]
	public ListSetting(T defaultValue)
	{
	}

	[Token(Token = "0x60005CD")]
	public ListSetting(T defaultValue, int count)
	{
	}

	[Token(Token = "0x60005CE")]
	public ListSetting()
	{
	}

	[Token(Token = "0x60005CF")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x60005D0")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x60005D1")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x60005D2")]
	public int GetCount()
	{
		return default(int);
	}

	[Token(Token = "0x60005D3")]
	public BaseSetting GetItemAt(int index)
	{
		return null;
	}

	[Token(Token = "0x60005D4")]
	public List<BaseSetting> GetItems()
	{
		return null;
	}

	[Token(Token = "0x60005D5")]
	public void AddItem(BaseSetting item)
	{
	}

	[Token(Token = "0x60005D6")]
	public void Clear()
	{
	}

	[Token(Token = "0x60005D7")]
	private void CopyLimits(T from, T to)
	{
	}

	[Token(Token = "0x60005D8")]
	private void CopyDefaultLimits(T to)
	{
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Settings/ListSetting.c.

	// Settings.ListSetting<object>$$.ctor: clean
	private void object___ctor(List<T> defaultValue)
	{
		base((object)defaultValue);
		return;
	}

	// Settings.ListSetting<object>$$.ctor: 7 lines keep C-only constructs
	private void object___ctor(object defaultValue)
	{
		int piVar1;
		uint uVar2;
		Object[] pSVar4;
		Il2CppClass klass;
		List<object> __this_00;

		base();
		klass = method.klass.rgctx_data._0_System_Collections_Generic_List_T_;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		__this_00 = (List<object>)il2cpp_codegen_object_new(klass);
		__this_00 = new List<object>();
		if (__this_00 != null) {
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pSVar4 = __this_00._items;
			if (pSVar4 != null) {
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pSVar4.Length) {
					__this_00._size = uVar2 + 1;
					pSVar4[(int)uVar2] = defaultValue;
				}
				else {
					__this_00.AddWithResize(defaultValue);
				}
				this.DefaultValue = (List<T>)__this_00;
				this.SetDefault();
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Settings.ListSetting<object>$$.ctor: 12 lines keep C-only constructs
	private void object___ctor(object defaultValue, int count)
	{
		int piVar1;
		uint uVar2;
		Object[] pSVar3;
		Il2CppClass klass;
		List<object> __this_00;
		ulong uVar4;
		object pIVar5;
		MethodInfo method_00;
		MethodInfo pMVar6;

		base();
		klass = method.klass.rgctx_data._0_System_Collections_Generic_List_T_;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		__this_00 = (List<object>)il2cpp_codegen_object_new(klass);
		__this_00 = new List<object>();
		if (defaultValue == null) {
	label_0525d5b2: ;
			throw new NullReferenceException();
		}
		uVar4 = (*defaultValue.klass.vtable[5].methodPtr)(defaultValue,defaultValue.klass.vtable[5].method);
		if (0 < count) {
			if (__this_00 == null) {
				pMVar6 = method.klass.rgctx_data._8_System_Activator_CreateInstance_T_;
				pIVar5 = Activator.CreateInstance<object>();
				pMVar6.CopyLimits(defaultValue, pIVar5);
				if (pIVar5 != null) {
					(*pIVar5.klass.vtable[6].methodPtr)(pIVar5,uVar4,pIVar5.klass.vtable[6].method);
					throw new NullReferenceException();
				}
				goto label_0525d5b2;
			}
			do {
				while(true) {
					pMVar6 = method.klass.rgctx_data._8_System_Activator_CreateInstance_T_;
					pIVar5 = Activator.CreateInstance<object>();
					pMVar6.CopyLimits(defaultValue, pIVar5);
					if (pIVar5 == null) goto label_0525d5b2;
					(*pIVar5.klass.vtable[6].methodPtr)(pIVar5,uVar4,pIVar5.klass.vtable[6].method);
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar3 = __this_00._items;
					if (pSVar3 == null) goto label_0525d5b2;
					uVar2 = __this_00._size;
					if ((uint)pSVar3.Length <= uVar2) break;
					method_00 = (MethodInfo)(ulong)(uVar2 + 1);
					__this_00._size = uVar2 + 1;
					pSVar3[(int)uVar2] = pIVar5;
					count = count + -1;
					if (count == 0) goto label_0525d670;
				}
				__this_00.AddWithResize(pIVar5);
				count = count + -1;
			} while (count != 0);
		}
	label_0525d670: ;
		this.DefaultValue = (List<T>)__this_00;
		this.SetDefault();
		return;
	}

	// Settings.ListSetting<object>$$.ctor: 8 lines keep C-only constructs
	private void object___ctor()
	{
		Il2CppMethodPointer vtableDispatch;
		Il2CppClass klass;
		List<object> __this_00;
		ulong extraout_RDX;

		base();
		klass = method.klass.rgctx_data._0_System_Collections_Generic_List_T_;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		__this_00 = (List<object>)il2cpp_codegen_object_new(klass);
		__this_00 = new List<object>();
		this.DefaultValue = (List<T>)__this_00;
		vtableDispatch = (this.klass.vtable)._4_SetDefault.methodPtr;
		(*vtableDispatch)(this,(this.klass.vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
		return;
	}

	// Settings.ListSetting<object>$$SetDefault: 15 lines keep C-only constructs
	private void object__SetDefault()
	{
		int piVar1;
		uint uVar2;
		Object[] pSVar3;
		object pIVar4;
		bool bVar5;
		Il2CppClass klass;
		List<object> __this_00;
		object to;
		object from;
		ulong uVar6;
		MethodInfo in_RCX;
		List<object> pSVar7;
		byte[] auStack_68 = new byte[16];
		object pIStack_50;
		byte[] auStack_48 = new byte[8];
		object pIStack_38;

		auStack_48 = (byte[])0x0;
		pIStack_38 = null;
		klass = method.klass.rgctx_data._0_System_Collections_Generic_List_T_;
		auStack_68._0_8_ = method;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		__this_00 = (List<object>)il2cpp_codegen_object_new(klass);
		__this_00 = new List<object>();
		pSVar7 = (List<object>)this.DefaultValue;
		if (pSVar7 != null) {
			((auStack_68 + 8)).GetEnumerator(pSVar7);
			pIStack_38 = pIStack_50;
			auStack_48 = (byte[])auStack_68._8_8_;
			auStack_68._8_8_ = null;
			pIStack_50 = (object)auStack_68;
			while (true) {
				bVar5 = auStack_48.MoveNext();
				pIVar4 = pIStack_38;
				if (!(bVar5)) break;
				to = Activator.CreateInstance<object>();
				pSVar7 = (List<object>)this.DefaultValue;
				if (pSVar7 == null) {
					throw new NullReferenceException();
				}
				if (0 < pSVar7._size) {
					from = pSVar7.get_Item(0);
					pSVar7.CopyLimits(from, to);
				}
				if (pIVar4 == null) {
					throw new NullReferenceException();
				}
				uVar6 = (*pIVar4.klass.vtable[5].methodPtr)(pIVar4,pIVar4.klass.vtable[5].method);
				if (to == null) {
					throw new NullReferenceException();
				}
				(*to.klass.vtable[6].methodPtr)(to,uVar6,to.klass.vtable[6].method);
				if (__this_00 == null) {
	label_0525d962: ;
					throw new NullReferenceException();
				}
				in_RCX = (*(ListSetting<T>*)(auStack_68._0_8_ + 0x20)).rgctx_data. _6_System_Collections_Generic_List_T__Add;
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pSVar3 = __this_00._items;
				if (pSVar3 == null) goto label_0525d962;
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pSVar3.Length) {
					in_RCX = (MethodInfo)(ulong)(uVar2 + 1);
					__this_00._size = uVar2 + 1;
					pSVar3[(int)uVar2] = to;
				}
				else {
					__this_00.AddWithResize(to);
				}
			}
			auStack_48.Dispose();
			if (this != null) {
				this.Value = (object)__this_00;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Settings.ListSetting<object>$$DeserializeFromJsonObject: 11 lines keep C-only constructs
	private void object__DeserializeFromJsonObject(JSONNode json)
	{
		int piVar1;
		uint uVar2;
		Object[] pSVar3;
		bool bVar4;
		Il2CppClass klass;
		List<object> __this_00;
		JSONArray pSVar5;
		JSONNode pSVar6;
		object to;
		object from;
		JSONArray method_00;
		List<object> __this_01;
		KeyValuePair<string, JSONNode> aKeyValue;
		JSONNode.Enumerator SStack_78;

		SStack_78.m_Array._list = null;
		SStack_78.m_Array._index = 0;
		SStack_78.m_Array._version = 0;
		SStack_78.m_Object._current.value = null;
		SStack_78.m_Object._getEnumeratorRetType = 0;
		SStack_78.m_Object._36_4_ = 0;
		SStack_78.m_Object._version = 0;
		SStack_78.m_Object._index = 0;
		SStack_78.m_Object._current.key = null;
		SStack_78.type = 0;
		SStack_78._4_4_ = 0;
		SStack_78.m_Object._dictionary = null;
		SStack_78.m_Array._current = null;
		klass = method.klass.rgctx_data._0_System_Collections_Generic_List_T_;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		__this_00 = (List<object>)il2cpp_codegen_object_new(klass);
		__this_00 = new List<object>();
		if ((json == null) ||(pSVar5 = json.get_AsArray(), pSVar5 == null)) {
	label_0525dc80: ;
			throw new NullReferenceException();
		}
		SStack_78.GetEnumerator(pSVar5);
		bVar4 = SStack_78.MoveNext();
		if (bVar4) {
			do {
				aKeyValue = SStack_78.Current;
				pSVar6 = ((JSONNode)aKeyValue);
				to = Activator.CreateInstance<object>();
				__this_01 = (List<object>)this.DefaultValue;
				if (__this_01 == null) goto label_0525dc80;
				if (0 < __this_01._size) {
					from = __this_01.get_Item(0);
					__this_01.CopyLimits(from, to);
				}
				if ((to == null) ||((*to.klass.vtable[6].methodPtr)(to,pSVar6,to.klass.vtable[6].method), __this_00 == null)) goto label_0525dc80;
				method_00 = (JSONArray)method.klass.rgctx_data._6_System_Collections_Generic_List_T__Add;
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pSVar3 = __this_00._items;
				if (pSVar3 == null) goto label_0525dc80;
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pSVar3.Length) {
					method_00 = (JSONArray)(ulong)(uVar2 + 1);
					__this_00._size = uVar2 + 1;
					pSVar3[(int)uVar2] = to;
				}
				else {
					__this_00.AddWithResize(to);
				}
				bVar4 = SStack_78.MoveNext();
			} while (bVar4);
		}
		else if (this == null) goto label_0525dc80;
		this.Value = (object)__this_00;
		return;
	}

	// Settings.ListSetting<object>$$SerializeToJsonObject: 8 lines keep C-only constructs
	private JSONNode object__SerializeToJsonObject()
	{
		List<object> __this_00;
		bool bVar1;
		JSONArray __this_01;
		JSONNode pSVar2;
		MethodInfo_515DC90 pMStack_50;
		System_Collections_Generic_List_Enumerator_T__o SStack_48;
		System_Collections_Generic_List_Enumerator_T__o pSStack_28;
		MethodInfo_515DC90* ppMStack_20;

		pMStack_50 = method;
		SStack_48._list = null;
		SStack_48._index = 0;
		SStack_48._version = 0;
		SStack_48._current = null;
		__this_01 = new JSONArray();
		if ((this == null) ||(__this_00 = (List<object>)this._value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		SStack_48 = __this_00.GetEnumerator();
		ppMStack_20 = &pMStack_50;
		pSStack_28 = &SStack_48;
		if (__this_01 == null) {
			bVar1 = SStack_48.MoveNext();
			if (bVar1) {
				if (SStack_48._current != null) {
					(*(SStack_48._current).klass.vtable[5].methodPtr)(SStack_48._current,(SStack_48._current).klass.vtable[5].method);
					throw new NullReferenceException();
				}
	label_0525de10: ;
				throw new NullReferenceException();
			}
		}
		else {
			while (bVar1 = SStack_48.MoveNext()) {
				if (SStack_48._current == null) goto label_0525de10;
				pSVar2 = (JSONNode)(*(SStack_48._current).klass.vtable[5].methodPtr)(SStack_48._current,(SStack_48._current).klass.vtable[5].method);
				__this_01.Add(pSVar2);
			}
		}
		SStack_48.Dispose();
		return (JSONNode)__this_01;
	}

	// Settings.ListSetting<object>$$GetCount: clean
	private int object__GetCount()
	{
		List<T> pSVar1;

		if ((this == null) ||(pSVar1 = this._value, pSVar1 == null)) {
			throw new NullReferenceException();
		}
		return pSVar1._size;
	}

	// Settings.ListSetting<object>$$GetItemAt: clean
	private BaseSetting object__GetItemAt(int index)
	{
		List<object> __this_00;
		BaseSetting pSVar1;

		if ((this == null) ||(__this_00 = (List<object>)this._value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		pSVar1 = (BaseSetting)__this_00.get_Item(index);
		return pSVar1;
	}

	// Settings.ListSetting<object>$$GetItems: 9 lines keep C-only constructs
	private List<BaseSetting> object__GetItems()
	{
		int piVar1;
		uint uVar2;
		List<object> __this_00;
		BaseSetting[] pSVar3;
		MethodInfo pMVar4;
		bool bVar5;
		List<BaseSetting> __this_01;
		MethodInfo_515DED0 local_60;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		System_Collections_Generic_List_Enumerator_T__o local_38;
		MethodInfo_515DED0* local_30;

		local_60 = method;
		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		__this_01 = new List<BaseSetting>();
		if ((this == null) ||(__this_00 = (List<object>)this._value, __this_00 == null)) {
			throw new NullReferenceException();
		}
		local_58 = __this_00.GetEnumerator();
		local_30 = &local_60;
		local_38 = &local_58;
		if (__this_01 == null) {
			bVar5 = local_58.MoveNext();
			if (bVar5) {
	label_0525e088: ;
				throw new NullReferenceException();
			}
		}
		else {
			while (true) {
				bVar5 = local_58.MoveNext();
				pMVar4 = MethodInfo_System_Collections_Generic_List_BaseSetting_Add;
				if (!(bVar5)) break;
				piVar1 = &__this_01._version;
				*piVar1 = *piVar1 + 1;
				pSVar3 = __this_01._items;
				if (pSVar3 == null) goto label_0525e088;
				uVar2 = __this_01._size;
				if (uVar2 < (uint)pSVar3.Length) {
					__this_01._size = uVar2 + 1;
					pSVar3[(int)uVar2] = (BaseSetting)local_58._current;
				}
				else {
					__this_01.AddWithResize(local_58._current);
				}
				method = local_60;
			}
		}
		local_58.Dispose();
		return __this_01;
	}

	// Settings.ListSetting<object>$$AddItem: 7 lines keep C-only constructs
	private void object__AddItem(BaseSetting item)
	{
		int piVar1;
		uint uVar2;
		List<object> __this_00;
		Object[] pSVar4;
		Il2CppClass klass;
		object item_00;

		if ((this != null) &&(__this_00 = (List<object>)this._value, __this_00 != null)) {
			klass = method.klass.rgctx_data._5_T;
			if (((klass._2).bitflags1 & 1) == 0) {
				klass = il2cpp_codegen_class_init_checked(klass);
			}
			if (item == null) {
				item_00 = null;
			}
			else {
				item_00 = il2cpp_vm_Object_IsInst((object)item, klass);
				if (item_00 == null) {
					throw new InvalidCastException();
				}
			}
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pSVar4 = __this_00._items;
			if (pSVar4 != null) {
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pSVar4.Length) {
					__this_00._size = uVar2 + 1;
					pSVar4[(int)uVar2] = item_00;
					return;
				}
				__this_00.AddWithResize(item_00);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Settings.ListSetting<object>$$Clear: 2 lines keep C-only constructs
	private void object__Clear()
	{
		int piVar1;
		int length;
		List<T> pSVar2;

		if ((this == null) ||(pSVar2 = this._value, pSVar2 == null)) {
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

	// Settings.ListSetting<object>$$CopyLimits: 23 lines keep C-only constructs
	private void object__CopyLimits(object from, object to)
	{
		byte bVar1;
		byte bVar2;
		uint uVar3;
		Il2CppClass pIVar4;
		FloatSetting pSVar5;
		IntSetting pSVar6;
		object pIVar7;
		ulong uVar8;
		Il2CppClass pIVar9;

		pSVar6 = typeof(IntSetting);
		pSVar5 = typeof(FloatSetting);
		if (from == null) {
			return;
		}
		pIVar4 = from.klass;
		bVar1 = (pIVar4._2).typeHierarchyDepth;
		bVar2 = (typeof(IntSetting)._2).typeHierarchyDepth;
		if ((bVar1 < bVar2) ||((pIVar4._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(IntSetting))) {
			bVar2 = (typeof(ColorSetting)._2).typeHierarchyDepth;
			uVar8 = (ulong)bVar2;
			if ((bVar1 < bVar2) ||(pIVar9 = typeof(ColorSetting),(pIVar4._2).typeHierarchy[uVar8 - 1] != typeof(ColorSetting))) {
				bVar2 = (typeof(FloatSetting)._2).typeHierarchyDepth;
				if ((bVar2 <= bVar1) &&((pIVar4._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(FloatSetting))) {
					if (to != null) {
						if ((bVar2 <= (to.klass._2).typeHierarchyDepth) &&((to.klass._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(FloatSetting) )) {
							*(uint)&to[2].klass = *(uint)&from[2].klass;
							if ((bVar2 <= (from.klass._2).typeHierarchyDepth) &&((from.klass._2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass)pSVar5)) {
								*(uint)((long)&to[2].klass + 4) = *(uint)((long)&from[2].klass + 4);
								return;
							}
							goto label_0525e4ab;
						}
						goto label_0525e49e;
					}
					goto label_0525e4a6;
				}
				bVar2 = (typeof(StringSetting)._2).typeHierarchyDepth;
				uVar8 = (ulong)bVar2;
				if ((bVar1 < bVar2) ||(pIVar9 = typeof(StringSetting),(pIVar4._2).typeHierarchy[uVar8 - 1] != typeof(StringSetting))) {
					bVar2 = (typeof(NameSetting)._2).typeHierarchyDepth;
					if (bVar1 < bVar2) {
						return;
					}
					if ((pIVar4._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(NameSetting)) {
						return;
					}
					pIVar7 = il2cpp_codegen_is_inst_class(from, typeof(NameSetting));
					if (pIVar7 != null) {
						pIVar7 = il2cpp_codegen_is_inst_class(from, typeof(NameSetting));
						uVar3 = *(uint)&pIVar7[2].monitor;
						pIVar7 = il2cpp_codegen_is_inst_class(to, typeof(NameSetting));
						if (pIVar7 != null) {
							pIVar7 = il2cpp_codegen_is_inst_class(to, typeof(NameSetting));
							*(uint)&pIVar7[2].monitor = uVar3;
							pIVar7 = il2cpp_codegen_is_inst_class(from, typeof(NameSetting));
							if (pIVar7 != null) {
								pIVar7 = il2cpp_codegen_is_inst_class(from, typeof(NameSetting));
								uVar3 = *(uint)((long)&pIVar7[2].monitor + 4);
								pIVar7 = il2cpp_codegen_is_inst_class(to, typeof(NameSetting));
								if (pIVar7 != null) {
									pIVar7 = il2cpp_codegen_is_inst_class(to, typeof(NameSetting));
									*(uint)((long)&pIVar7[2].monitor + 4) = uVar3;
									return;
								}
							}
						}
					}
					goto label_0525e4a6;
				}
			}
			if (to == null) {
	label_0525e4a6: ;
				throw new NullReferenceException();
			}
			if (((byte)uVar8 <= (to.klass._2).typeHierarchyDepth) &&((to.klass._2).typeHierarchy[uVar8 - 1] == pIVar9)) {
				*(uint)&to[2].monitor = *(uint)&from[2].monitor;
				return;
			}
		}
		else {
			if (to == null) goto label_0525e4a6;
			if ((bVar2 <= (to.klass._2).typeHierarchyDepth) &&((to.klass._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(IntSetting))) {
				*(uint)&to[2].klass = *(uint)&from[2].klass;
				if ((bVar2 <= (from.klass._2).typeHierarchyDepth) &&((from.klass._2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass)pSVar6)) {
					*(uint)((long)&to[2].klass + 4) = *(uint)((long)&from[2].klass + 4);
					return;
				}
	label_0525e4ab: ;
				throw new InvalidCastException();
			}
		}
	label_0525e49e: ;
		throw new InvalidCastException();
	}

	// Settings.ListSetting<object>$$CopyDefaultLimits: clean
	private void object__CopyDefaultLimits(object to)
	{
		object from;
		List<object> __this_00;

		__this_00 = (List<object>)this.DefaultValue;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		if (__this_00._size < 1) {
			return;
		}
		from = __this_00.get_Item(0);
		__this_00.CopyLimits(from, to);
		return;
	}
}
