// ==================== AoTTG2 cross-reference ====================
// Type: Settings.SetSettingsContainer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/SetSettingsContainer.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/SetSettingsContainer.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000117")]
internal class SetSettingsContainer<T> : BaseSettingsContainer, ISetSettingsContainer where T : BaseSetSetting, new()
{
	[Token(Token = "0x4000661")]
	[FieldOffset(Offset = "0x0")]
	public IntSetting SelectedSetIndex;

	[Token(Token = "0x4000662")]
	[FieldOffset(Offset = "0x0")]
	public ListSetting<T> Sets;

	[Token(Token = "0x170000CA")]
	protected virtual bool PresetsOnly
	{
		[Token(Token = "0x60005EF")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CB")]
	protected virtual bool AllowPresets
	{
		[Token(Token = "0x60005F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60005F1")]
	protected override bool Validate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005F2")]
	public override void Apply()
	{
	}

	[Token(Token = "0x60005F3")]
	private void MigrateUniqueIds()
	{
	}

	[Token(Token = "0x60005F4")]
	public BaseSetSetting GetSelectedSet()
	{
		return null;
	}

	[Token(Token = "0x60005F5")]
	public IntSetting GetSelectedSetIndex()
	{
		return null;
	}

	[Token(Token = "0x60005F6")]
	public void CreateSet(string name)
	{
	}

	[Token(Token = "0x60005F7")]
	public void CopySelectedSet(string name)
	{
	}

	[Token(Token = "0x60005F8")]
	public bool CanDeleteSelectedSet()
	{
		return default(bool);
	}

	[Token(Token = "0x60005F9")]
	public bool CanEditSelectedSet()
	{
		return default(bool);
	}

	[Token(Token = "0x60005FA")]
	public void DeleteSelectedSet()
	{
	}

	[Token(Token = "0x60005FB")]
	public IListSetting GetSets()
	{
		return null;
	}

	[Token(Token = "0x60005FC")]
	public void SetPresetsFromJsonString(string json)
	{
	}

	[Token(Token = "0x60005FD")]
	public string[] GetSetNames()
	{
		return null;
	}

	[Token(Token = "0x60005FE")]
	public SetSettingsContainer()
	{
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Settings/SetSettingsContainer.c.

	// Settings.SetSettingsContainer.<>c<object>$$.cctor: 15 lines keep C-only constructs
	private static void c_object___cctor()
	{
		Il2CppClass pIVar1;
		object __this;

		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		__this = il2cpp_codegen_object_new(pIVar1);
		if (((((Il2CppClass)method.klass)._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked((Il2CppClass)method.klass);
		}
		__this = new Object();
		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data[2].klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		*(object*)pIVar1.static_fields = __this;
		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data[2].klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		return;
	}

	// Settings.SetSettingsContainer.<>c<object>$$.ctor: clean
	private void c_object___ctor()
	{
		base();
		return;
	}

	// Settings.SetSettingsContainer.<>c<object>$$<SetPresetsFromJsonString>b__17_0: clean
	private bool c_object___SetPresetsFromJsonString_b__17_0(object x)
	{
		if ((x == null) || (x[3].monitor == null)) {
			throw new NullReferenceException();
		}
		return (bool)*(byte)((long)x[3].monitor + 0x19);
	}

	// Settings.SetSettingsContainer.<>c<object>$$<SetPresetsFromJsonString>b__17_1: clean
	private bool c_object___SetPresetsFromJsonString_b__17_1(object x)
	{
		if ((x == null) || (x[3].monitor == null)) {
			throw new NullReferenceException();
		}
		return (bool)*(byte)((long)x[3].monitor + 0x19);
	}

	// Settings.SetSettingsContainer<object>$$get_PresetsOnly: clean
	private bool object__get_PresetsOnly()
	{
		return false;
	}

	// Settings.SetSettingsContainer<object>$$get_AllowPresets: clean
	private bool object__get_AllowPresets()
	{
		return true;
	}

	// Settings.SetSettingsContainer<object>$$Validate: clean
	private bool object__Validate()
	{
		ListSetting<T> __this_00;
		int iVar1;

		__this_00 = this.Sets;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return 0 < iVar1;
	}

	// Settings.SetSettingsContainer<object>$$Apply: clean
	private void object__Apply()
	{
		if (this == null) {
			throw new NullReferenceException();
		}
		this.Apply();
		this.MigrateUniqueIds();
		return;
	}

	// Settings.SetSettingsContainer<object>$$MigrateUniqueIds: 11 lines keep C-only constructs
	private void object__MigrateUniqueIds()
	{
		byte bVar1;
		ListSetting<T> __this_00;
		Il2CppClass __this_01;
		object pIVar2;
		bool bVar3;
		List<BaseSetting> __this_02;
		String value;
		byte[] auStack_70 = new byte[16];
		object pIStack_60;
		Guid SStack_58;
		System_Collections_Generic_List_Enumerator_object__o SStack_48;

		SStack_58 = (Guid)ZEXT816(0);
		__this_00 = this.Sets;
		if (__this_00 != null) {
			__this_02 = __this_00.GetItems();
			if (__this_02 != null) {
				auStack_70.GetEnumerator((List<object>)__this_02);
				SStack_48._current = pIStack_60;
				SStack_48._list = (List<T>)auStack_70._0_8_;
				SStack_48._index = auStack_70._8_4_;
				SStack_48._version = auStack_70._12_4_;
				auStack_70._0_8_ = null;
				auStack_70._8_8_ = &SStack_48;
				while(true) {
					bVar3 = SStack_48.MoveNext();
					pIVar2 = SStack_48._current;
					if (!bVar3) {
						SStack_48.Dispose();
						return;
					}
					if (SStack_48._current == null) break;
					bVar1 = (typeof(BaseSetSetting)._2).typeHierarchyDepth;
					if ((((SStack_48._current).klass._2).typeHierarchyDepth < bVar1) ||(((SStack_48._current).klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(BaseSetSetting))) {
						throw new InvalidCastException();
					}
					if (SStack_48._current[4].klass == null) {
						throw new NullReferenceException();
					}
					bVar3 = String.IsNullOrEmpty(((SStack_48._current[4].klass)._1).byval_arg.data);
					if (bVar3) {
						__this_01 = pIVar2[4].klass;
						SStack_58 = Guid.NewGuid();
						value = SStack_58.ToString();
						if (__this_01 == null) {
							throw new NullReferenceException();
						}
						__this_01.Value = (object)value;
					}
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	// Settings.SetSettingsContainer<object>$$GetSelectedSet: 1 lines keep C-only constructs
	private BaseSetSetting object__GetSelectedSet()
	{
		byte bVar1;
		IntSetting pSVar2;
		ListSetting<T> pSVar3;
		int iVar4;
		int iVar5;
		BaseSetSetting pSVar6;

		pSVar2 = this.SelectedSetIndex;
		if ((pSVar2 != null) &&(pSVar3 = this.Sets, pSVar3 != null)) {
			iVar5 = pSVar2._value;
			iVar4 = pSVar3.GetCount();
			iVar5 = Math.Min(iVar5, iVar4 + -1);
			iVar5 = Math.Max(iVar5, 0);
			pSVar3 = this.Sets;
			if (pSVar3 != null) {
				pSVar6 = (BaseSetSetting)pSVar3.GetItemAt(iVar5);
				if (pSVar6 != null) {
					bVar1 = (typeof(BaseSetSetting)._2).typeHierarchyDepth;
					if (((pSVar6.klass._2).typeHierarchyDepth < bVar1) ||((pSVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(BaseSetSetting))) {
						throw new InvalidCastException();
					}
				}
				return pSVar6;
			}
		}
		throw new NullReferenceException();
	}

	// Settings.SetSettingsContainer<object>$$GetSelectedSetIndex: clean
	private IntSetting object__GetSelectedSetIndex()
	{
		return this.SelectedSetIndex;
	}

	// Settings.SetSettingsContainer<object>$$CreateSet: 5 lines keep C-only constructs
	private void object__CreateSet(String name)
	{
		int piVar1;
		uint uVar2;
		Il2CppClass __this_00;
		ListSetting<T> pSVar3;
		List<object> __this_01;
		Object[] pSVar5;
		object item;
		String value;
		Guid local_40;

		item = Activator.CreateInstance<object>();
		if ((item != null) && (item[3].klass != null)) {
			item[3].klass.Value = (object)name;
			__this_00 = item[4].klass;
			local_40 = Guid.NewGuid();
			value = local_40.ToString();
			if (__this_00 != null) {
				__this_00.Value = (object)value;
				pSVar3 = this.Sets;
				if ((pSVar3 != null) &&(__this_01 = (List<object>)pSVar3._value, __this_01 != null)) {
					piVar1 = &__this_01._version;
					*piVar1 = *piVar1 + 1;
					pSVar5 = __this_01._items;
					if (pSVar5 != null) {
						uVar2 = __this_01._size;
						if (uVar2 < (uint)pSVar5.Length) {
							__this_01._size = uVar2 + 1;
							pSVar5[(int)uVar2] = item;
						}
						else {
							__this_01.AddWithResize(item);
						}
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Settings.SetSettingsContainer<object>$$CopySelectedSet: 6 lines keep C-only constructs
	private void object__CopySelectedSet(String name)
	{
		int piVar1;
		uint uVar2;
		Il2CppClass __this_00;
		ListSetting<T> pSVar3;
		List<object> __this_01;
		Object[] pSVar5;
		object item;
		BaseSetSetting pSVar6;
		String value;
		Guid local_40;

		item = Activator.CreateInstance<object>();
		pSVar6 = this.GetSelectedSet();
		if (item != null) {
			(*item.klass.vtable[10].methodPtr)(item,pSVar6,item.klass.vtable[10].method);
			if (item[3].klass != null) {
				item[3].klass.Value = (object)name;
				if (item[3].monitor != null) {
					item[3].monitor.Value = false;
					__this_00 = item[4].klass;
					local_40 = Guid.NewGuid();
					value = local_40.ToString();
					if (__this_00 != null) {
						__this_00.Value = (object)value;
						pSVar3 = this.Sets;
						if ((pSVar3 != null) &&(__this_01 = (List<object>)pSVar3._value, __this_01 != null)) {
							piVar1 = &__this_01._version;
							*piVar1 = *piVar1 + 1;
							pSVar5 = __this_01._items;
							if (pSVar5 != null) {
								uVar2 = __this_01._size;
								if (uVar2 < (uint)pSVar5.Length) {
									__this_01._size = uVar2 + 1;
									pSVar5[(int)uVar2] = item;
								}
								else {
									__this_01.AddWithResize(item);
								}
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Settings.SetSettingsContainer<object>$$CanDeleteSelectedSet: clean
	private bool object__CanDeleteSelectedSet()
	{
		ListSetting<T> __this_00;
		BoolSetting pSVar2;
		int iVar3;
		BaseSetSetting pSVar4;

		__this_00 = this.Sets;
		if (__this_00 != null) {
			iVar3 = __this_00.GetCount();
			if (iVar3 < 2) {
				return false;
			}
			pSVar4 = this.GetSelectedSet();
			if ((pSVar4 != null) &&(pSVar2 = pSVar4.Preset, pSVar2 != null)) {
				return pSVar2._value == false;
			}
		}
		throw new NullReferenceException();
	}

	// Settings.SetSettingsContainer<object>$$CanEditSelectedSet: clean
	private bool object__CanEditSelectedSet()
	{
		BoolSetting pSVar1;
		BaseSetSetting pSVar2;

		pSVar2 = this.GetSelectedSet();
		if ((pSVar2 == null) ||(pSVar1 = pSVar2.Preset, pSVar1 == null)) {
			throw new NullReferenceException();
		}
		return pSVar1._value == false;
	}

	// Settings.SetSettingsContainer<object>$$DeleteSelectedSet: 5 lines keep C-only constructs
	private void object__DeleteSelectedSet()
	{
		ListSetting<T> pSVar1;
		List<object> __this_00;
		BaseSetSetting obj;
		Il2CppClass klass;
		object item;

		pSVar1 = this.Sets;
		if (pSVar1 != null) {
			__this_00 = (List<object>)pSVar1._value;
			obj = this.GetSelectedSet();
			if (__this_00 != null) {
				klass = method.klass.rgctx_data._7_T;
				if (((klass._2).bitflags1 & 1) == 0) {
					klass = il2cpp_codegen_class_init_checked(klass);
				}
				if (obj == null) {
					item = null;
				}
				else {
					item = il2cpp_vm_Object_IsInst((object)obj, klass);
					if (item == null) {
						throw new InvalidCastException();
					}
				}
				__this_00.Remove(item);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Settings.SetSettingsContainer<object>$$GetSets: clean
	private IListSetting object__GetSets()
	{
		return (IListSetting)this.Sets;
	}

	// Settings.SetSettingsContainer<object>$$SetPresetsFromJsonString: 38 lines keep C-only constructs
	private void object__SetPresetsFromJsonString(String json)
	{
		int piVar1;
		List<T> pSVar2;
		List<object> pSVar3;
		ListSetting<T> pSVar4;
		List<object> __this_00;
		sbyte cVar5;
		Il2CppClass pIVar6;
		SetSettingsContainer<T> __this_01;
		Predicate<T> pSVar7;
		ListSetting<T> pSVar8;
		object pIVar9;
		Settings_SetSettingsContainer_T__RGCTXs pSVar10;
		SetSettingsContainer<T> pSVar11;
		int iVar12;
		SetSettingsContainer<T>* ppSVar13;

		ppSVar13 = &method.klass;
		pIVar6 = method.klass.rgctx_data._0_Settings_SetSettingsContainer_T_;
		if (((pIVar6._2).bitflags1 & 1) == 0) {
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
		}
		__this_01 = (SetSettingsContainer<T>)il2cpp_codegen_object_new(pIVar6);
		__this_01 = new SetSettingsContainer<object>();
		if (__this_01 != null) {
			__this_01.DeserializeFromJsonString(json);
			cVar5 = this.get_AllowPresets();
			if (cVar5 == false) {
				pSVar8 = this.Sets;
				if (pSVar8 != null) {
					pSVar3 = (List<object>)pSVar8._value;
					pIVar6 = (*ppSVar13).rgctx_data._19_Settings_SetSettingsContainer___c_T_;
					if (((pIVar6._2).bitflags1 & 1) == 0) {
						pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
					}
					pIVar6 = (*ppSVar13).rgctx_data._19_Settings_SetSettingsContainer___c_T_;
					if (((pIVar6._2).bitflags1 & 1) == 0) {
						pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
						pSVar7 = *(Predicate<T>*)((long)pIVar6.static_fields + 8);
					}
					else {
						pSVar7 = *(Predicate<T>*)((long)pIVar6.static_fields + 8);
					}
					if (pSVar7 == null) {
						pIVar6 = (*ppSVar13).rgctx_data._19_Settings_SetSettingsContainer___c_T_;
						if (((pIVar6._2).bitflags1 & 1) == 0) {
							pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
						}
						pSVar10 = (*ppSVar13).rgctx_data;
						pIVar6 = pSVar10._19_Settings_SetSettingsContainer___c_T_;
						if (((pIVar6._2).bitflags1 & 1) == 0) {
							pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
							pSVar10 = (*ppSVar13).rgctx_data;
						}
						pIVar9 = *(object*)pIVar6.static_fields;
						pIVar6 = pSVar10._18_System_Predicate_T_;
						if (((pIVar6._2).bitflags1 & 1) == 0) {
							pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
						}
						pSVar7 = (Predicate<T>)il2cpp_codegen_object_new(pIVar6);
						pSVar7 = new Predicate<object>(pIVar9, (intptr_t)(*ppSVar13).rgctx_data. _20_Settings_SetSettingsContainer___c_T___SetPresetsFromJsonString_b__17_0);
						pSVar11 = *ppSVar13;
						pIVar6 = pSVar11.rgctx_data._19_Settings_SetSettingsContainer___c_T_;
						if (((pIVar6._2).bitflags1 & 1) == 0) {
							pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
							pSVar11 = *ppSVar13;
						}
						*(Predicate<T>*)((long)pIVar6.static_fields + 8) = pSVar7;
						pIVar6 = pSVar11.rgctx_data._19_Settings_SetSettingsContainer___c_T_;
						if (((pIVar6._2).bitflags1 & 1) == 0) {
							pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
						}
					}
					if (pSVar3 != null) {
						pSVar3.RemoveAll(pSVar7);
						return;
					}
				}
			}
			else {
				cVar5 = this.get_PresetsOnly();
				pSVar8 = this.Sets;
				if (cVar5 == false) {
					if (pSVar8 == null) goto label_041482b9;
					pSVar3 = (List<object>)pSVar8._value;
					pIVar6 = (*ppSVar13).rgctx_data._19_Settings_SetSettingsContainer___c_T_;
					if (((pIVar6._2).bitflags1 & 1) == 0) {
						pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
					}
					pIVar6 = (*ppSVar13).rgctx_data._19_Settings_SetSettingsContainer___c_T_;
					if (((pIVar6._2).bitflags1 & 1) == 0) {
						pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
						pSVar7 = *(Predicate<T>*)((long)pIVar6.static_fields + 0x10);
					}
					else {
						pSVar7 = *(Predicate<T>*)((long)pIVar6.static_fields + 0x10);
					}
					if (pSVar7 == null) {
						pIVar6 = (*ppSVar13).rgctx_data._19_Settings_SetSettingsContainer___c_T_;
						if (((pIVar6._2).bitflags1 & 1) == 0) {
							pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
						}
						pSVar10 = (*ppSVar13).rgctx_data;
						pIVar6 = pSVar10._19_Settings_SetSettingsContainer___c_T_;
						if (((pIVar6._2).bitflags1 & 1) == 0) {
							pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
							pSVar10 = (*ppSVar13).rgctx_data;
						}
						pIVar9 = *(object*)pIVar6.static_fields;
						pIVar6 = pSVar10._18_System_Predicate_T_;
						if (((pIVar6._2).bitflags1 & 1) == 0) {
							pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
						}
						pSVar7 = (Predicate<T>)il2cpp_codegen_object_new(pIVar6);
						pSVar7 = new Predicate<object>(pIVar9, (intptr_t)(*ppSVar13).rgctx_data. _25_Settings_SetSettingsContainer___c_T___SetPresetsFromJsonString_b__17_1);
						pSVar11 = *ppSVar13;
						pIVar6 = pSVar11.rgctx_data._19_Settings_SetSettingsContainer___c_T_;
						if (((pIVar6._2).bitflags1 & 1) == 0) {
							pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
							pSVar11 = *ppSVar13;
						}
						*(Predicate<T>*)((long)pIVar6.static_fields + 0x10) = pSVar7;
						pIVar6 = pSVar11.rgctx_data._19_Settings_SetSettingsContainer___c_T_;
						if (((pIVar6._2).bitflags1 & 1) == 0) {
							pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
						}
					}
					if (pSVar3 == null) goto label_041482b9;
					pSVar3.RemoveAll(pSVar7);
				}
				else {
					if ((pSVar8 == null) ||(pSVar2 = pSVar8._value, pSVar2 == null)) goto label_041482b9;
					piVar1 = &pSVar2._version;
					*piVar1 = *piVar1 + 1;
					iVar12 = pSVar2._size;
					pSVar2._size = 0;
					if (0 < iVar12) {
						Array.Clear((Array)pSVar2._items, 0, iVar12);
					}
				}
				pSVar8 = __this_01.Sets;
				if (pSVar8 != null) {
					iVar12 = 0;
					while (true) {
						pSVar3 = (List<object>)pSVar8._value;
						if (!(pSVar3 != null)) break;
						if (pSVar3._size <= iVar12) {
							return;
						}
						pIVar9 = pSVar3.get_Item(iVar12);
						if ((pIVar9 == null) || (pIVar9[3].monitor == null)) break;
						pIVar9[3].monitor.Value = true;
						pSVar8 = this.Sets;
						if ((pSVar8 == null) ||((pSVar4 = __this_01.Sets, pSVar4 == null ||(pSVar3 = (List<object>)pSVar4._value, pSVar3 == null)))) break;
						__this_00 = (List<object>)pSVar8._value;
						pIVar9 = pSVar3.get_Item(iVar12);
						if (__this_00 == null) break;
						__this_00.Insert(iVar12, pIVar9);
						iVar12 = iVar12 + 1;
						pSVar8 = __this_01.Sets;
						if (pSVar8 == null) break;
					}
				}
			}
		}
	label_041482b9: ;
		throw new NullReferenceException();
	}

	// Settings.SetSettingsContainer<object>$$GetSetNames: 12 lines keep C-only constructs
	private String[] object__GetSetNames()
	{
		int piVar1;
		byte bVar2;
		uint uVar3;
		ListSetting<T> __this_00;
		String item;
		MethodInfo pMVar4;
		bool bVar5;
		List<string> __this_01;
		List<BaseSetting> __this_02;
		String[] pSVar6;
		byte[] local_58 = new byte[8];
		object local_48;
		byte[] local_40 = new byte[16];
		object local_30;

		local_58 = (byte[])0x0;
		local_48 = null;
		__this_01 = new List<string>();
		__this_00 = this.Sets;
		if ((__this_00 != null) &&(__this_02 = __this_00.GetItems(), __this_02 != null)) {
			local_40.GetEnumerator((List<object>)__this_02);
			local_48 = local_30;
			local_58 = (byte[])local_40._0_8_;
			local_40._0_8_ = null;
			local_40._8_8_ = local_58;
			if (__this_01 == null) {
				local_40._8_8_ = local_58;
				bVar5 = local_58.MoveNext();
				if (bVar5) {
					if (local_48 != null) {
						bVar2 = (typeof(BaseSetSetting)._2).typeHierarchyDepth;
						if ((bVar2 <= (local_48.klass._2).typeHierarchyDepth) &&((local_48.klass._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(BaseSetSetting))) {
							if (local_48[3].klass != null) {
	label_0414857f: ;
								throw new NullReferenceException();
							}
	label_04148575: ;
							throw new NullReferenceException();
						}
	label_0414857a: ;
						throw new InvalidCastException();
					}
	label_0414853f: ;
					throw new NullReferenceException();
				}
			}
			else {
				while (true) {
					bVar5 = local_58.MoveNext();
					pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
					if (!(bVar5)) break;
					if (local_48 == null) goto label_0414853f;
					bVar2 = (typeof(BaseSetSetting)._2).typeHierarchyDepth;
					if (((local_48.klass._2).typeHierarchyDepth < bVar2) ||((local_48.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(BaseSetSetting))) goto label_0414857a;
					if (local_48[3].klass == null) goto label_04148575;
					item = ((local_48[3].klass)._1).byval_arg.data;
					piVar1 = &__this_01._version;
					*piVar1 = *piVar1 + 1;
					pSVar6 = __this_01._items;
					if (pSVar6 == null) goto label_0414857f;
					uVar3 = __this_01._size;
					if (uVar3 < (uint)pSVar6.Length) {
						__this_01._size = uVar3 + 1;
						pSVar6[(int)uVar3] = item;
					}
					else {
						__this_01.AddWithResize((object)item);
					}
				}
			}
			local_58.Dispose();
			if (__this_01 != null) {
				pSVar6 = (String[])__this_01.ToArray();
				return pSVar6;
			}
		}
		throw new NullReferenceException();
	}

	// Settings.SetSettingsContainer<object>$$.ctor: 5 lines keep C-only constructs
	private void object___ctor()
	{
		IntSetting __this_00;
		object defaultValue;
		Il2CppClass klass;
		ListSetting<T> __this_01;

		__this_00 = new IntSetting(0, 0, 0x7fffffff);
		this.SelectedSetIndex = __this_00;
		defaultValue = Activator.CreateInstance<object>();
		klass = method.klass.rgctx_data._1_Settings_ListSetting_T_;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		__this_01 = (ListSetting<T>)il2cpp_codegen_object_new(klass);
		__this_01 = new ListSetting<object>(defaultValue);
		this.Sets = __this_01;
		base();
		return;
	}
}
