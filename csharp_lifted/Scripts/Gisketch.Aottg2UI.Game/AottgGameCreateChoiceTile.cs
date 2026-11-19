// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceTile.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200021D")]
internal sealed class AottgGameCreateChoiceTile : AottgComponent
{
	[Token(Token = "0x4000B39")]
	private const string HoverNodeType = "GameCreateChoiceHover";

	[Token(Token = "0x4000B3A")]
	private const string FrameNodeType = "GameCreateChoiceFrame";

	[Token(Token = "0x4000B3B")]
	internal const string DetailTitleId = "game-create-choice-detail-title";

	[Token(Token = "0x4000B3C")]
	internal const string DetailDescriptionId = "game-create-choice-detail-description";

	[Token(Token = "0x4000B3D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000B3E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _title;

	[Token(Token = "0x4000B3F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _description;

	[Token(Token = "0x4000B40")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly string _actionId;

	[Token(Token = "0x4000B41")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly string _icon;

	[Token(Token = "0x4000B42")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly string _previewSprite;

	[Token(Token = "0x4000B43")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly int _index;

	[Token(Token = "0x4000B44")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly Action<GisketchActionContext> _select;

	[Token(Token = "0x4000B45")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly float _height;

	[Token(Token = "0x4000B46")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Sprite _featuredStarSprite;

	[Token(Token = "0x17000168")]
	private static Sprite FeaturedStarSprite
	{
		[Token(Token = "0x6000CA4")]
		[Address(RVA = "0x5D90700", Offset = "0x5D8F700", VA = "0x5D90700")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceTile.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$get_FeaturedStarSprite): 5 lines keep C-only constructs
			uint uVar1;
			Sprite pUVar2;
			Il2CppClass klass;

			if (Il2CppMethodInitialized_075488a4 == false) {
				Il2CppMethodInitialized_075488a4 = true;
				uVar1 = (typeof(AottgGameCreateChoiceTile)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(AottgGameCreateChoiceTile)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
				pUVar2 = AottgGameCreateChoiceTile._featuredStarSprite;
				klass = typeof(AottgGameCreateChoiceTile);
			}
			else {
				pUVar2 = *(Sprite*)(typeof(AottgGameCreateChoiceTile)).static_fields;
				klass = typeof(AottgGameCreateChoiceTile);
			}
			typeof(AottgGameCreateChoiceTile) =(AottgGameCreateChoiceTile)klass;
			if (pUVar2 == null) {
				pUVar2 = AottgGameCreateChoiceTile.CreateFeaturedStarSprite();
				AottgGameCreateChoiceTile._featuredStarSprite = pUVar2;
				Il2CppCodeGenWriteBarrier(&AottgGameCreateChoiceTile._featuredStarSprite) ;
			}
			return pUVar2;
		}
	}

	[Token(Token = "0x6000C9D")]
	[Address(RVA = "0x5D8E760", Offset = "0x5D8D760", VA = "0x5D8E760")]
	static AottgGameCreateChoiceTile()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceTile.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$.cctor): 3 lines keep C-only constructs
		GisketchComponentRegistry pGVar1;
		GisketchComponentFactory pGVar2;

		if (Il2CppMethodInitialized_0754889e == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_0754889e = true;
		}
		pGVar1 = GisketchComponentRegistry.Default;
		pGVar2 = new GisketchComponentFactory(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_BuildHoverRuntime);
		if (pGVar1 != null) {
			pGVar1.Register("GameCreateChoiceHover", pGVar2);
			pGVar1 = GisketchComponentRegistry.Default;
			pGVar2 = new GisketchComponentFactory(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_BuildFrameRuntime);
			if (pGVar1 != null) {
				pGVar1.Register("GameCreateChoiceFrame", pGVar2);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000C9E")]
	[Address(RVA = "0x5D8E890", Offset = "0x5D8D890", VA = "0x5D8E890")]
	public AottgGameCreateChoiceTile(string id, string title, string description, string actionId, string icon, int index, [Optional] string previewSprite, [Optional] Action<GisketchActionContext> select, float height = 0f)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceTile.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$.ctor): clean
		base();
		this._id = id;
		if (title == null) {
			title = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		this._title = title;
		if (description == null) {
			description = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		this._description = description;
		this._actionId = actionId;
		this._icon = icon;
		this._index = index;
		this._previewSprite = previewSprite;
		this._select = select;
		this._height = height;
		return;
	}

	[Token(Token = "0x6000C9F")]
	[Address(RVA = "0x5D8E990", Offset = "0x5D8D990", VA = "0x5D8E990", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceTile.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$Build): 12 lines keep C-only constructs
		String* targetAddress;
		String pSVar1;
		String justify;
		String direction;
		String alignItems;
		bool bVar2;
		bool bVar3;
		bool bVar4;
		AottgGameCreateChoiceTile.c__DisplayClass16_0 __this_00;
		String[] pSVar5;
		Action<AottgUi> __this_01;
		String id;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;
		GisketchMotionDefinition enter;
		byte bVar6;
		String* ppSVar7;
		float value;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateChoiceTile.c__DisplayClass16_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			bVar2 = (this._id == "game-create-root-favorites");
			__this_00.favoritesChoice = bVar2;
			bVar2 = (this._id == "game-create-root-sandbox");
			__this_00.sandboxChoice = bVar2;
			__this_00.featuredChoice = (bool)(bVar2 | __this_00.favoritesChoice);
			pSVar1 = this._id;
			if (pSVar1 != null) {
				bVar2 = pSVar1.StartsWith("game-create-category-");
				__this_00.categoryChoice = (bool)(bVar2 | __this_00.featuredChoice);
				pSVar1 = this._id;
				if (pSVar1 != null) {
					bVar2 = pSVar1.StartsWith("game-create-experience-");
					bVar4 = true;
					bVar3 = true;
					if (!bVar2) {
						pSVar1 = this._id;
						if (pSVar1 == null) goto label_05e8eec1;
						bVar3 = pSVar1.StartsWith("game-create-favorite-");
					}
					if (__this_00.categoryChoice == false) {
						pSVar1 = this._id;
						if (pSVar1 == null) goto label_05e8eec1;
						bVar4 = pSVar1.StartsWith("game-create-subcategory-");
					}
					__this_00.largeSection = (bool)(bVar4 | bVar3);
					pSVar1 = this._id;
					if (pSVar1 != null) {
						bVar6 = false;
						bVar2 = pSVar1.StartsWith("game-create-root-");
						if (bVar2) {
							bVar6 = __this_00.featuredChoice ^ 1;
						}
						__this_00.utility = (bool)bVar6;
						__this_00.rootChoice = (bool)(bVar6 | __this_00.largeSection);
						bVar2 = true;
						if (bVar3 == false && __this_00.categoryChoice == false) {
							pSVar1 = this._id;
							if (pSVar1 == null) goto label_05e8eec1;
							bVar2 = false;
							bVar3 = pSVar1.StartsWith("game-create-subcategory-");
							if (bVar3) {
								bVar2 = String.IsNullOrEmpty(this._previewSprite);
								bVar2 = !bVar2;
							}
						}
						__this_00.previewChoice = bVar2;
						ppSVar7 = &this._previewSprite;
						bVar2 = String.IsNullOrEmpty(this._previewSprite);
						if (((__this_00.previewChoice & bVar2) != 0) &&(__this_00.featuredChoice == false)) {
							ppSVar7 = &"Data/ExperiencePreview/GeneralPreview";
						}
						targetAddress = &__this_00.previewSprite;
						__this_00.previewSprite = *ppSVar7;
						bVar2 = String.IsNullOrEmpty(__this_00.previewSprite);
						if (bVar2) {
							pSVar5 = (String[])new string[0];
						}
						else {
							pSVar1 = *targetAddress;
							if (pSVar1 == null) goto label_05e8eec1;
							pSVar5 = pSVar1.Split(0x7c, 0);
						}
						__this_00.previewSprites = pSVar5;
						if (__this_00.featuredChoice == false) {
							if ((__this_00.rootChoice == false) || (__this_00.utility != false)) {
								ppSVar7 = &"row";
							}
							else {
								ppSVar7 = &"card";
							}
						}
						else {
							ppSVar7 = &"gameCreateFavoritesCard";
						}
						pSVar1 = *ppSVar7;
						__this_01 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_c__DisplayClass16_0_Build_b__0);
						id = String.Concat(this._id, "-tile");
						alignItems = "Stretch";
						direction = "Column";
						if (__this_00.rootChoice == false) {
							ppSVar7 = &"SpaceBetween";
						}
						else {
							ppSVar7 = &"Center";
						}
						justify = *ppSVar7;
						width = AottgUi.Points(260.0);
						value = this._height;
						if (value <= 0.0) {
							if (__this_00.largeSection == false) {
								value = *(float)(&g_data_0100aa90 + (ulong)(__this_00.utility == false) * 4);
							}
							else {
								value = 360.0;
							}
						}
						height = AottgUi.Points(value);
						layout = AottgUi.Layout(direction, justify, alignItems, null, null, 10.0, width, height, null, null, null, null, *(float)(&g_data_0100b068 + (ulong)(__this_00.rootChoice == false) * 4), 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
						enter = AottgUi.Motion("slideLeft", "game-create-choices", 0.16, 0.025, 0.02, this._index);
						if (ui != null) {
							ui.Panel(pSVar1, __this_01, id, layout, enter);
							return;
						}
					}
				}
			}
		}
	label_05e8eec1: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000CA0")]
	[Address(RVA = "0x5D8EEE0", Offset = "0x5D8DEE0", VA = "0x5D8EEE0")]
	internal static GisketchNodeDefinition BuildFavoriteButton(AottgUi ui, string id, bool favorite, Action<GisketchActionContext> toggle)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceTile.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$BuildFavoriteButton): 2 lines keep C-only constructs
		uint uVar1;
		String* ppSVar2;
		String tooltip;
		GisketchNodeDefinition pGVar3;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar4;

		if (Il2CppMethodInitialized_075488a0 == false) {
			Il2CppMethodInitialized_075488a0 = true;
			uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (favorite) {
			ppSVar2 = &"GameCreate.Favorites.Remove";
		}
		else {
			ppSVar2 = &"GameCreate.Favorites.Add";
		}
		tooltip = Aottg2GisketchLocale.Text(*ppSVar2);
		if ((ui == null) ||(pGVar3 = ui.IconButton((uint)!favorite * 5, "star", toggle, id, tooltip, null), pGVar3 == null)) {
			throw new NullReferenceException();
		}
		pGVar3.formLabel = tooltip;
		width = AottgUi.Points(42.0);
		height = AottgUi.Points(42.0);
		pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		pGVar3.layout = pGVar4;
		return pGVar3;
	}

	[Token(Token = "0x6000CA1")]
	[Address(RVA = "0x5D8F0B0", Offset = "0x5D8E0B0", VA = "0x5D8F0B0")]
	private static bool BuildHoverRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceTile.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$BuildHoverRuntime): clean
		int iVar1;
		String title;
		String description;
		bool bVar2;
		bool mutedBackground;
		LayoutElement pUVar3;
		Transform pUVar4;
		GameObject __this;
		AottgGameCreateChoiceHover __this_00;
		String[] pSVar5;
		String labelId;
		String pSStack_38;

		if ((go == null) ||(pUVar3 = go.AddComponent<LayoutElement>(), pUVar3 == null)) goto label_05e8f2e3;
		pUVar3.set_ignoreLayout(true);
		pUVar4 = go.transform;
		if (pUVar4 == null) goto label_05e8f2e3;
		pUVar4 = pUVar4.parent;
		bVar2 = ((Object)pUVar4 != null);
		if (!bVar2) {
			return true;
		}
		pUVar4 = go.transform;
		if ((((pUVar4 == null) ||(pUVar4 = pUVar4.parent, pUVar4 == null)) ||(__this = pUVar4.gameObject, __this == null)) ||(__this_00 = __this.AddComponent<AottgGameCreateChoiceHover>() , node == null)) goto label_05e8f2e3;
		title = node.text;
		description = node.value;
		pSVar5 = node.options;
		if (pSVar5 == null) {
			labelId = null;
			pSStack_38 = null;
			bVar2 = false;
	label_05e8f28e: ;
			mutedBackground = false;
		}
		else {
			if (pSVar5.Length == 0) {
				pSStack_38 = null;
				if (1 < (int)pSVar5.Length) goto label_05e8f21a;
	label_05e8f246: ;
				labelId = null;
				iVar1 = (int)pSVar5.Length;
			}
			else {
				if ((int)pSVar5.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				pSStack_38 = pSVar5[0];
				if ((int)pSVar5.Length < 2) goto label_05e8f246;
	label_05e8f21a: ;
				labelId = pSVar5[1];
				iVar1 = (int)pSVar5.Length;
			}
			bVar2 = false;
			if (2 < iVar1) {
				bVar2 = (pSVar5[2] == "1");
				pSVar5 = node.options;
			}
			if ((pSVar5 == null) || ((int)pSVar5.Length < 4)) goto label_05e8f28e;
			mutedBackground = (pSVar5[3] == "1");
		}
		if (__this_00 != null) {
			__this_00.Setup(title, description, pSStack_38, labelId, bVar2, mutedBackground) ;
			return true;
		}
	label_05e8f2e3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000CA2")]
	[Address(RVA = "0x5D8FCC0", Offset = "0x5D8ECC0", VA = "0x5D8FCC0")]
	private static bool BuildFrameRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceTile.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$BuildFrameRuntime): 2 lines keep C-only constructs
		String[] pSVar1;
		bool bVar2;
		LayoutElement pUVar3;
		Transform pUVar4;
		Image __this;
		Sprite value;
		Mask __this_00;
		GameObject __this_01;
		RectTransform pUVar5;
		AottgGameCreateChoiceFrame* method_00;

		if ((go != null) &&(pUVar3 = go.AddComponent<LayoutElement>(), pUVar3 != null)) {
			pUVar3.set_ignoreLayout(true);
			pUVar4 = go.transform;
			if (pUVar4 != null) {
				pUVar4 = pUVar4.parent;
				bVar2 = ((Object)pUVar4 == null);
				if (bVar2) {
					return true;
				}
				pUVar4 = go.transform;
				if ((pUVar4 != null) &&(pUVar4 = pUVar4.parent, pUVar4 != null)) {
					__this = pUVar4.GetComponent<Image>();
					bVar2 = ((Object)__this == null);
					if (bVar2) {
						return true;
					}
					if (g_data_075488b5 == false) {
						method_00 = &typeof(AottgGameCreateChoiceFrame);
						g_data_075488b5 = true;
					}
					value = AottgGameCreateChoiceFrame._sprite;
					if (value == null) {
						value = AottgGameCreateChoiceFrame.CreateSprite(0.0) ;
						AottgGameCreateChoiceFrame._sprite = value;
					}
					if (__this != null) {
						__this.sprite = value;
						__this.type = 1;
						pUVar4 = go.transform;
						if ((((pUVar4 != null) &&(pUVar4 = pUVar4.parent, pUVar4 != null)) &&((__this_00 = pUVar4.GetComponent<Mask>(), __this_00 != null ||((((pUVar4 = go.transform, pUVar4 != null &&(pUVar4 = pUVar4.parent, pUVar4 != null)) &&(__this_01 = pUVar4.gameObject, __this_01 != null)) &&(__this_00 = __this_01.AddComponent<Mask>(), __this_00 != null)))))) &&(__this_00.showMaskGraphic = true, node != null)) {
							pSVar1 = node.options;
							if ((pSVar1 != null) && (pSVar1.Length != 0)) {
								if ((int)pSVar1.Length == 0) {
	label_05e9003f: ;
									throw new IndexOutOfRangeException();
								}
								bVar2 = (pSVar1[0] == "layeredStars");
								if (bVar2) {
									pUVar5 = __this.rectTransform;
									if ((typeof(AottgGameCreateChoiceTile)._2).cctor_finished_or_no_cctor == 0) {
									}
									AottgGameCreateChoiceTile.BuildFavoritesArtwork(pUVar5, context) ;
								}
								else {
									pSVar1 = node.options;
									if (pSVar1 == null) goto label_05e9003a;
									if ((int)pSVar1.Length == 0) goto label_05e9003f;
									bVar2 = (pSVar1[0] == "layeredGear") ;
									if (bVar2) {
										pUVar5 = __this.rectTransform;
										if ((typeof(AottgGameCreateChoiceTile)._2). cctor_finished_or_no_cctor == 0) {
										}
										AottgGameCreateChoiceTile.BuildSandboxArtwork(pUVar5, context) ;
									}
								}
							}
							return true;
						}
					}
				}
			}
		}
	label_05e9003a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000CA3")]
	[Address(RVA = "0x5D900C0", Offset = "0x5D8F0C0", VA = "0x5D900C0")]
	private static void BuildFavoritesArtwork(RectTransform parent, GisketchBuildContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceTile.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$BuildFavoritesArtwork): 11 lines keep C-only constructs
		uint uVar1;
		GisketchTheme pGVar2;
		byte[] auVar3 = new byte[16];
		Sprite sprite;
		Il2CppClass klass;
		Color color;
		Color UVar4;
		Color UVar5;
		Color color_00;
		float local_38;
		float fStack_34;

		if ((context != null) &&(pGVar2 = context.Theme, pGVar2 != null)) {
			auVar3._8_8_ = 0;
			auVar3._0_8_ = (ulong)g_data_01006650;
			color = pGVar2.GetColor("shadow", (Color)(auVar3 << 0x40));
			pGVar2 = context.Theme;
			if (pGVar2 != null) {
				UVar4.b = (float)(int)g_data_01005280;
				UVar4.a = (float)g_data_01005280._4_4_;
				UVar4.r = 0.92;
				UVar4.g = 0.64;
				UVar4 = pGVar2.GetColor("warning", UVar4);
				pGVar2 = context.Theme;
				if (pGVar2 != null) {
					UVar5.b = (float)(int)g_data_01005870;
					UVar5.a = (float)g_data_01005870._4_4_;
					UVar5.r = (float)(int)g_data_01005870;
					UVar5.g = (float)g_data_01005870._4_4_;
					UVar5 = pGVar2.GetColor("buttonText", UVar5);
					if (Il2CppMethodInitialized_075488a4 == false) {
						Il2CppMethodInitialized_075488a4 = true;
						uVar1 = (typeof(AottgGameCreateChoiceTile)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar1 = ((typeof(AottgGameCreateChoiceTile))._2). cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
						sprite = AottgGameCreateChoiceTile. _featuredStarSprite;
						klass = typeof(AottgGameCreateChoiceTile);
					}
					else {
						sprite = *(Sprite*)(typeof(AottgGameCreateChoiceTile)).static_fields;
						klass = typeof(AottgGameCreateChoiceTile);
					}
					typeof(AottgGameCreateChoiceTile) =(AottgGameCreateChoiceTile)klass;
					if (sprite == null) {
						sprite = AottgGameCreateChoiceTile.CreateFeaturedStarSprite();
						AottgGameCreateChoiceTile._featuredStarSprite = sprite;
					}
					local_38 = color.b;
					fStack_34 = color.a;
					color_00.a = fStack_34 * 0.5;
					color_00.b = local_38;
					color_00.r = color.r;
					color_00.g = color.g;
					AottgGameCreateChoiceTile.AddFeaturedArtwork(parent, sprite, "favorites-watermark", (Vector2)0xc280000042880000, 138.0, -15.0, color_00);
					AottgGameCreateChoiceTile.AddFeaturedArtwork(parent, sprite, "favorites-shadow", (Vector2)0x4224000041500000, 120.0, 8.0, color);
					AottgGameCreateChoiceTile.AddFeaturedArtwork(parent, sprite, "favorites-accent", (Vector2)0x4238000040e00000, 120.0, 8.0, UVar4);
					AottgGameCreateChoiceTile.AddFeaturedArtwork(parent, sprite, "favorites-face", (Vector2)0x42480000c0000000, 108.0, 8.0, UVar5);
					AottgGameCreateChoiceTile.AddFeaturedArtwork(parent, sprite, "favorites-spark", (Vector2)0xc25c0000c29c0000, 28.0, -12.0, UVar4);
					AottgGameCreateChoiceTile.AddFeaturedArtwork(parent, sprite, "favorites-spark-small", (Vector2)0xc2900000c2400000, 16.0, 12.0, UVar5);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000CA5")]
	[Address(RVA = "0x5D90B50", Offset = "0x5D8FB50", VA = "0x5D90B50")]
	private static Sprite CreateFeaturedStarSprite()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceTile.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$CreateFeaturedStarSprite): 38 lines keep C-only constructs
		float pfVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		uint uVar6;
		object pIVar7;
		Color32[] colors;
		object array;
		Single[] array_00;
		Texture __this;
		Sprite pUVar8;
		ulong uVar9;
		int iVar10;
		int iVar11;
		long lVar12;
		uint length;
		ulong uVar13;
		Color32 pUVar14;
		long lVar15;
		ulong uVar16;
		float pfVar17;
		uint uVar18;
		ulong uVar19;
		long lVar20;
		long lVar21;
		uint uVar22;
		float fVar23;
		float fVar24;
		uint uVar25;
		uint uVar28;
		byte[] auVar26 = new byte[16];
		byte[] auVar27 = new byte[16];
		float fVar29;
		float fVar30;

		pIVar7 = new Vector2[10];
		if (pIVar7 != null) {
			if (0 < *(int)&pIVar7[1].monitor) {
				uVar13 = 0;
				do {
					fVar23 = ((float)(int)uVar13 * 36.0 + 90.0) * 0.017453292;
					fVar24 = cosf(fVar23);
					fVar23 = sinf(fVar23);
					if (*(uint)&pIVar7[1].monitor <= uVar13) goto label_05e9124c;
					(&pIVar7[2].klass)[uVar13] =(Il2CppClass)CONCAT44(fVar23 * *(float)(&g_data_0100ad88 + (ulong)((uVar13 & 1) == 0) * 4) + 256.0, fVar24 * *(float)(&g_data_0100ad88 + (ulong)((uVar13 & 1) == 0) * 4) + 256.0);
					uVar13 = uVar13 + 1;
				} while ((long)uVar13 < (long)*(int)&pIVar7[1].monitor);
			}
			colors = (Color32[])new Color32[0x40000];
			array = new float[0x200];
			array_00 = (Single[])new float[*(uint)&pIVar7[1].monitor];
			pUVar14 = colors.m_Items;
			lVar21 = 0;
			lVar12 = 0;
			do {
				Array.Clear((Array)array, 0, 0x200);
				iVar11 = 0;
				do {
					uVar6 = (uint)pIVar7[1].monitor;
					if ((int)uVar6 < 1) {
	label_05e90d10: ;
						Array.Sort<float>(array_00, 0, 0);
					}
					else {
						fVar23 = ((float)iVar11 + 0.5) * 0.25 + (float)(int)lVar12;
						uVar9 = (ulong)pIVar7[1].monitor & 0xffffffff;
						uVar16 = (ulong)(uVar6 - 1);
						uVar13 = 0;
						if (array_00 == null) {
							do {
								if (uVar6 <= (uint)uVar16) goto label_05e9124c;
								if (fVar23 < *(float)((long)&pIVar7[2].klass + (long)(int)(uint)uVar16 * 8 + 4) == *(float)((long)&pIVar7[2].klass + uVar13 * 8 + 4) <= fVar23) goto label_05e91251;
								uVar16 = uVar13 & 0xffffffff;
								uVar13 = uVar13 + 1;
							} while (uVar9 != uVar13);
							goto label_05e90d10;
						}
						length = 0;
						do {
							if (uVar6 <= (uint)uVar16) goto label_05e9124c;
							fVar24 = (float)((ulong)(&pIVar7[2].klass)[(int)(uint)uVar16] >> 0x20);
							fVar29 = SUB84((&pIVar7[2].klass)[uVar13], 0);
							fVar30 = (float)((ulong)(&pIVar7[2].klass)[uVar13] >> 0x20);
							if (fVar23 < fVar24 == fVar30 <= fVar23) {
								if ((uint)array_00.Length <= length) goto label_05e9124c;
								lVar15 = (long)(int)length;
								length = length + 1;
								array_00[lVar15] =((SUB84((&pIVar7[2].klass)[(int)(uint)uVar16], 0) - fVar29) * (fVar23 - fVar30)) /(fVar24 - fVar30) + fVar29;
							}
							uVar16 = uVar13 & 0xffffffff;
							uVar13 = uVar13 + 1;
						} while (uVar9 != uVar13);
						Array.Sort<float>(array_00, 0, length);
						if (1 < (int)length) {
							if (array_00 == null) goto label_05e91251;
							if (array == null) {
								iVar11 = (int)array_00.Length;
								if ((iVar11 == 0) || (iVar11 == 1)) goto label_05e9124c;
								if ((typeof(AottgGameCreateChoiceTile)._2).cctor_finished_or_no_cctor == 0) {
									throw new NullReferenceException();
								}
								goto label_05e91251;
							}
							uVar22 = 0;
							uVar6 = 1;
							do {
								uVar28 = (uint)array_00.Length;
								if ((uVar28 <= uVar22) || (uVar28 <= uVar6)) goto label_05e9124c;
								fVar23 = array_00[(int)uVar22];
								fVar24 = array_00[(int)uVar6];
								uVar6 = *(uint)&array[1].monitor;
								auVar26._0_4_ = (float)(int)uVar6;
								auVar26._4_4_ = auVar26._0_4_;
								auVar26._8_4_ = auVar26._0_4_;
								auVar26._12_4_ = auVar26._0_4_;
								auVar27._4_4_ = fVar24;
								auVar27._0_4_ = fVar23;
								auVar27._8_8_ = 0;
								auVar27 = minps(auVar26, auVar27);
								fVar23 = (float)(-(uint)(0.0 <= fVar23) & auVar27._0_4_);
								fVar24 = (float)(-(uint)(0.0 <= fVar24) & auVar27._4_4_);
								uVar25 = (uint)fVar23;
								uVar28 = (uint)fVar24;
								if (uVar25 == uVar28) {
									if ((int)uVar25 < (int)uVar6) {
										if (uVar25 < uVar6) {
											uVar28 = uVar25;
											goto label_05e90ed0;
										}
										goto label_05e9124c;
									}
								}
								else {
									if (uVar6 <= uVar25) goto label_05e9124c;
									iVar10 = uVar25 + 1;
									*(float)((long)&array[2].klass + (long)(int)uVar25 * 4) =((float)iVar10 - fVar23) * 0.25 + *(float)((long)&array[2].klass + (long)(int)uVar25 * 4);
									if (iVar10 < (int)uVar28) {
										uVar13 = (ulong)iVar10;
										uVar18 = (uVar28 - uVar25) - 2;
										if (~uVar25 + uVar6 < uVar18) {
											uVar18 = ~uVar25 + uVar6;
										}
										uVar9 = uVar13;
										if (7 < uVar18) {
											uVar16 = (ulong)uVar18 + 1;
											uVar19 = (ulong)((uint)uVar16 & 7);
											if ((uVar16 & 7) == 0) {
												uVar19 = 8;
											}
											uVar9 = (uVar16 - uVar19) + uVar13;
											lVar15 = uVar13 * 4;
											lVar20 = 0;
											do {
												pfVar1 = (float)((long)&array[2].klass + lVar20 * 4 + lVar15);
												fVar23 = pfVar1[1];
												fVar29 = pfVar1[2];
												fVar30 = pfVar1[3];
												pfVar17 = (float)((long)&array[3].klass + lVar20 * 4 + lVar15);
												fVar2 = *pfVar17;
												fVar3 = pfVar17[1];
												fVar4 = pfVar17[2];
												fVar5 = pfVar17[3];
												pfVar17 = (float)((long)&array[2].klass + lVar20 * 4 + lVar15);
												*pfVar17 = *pfVar1 + 0.25;
												pfVar17[1] = fVar23 + 0.25;
												pfVar17[2] = fVar29 + 0.25;
												pfVar17[3] = fVar30 + 0.25;
												pfVar17 = (float)((long)&array[3].klass + lVar20 * 4 + lVar15);
												*pfVar17 = fVar2 + 0.25;
												pfVar17[1] = fVar3 + 0.25;
												pfVar17[2] = fVar4 + 0.25;
												pfVar17[3] = fVar5 + 0.25;
												lVar20 = lVar20 + 8;
											} while (uVar16 - uVar19 != lVar20);
										}
										pfVar17 = (float)((long)&array[2].klass + uVar9 * 4);
										do {
											if (uVar6 <= (uint)uVar9) goto label_05e9124c;
											*pfVar17 = *pfVar17 + 0.25;
											uVar25 = (uint)uVar9 + 1;
											uVar9 = (ulong)uVar25;
											pfVar17 = pfVar17 + 1;
										} while ((int)uVar25 < (int)uVar28);
									}
									if ((int)uVar28 < (int)uVar6) {
										if (uVar6 <= uVar28) goto label_05e9124c;
										fVar23 = (float)(int)uVar28;
	label_05e90ed0: ;
										*(float)((long)&array[2].klass + (long)(int)uVar28 * 4) =(fVar24 - fVar23) * 0.25 + *(float)((long)&array[2].klass + (long)(int)uVar28 * 4);
									}
								}
								uVar22 = uVar22 + 2;
								uVar6 = uVar22 | 1;
							} while ((int)uVar6 < (int)length);
						}
					}
					iVar11 = iVar11 + 1;
				} while (iVar11 != 4);
				if (array == null) goto label_05e91251;
				if (colors == null) {
					if (*(int)&array[1].monitor == 0) {
	label_05e9124c: ;
						throw new IndexOutOfRangeException();
					}
					goto label_05e91251;
				}
				uVar13 = 0;
				do {
					if ((*(uint)&array[1].monitor <= uVar13) || ((ulong)(uint)colors.Length <= lVar21 + uVar13)) goto label_05e9124c;
					fVar23 = *(float)((long)&array[2].klass + uVar13 * 4);
					fVar24 = 1.0;
					if (fVar23 <= 1.0) {
						fVar24 = fVar23;
					}
					pUVar14[uVar13]._overlap_0._at_rgba.rgba =(int)(float)(~-(uint)(0.0 <= fVar23) & 0x3f000000 |(uint)(fVar24 * 255.0 + 0.5) & -(uint)(0.0 <= fVar23)) << 0x18 | 0xffffff;
					uVar13 = uVar13 + 1;
				} while (uVar13 != 0x200);
				lVar12 = lVar12 + 1;
				lVar21 = lVar21 + 0x200;
				pUVar14 = pUVar14 + 0x200;
			} while (lVar12 != 0x200);
			__this = (Texture)il2cpp_codegen_object_new(typeof(Texture2D)) ;
			__this = new Texture2D(0x200, 0x200, 4, false);
			if (__this != null) {
				__this.hideFlags = 0x34;
				__this.filterMode = 1;
				__this.wrapMode = 1;
				__this.SetPixels32(colors);
				__this.Apply(false, true);
				pUVar8 = Sprite.Create((Texture2D)__this, (Rect)(ZEXT816(0x4400000044000000) << 0x40), (Vector2)0x3f0000003f000000, 512.0, 0, 0);
				return pUVar8;
			}
		}
	label_05e91251: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000CA6")]
	[Address(RVA = "0x5D91260", Offset = "0x5D90260", VA = "0x5D91260")]
	private static int FindCrossings(Vector2[] vertices, float y, float[] crossings)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceTile.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$FindCrossings): clean
		uint uVar1;
		ulong uVar2;
		uint uVar3;
		long lVar4;
		ulong uVar5;
		uint uVar6;
		float fVar7;
		float fVar8;
		float fVar9;

		if (vertices == null) {
	label_05e91365: ;
			throw new NullReferenceException();
		}
		uVar6 = (uint)vertices.Length;
		if (0 < (int)uVar6) {
			uVar5 = vertices.Length & 0xffffffff;
			uVar3 = uVar6 - 1;
			if (crossings != null) {
				uVar2 = 0;
				uVar1 = 0;
				while (uVar3 < uVar6) {
					fVar7 = vertices[(int)uVar3].y;
					fVar8 = vertices[uVar2].x;
					fVar9 = vertices[uVar2].y;
					if (y < fVar7 == fVar9 <= y) {
						if ((uint)crossings.Length <= uVar1) break;
						lVar4 = (long)(int)uVar1;
						uVar1 = uVar1 + 1;
						crossings[lVar4] =((vertices[(int)uVar3].x - fVar8) * (y - fVar9)) / (fVar7 - fVar9) + fVar8;
					}
					uVar3 = (uint)uVar2;
					uVar2 = uVar2 + 1;
					if (uVar5 == uVar2) {
						return uVar1;
					}
				}
	label_05e91360: ;
				throw new IndexOutOfRangeException();
			}
			uVar2 = 0;
			do {
				if (uVar6 <= uVar3) goto label_05e91360;
				if (y < vertices[(int)uVar3].y == vertices[uVar2].y <= y) goto label_05e91365;
				uVar3 = (uint)uVar2;
				uVar2 = uVar2 + 1;
			} while (uVar5 != uVar2);
		}
		return 0;
	}

	[Token(Token = "0x6000CA7")]
	[Address(RVA = "0x5D91370", Offset = "0x5D90370", VA = "0x5D91370")]
	private static void AddSpanCoverage(float[] coverage, float left, float right, float weight)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceTile.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$AddSpanCoverage): 18 lines keep C-only constructs
		float pfVar1;
		uint uVar2;
		float fVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		int iVar9;
		uint uVar10;
		ulong uVar11;
		long lVar12;
		float pfVar13;
		ulong uVar14;
		ulong uVar15;
		ulong uVar16;
		float fVar17;
		uint in_XMM0_Db;
		float fVar18;
		uint uVar19;
		uint in_XMM1_Db;
		uint uVar20;
		byte[] auVar21 = new byte[16];
		byte[] auVar22 = new byte[16];

		if (coverage == null) {
			throw new NullReferenceException();
		}
		uVar2 = (uint)coverage.Length;
		auVar21._0_4_ = (float)(int)uVar2;
		auVar21._4_4_ = auVar21._0_4_;
		auVar21._8_4_ = auVar21._0_4_;
		auVar21._12_4_ = auVar21._0_4_;
		auVar22._4_4_ = right;
		auVar22._0_4_ = left;
		auVar22._8_4_ = in_XMM0_Db;
		auVar22._12_4_ = in_XMM1_Db;
		auVar22 = minps(auVar21, auVar22);
		fVar17 = (float)(-(uint)(0.0 <= left) & auVar22._0_4_);
		fVar18 = (float)(-(uint)(0.0 <= right) & auVar22._4_4_);
		uVar19 = (uint)fVar17;
		uVar20 = (uint)fVar18;
		if (uVar19 == uVar20) {
			if ((int)uVar2 <= (int)uVar19) {
				return;
			}
			if (uVar19 < uVar2) {
				pfVar13 = coverage.m_Items + (int)uVar19;
	label_05e914b4: ;
				*pfVar13 = (fVar18 - fVar17) * weight + *pfVar13;
				return;
			}
		}
		else if (uVar19 < uVar2) {
			iVar9 = uVar19 + 1;
			coverage[(int)uVar19] = ((float)iVar9 - fVar17) * weight + coverage[(int)uVar19];
			if (iVar9 < (int)uVar20) {
				uVar14 = (ulong)iVar9;
				uVar10 = (uVar20 - uVar19) - 2;
				if (~uVar19 + uVar2 < uVar10) {
					uVar10 = ~uVar19 + uVar2;
				}
				uVar15 = uVar14;
				if (7 < uVar10) {
					uVar16 = (ulong)uVar10 + 1;
					uVar11 = 8;
					if ((uVar16 & 7) != 0) {
						uVar11 = (ulong)((uint)uVar16 & 7);
					}
					uVar15 = (uVar16 - uVar11) + uVar14;
					lVar12 = 0;
					do {
						pfVar1 = coverage.m_Items + uVar14 + lVar12;
						fVar17 = pfVar1[1];
						fVar3 = pfVar1[2];
						fVar4 = pfVar1[3];
						pfVar13 = coverage.m_Items + uVar14 + lVar12 + 4;
						fVar5 = *pfVar13;
						fVar6 = pfVar13[1];
						fVar7 = pfVar13[2];
						fVar8 = pfVar13[3];
						pfVar13 = coverage.m_Items + uVar14 + lVar12;
						*pfVar13 = *pfVar1 + weight;
						pfVar13[1] = fVar17 + weight;
						pfVar13[2] = fVar3 + weight;
						pfVar13[3] = fVar4 + weight;
						pfVar13 = coverage.m_Items + uVar14 + lVar12 + 4;
						*pfVar13 = fVar5 + weight;
						pfVar13[1] = fVar6 + weight;
						pfVar13[2] = fVar7 + weight;
						pfVar13[3] = fVar8 + weight;
						lVar12 = lVar12 + 8;
					} while (uVar16 - uVar11 != lVar12);
				}
				pfVar13 = coverage.m_Items + uVar15;
				do {
					if (uVar2 <= (uint)uVar15) goto label_05e914ca;
					*pfVar13 = *pfVar13 + weight;
					pfVar13 = pfVar13 + 1;
					uVar19 = (uint)uVar15 + 1;
					uVar15 = (ulong)uVar19;
				} while ((int)uVar19 < (int)uVar20);
			}
			if ((int)uVar2 <= (int)uVar20) {
				return;
			}
			if (uVar20 < uVar2) {
				pfVar13 = coverage.m_Items + (int)uVar20;
				fVar17 = (float)(int)uVar20;
				goto label_05e914b4;
			}
		}
	label_05e914ca: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000CA8")]
	[Address(RVA = "0x5D90420", Offset = "0x5D8F420", VA = "0x5D90420")]
	private static void BuildSandboxArtwork(RectTransform parent, GisketchBuildContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceTile.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$BuildSandboxArtwork): 12 lines keep C-only constructs
		GisketchTheme pGVar1;
		byte[] auVar2 = new byte[16];
		bool bVar3;
		Object x;
		Il2CppClass klass;
		InvalidOperationException __this;
		String message;
		MethodInfo lastManagedFrame;
		Color color;
		Color UVar4;
		Color UVar5;
		Color color_00;
		float local_78;
		float fStack_74;

		x = (Object)GisketchIconLoader.Load("gear");
		bVar3 = (x == null);
		if (bVar3) {
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(InvalidOperationException));
			__this = (InvalidOperationException)il2cpp_codegen_object_new(klass);
			message = il2cpp_codegen_get_runtime_metadata(&"The Sandbox gear icon could not be loaded.");
			__this = new InvalidOperationException(message);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_BuildSandboxArtwork);
			throw (object)__this;
		}
		if ((context != null) &&(pGVar1 = context.Theme, pGVar1 != null)) {
			auVar2._8_8_ = 0;
			auVar2._0_8_ = (ulong)g_data_01006650;
			color = pGVar1.GetColor("shadow", (Color)(auVar2 << 0x40));
			pGVar1 = context.Theme;
			if (pGVar1 != null) {
				UVar4.b = (float)(int)g_data_0100a440;
				UVar4.a = (float)g_data_0100a440._4_4_;
				UVar4.r = 0.12;
				UVar4.g = 0.62;
				UVar4 = pGVar1.GetColor("primary", UVar4);
				pGVar1 = context.Theme;
				if (pGVar1 != null) {
					UVar5.b = (float)(int)g_data_01005870;
					UVar5.a = (float)g_data_01005870._4_4_;
					UVar5.r = (float)(int)g_data_01005870;
					UVar5.g = (float)g_data_01005870._4_4_;
					UVar5 = pGVar1.GetColor("buttonText", UVar5);
					local_78 = color.b;
					fStack_74 = color.a;
					color_00.a = fStack_74 * 0.5;
					color_00.b = local_78;
					color_00.r = color.r;
					color_00.g = color.g;
					AottgGameCreateChoiceTile.AddFeaturedArtwork(parent, (Sprite)x, "sandbox-watermark", (Vector2)0xc258000042780000, 126.0, 18.0, color_00);
					AottgGameCreateChoiceTile.AddFeaturedArtwork(parent, (Sprite)x, "sandbox-shadow", (Vector2)0x4228000041400000, 100.0, -14.0, color);
					AottgGameCreateChoiceTile.AddFeaturedArtwork(parent, (Sprite)x, "sandbox-accent", (Vector2)0x423c000040e00000, 100.0, -14.0, UVar4);
					AottgGameCreateChoiceTile.AddFeaturedArtwork(parent, (Sprite)x, "sandbox-face", (Vector2)0x424c0000c0000000, 90.0, -14.0, UVar5);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000CA9")]
	[Address(RVA = "0x5D907B0", Offset = "0x5D8F7B0", VA = "0x5D907B0")]
	private static void AddFeaturedArtwork(RectTransform parent, Sprite sprite, string layer, Vector2 position, float size, float angle, Color color)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceTile.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile$$AddFeaturedArtwork): 16 lines keep C-only constructs
		Vector2 value;
		Il2CppType handle;
		String name;
		Type[] components;
		Type pSVar1;
		object pIVar2;
		GameObject __this;
		RectTransform __this_00;
		LayoutElement pUVar3;
		Image __this_01;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		Quaternion value_00;
		Color UVar4;
		Vector3 local_88;
		ulong local_78;
		ulong local_68;
		byte[] local_58 = new byte[16];
		float local_48;

		local_68 = color._8_8_;
		local_78 = color._0_8_;
		local_58._8_4_ = in_XMM0_Dc;
		local_58._0_8_ = position;
		local_58._12_4_ = in_XMM0_Dd;
		local_48 = size;
		name = String.Concat("game-create-root-favorites-star-", layer);
		components = (Type[])new Type[3];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) {
	label_05e90b20: ;
			throw new NullReferenceException();
		}
		if (pSVar1 != null) {
			pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class);
			if (pIVar2 == null) goto label_05e90b2a;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar1;
			pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
			if (pSVar1 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class);
				if (pIVar2 == null) goto label_05e90b2a;
			}
			if ((components.Length & 0xfffffffe) != 0) {
				components[1] = pSVar1;
				pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_LayoutElement);
				if (pSVar1 != null) {
					pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class) ;
					if (pIVar2 == null) {
	label_05e90b2a: ;
						pIVar2 = new ArrayTypeMismatchException();
						throw pIVar2;
					}
				}
				if (2 < (uint)components.Length) {
					components[2] = pSVar1;
					__this = new GameObject(name, components);
					if (__this != null) {
						__this_00 = (RectTransform)__this.transform;
						if (__this_00 != null) {
							if (__this_00.klass != typeof(RectTransform)) {
								throw new InvalidCastException();
							}
							__this_00.SetParent((Transform)parent, false);
							__this_00.anchorMax = (Vector2)0x3f0000003f000000;
							__this_00.anchorMin = (Vector2)0x3f0000003f000000;
							__this_00.anchoredPosition = (Vector2)local_58._0_8_;
							value.y = local_48;
							value.x = local_48;
							__this_00.sizeDelta = value;
							local_88.x = 0.0;
							local_88.y = 0.0;
							local_88.z = angle * 0.017453292;
							value_00 = Quaternion.Internal_FromEulerRad(ref local_88);
							__this_00.localRotation = value_00;
							pUVar3 = __this.GetComponent<LayoutElement>();
							if (pUVar3 != null) {
								pUVar3.set_ignoreLayout(true);
								__this_01 = __this.GetComponent<Image>();
								if (__this_01 != null) {
									__this_01.sprite = sprite;
									__this_01.preserveAspect = true;
									UVar4.b = (float)(undefined4)local_68;
									UVar4.a = (float)local_68._4_4_;
									UVar4.r = (float)(undefined4)local_78;
									UVar4.g = (float)local_78._4_4_;
									__this_01.set_color(UVar4);
									__this_01.set_raycastTarget(false);
									return;
								}
							}
						}
					}
					goto label_05e90b20;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceTile.c.

	// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile.<>c__DisplayClass16_0$$.ctor: clean
	private void c__DisplayClass16_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile.<>c__DisplayClass16_0$$<Build>b__0: 9 lines keep C-only constructs
	private void c__DisplayClass16_0__Build_b__0(AottgUi tile)
	{
		int iVar1;
		AottgGameCreateChoiceTile pGVar2;
		Action<GisketchActionContext> action;
		bool bVar3;
		GisketchNodeDefinition pGVar4;
		String pSVar5;
		String[] pSVar6;
		String* ppSVar7;
		GisketchLength pGVar8;
		GisketchLength pGVar9;
		GisketchLayoutDefinition pGVar10;
		String id;
		AottgGameCreateChoiceTile.c__DisplayClass16_1 __this_00;
		Action<AottgUi> pSVar11;
		String pSVar12;
		String style;
		String alignSelf;
		float paddingX;

		if (this.rootChoice != false) {
			pGVar4 = new GisketchNodeDefinition();
			if (pGVar4 == null) goto label_05e921cc;
			pGVar4.type = "GameCreateChoiceFrame";
			pGVar2 = this.__4__this;
			if (pGVar2 == null) goto label_05e921cc;
			pSVar5 = String.Concat(pGVar2._id, "-frame");
			pGVar4.id = pSVar5;
			if (this.favoritesChoice == false) {
				if (this.sandboxChoice != false) {
					pSVar6 = (String[])new string[1];
					if (pSVar6 == null) goto label_05e921cc;
					if ((int)pSVar6.Length == 0) goto label_05e921d1;
					ppSVar7 = &"layeredGear";
					goto label_05e9173b;
				}
				pSVar6 = null;
			}
			else {
				pSVar6 = (String[])new string[1];
				if (pSVar6 == null) goto label_05e921cc;
				if ((int)pSVar6.Length == 0) goto label_05e921d1;
				ppSVar7 = &"layeredStars";
	label_05e9173b: ;
				pSVar6[0] = *ppSVar7;
			}
			pGVar4.options = pSVar6;
			pGVar8 = AottgUi.Points(0.0);
			pGVar9 = AottgUi.Points(0.0);
			pGVar10 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar8, pGVar9, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			pGVar4.layout = pGVar10;
			if (tile == null) goto label_05e921cc;
			tile.Add(pGVar4);
		}
		if (this.previewChoice == false) {
	label_05e9183e: ;
			bVar3 = String.IsNullOrEmpty(this.previewSprite);
			if (bVar3) {
				if ((this.largeSection == false) || (this.featuredChoice != false)) goto label_05e91b6e;
				pGVar2 = this.__4__this;
				if (pGVar2 == null) goto label_05e921cc;
				id = String.Concat(pGVar2._id, "-background");
				pGVar8 = AottgUi.Percent(100.0);
				pGVar9 = AottgUi.Percent(100.0);
				pGVar10 = AottgUi.Layout("Column", null, null, "Absolute", null, 0.0, pGVar8, pGVar9, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
				if (tile == null) goto label_05e921cc;
				style = "profilePreviewBanner";
				pSVar5 = "Data/ExperiencePreview/GeneralPreview";
			}
			else {
				pGVar2 = this.__4__this;
				if (pGVar2 == null) goto label_05e921cc;
				pSVar5 = this.previewSprite;
				id = String.Concat(pGVar2._id, "-preview");
				style = "profilePreviewBanner";
				pSVar12 = "Column";
				alignSelf = null;
				if (this.previewChoice != false) {
					alignSelf = "Absolute";
				}
				pGVar8 = AottgUi.Percent(100.0);
				if (this.previewChoice == false) {
					pGVar9 = AottgUi.Points(128.0);
				}
				else {
					pGVar9 = AottgUi.Percent(100.0);
				}
				pGVar10 = AottgUi.Layout(pSVar12, null, null, alignSelf, null, 0.0, pGVar8, pGVar9, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
				if (tile == null) goto label_05e921cc;
			}
			tile.Image(pSVar5, style, id, pGVar10, null);
			if (this.previewChoice != false) goto label_05e91c27;
	label_05e91c43: ;
			pSVar11 = this.__9__1;
			pSVar5 = "clear";
		}
		else {
			pSVar6 = this.previewSprites;
			if (pSVar6 == null) goto label_05e921cc;
			if ((int)pSVar6.Length < 2) goto label_05e9183e;
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGameCreateChoiceTile.c__DisplayClass16_1));
			__this_00 = new Object();
			if (__this_00 == null) goto label_05e921cc;
			__this_00.CS___8__locals1 = this;
			pSVar6 = this.previewSprites;
			if (pSVar6 == null) goto label_05e921cc;
			iVar1 = (int)pSVar6.Length;
			__this_00.previewCount = (uint)(3 < iVar1) * 2 + 2;
			__this_00.previewHeight = *(float)(&g_data_0100ad90 + (ulong)(iVar1 < 4) * 4);
			pSVar11 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_c__DisplayClass16_1_Build_b__2);
			pGVar2 = this.__4__this;
			if (pGVar2 == null) goto label_05e921cc;
			pSVar5 = String.Concat(pGVar2._id, "-preview-grid");
			pGVar8 = AottgUi.Percent(100.0);
			pGVar9 = AottgUi.Percent(100.0);
			pGVar10 = AottgUi.Layout("Row", null, null, "Absolute", "Wrap", 0.0, pGVar8, pGVar9, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			if (tile == null) goto label_05e921cc;
			tile.Panel("clear", pSVar11, pSVar5, pGVar10, null);
	label_05e91b6e: ;
			if (this.previewChoice == false) goto label_05e91c43;
	label_05e91c27: ;
			if (this.featuredChoice != false) goto label_05e91c43;
			pSVar11 = this.__9__1;
			pSVar5 = "row";
		}
		if (pSVar11 == null) {
			pSVar11 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateChoiceTile_c__DisplayClass16_0_Build_b__1);
			this.__9__1 = pSVar11;
		}
		pGVar2 = this.__4__this;
		if (pGVar2 != null) {
			pSVar12 = String.Concat(pGVar2._id, "-label");
			pGVar8 = AottgUi.Percent(100.0);
			pGVar9 = AottgUi.Points(58.0);
			paddingX = 0.0;
			if (this.previewChoice != false) {
				paddingX = 2.0;
			}
			pGVar10 = AottgUi.Layout("Row", "Center", "Center", null, null, 4.0, pGVar8, null, null, pGVar9, null, null, 0.0, paddingX, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (tile != null) {
				tile.Panel(pSVar5, pSVar11, pSVar12, pGVar10, null);
				pGVar2 = this.__4__this;
				if (pGVar2 != null) {
					action = pGVar2._select;
					pSVar5 = pGVar2._id;
					pSVar12 = pGVar2._description;
					if (action == null) {
						pGVar4 = tile.Button(5, (String)**(ulong*)(g_data_07556758 + 0xb8), pGVar2._actionId, pSVar5, pSVar12, null, null);
					}
					else {
						pGVar4 = tile.Button(5, (String)**(ulong*)(g_data_07556758 + 0xb8), action, pSVar5, pSVar12, null, null);
					}
					if (pGVar4 != null) {
						pGVar4.style = "clear";
						pGVar2 = this.__4__this;
						if (pGVar2 != null) {
							pGVar4.formLabel = pGVar2._title;
							pGVar8 = AottgUi.Percent(100.0);
							pGVar9 = AottgUi.Percent(100.0);
							pGVar10 = AottgUi.Layout("Column", null, null, "Absolute", null, 0.0, pGVar8, pGVar9, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
							pGVar4.layout = pGVar10;
							pGVar4 = new GisketchNodeDefinition();
							if (pGVar4 != null) {
								pGVar4.type = "GameCreateChoiceHover";
								pGVar2 = this.__4__this;
								if (pGVar2 != null) {
									pSVar5 = String.Concat(pGVar2._id, "-hover");
									pGVar4.id = pSVar5;
									pGVar2 = this.__4__this;
									if (pGVar2 != null) {
										pGVar4.text = pGVar2._title;
										pGVar2 = this.__4__this;
										if (pGVar2 != null) {
											pGVar4.value = pGVar2._description;
											pSVar6 = (String[])new string[4];
											pGVar2 = this.__4__this;
											if (this.previewChoice == false) {
												if (pGVar2 == null) goto label_05e921cc;
												ppSVar7 = &"-background";
											}
											else {
												if (pGVar2 == null) goto label_05e921cc;
												ppSVar7 = &"-preview";
											}
											pSVar5 = String.Concat(pGVar2._id, *ppSVar7);
											if (pSVar6 != null) {
												if ((int)pSVar6.Length != 0) {
													pSVar6[0] = pSVar5;
													pGVar2 = this.__4__this;
													if (pGVar2 == null) goto label_05e921cc;
													pSVar5 = String.Concat(pGVar2._id, "-label");
													if ((pSVar6.Length & 0xfffffffe) != 0) {
														pSVar6[1] = pSVar5;
														if (2 < (uint)pSVar6.Length) {
															if (this.rootChoice == false) {
																ppSVar7 = &"0";
															}
															else {
																ppSVar7 = &"1";
															}
															pSVar6[2] = *ppSVar7;
															if ((pSVar6.Length & 0xfffffffc) != 0) {
																if (this.previewChoice == false) {
																	ppSVar7 = &"1";
																}
																else {
																	ppSVar7 = &"0";
																}
																pSVar6[3] = *ppSVar7;
																pGVar4.options = pSVar6;
																pGVar8 = AottgUi.Points(0.0);
																pGVar9 = AottgUi.Points(0.0);
																pGVar10 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar8, pGVar9, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
																pGVar4.layout = pGVar10;
																tile.Add(pGVar4);
																return;
															}
														}
													}
												}
	label_05e921d1: ;
												throw new IndexOutOfRangeException();
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_05e921cc: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile.<>c__DisplayClass16_1$$.ctor: clean
	private void c__DisplayClass16_1__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile.<>c__DisplayClass16_0$$<Build>b__1: 2 lines keep C-only constructs
	private void c__DisplayClass16_0__Build_b__1(AottgUi label)
	{
		AottgGameCreateChoiceTile pGVar1;
		String pSVar2;
		String pSVar3;
		String id;
		String* ppSVar4;

		if (this.utility != false) {
			pGVar1 = this.__4__this;
			if (pGVar1 == null) goto label_05e9231f;
			pSVar2 = pGVar1._icon;
			pSVar3 = String.Concat(pGVar1._id, "-icon");
			if (label == null) goto label_05e9231f;
			label.Icon(pSVar2, "icon", pSVar3);
		}
		pGVar1 = this.__4__this;
		if (pGVar1 != null) {
			if (this.featuredChoice == false) {
				if (this.categoryChoice == false) {
					ppSVar4 = &"header";
				}
				else {
					ppSVar4 = &"gameCreateChoiceTitle";
				}
			}
			else {
				ppSVar4 = &"gameCreateFavoritesTitle";
			}
			pSVar2 = pGVar1._title;
			pSVar3 = *ppSVar4;
			id = String.Concat(pGVar1._id, "-title");
			if (label != null) {
				label.Text(pSVar2, pSVar3, id, null, null);
				return;
			}
		}
	label_05e9231f: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile.<>c__DisplayClass16_1$$<Build>b__2: clean
	private void c__DisplayClass16_1__Build_b__2(AottgUi grid)
	{
		AottgGameCreateChoiceTile.c__DisplayClass16_0 pGVar1;
		String[] pSVar2;
		AottgGameCreateChoiceTile pGVar3;
		String sprite;
		String str2;
		String pSVar4;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;
		uint uStack_34;

		uStack_34 = 0;
		if (0 < this.previewCount) {
			do {
				pGVar1 = this.CS___8__locals1;
				if ((pGVar1 == null) ||(pSVar2 = pGVar1.previewSprites, pSVar2 == null)) {
	label_05e924e0: ;
					throw new NullReferenceException();
				}
				if ((uint)pSVar2.Length <= uStack_34) {
					throw new IndexOutOfRangeException();
				}
				pGVar3 = pGVar1.__4__this;
				if (pGVar3 == null) goto label_05e924e0;
				sprite = pSVar2[(int)uStack_34];
				pSVar4 = pGVar3._id;
				str2 = uStack_34.ToString();
				pSVar4 = String.Concat(pSVar4, "-preview-", str2);
				width = AottgUi.Percent(50.0);
				height = AottgUi.Percent(this.previewHeight);
				layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
				if (grid == null) goto label_05e924e0;
				grid.Image(sprite, "profilePreviewBanner", pSVar4, layout, null);
				uStack_34 = uStack_34 + 1;
			} while ((int)uStack_34 < this.previewCount);
		}
		return;
	}
}
