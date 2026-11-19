// ==================== AoTTG2 cross-reference ====================
// Type: UI.TooltipPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/TooltipPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/TooltipPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007AC")]
internal class TooltipPopup : BasePopup
{
	[Token(Token = "0x40026A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly List<TooltipPopup> Visible;

	[Token(Token = "0x40026A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _label;

	[Token(Token = "0x40026AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private RectTransform _panel;

	[Token(Token = "0x40026AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public Component Caller;

	[Token(Token = "0x40026AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private BasePopup[] _callerPopups;

	[Token(Token = "0x40026AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private float _offset;

	[Token(Token = "0x17000CD4")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x60049F6")]
		[Address(RVA = "0x5BC8230", Offset = "0x5BC7230", VA = "0x5BC8230", Slot = "55")]
		get
		{
			// Lifted from source/cpp/UI/TooltipPopup.c (UI.TooltipPopup$$get_EscapeBehavior): clean
			return 2;
		}
	}

	[Token(Token = "0x17000CD5")]
	protected override float AnimationTime
	{
		[Token(Token = "0x60049F7")]
		[Address(RVA = "0x5BC8240", Offset = "0x5BC7240", VA = "0x5BC8240", Slot = "51")]
		get
		{
			// Lifted from source/cpp/UI/TooltipPopup.c (UI.TooltipPopup$$get_AnimationTime): clean
			return 0.15;
		}
	}

	[Token(Token = "0x17000CD6")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x60049F8")]
		[Address(RVA = "0x5BC8250", Offset = "0x5BC7250", VA = "0x5BC8250", Slot = "54")]
		get
		{
			// Lifted from source/cpp/UI/TooltipPopup.c (UI.TooltipPopup$$get_PopupAnimationType): clean
			return 1;
		}
	}

	[Token(Token = "0x17000CD7")]
	protected virtual string TextColor
	{
		[Token(Token = "0x60049FA")]
		[Address(RVA = "0x5BC8260", Offset = "0x5BC7260", VA = "0x5BC8260", Slot = "62")]
		get
		{
			// Lifted from source/cpp/UI/TooltipPopup.c (UI.TooltipPopup$$get_TextColor): clean
			return "TooltipTextColor";
		}
	}

	[Token(Token = "0x17000CD8")]
	protected virtual string BackgroundColor
	{
		[Token(Token = "0x60049FB")]
		[Address(RVA = "0x5BC8290", Offset = "0x5BC7290", VA = "0x5BC8290", Slot = "63")]
		get
		{
			// Lifted from source/cpp/UI/TooltipPopup.c (UI.TooltipPopup$$get_BackgroundColor): clean
			return "TooltipBackgroundColor";
		}
	}

	[Token(Token = "0x60049F9")]
	[Address(RVA = "0x5BB6C90", Offset = "0x5BB5C90", VA = "0x5BB6C90")]
	public static void HideWithin(Transform root)
	{
		// Lifted from source/cpp/UI/TooltipPopup.c (UI.TooltipPopup$$HideWithin): clean
		uint uVar1;
		int index;
		List<TooltipPopup> pSVar2;
		Object x;
		Component __this;
		bool bVar3;
		TooltipPopup __this_00;
		Transform pUVar4;

		if (Il2CppMethodInitialized_07547b5a == false) {
			Il2CppMethodInitialized_07547b5a = true;
			uVar1 = (typeof(TooltipPopup)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TooltipPopup)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = TooltipPopup.Visible;
		}
		else {
			pSVar2 = *(List<TooltipPopup>*)(typeof(TooltipPopup)).static_fields;
		}
		if (pSVar2 == null) {
	label_05cb6e43: ;
			throw new NullReferenceException();
		}
		index = pSVar2._size;
	joined_r0x05cb6d3b: ;
		index = index + -1;
		if (index < 0) {
			return;
		}
		if (((typeof(TooltipPopup))._2).cctor_finished_or_no_cctor == 0) {
		}
		pSVar2 = TooltipPopup.Visible;
		if (((pSVar2 != null) &&(__this_00 = pSVar2.get_Item(index), __this_00 != null)) &&(pUVar4 = __this_00.transform, pUVar4 != null)) {
			bVar3 = pUVar4.IsChildOf(root);
			if (!bVar3) goto code_r0x05cb6dcf;
			goto label_05cb6d50;
		}
		goto label_05cb6e43;
	code_r0x05cb6dcf: ;
		x = (Object)__this_00.Caller;
		bVar3 = (x != null);
		if (bVar3) {
			__this = __this_00.Caller;
			if ((__this == null) ||(pUVar4 = __this.transform, pUVar4 == null)) goto label_05cb6e43;
			bVar3 = pUVar4.IsChildOf(root);
			if (bVar3) {
	label_05cb6d50: ;
				__this_00.HideImmediate();
			}
		}
		goto joined_r0x05cb6d3b;
	}

	[Token(Token = "0x60049FC")]
	[Address(RVA = "0x5BC82C0", Offset = "0x5BC72C0", VA = "0x5BC82C0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/TooltipPopup.c (UI.TooltipPopup$$Setup): 3 lines keep C-only constructs
		RectTransform* targetAddress;
		Transform pUVar1;
		Text pUVar2;
		RectTransform pUVar3;
		String pSVar4;
		String pSVar5;
		Image pUVar6;
		Color UVar7;

		pUVar1 = this.transform;
		if (pUVar1 != null) {
			pUVar1 = pUVar1.Find("Panel/Label");
			if (pUVar1 != null) {
				pUVar2 = pUVar1.GetComponent<Text>();
				this._label = pUVar2;
				pUVar2 = this._label;
				if (pUVar2 != null) {
					pUVar2.set_text((String)**(ulong*)(g_data_07556758 + 0xb8));
					pUVar1 = this.transform;
					if (pUVar1 != null) {
						pUVar1 = pUVar1.Find("Panel");
						if (pUVar1 != null) {
							pUVar3 = pUVar1.GetComponent<RectTransform>();
							targetAddress = &this._panel;
							this._panel = pUVar3;
							pUVar2 = this._label;
							pSVar4 = this.get_ThemePanel();
							pSVar5 = this.get_TextColor();
							UVar7 = UIManager.GetThemeColor(pSVar4, "DefaultSetting", pSVar5, "DefaultPanel");
							if (pUVar2 != null) {
								pUVar2.set_color(UVar7);
								pUVar3 = *targetAddress;
								if (pUVar3 != null) {
									pUVar1 = pUVar3.Find("Background") ;
									if (pUVar1 != null) {
										pUVar6 = pUVar1.GetComponent<Image>();
										pSVar4 = this.get_ThemePanel();
										pSVar5 = this.get_BackgroundColor();
										UVar7 = UIManager.GetThemeColor(pSVar4, "DefaultSetting", pSVar5, "DefaultPanel");
										if (pUVar6 != null) {
											pUVar6.set_color(UVar7);
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x60049FD")]
	[Address(RVA = "0x5BBEF00", Offset = "0x5BBDF00", VA = "0x5BBEF00")]
	public void Show(string message, Component caller, float offset)
	{
		// Lifted from source/cpp/UI/TooltipPopup.c (UI.TooltipPopup$$Show): 3 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Text pUVar3;
		List<TooltipPopup> pSVar4;
		TooltipPopup[] pUVar5;
		bool bVar6;
		BasePopup[] callerPopups;
		GameObject __this_00;
		Transform __this_01;
		CanvasGroup __this_02;
		float value;

		callerPopups = null;
		bVar6 = ((Object)caller == null);
		if (!bVar6) {
			if (caller == null) goto label_05cbf1cc;
			callerPopups = (BasePopup[])caller.GetComponentsInParent<BasePopup>();
		}
		if ((typeof(TooltipPopup)._2).cctor_finished_or_no_cctor == 0) {
		}
		bVar6 = TooltipPopup.CanShow(caller, callerPopups);
		if (!bVar6) {
			return;
		}
		__this_00 = this.gameObject;
		if (__this_00 != null) {
			bVar6 = __this_00.activeSelf;
			if (bVar6) {
				this.StopAllCoroutines();
				value = this.get_MaxFadeAlpha();
				if (Il2CppMethodInitialized_07547ad7 == false) {
					il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup) ;
					Il2CppMethodInitialized_07547ad7 = true;
				}
				__this_01 = this.transform;
				if ((__this_01 == null) ||(__this_02 = __this_01.GetComponent<CanvasGroup>(), __this_02 == null)) goto label_05cbf1cc;
				__this_02.alpha = value;
			}
			pUVar3 = this._label;
			if (pUVar3 != null) {
				pUVar3.set_text(message);
				this.Caller = caller;
				this._callerPopups = callerPopups;
				this._offset = offset;
				Canvas.ForceUpdateCanvases();
				this.SetTooltipPosition();
				this.Show();
				pSVar4 = TooltipPopup.Visible;
				if (pSVar4 != null) {
					bVar6 = pSVar4.Contains((object)this);
					if (bVar6) {
						return;
					}
					pSVar4 = TooltipPopup.Visible;
					if (pSVar4 != null) {
						piVar1 = &pSVar4._version;
						*piVar1 = *piVar1 + 1;
						pUVar5 = pSVar4._items;
						if (pUVar5 != null) {
							uVar2 = pSVar4._size;
							if (uVar2 < (uint)pUVar5.Length) {
								pSVar4._size = uVar2 + 1;
								pUVar5[(int)uVar2] = this;
								return;
							}
							pSVar4.AddWithResize((object)this);
							return;
						}
					}
				}
			}
		}
	label_05cbf1cc: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60049FE")]
	[Address(RVA = "0x5BC86A0", Offset = "0x5BC76A0", VA = "0x5BC86A0")]
	private void SetTooltipPosition()
	{
		// Lifted from source/cpp/UI/TooltipPopup.c (UI.TooltipPopup$$SetTooltipPosition): 7 lines keep C-only constructs
		Component __this_00;
		Vector2 UVar1;
		int iVar2;
		RectTransform __this_01;
		Transform pUVar3;
		float fVar4;
		float fVar5;
		float fVar6;
		Vector3 UVar7;
		Vector3 UVar8;
		ulong local_48;

		__this_01 = (RectTransform)this.transform;
		if (__this_01 != null) {
			if (__this_01.klass != typeof(RectTransform)) {
				throw new InvalidCastException();
			}
			UVar1 = __this_01.sizeDelta;
			fVar4 = this._offset;
			__this_00 = this.Caller;
			if (__this_00 != null) {
				fVar4 = (fVar4 + UVar1.x * 0.5) * UIManager.CurrentCanvasScale;
				pUVar3 = __this_00.transform;
				if (pUVar3 != null) {
					UVar7 = pUVar3.position;
					iVar2 = Screen.width;
					local_48._0_4_ = UVar7.x;
					local_48._4_4_ = UVar7.y;
					if ((float)iVar2 < fVar4 + (float)local_48) {
						local_48._0_4_ = (float)local_48 - fVar4;
					}
					else {
						local_48._0_4_ = (float)local_48 + fVar4;
					}
					pUVar3 = this.transform;
					if (pUVar3 != null) {
						UVar8 = pUVar3.position;
						fVar4 = UVar8.y - local_48._4_4_;
						fVar5 = UVar8.z - UVar7.z;
						fVar6 = UVar8.x - (float)local_48;
						if (fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5 < 9.9999994e-11) {
							return;
						}
						pUVar3 = this.transform;
						if (pUVar3 != null) {
							UVar7.x = (float)local_48;
							UVar7.y = local_48._4_4_;
							pUVar3.position = UVar7;
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60049FF")]
	[Address(RVA = "0x5BC8850", Offset = "0x5BC7850", VA = "0x5BC8850")]
	private void Update()
	{
		// Lifted from source/cpp/UI/TooltipPopup.c (UI.TooltipPopup$$Update): clean
		Component caller;
		bool bVar1;
		BasePopup[] callerPopups;

		caller = this.Caller;
		callerPopups = this._callerPopups;
		if ((typeof(TooltipPopup)._2).cctor_finished_or_no_cctor == 0) {
		}
		bVar1 = TooltipPopup.CanShow(caller, callerPopups);
		if (bVar1) {
			this.SetTooltipPosition();
			return;
		}
		this.HideImmediate();
		return;
	}

	[Token(Token = "0x6004A00")]
	[Address(RVA = "0x5BC88E0", Offset = "0x5BC78E0", VA = "0x5BC88E0", Slot = "59")]
	protected override void OnDisable()
	{
		// Lifted from source/cpp/UI/TooltipPopup.c (UI.TooltipPopup$$OnDisable): clean
		List<TooltipPopup> __this_00;

		this.IsActive = false;
		this.HideTooltips();
		__this_00 = TooltipPopup.Visible;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Remove((object)this);
		this.Caller = null;
		this._callerPopups = null;
		return;
	}

	[Token(Token = "0x6004A01")]
	[Address(RVA = "0x5BC8580", Offset = "0x5BC7580", VA = "0x5BC8580")]
	private static bool CanShow(Component caller, BasePopup[] callerPopups)
	{
		// Lifted from source/cpp/UI/TooltipPopup.c (UI.TooltipPopup$$CanShow): 1 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		bool bVar3;
		GameObject __this;
		int iVar4;
		bool bVar5;

		bVar3 = ((Object)caller == null);
		if (bVar3) {
			return false;
		}
		if ((caller == null) ||(__this = caller.gameObject, __this == null)) {
	label_05cc8692: ;
			throw new NullReferenceException();
		}
		bVar5 = false;
		bVar3 = __this.activeInHierarchy;
		if (bVar3) {
			bVar1 = (typeof(Behaviour)._2).typeHierarchyDepth;
			if (((bVar1 <= (caller.klass._2).typeHierarchyDepth) &&((caller.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Behaviour)) ) && (bVar3 = caller.isActiveAndEnabled, !bVar3)) {
				return false;
			}
			if (callerPopups == null) goto label_05cc8692;
			iVar2 = (int)callerPopups.Length;
			if (iVar2 < 1) {
				bVar5 = true;
			}
			else {
				iVar4 = 0;
				do {
					if (callerPopups[iVar4] == null) goto label_05cc8692;
					bVar3 = callerPopups[iVar4].IsActive;
				} while ((bVar3 != false) && (bVar5 = iVar2 + -1 != iVar4, iVar4 = iVar4 + 1, bVar5));
				bVar5 = bVar3 != false;
			}
		}
		return bVar5;
	}

	[Token(Token = "0x6004A02")]
	[Address(RVA = "0x5BC8220", Offset = "0x5BC7220", VA = "0x5BC8220")]
	public TooltipPopup()
	{
		// Lifted from source/cpp/UI/TooltipPopup.c (UI.TooltipPopup$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/TooltipPopup.c.

	// UI.TooltipPopup$$.cctor: clean
	static TooltipPopup()
	{
		List<TooltipPopup> __this;

		__this = new List<TooltipPopup>();
		TooltipPopup.Visible = __this;
		return;
	}
}
