// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorSettingsGeneralPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorSettingsGeneralPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorSettingsGeneralPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20008CB")]
internal class MapEditorSettingsGeneralPanel : CategoryPanel
{
	[Token(Token = "0x17000EAC")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x60053E1")]
		[Address(RVA = "0x5C9A6D0", Offset = "0x5C996D0", VA = "0x5C9A6D0", Slot = "13")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorSettingsGeneralPanel.c (UI.MapEditorSettingsGeneralPanel$$get_DoublePanel): clean
			return true;
		}
	}

	[Token(Token = "0x60053E2")]
	[Address(RVA = "0x5C9A6E0", Offset = "0x5C996E0", VA = "0x5C9A6E0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/MapEditorSettingsGeneralPanel.c (UI.MapEditorSettingsGeneralPanel$$Setup): 1 lines keep C-only constructs
		byte bVar1;
		String category;
		MapEditorSettings pSVar2;
		Transform pUVar3;
		FloatSetting pSVar4;
		IntSetting setting;
		BoolSetting setting_00;
		String pSVar5;
		ElementStyle __this_00;
		String pSVar6;

		this.Setup(parent);
		pSVar6 = "General";
		if (parent != null) {
			bVar1 = (typeof(MapEditorSettingsPopup)._2).typeHierarchyDepth;
			if (((parent.klass._2).typeHierarchyDepth < bVar1) ||((parent.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapEditorSettingsPopup))) {
				throw new InvalidCastException();
			}
			category = (String)(*(ulong)((sbyte)parent + 0xa8));
			pSVar2 = SettingsManager.MapEditorSettings;
			pSVar5 = this.get_ThemePanel();
			__this_00 = new ElementStyle(0x18, 250.0, 20.0, pSVar5);
			if (pSVar2 != null) {
				pUVar3 = this.DoublePanelLeft;
				pSVar4 = pSVar2.CameraMoveSpeed;
				pSVar5 = UIManager.GetLocale(category, pSVar6, "CameraMoveSpeed", "", "");
				ElementFactory.CreateInputSetting(pUVar3, __this_00, (BaseSetting)pSVar4, pSVar5, "", 120.0, 40.0, false, null, null, null, null);
				pUVar3 = this.DoublePanelLeft;
				pSVar4 = pSVar2.CameraSlowMoveSpeed;
				pSVar5 = UIManager.GetLocale(category, pSVar6, "CameraSlowMoveSpeed", "", "");
				ElementFactory.CreateInputSetting(pUVar3, __this_00, (BaseSetting)pSVar4, pSVar5, "", 120.0, 40.0, false, null, null, null, null);
				pUVar3 = this.DoublePanelLeft;
				pSVar4 = pSVar2.CameraFastMoveSpeed;
				pSVar5 = UIManager.GetLocale(category, pSVar6, "CameraFastMoveSpeed", "", "");
				ElementFactory.CreateInputSetting(pUVar3, __this_00, (BaseSetting)pSVar4, pSVar5, "", 120.0, 40.0, false, null, null, null, null);
				pUVar3 = this.DoublePanelLeft;
				pSVar4 = pSVar2.CameraRotateSpeed;
				pSVar5 = UIManager.GetLocale(category, pSVar6, "CameraRotateSpeed", "", "");
				ElementFactory.CreateInputSetting(pUVar3, __this_00, (BaseSetting)pSVar4, pSVar5, "", 120.0, 40.0, false, null, null, null, null);
				pUVar3 = this.DoublePanelLeft;
				setting = pSVar2.RenderDistance;
				pSVar5 = UIManager.GetLocale(category, pSVar6, "RenderDistance", "", "");
				ElementFactory.CreateInputSetting(pUVar3, __this_00, (BaseSetting)setting, pSVar5, "", 120.0, 40.0, false, null, null, null, null);
				pUVar3 = this.DoublePanelRight;
				pSVar4 = pSVar2.SnapMove;
				pSVar5 = UIManager.GetLocale(category, pSVar6, "SnapMove", "", "");
				ElementFactory.CreateInputSetting(pUVar3, __this_00, (BaseSetting)pSVar4, pSVar5, "", 120.0, 40.0, false, null, null, null, null);
				pUVar3 = this.DoublePanelRight;
				pSVar4 = pSVar2.SnapRotate;
				pSVar5 = UIManager.GetLocale(category, pSVar6, "SnapRotate", "", "");
				ElementFactory.CreateInputSetting(pUVar3, __this_00, (BaseSetting)pSVar4, pSVar5, "", 120.0, 40.0, false, null, null, null, null);
				pUVar3 = this.DoublePanelRight;
				pSVar4 = pSVar2.SnapScale;
				pSVar5 = UIManager.GetLocale(category, pSVar6, "SnapScale", "", "");
				ElementFactory.CreateInputSetting(pUVar3, __this_00, (BaseSetting)pSVar4, pSVar5, "", 120.0, 40.0, false, null, null, null, null);
				pUVar3 = this.DoublePanelRight;
				pSVar4 = pSVar2.PlacementDistance;
				pSVar5 = UIManager.GetLocale(category, pSVar6, "PlacementDistance", "", "");
				ElementFactory.CreateInputSetting(pUVar3, __this_00, (BaseSetting)pSVar4, pSVar5, "", 120.0, 40.0, false, null, null, null, null);
				pUVar3 = this.DoublePanelRight;
				setting_00 = pSVar2.PlaceOnFirstSurface;
				pSVar5 = UIManager.GetLocale(category, pSVar6, "PlaceOnFirstSurface", "", "");
				ElementFactory.CreateToggleSetting(pUVar3, __this_00, (BaseSetting)setting_00, pSVar5, "", 30.0, 30.0, null);
				pUVar3 = this.DoublePanelRight;
				pSVar4 = pSVar2.HUDScale;
				pSVar6 = UIManager.GetLocale(category, pSVar6, "HUDScale", "", "");
				ElementFactory.CreateInputSetting(pUVar3, __this_00, (BaseSetting)pSVar4, pSVar6, "", 120.0, 40.0, false, null, null, null, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053E3")]
	[Address(RVA = "0x5C9ADE0", Offset = "0x5C99DE0", VA = "0x5C9ADE0")]
	public MapEditorSettingsGeneralPanel()
	{
		// Lifted from source/cpp/UI/MapEditorSettingsGeneralPanel.c (UI.MapEditorSettingsGeneralPanel$$.ctor): clean
		base();
		return;
	}
}
