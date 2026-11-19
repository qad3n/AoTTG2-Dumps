// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceHover.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000220")]
internal sealed class AottgGameCreateChoiceHover : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, IPointerMoveHandler, ISelectHandler, IDeselectHandler
{
	[Token(Token = "0x2000221")]
	internal sealed class AottgGameCreateChoiceFocus : MonoBehaviour, ISelectHandler, IEventSystemHandler, IDeselectHandler
	{
		[Token(Token = "0x4000B61")]
		[FieldOffset(Offset = "0x20")]
		private AottgGameCreateChoiceHover _hover;

		[Token(Token = "0x6000CBD")]
		[Address(RVA = "0x5D93140", Offset = "0x5D92140", VA = "0x5D93140")]
		public void Setup(AottgGameCreateChoiceHover hover)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceHover.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover.AottgGameCreateChoiceFocus$$Setup): clean
			this._hover = hover;
			return;
		}

		[Token(Token = "0x6000CBE")]
		[Address(RVA = "0x5D93150", Offset = "0x5D92150", VA = "0x5D93150", Slot = "4")]
		public void OnSelect(BaseEventData eventData)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceHover.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover.AottgGameCreateChoiceFocus$$OnSelect): clean
			AottgGameCreateChoiceHover __this_00;

			__this_00 = this._hover;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00._selected = true;
			__this_00.SetHovered(true);
			__this_00.SetText("game-create-choice-detail-title", __this_00._title);
			__this_00.SetText("game-create-choice-detail-description", __this_00._description);
			return;
		}

		[Token(Token = "0x6000CBF")]
		[Address(RVA = "0x5D931D0", Offset = "0x5D921D0", VA = "0x5D931D0", Slot = "5")]
		public void OnDeselect(BaseEventData eventData)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceHover.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover.AottgGameCreateChoiceFocus$$OnDeselect): clean
			AottgGameCreateChoiceHover __this_00;

			__this_00 = this._hover;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00._selected = false;
			__this_00.SetHovered(__this_00._hovered) ;
			return;
		}

		[Token(Token = "0x6000CC0")]
		[Address(RVA = "0x5D931F0", Offset = "0x5D921F0", VA = "0x5D931F0")]
		public AottgGameCreateChoiceFocus()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceHover.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover.AottgGameCreateChoiceFocus$$.ctor): clean
			base();
			return;
		}
	}

	[Token(Token = "0x4000B56")]
	[FieldOffset(Offset = "0x20")]
	private string _title;

	[Token(Token = "0x4000B57")]
	[FieldOffset(Offset = "0x28")]
	private string _description;

	[Token(Token = "0x4000B58")]
	[FieldOffset(Offset = "0x30")]
	private string _previewId;

	[Token(Token = "0x4000B59")]
	[FieldOffset(Offset = "0x38")]
	private string _labelId;

	[Token(Token = "0x4000B5A")]
	[FieldOffset(Offset = "0x40")]
	private bool _framed;

	[Token(Token = "0x4000B5B")]
	[FieldOffset(Offset = "0x41")]
	private bool _mutedBackground;

	[Token(Token = "0x4000B5C")]
	[FieldOffset(Offset = "0x48")]
	private GisketchLogoMotionBlur _blur;

	[Token(Token = "0x4000B5D")]
	[FieldOffset(Offset = "0x50")]
	private Image _hoverRing;

	[Token(Token = "0x4000B5E")]
	[FieldOffset(Offset = "0x58")]
	private AottgGameCreateCardPreview _cardPreview;

	[Token(Token = "0x4000B5F")]
	[FieldOffset(Offset = "0x60")]
	private bool _hovered;

	[Token(Token = "0x4000B60")]
	[FieldOffset(Offset = "0x61")]
	private bool _selected;

	[Token(Token = "0x6000CAF")]
	[Address(RVA = "0x5D8F2F0", Offset = "0x5D8E2F0", VA = "0x5D8F2F0")]
	public void Setup(string title, string description, string previewId, string labelId, bool framed, bool mutedBackground)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceHover.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$Setup): 65 lines keep C-only constructs
		GisketchLogoMotionBlur* targetAddress;
		byte bVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		Object pUVar4;
		ulong uVar5;
		ulong uVar6;
		bool bVar7;
		sbyte cVar8;
		bool bVar9;
		bool bVar10;
		Transform pUVar11;
		String pSVar12;
		object pIVar13;
		VirtualInvokeData pVVar14;
		Component __this_00;
		Object pUVar15;
		GameObject pUVar16;
		AottgGameCreateChoiceHover x;
		AottgGameCreateCardPreview pGVar17;
		GisketchLogoMotionBlur pGVar18;
		Image pUVar19;
		TMP_Text __this_01;
		ulong uVar20;
		long lVar21;
		ulong uVar22;
		uint in_XMM1_Da;
		object pIStack_78;
		object pIStack_70;
		ulong uStack_68;
		ulong uStack_58;
		byte puStack_40;
		object* ppIStack_38;

		if (Il2CppMethodInitialized_075488ab == false) {
			Il2CppMethodInitialized_075488ab = true;
			if (title != null) goto label_05e8f333;
	label_05e8f422: ;
			uVar6 = CONCAT44(uStack_58._4_4_, (undefined4)uStack_58);
			uVar22 = CONCAT44(uStack_68._4_4_, (undefined4)uStack_68);
			title = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			if (title == null) goto label_05e8f422;
	label_05e8f333: ;
			uVar6 = CONCAT44(uStack_58._4_4_, (undefined4)uStack_58);
			uVar22 = CONCAT44(uStack_68._4_4_, (undefined4)uStack_68);
		}
		pIStack_70 = null;
		pIStack_78 = null;
		if (this == null) goto label_05e8fc55;
		pIStack_70 = null;
		pIStack_78 = null;
		this._title = title;
		if (description == null) {
			description = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		this._description = description;
		this._previewId = previewId;
		this._labelId = labelId;
		this._framed = framed;
		this._mutedBackground = mutedBackground;
		if (!framed) {
			return;
		}
		pUVar11 = this.transform;
		pSVar12 = String.Concat(this._previewId, "-grid") ;
		uVar22 = CONCAT44(uStack_68._4_4_, (undefined4)uStack_68);
		uVar6 = CONCAT44(uStack_58._4_4_, (undefined4)uStack_58);
		if (pUVar11 == null) goto label_05e8fc55;
		pUVar11 = pUVar11.Find(pSVar12);
		bVar7 = ((Object)pUVar11 != null);
		if (bVar7) {
			uVar22 = CONCAT44(uStack_68._4_4_, (undefined4)uStack_68);
			uVar6 = CONCAT44(uStack_58._4_4_, (undefined4)uStack_58);
			if (pUVar11 != null) {
				pIVar13 = (object)pUVar11.GetEnumerator();
				puStack_40 = (byte)&pIStack_78;
				ppIStack_38 = &pIStack_70;
				do {
					pIStack_78 = pIVar13;
					if (pIVar13 == null) {
						throw new NullReferenceException();
					}
					pIVar2 = pIVar13.klass;
					uVar20 = (ulong)(pIVar2._2).interface_offsets_count;
					cVar8 = pIVar13.Dispose();
					pIVar13 = pIStack_78;
					if (cVar8 == false) {
						pIVar13 = (pIStack_78 as IDisposable);
						pIStack_70 = pIVar13;
						if (pIVar13 == null) goto label_05e8f7be;
						pIVar2 = pIVar13.klass;
						uVar20 = (ulong)(pIVar2._2).interface_offsets_count;
						if (uVar20 == 0) goto label_05e8f77f;
						pIVar3 = (pIVar2._1).interfaceOffsets;
						lVar21 = 0;
						goto label_05e8f770;
					}
					if (pIStack_78 == null) {
						throw new NullReferenceException();
					}
					pIVar2 = pIStack_78.klass;
					uVar20 = (ulong)(pIVar2._2).interface_offsets_count;
					__this_00 = (Component)pIVar13.Dispose();
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					bVar1 = (typeof(Transform)._2).typeHierarchyDepth;
					if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(Transform))) {
						throw new InvalidCastException();
					}
					pUVar15 = (Object)__this_00.GetComponent<RectMask2D>();
					bVar7 = (pUVar15 == null);
					pIVar13 = pIStack_78;
					if (bVar7) {
						pUVar16 = __this_00.gameObject;
						if (pUVar16 == null) {
							throw new NullReferenceException();
						}
						pUVar16.AddComponent<RectMask2D>();
						pIVar13 = pIStack_78;
					}
				} while(true);
			}
			goto label_05e8fc55;
		}
		goto label_05e8f7be;
		while (true) {
			lVar21 = lVar21 + 0x10;
			if (!(uVar20 * 0x10 != lVar21)) break;
	label_05e8f770: ;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar21) == typeof(IDisposable)) {
				pVVar14 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar21);
				goto label_05e8f79d;
			}
		}
	label_05e8f77f: ;
	label_05e8f79d: ;
		pIVar13.Dispose();
	label_05e8f7be: ;
		x = (AottgGameCreateChoiceHover)Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__FindImage(this);
		pUVar15 = (Object)this.gameObject;
		uVar22 = CONCAT44(uStack_68._4_4_, (undefined4)uStack_68);
		uVar6 = CONCAT44(uStack_58._4_4_, (undefined4)uStack_58);
		if (pUVar15 != null) {
			pSVar12 = pUVar15.name;
			bVar7 = (pSVar12 == "game-create-root-favorites-tile");
			pUVar15 = (Object)this.gameObject;
			uVar22 = CONCAT44(uStack_68._4_4_, (undefined4)uStack_68);
			uVar6 = CONCAT44(uStack_58._4_4_, (undefined4)uStack_58);
			if (pUVar15 != null) {
				pSVar12 = pUVar15.name;
				bVar9 = (pSVar12 == "game-create-root-sandbox-tile");
				pUVar15 = (Object)this.gameObject;
				uVar22 = CONCAT44(uStack_68._4_4_, (undefined4)uStack_68);
				uVar6 = CONCAT44(uStack_58._4_4_, (undefined4)uStack_58);
				if (pUVar15 != null) {
					pSVar12 = pUVar15.name;
					uVar22 = CONCAT44(uStack_68._4_4_, (undefined4)uStack_68);
					uVar6 = CONCAT44(uStack_58._4_4_, (undefined4)uStack_58);
					if (pSVar12 != null) {
						bVar10 = pSVar12.StartsWith("game-create-category-");
						if ((bVar10 || bVar7) || bVar9) {
							pUVar16 = this.gameObject;
							uVar22 = CONCAT44(uStack_68._4_4_, (undefined4)uStack_68);
							uVar6 = CONCAT44(uStack_58._4_4_, (undefined4)uStack_58);
							if (pUVar16 == null) goto label_05e8fc55;
							pGVar17 = (AottgGameCreateCardPreview)pUVar16.AddComponent<AottgGameCreateCardPreview>();
							this._cardPreview = pGVar17;
							pGVar17 = this._cardPreview;
							uVar22 = CONCAT44(uStack_68._4_4_, (undefined4)uStack_68);
							uVar6 = CONCAT44(uStack_58._4_4_, (undefined4)uStack_58);
							if (pGVar17 == null) goto label_05e8fc55;
							pGVar17.Setup(x, bVar7, bVar9);
							pUVar15 = (Object)this.GetComponentInChildren<Button>(true);
							bVar7 = (pUVar15 != null);
							if (bVar7) {
								uVar22 = uStack_68;
								uVar6 = uStack_58;
								if (pUVar15 == null) goto label_05e8fc55;
								pUVar16 = pUVar15.gameObject;
								uVar22 = CONCAT44(uStack_68._4_4_, (undefined4)uStack_68);
								uVar6 = CONCAT44(uStack_58._4_4_, (undefined4)uStack_58);
								if (pUVar16 == null) goto label_05e8fc55;
								pIVar13 = pUVar16.AddComponent<AottgGameCreateChoiceHover.AottgGameCreateChoiceFocus>();
								uVar22 = CONCAT44(uStack_68._4_4_, (undefined4)uStack_68);
								uVar6 = CONCAT44(uStack_58._4_4_, (undefined4)uStack_58);
								if (pIVar13 == null) goto label_05e8fc55;
								pIVar13[2].klass = (Il2CppClass)this;
							}
						}
						else {
							bVar7 = ((Object)x != null);
							if (bVar7) {
								uVar22 = uStack_68;
								uVar6 = uStack_58;
								if (x == null) goto label_05e8fc55;
								UnityEngine_UI_Image__set_preserveAspect();
								pGVar18 = (GisketchLogoMotionBlur)x.GetComponent<GisketchLogoMotionBlur>();
								if (pGVar18 == null) {
									pUVar16 = x.gameObject;
									uVar22 = CONCAT44(uStack_68._4_4_, (undefined4)uStack_68);
									uVar6 = CONCAT44(uStack_58._4_4_, (undefined4)uStack_58);
									if (pUVar16 == null) goto label_05e8fc55;
									pGVar18 = (GisketchLogoMotionBlur)pUVar16.AddComponent<GisketchLogoMotionBlur>();
								}
								targetAddress = &this._blur;
								this._blur = pGVar18;
								uVar22 = CONCAT44(uStack_68._4_4_, (undefined4)uStack_68);
								uVar6 = CONCAT44(uStack_58._4_4_, (undefined4)uStack_58);
								if (this._blur == null) goto label_05e8fc55;
								Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__Setup();
								if (this._mutedBackground != false) {
									uStack_58 = (*((Il2CppClass)x.klass).vtable[22].methodPtr)(x,((Il2CppClass)x.klass).vtable[22].method);
									uStack_68 = (*((Il2CppClass)x.klass).vtable[22].methodPtr)(x,((Il2CppClass)x.klass).vtable[22].method);
									(*((Il2CppClass)x.klass).vtable[22].methodPtr)(x,((Il2CppClass)x.klass).vtable[22].method);
									(**(code*)&((Il2CppClass)x.klass).vtable[23].methodPtr)((undefined4)uStack_58,in_XMM1_Da,x);
									pGVar18 = *targetAddress;
									uVar22 = uStack_68;
									uVar6 = uStack_58;
									if (pGVar18 == null) goto label_05e8fc55;
									pGVar18.SetBlur(3.0);
								}
							}
						}
						pUVar19 = this.CreateHoverRing();
						this._hoverRing = pUVar19;
						pUVar15 = (Object)Gisketch_Aottg2UI_Game_AottgGameCreateChoiceHover__FindImage(this);
						bVar7 = (pUVar15 != null);
						if (bVar7) {
							bVar7 = ((Object)x != null);
							if (bVar7) {
								uVar22 = uStack_68;
								uVar6 = uStack_58;
								if (pUVar15 == null) goto label_05e8fc55;
								pUVar4 = pUVar15.klass;
								uVar22._0_2_ = ((Il2CppClass)pUVar4).vtable[22].method;
								uVar22._2_2_ = pUVar4[1]._2.vtable_count;
								uVar22._4_2_ = pUVar4[1]._2.interfaces_count;
								uVar22._6_2_ = pUVar4[1]._2.interface_offsets_count;
								uVar22 = (**(code*)&((Il2CppClass)pUVar4).vtable[22].methodPtr)(pUVar15,uVar22);
								pUVar4 = pUVar15.klass;
								uVar6._0_2_ = ((Il2CppClass)pUVar4).vtable[22].method;
								uVar6._2_2_ = pUVar4[1]._2.vtable_count;
								uVar6._4_2_ = pUVar4[1]._2.interfaces_count;
								uVar6._6_2_ = pUVar4[1]._2.interface_offsets_count;
								uStack_58 = uVar22;
								uVar22 = (**(code*)&((Il2CppClass)pUVar4).vtable[22].methodPtr)(pUVar15,uVar6);
								pUVar4 = pUVar15.klass;
								uVar5._0_2_ = ((Il2CppClass)pUVar4).vtable[22].method;
								uVar5._2_2_ = pUVar4[1]._2.vtable_count;
								uVar5._4_2_ = pUVar4[1]._2.interfaces_count;
								uVar5._6_2_ = pUVar4[1]._2.interface_offsets_count;
								uStack_68 = uVar22;
								(**(code*)&((Il2CppClass)pUVar4).vtable[22].methodPtr)(pUVar15,uVar5);
								(**(code*)&((Il2CppClass)pUVar15.klass).vtable[23].methodPtr)((undefined4)uStack_58,in_XMM1_Da,pUVar15,((Il2CppClass)pUVar15.klass).vtable[23].method );
							}
						}
						pSVar12 = String.Concat(this._labelId, "-title");
						__this_01 = this.FindText(pSVar12);
						bVar7 = ((Object)__this_01 != null);
						if ((bVar7) && (this._framed != false)) {
							uVar22 = uStack_68;
							uVar6 = uStack_58;
							if (__this_01 == null) goto label_05e8fc55;
							__this_01.fontSize = 22.0;
							__this_01.textWrappingMode = 1;
							__this_01.overflowMode = 0;
						}
						return;
					}
				}
			}
		}
	label_05e8fc55: ;
		uStack_68 = uVar22;
		uStack_58 = uVar6;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000CB0")]
	[Address(RVA = "0x5D92AF0", Offset = "0x5D91AF0", VA = "0x5D92AF0", Slot = "4")]
	public void OnPointerEnter(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceHover.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$OnPointerEnter): clean
		AottgGameCreateCardPreview pGVar1;
		bool bVar2;

		this._hovered = true;
		this.SetHovered(true);
		this.SetText("game-create-choice-detail-title", this._title);
		this.SetText("game-create-choice-detail-description", this._description);
		pGVar1 = this._cardPreview;
		bVar2 = ((Object)pGVar1 != null);
		if (bVar2) {
			pGVar1 = this._cardPreview;
			if (pGVar1 == null) {
				throw new NullReferenceException();
			}
			pGVar1.SetPointer(true, eventData);
			return;
		}
		return;
	}

	[Token(Token = "0x6000CB1")]
	[Address(RVA = "0x5D92C40", Offset = "0x5D91C40", VA = "0x5D92C40", Slot = "6")]
	public void OnPointerMove(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceHover.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$OnPointerMove): clean
		AottgGameCreateCardPreview pGVar1;
		bool bVar2;

		pGVar1 = this._cardPreview;
		bVar2 = ((Object)pGVar1 != null);
		if (bVar2) {
			pGVar1 = this._cardPreview;
			if (pGVar1 == null) {
				throw new NullReferenceException();
			}
			pGVar1.MovePointer(eventData);
			return;
		}
		return;
	}

	[Token(Token = "0x6000CB2")]
	[Address(RVA = "0x5D92CC0", Offset = "0x5D91CC0", VA = "0x5D92CC0", Slot = "5")]
	public void OnPointerExit(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceHover.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$OnPointerExit): clean
		AottgGameCreateCardPreview pGVar1;
		bool bVar2;

		this._hovered = false;
		this.SetHovered(this._selected);
		pGVar1 = this._cardPreview;
		bVar2 = ((Object)pGVar1 != null);
		if (bVar2) {
			pGVar1 = this._cardPreview;
			if (pGVar1 == null) {
				throw new NullReferenceException();
			}
			pGVar1.SetPointer(false, eventData);
			return;
		}
		return;
	}

	[Token(Token = "0x6000CB3")]
	[Address(RVA = "0x5D92E60", Offset = "0x5D91E60", VA = "0x5D92E60", Slot = "7")]
	public void OnSelect(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceHover.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$OnSelect): clean


		this._selected = true;
		this.SetHovered(true);
		this.SetText("game-create-choice-detail-title", this._title);
		this.SetText("game-create-choice-detail-description", this._description);
		return;
	}

	[Token(Token = "0x6000CB4")]
	[Address(RVA = "0x5D92ED0", Offset = "0x5D91ED0", VA = "0x5D92ED0", Slot = "8")]
	public void OnDeselect(BaseEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceHover.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$OnDeselect): clean
		this._selected = false;
		this.SetHovered(this._hovered);
		return;
	}

	[Token(Token = "0x6000CB5")]
	[Address(RVA = "0x5D92EE0", Offset = "0x5D91EE0", VA = "0x5D92EE0")]
	private void OnDisable()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceHover.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$OnDisable): clean


		this._hovered = false;
		this._selected = false;
		this.SetHovered(false);
		return;
	}

	[Token(Token = "0x6000CB6")]
	[Address(RVA = "0x5D92BD0", Offset = "0x5D91BD0", VA = "0x5D92BD0")]
	private void Show()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceHover.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$Show): clean


		this.SetHovered(true);
		this.SetText("game-create-choice-detail-title", this._title);
		this.SetText("game-create-choice-detail-description", this._description);
		return;
	}

	[Token(Token = "0x6000CB7")]
	[Address(RVA = "0x5D92D50", Offset = "0x5D91D50", VA = "0x5D92D50")]
	private void SetHovered(bool hovered)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceHover.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$SetHovered): 1 lines keep C-only constructs
		Image pUVar1;
		GisketchLogoMotionBlur pGVar2;
		bool bVar3;
		float value;
		Color UVar4;

		pUVar1 = this._hoverRing;
		bVar3 = ((Object)pUVar1 != null);
		if (bVar3) {
			if (hovered) {
				pUVar1 = this._hoverRing;
				UVar4 = AottgGameCreateMapHover.OutlineColor((Component)pUVar1);
				if (pUVar1 == null) goto label_05e92e5a;
				pUVar1.set_color(UVar4);
			}
			pUVar1 = this._hoverRing;
			if (pUVar1 == null) goto label_05e92e5a;
			pUVar1.enabled = hovered;
		}
		pGVar2 = this._blur;
		bVar3 = ((Object)pGVar2 != null);
		if (!bVar3) {
			return;
		}
		pGVar2 = this._blur;
		if (pGVar2 != null) {
			bVar3 = this._mutedBackground == false;
			value = 0.0;
			if (!bVar3) {
				value = 3.0;
			}
			if (hovered) {
				value = *(float)(&g_data_0100ad58 + (ulong)bVar3 * 4);
			}
			pGVar2.SetBlur(value);
			return;
		}
	label_05e92e5a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000CB8")]
	[Address(RVA = "0x5D92EF0", Offset = "0x5D91EF0", VA = "0x5D92EF0")]
	private void SetText(string objectName, string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceHover.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$SetText): clean
		TMP_Text __this_00;
		bool bVar1;
		uint uVar2;
		Transform pUVar3;
		Object[] pSVar4;
		Object __this_01;
		String a;
		uint uVar5;

		pUVar3 = this.transform;
		if (pUVar3 != null) {
			pUVar3 = pUVar3.root;
			if (pUVar3 != null) {
				pSVar4 = pUVar3.GetComponentsInChildren<TMP_Text>(true);
				if (pSVar4 != null) {
					uVar2 = (uint)pSVar4.Length;
					if (0 < (int)uVar2) {
						uVar5 = 0;
						do {
							if (uVar2 <= uVar5) {
								throw new IndexOutOfRangeException();
							}
							__this_00 = (TMP_Text)pSVar4[(int)uVar5];
							if (__this_00 == null) goto label_05e92fd6;
							__this_01 = (Object)__this_00.gameObject;
							if (__this_01 == null) goto label_05e92fd6;
							a = __this_01.name;
							bVar1 = (a == objectName);
							if (bVar1) {
								__this_00.SetText(value);
								return;
							}
							uVar5 = uVar5 + 1;
							uVar2 = (uint)pSVar4.Length;
						} while ((int)uVar5 < (int)uVar2);
					}
					return;
				}
			}
		}
	label_05e92fd6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000CB9")]
	[Address(RVA = "0x5D925C0", Offset = "0x5D915C0", VA = "0x5D925C0")]
	private Image CreateHoverRing()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceHover.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$CreateHoverRing): 6 lines keep C-only constructs
		Il2CppType handle;
		Object __this_00;
		String pSVar2;
		Type[] components;
		Type pSVar3;
		object pIVar4;
		AottgGameCreateChoiceFrame* method_00;
		RectTransform __this_01;
		Transform parent;
		LayoutElement pUVar5;
		Image __this_02;
		Sprite value;

		__this_00 = (Object)this.gameObject;
		if (__this_00 == null) {
	label_05e929e4: ;
			throw new NullReferenceException();
		}
		pSVar2 = __this_00.name;
		pSVar2 = String.Concat(pSVar2, "-hover-ring");
		components = (Type[])new Type[3];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) goto label_05e929e4;
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((components.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05e929ee;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar3;
			pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
			if (pSVar3 != null) {
				pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((components.obj).klass)._1).element_class);
				if (pIVar4 == null) goto label_05e929ee;
			}
			if ((components.Length & 0xfffffffe) != 0) {
				components[1] = pSVar3;
				pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_LayoutElement);
				if (pSVar3 != null) {
					pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((components.obj).klass)._1).element_class) ;
					if (pIVar4 == null) {
	label_05e929ee: ;
						pIVar4 = new ArrayTypeMismatchException();
						throw pIVar4;
					}
				}
				if (2 < (uint)components.Length) {
					components[2] = pSVar3;
					method_00 = new GameObject(pSVar2, components);
					if ((MethodInfo)method_00 != null) {
						__this_01 = (RectTransform)method_00.transform;
						if (__this_01 == null) {
							this.transform;
							throw new NullReferenceException();
						}
						if (__this_01.klass != typeof(RectTransform)) {
							throw new InvalidCastException();
						}
						parent = this.transform;
						__this_01.SetParent(parent, false);
						__this_01.anchorMin = (Vector2)(Vector2.zeroVector);
						__this_01.anchorMax = (Vector2)(Vector2.oneVector);
						__this_01.offsetMin = (Vector2)(Vector2.zeroVector);
						__this_01.offsetMax = (Vector2)(Vector2.zeroVector);
						pUVar5 = method_00.GetComponent<LayoutElement>();
						if (pUVar5 != null) {
							pUVar5.set_ignoreLayout(true);
							__this_02 = method_00.GetComponent<Image>() ;
							if (g_data_075488b6 == false) {
								method_00 = &typeof(AottgGameCreateChoiceFrame);
								g_data_075488b6 = true;
							}
							value = AottgGameCreateChoiceFrame._ringSprite;
							if (value == null) {
								value = AottgGameCreateChoiceFrame.CreateSprite(2.0);
								AottgGameCreateChoiceFrame._ringSprite = value;
							}
							if (__this_02 != null) {
								__this_02.sprite = value;
								__this_02.type = 1;
								__this_02.set_raycastTarget(false);
								__this_02.enabled = false ;
								return __this_02;
							}
						}
					}
					goto label_05e929e4;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000CBA")]
	[Address(RVA = "0x5D924F0", Offset = "0x5D914F0", VA = "0x5D924F0")]
	private Image FindImage(string objectName)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceHover.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$FindImage): clean
		Image __this_00;
		bool bVar1;
		uint uVar2;
		Object[] pSVar3;
		Object __this_01;
		String a;
		uint uVar4;

		bVar1 = String.IsNullOrEmpty(objectName);
		if (!bVar1) {
			pSVar3 = this.GetComponentsInChildren<Image>(true);
			if (pSVar3 == null) {
	label_05e925b5: ;
				throw new NullReferenceException();
			}
			uVar2 = (uint)pSVar3.Length;
			if (0 < (int)uVar2) {
				uVar4 = 0;
				do {
					if (uVar2 <= uVar4) {
						throw new IndexOutOfRangeException();
					}
					__this_00 = (Image)pSVar3[(int)uVar4];
					if ((__this_00 == null) ||(__this_01 = (Object)__this_00.gameObject, __this_01 == null)) goto label_05e925b5;
					a = __this_01.name;
					bVar1 = (a == objectName);
					if (bVar1) {
						return __this_00;
					}
					uVar4 = uVar4 + 1;
					uVar2 = (uint)pSVar3.Length;
				} while ((int)uVar4 < (int)uVar2);
			}
		}
		return null;
	}

	[Token(Token = "0x6000CBB")]
	[Address(RVA = "0x5D92A20", Offset = "0x5D91A20", VA = "0x5D92A20")]
	private TMP_Text FindText(string objectName)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceHover.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$FindText): clean
		TMP_Text __this_00;
		bool bVar1;
		uint uVar2;
		Object[] pSVar3;
		Object __this_01;
		String a;
		uint uVar4;

		bVar1 = String.IsNullOrEmpty(objectName);
		if (!bVar1) {
			pSVar3 = this.GetComponentsInChildren<TMP_Text>(true);
			if (pSVar3 == null) {
	label_05e92ae5: ;
				throw new NullReferenceException();
			}
			uVar2 = (uint)pSVar3.Length;
			if (0 < (int)uVar2) {
				uVar4 = 0;
				do {
					if (uVar2 <= uVar4) {
						throw new IndexOutOfRangeException();
					}
					__this_00 = (TMP_Text)pSVar3[(int)uVar4];
					if ((__this_00 == null) ||(__this_01 = (Object)__this_00.gameObject, __this_01 == null)) goto label_05e92ae5;
					a = __this_01.name;
					bVar1 = (a == objectName);
					if (bVar1) {
						return __this_00;
					}
					uVar4 = uVar4 + 1;
					uVar2 = (uint)pSVar3.Length;
				} while ((int)uVar4 < (int)uVar2);
			}
		}
		return null;
	}

	[Token(Token = "0x6000CBC")]
	[Address(RVA = "0x5D93130", Offset = "0x5D92130", VA = "0x5D93130")]
	public AottgGameCreateChoiceHover()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceHover.c (Gisketch.Aottg2UI.Game.AottgGameCreateChoiceHover$$.ctor): clean
		base();
		return;
	}
}
