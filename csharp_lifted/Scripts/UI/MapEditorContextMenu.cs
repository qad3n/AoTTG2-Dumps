// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorContextMenu
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/MapEditorContextMenu.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200089E")]
internal class MapEditorContextMenu
{
	[Token(Token = "0x200089F")]
	internal struct Item
	{
		[Token(Token = "0x4002B80")]
		[FieldOffset(Offset = "0x0")]
		public string Label;

		[Token(Token = "0x4002B81")]
		[FieldOffset(Offset = "0x8")]
		public Action Action;

		[Token(Token = "0x4002B82")]
		[FieldOffset(Offset = "0x10")]
		public bool Enabled;

		[Token(Token = "0x4002B83")]
		[FieldOffset(Offset = "0x11")]
		public bool SeparatorBefore;

		[Token(Token = "0x6005227")]
		[Address(RVA = "0x5C6EA30", Offset = "0x5C6DA30", VA = "0x5C6EA30")]
		public Item(string label, Action action, bool enabled = true, bool separatorBefore = false)
		{
			// Lifted from source/cpp/UI/MapEditorContextMenu.c (UI.MapEditorContextMenu.Item$$.ctor): clean
			this.Label = label;
			this.Action = action;
			this.Enabled = enabled;
			this.SeparatorBefore = separatorBefore;
			return;
		}
	}

	[Token(Token = "0x4002B7B")]
	[FieldOffset(Offset = "0x10")]
	private readonly Transform _parent;

