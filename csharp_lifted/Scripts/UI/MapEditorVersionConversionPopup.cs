// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorVersionConversionPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorVersionConversionPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using Map;
using UnityEngine;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x20008DD")]
internal class MapEditorVersionConversionPopup : ConfirmPopup
{
	[Token(Token = "0x17000EC1")]
	protected override float Width
	{
		[Token(Token = "0x6005477")]
		[Address(RVA = "0x5CA7C90", Offset = "0x5CA6C90", VA = "0x5CA7C90", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorVersionConversionPopup.c (UI.MapEditorVersionConversionPopup$$get_Width): clean
			return 560.0;
		}
	}

	[Token(Token = "0x17000EC2")]
	protected override float Height
	{
		[Token(Token = "0x6005478")]
		[Address(RVA = "0x5CA7CA0", Offset = "0x5CA6CA0", VA = "0x5CA7CA0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorVersionConversionPopup.c (UI.MapEditorVersionConversionPopup$$get_Height): clean
			return 520.0;
		}
	}

	[Token(Token = "0x17000EC3")]
	protected override float LabelHeight
	{
		[Token(Token = "0x6005479")]
		[Address(RVA = "0x5CA7CB0", Offset = "0x5CA6CB0", VA = "0x5CA7CB0", Slot = "62")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorVersionConversionPopup.c (UI.MapEditorVersionConversionPopup$$get_LabelHeight): clean
			return 340.0;
		}
	}

	[Token(Token = "0x17000EC4")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600547A")]
		[Address(RVA = "0x5CA7CC0", Offset = "0x5CA6CC0", VA = "0x5CA7CC0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorVersionConversionPopup.c (UI.MapEditorVersionConversionPopup$$get_HorizontalPadding): clean
			return 0x23;
		}
	}

	[Token(Token = "0x17000EC5")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x600547B")]
		[Address(RVA = "0x5CA7CD0", Offset = "0x5CA6CD0", VA = "0x5CA7CD0", Slot = "12")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorVersionConversionPopup.c (UI.MapEditorVersionConversionPopup$$get_PanelAlignment): clean
			return 0;
		}
	}

	[Token(Token = "0x600547C")]
	[Address(RVA = "0x5CA66F0", Offset = "0x5CA56F0", VA = "0x5CA66F0")]
	public void Show(MapVersionConversionResult result, UnityAction onConfirm)
	{
		// Lifted from source/cpp/UI/MapEditorVersionConversionPopup.c (UI.MapEditorVersionConversionPopup$$Show): 19 lines keep C-only constructs
		String pSVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		object __this_00;
		bool bVar4;
		sbyte cVar5;
		StringBuilder __this_01;
		Object[] args;
		object pIVar6;
		String pSVar7;
		String* ppSVar8;
		StringBuilder pSVar9;
		VirtualInvokeData pVVar10;
		String pSVar11;
		ulong uVar12;
		long lVar13;
		object local_60;
		object local_58;
		object* local_48;
		object* local_38;

		local_58 = null;
		local_60 = null;
		__this_01 = new StringBuilder();
		args = (Object[])new object[2];
		if ((result != null) && (args != null)) {
			pSVar7 = result._OriginalVersion_k__BackingField;
			if ((pSVar7 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar7, (((args.obj).klass)._1).element_class), pIVar6 == null)) {
	label_05da7089: ;
				pIVar6 = new ArrayTypeMismatchException();
				throw pIVar6;
			}
			if ((int)args.Length != 0) {
				args[0] = (object)pSVar7;
				pSVar7 = result._FinalVersion_k__BackingField;
				if ((pSVar7 != null) &&(pIVar6 = il2cpp_vm_Object_IsInst((object)pSVar7, (((args.obj).klass)._1).element_class), pIVar6 == null)) goto label_05da7089;
				if ((args.Length & 0xfffffffe) != 0) {
					args[1] = (object)pSVar7;
					pSVar1 = "VersionRange";
					pSVar11 = "VersionConversion";
					pSVar7 = "MapEditor";
					pSVar7 = UIManager.GetLocale(pSVar7, pSVar11, pSVar1, "", "");
					pSVar7 = String.Format(pSVar7, args);
					if (__this_01 != null) {
						__this_01.AppendLine(pSVar7);
						bVar4 = result.IsReversible;
						pSVar11 = "VersionConversion";
						pSVar7 = "MapEditor";
						if (bVar4) {
							ppSVar8 = &"Reversible";
						}
						else {
							ppSVar8 = &"Irreversible";
						}
						pSVar1 = *ppSVar8;
						pSVar7 = UIManager.GetLocale(pSVar7, pSVar11, pSVar1, "", "");
						__this_01.AppendLine(pSVar7);
						pSVar7 = UIManager.GetLocale("MapEditor", "VersionConversion", "Backup", "", "");
						__this_01.AppendLine(pSVar7);
						pSVar9 = __this_01.AppendLine();
						pSVar7 = UIManager.GetLocale("MapEditor", "VersionConversion", "Changelog", "", "");
						if (pSVar9 != null) {
							pSVar9.AppendLine(pSVar7);
							pIVar6 = (object)result._Converters_k__BackingField;
							if (pIVar6 != null) {
								pIVar2 = pIVar6.klass;
								uVar12 = (ulong)(pIVar2._2).interface_offsets_count;
								pIVar6 = pIVar6.Dispose();
								local_38 = &local_58;
	joined_r0x05da6b28: ;
								local_58 = pIVar6;
								if (pIVar6 == null) {
									throw new NullReferenceException();
								}
								pIVar2 = pIVar6.klass;
								uVar12 = (ulong)(pIVar2._2).interface_offsets_count;
								cVar5 = pIVar6.Dispose();
								pIVar6 = local_58;
								if (cVar5 != false) {
									if (local_58 == null) {
										throw new NullReferenceException();
									}
									pIVar2 = local_58.klass;
									uVar12 = (ulong)(pIVar2._2).interface_offsets_count;
									pIVar6 = pIVar6.Dispose();
									if (pIVar6 == null) {
										throw new NullReferenceException();
									}
									pIVar2 = pIVar6.klass;
									uVar12 = (ulong)(pIVar2._2).interface_offsets_count;
									pIVar6 = (object)pIVar6.Dispose();
									if (pIVar6 == null) {
										throw new NullReferenceException();
									}
									pIVar2 = pIVar6.klass;
									uVar12 = (ulong)(pIVar2._2).interface_offsets_count;
									pIVar6 = pIVar6.Dispose();
									local_48 = &local_60;
									do {
										local_60 = pIVar6;
										if (pIVar6 == null) {
											throw new NullReferenceException();
										}
										pIVar2 = pIVar6.klass;
										uVar12 = (ulong)(pIVar2._2).interface_offsets_count;
										cVar5 = pIVar6.Dispose();
										__this_00 = local_60;
										if (cVar5 == false) goto label_05da6e70;
										if (local_60 == null) {
											throw new NullReferenceException();
										}
										pIVar2 = local_60.klass;
										uVar12 = (ulong)(pIVar2._2).interface_offsets_count;
										pSVar7 = __this_00.Dispose();
										pSVar9 = __this_01.Append("- ");
										if (pSVar9 == null) {
											throw new NullReferenceException();
										}
										pSVar9.AppendLine(pSVar7);
										pIVar6 = local_60;
									} while(true);
								}
								if (local_58 == null) goto label_05da6fc6;
								pIVar2 = local_58.klass;
								uVar12 = (ulong)(pIVar2._2).interface_offsets_count;
								if (uVar12 == 0) goto label_05da6f9f;
								pIVar3 = (pIVar2._1).interfaceOffsets;
								lVar13 = 0;
								goto label_05da6f90;
							}
						}
					}
					goto label_05da707f;
				}
			}
			throw new IndexOutOfRangeException();
		}
		goto label_05da707f;
	label_05da6e70: ;
		pIVar6 = local_58;
		if (local_60 != null) {
			pIVar2 = local_60.klass;
			uVar12 = (ulong)(pIVar2._2).interface_offsets_count;
			__this_00.Dispose();
			pIVar6 = local_58;
		}
		goto joined_r0x05da6b28;
		while (true) {
			lVar13 = lVar13 + 0x10;
			if (!(uVar12 * 0x10 != lVar13)) break;
	label_05da6f90: ;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar13) == typeof(IDisposable)) {
				pVVar10 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar13);
				goto label_05da6fbd;
			}
		}
	label_05da6f9f: ;
	label_05da6fbd: ;
		pIVar6.Dispose();
	label_05da6fc6: ;
		pSVar7 = __this_01.ToString();
		if (pSVar7 != null) {
			pSVar7 = pSVar7.TrimEnd();
			pSVar11 = UIManager.GetLocale("MapEditor", "VersionConversion", "Title", "", "");
			this.Show(pSVar7, onConfirm, pSVar11);
			return;
		}
	label_05da707f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600547D")]
	[Address(RVA = "0x5CA7D70", Offset = "0x5CA6D70", VA = "0x5CA7D70")]
	public MapEditorVersionConversionPopup()
	{
		// Lifted from source/cpp/UI/MapEditorVersionConversionPopup.c (UI.MapEditorVersionConversionPopup$$.ctor): clean
		base();
		return;
	}
}
