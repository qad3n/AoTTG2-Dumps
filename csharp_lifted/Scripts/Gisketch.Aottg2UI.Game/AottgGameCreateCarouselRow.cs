// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRow
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselRow.c
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

[Token(Token = "0x2000215")]
internal sealed class AottgGameCreateCarouselRow : AottgComponent
{
	[Token(Token = "0x4000B0D")]
	private const string RuntimeNodeType = "GameCreateCarouselRuntime";

	[Token(Token = "0x4000B0E")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000B0F")]
	[FieldOffset(Offset = "0x18")]
	private readonly int _count;

	[Token(Token = "0x4000B10")]
	[FieldOffset(Offset = "0x1C")]
	private readonly float _height;

	[Token(Token = "0x4000B11")]
	[FieldOffset(Offset = "0x20")]
	private readonly float _gap;

	[Token(Token = "0x4000B12")]
	[FieldOffset(Offset = "0x24")]
	private readonly float _paddingTop;

	[Token(Token = "0x4000B13")]
	[FieldOffset(Offset = "0x28")]
	private readonly int _selectedIndex;

	[Token(Token = "0x4000B14")]
	[FieldOffset(Offset = "0x30")]
	private readonly Action<AottgUi> _buildChoices;

	[Token(Token = "0x6000C69")]
	[Address(RVA = "0x5D8A5E0", Offset = "0x5D895E0", VA = "0x5D8A5E0")]
	static AottgGameCreateCarouselRow()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselRow.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRow$$.cctor): 2 lines keep C-only constructs
		GisketchComponentRegistry __this;
		GisketchComponentFactory __this_00;

