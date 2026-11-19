// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgCodeManifestBuilder.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x200007E")]
public static class AottgCodeManifestBuilder
{
	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x5263830", Offset = "0x5262830", VA = "0x5263830")]
	public static GisketchManifestDefinition Build(string selectedScreenId, GisketchThemeDefinition theme, AottgActionRegistry actions)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgCodeManifestBuilder.c (Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$Build): clean
		AottgCodeCatalog catalog;
		GisketchManifestDefinition pGVar1;

		catalog = AottgCodeCatalog.DiscoverFresh();
		pGVar1 = AottgCodeManifestBuilder.Build(catalog, selectedScreenId, theme, actions);
		return pGVar1;
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x5263860", Offset = "0x5262860", VA = "0x5263860")]
	public static GisketchManifestDefinition Build(AottgCodeCatalog catalog, string selectedScreenId, GisketchThemeDefinition theme, AottgActionRegistry actions)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgCodeManifestBuilder.c (Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$Build): 18 lines keep C-only constructs
		List<AottgScreenEntry> pSVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		Dictionary<object, object> __this;
		bool bVar4;
		int iVar5;
		uint length;
		VirtualInvokeData pVVar6;
		GisketchScreenDefinition[] pGVar7;
		object pIVar8;
		AottgScreen __this_00;
		GisketchScreenDefinition pGVar9;
		GisketchManifestDefinition __this_01;
		GisketchOverlayDefinition[] pGVar10;
		ulong uVar11;
		ulong uVar12;
		long lVar13;

