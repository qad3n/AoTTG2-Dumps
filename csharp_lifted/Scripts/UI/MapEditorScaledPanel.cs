// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorScaledPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorScaledPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x20008CA")]
internal class MapEditorScaledPanel : HeadedPanel
{
	[Token(Token = "0x4002C7C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private RectTransform _scaledContent;

	[Token(Token = "0x4002C7D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private RectTransform _panelContent;

	[Token(Token = "0x17000EAB")]
	protected float HUDScale
	{
		[Token(Token = "0x60053D9")]
		[Address(RVA = "0x5C99DF0", Offset = "0x5C98DF0", VA = "0x5C99DF0")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorScaledPanel.c (UI.MapEditorScaledPanel$$get_HUDScale): clean
			MapEditorSettings pSVar1;
			FloatSetting pSVar2;

			pSVar1 = SettingsManager.MapEditorSettings;
			if ((pSVar1 == null) ||(pSVar2 = pSVar1.HUDScale, pSVar2 == null)) {
				throw new NullReferenceException();
			}
			return pSVar2._value;
		}
	}

	[Token(Token = "0x60053DA")]
	[Address(RVA = "0x5C99E50", Offset = "0x5C98E50", VA = "0x5C99E50", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/MapEditorScaledPanel.c (UI.MapEditorScaledPanel$$Setup): 5 lines keep C-only constructs
		Il2CppType handle;
		RectTransform pUVar1;
		Type[] components;
		Type obj;
		object pIVar2;
		GameObject __this_00;
		RectTransform pUVar3;
		Transform pUVar4;
		RectTransform* targetAddress;

		this.Setup(parent);
		components = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components != null) {
			if ((obj != null) &&(pIVar2 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class), pIVar2 == null)) {
				pIVar2 = new ArrayTypeMismatchException();
				throw pIVar2;
			}
			if ((int)components.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			components[0] = obj;
			__this_00 = new GameObject("ScaledContent", components);
			if (__this_00 != null) {
				pUVar3 = __this_00.GetComponent<RectTransform>();
				this._scaledContent = pUVar3;
				pUVar3 = this._scaledContent;
				pUVar4 = this.transform;
				if (pUVar3 != null) {
					pUVar3.SetParent(pUVar4, false);
					pUVar4 = this.transform;
					if ((pUVar4 != null) &&(pUVar4 = pUVar4.Find("Background"), pUVar4 != null)) {
						pUVar4.SetParent((Transform)this._scaledContent, false);
						pUVar4 = this.SinglePanel;
						if ((pUVar4 != null) &&(pUVar4 = pUVar4.parent, pUVar4 != null)) {
							pUVar3 = (RectTransform)pUVar4.parent;
							pUVar1 = typeof(RectTransform);
							if (pUVar3 == null) {
								this._panelContent = null;
							}
							else if ((pUVar3.klass != typeof(RectTransform)) ||(this._panelContent = pUVar3, pUVar3.klass != pUVar1)) {
								throw new InvalidCastException();
							}
							targetAddress = &this._panelContent;
							pUVar3 = *targetAddress;
							if (pUVar3 != null) {
								pUVar3.SetParent((Transform)this._scaledContent, false);
								pUVar4 = this.transform;
								if ((pUVar4 != null) &&(pUVar4 = pUVar4.Find("Border"), pUVar4 != null)) {
									pUVar4.SetAsLastSibling();
									this.RefreshContentScale();
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

	[Token(Token = "0x60053DB")]
	[Address(RVA = "0x5C9A130", Offset = "0x5C99130", VA = "0x5C9A130", Slot = "30")]
	public override float GetPanelWidth()
	{
		// Lifted from source/cpp/UI/MapEditorScaledPanel.c (UI.MapEditorScaledPanel$$GetPanelWidth): clean
		MapEditorSettings pSVar1;
		FloatSetting pSVar2;
		float fVar3;

		fVar3 = this.GetPanelWidth();
		pSVar1 = SettingsManager.MapEditorSettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.HUDScale, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		return fVar3 / pSVar2._value;
	}

	[Token(Token = "0x60053DC")]
	[Address(RVA = "0x5C9A1A0", Offset = "0x5C991A0", VA = "0x5C9A1A0", Slot = "31")]
	public override float GetPanelHeight()
	{
		// Lifted from source/cpp/UI/MapEditorScaledPanel.c (UI.MapEditorScaledPanel$$GetPanelHeight): clean
		float fVar1;
		MapEditorSettings pSVar2;
		FloatSetting pSVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;

		fVar4 = this.GetHeight();
		pSVar2 = SettingsManager.MapEditorSettings;
		if ((pSVar2 == null) ||(pSVar3 = pSVar2.HUDScale, pSVar3 == null)) {
			throw new NullReferenceException();
		}
		fVar1 = pSVar3._value;
		fVar5 = this.get_TopBarHeight();
		fVar6 = this.get_BorderVerticalPadding();
		if (fVar5 <= fVar6) {
			fVar5 = fVar6;
		}
		fVar6 = this.get_BottomBarHeight();
		fVar7 = this.get_BorderVerticalPadding();
		if (fVar6 <= fVar7) {
			fVar6 = fVar7;
		}
		fVar6 = (fVar4 / fVar1 - fVar5) - fVar6;
		fVar4 = 0.0;
		if (0.0 <= fVar6) {
			fVar4 = fVar6;
		}
		return fVar4;
	}

	[Token(Token = "0x60053DD")]
	[Address(RVA = "0x5C9A2C0", Offset = "0x5C992C0", VA = "0x5C9A2C0", Slot = "45")]
	public virtual void RefreshContentScale()
	{
		// Lifted from source/cpp/UI/MapEditorScaledPanel.c (UI.MapEditorScaledPanel$$RefreshContentScale): clean
		float fVar1;
		RectTransform pUVar2;
		MapEditorSettings pSVar3;
		FloatSetting pSVar4;
		bool bVar5;
		Vector3 value;

		pUVar2 = this._scaledContent;
		bVar5 = ((Object)pUVar2 == null);
		if (!bVar5) {
			pUVar2 = this._scaledContent;
			pSVar3 = SettingsManager.MapEditorSettings;
			if (((pSVar3 == null) ||(pSVar4 = pSVar3.HUDScale, pSVar4 == null)) ||(pUVar2 == null)) {
				throw new NullReferenceException();
			}
			fVar1 = pSVar4._value;
			value.y = fVar1;
			value.x = fVar1;
			value.z = 1.0;
			pUVar2.localScale = value;
			this.RefreshContentDimensions();
			UIManager.NeedResizeText = true;
		}
		return;
	}

	[Token(Token = "0x60053DE")]
	[Address(RVA = "0x5C9A650", Offset = "0x5C99650", VA = "0x5C9A650")]
	private void OnRectTransformDimensionsChange()
	{
		// Lifted from source/cpp/UI/MapEditorScaledPanel.c (UI.MapEditorScaledPanel$$OnRectTransformDimensionsChange): clean
		RectTransform x;
		bool bVar1;

		x = this._scaledContent;
		bVar1 = ((Object)x != null);
		if (bVar1) {
			this.RefreshContentDimensions();
			return;
		}
		return;
	}

	[Token(Token = "0x60053DF")]
	[Address(RVA = "0x5C9A3E0", Offset = "0x5C993E0", VA = "0x5C9A3E0")]
	private void RefreshContentDimensions()
	{
		// Lifted from source/cpp/UI/MapEditorScaledPanel.c (UI.MapEditorScaledPanel$$RefreshContentDimensions): 1 lines keep C-only constructs
		MapEditorSettings pSVar1;
		FloatSetting pSVar2;
		Vector2 value;
		RectTransform pUVar3;
		Transform __this_00;
		LayoutElement pUVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		Vector2 value_00;
		float fVar9;
		float fVar10;
		Rect UVar11;

		pUVar3 = (RectTransform)this.transform;
		if (pUVar3 != null) {
			if (pUVar3.klass != typeof(RectTransform)) {
				throw new InvalidCastException();
			}
			UVar11 = pUVar3.rect;
			pSVar1 = SettingsManager.MapEditorSettings;
			if (((pSVar1 != null) &&(pSVar2 = pSVar1.HUDScale, pSVar2 != null)) &&(pUVar3 = this._scaledContent, pUVar3 != null)) {
				fVar10 = pSVar2._value;
				fVar9 = UVar11.m_Width / fVar10;
				fVar10 = UVar11.m_Height / fVar10;
				value_00.y = fVar10;
				value_00.x = fVar9;
				pUVar3.sizeDelta = value_00;
				fVar5 = this.get_TopBarHeight();
				fVar6 = this.get_BorderVerticalPadding();
				fVar7 = this.get_BottomBarHeight();
				fVar8 = this.get_BorderVerticalPadding();
				pUVar3 = this._panelContent;
				if (pUVar3 != null) {
					if (fVar5 <= fVar6) {
						fVar5 = fVar6;
					}
					if (fVar7 <= fVar8) {
						fVar7 = fVar8;
					}
					fVar7 = (fVar10 - fVar5) - fVar7;
					fVar10 = 0.0;
					if (0.0 <= fVar7) {
						fVar10 = fVar7;
					}
					value.y = fVar10;
					value.x = fVar9;
					pUVar3.sizeDelta = value;
					pUVar3 = this._panelContent;
					if (((pUVar3 != null) &&(__this_00 = pUVar3.Find("ScrollView") , __this_00 != null)) &&(pUVar4 = __this_00.GetComponent<LayoutElement>(), pUVar4 != null)) {
						pUVar4.set_minHeight(fVar10);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60053E0")]
	[Address(RVA = "0x5C9A6C0", Offset = "0x5C996C0", VA = "0x5C9A6C0")]
	public MapEditorScaledPanel()
	{
		// Lifted from source/cpp/UI/MapEditorScaledPanel.c (UI.MapEditorScaledPanel$$.ctor): clean
		base();
		return;
	}
}
