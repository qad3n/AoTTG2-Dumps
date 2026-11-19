// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRow
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCategoryRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200021A")]
internal sealed class AottgGameCreateCategoryRow : AottgComponent
{
	[Token(Token = "0x4000B22")]
	private const string RuntimeNodeType = "GameCreateCategoryRowRuntime";

	[Token(Token = "0x4000B23")]
	internal const float ItemWidth = 260f;

	[Token(Token = "0x4000B24")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000B25")]
	[FieldOffset(Offset = "0x18")]
	private readonly int _count;

	[Token(Token = "0x4000B26")]
	[FieldOffset(Offset = "0x1C")]
	private readonly float _height;

	[Token(Token = "0x4000B27")]
	[FieldOffset(Offset = "0x20")]
	private readonly float _gap;

	[Token(Token = "0x4000B28")]
	[FieldOffset(Offset = "0x24")]
	private readonly float _paddingTop;

	[Token(Token = "0x4000B29")]
	[FieldOffset(Offset = "0x28")]
	private readonly bool _wrap;

	[Token(Token = "0x4000B2A")]
	[FieldOffset(Offset = "0x30")]
	private readonly Action<AottgUi> _buildChoices;

	[Token(Token = "0x6000C87")]
	[Address(RVA = "0x5D8CF40", Offset = "0x5D8BF40", VA = "0x5D8CF40")]
	static AottgGameCreateCategoryRow()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCategoryRow.c (Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRow$$.cctor): 2 lines keep C-only constructs
		GisketchComponentRegistry __this;
		GisketchComponentFactory __this_00;

		if (Il2CppMethodInitialized_07548894 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_07548894 = true;
		}
		__this = GisketchComponentRegistry.Default;
		__this_00 = new GisketchComponentFactory(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow_BuildRuntime);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Register("GameCreateCategoryRowRuntime", __this_00);
		return;
	}

	[Token(Token = "0x6000C88")]
	[Address(RVA = "0x5D8D000", Offset = "0x5D8C000", VA = "0x5D8D000")]
	public AottgGameCreateCategoryRow(string id, int count, float height, float gap, Action<AottgUi> buildChoices, bool wrap = false, float paddingTop = 0f)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCategoryRow.c (Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRow$$.ctor): clean
		int iVar1;

		base();
		this._id = id;
		iVar1 = 1;
		if (1 < count) {
			iVar1 = count;
		}
		this._count = iVar1;
		this._height = height;
		this._gap = gap;
		this._paddingTop = paddingTop;
		this._wrap = wrap;
		this._buildChoices = buildChoices;
		return;
	}

	[Token(Token = "0x6000C89")]
	[Address(RVA = "0x5D8D0A0", Offset = "0x5D8C0A0", VA = "0x5D8D0A0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCategoryRow.c (Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRow$$Build): 1 lines keep C-only constructs
		String id;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;

		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCategoryRow_Build_b__11_0);
		id = this._id;
		width = AottgUi.Percent(100.0);
		height = AottgUi.Points(this._paddingTop + this._height);
		layout = AottgUi.Layout("Column", null, "FlexStart", null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, this._paddingTop, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel("clear", __this_00, id, layout, null);
		return;
	}

	[Token(Token = "0x6000C8A")]
	[Address(RVA = "0x5D8D210", Offset = "0x5D8C210", VA = "0x5D8D210")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCategoryRow.c (Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRow$$BuildRuntime): clean
		float height;
		float gap;
		int count;
		bool wrap;
		LayoutElement pUVar1;
		Transform pUVar2;
		RectTransform pUVar3;
		GameObject __this;
		AottgGameCreateCategoryRowRuntime __this_00;

		if (go != null) {
			pUVar1 = go.AddComponent<LayoutElement>() ;
			if (pUVar1 != null) {
				pUVar1.set_ignoreLayout(true);
				pUVar2 = go.transform;
				if (pUVar2 != null) {
					pUVar2 = pUVar2.parent;
					if (pUVar2 != null) {
						pUVar3 = pUVar2.GetComponent<RectTransform>();
						if (pUVar3 != null) {
							__this = pUVar3.gameObject;
							if (__this != null) {
								__this_00 = __this.AddComponent<AottgGameCreateCategoryRowRuntime>();
								pUVar2 = pUVar3.GetChild(0);
								if (pUVar2 != null) {
									pUVar3 = pUVar2.GetComponent<RectTransform>();
									if (node != null) {
										count = node.maxVisibleItems;
										height = node.referenceHeight;
										gap = node.min.value;
										wrap = (node.value == "Wrap");
										if (__this_00 != null) {
											__this_00.Setup(pUVar3, count, height, gap, wrap);
											return true;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCategoryRow.c.

	// Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRow$$<Build>b__11_0: 4 lines keep C-only constructs
	private void Build_b__11_0(AottgUi shell)
	{
		float gap;
		int iVar1;
		String wrap;
		String alignItems;
		AottgUi __this_00;
		int iVar2;
		GisketchLength pGVar3;
		GisketchLength pGVar4;
		GisketchLayoutDefinition pGVar5;
		GisketchNodeDefinition __this_01;
		String pSVar6;
		String* ppSVar7;
		Nullable<float> SStack_58;
		String pSStack_50;
		String pSStack_48;
		Action<AottgUi> pSStack_40;
		AottgUi pGStack_38;

		pSStack_40 = this._buildChoices;
		pSStack_48 = String.Concat(this._id, "-content");
		alignItems = "Stretch";
		pSVar6 = "Row";
		if (this._wrap == false) {
			ppSVar7 = &"NoWrap";
		}
		else {
			ppSVar7 = &"Wrap";
		}
		pSStack_50 = "clear";
		wrap = *ppSVar7;
		gap = this._gap;
		iVar1 = this._count;
		pGStack_38 = shell;
		iVar2 = iVar1 + -1;
		if (iVar2 < 1) {
			iVar2 = 0;
		}
		pGVar3 = AottgUi.Points((float)iVar2 * gap + (float)iVar1 * 260.0) ;
		pGVar4 = AottgUi.Points(this._height);
		pGVar5 = AottgUi.Layout(pSVar6, null, alignItems, null, wrap, gap, pGVar3, pGVar4, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		__this_00 = pGStack_38;
		if (pGStack_38 != null) {
			pGStack_38.Panel(pSStack_50, pSStack_40, pSStack_48, pGVar5, null);
			__this_01 = new GisketchNodeDefinition();
			if (__this_01 != null) {
				__this_01.type = "GameCreateCategoryRowRuntime";
				pSVar6 = String.Concat(this._id, "-runtime");
				__this_01.id = pSVar6;
				if (this._wrap == false) {
					ppSVar7 = &"NoWrap";
				}
				else {
					ppSVar7 = &"Wrap";
				}
				__this_01.value = *ppSVar7;
				__this_01.maxVisibleItems = this._count;
				__this_01.referenceHeight = this._height;
				SStack_58.hasValue = false;
				SStack_58._1_3_ = 0;
				SStack_58.value = 0.0;
				SStack_58 = new Nullable<float>(this._gap);
				__this_01.min = SStack_58;
				pGVar3 = AottgUi.Points(0.0);
				pGVar4 = AottgUi.Points(0.0);
				pGVar5 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar3, pGVar4, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
				__this_01.layout = pGVar5;
				__this_00.Add(__this_01);
				return;
			}
		}
		throw new NullReferenceException();
	}
}