		if (Il2CppMethodInitialized_07548875 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_07548875 = true;
		}
		__this = GisketchComponentRegistry.Default;
		__this_00 = new GisketchComponentFactory(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_BuildRuntime);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Register("GameCreateCarouselRuntime", __this_00);
		return;
	}

	[Token(Token = "0x6000C6A")]
	[Address(RVA = "0x5D8A6A0", Offset = "0x5D896A0", VA = "0x5D8A6A0")]
	public AottgGameCreateCarouselRow(string id, int count, float height, float gap, Action<AottgUi> buildChoices, float paddingTop = 0f, int selectedIndex = -1)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselRow.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRow$$.ctor): clean
		base();
		this._id = id;
		this._count = count;
		this._height = height;
		this._gap = gap;
		this._buildChoices = buildChoices;
		this._paddingTop = paddingTop;
		this._selectedIndex = selectedIndex;
		return;
	}

	[Token(Token = "0x6000C6B")]
	[Address(RVA = "0x5D8A730", Offset = "0x5D89730", VA = "0x5D8A730", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselRow.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRow$$Build): 1 lines keep C-only constructs
		String id;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;

		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateCarouselRow_Build_b__10_0);
		id = this._id;
		width = AottgUi.Percent(100.0);
		height = AottgUi.Points(this._height + this._paddingTop);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, this._paddingTop, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel("clear", __this_00, id, layout, null);
		return;
	}

	[Token(Token = "0x6000C6C")]
	[Address(RVA = "0x5D8A8A0", Offset = "0x5D898A0", VA = "0x5D8A8A0")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselRow.c (Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRow$$BuildRuntime): clean
		String[] pSVar1;
		int selectedIndex;
		LayoutElement pUVar2;
		Transform pUVar3;
		GameObject __this;
		AottgGameCreateCarouselRuntime __this_00;
		String pSVar4;
		ScrollRect scroll;
		CultureInfo provider;

		if (go != null) {
			pUVar2 = go.AddComponent<LayoutElement>() ;
			if (pUVar2 != null) {
				pUVar2.set_ignoreLayout(true);
				pUVar3 = go.transform;
				if (pUVar3 != null) {
					pUVar3 = pUVar3.parent;
					if (pUVar3 != null) {
						__this = pUVar3.gameObject;
						if (__this != null) {
							__this_00 = __this.AddComponent<AottgGameCreateCarouselRuntime>();
							if (node != null) {
								pSVar4 = String.Concat(node.value, "-scroll");
								pUVar3 = pUVar3.Find(pSVar4);
								if (pUVar3 != null) {
									scroll = pUVar3.GetComponent<ScrollRect>();
									pSVar1 = node.options;
									if (pSVar1 != null) {
										if ((int)pSVar1.Length == 0) {
											throw new IndexOutOfRangeException();
										}
										pSVar4 = pSVar1[0];
										provider = CultureInfo.InvariantCulture;
										selectedIndex = Int32.Parse(pSVar4, (IFormatProvider)provider);
										if (__this_00 != null) {
											__this_00.Setup(scroll, selectedIndex);
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
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselRow.c.

	// Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRow$$<Build>b__10_0: clean
	private void Build_b__10_0(AottgUi row)
	{
		float gap;
		uint uVar1;
		int iVar2;
		Action<AottgUi> build;
		GisketchNodeDefinition pGVar3;
		String pSVar4;
		GisketchLength pGVar5;
		GisketchLength pGVar6;
		GisketchLength height;
		GisketchLayoutDefinition pGVar7;
		GisketchLayoutDefinition contentLayout;
		GisketchNodeDefinition pGVar8;
		GisketchNodeDefinition __this_00;
		GisketchNodeDefinition[] pGVar9;
		String[] pSVar10;
		CultureInfo provider;
		int count;
		GisketchNodeDefinition[] pGVar11;
		uint uVar12;
		float value;

		build = this._buildChoices;
		pSVar4 = String.Concat(this._id, "-scroll");
		pGVar5 = AottgUi.Percent(100.0);
		pGVar6 = AottgUi.Points(0.0);
		height = AottgUi.Points(this._height);
		pGVar7 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar5, height, pGVar6, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		gap = this._gap;
		iVar2 = this._count;
		count = 1;
		if (1 < iVar2) {
			count = iVar2;
		}
		value = AottgGameCreateCategoryRowRuntime.SpanLength(count, 260.0, gap);
		pGVar5 = AottgUi.Points(value);
		contentLayout = AottgUi.Layout("Row", null, "Stretch", null, "NoWrap", gap, pGVar5, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (((row != null) &&(pGVar8 = row.ScrollView("clear", build, pSVar4, pGVar7, contentLayout, null), pGVar8 != null)) &&(pGVar11 = pGVar8.children, pGVar11 != null)) {
			uVar12 = 0xffffffff;
			do {
				uVar12 = uVar12 + 1;
				uVar1 = (uint)pGVar11.Length;
				if ((int)uVar1 <= (int)uVar12) {
					pGVar8 = new GisketchNodeDefinition();
					if (pGVar8 != null) {
						pGVar8.type = "GameCreateCarouselRuntime";
						pSVar4 = String.Concat(this._id, "-runtime") ;
						pGVar8.id = pSVar4;
						pGVar8.value = this._id;
						pSVar10 = (String[])new string[1];
						provider = CultureInfo.InvariantCulture;
						pSVar4 = (this._selectedIndex).ToString((IFormatProvider)provider);
						if (pSVar10 != null) {
							if ((int)pSVar10.Length != 0) {
								pSVar10[0] = pSVar4;
								pGVar8.options = pSVar10;
								pGVar5 = AottgUi.Points(0.0);
								pGVar6 = AottgUi.Points(0.0);
								pGVar7 = AottgUi.Layout("Column", null, null, "Absolute", null, 0.0, pGVar5, pGVar6, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
								pGVar8.layout = pGVar7;
								row.Add(pGVar8);
								return;
							}
	label_05e8b0cf: ;
							throw new IndexOutOfRangeException();
						}
					}
					break;
				}
				if (uVar1 <= uVar12) goto label_05e8b0cf;
				pGVar3 = pGVar11[(int)uVar12];
				__this_00 = new GisketchNodeDefinition();
				if (__this_00 == null) break;
				__this_00.type = "Panel";
				if (pGVar3 == null) break;
				pSVar4 = String.Concat(pGVar3.id, "-fade");
				__this_00.id = pSVar4;
				__this_00.style = "clear";
				pGVar7 = pGVar3.layout;
				if (pGVar7 == null) break;
				pGVar7 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar7.width, pGVar7.height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
				__this_00.layout = pGVar7;
				pGVar9 = (GisketchNodeDefinition[])new GisketchNodeDefinition[1];
				if (pGVar9 == null) break;
				if ((int)pGVar9.Length == 0) goto label_05e8b0cf;
				pGVar9[0] = pGVar3;
				__this_00.children = pGVar9;
				if ((uint)pGVar11.Length <= uVar12) goto label_05e8b0cf;
				pGVar11[(int)uVar12] = __this_00;
				pGVar11 = pGVar8.children;
			} while (pGVar11 != null);
		}
		throw new NullReferenceException();
	}
}
