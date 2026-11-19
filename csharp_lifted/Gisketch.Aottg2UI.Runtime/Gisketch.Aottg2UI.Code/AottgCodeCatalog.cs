// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgCodeCatalog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgCodeCatalog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Reflection;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000079")]
public sealed class AottgCodeCatalog
{
	[Token(Token = "0x40002AE")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<AottgScreenEntry> _screens;

	[Token(Token = "0x40002AF")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<AottgDialogEntry> _dialogs;

	[Token(Token = "0x40002B0")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<AottgPopoverEntry> _popovers;

	[Token(Token = "0x1700005A")]
	public IReadOnlyList<AottgScreenEntry> Screens
	{
		[Token(Token = "0x60003A2")]
		[Address(RVA = "0x5262060", Offset = "0x5261060", VA = "0x5262060")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgCodeCatalog.c (Gisketch.Aottg2UI.Code.AottgCodeCatalog$$get_Screens): clean
			return (IReadOnlyList<AottgScreenEntry>)this._screens;
		}
	}

	[Token(Token = "0x1700005B")]
	public IReadOnlyList<AottgDialogEntry> Dialogs
	{
		[Token(Token = "0x60003A3")]
		[Address(RVA = "0x5262070", Offset = "0x5261070", VA = "0x5262070")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgCodeCatalog.c (Gisketch.Aottg2UI.Code.AottgCodeCatalog$$get_Dialogs): clean
			return (IReadOnlyList<AottgDialogEntry>)this._dialogs;
		}
	}

	[Token(Token = "0x1700005C")]
	public IReadOnlyList<AottgPopoverEntry> Popovers
	{
		[Token(Token = "0x60003A4")]
		[Address(RVA = "0x5262080", Offset = "0x5261080", VA = "0x5262080")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgCodeCatalog.c (Gisketch.Aottg2UI.Code.AottgCodeCatalog$$get_Popovers): clean
			return (IReadOnlyList<AottgPopoverEntry>)this._popovers;
		}
	}

	[Token(Token = "0x1700005D")]
	public string[] ScreenIds
	{
		[Token(Token = "0x60003A5")]
		[Address(RVA = "0x5262090", Offset = "0x5261090", VA = "0x5262090")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgCodeCatalog.c (Gisketch.Aottg2UI.Code.AottgCodeCatalog$$get_ScreenIds): clean
			String[] pSVar1;
			AottgScreenEntry pGVar2;
			ulong uVar3;
			List<AottgScreenEntry> pSVar4;
			long lVar5;

			pSVar4 = this._screens;
			if (pSVar4 != null) {
				pSVar1 = (String[])new string[pSVar4._size];
				pSVar4 = this._screens;
				if (pSVar4 != null) {
					if (pSVar1 == null) {
						if (0 < pSVar4._size) {
							pSVar4.get_Item(0);
							throw new NullReferenceException();
						}
						return null;
					}
					lVar5 = 0;
					uVar3 = 0;
					do {
						if ((long)pSVar4._size <= (long)uVar3) {
							return pSVar1;
						}
						pGVar2 = pSVar4.get_Item((int32_t)uVar3);
						if (pGVar2 == null) break;
						if ((uint)pSVar1.Length <= uVar3) {
							throw new IndexOutOfRangeException();
						}
						pSVar1[uVar3] = pGVar2._Id_k__BackingField;
						uVar3 = uVar3 + 1;
						pSVar4 = this._screens;
						lVar5 = lVar5 + 8;
					} while (pSVar4 != null);
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x52621A0", Offset = "0x52611A0", VA = "0x52621A0")]
	public bool HasScreen(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgCodeCatalog.c (Gisketch.Aottg2UI.Code.AottgCodeCatalog$$HasScreen): 3 lines keep C-only constructs
		List<AottgScreenEntry> __this_00;
		bool bVar1;
		bool bVar2;
		int iVar3;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_28;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		__this_00 = this._screens;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_48 = __this_00.GetEnumerator();
		local_28 = (byte)&local_48;
		do {
			bVar1 = local_48.MoveNext();
			if (!bVar1) {
				iVar3 = 5;
				goto label_0536227e;
			}
			if (local_48._current == null) {
				throw new NullReferenceException();
			}
			bVar2 = String.Equals((String)local_48._current[1].klass, id, 5);
		} while (!bVar2);
		iVar3 = 4;
	label_0536227e: ;
		local_48.Dispose();
		return iVar3 == 4 && bVar1;
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x5262320", Offset = "0x5261320", VA = "0x5262320")]
	public static AottgCodeCatalog Discover()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgCodeCatalog.c (Gisketch.Aottg2UI.Code.AottgCodeCatalog$$Discover): clean
		AottgCodeCatalog pGVar1;

		return pGVar1;
	}

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x5262330", Offset = "0x5261330", VA = "0x5262330")]
	private static AottgCodeCatalog DiscoverFresh()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgCodeCatalog.c (Gisketch.Aottg2UI.Code.AottgCodeCatalog$$DiscoverFresh): 8 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		OrdinalIgnoreCaseComparer pSVar3;
		List<AottgScreenEntry> __this;
		List<AottgDialogEntry> __this_00;
		List<AottgPopoverEntry> __this_01;
		object pIVar4;
		AottgCodeCatalog __this_02;
		Dictionary<string, Type> __this_03;
		Dictionary<string, Type> __this_04;
		Dictionary<string, Type> __this_05;
		AppDomain __this_06;
		Assembly[] pSVar5;
		ulong uVar6;
		Gisketch_Aottg2UI_Code_AottgCodeCatalog___c_StaticFields pGVar7;
		Comparison<T> pSVar8;
		ulong uVar9;

		__this_02 = new AottgCodeCatalog();
		if ((typeof(StringComparer)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07542886 == false) goto label_053625d8;
	label_05362436: ;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_07542886 != false) goto label_05362436;
	label_053625d8: ;
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar3 = StringComparer.s_ordinalIgnoreCase;
		__this_03 = new Dictionary<string, Type>((System_Collections_Generic_IEqualityComparer_TKey__o)pSVar3);
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar3 = StringComparer.s_ordinalIgnoreCase;
		__this_04 = new Dictionary<string, Type>((System_Collections_Generic_IEqualityComparer_TKey__o)pSVar3);
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar3 = StringComparer.s_ordinalIgnoreCase;
		__this_05 = new Dictionary<string, Type>((System_Collections_Generic_IEqualityComparer_TKey__o)pSVar3);
		__this_06 = AppDomain.CurrentDomain;
		if ((__this_06 != null) &&(pSVar5 = __this_06.GetAssemblies(), pSVar5 != null)) {
			if (__this_02 == null) {
				throw new NullReferenceException();
			}
			if (0 < (int)pSVar5.Length) {
				uVar6 = pSVar5.Length & 0xffffffff;
				uVar9 = 0;
				do {
					if (uVar6 <= uVar9) {
						throw new IndexOutOfRangeException();
					}
					__this_02.ReadAssembly(pSVar5[uVar9], __this_03, __this_04, __this_05);
					uVar9 = uVar9 + 1;
					uVar2 = (uint)pSVar5.Length;
					uVar6 = (ulong)uVar2;
				} while ((long)uVar9 < (long)(int)uVar2);
				if (__this_02 == null) goto label_053628a2;
			}
			__this = __this_02._screens;
			if ((typeof(AottgCodeCatalog.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar7 = typeof(AottgCodeCatalog.c).static_fields;
				pSVar8 = (Comparison<T>)pGVar7.__9__13_0;
			}
			else {
				pGVar7 = typeof(AottgCodeCatalog.c).static_fields;
				pSVar8 = (Comparison<T>)pGVar7.__9__13_0;
			}
			if (pSVar8 == null) {
				if (((typeof(AottgCodeCatalog.c))._2).cctor_finished_or_no_cctor == 0) {
					pGVar7 = typeof(AottgCodeCatalog.c).static_fields;
				}
				pIVar4 = (object)pGVar7.__9;
				pSVar8 = new Comparison<AottgPopoverEntry>(pIVar4, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_AottgCodeCatalog_c_DiscoverFresh_b__13_0);
				pGVar7 = typeof(AottgCodeCatalog.c).static_fields;
				pGVar7.__9__13_0 = (Comparison<AottgScreenEntry>)pSVar8;
			}
			if (__this != null) {
				__this.Sort(pSVar8);
				__this_00 = __this_02._dialogs;
				if ((typeof(AottgCodeCatalog.c)._2).cctor_finished_or_no_cctor == 0) {
					pGVar7 = typeof(AottgCodeCatalog.c).static_fields;
					pSVar8 = (Comparison<T>)pGVar7.__9__13_1;
				}
				else {
					pGVar7 = typeof(AottgCodeCatalog.c).static_fields;
					pSVar8 = (Comparison<T>)pGVar7.__9__13_1;
				}
				if (pSVar8 == null) {
					if (((typeof(AottgCodeCatalog.c))._2). cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(AottgCodeCatalog.c)) ;
						pGVar7 = typeof(AottgCodeCatalog.c).static_fields;
					}
					pIVar4 = (object)pGVar7.__9;
					pSVar8 = new Comparison<AottgPopoverEntry>(pIVar4, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_AottgCodeCatalog_c_DiscoverFresh_b__13_1);
					pGVar7 = typeof(AottgCodeCatalog.c).static_fields;
					pGVar7.__9__13_1 = (Comparison<AottgDialogEntry>)pSVar8;
				}
				if (__this_00 != null) {
					__this_00.Sort(pSVar8);
					__this_01 = __this_02._popovers;
					if ((typeof(AottgCodeCatalog.c)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(AottgCodeCatalog.c)) ;
						pGVar7 = typeof(AottgCodeCatalog.c).static_fields;
						pSVar8 = (Comparison<T>)pGVar7.__9__13_2;
					}
					else {
						pGVar7 = typeof(AottgCodeCatalog.c).static_fields;
						pSVar8 = (Comparison<T>)pGVar7.__9__13_2;
					}
					if (pSVar8 == null) {
						if (((typeof(AottgCodeCatalog.c))._2). cctor_finished_or_no_cctor == 0) {
							pGVar7 = typeof(AottgCodeCatalog.c).static_fields;
						}
						pIVar4 = (object)pGVar7.__9;
						pSVar8 = new Comparison<AottgPopoverEntry>(pIVar4, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_AottgCodeCatalog_c_DiscoverFresh_b__13_2);
						pGVar7 = typeof(AottgCodeCatalog.c).static_fields;
						pGVar7.__9__13_2 = (Comparison<AottgPopoverEntry>)pSVar8;
					}
					if (__this_01 != null) {
						__this_01.Sort(pSVar8);
						return __this_02;
					}
				}
			}
		}
	label_053628a2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x52629D0", Offset = "0x52619D0", VA = "0x52629D0")]
	private void ReadAssembly(Assembly assembly, Dictionary<string, Type> screens, Dictionary<string, Type> dialogs, Dictionary<string, Type> popovers)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgCodeCatalog.c (Gisketch.Aottg2UI.Code.AottgCodeCatalog$$ReadAssembly): clean
		uint uVar1;
		Type left;
		Il2CppType pIVar2;
		bool bVar3;
		Type[] pSVar4;
		ulong uVar5;
		AottgScreenAttribute attribute;
		Type pSVar6;
		AottgDialogAttribute attribute_00;
		AottgPopoverAttribute attribute_01;
		ulong uVar7;

		pSVar4 = AottgCodeCatalog.SafeTypes(assembly);
		if (pSVar4 == null) {
	label_05362c6d: ;
			throw new NullReferenceException();
		}
		if (0 < (int)pSVar4.Length) {
			uVar5 = pSVar4.Length & 0xffffffff;
			uVar7 = 0;
			do {
				if (uVar5 <= uVar7) {
					throw new IndexOutOfRangeException();
				}
				left = pSVar4[uVar7];
				bVar3 = (left == null);
				if (!bVar3) {
					if (left == null) goto label_05362c6d;
					bVar3 = left.IsAbstract;
					if (!bVar3) {
						attribute = AottgCodeCatalog.Attribute<AottgScreenAttribute>(left);
						pIVar2 = TypeRef_Gisketch_Aottg2UI_Code_AottgScreen;
						if (attribute != null) {
							pSVar6 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar2);
							if (pSVar6 == null) goto label_05362c6d;
							bVar3 = pSVar6.IsAssignableFrom(left);
							if (bVar3) {
								this.AddScreen(left, attribute, screens);
							}
						}
						attribute_00 = AottgCodeCatalog.Attribute<AottgDialogAttribute>(left);
						pIVar2 = TypeRef_Gisketch_Aottg2UI_Code_AottgDialog;
						if (attribute_00 != null) {
							pSVar6 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar2);
							if (pSVar6 == null) goto label_05362c6d;
							bVar3 = pSVar6.IsAssignableFrom(left);
							if (bVar3) {
								this.AddDialog(left, attribute_00, dialogs);
							}
						}
						attribute_01 = AottgCodeCatalog.Attribute<AottgPopoverAttribute>(left);
						pIVar2 = TypeRef_Gisketch_Aottg2UI_Code_AottgPopover;
						if (attribute_01 != null) {
							pSVar6 = Type.GetTypeFromHandle((RuntimeTypeHandle)pIVar2);
							if (pSVar6 == null) goto label_05362c6d;
							bVar3 = pSVar6.IsAssignableFrom(left);
							if (bVar3) {
								this.AddPopover(left, attribute_01, popovers) ;
							}
						}
					}
				}
				uVar7 = uVar7 + 1;
				uVar1 = (uint)pSVar4.Length;
				uVar5 = (ulong)uVar1;
			} while ((long)uVar7 < (long)(int)uVar1);
		}
		return;
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x5262D30", Offset = "0x5261D30", VA = "0x5262D30")]
	private void AddScreen(Type type, AottgScreenAttribute attribute, Dictionary<string, Type> seen)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgCodeCatalog.c (Gisketch.Aottg2UI.Code.AottgCodeCatalog$$AddScreen): 2 lines keep C-only constructs
		int piVar1;
		int iVar2;
		uint uVar3;
		List<AottgScreenEntry> __this_00;
		String pSVar4;
		String pSVar5;
		String pSVar6;
		String pSVar7;
		String pSVar8;
		String pSVar9;
		String pSVar10;
		String pSVar11;
		AottgScreenEntry[] pGVar12;
		AottgScreenEntry __this_01;

		if (attribute != null) {
			AottgCodeCatalog.GuardDuplicate("screen", attribute._Id_k__BackingField, type, seen);
			__this_00 = this._screens;
			pSVar4 = attribute._Id_k__BackingField;
			pSVar5 = attribute._Title_k__BackingField;
			pSVar6 = attribute._TitleKey_k__BackingField;
			pSVar7 = attribute._SearchTitle_k__BackingField;
			pSVar8 = attribute._SearchTitleKey_k__BackingField;
			pSVar9 = attribute._SearchGroup_k__BackingField;
			pSVar10 = attribute._BackScreenId_k__BackingField;
			pSVar11 = attribute._BackActionId_k__BackingField;
			iVar2 = attribute._Lifecycle_k__BackingField;
			__this_01 = new AottgScreenEntry();
			__this_01._Id_k__BackingField = pSVar4;
			__this_01._Title_k__BackingField = pSVar5;
			__this_01._TitleKey_k__BackingField = pSVar6;
			__this_01._SearchTitle_k__BackingField = pSVar7;
			__this_01._SearchTitleKey_k__BackingField = pSVar8;
			__this_01._SearchGroup_k__BackingField = pSVar9;
			__this_01._BackScreenId_k__BackingField = pSVar10;
			__this_01._BackActionId_k__BackingField = pSVar11;
			__this_01._Lifecycle_k__BackingField = iVar2;
			__this_01._Type_k__BackingField = type;
			if (__this_00 != null) {
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pGVar12 = __this_00._items;
				if (pGVar12 != null) {
					uVar3 = __this_00._size;
					if (uVar3 < (uint)pGVar12.Length) {
						__this_00._size = uVar3 + 1;
						pGVar12[(int)uVar3] = __this_01;
						return;
					}
					__this_00.AddWithResize((object)__this_01);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x5262F20", Offset = "0x5261F20", VA = "0x5262F20")]
	private void AddDialog(Type type, AottgDialogAttribute attribute, Dictionary<string, Type> seen)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgCodeCatalog.c (Gisketch.Aottg2UI.Code.AottgCodeCatalog$$AddDialog): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<AottgDialogEntry> __this_00;
		String pSVar3;
		AottgDialogEntry[] pGVar4;
		AottgDialogEntry __this_01;

		if (attribute != null) {
			AottgCodeCatalog.GuardDuplicate("dialog", attribute._Id_k__BackingField, type, seen);
			__this_00 = this._dialogs;
			pSVar3 = attribute._Id_k__BackingField;
			__this_01 = new AottgDialogEntry();
			__this_01._Id_k__BackingField = pSVar3;
			__this_01._Type_k__BackingField = type;
			__this_01._Attribute_k__BackingField = attribute;
			if (__this_00 != null) {
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pGVar4 = __this_00._items;
				if (pGVar4 != null) {
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pGVar4.Length) {
						__this_00._size = uVar2 + 1;
						pGVar4[(int)uVar2] = __this_01;
						return;
					}
					__this_00.AddWithResize((object)__this_01);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x5263060", Offset = "0x5262060", VA = "0x5263060")]
	private void AddPopover(Type type, AottgPopoverAttribute attribute, Dictionary<string, Type> seen)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgCodeCatalog.c (Gisketch.Aottg2UI.Code.AottgCodeCatalog$$AddPopover): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<AottgPopoverEntry> __this_00;
		String pSVar3;
		AottgPopoverEntry[] pGVar4;
		AottgPopoverEntry __this_01;

		if (attribute != null) {
			AottgCodeCatalog.GuardDuplicate("popover", attribute._Id_k__BackingField, type, seen);
			__this_00 = this._popovers;
			pSVar3 = attribute._Id_k__BackingField;
			__this_01 = new AottgPopoverEntry();
			__this_01._Id_k__BackingField = pSVar3;
			__this_01._Type_k__BackingField = type;
			__this_01._Attribute_k__BackingField = attribute;
			if (__this_00 != null) {
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pGVar4 = __this_00._items;
				if (pGVar4 != null) {
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pGVar4.Length) {
						__this_00._size = uVar2 + 1;
						pGVar4[(int)uVar2] = __this_01;
						return;
					}
					__this_00.AddWithResize((object)__this_01);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x52631A0", Offset = "0x52621A0", VA = "0x52631A0")]
	private static void GuardDuplicate(string kind, string id, Type type, Dictionary<string, Type> seen)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgCodeCatalog.c (Gisketch.Aottg2UI.Code.AottgCodeCatalog$$GuardDuplicate): 29 lines keep C-only constructs
		bool bVar1;
		Il2CppClass pIVar2;
		String[] values;
		object pIVar3;
		String message;
		InvalidOperationException __this;
		MethodInfo lastManagedFrame;
		object local_30;

		local_30 = null;
		bVar1 = String.IsNullOrEmpty(id);
		if (bVar1) {
			pIVar2 = il2cpp_codegen_get_runtime_metadata(&typeof(string[]));
			values = (String[])new pIVar2[5];
			pIVar3 = il2cpp_codegen_get_runtime_metadata(&"AoTTG ");
			il2cpp_codegen_array_set_ref((Array)values, 0, pIVar3);
			il2cpp_codegen_array_set_ref((Array)values, 1, (object)kind);
			pIVar3 = il2cpp_codegen_get_runtime_metadata(&" id is required on ");
			il2cpp_codegen_array_set_ref((Array)values, 2, pIVar3);
			pIVar3 = (object)type.unknown();
			il2cpp_codegen_array_set_ref((Array)values, 3, pIVar3);
			pIVar3 = il2cpp_codegen_get_runtime_metadata(&".");
			il2cpp_codegen_array_set_ref((Array)values, 4, pIVar3);
		}
		else {
			if (seen == null) {
				throw new NullReferenceException();
			}
			bVar1 = seen.TryGetValue((object)id, ref local_30);
			if (!bVar1) {
				seen.set_Item((object)id, (object)type);
				return;
			}
			pIVar2 = il2cpp_codegen_get_runtime_metadata(&typeof(string[]));
			values = (String[])new pIVar2[9];
			pIVar3 = il2cpp_codegen_get_runtime_metadata(&"Duplicate AoTTG ");
			il2cpp_codegen_array_set_ref((Array)values, 0, pIVar3);
			il2cpp_codegen_array_set_ref((Array)values, 1, (object)kind);
			pIVar3 = il2cpp_codegen_get_runtime_metadata(&" id '");
			il2cpp_codegen_array_set_ref((Array)values, 2, pIVar3);
			il2cpp_codegen_array_set_ref((Array)values, 3, (object)id);
			pIVar3 = il2cpp_codegen_get_runtime_metadata(&"' on ");
			il2cpp_codegen_array_set_ref((Array)values, 4, pIVar3);
			pIVar3 = (object)type.unknown();
			il2cpp_codegen_array_set_ref((Array)values, 5, pIVar3);
			pIVar3 = il2cpp_codegen_get_runtime_metadata(&" and ");
			il2cpp_codegen_array_set_ref((Array)values, 6, pIVar3);
			pIVar3 = local_30;
			pIVar2 = pIVar3.klass;
			pIVar3 = (object)(*pIVar2.vtable[0x1a].methodPtr)(pIVar3,pIVar2.vtable[0x1a].method);
			il2cpp_codegen_array_set_ref((Array)values, 7, pIVar3);
			pIVar3 = il2cpp_codegen_get_runtime_metadata(&".");
			il2cpp_codegen_array_set_ref((Array)values, 8, pIVar3);
		}
		message = String.Concat(values);
		pIVar2 = il2cpp_codegen_get_runtime_metadata(&typeof(InvalidOperationException));
		__this = (InvalidOperationException)il2cpp_codegen_object_new(pIVar2);
		__this = new InvalidOperationException(message);
		lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Code_AottgCodeCatalog_GuardDuplicate) ;
		throw (object)__this;
	}

	[Token(Token = "0x60003AE")]
	private static T Attribute<T>(Type type) where T : Attribute
	{
		return null;
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x5262C80", Offset = "0x5261C80", VA = "0x5262C80")]
	private static Type[] SafeTypes(Assembly assembly)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgCodeCatalog.c (Gisketch.Aottg2UI.Code.AottgCodeCatalog$$SafeTypes): clean
		Type[] pSVar1;

		if (assembly == null) {
			throw new NullReferenceException();
		}
		return pSVar1;
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x52628C0", Offset = "0x52618C0", VA = "0x52628C0")]
	public AottgCodeCatalog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgCodeCatalog.c (Gisketch.Aottg2UI.Code.AottgCodeCatalog$$.ctor): clean
		List<AottgScreenEntry> __this_00;
		List<AottgDialogEntry> __this_01;
		List<AottgPopoverEntry> __this_02;

		__this_00 = new List<AottgScreenEntry>();
		this._screens = __this_00;
		__this_01 = new List<AottgDialogEntry>();
		this._dialogs = __this_01;
		__this_02 = new List<AottgPopoverEntry>();
		this._popovers = __this_02;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgCodeCatalog.c.

	// Gisketch.Aottg2UI.Code.AottgCodeCatalog$$Attribute<object>: 7 lines keep C-only constructs
	private static object Attribute_object(Type type)
	{
		RuntimeTypeHandle handle;
		object obj;
		MethodInfo_3488180_RGCTXs pMVar1;
		Type pSVar2;
		Object[] pSVar3;
		Il2CppClass klass;
		object pIVar4;

		pMVar1 = method.rgctx_data;
		if (pMVar1 == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			pMVar1 = method.rgctx_data;
		}
		handle.value = (RuntimeTypeHandle)pMVar1._0_T;
		pSVar2 = Type.GetTypeFromHandle(handle);
		if ((type == null) ||(pSVar3 = type.GetCustomAttributes(pSVar2, false), pSVar3 == null)) {
			throw new NullReferenceException();
		}
		if (pSVar3.Length != 0) {
			if ((int)pSVar3.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			obj = pSVar3[0];
			klass = method.rgctx_data._1_T;
			if (((klass._2).bitflags1 & 1) == 0) {
				klass = il2cpp_codegen_class_init_checked(klass);
			}
			if (obj != null) {
				pIVar4 = il2cpp_vm_Object_IsInst(obj, klass);
				if (pIVar4 == null) {
					throw new InvalidCastException();
				}
				return pIVar4;
			}
		}
		return null;
	}

	// Gisketch.Aottg2UI.Code.AottgCodeCatalog.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgCodeCatalog.c();
		AottgCodeCatalog.c.__9 =(AottgCodeCatalog.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Code.AottgCodeCatalog.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Code.AottgCodeCatalog.<>c$$<DiscoverFresh>b__13_0: clean
	private int c__DiscoverFresh_b__13_0(AottgScreenEntry a, AottgScreenEntry b)
	{
		int iVar1;

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		iVar1 = String.CompareOrdinal(a._Id_k__BackingField, b._Id_k__BackingField);
		return iVar1;
	}

	// Gisketch.Aottg2UI.Code.AottgCodeCatalog.<>c$$<DiscoverFresh>b__13_1: clean
	private int c__DiscoverFresh_b__13_1(AottgDialogEntry a, AottgDialogEntry b)
	{
		int iVar1;

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		iVar1 = String.CompareOrdinal(a._Id_k__BackingField, b._Id_k__BackingField);
		return iVar1;
	}

	// Gisketch.Aottg2UI.Code.AottgCodeCatalog.<>c$$<DiscoverFresh>b__13_2: clean
	private int c__DiscoverFresh_b__13_2(AottgPopoverEntry a, AottgPopoverEntry b)
	{
		int iVar1;

		if ((a == null) ||(b == null)) {
			throw new NullReferenceException();
		}
		iVar1 = String.CompareOrdinal(a._Id_k__BackingField, b._Id_k__BackingField);
		return iVar1;
	}
}