		if (catalog == null) {
			return null;
		}
		pSVar1 = catalog._screens;
		if (pSVar1 != null) {
			pIVar2 = (Il2CppClass)pSVar1.klass;
			uVar12 = (ulong)(pIVar2._2).interface_offsets_count;
			if (uVar12 != 0) {
				pIVar3 = (pIVar2._1).interfaceOffsets;
				lVar13 = 0;
				do {
					if (*(IReadOnlyCollection<AottgScreenEntry>*)((long)&pIVar3.interfaceType + lVar13) == typeof(IReadOnlyCollection<AottgScreenEntry>)) {
						pVVar6 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar13);
						goto label_05363941;
					}
					lVar13 = lVar13 + 0x10;
				} while (uVar12 * 0x10 != lVar13);
			}
			pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath((object)pSVar1, (Il2CppClass)typeof(IReadOnlyCollection<AottgScreenEntry>), 0);
	label_05363941: ;
			iVar5 = (*pVVar6.methodPtr)((object)pSVar1,pVVar6.method);
			if (iVar5 == 0) {
				return null;
			}
			if (actions != null) {
				__this = (Dictionary<object, object>)actions._actions;
				if (__this == null) goto label_05363cb8;
				__this.Clear();
				actions._next = 0;
			}
			pSVar1 = catalog._screens;
			if (pSVar1 != null) {
				pIVar2 = (Il2CppClass)pSVar1.klass;
				uVar12 = (ulong)(pIVar2._2).interface_offsets_count;
				if (uVar12 != 0) {
					pIVar3 = (pIVar2._1).interfaceOffsets;
					lVar13 = 0;
					do {
						if (*(IReadOnlyCollection<AottgScreenEntry>*)((long)&pIVar3.interfaceType + lVar13) == typeof(IReadOnlyCollection<AottgScreenEntry>)) {
							pVVar6 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar13);
							goto label_05363a08;
						}
						lVar13 = lVar13 + 0x10;
					} while (uVar12 * 0x10 != lVar13);
				}
				pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath((object)pSVar1, (Il2CppClass)typeof(IReadOnlyCollection<AottgScreenEntry>), 0);
	label_05363a08: ;
				length = (*pVVar6.methodPtr)((object)pSVar1,pVVar6.method);
				pGVar7 = (GisketchScreenDefinition[])new GisketchScreenDefinition[length];
				if (pGVar7 != null) {
					if (0 < (int)pGVar7.Length) {
						uVar12 = 0;
						do {
							pSVar1 = catalog._screens;
							if (pSVar1 == null) goto label_05363cb8;
							pIVar2 = (Il2CppClass)pSVar1.klass;
							uVar11 = (ulong)(pIVar2._2).interface_offsets_count;
							if (uVar11 != 0) {
								pIVar3 = (pIVar2._1).interfaceOffsets;
								lVar13 = 0;
								do {
									if (*(IReadOnlyList<AottgScreenEntry>*)((long)&pIVar3.interfaceType + lVar13) == typeof(IReadOnlyList<AottgScreenEntry>)) {
										pVVar6 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar13);
										goto label_05363ac3;
									}
									lVar13 = lVar13 + 0x10;
								} while (uVar11 * 0x10 != lVar13);
							}
							pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath((object)pSVar1, (Il2CppClass)typeof(IReadOnlyList<AottgScreenEntry>), 0);
	label_05363ac3: ;
							pIVar8 = (*pVVar6.methodPtr)((object)pSVar1,(int32_t)uVar12,pVVar6.method);
							if ((pIVar8 == null) ||(__this_00 = AottgCodeManifestBuilder.Instance<AottgScreen>(pIVar8[5].monitor), __this_00 == null)) goto label_05363cb8;
							pGVar9 = __this_00.BuildDefinition((String)pIVar8[1].klass, pIVar8[1].monitor, (String)pIVar8[2].klass, pIVar8[2].monitor, (String)pIVar8[3].klass, pIVar8[3].monitor, (String)pIVar8[4].klass, pIVar8[4].monitor, *(int)&pIVar8[5].klass, actions);
							if ((uint)pGVar7.Length <= uVar12) {
								throw new IndexOutOfRangeException();
							}
							pGVar7[uVar12] = pGVar9;
							uVar12 = uVar12 + 1;
						} while ((long)uVar12 < (long)(int)pGVar7.Length);
					}
					__this_01.schemaVersion = 1;
					__this_01 = new GisketchManifestDefinition();
					__this_01.schemaVersion = 1;
					bVar4 = catalog.HasScreen(selectedScreenId);
					if (bVar4) {
	label_05363c3b: ;
						__this_01.initialScreen = selectedScreenId;
						__this_01.theme = theme;
						__this_01.screens = pGVar7;
						pGVar10 = AottgCodeManifestBuilder.BuildDialogs(catalog, actions);
						__this_01.dialogs = pGVar10;
						pGVar10 = AottgCodeManifestBuilder.BuildPopovers(catalog, actions);
						__this_01.popovers = pGVar10;
						return __this_01;
					}
					pSVar1 = catalog._screens;
					if (pSVar1 != null) {
						pIVar2 = (Il2CppClass)pSVar1.klass;
						uVar12 = (ulong)(pIVar2._2).interface_offsets_count;
						if (uVar12 != 0) {
							pIVar3 = (pIVar2._1).interfaceOffsets;
							lVar13 = 0;
							do {
								if (*(IReadOnlyList<AottgScreenEntry>*)((long)&pIVar3.interfaceType + lVar13) == typeof(IReadOnlyList<AottgScreenEntry>)) {
									pVVar6 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar13);
									goto label_05363c11;
								}
								lVar13 = lVar13 + 0x10;
							} while (uVar12 * 0x10 != lVar13);
						}
						pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath((object)pSVar1, (Il2CppClass)typeof(IReadOnlyList<AottgScreenEntry>), 0);
	label_05363c11: ;
						pIVar8 = (*pVVar6.methodPtr)((object)pSVar1,0,pVVar6.method);
						if ((pIVar8 != null) &&(__this_01 != null)) {
							selectedScreenId = (String)pIVar8[1].klass;
							goto label_05363c3b;
						}
					}
				}
			}
		}
	label_05363cb8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x5263CD0", Offset = "0x5262CD0", VA = "0x5263CD0")]
	private static GisketchOverlayDefinition[] BuildDialogs(AottgCodeCatalog catalog, AottgActionRegistry actions)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgCodeManifestBuilder.c (Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$BuildDialogs): 9 lines keep C-only constructs
		List<AottgDialogEntry> pSVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		uint length;
		VirtualInvokeData pVVar4;
		GisketchOverlayDefinition[] pGVar5;
		object pIVar6;
		AottgDialog __this;
		GisketchOverlayDefinition pGVar7;
		ulong uVar8;
		long lVar9;
		ulong uVar10;

		if ((catalog != null) &&(pSVar1 = catalog._dialogs, pSVar1 != null)) {
			pIVar2 = (Il2CppClass)pSVar1.klass;
			uVar10 = (ulong)(pIVar2._2).interface_offsets_count;
			if (uVar10 != 0) {
				pIVar3 = (pIVar2._1).interfaceOffsets;
				lVar9 = 0;
				do {
					if (*(IReadOnlyCollection<AottgDialogEntry>*)((long)&pIVar3.interfaceType + lVar9) == typeof(IReadOnlyCollection<AottgDialogEntry>)) {
						pVVar4 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar9);
						goto label_05363d91;
					}
					lVar9 = lVar9 + 0x10;
				} while (uVar10 * 0x10 != lVar9);
			}
			pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath((object)pSVar1, (Il2CppClass)typeof(IReadOnlyCollection<AottgDialogEntry>), 0);
	label_05363d91: ;
			length = (*pVVar4.methodPtr)((object)pSVar1,pVVar4.method);
			pGVar5 = (GisketchOverlayDefinition[])new GisketchOverlayDefinition[length];
			if (pGVar5 != null) {
				if (0 < (int)pGVar5.Length) {
					uVar10 = 0;
					do {
						pSVar1 = catalog._dialogs;
						if (pSVar1 == null) goto label_05363ec7;
						pIVar2 = (Il2CppClass)pSVar1.klass;
						uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
						if (uVar8 != 0) {
							pIVar3 = (pIVar2._1).interfaceOffsets;
							lVar9 = 0;
							do {
								if (*(IReadOnlyList<AottgDialogEntry>*)((long)&pIVar3.interfaceType + lVar9) == typeof(IReadOnlyList<AottgDialogEntry>)) {
									pVVar4 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar9);
									goto label_05363e43;
								}
								lVar9 = lVar9 + 0x10;
							} while (uVar8 * 0x10 != lVar9);
						}
						pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath((object)pSVar1, (Il2CppClass)typeof(IReadOnlyList<AottgDialogEntry>), 0);
	label_05363e43: ;
						pIVar6 = (*pVVar4.methodPtr)((object)pSVar1,(int32_t)uVar10,pVVar4.method);
						if (pIVar6 == null) goto label_05363ec7;
						__this = AottgCodeManifestBuilder.Instance<AottgDialog>(pIVar6[1].monitor) ;
						if (__this == null) goto label_05363ec7;
						pGVar7 = __this.BuildDefinition((String)pIVar6[1].klass, (AottgDialogAttribute)pIVar6[2].klass, actions);
						if ((uint)pGVar5.Length <= uVar10) {
							throw new IndexOutOfRangeException();
						}
						pGVar5[uVar10] = pGVar7;
						uVar10 = uVar10 + 1;
					} while ((long)uVar10 < (long)(int)pGVar5.Length);
				}
				return pGVar5;
			}
		}
	label_05363ec7: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x5264410", Offset = "0x5263410", VA = "0x5264410")]
	public static GisketchOverlayDefinition BuildDialog(string id, AottgActionRegistry actions)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgCodeManifestBuilder.c (Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$BuildDialog): clean
		AottgCodeCatalog catalog;
		GisketchOverlayDefinition pGVar1;

		catalog = AottgCodeCatalog.DiscoverFresh();
		pGVar1 = AottgCodeManifestBuilder.BuildDialog(catalog, id, actions);
		return pGVar1;
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x5264440", Offset = "0x5263440", VA = "0x5264440")]
	public static GisketchOverlayDefinition BuildDialog(AottgCodeCatalog catalog, string id, AottgActionRegistry actions)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgCodeManifestBuilder.c (Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$BuildDialog): 2 lines keep C-only constructs
		bool bVar3;
		int iVar4;
		object pIVar6;
		AottgDialog __this;
		GisketchOverlayDefinition pGVar7;
		List<AottgDialogEntry> pSVar9;
		int iVar11;

		if ((catalog == null) ||(bVar3 = String.IsNullOrEmpty(id))) {
			return null;
		}
		pSVar9 = catalog._dialogs;
		if (pSVar9 != null) {
			iVar11 = 0;
			do {
				iVar4 = pSVar9.get_Item();
				if (iVar4 <= iVar11) {
					return null;
				}
				pSVar9 = catalog._dialogs;
				if (pSVar9 == null) break;
				pIVar6 = pSVar9.get_Item(iVar11);
				if (pIVar6 == null) break;
				bVar3 = String.Equals((String)pIVar6[1].klass, id, 5);
				if (bVar3) {
					if (actions != null) {
						actions.ClearOwner(id);
					}
					__this = AottgCodeManifestBuilder.Instance<AottgDialog>(pIVar6[1].monitor);
					if (__this != null) {
						pGVar7 = __this.BuildDefinition((String)pIVar6[1].klass, (AottgDialogAttribute)pIVar6[2].klass, actions);
						return pGVar7;
					}
					break;
				}
				iVar11 = iVar11 + 1;
				pSVar9 = catalog._dialogs;
			} while (pSVar9 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x5263EE0", Offset = "0x5262EE0", VA = "0x5263EE0")]
	private static GisketchOverlayDefinition[] BuildPopovers(AottgCodeCatalog catalog, AottgActionRegistry actions)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgCodeManifestBuilder.c (Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$BuildPopovers): 9 lines keep C-only constructs
		List<AottgPopoverEntry> pSVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		uint length;
		VirtualInvokeData pVVar4;
		GisketchOverlayDefinition[] pGVar5;
		object pIVar6;
		AottgPopover __this;
		GisketchOverlayDefinition pGVar7;
		ulong uVar8;
		long lVar9;
		ulong uVar10;

		if ((catalog != null) &&(pSVar1 = catalog._popovers, pSVar1 != null)) {
			pIVar2 = (Il2CppClass)pSVar1.klass;
			uVar10 = (ulong)(pIVar2._2).interface_offsets_count;
			if (uVar10 != 0) {
				pIVar3 = (pIVar2._1).interfaceOffsets;
				lVar9 = 0;
				do {
					if (*(IReadOnlyCollection<AottgPopoverEntry>*)((long)&pIVar3.interfaceType + lVar9) == typeof(IReadOnlyCollection<AottgPopoverEntry>)) {
						pVVar4 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar9);
						goto label_05363fa1;
					}
					lVar9 = lVar9 + 0x10;
				} while (uVar10 * 0x10 != lVar9);
			}
			pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath((object)pSVar1, (Il2CppClass)typeof(IReadOnlyCollection<AottgPopoverEntry>), 0);
	label_05363fa1: ;
			length = (*pVVar4.methodPtr)((object)pSVar1,pVVar4.method);
			pGVar5 = (GisketchOverlayDefinition[])new GisketchOverlayDefinition[length];
			if (pGVar5 != null) {
				if (0 < (int)pGVar5.Length) {
					uVar10 = 0;
					do {
						pSVar1 = catalog._popovers;
						if (pSVar1 == null) goto label_053640da;
						pIVar2 = (Il2CppClass)pSVar1.klass;
						uVar8 = (ulong)(pIVar2._2).interface_offsets_count;
						if (uVar8 != 0) {
							pIVar3 = (pIVar2._1).interfaceOffsets;
							lVar9 = 0;
							do {
								if (*(IReadOnlyList<AottgPopoverEntry>*)((long)&pIVar3.interfaceType + lVar9) == typeof(IReadOnlyList<AottgPopoverEntry>)) {
									pVVar4 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar9);
									goto label_05364053;
								}
								lVar9 = lVar9 + 0x10;
							} while (uVar8 * 0x10 != lVar9);
						}
						pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath((object)pSVar1, (Il2CppClass)typeof(IReadOnlyList<AottgPopoverEntry>), 0);
	label_05364053: ;
						pIVar6 = (*pVVar4.methodPtr)((object)pSVar1,(int32_t)uVar10,pVVar4.method);
						if (pIVar6 == null) goto label_053640da;
						__this = AottgCodeManifestBuilder.Instance<AottgPopover>(pIVar6[1].monitor);
						if (__this == null) goto label_053640da;
						pGVar7 = __this.BuildDefinition((String)pIVar6[1].klass, (AottgPopoverAttribute)pIVar6[2].klass, actions);
						if ((uint)pGVar5.Length <= uVar10) {
							throw new IndexOutOfRangeException();
						}
						pGVar5[uVar10] = pGVar7;
						uVar10 = uVar10 + 1;
					} while ((long)uVar10 < (long)(int)pGVar5.Length);
				}
				return pGVar5;
			}
		}
	label_053640da: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60003CF")]
	private static T Instance<T>(Type type)
	{
		return (T)null;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgCodeManifestBuilder.c.

	// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$Instance<object>: 6 lines keep C-only constructs
	private static object Instance_object(Type type)
	{
		object obj;
		Il2CppClass klass;
		object pIVar1;

		if (method.rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
		}
		obj = Activator.CreateInstance(type);
		klass = method.rgctx_data._0_T;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		if (obj == null) {
			pIVar1 = null;
		}
		else {
			pIVar1 = il2cpp_vm_Object_IsInst(obj, klass);
			if (pIVar1 == null) {
				throw new InvalidCastException();
			}
		}
		return pIVar1;
	}

	// Gisketch.Aottg2UI.Code.AottgCodeManifestBuilder$$Instance<__Il2CppFullySharedGenericType>: 18 lines keep C-only constructs
	private static __Il2CppFullySharedGenericType Instance___Il2CppFullySharedGenericType(Type type)
	{
		long lVar1;
		Il2CppRGCTXData pIVar2;
		object pIVar3;
		Il2CppClass klass;
		IntPtr __src;
		MethodInfo in_RDX;
		IntPtr extraout_RDX;
		IntPtr __dest;
		byte puVar4;
		ulong __n;
		__Il2CppFullySharedGenericType UVar5;
		ulong uStack_40;
		Type local_38;

		pIVar2 = (in_RDX.field7_0x38).rgctx_data;
		if (pIVar2 == null) {
			uStack_40 = 0x35883e8;
			il2cpp_codegen_rgctx_method_init(in_RDX);
			pIVar2 = (in_RDX.field7_0x38).rgctx_data;
		}
		__n = (ulong)(pIVar2.klass._2).stack_slot_size;
		lVar1 = -(__n + 0xf & 0xfffffffffffffff0);
		__dest = (IntPtr)((long)&local_38 + lVar1);
		local_38 = type;
		*(ulong)((long)&uStack_40 + lVar1) = 0x3588415;
		pIVar3 = Activator.CreateInstance(type);
		puVar4 = (byte)((long)&local_38 + lVar1);
		klass = ((in_RDX.field7_0x38).rgctx_data).klass;
		if (((klass._2).bitflags1 & 1) == 0) {
			*(ulong)((long)&uStack_40 + lVar1) = 0x3588430;
			klass = il2cpp_codegen_class_init_checked(klass);
			puVar4 = (byte)((long)&local_38 + lVar1);
		}
		*(ulong)(puVar4 + -8) = 0x358843e;
		__src = (IntPtr)il2cpp_runtime_helper_030d6290(pIVar3, klass, __dest);
		*(ulong)(puVar4 + -8) = 0x358844c;
		memmove(__dest, __src, __n);
		*(ulong)(puVar4 + -8) = 0x358845a;
		UVar5.klass = memcpy(method, __dest, __n);
		UVar5.monitor = extraout_RDX;
		return UVar5;
	}
}
