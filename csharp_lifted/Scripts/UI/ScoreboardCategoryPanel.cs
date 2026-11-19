// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardCategoryPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ScoreboardCategoryPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardCategoryPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000856")]
internal class ScoreboardCategoryPanel : CategoryPanel
{
	[Token(Token = "0x17000DDC")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004FB3")]
		[Address(RVA = "0x5C3C130", Offset = "0x5C3B130", VA = "0x5C3C130", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/ScoreboardCategoryPanel.c (UI.ScoreboardCategoryPanel$$get_ScrollBar): clean
			return true;
		}
	}

	[Token(Token = "0x17000DDD")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6004FB4")]
		[Address(RVA = "0x5C3C140", Offset = "0x5C3B140", VA = "0x5C3C140", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/ScoreboardCategoryPanel.c (UI.ScoreboardCategoryPanel$$get_ThemePanel): clean
			return "ScoreboardPopup";
		}
	}

	[Token(Token = "0x6004FB5")]
	[Address(RVA = "0x5C3C170", Offset = "0x5C3B170", VA = "0x5C3C170")]
	protected void SetupGisketch(BasePanel parent)
	{
		// Lifted from source/cpp/UI/ScoreboardCategoryPanel.c (UI.ScoreboardCategoryPanel$$SetupGisketch): 8 lines keep C-only constructs
		Vector2 position;
		String direction;
		Vector2 value;
		String alignItems;
		bool bVar1;
		int iVar2;
		RectTransform pUVar3;
		AottgInGameView __this_00;
		Transform pUVar4;
		GisketchNodeDefinition __this_01;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar5;
		GameObject __this_02;
		ScrollRect __this_03;
		MethodInfo* method_00;
		String* ppSVar6;
		Transform* targetAddress;
		float fVar7;
		float fVar8;

		this.Parent = parent;
		pUVar3 = (RectTransform)this.transform;
		fVar7 = this.GetWidth();
		fVar8 = this.GetHeight();
		if (pUVar3 != null) {
			if (pUVar3.klass != typeof(RectTransform)) {
				throw new InvalidCastException();
			}
			value.y = fVar8;
			value.x = fVar7;
			pUVar3.sizeDelta = value;
			__this_00 = new AottgInGameView();
			pUVar4 = this.transform;
			__this_01 = new GisketchNodeDefinition();
			if (__this_01 != null) {
				__this_01.type = "ScrollView";
				__this_01.style = "clear";
				fVar7 = this.GetPanelWidth();
				width = AottgUi.Points(fVar7);
				fVar7 = this.GetPanelHeight();
				height = AottgUi.Points(fVar7);
				ppSVar6 = &"Column";
				fVar7 = 0.0;
				pGVar5 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				__this_01.layout = pGVar5;
				bVar1 = this.get_DoublePanel();
				if (bVar1) {
					ppSVar6 = &"Row";
				}
				direction = *ppSVar6;
				bVar1 = this.get_DoublePanel();
				alignItems = "FlexStart";
				if (!bVar1) {
					iVar2 = this.get_HorizontalPadding();
					fVar7 = (float)iVar2;
				}
				iVar2 = this.get_VerticalPadding();
				bVar1 = this.get_DoublePanel();
				fVar8 = 0.0;
				if (!bVar1) {
					fVar8 = this.get_VerticalSpacing();
				}
				pGVar5 = AottgUi.Layout(direction, null, alignItems, null, null, fVar8, null, null, null, null, null, null, 0.0, fVar7, (float)iVar2, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				__this_01.contentLayout = pGVar5;
				if (__this_00 != null) {
					__this_02 = __this_00.Build(pUVar4, __this_01);
					if (__this_02 != null) {
						method_00 = &MethodInfo_UnityEngine_GameObject_GetComponent_ScrollRect;
						__this_03 = __this_02.GetComponent<ScrollRect>();
						if (__this_03 != null) {
							pUVar4 = __this_03.transform;
							position = (Vector2.zeroVector);
							AottgInGameView.Position(pUVar4, (Vector2)position);
							bVar1 = this.get_DoublePanel();
							pUVar3 = __this_03.m_Content;
							if (bVar1) {
								pUVar4 = this.CreateColumn(__this_00, (Transform)pUVar3);
								this.DoublePanelLeft = pUVar4;
								pUVar4 = this.CreateColumn(__this_00, (Transform)__this_03.m_Content);
								this.DoublePanelRight = pUVar4;
								targetAddress = &this.DoublePanelRight;
							}
							else {
								this.SinglePanel = (Transform)pUVar3;
								targetAddress = &this.SinglePanel;
							}
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004FB6")]
	[Address(RVA = "0x5C3C630", Offset = "0x5C3B630", VA = "0x5C3C630")]
	private Transform CreateColumn(AottgInGameView view, Transform parent)
	{
		// Lifted from source/cpp/UI/ScoreboardCategoryPanel.c (UI.ScoreboardCategoryPanel$$CreateColumn): 1 lines keep C-only constructs
		int iVar1;
		GisketchNodeDefinition __this_00;
		GisketchLength width;
		GisketchLayoutDefinition pGVar2;
		GameObject __this_01;
		Transform pUVar3;
		float fVar4;

		__this_00 = il2cpp_codegen_object_new(typeof(GisketchNodeDefinition)) ;
		__this_00 = new GisketchNodeDefinition();
		if (__this_00 != null) {
			__this_00.type = "Panel";
			__this_00.style = "clear";
			fVar4 = this.GetPanelWidth();
			width = AottgUi.Points(fVar4 * 0.5);
			iVar1 = this.get_HorizontalPadding();
			fVar4 = this.get_VerticalSpacing();
			pGVar2 = AottgUi.Layout("Column", null, null, null, null, fVar4, width, null, null, null, null, null, 0.0, (float)iVar1, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			__this_00.layout = pGVar2;
			if (view != null) {
				__this_01 = view.Build(parent, __this_00);
				if (__this_01 != null) {
					return pUVar3;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004FB7")]
	[Address(RVA = "0x5C3C800", Offset = "0x5C3B800", VA = "0x5C3C800")]
	public ScoreboardCategoryPanel()
	{
		// Lifted from source/cpp/UI/ScoreboardCategoryPanel.c (UI.ScoreboardCategoryPanel$$.ctor): clean
		base();
		return;
	}
}
