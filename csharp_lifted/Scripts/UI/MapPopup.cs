// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/MapPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/MapPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200084E")]
internal class MapPopup : BasePopup
{
	[Token(Token = "0x40029FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private float _height;

	[Token(Token = "0x40029FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Dictionary<Transform, Transform> _icons;

	[Token(Token = "0x40029FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private RawImage _background;

	[Token(Token = "0x4002A00")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private TMP_Text _label;

	[Token(Token = "0x4002A01")]
	private const float MapDisplaySize = 900f;

	[Token(Token = "0x4002A02")]
	private const float BarHeight = 64f;

	[Token(Token = "0x4002A03")]
	private const float ZoomStep = 500f;

	[Token(Token = "0x4002A04")]
	private const float MinHeight = 100f;

	[Token(Token = "0x4002A05")]
	private const float SyncCooldown = 0.1f;

	[Token(Token = "0x4002A06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Vector3 _center;

	[Token(Token = "0x4002A07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD4")]
	private Vector3 _renderedCenter;

	[Token(Token = "0x4002A08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private float _renderedHeight;

	[Token(Token = "0x4002A09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE4")]
	private bool _needSync;

	[Token(Token = "0x4002A0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private float _syncCooldownLeft;

	[Token(Token = "0x4002A0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private List<Transform> _iconsToRemove;

	[Token(Token = "0x17000DD4")]
	protected override string Title
	{
		[Token(Token = "0x6004F68")]
		[Address(RVA = "0x5C35210", Offset = "0x5C34210", VA = "0x5C35210", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/MapPopup.c (UI.MapPopup$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocaleCommon("Map");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000DD5")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004F69")]
		[Address(RVA = "0x5C35270", Offset = "0x5C34270", VA = "0x5C35270", Slot = "54")]
		get
		{
			// Lifted from source/cpp/UI/MapPopup.c (UI.MapPopup$$get_PopupAnimationType): clean
			return 1;
		}
	}

	[Token(Token = "0x17000DD6")]
	protected override float MinFadeAlpha
	{
		[Token(Token = "0x6004F6A")]
		[Address(RVA = "0x5C35280", Offset = "0x5C34280", VA = "0x5C35280", Slot = "47")]
		get
		{
			// Lifted from source/cpp/UI/MapPopup.c (UI.MapPopup$$get_MinFadeAlpha): clean
			return 0.5;
		}
	}

	[Token(Token = "0x17000DD7")]
	protected override float Width
	{
		[Token(Token = "0x6004F6B")]
		[Address(RVA = "0x5C35290", Offset = "0x5C34290", VA = "0x5C35290", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/MapPopup.c (UI.MapPopup$$get_Width): clean
			return 900.0;
		}
	}

	[Token(Token = "0x17000DD8")]
	protected override float Height
	{
		[Token(Token = "0x6004F6C")]
		[Address(RVA = "0x5C352A0", Offset = "0x5C342A0", VA = "0x5C352A0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/MapPopup.c (UI.MapPopup$$get_Height): clean
			return 1028.0;
		}
	}

	[Token(Token = "0x6004F6D")]
	[Address(RVA = "0x5C352B0", Offset = "0x5C342B0", VA = "0x5C352B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/MapPopup.c (UI.MapPopup$$Setup): 18 lines keep C-only constructs
		Transform* footer;
		TMP_Text* targetAddress;
		RawImage* targetAddress_00;
		Transform pUVar1;
		AottgInGameView __this_00;
		String pSVar2;
		TMP_Text pTVar3;
		RawImage pUVar4;
		GameObject pUVar5;
		Transform __this_01;
		MapDragArea pUVar6;
		Action<Vector2> __this_02;
		Action __this_03;
		float width;
		float height;
		Transform pUStack_38;

		pUStack_38 = null;
		this.Parent = parent;
		pUVar1 = this.transform;
		width = this.get_Width();
		height = this.get_Height();
		footer = &this.BottomBar;
		__this_00 = AottgInGameView.ScaledPopupShell(pUVar1, width, height, 64.0, 64.0, ref pUStack_38, footer, "inGameHeader");
		pUVar1 = pUStack_38;
		pSVar2 = this.get_Title();
		if (__this_00 != null) {
			__this_00.Text(pUVar1, pSVar2, 360.0, 54.0, "inGameHeaderTitle");
			pTVar3 = __this_00.Text(pUStack_38, (String)**(ulong*)(g_data_07556758 + 0xb8), 428.0, 36.0, "inGameMapCoordinates");
			targetAddress = &this._label;
			this._label = pTVar3;
			pUVar1 = this.transform;
			pUVar4 = __this_00.RawImage(pUVar1, 900.0, 900.0);
			targetAddress_00 = &this._background;
			this._background = pUVar4;
			pUVar4 = this._background;
			if (pUVar4 != null) {
				pUVar5 = pUVar4.gameObject;
				if (pUVar5 != null) {
					pUVar5.AddComponent<RectMask2D>();
					if (*targetAddress_00 != null) {
						pUVar1 = (*targetAddress_00).transform;
						AottgInGameView.Position(pUVar1, (Vector2)(Vector2.zeroVector));
						pUVar4 = *targetAddress_00;
						if (pUVar4 != null) {
							pUVar4.set_raycastTarget(true);
							if (*targetAddress != null) {
								(*targetAddress).alignment = 0x1004;
								if (*targetAddress != null) {
									__this_01 = (*targetAddress).transform;
									if (__this_01 != null) {
										__this_01.SetAsLastSibling();
										if (pUVar1 != null) {
											pUVar5 = pUVar1.gameObject;
											if (pUVar5 != null) {
												pUVar6 = pUVar5.AddComponent<MapDragArea>();
												__this_02 = new Action<Vector2>((object)this, (intptr_t)MethodInfo_UI_MapPopup_OnDrag);
												__this_03 = new Action((object)this, (intptr_t)MethodInfo_UI_MapPopup_OnEndDrag);
												if (pUVar6 != null) {
													pUVar6._onDrag = __this_02;
													pUVar6._onEndDrag = __this_03;
													pUVar1 = *footer;
													pSVar2 = UIManager.GetLocale("SettingsPopup", "Keybinds.General", "ZoomIn", "", "");
													__this_00.Button(pUVar1, pSVar2, "ingame.map.zoom", "in", 200.0, 44.0, 3);
													pUVar1 = *footer;
													pSVar2 = UIManager.GetLocale("SettingsPopup", "Keybinds.General", "ZoomOut", "", "");
													__this_00.Button(pUVar1, pSVar2, "ingame.map.zoom", "out", 200.0, 44.0, 3);
													pUVar1 = *footer;
													pSVar2 = UIManager.GetLocaleCommon("Back");
													__this_00.Button(pUVar1, pSVar2, "ingame.map.back", null, 200.0, 44.0, 3);
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F6E")]
	[Address(RVA = "0x5C358B0", Offset = "0x5C348B0", VA = "0x5C358B0", Slot = "21")]
	public override void Show()
	{
		// Lifted from source/cpp/UI/MapPopup.c (UI.MapPopup$$Show): 1 lines keep C-only constructs
		byte bVar1;
		BaseCamera pCVar2;
		BaseComponentCache pUVar3;
		Transform __this_00;
		Vector3 UVar4;

		this.Show();
		pCVar2 = SceneLoader.CurrentCamera;
		if (pCVar2 != null) {
			bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
			if (((pCVar2.klass._2).typeHierarchyDepth < bVar1) ||((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera))) {
				throw new InvalidCastException();
			}
			pUVar3 = pCVar2.Cache;
			if ((pUVar3 != null) &&(__this_00 = pUVar3.Transform, __this_00 != null)) {
				UVar4 = (Vector3)__this_00.position;
				this._center = UVar4;
				this._needSync = true;
				this._syncCooldownLeft = 0.0;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F6F")]
	[Address(RVA = "0x5C35970", Offset = "0x5C34970", VA = "0x5C35970")]
	private void Update()
	{
		// Lifted from source/cpp/UI/MapPopup.c (UI.MapPopup$$Update): 1 lines keep C-only constructs
		byte bVar1;
		BaseCamera pCVar2;
		BaseComponentCache pUVar3;
		Transform pUVar4;
		BaseCamera x;
		IntPtr pvVar5;
		TMP_Text pTVar6;
		MinimapCamera __this_00;
		bool bVar7;
		String[] values;
		String pSVar8;
		MethodInfo method_00;
		float fVar9;
		Vector3 UStack_40;
		float fStack_34;

		pCVar2 = SceneLoader.CurrentCamera;
		if (pCVar2 != null) {
			bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
			if (((pCVar2.klass._2).typeHierarchyDepth < bVar1) ||((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera))) {
				throw new InvalidCastException();
			}
			pUVar3 = pCVar2.Cache;
			if ((pUVar3 != null) &&(pUVar4 = pUVar3.Transform, pUVar4 != null)) {
				UStack_40 = pUVar4.position;
				x = (*(ulong)((sbyte)pCVar2 + 0x38));
				bVar7 = ((Object)x != null);
				if (bVar7) {
					if ((((*(ulong)((sbyte)pCVar2 + 0x38)) == null) ||(pvVar5 = (((*(Il2CppClass*)((sbyte)pCVar2 + 0x38)))._1), pvVar5 == null)) ||(pUVar4 = *(Transform*)((long)pvVar5 + 0x10), pUVar4 == null)) goto label_05d35c8b;
					UStack_40 = pUVar4.position;
				}
				pTVar6 = this._label;
				values = (String[])new string[5];
				pSVar8 = UStack_40.ToString("F0");
				if (values != null) {
					if ((int)values.Length != 0) {
						values[0] = pSVar8;
						if ((values.Length & 0xfffffffe) != 0) {
							values[1] = ", ";
							pSVar8 = UStack_40.y.ToString("F0");
							if (2 < (uint)values.Length) {
								values[2] = pSVar8;
								if ((values.Length & 0xfffffffc) != 0) {
									values[3] = ", ";
									pSVar8 = UStack_40.z.ToString("F0");
									if (4 < (uint)values.Length) {
										values[4] = pSVar8;
										method_00 = (MethodInfo)String.Concat(values);
										if (pTVar6 != null) {
											pTVar6.set_text((String)method_00);
											this.UpdateZoomInput();
											fStack_34 = this._syncCooldownLeft;
											fVar9 = Time.deltaTime;
											this._syncCooldownLeft = fStack_34 - fVar9;
											if ((this._needSync != false) && (this._syncCooldownLeft <= 0.0)) {
												__this_00 = SceneLoader.MinimapCamera;
												if (__this_00 == null) goto label_05d35c8b;
												method_00 = null;
												bVar7 = __this_00.Ready();
												if (bVar7) {
													this.Sync();
												}
											}
											this.SyncIcons();
											this.UpdateIcons();
											return;
										}
										goto label_05d35c8b;
									}
								}
							}
						}
					}
					throw new IndexOutOfRangeException();
				}
			}
		}
	label_05d35c8b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F70")]
	[Address(RVA = "0x5C35CA0", Offset = "0x5C34CA0", VA = "0x5C35CA0")]
	private void UpdateZoomInput()
	{
		// Lifted from source/cpp/UI/MapPopup.c (UI.MapPopup$$UpdateZoomInput): clean
		InputSettings pSVar1;
		GeneralInputSettings pSVar2;
		KeybindSetting pSVar3;
		bool bVar4;
		float fVar5;

		pSVar1 = SettingsManager.InputSettings;
		if (((pSVar1 == null) ||(pSVar2 = pSVar1.General, pSVar2 == null)) ||(pSVar3 = pSVar2.ZoomIn, pSVar3 == null)) {
	label_05d35d54: ;
			throw new NullReferenceException();
		}
		bVar4 = pSVar3.GetKeyDown(false);
		if (bVar4) {
			fVar5 = -500.0;
		}
		else {
			pSVar3 = pSVar2.ZoomOut;
			if (pSVar3 == null) goto label_05d35d54;
			bVar4 = pSVar3.GetKeyDown(false);
			if (!bVar4) {
				return;
			}
			fVar5 = 500.0;
		}
		fVar5 = fVar5 + this._height;
		if (fVar5 <= 100.0) {
			fVar5 = 100.0;
		}
		this._height = fVar5;
		this._needSync = true;
		return;
	}

	[Token(Token = "0x6004F71")]
	[Address(RVA = "0x5C369B0", Offset = "0x5C359B0", VA = "0x5C369B0")]
	private void SetHeight(float height)
	{
		// Lifted from source/cpp/UI/MapPopup.c (UI.MapPopup$$SetHeight): clean
		if (height <= 100.0) {
			height = 100.0;
		}
		this._height = height;
		this._needSync = true;
		return;
	}

	[Token(Token = "0x6004F72")]
	[Address(RVA = "0x5C369D0", Offset = "0x5C359D0", VA = "0x5C369D0")]
	private void OnDrag(Vector2 delta)
	{
		// Lifted from source/cpp/UI/MapPopup.c (UI.MapPopup$$OnDrag): clean
		float fVar1;
		uint uVar2;
		uint uVar3;
		float fVar4;

		uVar2 = this._center.x;
		uVar3 = this._center.y;
		fVar1 = this._center.z;
		fVar4 = this._height / 900.0;
		this._center.x = (float)uVar2 - fVar4 * delta.x;
		this._center.y = (float)uVar3 - fVar4 * 0.0;
		this._center.z = fVar1 - delta.y * fVar4;
		this._needSync = true;
		return;
	}

	[Token(Token = "0x6004F73")]
	[Address(RVA = "0x5C36A30", Offset = "0x5C35A30", VA = "0x5C36A30")]
	private void OnEndDrag()
	{
		// Lifted from source/cpp/UI/MapPopup.c (UI.MapPopup$$OnEndDrag): clean
		MinimapCamera __this_00;
		bool bVar1;

		this._syncCooldownLeft = 0.0;
		if ((this._needSync != false) && (this._syncCooldownLeft <= 0.0)) {
			__this_00 = SceneLoader.MinimapCamera;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			bVar1 = __this_00.Ready();
			if (bVar1) {
				this.Sync();
			}
		}
		this.UpdateIcons();
		return;
	}

	[Token(Token = "0x6004F74")]
	[Address(RVA = "0x5C35D60", Offset = "0x5C34D60", VA = "0x5C35D60")]
	private void SyncIfNeeded()
	{
		// Lifted from source/cpp/UI/MapPopup.c (UI.MapPopup$$SyncIfNeeded): clean
		MinimapCamera __this_00;
		bool bVar1;

		if ((this._needSync != false) && (this._syncCooldownLeft <= 0.0)) {
			__this_00 = SceneLoader.MinimapCamera;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			bVar1 = __this_00.Ready();
			if (bVar1) {
				this.Sync();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004F75")]
	[Address(RVA = "0x5C362C0", Offset = "0x5C352C0", VA = "0x5C362C0")]
	private void UpdateIcons()
	{
		// Lifted from source/cpp/UI/MapPopup.c (UI.MapPopup$$UpdateIcons): 39 lines keep C-only constructs
		int piVar1;
		float fVar2;
		int length;
		uint uVar3;
		uint uVar4;
		List<Transform> pSVar5;
		Dictionary<object, object> pSVar6;
		Transform[] pUVar7;
		byte[] auVar8 = new byte[16];
		Transform __this_00;
		bool bVar10;
		bool bVar11;
		uint extraout_EAX;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_01;
		Transform __this_02;
		BaseCharacter x;
		GameObject pUVar12;
		Object obj;
		sbyte cVar13;
		int iVar14;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		float in_XMM1_Db;
		float fVar15;
		float fVar16;
		float fVar17;
		Vector3 UVar18;
		byte[] local_a0 = new byte[16];
		Transform local_90;
		byte[] local_88 = new byte[8];
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o pSStack_80;
		Transform local_78;
		byte[] local_68 = new byte[8];
		float fStack_60;
		float fStack_5c;
		byte[] local_58 = new byte[16];
		System_Collections_Generic_List_Enumerator_T__o local_48;

		fVar2 = in_XMM1_Db;
		if (Il2CppMethodInitialized_07547e4b == false) {
			Il2CppMethodInitialized_07547e4b = true;
			fVar2 = in_XMM1_Db;
		}
		local_88 = (byte[])0x0;
		local_78 = null;
		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		pSVar5 = this._iconsToRemove;
		if (pSVar5 != null) {
			piVar1 = &pSVar5._version;
			*piVar1 = *piVar1 + 1;
			length = pSVar5._size;
			pSVar5._size = 0;
			if (0 < length) {
				Array.Clear((Array)pSVar5._items, 0, length);
			}
			pSVar6 = (Dictionary<object, object>)this._icons;
			if ((pSVar6 != null) &&(__this_01 = pSVar6.Keys, __this_01 != null)) {
				local_a0.GetEnumerator(__this_01);
				local_78 = local_90;
				local_88 = (byte[])local_a0._0_8_;
				pSStack_80 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_a0._8_8_;
				local_a0._0_8_ = null;
				local_a0._8_8_ =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)local_88;
				while (true) {
					bVar10 = local_88.MoveNext();
					__this_00 = local_78;
					if (!(bVar10)) break;
					pSVar6 = (Dictionary<object, object>)this._icons;
					if (pSVar6 == null) {
						throw new NullReferenceException();
					}
					__this_02 = pSVar6.get_Item((object)local_78);
					bVar10 = ((Object)__this_00 != null);
					if (bVar10) {
						if (__this_00 == null) {
							throw new NullReferenceException();
						}
						x = __this_00.GetComponent<BaseCharacter>();
						bVar10 = ((Object)x != null);
						cVar13 = false;
						if (bVar10) {
							if (x == null) {
								throw new NullReferenceException();
							}
							cVar13 = x.Dead;
						}
						bVar10 = cVar13 != false;
						uVar3 = (typeof(Object)._2).cctor_finished_or_no_cctor;
					}
					else {
						bVar10 = false;
						uVar3 = (typeof(Object)._2).cctor_finished_or_no_cctor;
					}
					if (uVar3 == 0) {
					}
					bVar11 = ((Object)__this_00 == null);
					if (bVar10 || bVar11) {
						pSVar5 = this._iconsToRemove;
						if (pSVar5 == null) {
	label_05d36864: ;
							throw new NullReferenceException();
						}
						piVar1 = &pSVar5._version;
						*piVar1 = *piVar1 + 1;
						pUVar7 = pSVar5._items;
						if (pUVar7 == null) goto label_05d36864;
						uVar4 = pSVar5._size;
						if (uVar4 < (uint)pUVar7.Length) {
							pSVar5._size = uVar4 + 1;
							pUVar7[(int)uVar4] = __this_00;
						}
						else {
							pSVar5.AddWithResize((object)__this_00);
						}
						if (__this_02 == null) {
							throw new NullReferenceException();
						}
						obj = (Object)__this_02.gameObject;
						Object.Destroy(obj);
					}
					else {
						if (__this_00 == null) {
							throw new NullReferenceException();
						}
						UVar18 = __this_00.position;
						local_58._8_4_ = extraout_XMM0_Dc;
						local_58._0_8_ = UVar18._0_8_;
						local_58._12_4_ = extraout_XMM0_Dd;
						UVar18 = __this_00.position;
						fVar17 = 900.0 / this._renderedHeight;
						fVar15 = (float)local_58._0_4_ - (float)local_68._0_4_;
						fVar16 = (float)local_58._4_4_ - (float)local_68._4_4_;
						local_58 = ZEXT416((uint)fVar17);
						local_68._0_4_ = fVar17 * (UVar18.z - this._renderedCenter.z);
						local_68._4_4_ = fVar17 * fVar15;
						fStack_60 = fVar17 * (fVar2 - 0.0);
						fStack_5c = fVar17 * fVar16;
						fVar2 = (float)-(uint)(450.0 < ABS((float)local_68._0_4_));
						iVar14 = -(uint)(450.0 < ABS((float)local_68._4_4_));
						auVar8._4_4_ = fVar2;
						auVar8._0_4_ = fVar2;
						auVar8._8_4_ = iVar14;
						auVar8._12_4_ = iVar14;
						iVar14 = movmskpd(extraout_EAX, auVar8);
						if (iVar14 == 0) {
							if (__this_02 == null) {
								throw new NullReferenceException();
							}
							pUVar12 = __this_02.gameObject;
							if (pUVar12 == null) {
								throw new NullReferenceException();
							}
							bVar10 = pUVar12.activeSelf;
							if (!bVar10) {
								pUVar12 = __this_02.gameObject;
								if (pUVar12 == null) {
									throw new NullReferenceException();
								}
								pUVar12.SetActive(true);
							}
							UVar18.z = (float)local_58._0_4_ * 0.0;
							UVar18.y = (float)local_68._0_4_;
							UVar18.x = (float)local_68._4_4_;
							__this_02.localPosition = UVar18;
							fVar2 = ((Quaternion)typeof(Quaternion).static_fields).w;
							__this_02.rotation = (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields;
						}
						else {
							if (__this_02 == null) {
								throw new NullReferenceException();
							}
							pUVar12 = __this_02.gameObject;
							if (pUVar12 == null) {
								throw new NullReferenceException();
							}
							bVar10 = pUVar12.activeSelf;
							if (bVar10) {
								pUVar12 = __this_02.gameObject;
								if (pUVar12 == null) {
									throw new NullReferenceException();
								}
								pUVar12.SetActive(false);
							}
						}
					}
				}
				local_88.Dispose();
				pSVar5 = this._iconsToRemove;
				if (pSVar5 != null) {
					local_48 = pSVar5.GetEnumerator();
					local_a0._0_8_ = null;
					local_a0._8_8_ = &local_48;
					while(true) {
						bVar10 = local_48.MoveNext();
						if (!bVar10) {
							local_48.Dispose();
							return;
						}
						pSVar6 = (Dictionary<object, object>)this._icons;
						if (pSVar6 == null) break;
						pSVar6.Remove(local_48._current);
					}
					throw new NullReferenceException();
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F76")]
	[Address(RVA = "0x5C36AB0", Offset = "0x5C35AB0", VA = "0x5C36AB0")]
	private void Sync()
	{
		// Lifted from source/cpp/UI/MapPopup.c (UI.MapPopup$$Sync): clean
		float fVar1;
		MinimapCamera __this_00;
		RawImage __this_01;
		bool bVar2;
		Texture value;
		Vector3 position;

		this._syncCooldownLeft = 0.1;
		__this_00 = SceneLoader.MinimapCamera;
		if (__this_00 == null) {
	label_05d36ba3: ;
			throw new NullReferenceException();
		}
		fVar1 = this._height;
		position.y = fVar1;
		position.x = this._center.x;
		position.z = this._center.z;
		value = (Texture)__this_00.RenderMap(position, fVar1);
		bVar2 = ((Object)value == null);
		if (!bVar2) {
			__this_01 = this._background;
			if (__this_01 == null) goto label_05d36ba3;
			__this_01.texture = value;
			this._renderedCenter.z = this._center.z;
			fVar1 = this._center.y;
			this._renderedCenter.x = this._center.x;
			this._renderedCenter.y = fVar1;
			this._renderedHeight = this._height;
			this._needSync = false;
		}
		return;
	}

	[Token(Token = "0x6004F77")]
	[Address(RVA = "0x5C35DD0", Offset = "0x5C34DD0", VA = "0x5C35DD0")]
	private void SyncIcons()
	{
		// Lifted from source/cpp/UI/MapPopup.c (UI.MapPopup$$SyncIcons): 8 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		RawImage __this_00;
		object x;
		bool bVar2;
		Dictionary<object, object> __this_01;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_02;
		BaseCharacter x_00;
		Transform pUVar3;
		GameObject pUVar4;
		Transform p;
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_68;
		byte[] local_48 = new byte[16];
		Object local_38;

		local_68._dictionary = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._currentKey = null;
		if ((typeof(MinimapHandler)._2).cctor_finished_or_no_cctor == 0) {
			__this_01 = (Dictionary<object, object>)MinimapHandler.GetIcons();
		}
		else {
			__this_01 = (Dictionary<object, object>)MinimapHandler.GetIcons();
		}
		if (__this_01 != null) {
			__this_02 = __this_01.Keys;
			if (__this_02 == null) {
				throw new NullReferenceException();
			}
			local_48.GetEnumerator(__this_02);
			local_68._currentKey = (object)local_38;
			local_68._dictionary = (Dictionary<TKey, TValue>)local_48._0_8_;
			local_68._index = local_48._8_4_;
			local_68._version = local_48._12_4_;
			local_48._0_8_ = null;
			local_48._8_8_ = &local_68;
	label_05d35f30: ;
			bVar2 = local_68.MoveNext();
			x = local_68._currentKey;
			if (bVar2) {
				bVar2 = ((Object)x == null);
				if (!bVar2) {
					pSVar1 = (Dictionary<object, object>)this._icons;
					if (pSVar1 == null) {
						throw new NullReferenceException();
					}
					bVar2 = pSVar1.ContainsKey(x);
					if (!bVar2) {
						if ((Object)x == null) {
							throw new NullReferenceException();
						}
						x_00 = x.GetComponent<BaseCharacter>() ;
						bVar2 = ((Object)x_00 != null);
						if (bVar2) {
							if (x_00 == null) {
								throw new NullReferenceException();
							}
							if (x_00.Dead != false) goto label_05d35f30;
						}
						pUVar3 = __this_01.get_Item(x);
						if (pUVar3 == null) {
							throw new NullReferenceException();
						}
						pUVar4 = pUVar3.gameObject;
						pUVar4 = Object.Instantiate<GameObject>((object)pUVar4);
						if (pUVar4 == null) {
							throw new NullReferenceException();
						}
						pUVar3 = pUVar4.transform;
						__this_00 = this._background;
						if (__this_00 == null) {
							throw new NullReferenceException();
						}
						p = __this_00.transform;
						if (pUVar3 == null) {
							throw new NullReferenceException();
						}
						pUVar3.SetParent(p);
						pUVar3 = pUVar4.transform;
						if (pUVar3 == null) {
							throw new NullReferenceException();
						}
						pUVar3.localPosition = (Vector3)(Vector3.zeroVector);
						pUVar3 = pUVar4.transform;
						if (pUVar3 == null) {
							throw new NullReferenceException();
						}
						pUVar3.localScale = (Vector3)(Vector3.oneVector) ;
						pUVar3 = pUVar4.transform;
						if (pUVar3 == null) {
							throw new NullReferenceException();
						}
						pUVar3.rotation = (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields;
						pUVar4.SetActive(false);
						pSVar1 = (Dictionary<object, object>)this._icons;
						pUVar3 = pUVar4.transform;
						if (pSVar1 == null) {
							throw new NullReferenceException();
						}
						pSVar1.Add(x, (object)pUVar3);
					}
				}
				goto label_05d35f30;
			}
			local_68.Dispose();
		}
		return;
	}

	[Token(Token = "0x6004F78")]
	[Address(RVA = "0x5C36C70", Offset = "0x5C35C70", VA = "0x5C36C70")]
	internal void OnBottomBarButtonClick(string name)
	{
		// Lifted from source/cpp/UI/MapPopup.c (UI.MapPopup$$OnBottomBarButtonClick): 1 lines keep C-only constructs
		byte bVar1;
		InGameMenu __this_00;
		bool bVar2;
		float fVar3;

		bVar2 = (name == "Back");
		if (!bVar2) {
			bVar2 = (name == "Plus");
			if (bVar2) {
				fVar3 = this._height + -500.0;
			}
			else {
				bVar2 = (name == "Minus");
				if (!bVar2) {
					return;
				}
				fVar3 = this._height + 500.0;
			}
			if (fVar3 <= 100.0) {
				fVar3 = 100.0;
			}
			this._height = fVar3;
			this._needSync = true;
			return;
		}
		__this_00 = (InGameMenu)UIManager.CurrentMenu;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(InGameMenu)._2).typeHierarchyDepth;
		if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
			throw new InvalidCastException();
		}
		__this_00.SetMapMenu(false, true);
		return;
	}

	[Token(Token = "0x6004F79")]
	[Address(RVA = "0x5C36DE0", Offset = "0x5C35DE0", VA = "0x5C36DE0")]
	public MapPopup()
	{
		// Lifted from source/cpp/UI/MapPopup.c (UI.MapPopup$$.ctor): clean
		float fVar1;
		float fVar3;
		Dictionary<Transform, Transform> __this_00;
		List<Transform> __this_01;

		this._height = 2000.0;
		__this_00 = new Dictionary<Transform, Transform>();
		this._icons = __this_00;
		fVar3 = (Vector3.zeroVector).y;
		fVar1 = (Vector3.zeroVector).z;
		this._center.x = (Vector3.zeroVector).x;
		this._center.y = fVar3;
		this._center.z = fVar1;
		this._renderedHeight = 2000.0;
		__this_01 = new List<Transform>();
		this._iconsToRemove = __this_01;
		base();
		return;
	}
}
