// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorSettingsKeybindsPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorSettingsKeybindsPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorSettingsKeybindsPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x20008CC")]
internal class MapEditorSettingsKeybindsPanel : CategoryPanel
{
	[Token(Token = "0x17000EAD")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x60053E4")]
		[Address(RVA = "0x5C9ADF0", Offset = "0x5C99DF0", VA = "0x5C9ADF0", Slot = "13")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorSettingsKeybindsPanel.c (UI.MapEditorSettingsKeybindsPanel$$get_DoublePanel): clean
			return true;
		}
	}

	[Token(Token = "0x17000EAE")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60053E5")]
		[Address(RVA = "0x5C9AE00", Offset = "0x5C99E00", VA = "0x5C9AE00", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorSettingsKeybindsPanel.c (UI.MapEditorSettingsKeybindsPanel$$get_ScrollBar): clean
			return true;
		}
	}

	[Token(Token = "0x60053E6")]
	[Address(RVA = "0x5C9AE10", Offset = "0x5C99E10", VA = "0x5C9AE10", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/MapEditorSettingsKeybindsPanel.c (UI.MapEditorSettingsKeybindsPanel$$Setup): 1 lines keep C-only constructs
		byte bVar1;
		BasePanel pUVar2;
		String cat;
		InputSettings pSVar3;
		MapEditorInputSettings container;
		BaseMenu pUVar4;
		String pSVar5;
		ElementStyle __this_00;

		this.Setup(parent);
		pUVar2 = this.Parent;
		if (pUVar2 != null) {
			bVar1 = (typeof(MapEditorSettingsPopup)._2).typeHierarchyDepth;
			if (((pUVar2.klass._2).typeHierarchyDepth < bVar1) ||((pUVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapEditorSettingsPopup))) {
				throw new InvalidCastException();
			}
			cat = (String)(*(ulong)((sbyte)pUVar2 + 0xa8));
			pSVar5 = this.get_ThemePanel();
			__this_00 = new ElementStyle(0x18, 140.0, 20.0, pSVar5);
			pSVar5 = "Keybinds";
			pSVar3 = SettingsManager.InputSettings;
			if (pSVar3 != null) {
				container = pSVar3.MapEditor;
				pUVar4 = UIManager.CurrentMenu;
				if (pUVar4 != null) {
					this.CreateKeybindSettings((BaseSettingsContainer)container, pUVar4.KeybindPopup, cat, pSVar5, __this_00);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053E7")]
	[Address(RVA = "0x5C9AFA0", Offset = "0x5C99FA0", VA = "0x5C9AFA0")]
	private void CreateKeybindSettings(BaseSettingsContainer container, KeybindPopup popup, string cat, string sub, ElementStyle style)
	{
		// Lifted from source/cpp/UI/MapEditorSettingsKeybindsPanel.c (UI.MapEditorSettingsKeybindsPanel$$CreateKeybindSettings): 15 lines keep C-only constructs
		byte bVar1;
		OrderedDictionary pSVar2;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		BaseSetting setting;
		Transform parent;
		Il2CppType handle;
		bool bVar5;
		int iVar6;
		VirtualInvokeData pVVar7;
		object pIVar8;
		ulong puVar9;
		Type left;
		Type right;
		String pSVar10;
		ulong uVar11;
		long lVar12;
		object local_90;
		int local_84;
		object local_80;
		KeybindPopup local_78;
		ElementStyle local_70;
		String local_68;
		String local_60;
		MapEditorSettingsKeybindsPanel local_58;
		BaseSettingsContainer local_50;
		object* local_40;
		object* local_38;

		local_78 = popup;
		local_70 = style;
		local_68 = cat;
		local_60 = sub;
		local_58 = this;
		local_90 = null;
		local_80 = null;
		if (container == null) {
			throw new NullReferenceException();
		}
		pSVar2 = container.Settings;
		local_50 = container;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		local_90 = (object)pSVar2.GetEnumerator();
		local_40 = &local_90;
		local_38 = &local_80;
		local_84 = 0;
		do {
			pIVar8 = local_90;
			if (local_90 == null) {
				throw new NullReferenceException();
			}
			pIVar3 = local_90.klass;
			uVar11 = (ulong)(pIVar3._2).interface_offsets_count;
			bVar5 = pIVar8.Dispose();
			pIVar8 = local_90;
			if (!bVar5) {
				pIVar8 = (local_90 as IDisposable);
				if (pIVar8 == null) {
					return;
				}
				pIVar3 = pIVar8.klass;
				uVar11 = (ulong)(pIVar3._2).interface_offsets_count;
				local_80 = pIVar8;
				if (uVar11 == 0) goto label_05d9b38f;
				pIVar4 = (pIVar3._1).interfaceOffsets;
				lVar12 = 0;
				break;
			}
			if (local_90 == null) {
				throw new NullReferenceException();
			}
			pIVar3 = local_90.klass;
			uVar11 = (ulong)(pIVar3._2).interface_offsets_count;
			pIVar8 = pIVar8.Dispose();
			if (pIVar8 == null) {
				throw new NullReferenceException();
			}
			if ((pIVar8.klass._1).element_class != (typeof(DictionaryEntry)._1).element_class) {
				throw new InvalidCastException();
			}
			puVar9 = il2cpp_vm_Object_Unbox(pIVar8);
			pSVar10 = (String)*puVar9;
			setting = (BaseSetting)puVar9[1];
			if (setting != null) {
				bVar1 = (typeof(BaseSetting)._2).typeHierarchyDepth;
				if (((setting.klass._2).typeHierarchyDepth < bVar1) ||((setting.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(BaseSetting) )) {
					throw new InvalidCastException();
				}
			}
			if ((pSVar10 != null) && (pSVar10.klass != g_data_07556758)) {
				throw new InvalidCastException();
			}
			if (setting == null) {
				throw new NullReferenceException();
			}
			left = setting.GetType();
			handle = TypeRef_Settings_KeybindSetting;
			right = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			bVar5 = (left == right);
			if (bVar5) {
				pSVar2 = local_50.Settings;
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				iVar6 = pSVar2.Count;
				parent = (&local_58.DoublePanelLeft)[iVar6 / 2 <= local_84];
				pSVar10 = UIManager.GetLocale(local_68, local_60, pSVar10, "", "");
				style = (UI_ElementStyle_o *)"";
				ElementFactory.CreateKeybindSetting(parent, local_70, setting, pSVar10, local_78, "", 120.0, 35.0, 2);
				local_84 = local_84 + 1;
			}
		} while(true);
		while (true) {
			lVar12 = lVar12 + 0x10;
			if (!(uVar11 * 0x10 != lVar12)) break;
			if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar12) == typeof(IDisposable)) {
				pVVar7 = pIVar3.vtable + *(int)((long)&pIVar4.offset + lVar12);
				goto label_05d9b3ad;
			}
		}
	label_05d9b38f: ;
	label_05d9b3ad: ;
		pIVar8.Dispose();
		return;
	}

	[Token(Token = "0x60053E8")]
	[Address(RVA = "0x5C9B470", Offset = "0x5C9A470", VA = "0x5C9B470")]
	public MapEditorSettingsKeybindsPanel()
	{
		// Lifted from source/cpp/UI/MapEditorSettingsKeybindsPanel.c (UI.MapEditorSettingsKeybindsPanel$$.ctor): clean
		base();
		return;
	}
}
