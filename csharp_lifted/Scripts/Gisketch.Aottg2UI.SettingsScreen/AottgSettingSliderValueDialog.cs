// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingSliderValueDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200017D")]
[AottgDialog("setting-slider-value")]
public sealed class AottgSettingSliderValueDialog : AottgDialog
{
	[Token(Token = "0x40008A0")]
	public const string Id = "setting-slider-value";

	[Token(Token = "0x40008A1")]
	private const string InputId = "setting-slider-value-input";

	[Token(Token = "0x40008A2")]
	[FieldOffset(Offset = "0x0")]
	private static AottgSettingDescriptor _descriptor;

	[Token(Token = "0x17000108")]
	protected override string Title
	{
		[Token(Token = "0x6000843")]
		[Address(RVA = "0x5D38C60", Offset = "0x5D37C60", VA = "0x5D38C60", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingSliderValueDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$get_Title): clean
			AottgSettingDescriptor pGVar1;
			String pSVar2;

			pGVar1 = AottgSettingSliderValueDialog._descriptor ;
			if (pGVar1 != null) {
				return pGVar1.Label;
			}
			pSVar2 = Aottg2GisketchLocale.Text("SettingsPopup.EditSetting");
			return pSVar2;
		}
	}

	[Token(Token = "0x17000109")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000844")]
		[Address(RVA = "0x5D38CE0", Offset = "0x5D37CE0", VA = "0x5D38CE0", Slot = "13")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingSliderValueDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$get_BodyScrollable): clean
			return false;
		}
	}

	[Token(Token = "0x1700010A")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000845")]
		[Address(RVA = "0x5D38CF0", Offset = "0x5D37CF0", VA = "0x5D38CF0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingSliderValueDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Points(420.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x1700010B")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x6000846")]
		[Address(RVA = "0x5D38DB0", Offset = "0x5D37DB0", VA = "0x5D38DB0", Slot = "17")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingSliderValueDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$get_BodyLayout): clean
			GisketchLayoutDefinition pGVar1;

			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 10.0, null, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6000847")]
	[Address(RVA = "0x5D38E60", Offset = "0x5D37E60", VA = "0x5D38E60")]
	internal static void Open(GisketchActionContext context, AottgSettingDescriptor descriptor)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingSliderValueDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$Open): clean
		GisketchOverlayManager __this;
		GisketchUIRoot pGVar1;

		if (((descriptor != null) &&(descriptor.Adapter != null)) &&(descriptor.Disabled == false)) {
			AottgSettingSliderValueDialog._descriptor = descriptor;
			if (context.GameObject != null) {
				pGVar1 = context.GameObject.GetComponentInParent<GisketchUIRoot>();
				if ((pGVar1 != null) &&(__this = pGVar1._Overlays_k__BackingField, __this != null)) {
					__this.ShowDialog("setting-slider-value", true);
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6000848")]
	[Address(RVA = "0x5D38F30", Offset = "0x5D37F30", VA = "0x5D38F30", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingSliderValueDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$BuildBody): 1 lines keep C-only constructs
		AottgSettingDescriptor pGVar1;
		bool bVar4;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar5;
		MethodInfo method_00;
		String pSVar7;
		int type;
		object obj;

		pGVar1 = AottgSettingSliderValueDialog._descriptor ;
		if (pGVar1 == null) {
			obj = null;
		}
		else {
			obj = (object)pGVar1.Adapter;
		}
		pSVar7 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		if (obj == null) {
			type = 2;
		}
		else {
			type = 2 - (uint)(obj.klass ==typeof(AottgIntSettingAdapter));
		}
		width = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (body != null) {
			pGVar5 = body.InputField("setting-slider-value-input", pSVar7, type, "inputField", layout, null, null, 0.2, 0x20, null);
			if (obj == null) {
				method_00 = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				method_00 = (MethodInfo)obj.get_TextValue();
			}
			if (pGVar5 != null) {
				pGVar5.value = (String)method_00;
				pSVar7 = AottgSettingSliderValueDialog.RangeCallout((IAottgSettingAdapter)obj);
				bVar4 = String.IsNullOrEmpty(pSVar7);
				if (bVar4) {
					return;
				}
				body.Callout(0, pSVar7, "setting-slider-value-range");
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000849")]
	[Address(RVA = "0x5D39840", Offset = "0x5D38840", VA = "0x5D39840", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingSliderValueDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$BuildFooter): 1 lines keep C-only constructs
		Action<GisketchActionContext> __this_00;

		if (footer == null) {
			throw new NullReferenceException();
		}
		footer.QuietKey("Common.Cancel", "overlay.close");
		__this_00 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingSliderValueDialog_Save);
		footer.PrimaryKey("Common.Save", __this_00);
		return;
	}

	[Token(Token = "0x600084A")]
	[Address(RVA = "0x5D39910", Offset = "0x5D38910", VA = "0x5D39910")]
	private static void Save(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingSliderValueDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$Save): 10 lines keep C-only constructs
		AottgSettingDescriptor pGVar1;
		object pIVar2;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		String elementId;
		GisketchOverlayManager __this;
		GisketchActionContext context_00;
		bool bVar5;
		String value;
		VirtualInvokeData pVVar6;
		GisketchNodeDefinition __this_00;
		GisketchUIRoot root;
		ulong uVar7;
		long lVar8;
		GisketchActionContext GStack_58;

		pGVar1 = AottgSettingSliderValueDialog._descriptor ;
		if ((pGVar1 == null) ||(pGVar1.Adapter == null)) {
			return;
		}
		value = AottgSettingSliderValueDialog.InputText(context.GameObject);
		if (value == null) {
			pGVar1 = AottgSettingSliderValueDialog. _descriptor;
			if ((pGVar1 == null) ||(pIVar2 = (object)pGVar1.Adapter, pIVar2 == null)) goto label_05e39c17;
			pIVar3 = pIVar2.klass;
			uVar7 = (ulong)(pIVar3._2).interface_offsets_count;
			if (uVar7 != 0) {
				pIVar4 = (pIVar3._1).interfaceOffsets;
				lVar8 = 0;
				do {
					if (*(IAottgSettingAdapter*)((long)&pIVar4.interfaceType + lVar8) == typeof(IAottgSettingAdapter)) {
						pVVar6 = pIVar3.vtable + *(int)((long)&pIVar4.offset + lVar8);
						goto label_05e39a41;
					}
					lVar8 = lVar8 + 0x10;
				} while (uVar7 * 0x10 != lVar8);
			}
			pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar2, typeof(IAottgSettingAdapter), 0);
	label_05e39a41: ;
			value = (*pVVar6.methodPtr)(pIVar2,pVVar6.method);
		}
		pGVar1 = AottgSettingSliderValueDialog._descriptor ;
		if ((pGVar1 != null) &&(pIVar2 = (object)pGVar1.Adapter, pIVar2 != null)) {
			pIVar3 = pIVar2.klass;
			uVar7 = (ulong)(pIVar3._2).interface_offsets_count;
			if (uVar7 != 0) {
				pIVar4 = (pIVar3._1).interfaceOffsets;
				lVar8 = 0;
				do {
					if (*(IAottgSettingAdapter*)((long)&pIVar4.interfaceType + lVar8) == typeof(IAottgSettingAdapter)) {
						pVVar6 = pIVar3.vtable + (*(int)((long)&pIVar4.offset + lVar8) + 10);
						goto label_05e39ad5;
					}
					lVar8 = lVar8 + 0x10;
				} while (uVar7 * 0x10 != lVar8);
			}
			pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar2, typeof(IAottgSettingAdapter), 10);
	label_05e39ad5: ;
			(*pVVar6.methodPtr)(pIVar2,value,pVVar6.method);
			pGVar1 = AottgSettingSliderValueDialog. _descriptor;
			if (pGVar1 != null) {
				elementId = pGVar1.Id;
				__this_00 = new GisketchNodeDefinition();
				if (__this_00 != null) {
					__this_00.id = "setting-slider-value-input";
					__this_00.value = value;
					GStack_58.Node = null;
					GStack_58.InputSource = 0;
					GStack_58._28_4_ = 0;
					GStack_58.ElementId = null;
					GStack_58.GameObject = null;
					GStack_58 = new GisketchActionContext(elementId, context.GameObject, __this_00);
					context_00.GameObject = GStack_58.GameObject;
					context_00.ElementId = GStack_58.ElementId;
					context_00.Node = GStack_58.Node;
					context_00.InputSource = GStack_58.InputSource;
					context_00._28_4_ = GStack_58._28_4_;
					pGVar1.Changed(context_00);
					root = null;
					bVar5 = ((Object)context.GameObject != null);
					if (bVar5) {
						if (context.GameObject == null) goto label_05e39c17;
						root = context.GameObject.GetComponentInParent<GisketchUIRoot>();
						if (root == null) {
							root = null;
						}
						else {
							__this = root._Overlays_k__BackingField;
							if (__this != null) {
								__this.CloseTop(true);
							}
						}
					}
					AottgSettingRow.SyncSliderValue(root, typeof(AottgSettingSliderValueDialog).static_fields ._descriptor);
					return;
				}
			}
		}
	label_05e39c17: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600084B")]
	[Address(RVA = "0x5D39C20", Offset = "0x5D38C20", VA = "0x5D39C20")]
	private static string InputText(GameObject source)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingSliderValueDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$InputText): 1 lines keep C-only constructs
		uint uVar1;
		Object x;
		bool bVar2;
		Transform pUVar3;
		Object[] pSVar4;
		ulong uVar5;
		Object __this;
		String a;
		ulong uVar6;

		pUVar3 = null;
		bVar2 = ((Object)source != null);
		if (bVar2) {
			if ((source == null) ||(pUVar3 = source.transform, pUVar3 == null)) goto label_05e39dbb;
			pUVar3 = pUVar3.root;
		}
		bVar2 = ((Object)pUVar3 == null);
		if (bVar2) {
			return null;
		}
		if ((pUVar3 != null) &&(pSVar4 = pUVar3.GetComponentsInChildren<TMP_InputField>(true), pSVar4 != null)) {
			if ((int)pSVar4.Length < 1) {
				return null;
			}
			uVar5 = pSVar4.Length & 0xffffffff;
			uVar6 = 0;
			do {
				if (uVar5 <= uVar6) {
					throw new IndexOutOfRangeException();
				}
				x = (Object)pSVar4[uVar6];
				bVar2 = (x != null);
				if (bVar2) {
					if ((x == null) ||(__this = (Object)x.gameObject, __this == null)) break;
					a = __this.name;
					bVar2 = (a == "setting-slider-value-input");
					if (bVar2) {
						return (String)x[0x16].klass;
					}
				}
				uVar6 = uVar6 + 1;
				uVar1 = (uint)pSVar4.Length;
				uVar5 = (ulong)uVar1;
				if ((long)(int)uVar1 <= (long)uVar6) {
					return null;
				}
			} while(true);
		}
	label_05e39dbb: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600084C")]
	[Address(RVA = "0x5D391E0", Offset = "0x5D381E0", VA = "0x5D391E0")]
	private static AottgInputType InputType(IAottgSettingAdapter adapter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingSliderValueDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$InputType): 1 lines keep C-only constructs
		if (adapter == null) {
			return 2;
		}
		return 2 - (uint)(adapter.klass ==(IAottgSettingAdapter)typeof(AottgIntSettingAdapter));
	}

	[Token(Token = "0x600084D")]
	[Address(RVA = "0x5D39230", Offset = "0x5D38230", VA = "0x5D39230")]
	private static string RangeCallout(IAottgSettingAdapter adapter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingSliderValueDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$RangeCallout): 14 lines keep C-only constructs
		uint uVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		bool bVar3;
		VirtualInvokeData pVVar4;
		String pSVar5;
		IAottgSettingAdapter pGVar6;
		CultureInfo pSVar7;
		String pSVar8;
		String arg1;
		int iVar9;
		ulong uVar10;
		long lVar11;
		float local_34;

		if (adapter == null) {
	label_05e393c1: ;
			pSVar5 = null;
		}
		else {
			pGVar6 = adapter.klass;
			uVar10 = (ulong)(pGVar6._2).interface_offsets_count;
			bVar3 = adapter.get_HasMinValue();
			if (!bVar3) {
				pGVar6 = adapter.klass;
				uVar10 = (ulong)(pGVar6._2).interface_offsets_count;
				bVar3 = adapter.get_HasMinValue();
				if (!bVar3) goto label_05e393c1;
			}
			pGVar6 = adapter.klass;
			uVar10 = (ulong)(pGVar6._2).interface_offsets_count;
			bVar3 = adapter.get_HasMinValue();
			if (bVar3) {
				pGVar6 = adapter.klass;
				uVar10 = (ulong)(pGVar6._2).interface_offsets_count;
				bVar3 = adapter.get_HasMinValue();
				if (bVar3) {
					if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0 ) {
					}
					pSVar5 = Aottg2GisketchLocale.Text("SettingsPopup.Range.MinMax");
					pGVar6 = adapter.klass;
					uVar10 = (ulong)(pGVar6._2).interface_offsets_count;
					adapter.get_HasMinValue();
					pSVar7 = CultureInfo.InvariantCulture;
					pSVar8 = local_34.ToString("0.##################", (IFormatProvider)pSVar7);
					pGVar6 = adapter.klass;
					uVar10 = (ulong)(pGVar6._2).interface_offsets_count;
					adapter.get_HasMinValue();
					pSVar7 = CultureInfo.InvariantCulture;
					arg1 = local_34.ToString("0.##################", (IFormatProvider)pSVar7);
					pSVar5 = String.Format(pSVar5, (object)pSVar8, (object)arg1);
					return pSVar5;
				}
			}
			pGVar6 = adapter.klass;
			uVar10 = (ulong)(pGVar6._2).interface_offsets_count;
			bVar3 = adapter.get_HasMinValue();
			uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
			if (bVar3) {
				if (uVar1 == 0) {
				}
				pSVar5 = Aottg2GisketchLocale.Text("SettingsPopup.Range.Min");
				pGVar6 = adapter.klass;
				uVar10 = (ulong)(pGVar6._2).interface_offsets_count;
				if (uVar10 != 0) {
					pIVar2 = (pGVar6._1).interfaceOffsets;
					lVar11 = 0;
	label_05e395b0: ;
					if (*(IAottgSettingAdapter*)((long)&pIVar2.interfaceType + lVar11) != typeof(IAottgSettingAdapter)) goto code_r0x05e395b6;
					iVar9 = *(int)((long)&pIVar2.offset + lVar11) + 3;
	label_05e3963e: ;
					pVVar4 = pGVar6.vtable + iVar9;
					goto label_05e3964e;
				}
	label_05e395bf: ;
			}
			else {
				if (uVar1 == 0) {
				}
				pSVar5 = Aottg2GisketchLocale.Text("SettingsPopup.Range.Max");
				pGVar6 = adapter.klass;
				uVar10 = (ulong)(pGVar6._2).interface_offsets_count;
				if (uVar10 != 0) {
					pIVar2 = (pGVar6._1).interfaceOffsets;
					lVar11 = 0;
					do {
						if (*(IAottgSettingAdapter*)((long)&pIVar2.interfaceType + lVar11) == typeof(IAottgSettingAdapter)) {
							iVar9 = *(int)((long)&pIVar2.offset + lVar11) + 4;
							goto label_05e3963e;
						}
						lVar11 = lVar11 + 0x10;
					} while (uVar10 * 0x10 != lVar11);
				}
			}
	label_05e3964e: ;
			adapter.get_HasMinValue();
			pSVar7 = CultureInfo.InvariantCulture;
			pSVar8 = local_34.ToString("0.##################", (IFormatProvider)pSVar7);
			pSVar5 = String.Format(pSVar5, (object)pSVar8);
		}
		return pSVar5;
	code_r0x05e395b6: ;
		lVar11 = lVar11 + 0x10;
		if (uVar10 * 0x10 == lVar11) goto label_05e395bf;
		goto label_05e395b0;
	}

	[Token(Token = "0x600084E")]
	[Address(RVA = "0x5D39DD0", Offset = "0x5D38DD0", VA = "0x5D39DD0")]
	private static string Format(float value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingSliderValueDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$Format): clean
		CultureInfo provider;
		String pSVar1;
		float fStack_4;

		provider = CultureInfo.InvariantCulture;
		pSVar1 = fStack_4.ToString("0.##################", (IFormatProvider)provider);
		return pSVar1;
	}

	[Token(Token = "0x600084F")]
	[Address(RVA = "0x5D39E40", Offset = "0x5D38E40", VA = "0x5D39E40")]
	public AottgSettingSliderValueDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingSliderValueDialog.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingSliderValueDialog$$.ctor): clean
		base();
		return;
	}
}