	[Token(Token = "0x4002B7C")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _themePanel;

	[Token(Token = "0x4002B7D")]
	[FieldOffset(Offset = "0x20")]
	private GameObject _root;

	[Token(Token = "0x4002B7E")]
	[FieldOffset(Offset = "0x28")]
	private RectTransform _menuRect;

	[Token(Token = "0x4002B7F")]
	[FieldOffset(Offset = "0x30")]
	private VerticalLayoutGroup _layout;

	[Token(Token = "0x17000E72")]
	public bool IsOpen
	{
		[Token(Token = "0x600521C")]
		[Address(RVA = "0x5C6CE80", Offset = "0x5C6BE80", VA = "0x5C6CE80")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorContextMenu.c (UI.MapEditorContextMenu$$get_IsOpen): clean
			Object x;
			GameObject __this_00;
			bool bVar1;

			x = (Object)this._root;
			bVar1 = (x != null);
			if (bVar1) {
				__this_00 = this._root;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				bVar1 = __this_00.activeSelf;
				return bVar1;
			}
			return false;
		}
	}

	[Token(Token = "0x17000E73")]
	public RectTransform MenuRect
	{
		[Token(Token = "0x600521D")]
		[Address(RVA = "0x5C6CF00", Offset = "0x5C6BF00", VA = "0x5C6CF00")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorContextMenu.c (UI.MapEditorContextMenu$$get_MenuRect): clean
			return this._menuRect;
		}
	}

	[Token(Token = "0x600521E")]
	[Address(RVA = "0x5C6CF10", Offset = "0x5C6BF10", VA = "0x5C6CF10")]
	public MapEditorContextMenu(Transform parent, string themePanel)
	{
		// Lifted from source/cpp/UI/MapEditorContextMenu.c (UI.MapEditorContextMenu$$.ctor): clean
		base();
		this._parent = parent;
		this._themePanel = themePanel;
		return;
	}

	[Token(Token = "0x600521F")]
	[Address(RVA = "0x5C6CF50", Offset = "0x5C6BF50", VA = "0x5C6CF50")]
	public void Show(PointerEventData eventData, IList<Item> items)
	{
		// Lifted from source/cpp/UI/MapEditorContextMenu.c (UI.MapEditorContextMenu$$Show): 49 lines keep C-only constructs
		VerticalLayoutGroup pUVar1;
		RectOffset pUVar2;
		Il2CppMethodPointer pIVar5;
		RectTransform pUVar6;
		GameObject pUVar7;
		MapEditorContextMenu.Item item;
		Vector2 UVar8;
		byte bVar9;
		ushort uVar10;
		bool bVar11;
		int iVar12;
		int iVar13;
		VirtualInvokeData pVVar14;
		Transform pUVar15;
		Canvas __this_00;
		int iVar17;
		MethodInfo pMVar18;
		long lVar19;
		uint uVar20;
		float fVar21;
		Vector2 value;
		uint extraout_XMM0_Db;
		uint uVar25;
		uint extraout_XMM0_Dc;
		uint uVar26;
		uint extraout_XMM0_Dd;
		uint uVar27;
		byte[] auVar22 = new byte[16];
		byte[] auVar24 = new byte[16];
		byte[] auVar23 = new byte[16];
		uint uVar28;
		uint uVar29;
		float fVar30;
		float fVar31;
		byte[] auVar32 = new byte[16];
		byte[] auVar33 = new byte[16];
		Rect UVar34;
		MethodInfo local_e0;
		byte[] local_d8 = new byte[16];
		ulong local_c8;
		ulong uStack_c0;
		byte local_b8;
		Vector2 local_a8;
		ulong uStack_a0;
		MethodInfo* local_78;
		ulong local_70;
		ulong uStack_68;
		byte local_60;
		byte local_5f;
		uint local_5e;
		ushort local_5a;
		byte[] local_58 = new byte[16];
		byte[] local_48 = new byte[16];

		local_e0 = null;
		local_c8 = 0;
		uStack_c0 = 0;
		local_b8 = 0;
		this.EnsureCreated();
		this.ClearItems();
		pUVar1 = this._layout;
		if ((pUVar1 != null) &&(pUVar2 = pUVar1.m_Padding, pUVar2 != null)) {
			iVar12 = pUVar2.top;
			pUVar1 = this._layout;
			if ((pUVar1 != null) &&((pUVar2 = pUVar1.m_Padding, local_a8 = (Vector2)eventData, pUVar2 != null &&(iVar13 = pUVar2.bottom, items != null)))) {
				local_d8 = ZEXT416((uint)(float)(iVar13 + iVar12));
				local_e0 = (MethodInfo)items.Dispose();
				local_78 = &local_e0;
				if (local_e0 != null) {
					iVar17 = 0;
					do {
						pMVar18 = local_e0;
						pIVar5 = local_e0.methodPointer;
						if ((ulong)*(ushort)(pIVar5 + 0x12e) != 0) {
							lVar19 = 0;
							do {
								if (*(IEnumerator*)(*(long)(pIVar5 + 0xb0) + lVar19) == typeof(IEnumerator)) {
									pVVar14 = (VirtualInvokeData)(pIVar5 + (long)*(int)(*(long)(pIVar5 + 0xb0) + 8 + lVar19) * 0x10 + 0x138);
									goto label_05d6d183;
								}
								lVar19 = lVar19 + 0x10;
							} while ((ulong)*(ushort)(pIVar5 + 0x12e) * 0x10 != lVar19);
						}
	label_05d6d183: ;
						bVar11 = pMVar18.Dispose();
						pMVar18 = local_e0;
						if (!bVar11) {
							if (local_e0 == null) goto label_05d6d356;
							pIVar5 = local_e0.methodPointer;
							if ((ulong)*(ushort)(pIVar5 + 0x12e) == 0) goto label_05d6d32f;
							lVar19 = 0;
							goto label_05d6d320;
						}
						if (local_e0 == null) {
							throw new NullReferenceException();
						}
						pIVar5 = local_e0.methodPointer;
						if ((ulong)*(ushort)(pIVar5 + 0x12e) != 0) {
							lVar19 = 0;
							do {
								if (*(IEnumerator<MapEditorContextMenu.Item>*)(*(long)(pIVar5 + 0xb0) + lVar19) == typeof(IEnumerator<MapEditorContextMenu.Item>)) {
									pVVar14 = (VirtualInvokeData)(pIVar5 + (long)*(int)(*(long)(pIVar5 + 0xb0) + 8 + lVar19) * 0x10 + 0x138);
									goto label_05d6d202;
								}
								lVar19 = lVar19 + 0x10;
							} while ((ulong)*(ushort)(pIVar5 + 0x12e) * 0x10 != lVar19);
						}
	label_05d6d202: ;
						local_70.Dispose(pMVar18);
						uVar10 = local_5a;
						uVar28 = local_5e;
						bVar9 = local_5f;
						local_b8 = local_60;
						local_c8 = local_70;
						uStack_c0 = uStack_68;
						if ((local_5f & 1) != 0) {
							this.CreateSeparator();
							local_d8._0_4_ = (float)local_d8._0_4_ + 10.0;
							iVar17 = iVar17 + 1;
						}
						item.SeparatorBefore = (bool)bVar9;
						item.Enabled = (bool)local_b8;
						item._18_4_ = uVar28;
						item._22_2_ = uVar10;
						item.Action = (Action)uStack_c0;
						item.Label = (String)local_c8;
						this.CreateButton(item);
						local_d8._0_4_ = (float)local_d8._0_4_ + 28.0;
						iVar17 = iVar17 + 1;
					} while (local_e0 != null);
				}
				throw new NullReferenceException();
			}
		}
		goto label_05d6d5ae;
		while (true) {
			lVar19 = lVar19 + 0x10;
			if (!((ulong)*(ushort)(pIVar5 + 0x12e) * 0x10 != lVar19)) break;
	label_05d6d320: ;
			if (*(IDisposable*)(*(long)(pIVar5 + 0xb0) + lVar19) == typeof(IDisposable)) {
				pVVar14 = (VirtualInvokeData)(pIVar5 + (long)*(int)(*(long)(pIVar5 + 0xb0) + 8 + lVar19) * 0x10 + 0x138);
				goto label_05d6d34d;
			}
		}
	label_05d6d32f: ;
	label_05d6d34d: ;
		pMVar18.Dispose();
	label_05d6d356: ;
		pUVar1 = this._layout;
		if ((pUVar1 != null) &&(pUVar6 = this._menuRect, pUVar6 != null)) {
			iVar17 = iVar17 + -1;
			if (iVar17 < 1) {
				iVar17 = 0;
			}
			value.y = (float)local_d8._0_4_ + (float)iVar17 * pUVar1.m_Spacing;
			value.x = 210.0;
			uVar28 = local_d8._8_4_;
			uVar29 = local_d8._12_4_;
			pUVar6.sizeDelta = value;
			pUVar6 = this._menuRect;
			LayoutRebuilder.ForceRebuildLayoutImmediate(pUVar6);
			pUVar7 = this._root;
			if ((pUVar7 != null) &&(pUVar15 = pUVar7.transform, pUVar15 != null)) {
				pUVar15.SetAsLastSibling();
				pUVar7 = this._root;
				if (pUVar7 != null) {
					pUVar7.SetActive(true);
					pUVar15 = this._parent;
					if (pUVar15 != null) {
						__this_00 = pUVar15.GetComponent<Canvas>();
						bVar11 = ((Object)__this_00 != null) ;
						if (bVar11) {
							if (__this_00 == null) goto label_05d6d5ae;
							fVar21 = __this_00.scaleFactor;
							uVar25 = extraout_XMM0_Db;
							uVar26 = extraout_XMM0_Dc;
							uVar27 = extraout_XMM0_Dd;
						}
						else {
							fVar21 = 1.0;
							uVar25 = 0;
							uVar26 = 0;
							uVar27 = 0;
						}
						UVar8 = local_a8;
						pUVar6 = (RectTransform)this._parent;
						if (pUVar6 != null) {
							local_d8._4_4_ = uVar25;
							local_d8._0_4_ = fVar21;
							local_d8._8_4_ = uVar26;
							local_d8._12_4_ = uVar27;
							if (pUVar6.klass != typeof(RectTransform)) {
								throw new InvalidCastException();
							}
							UVar34 = pUVar6.rect;
							local_48._8_4_ = uVar28;
							local_48._0_8_ = UVar34._8_8_;
							local_48._12_4_ = uVar29;
							if ((UVar8 != (Vector2)0x0) &&(pUVar6 = this._menuRect, pUVar6 != null)) {
								local_a8 = *(Vector2)((long)UVar8 + 0x144);
								uStack_a0 = 0;
								UVar34 = pUVar6.rect;
								local_58._8_4_ = uVar28;
								local_58._0_8_ = UVar34._8_8_;
								local_58._12_4_ = uVar29;
								pUVar6 = this._menuRect;
								if (pUVar6 != null) {
									UVar34 = pUVar6.rect;
									pUVar6 = this._menuRect;
									if (pUVar6 != null) {
										fVar30 = (float)(~-(uint)(0.0 < (float)local_d8._0_4_) & 0x3f800000 | local_d8._0_4_ & -(uint)(0.0 < (float)local_d8._0_4_));
										auVar33._8_8_ = uStack_a0;
										auVar33._0_4_ = local_a8.x;
										auVar33._4_4_ = local_a8.y;
										fVar21 = local_a8.y;
										fVar31 = fVar21 / fVar30;
										auVar22._0_4_ = local_a8.x / fVar30;
										auVar22._4_12_ = auVar33._4_12_;
										auVar24._0_8_ = auVar22._0_8_;
										auVar24._8_4_ = fVar21;
										auVar24._12_4_ = fVar21;
										auVar23._8_8_ = auVar24._8_8_;
										auVar23._4_4_ = fVar31;
										auVar23._0_4_ = auVar22._0_4_;
										fVar30 = local_48._0_4_ - (float)local_58._0_4_;
										fVar21 = 0.0;
										if (0.0 <= fVar30) {
											fVar21 = fVar30;
										}
										auVar32._4_12_ = local_48._4_12_;
										auVar32._0_4_ = fVar21;
										auVar33 = minps(auVar32, auVar23);
										uVar20 = -(uint)(UVar34.m_Height <= fVar31);
										pUVar6.anchoredPosition = (Vector2)((ulong)(~uVar20 & (uint)UVar34.m_Height) << 0x20 | CONCAT44(auVar33._4_4_ & uVar20, auVar33._0_4_ & -(uint)(0.0 <= auVar22._0_4_)));
										return;
									}
								}
							}
						}
					}
				}
			}
		}
	label_05d6d5ae: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005220")]
	[Address(RVA = "0x5C6E910", Offset = "0x5C6D910", VA = "0x5C6E910")]
	public void Hide()
	{
		// Lifted from source/cpp/UI/MapEditorContextMenu.c (UI.MapEditorContextMenu$$Hide): clean
		Object x;
		GameObject __this_00;
		bool bVar1;

		x = (Object)this._root;
		bVar1 = (x != null);
		if (bVar1) {
			__this_00 = this._root;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.SetActive(false);
			return;
		}
		return;
	}

	[Token(Token = "0x6005221")]
	[Address(RVA = "0x5C6E990", Offset = "0x5C6D990", VA = "0x5C6E990")]
	public void Destroy()
	{
		// Lifted from source/cpp/UI/MapEditorContextMenu.c (UI.MapEditorContextMenu$$Destroy): clean
		Object pUVar1;
		bool bVar2;

		pUVar1 = (Object)this._root;
		bVar2 = (pUVar1 != null);
		if (bVar2) {
			pUVar1 = (Object)this._root;
			Object.Destroy(pUVar1);
			return;
		}
		return;
	}

	[Token(Token = "0x6005222")]
	[Address(RVA = "0x5C6D620", Offset = "0x5C6C620", VA = "0x5C6D620")]
	private void EnsureCreated()
	{
		// Lifted from source/cpp/UI/MapEditorContextMenu.c (UI.MapEditorContextMenu$$EnsureCreated): 33 lines keep C-only constructs
		GameObject* targetAddress;
		RectTransform* targetAddress_00;
		VerticalLayoutGroup* targetAddress_01;
		Object x;
		UnityEvent __this_00;
		String panel;
		Il2CppType handle;
		bool bVar1;
		Type[] pSVar2;
		Type pSVar3;
		object pIVar4;
		GameObject pUVar5;
		Transform pUVar6;
		RectTransform pUVar7;
		Image pUVar8;
		Button __this_01;
		UnityAction __this_02;
		Transform parent;
		Outline __this_03;
		VerticalLayoutGroup pUVar9;
		RectOffset __this_04;
		Color UVar10;

		x = (Object)this._root;
		bVar1 = (x != null);
		if (bVar1) {
			return;
		}
		pSVar2 = (Type[])new Type[3];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (pSVar2 == null) goto label_05d6df59;
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05d6df63;
		}
		if ((int)pSVar2.Length == 0) goto label_05d6df5e;
		pSVar2[0] = pSVar3;
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05d6df63;
		}
		if ((pSVar2.Length & 0xfffffffe) == 0) goto label_05d6df5e;
		pSVar2[1] = pSVar3;
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Button);
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05d6df63;
		}
		if ((uint)pSVar2.Length < 3) goto label_05d6df5e;
		targetAddress = &this._root;
		pSVar2[2] = pSVar3;
		pUVar5 = new GameObject("MapEditorContextMenuRoot", pSVar2);
		*targetAddress = pUVar5;
		if (*targetAddress == null) {
	label_05d6df59: ;
			throw new NullReferenceException();
		}
		pUVar6 = (*targetAddress).transform;
		if (pUVar6 == null) goto label_05d6df59;
		pUVar6.SetParent(this._parent, false);
		pUVar5 = this._root;
		if (pUVar5 == null) goto label_05d6df59;
		pUVar7 = pUVar5.GetComponent<RectTransform>();
		if (pUVar7 == null) goto label_05d6df59;
		pUVar7.anchorMin = (Vector2)(Vector2.zeroVector);
		pUVar7.anchorMax = (Vector2)(Vector2.oneVector);
		pUVar7.offsetMin = (Vector2)(Vector2.zeroVector);
		pUVar7.offsetMax = (Vector2)(Vector2.zeroVector);
		if (*targetAddress == null) goto label_05d6df59;
		pUVar8 = (*targetAddress).GetComponent<Image>();
		if (pUVar8 == null) goto label_05d6df59;
		pUVar8.set_color((Color)ZEXT816(0));
		pUVar8.set_raycastTarget(true);
		if (*targetAddress == null) goto label_05d6df59;
		__this_01 = (*targetAddress).GetComponent<Button>();
		if (__this_01 == null) goto label_05d6df59;
		__this_01.transition = 0;
		__this_00 = (UnityEvent)__this_01.m_OnClick;
		__this_02 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorContextMenu_Hide);
		if (__this_00 == null) goto label_05d6df59;
		__this_00.AddListener(__this_02);
		pSVar2 = (Type[])new Type[4];
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_RectTransform);
		if (pSVar2 == null) goto label_05d6df59;
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05d6df63;
		}
		if ((int)pSVar2.Length == 0) goto label_05d6df5e;
		pSVar2[0] = pSVar3;
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05d6df63;
		}
		if ((pSVar2.Length & 0xfffffffe) == 0) goto label_05d6df5e;
		pSVar2[1] = pSVar3;
		pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Outline);
		if (pSVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05d6df63;
		}
		if (2 < (uint)pSVar2.Length) {
			pSVar2[2] = pSVar3;
			pSVar3 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_VerticalLayoutGroup);
			if (pSVar3 != null) {
				pIVar4 = il2cpp_vm_Object_IsInst((object)pSVar3, (((pSVar2.obj).klass)._1).element_class);
				if (pIVar4 == null) {
	label_05d6df63: ;
					pIVar4 = new ArrayTypeMismatchException();
					throw pIVar4;
				}
			}
			if ((pSVar2.Length & 0xfffffffc) != 0) {
				pSVar2[3] = pSVar3;
				pUVar5 = new GameObject("Menu", pSVar2);
				if (pUVar5 != null) {
					pUVar6 = pUVar5.transform;
					if (*targetAddress != null) {
						parent = (*targetAddress).transform;
						if (pUVar6 != null) {
							pUVar6.SetParent(parent, false);
							pUVar7 = pUVar5.GetComponent<RectTransform>();
							targetAddress_00 = &this._menuRect;
							this._menuRect = pUVar7;
							pUVar7 = this._menuRect;
							if (pUVar7 != null) {
								pUVar7.anchorMin = (Vector2)(Vector2.zeroVector);
								pUVar7 = *targetAddress_00;
								if (pUVar7 != null) {
									pUVar7.anchorMax = (Vector2)(Vector2.zeroVector);
									if (*targetAddress_00 != null) {
										(*targetAddress_00).pivot = (Vector2)0x3f80000000000000;
										pUVar8 = pUVar5.GetComponent<Image>();
										panel = this._themePanel;
										UVar10 = UIManager.GetThemeColor(panel, "ContextMenu", "BackgroundColor", "DefaultPanel");
										if (pUVar8 != null) {
											pUVar8.set_color(UVar10);
											__this_03 = pUVar5.GetComponent<Outline>();
											UVar10 = UIManager.GetThemeColor(this._themePanel, "ContextMenu", "LineColor", "DefaultPanel");
											if (__this_03 != null) {
												__this_03.effectColor = UVar10;
												__this_03.effectDistance = (Vector2)0xc000000040000000;
												pUVar9 = pUVar5.GetComponent<VerticalLayoutGroup>();
												targetAddress_01 = &this._layout;
												this._layout = pUVar9;
												pUVar9 = this._layout;
												__this_04 = new RectOffset(10, 10, 10, 10);
												if (pUVar9 != null) {
													pUVar9.padding = __this_04;
													if ((HorizontalOrVerticalLayoutGroup)*targetAddress_01 !=null) {
														(*targetAddress_01).spacing = 2.0;
														if ((HorizontalOrVerticalLayoutGroup)*targetAddress_01 !=null) {
															(*targetAddress_01).childControlWidth = true;
															if ((HorizontalOrVerticalLayoutGroup)*targetAddress_01 !=null) {
																(*targetAddress_01).childControlHeight = true;
																if ((HorizontalOrVerticalLayoutGroup)*targetAddress_01 !=null) {
																	(*targetAddress_01).childForceExpandWidth = true;
																	if ((HorizontalOrVerticalLayoutGroup)*targetAddress_01 !=null) {
																		(*targetAddress_01).childForceExpandHeight = false;
																		if (*targetAddress != null) {
																			(*targetAddress).SetActive(false);
																			return;
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
								}
							}
						}
					}
				}
				goto label_05d6df59;
			}
		}
	label_05d6df5e: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6005223")]
	[Address(RVA = "0x5C6DF80", Offset = "0x5C6CF80", VA = "0x5C6DF80")]
	private void ClearItems()
	{
		// Lifted from source/cpp/UI/MapEditorContextMenu.c (UI.MapEditorContextMenu$$ClearItems): clean
		RectTransform pUVar1;
		int index;
		Transform __this_00;
		Object obj;

		pUVar1 = this._menuRect;
		if (pUVar1 != null) {
			index = pUVar1.childCount;
			while(true) {
				index = index + -1;
				if (index < 0) {
					return;
				}
				pUVar1 = this._menuRect;
				if (((pUVar1 == null) ||(__this_00 = pUVar1.GetChild(index), __this_00 == null)) ||(obj = (Object)__this_00.gameObject, obj == null)) break;
				obj.SetActive(false);
				Object.Destroy(obj);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005224")]
	[Address(RVA = "0x5C6E480", Offset = "0x5C6D480", VA = "0x5C6E480")]
	private void CreateButton(Item item)
	{
		// Lifted from source/cpp/UI/MapEditorContextMenu.c (UI.MapEditorContextMenu$$CreateButton): 4 lines keep C-only constructs
		String pSVar1;
		RectTransform parent;
		Graphic pUVar2;
		ColorBlock value;
		bool bVar3;
		MapEditorContextMenu.c__DisplayClass16_0 __this_00;
		ElementStyle __this_01;
		UnityAction __this_02;
		GameObject __this_03;
		Button __this_04;
		Transform pUVar4;
		Text __this_05;
		Color UVar5;
		Color UVar6;
		Color UVar7;
		float fStack_a4;
		float local_98;

		__this_00 = new MapEditorContextMenu.c__DisplayClass16_0();
		if (__this_00 != null) {
			__this_00.item.Enabled = item.Enabled;
			__this_00.item.SeparatorBefore = item.SeparatorBefore;
			*(undefined6)&__this_00.item.field_0x12 = item._18_6_;
			__this_00.item.Label = item.Label;
			__this_00.item.Action = item.Action;
			__this_00.__4__this = this;
			pSVar1 = this._themePanel;
			parent = this._menuRect;
			__this_01 = new ElementStyle(0x10, 0.0, 20.0, pSVar1);
			pSVar1 = __this_00.item.Label;
			__this_02 = new UnityAction((object)__this_00, (intptr_t)MethodInfo_UI_MapEditorContextMenu_c__DisplayClass16_0_CreateButton_b__0);
			__this_03 = ElementFactory.CreateDefaultButton((Transform)parent, __this_01, pSVar1, 190.0, 28.0, __this_02);
			if (__this_03 != null) {
				__this_04 = __this_03.GetComponent<Button>();
				if (__this_04 != null) {
					__this_04.interactable = __this_00.item.Enabled;
					__this_04.transition = 1;
					pUVar2 = __this_04.m_TargetGraphic;
					bVar3 = ((Object)pUVar2 != null);
					if (bVar3) {
						pUVar2 = __this_04.m_TargetGraphic;
						if (pUVar2 == null) goto label_05d6e909;
						UVar5.b = (float)(int)g_data_01005870;
						UVar5.a = (float)g_data_01005870._4_4_;
						UVar5.r = (float)(int)g_data_01005870;
						UVar5.g = (float)g_data_01005870._4_4_;
						pUVar2.set_color(UVar5);
					}
					pSVar1 = this._themePanel;
					UVar5 = UIManager.GetThemeColor(pSVar1, "DefaultButton", "TextColor", "DefaultPanel");
					UVar5.b = UVar5.b;
					value.m_DisabledColor.a = 0.08;
					value.m_DisabledColor.b = UVar5.b;
					value.m_HighlightedColor.a = 0.14;
					value.m_HighlightedColor.b = UVar5.b;
					value.m_PressedColor.a = 0.22;
					value.m_PressedColor.b = UVar5.b;
					value.m_SelectedColor.a = 0.14;
					value.m_SelectedColor.b = UVar5.b;
					value.m_HighlightedColor.r = UVar5.r;
					value.m_HighlightedColor.g = UVar5.g;
					value.m_NormalColor.r = 0.0;
					value.m_NormalColor.g = 0.0;
					value.m_NormalColor.b = 0.0;
					value.m_NormalColor.a = 0.0;
					value.m_PressedColor.r = UVar5.r;
					value.m_PressedColor.g = UVar5.g;
					value.m_SelectedColor.r = UVar5.r;
					value.m_SelectedColor.g = UVar5.g;
					value.m_DisabledColor.r = UVar5.r;
					value.m_DisabledColor.g = UVar5.g;
					value.m_ColorMultiplier = 1.0;
					value.m_FadeDuration = 0.08;
					__this_04.colors = value;
					pUVar4 = __this_03.transform;
					if (pUVar4 != null) {
						pUVar4 = pUVar4.Find("Text");
						if (pUVar4 != null) {
							__this_05 = pUVar4.GetComponent<Text>();
							if (__this_05 != null) {
								__this_05.alignment = 3;
								if (__this_00.item.Enabled == false) {
									UVar5 = __this_05.get_color();
									UVar6 = __this_05.get_color();
									UVar7 = __this_05.get_color();
									local_98 = UVar5.r;
									fStack_a4 = UVar6.g;
									UVar7.g = fStack_a4;
									UVar7.r = local_98;
									UVar7.a = 0.4;
									__this_05.set_color(UVar7);
									return;
								}
								return;
							}
						}
					}
				}
			}
		}
	label_05d6e909: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005225")]
	[Address(RVA = "0x5C6EA20", Offset = "0x5C6DA20", VA = "0x5C6EA20")]
	private static Color WithAlpha(Color color, float alpha)
	{
		// Lifted from source/cpp/UI/MapEditorContextMenu.c (UI.MapEditorContextMenu$$WithAlpha): 1 lines keep C-only constructs
		Color UVar1;

		UVar1._0_8_ = color._0_8_;
		UVar1.a = alpha;
		UVar1.b = color.b;
		return (Color)UVar1;
	}

	[Token(Token = "0x6005226")]
	[Address(RVA = "0x5C6E040", Offset = "0x5C6D040", VA = "0x5C6E040")]
	private void CreateSeparator()
	{
		// Lifted from source/cpp/UI/MapEditorContextMenu.c (UI.MapEditorContextMenu$$CreateSeparator): 4 lines keep C-only constructs
		String panel;
		Il2CppType handle;
		Type[] pSVar1;
		Type pSVar2;
		object pIVar3;
		GameObject __this_00;
		Transform pUVar4;
		LayoutElement pUVar5;
		GameObject __this_01;
		Transform parent;
		RectTransform __this_02;
		Image pUVar6;
		Color UVar7;

		pSVar1 = (Type[])new Type[2];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (pSVar1 == null) goto label_05d6e466;
		if (pSVar2 != null) {
			pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((pSVar1.obj).klass)._1).element_class);
			if (pIVar3 == null) goto label_05d6e470;
		}
		if ((int)pSVar1.Length == 0) goto label_05d6e46b;
		pSVar1[0] = pSVar2;
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_LayoutElement);
		if (pSVar2 != null) {
			pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((pSVar1.obj).klass)._1).element_class);
			if (pIVar3 == null) goto label_05d6e470;
		}
		if ((pSVar1.Length & 0xfffffffe) == 0) goto label_05d6e46b;
		pSVar1[1] = pSVar2;
		__this_00 = new GameObject("Separator", pSVar1);
		if (__this_00 == null) {
	label_05d6e466: ;
			throw new NullReferenceException();
		}
		pUVar4 = __this_00.transform;
		if (pUVar4 == null) goto label_05d6e466;
		pUVar4.SetParent((Transform)this._menuRect, false);
		pUVar5 = __this_00.GetComponent<LayoutElement>();
		if (pUVar5 == null) goto label_05d6e466;
		pUVar5.set_preferredHeight(10.0);
		pSVar1 = (Type[])new Type[2];
		pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_RectTransform);
		if (pSVar1 == null) goto label_05d6e466;
		if (pSVar2 != null) {
			pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((pSVar1.obj).klass)._1).element_class);
			if (pIVar3 == null) goto label_05d6e470;
		}
		if ((int)pSVar1.Length != 0) {
			pSVar1[0] = pSVar2;
			pSVar2 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
			if (pSVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst((object)pSVar2, (((pSVar1.obj).klass)._1).element_class);
				if (pIVar3 == null) {
	label_05d6e470: ;
					pIVar3 = new ArrayTypeMismatchException();
					throw pIVar3;
				}
			}
			if ((pSVar1.Length & 0xfffffffe) != 0) {
				pSVar1[1] = pSVar2;
				__this_01 = new GameObject("Line", pSVar1);
				if (__this_01 != null) {
					pUVar4 = __this_01.transform;
					parent = __this_00.transform;
					if (pUVar4 != null) {
						pUVar4.SetParent(parent, false);
						__this_02 = __this_01.GetComponent<RectTransform>();
						if (__this_02 != null) {
							__this_02.anchorMin = (Vector2)0x3f00000000000000;
							__this_02.anchorMax = (Vector2)0x3f0000003f800000;
							__this_02.sizeDelta = (Vector2)0x3f80000000000000;
							pUVar6 = __this_01.GetComponent<Image>();
							panel = this._themePanel;
							UVar7 = UIManager.GetThemeColor(panel, "ContextMenu", "LineColor", "DefaultPanel");
							if (pUVar6 != null) {
								pUVar6.set_color(UVar7);
								return;
							}
						}
					}
				}
				goto label_05d6e466;
			}
		}
	label_05d6e46b: ;
		throw new IndexOutOfRangeException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MapEditorContextMenu.c.

	// UI.MapEditorContextMenu.<>c__DisplayClass16_0$$.ctor: clean
	private void c__DisplayClass16_0__ctor()
	{
		base();
		return;
	}

	// UI.MapEditorContextMenu.<>c__DisplayClass16_0$$<CreateButton>b__0: clean
	private void c__DisplayClass16_0__CreateButton_b__0()
	{
		Action pSVar1;
		MapEditorContextMenu pUVar2;
		Object x;
		GameObject __this_00;
		bool bVar3;

		if (this.item.Enabled == false) {
			return;
		}
		pSVar1 = this.item.Action;
		if (pSVar1 != null) {
			(*(code)pSVar1.invoke_impl)(pSVar1.method_code);
		}
		pUVar2 = this.__4__this;
		if (pUVar2 != null) {
			x = (Object)pUVar2._root;
			bVar3 = (x != null);
			if (!bVar3) {
				return;
			}
			__this_00 = pUVar2._root;
			if (__this_00 != null) {
				__this_00.SetActive(false);
				return;
			}
		}
		throw new NullReferenceException();
	}
}
