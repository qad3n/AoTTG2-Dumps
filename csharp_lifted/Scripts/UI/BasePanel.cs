// ==================== AoTTG2 cross-reference ====================
// Type: UI.BasePanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/BasePanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/BasePanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000780")]
internal class BasePanel : MonoBehaviour
{
	[Token(Token = "0x2000781")]
	[CompilerGenerated]
	private sealed class _003CWaitAndEnableCategoryPanel_003Ed__51 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40025E4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40025E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40025E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public BasePanel _003C_003E4__this;

		[Token(Token = "0x17000C55")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600488F")]
			[Address(RVA = "0x5BB5C40", Offset = "0x5BB4C40", VA = "0x5BB5C40", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000C56")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004891")]
			[Address(RVA = "0x5BB5C90", Offset = "0x5BB4C90", VA = "0x5BB5C90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600488C")]
		[Address(RVA = "0x5BB4FD0", Offset = "0x5BB3FD0", VA = "0x5BB4FD0")]
		[DebuggerHidden]
		public _003CWaitAndEnableCategoryPanel_003Ed__51(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x600488D")]
		[Address(RVA = "0x5BB5AF0", Offset = "0x5BB4AF0", VA = "0x5BB5AF0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x600488E")]
		[Address(RVA = "0x5BB5B00", Offset = "0x5BB4B00", VA = "0x5BB5B00", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$MoveNext): 1 lines keep C-only constructs
			int iVar1;
			BasePanel pUVar2;
			RawImage pUVar3;
			GameObject __this_00;
			bool bVar4;
			object __this_01;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				__this_01 = new WaitForEndOfFrame();
				this.__2__current = __this_01;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				pUVar2 = this.__4__this;
				this.__1__state = -1;
				if (pUVar2 != null) {
					pUVar3 = pUVar2.MaskBackground;
					bVar4 = ((Object)pUVar3 != null);
					if (bVar4) {
						pUVar3 = pUVar2.MaskBackground;
						if (pUVar3 == null) goto label_05cb5c37;
						pUVar3.set_color((Color)(ZEXT816(0x3d4ccccd00000000) << 0x40));
					}
					__this_00 = pUVar2._currentCategoryPanel;
					if (__this_00 != null) {
						__this_00.SetActive(true);
						UIManager.NeedResizeText = true;
						goto label_05cb5c2d;
					}
				}
		label_05cb5c37: ;
				throw new NullReferenceException();
			}
		label_05cb5c2d: ;
			return iVar1 == 0;
		}

		[Token(Token = "0x6004890")]
		[Address(RVA = "0x5BB5C50", Offset = "0x5BB4C50", VA = "0x5BB5C50", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel.<WaitAndEnableCategoryPanel>d__51$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_UI_BasePanel_WaitAndEnableCategoryPanel_d__51_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000782")]
	[CompilerGenerated]
	private sealed class _003CWaitAndRebuildCategoryPanel_003Ed__54 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40025E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40025E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40025E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public float time;

		[Token(Token = "0x40025EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public BasePanel _003C_003E4__this;

		[Token(Token = "0x17000C57")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004895")]
			[Address(RVA = "0x5BB5DA0", Offset = "0x5BB4DA0", VA = "0x5BB5DA0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel.<WaitAndRebuildCategoryPanel>d__54$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000C58")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004897")]
			[Address(RVA = "0x5BB5DF0", Offset = "0x5BB4DF0", VA = "0x5BB5DF0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel.<WaitAndRebuildCategoryPanel>d__54$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004892")]
		[Address(RVA = "0x5BB5170", Offset = "0x5BB4170", VA = "0x5BB5170")]
		[DebuggerHidden]
		public _003CWaitAndRebuildCategoryPanel_003Ed__54(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel.<WaitAndRebuildCategoryPanel>d__54$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004893")]
		[Address(RVA = "0x5BB5CA0", Offset = "0x5BB4CA0", VA = "0x5BB5CA0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel.<WaitAndRebuildCategoryPanel>d__54$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004894")]
		[Address(RVA = "0x5BB5CB0", Offset = "0x5BB4CB0", VA = "0x5BB5CB0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel.<WaitAndRebuildCategoryPanel>d__54$$MoveNext): clean
			float seconds;
			int iVar1;
			BasePanel pUVar2;
			StringSetting pSVar3;
			WaitForSeconds __this_00;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				seconds = this.time;
				__this_00 = new WaitForSeconds(seconds);
				this.__2__current = (object)__this_00;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				pUVar2 = this.__4__this;
				this.__1__state = -1;
				if (pUVar2 != null) {
					pSVar3 = pUVar2._currentCategoryPanelName;
					if (pSVar3 != null) {
						pUVar2.SetCategoryPanel(pSVar3._value);
						goto label_05cb5d84;
					}
				}
				throw new NullReferenceException();
			}
		label_05cb5d84: ;
			return iVar1 == 0;
		}

		[Token(Token = "0x6004896")]
		[Address(RVA = "0x5BB5DB0", Offset = "0x5BB4DB0", VA = "0x5BB5DB0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel.<WaitAndRebuildCategoryPanel>d__54$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_UI_BasePanel_WaitAndRebuildCategoryPanel_d__54_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x40025DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	protected Transform SinglePanel;

	[Token(Token = "0x40025DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	protected Transform DoublePanelLeft;

	[Token(Token = "0x40025DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	protected Transform DoublePanelRight;

	[Token(Token = "0x40025DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected List<BasePopup> _popups;

	[Token(Token = "0x40025DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected GameObject _currentCategoryPanel;

	[Token(Token = "0x40025E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected StringSetting _currentCategoryPanelName;

	[Token(Token = "0x40025E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	protected Dictionary<string, Type> _categoryPanelTypes;

	[Token(Token = "0x40025E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	protected RawImage MaskBackground;

	[Token(Token = "0x40025E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public BasePanel Parent;

	[Token(Token = "0x17000C45")]
	protected virtual string ThemePanel
	{
		[Token(Token = "0x600485D")]
		[Address(RVA = "0x5BB3600", Offset = "0x5BB2600", VA = "0x5BB3600", Slot = "4")]
		get
		{
			// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$get_ThemePanel): clean
			return "DefaultPanel";
		}
	}

	[Token(Token = "0x17000C46")]
	protected virtual float Width
	{
		[Token(Token = "0x600485E")]
		[Address(RVA = "0x5BB3630", Offset = "0x5BB2630", VA = "0x5BB3630", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$get_Width): clean
			return 800.0;
		}
	}

	[Token(Token = "0x17000C47")]
	protected virtual float Height
	{
		[Token(Token = "0x600485F")]
		[Address(RVA = "0x5BB3640", Offset = "0x5BB2640", VA = "0x5BB3640", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$get_Height): clean
			return 600.0;
		}
	}

	[Token(Token = "0x17000C48")]
	protected virtual float BorderVerticalPadding
	{
		[Token(Token = "0x6004860")]
		[Address(RVA = "0x5BB3650", Offset = "0x5BB2650", VA = "0x5BB3650", Slot = "7")]
		get
		{
			// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$get_BorderVerticalPadding): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000C49")]
	protected virtual float BorderHorizontalPadding
	{
		[Token(Token = "0x6004861")]
		[Address(RVA = "0x5BB3660", Offset = "0x5BB2660", VA = "0x5BB3660", Slot = "8")]
		get
		{
			// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$get_BorderHorizontalPadding): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000C4A")]
	protected virtual int VerticalPadding
	{
		[Token(Token = "0x6004862")]
		[Address(RVA = "0x5BB3670", Offset = "0x5BB2670", VA = "0x5BB3670", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$get_VerticalPadding): clean
			return 0x1e;
		}
	}

	[Token(Token = "0x17000C4B")]
	protected virtual int HorizontalPadding
	{
		[Token(Token = "0x6004863")]
		[Address(RVA = "0x5BB3680", Offset = "0x5BB2680", VA = "0x5BB3680", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$get_HorizontalPadding): clean
			return 0x28;
		}
	}

	[Token(Token = "0x17000C4C")]
	protected virtual float VerticalSpacing
	{
		[Token(Token = "0x6004864")]
		[Address(RVA = "0x5BB3690", Offset = "0x5BB2690", VA = "0x5BB3690", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$get_VerticalSpacing): clean
			return 30.0;
		}
	}

	[Token(Token = "0x17000C4D")]
	protected virtual TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004865")]
		[Address(RVA = "0x5BB36A0", Offset = "0x5BB26A0", VA = "0x5BB36A0", Slot = "12")]
		get
		{
			// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$get_PanelAlignment): clean
			return 0;
		}
	}

	[Token(Token = "0x17000C4E")]
	protected virtual bool DoublePanel
	{
		[Token(Token = "0x6004866")]
		[Address(RVA = "0x5BB36B0", Offset = "0x5BB26B0", VA = "0x5BB36B0", Slot = "13")]
		get
		{
			// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$get_DoublePanel): clean
			return false;
		}
	}

	[Token(Token = "0x17000C4F")]
	protected virtual bool DoublePanelDivider
	{
		[Token(Token = "0x6004867")]
		[Address(RVA = "0x5BB36C0", Offset = "0x5BB26C0", VA = "0x5BB36C0", Slot = "14")]
		get
		{
			// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$get_DoublePanelDivider): clean
			return true;
		}
	}

	[Token(Token = "0x17000C50")]
	protected virtual bool ScrollBar
	{
		[Token(Token = "0x6004868")]
		[Address(RVA = "0x5BB36D0", Offset = "0x5BB26D0", VA = "0x5BB36D0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$get_ScrollBar): clean
			return false;
		}
	}

	[Token(Token = "0x17000C51")]
	protected virtual bool CategoryPanel
	{
		[Token(Token = "0x6004869")]
		[Address(RVA = "0x5BB36E0", Offset = "0x5BB26E0", VA = "0x5BB36E0", Slot = "16")]
		get
		{
			// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$get_CategoryPanel): clean
			return false;
		}
	}

	[Token(Token = "0x17000C52")]
	protected virtual bool UseLastCategory
	{
		[Token(Token = "0x600486A")]
		[Address(RVA = "0x5BB36F0", Offset = "0x5BB26F0", VA = "0x5BB36F0", Slot = "17")]
		get
		{
			// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$get_UseLastCategory): clean
			return true;
		}
	}

	[Token(Token = "0x17000C53")]
	protected virtual bool HasPremadeContent
	{
		[Token(Token = "0x600486B")]
		[Address(RVA = "0x5BB3700", Offset = "0x5BB2700", VA = "0x5BB3700", Slot = "18")]
		get
		{
			// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$get_HasPremadeContent): clean
			return false;
		}
	}

	[Token(Token = "0x17000C54")]
	protected virtual string DefaultCategoryPanel
	{
		[Token(Token = "0x600486C")]
		[Address(RVA = "0x5BB3710", Offset = "0x5BB2710", VA = "0x5BB3710", Slot = "19")]
		get
		{
			// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$get_DefaultCategoryPanel): clean
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
	}

	[Token(Token = "0x600486D")]
	[Address(RVA = "0x5BB3730", Offset = "0x5BB2730", VA = "0x5BB3730")]
	protected void OnEnable()
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$OnEnable): clean
		Object x;
		GameObject __this_00;
		bool bVar1;
		Transform pUVar2;
		CanvasGroup __this_01;

		pUVar2 = this.transform;
		if (pUVar2 == null) goto label_05cb385c;
		pUVar2 = pUVar2.Find("Border");
		bVar1 = ((Object)pUVar2 != null);
		if (bVar1) {
			pUVar2 = this.transform;
			if (pUVar2 == null) goto label_05cb385c;
			pUVar2 = pUVar2.Find("Border");
			if (pUVar2 == null) goto label_05cb385c;
			__this_01 = pUVar2.GetComponent<CanvasGroup>();
			if (__this_01 == null) goto label_05cb385c;
			__this_01.blocksRaycasts = false;
		}
		x = (Object)this._currentCategoryPanel;
		bVar1 = (x != null);
		if (!bVar1) {
			return;
		}
		__this_00 = this._currentCategoryPanel;
		if (__this_00 != null) {
			__this_00.SetActive(true);
			return;
		}
	label_05cb385c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600486E")]
	[Address(RVA = "0x5BB3870", Offset = "0x5BB2870", VA = "0x5BB3870", Slot = "20")]
	public virtual void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$Setup): 9 lines keep C-only constructs
		RawImage* targetAddress;
		Vector2 value;
		bool bVar1;
		bool scrollBar;
		GameObject pUVar2;
		RectTransform __this_00;
		Transform pUVar3;
		RawImage pUVar4;
		String pSVar5;
		Texture value_00;
		Type t;
		MethodInfo* method_00;
		Transform* targetAddress_00;
		float fVar6;
		float fVar7;

		this.Parent = parent;
		pUVar2 = this.gameObject;
		if (pUVar2 == null) {
	label_05cb3da4: ;
			throw new NullReferenceException();
		}
		method_00 = &MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
		__this_00 = pUVar2.GetComponent<RectTransform>();
		fVar6 = this.GetWidth();
		fVar7 = this.GetHeight();
		if (__this_00 == null) goto label_05cb3da4;
		value.y = fVar7;
		value.x = fVar6;
		__this_00.sizeDelta = value;
		pUVar3 = this.transform;
		if (pUVar3 == null) goto label_05cb3da4;
		pUVar3 = pUVar3.Find("Background");
		bVar1 = ((Object)pUVar3 != null);
		if (bVar1) {
			pUVar3 = this.transform;
			if (pUVar3 == null) goto label_05cb3da4;
			pUVar3 = pUVar3.Find("Background");
			if (pUVar3 == null) goto label_05cb3da4;
			pUVar4 = pUVar3.GetComponent<RawImage>();
			targetAddress = &this.MaskBackground;
			this.MaskBackground = pUVar4;
			pUVar4 = this.MaskBackground;
			pSVar5 = this.get_ThemePanel();
			method_00 = (MethodInfo **)"DefaultPanel";
			value_00 = (Texture)UIManager.GetThemeTexture(pSVar5, "MainBody", "BackgroundTexture", "DefaultPanel");
			if (pUVar4 == null) goto label_05cb3da4;
			pUVar4.texture = value_00;
			pUVar4 = *targetAddress;
			if (pUVar4 == null) goto label_05cb3da4;
			pUVar4.set_color((Color)(ZEXT816(0x3d4ccccd00000000) << 0x40));
		}
		bVar1 = this.get_CategoryPanel();
		if (bVar1) {
	label_05cb3ae6: ;
			bVar1 = this.get_HasPremadeContent();
			if (bVar1) {
				this.SetupPremadePanel();
			}
		}
		else {
			bVar1 = this.get_HasPremadeContent();
			if (bVar1) goto label_05cb3ae6;
			bVar1 = this.get_DoublePanel();
			scrollBar = this.get_ScrollBar();
			if (bVar1) {
				bVar1 = this.get_DoublePanelDivider();
				pUVar2 = this.CreateDoublePanel(scrollBar, bVar1);
				if (pUVar2 == null) goto label_05cb3da4;
				pUVar3 = pUVar2.transform;
				if (pUVar3 == null) goto label_05cb3da4;
				pUVar3 = pUVar3.Find("ScrollView/LeftPanel");
				this.DoublePanelLeft = pUVar3;
				pUVar3 = pUVar2.transform;
				if (pUVar3 == null) goto label_05cb3da4;
				pUVar3 = pUVar3.Find("ScrollView/RightPanel");
				targetAddress_00 = &this.DoublePanelRight;
				this.DoublePanelRight = pUVar3;
			}
			else {
				pUVar2 = this.CreateSinglePanel(scrollBar);
				if (pUVar2 == null) goto label_05cb3da4;
				pUVar3 = pUVar2.transform;
				if (pUVar3 == null) goto label_05cb3da4;
				pUVar3 = pUVar3.Find("ScrollView/Panel");
				targetAddress_00 = &this.SinglePanel;
				this.SinglePanel = pUVar3;
			}
		}
		this.SetupPopups();
		bVar1 = this.get_CategoryPanel();
		if (!bVar1) goto label_05cb3d71;
		this.RegisterCategoryPanels();
		t = this.GetType();
		pSVar5 = UIManager.GetLastcategory(t);
		bVar1 = this.get_UseLastCategory();
		if (bVar1) {
			bVar1 = (pSVar5 != (String)**(ulong*)(g_data_07556758 + 0xb8));
			if (!bVar1) goto label_05cb3d43;
		}
		else {
	label_05cb3d43: ;
			pSVar5 = this.get_DefaultCategoryPanel();
		}
		this.SetCategoryPanel(pSVar5);
	label_05cb3d71: ;
		UIManager.NeedResizeText = true;
		return;
	}

	[Token(Token = "0x600486F")]
	[Address(RVA = "0x5BB4540", Offset = "0x5BB3540", VA = "0x5BB4540", Slot = "21")]
	public virtual void Show()
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$Show): clean
		GameObject __this_00;

		__this_00 = this.gameObject;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetActive(true);
		return;
	}

	[Token(Token = "0x6004870")]
	[Address(RVA = "0x5BB4570", Offset = "0x5BB3570", VA = "0x5BB4570", Slot = "22")]
	public virtual void Hide()
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$Hide): clean
		GameObject __this_00;

		this.HideAllPopups();
		__this_00 = this.gameObject;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetActive(false);
		return;
	}

	[Token(Token = "0x6004871")]
	[Address(RVA = "0x5BB45B0", Offset = "0x5BB35B0", VA = "0x5BB45B0", Slot = "23")]
	public virtual void SyncSettingElements()
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$SyncSettingElements): 1 lines keep C-only constructs
		object pIVar1;
		uint uVar2;
		Object[] pSVar3;
		uint uVar4;

		pSVar3 = this.GetComponentsInChildren<BaseSettingElement>();
		if (pSVar3 == null) {
	label_05cb4636: ;
			throw new NullReferenceException();
		}
		uVar2 = (uint)pSVar3.Length;
		if (0 < (int)uVar2) {
			uVar4 = 0;
			do {
				if (uVar2 <= uVar4) {
					throw new IndexOutOfRangeException();
				}
				pIVar1 = pSVar3[(int)uVar4];
				if (pIVar1 == null) goto label_05cb4636;
				(*pIVar1.klass.vtable[6].methodPtr)(pIVar1,pIVar1.klass.vtable[6].method);
				uVar4 = uVar4 + 1;
				uVar2 = (uint)pSVar3.Length;
			} while ((int)uVar4 < (int)uVar2);
		}
		return;
	}

	[Token(Token = "0x6004872")]
	[Address(RVA = "0x5BB4640", Offset = "0x5BB3640", VA = "0x5BB4640", Slot = "24")]
	protected virtual void SetupPremadePanel()
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$SetupPremadePanel): 2 lines keep C-only constructs
		bool bVar1;
		Transform pUVar2;
		GameObject pUVar3;
		GameObject panel;
		String* ppSVar4;

		bVar1 = this.get_DoublePanel();
		pUVar2 = this.transform;
		if (bVar1) {
			if (pUVar2 == null) goto label_05cb4943;
			pUVar2 = pUVar2.Find("DoublePanelContent");
			if (pUVar2 == null) goto label_05cb4943;
			pUVar3 = pUVar2.gameObject;
			if (pUVar3 == null) goto label_05cb4943;
			pUVar2 = pUVar3.transform;
			if (pUVar2 == null) goto label_05cb4943;
			pUVar2 = pUVar2.Find("ScrollView/LeftPanel");
			this.DoublePanelLeft = pUVar2;
			pUVar2 = pUVar3.transform;
			if (pUVar2 == null) goto label_05cb4943;
			ppSVar4 = &"ScrollView/RightPanel";
			pUVar2 = pUVar2.Find("ScrollView/RightPanel");
			this.DoublePanelRight = pUVar2;
			bVar1 = this.get_ScrollBar();
			this.BindPanel(pUVar3, bVar1);
			pUVar2 = pUVar3.transform;
			if (pUVar2 == null) goto label_05cb4943;
			pUVar2 = pUVar2.Find("ScrollView/LeftPanel");
			if (pUVar2 == null) goto label_05cb4943;
			panel = pUVar2.gameObject;
			this.SetPanelPadding(panel);
		}
		else {
			if (pUVar2 == null) goto label_05cb4943;
			pUVar2 = pUVar2.Find("SinglePanelContent");
			if (pUVar2 == null) goto label_05cb4943;
			pUVar3 = pUVar2.gameObject;
			if (pUVar3 == null) goto label_05cb4943;
			pUVar2 = pUVar3.transform;
			if (pUVar2 == null) goto label_05cb4943;
			ppSVar4 = &"ScrollView/Panel";
			pUVar2 = pUVar2.Find("ScrollView/Panel");
			this.SinglePanel = pUVar2;
			bVar1 = this.get_ScrollBar();
			this.BindPanel(pUVar3, bVar1);
		}
		pUVar2 = pUVar3.transform;
		if (pUVar2 != null) {
			pUVar2 = pUVar2.Find(*ppSVar4);
			if (pUVar2 != null) {
				pUVar3 = pUVar2.gameObject;
				this.SetPanelPadding(pUVar3);
				return;
			}
		}
	label_05cb4943: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004873")]
	[Address(RVA = "0x5BB4AD0", Offset = "0x5BB3AD0", VA = "0x5BB4AD0", Slot = "25")]
	protected virtual void SetupPopups()
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$SetupPopups): clean
		return;
	}

	[Token(Token = "0x6004874")]
	[Address(RVA = "0x5BB4AE0", Offset = "0x5BB3AE0", VA = "0x5BB4AE0", Slot = "26")]
	protected virtual void HideAllPopups()
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$HideAllPopups): 3 lines keep C-only constructs
		List<BasePopup> __this_00;
		bool bVar1;
		System_Collections_Generic_List_Enumerator_T__o SStack_38;
		byte puStack_18;

		SStack_38._list = null;
		SStack_38._index = 0;
		SStack_38._version = 0;
		SStack_38._current = null;
		__this_00 = this._popups;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		SStack_38 = __this_00.GetEnumerator();
		puStack_18 = (byte)&SStack_38;
		while(true) {
			bVar1 = SStack_38.MoveNext();
			if (!bVar1) {
				SStack_38.Dispose();
				return;
			}
			if (SStack_38._current == null) break;
			(*(SStack_38._current).klass.vtable[0x16].methodPtr)(SStack_38._current,(SStack_38._current).klass.vtable[0x16].method);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004875")]
	[Address(RVA = "0x5BB4C20", Offset = "0x5BB3C20", VA = "0x5BB4C20", Slot = "27")]
	protected virtual void RegisterCategoryPanels()
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$RegisterCategoryPanels): clean
		return;
	}

	[Token(Token = "0x6004876")]
	[Address(RVA = "0x5BB4C30", Offset = "0x5BB3C30", VA = "0x5BB4C30", Slot = "28")]
	public virtual void SetCategoryPanel(string name)
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$SetCategoryPanel): 4 lines keep C-only constructs
		GameObject* targetAddress;
		float fVar1;
		uint uVar2;
		uint uVar3;
		Object pUVar4;
		Dictionary<object, object> __this_00;
		StringSetting __this_01;
		RawImage pUVar6;
		bool bVar7;
		Type pSVar8;
		Transform pUVar9;
		GameObject pUVar10;
		String panel;
		BasePanel.d__51<WaitAndEnableCategoryPanel> __this_02;
		float fVar11;
		Color UVar12;
		Vector3 value;

		this.HideAllPopups();
		pUVar4 = (Object)this._currentCategoryPanel;
		targetAddress = &this._currentCategoryPanel;
		bVar7 = (pUVar4 != null);
		if (bVar7) {
			pUVar4 = (Object)*targetAddress;
			Object.Destroy(pUVar4);
		}
		__this_00 = (Dictionary<object, object>)this._categoryPanelTypes;
		if (__this_00 != null) {
			pSVar8 = __this_00.get_Item((object)name);
			__this_01 = this._currentCategoryPanelName;
			if (__this_01 != null) {
				__this_01.Value = (object)name;
				pUVar9 = this.transform;
				pUVar10 = ElementFactory.CreateEmptyPanel(pUVar9, pSVar8, true);
				this._currentCategoryPanel = pUVar10;
				pUVar10 = this._currentCategoryPanel;
				if (pUVar10 != null) {
					pUVar10.SetActive(false);
					if (*targetAddress != null) {
						pUVar9 = (*targetAddress).transform;
						uVar2 = (Vector3.upVector).x;
						uVar3 = (Vector3.upVector).y;
						fVar1 = (Vector3.upVector).z;
						fVar11 = this.GetPanelVerticalOffset();
						if (pUVar9 != null) {
							value.z = fVar1 * fVar11;
							value.y = (float)uVar3 * fVar11;
							value.x = (float)uVar2 * fVar11;
							pUVar9.localPosition = value;
							pUVar6 = this.MaskBackground;
							bVar7 = ((Object)pUVar6 != null);
							if (bVar7) {
								pUVar6 = this.MaskBackground;
								panel = this.get_ThemePanel();
								UVar12 = UIManager.GetThemeColor(panel, "MainBody", "BackgroundColor", "DefaultPanel");
								if (pUVar6 == null) goto label_05cb4f5b;
								pUVar6.set_color(UVar12);
							}
							__this_02 = new BasePanel.d__51<WaitAndEnableCategoryPanel>();
							__this_02.__1__state = 0;
							__this_02.__4__this = this;
							this.StartCoroutine((IEnumerator)__this_02);
							pSVar8 = this.GetType();
							UIManager.SetLastCategory(pSVar8, name);
							return;
						}
					}
				}
			}
		}
	label_05cb4f5b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004877")]
	[Address(RVA = "0x5BB4F60", Offset = "0x5BB3F60", VA = "0x5BB4F60")]
	[IteratorStateMachine(typeof(_003CWaitAndEnableCategoryPanel_003Ed__51))]
	private IEnumerator WaitAndEnableCategoryPanel()
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$WaitAndEnableCategoryPanel): 1 lines keep C-only constructs
		BasePanel.d__51<WaitAndEnableCategoryPanel> __this_00;

		__this_00 = il2cpp_codegen_object_new(typeof(BasePanel.d__51<WaitAndEnableCategoryPanel>)) ;
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004878")]
	[Address(RVA = "0x5BB4FF0", Offset = "0x5BB3FF0", VA = "0x5BB4FF0")]
	public string GetCurrentCategoryName()
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$GetCurrentCategoryName): clean
		StringSetting pSVar1;

		pSVar1 = this._currentCategoryPanelName;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		return pSVar1._value;
	}

	[Token(Token = "0x6004879")]
	[Address(RVA = "0x5BB5030", Offset = "0x5BB4030", VA = "0x5BB5030")]
	public void RebuildCategoryPanel()
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$RebuildCategoryPanel): clean
		StringSetting pSVar1;

		pSVar1 = this._currentCategoryPanelName;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		this.SetCategoryPanel(pSVar1._value);
		return;
	}

	[Token(Token = "0x600487A")]
	[Address(RVA = "0x5BB50F0", Offset = "0x5BB40F0", VA = "0x5BB50F0")]
	[IteratorStateMachine(typeof(_003CWaitAndRebuildCategoryPanel_003Ed__54))]
	public IEnumerator WaitAndRebuildCategoryPanel(float time)
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$WaitAndRebuildCategoryPanel): clean
		BasePanel.d__54<WaitAndRebuildCategoryPanel> __this_00;

		__this_00 = new BasePanel.d__54<WaitAndRebuildCategoryPanel>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.time = time;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600487B")]
	[Address(RVA = "0x5BB5090", Offset = "0x5BB4090", VA = "0x5BB5090")]
	public void SetCategoryPanel(StringSetting setting)
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$SetCategoryPanel): clean
		if (setting == null) {
			throw new NullReferenceException();
		}
		this.SetCategoryPanel(setting._value);
		return;
	}

	[Token(Token = "0x600487C")]
	[Address(RVA = "0x5BB5190", Offset = "0x5BB4190", VA = "0x5BB5190")]
	protected GameObject CreateHorizontalDivider(Transform parent, float height = 1f)
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$CreateHorizontalDivider): clean
		bool bVar1;
		int iVar2;
		String themePanel;
		ElementStyle __this_00;
		GameObject pUVar3;
		float fVar4;

		bVar1 = this.get_DoublePanel();
		fVar4 = this.GetPanelWidth();
		iVar2 = this.get_HorizontalPadding();
		if (bVar1) {
			fVar4 = fVar4 * 0.5;
		}
		themePanel = this.get_ThemePanel();
		__this_00 = new ElementStyle(0x18, 120.0, 20.0, themePanel);
		pUVar3 = ElementFactory.CreateHorizontalLine(parent, __this_00, fVar4 - ((float)iVar2 + (float)iVar2), height);
		return pUVar3;
	}

	[Token(Token = "0x600487D")]
	[Address(RVA = "0x5BB44F0", Offset = "0x5BB34F0", VA = "0x5BB44F0")]
	protected Transform GetSinglePanelTransform(GameObject singlePanel)
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$GetSinglePanelTransform): clean
		Transform pUVar1;

		if (singlePanel != null) {
			pUVar1 = singlePanel.transform;
			if (pUVar1 != null) {
				pUVar1 = pUVar1.Find("ScrollView/Panel");
				return pUVar1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600487E")]
	[Address(RVA = "0x5BB4250", Offset = "0x5BB3250", VA = "0x5BB4250")]
	protected Transform GetDoublePanelLeftTransform(GameObject doublePanel)
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$GetDoublePanelLeftTransform): clean
		Transform pUVar1;

		if (doublePanel != null) {
			pUVar1 = doublePanel.transform;
			if (pUVar1 != null) {
				pUVar1 = pUVar1.Find("ScrollView/LeftPanel");
				return pUVar1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600487F")]
	[Address(RVA = "0x5BB42A0", Offset = "0x5BB32A0", VA = "0x5BB42A0")]
	protected Transform GetDoublePanelRightTransform(GameObject doublePanel)
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$GetDoublePanelRightTransform): clean
		Transform pUVar1;

		if (doublePanel != null) {
			pUVar1 = doublePanel.transform;
			if (pUVar1 != null) {
				pUVar1 = pUVar1.Find("ScrollView/RightPanel");
				return pUVar1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004880")]
	[Address(RVA = "0x5BB42F0", Offset = "0x5BB32F0", VA = "0x5BB42F0")]
	protected GameObject CreateSinglePanel(bool scrollBar)
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$CreateSinglePanel): clean
		String path;
		GameObject root;
		Transform pUVar1;
		LayoutElement pUVar2;
		GameObject panel;
		float fVar3;

		path = ResourcePaths.UI;
		root = ResourceManager.InstantiateAsset<GameObject>(path, "Prefabs/Panels/SinglePanelContent", false, false);
		LanguageFonts.Localize(root);
		if (root != null) {
			pUVar1 = root.transform;
			if (pUVar1 != null) {
				pUVar1 = pUVar1.Find("ScrollView/Panel");
				if (pUVar1 != null) {
					pUVar2 = pUVar1.GetComponent<LayoutElement>() ;
					fVar3 = this.GetPanelWidth();
					if (pUVar2 != null) {
						pUVar2.set_preferredWidth(fVar3);
						this.BindPanel(root, scrollBar);
						pUVar1 = root.transform;
						if (pUVar1 != null) {
							pUVar1 = pUVar1.Find("ScrollView/Panel");
							if (pUVar1 != null) {
								panel = pUVar1.gameObject;
								this.SetPanelPadding(panel);
								return root;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004881")]
	[Address(RVA = "0x5BB3DB0", Offset = "0x5BB2DB0", VA = "0x5BB3DB0")]
	protected GameObject CreateDoublePanel(bool scrollBar, bool divider)
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$CreateDoublePanel): clean
		GameObject root;
		Transform pUVar1;
		LayoutElement pUVar2;
		Image pUVar3;
		String pSVar4;
		GameObject pUVar5;
		float fVar6;
		Color UVar7;

		pSVar4 = ResourcePaths.UI;
		root = ResourceManager.InstantiateAsset<GameObject>(pSVar4, "Prefabs/Panels/DoublePanelContent", false, false);
		LanguageFonts.Localize(root);
		if (root != null) {
			pUVar1 = root.transform;
			if (pUVar1 != null) {
				pUVar1 = pUVar1.Find("ScrollView/LeftPanel");
				if (pUVar1 != null) {
					pUVar2 = pUVar1.GetComponent<LayoutElement>() ;
					fVar6 = this.GetPanelWidth();
					if (pUVar2 != null) {
						pUVar2.set_preferredWidth(fVar6 * 0.5);
						pUVar1 = root.transform;
						if (pUVar1 != null) {
							pUVar1 = pUVar1.Find("ScrollView/RightPanel");
							if (pUVar1 != null) {
								pUVar2 = pUVar1.GetComponent<LayoutElement>();
								fVar6 = this.GetPanelWidth();
								if (pUVar2 != null) {
									pUVar2.set_preferredWidth(fVar6 * 0.5);
									pUVar1 = root.transform;
									if (divider) {
										if (pUVar1 == null) goto label_05cb4244;
										pUVar1 = pUVar1.Find("ScrollView/VerticalLine");
										if (pUVar1 == null) goto label_05cb4244;
										pUVar3 = pUVar1.GetComponent<Image>();
										pSVar4 = this.get_ThemePanel();
										UVar7 = UIManager.GetThemeColor(pSVar4, "MainBody", "LineColor", "DefaultPanel");
										if (pUVar3 == null) goto label_05cb4244;
										pUVar3.set_color(UVar7);
										pUVar5 = pUVar1.gameObject;
										if (pUVar5 == null) goto label_05cb4244;
										pUVar5.AddComponent<VerticalLineScaler>();
									}
									else {
										if (pUVar1 == null) goto label_05cb4244;
										pUVar1 = pUVar1.Find("ScrollView/VerticalLine");
										if (pUVar1 == null) goto label_05cb4244;
										pUVar5 = pUVar1.gameObject;
										if (pUVar5 == null) goto label_05cb4244;
										pUVar5.SetActive(false);
									}
									this.BindPanel(root, scrollBar);
									pUVar1 = root.transform;
									if (pUVar1 != null) {
										pUVar1 = pUVar1.Find("ScrollView/LeftPanel");
										if (pUVar1 != null) {
											pUVar5 = pUVar1.gameObject;
											this.SetPanelPadding(pUVar5);
											pUVar1 = root.transform;
											if (pUVar1 != null) {
												pUVar1 = pUVar1.Find("ScrollView/RightPanel");
												if (pUVar1 != null) {
													pUVar5 = pUVar1.gameObject;
													this.SetPanelPadding(pUVar5);
													return root;
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
	label_05cb4244: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004882")]
	[Address(RVA = "0x5BB52A0", Offset = "0x5BB42A0", VA = "0x5BB52A0", Slot = "29")]
	protected virtual void BindPanel(GameObject panel, bool scrollBar)
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$BindPanel): 3 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		Vector2 value;
		ColorBlock value_00;
		Transform pUVar4;
		GameObject pUVar5;
		Transform parent;
		RectTransform __this_00;
		object pIVar6;
		Scrollbar __this_01;
		ScrollRect __this_02;
		RawImage __this_03;
		String pSVar7;
		Texture value_01;
		float fVar8;
		float fVar9;
		Color UVar10;
		Vector3 value_02;
		ColorBlock UStack_88;

		if (panel != null) {
			pUVar4 = panel.transform;
			pUVar5 = this.gameObject;
			if (pUVar5 != null) {
				parent = pUVar5.transform;
				if (pUVar4 != null) {
					pUVar4.SetParent(parent, false);
					pUVar4 = panel.transform;
					uVar1 = (Vector3.upVector).x;
					uVar2 = (Vector3.upVector).y;
					fVar9 = (Vector3.upVector).z;
					fVar8 = this.GetPanelVerticalOffset();
					if (pUVar4 != null) {
						value_02.z = fVar9 * fVar8;
						value_02.y = (float)uVar2 * fVar8;
						value_02.x = (float)uVar1 * fVar8;
						pUVar4.localPosition = value_02;
						fVar9 = this.GetPanelHeight();
						__this_00 = (RectTransform)panel.GetComponent<RectTransform>();
						fVar8 = this.GetPanelWidth();
						if (__this_00 != null) {
							value.y = fVar9;
							value.x = fVar8;
							__this_00.sizeDelta = value;
							pUVar4 = panel.transform;
							if (pUVar4 != null) {
								pUVar4 = pUVar4.Find("ScrollView");
								if (pUVar4 != null) {
									pIVar6 = pUVar4.GetComponent<LayoutElement>();
									if (pIVar6 != null) {
										(*pIVar6.klass.vtable[0x22].methodPtr)(fVar9,pIVar6);
										pUVar4 = panel.transform;
										if (pUVar4 != null) {
											pUVar4 = pUVar4.Find("Scrollbar");
											if (pUVar4 != null) {
												__this_01 = (Scrollbar)pUVar4.GetComponent<Scrollbar>();
												if (__this_01 != null) {
													__this_01.value = 1.0;
													if (!scrollBar) {
														__this_02 = (ScrollRect)panel.GetComponent<ScrollRect>();
														if (__this_02 == null) goto label_05cb57a0;
														__this_02.verticalScrollbar = null;
														pUVar5 = __this_01.gameObject;
														if (pUVar5 == null) goto label_05cb57a0;
														pUVar5.SetActive(false);
													}
													__this_03 = (RawImage)panel.GetComponent<RawImage>();
													pSVar7 = this.get_ThemePanel();
													value_01 = (Texture)UIManager.GetThemeTexture(pSVar7, "MainBody", "BackgroundTexture", "DefaultPanel");
													if (__this_03 != null) {
														__this_03.texture = value_01;
														pIVar6 = panel.GetComponent<RawImage>();
														pSVar7 = this.get_ThemePanel();
														UVar10 = UIManager.GetThemeColor(pSVar7, "MainBody", "BackgroundColor", "DefaultPanel");
														if (pIVar6 != null) {
															(*pIVar6.klass.vtable[0x17].methodPtr)(UVar10.r,UVar10.b,pIVar6, pIVar6.klass.vtable[0x17].method);
															pSVar7 = this.get_ThemePanel();
															UStack_88 = UIManager.GetThemeColorBlock(pSVar7, "MainBody", "Scrollbar", "DefaultPanel");
															value_00.m_NormalColor.b = UStack_88.m_NormalColor.b;
															value_00.m_NormalColor.a = UStack_88.m_NormalColor.a;
															value_00.m_NormalColor.r = UStack_88.m_NormalColor.r;
															value_00.m_NormalColor.g = UStack_88.m_NormalColor.g;
															value_00.m_HighlightedColor.r = UStack_88.m_HighlightedColor.r;
															value_00.m_HighlightedColor.g = UStack_88.m_HighlightedColor.g;
															value_00.m_HighlightedColor.b = UStack_88.m_HighlightedColor.b;
															value_00.m_HighlightedColor.a = UStack_88.m_HighlightedColor.a;
															value_00.m_PressedColor.r = UStack_88.m_PressedColor.r ;
															value_00.m_PressedColor.g = UStack_88.m_PressedColor.g ;
															value_00.m_PressedColor.b = UStack_88.m_PressedColor.b ;
															value_00.m_PressedColor.a = UStack_88.m_PressedColor.a ;
															value_00.m_SelectedColor.r = UStack_88.m_SelectedColor.r;
															value_00.m_SelectedColor.g = UStack_88.m_SelectedColor.g;
															value_00.m_SelectedColor.b = UStack_88.m_SelectedColor.b;
															value_00.m_SelectedColor.a = UStack_88.m_SelectedColor.a;
															value_00.m_DisabledColor.r = UStack_88.m_DisabledColor.r;
															value_00.m_DisabledColor.g = UStack_88.m_DisabledColor.g;
															value_00.m_DisabledColor.b = UStack_88.m_DisabledColor.b;
															value_00.m_DisabledColor.a = UStack_88.m_DisabledColor.a;
															value_00.m_ColorMultiplier = UStack_88.m_ColorMultiplier;
															value_00.m_FadeDuration = UStack_88.m_FadeDuration;
															__this_01.colors = value_00;
															pIVar6 = __this_01.GetComponent<Image>();
															pSVar7 = this.get_ThemePanel();
															UVar10 = UIManager.GetThemeColor(pSVar7, "MainBody", "ScrollbarBackgroundColor", "DefaultPanel");
															if (pIVar6 != null) {
																(*pIVar6.klass.vtable[0x17].methodPtr)(UVar10.r,UVar10.b,pIVar6, pIVar6.klass.vtable[0x17].method);
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
	label_05cb57a0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004883")]
	[Address(RVA = "0x5BB4950", Offset = "0x5BB3950", VA = "0x5BB4950")]
	protected void SetPanelPadding(GameObject panel)
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$SetPanelPadding): clean
		int iVar1;
		int right;
		int top;
		int bottom;
		VerticalLayoutGroup pUVar2;
		RectOffset __this_00;
		float value;

		if (panel != null) {
			pUVar2 = panel.GetComponent<VerticalLayoutGroup>();
			iVar1 = this.get_HorizontalPadding();
			right = this.get_HorizontalPadding();
			top = this.get_VerticalPadding();
			bottom = this.get_VerticalPadding();
			__this_00 = new RectOffset(iVar1, right, top, bottom);
			if (pUVar2 != null) {
				pUVar2.padding = __this_00;
				pUVar2 = panel.GetComponent<VerticalLayoutGroup>();
				value = this.get_VerticalSpacing();
				if (pUVar2 != null) {
					pUVar2.spacing = value;
					pUVar2 = panel.GetComponent<VerticalLayoutGroup>();
					iVar1 = this.get_PanelAlignment();
					if (pUVar2 != null) {
						pUVar2.childAlignment = iVar1;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004884")]
	[Address(RVA = "0x5BB57B0", Offset = "0x5BB47B0", VA = "0x5BB57B0", Slot = "30")]
	public virtual float GetPanelWidth()
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$GetPanelWidth): clean
		float fVar1;

		return fVar1;
	}

	[Token(Token = "0x6004885")]
	[Address(RVA = "0x5BB57D0", Offset = "0x5BB47D0", VA = "0x5BB57D0", Slot = "31")]
	public virtual float GetPanelHeight()
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$GetPanelHeight): clean
		float fVar1;

		return fVar1;
	}

	[Token(Token = "0x6004886")]
	[Address(RVA = "0x5BB57F0", Offset = "0x5BB47F0", VA = "0x5BB57F0", Slot = "32")]
	public virtual float GetPanelVerticalOffset()
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$GetPanelVerticalOffset): clean
		return 0.0;
	}

	[Token(Token = "0x6004887")]
	[Address(RVA = "0x5BB5800", Offset = "0x5BB4800", VA = "0x5BB5800", Slot = "33")]
	protected virtual float GetWidth()
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$GetWidth): clean
		float fVar1;

		return fVar1;
	}

	[Token(Token = "0x6004888")]
	[Address(RVA = "0x5BB5820", Offset = "0x5BB4820", VA = "0x5BB5820", Slot = "34")]
	protected virtual float GetHeight()
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$GetHeight): clean
		float fVar1;

		return fVar1;
	}

	[Token(Token = "0x6004889")]
	[Address(RVA = "0x5BB5840", Offset = "0x5BB4840", VA = "0x5BB5840")]
	public float GetPhysicalWidth()
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$GetPhysicalWidth): clean
		BaseMenu __this_00;
		RectTransform __this_01;
		Canvas __this_02;
		float fVar2;
		float local_18;

		__this_01 = this.GetComponent<RectTransform>();
		if (__this_01 != null) {
			__this_00 = UIManager.CurrentMenu;
			if (__this_00 != null) {
				__this_02 = __this_00.GetComponent<Canvas>();
				if (__this_02 != null) {
					fVar2 = __this_02.scaleFactor;
					return fVar2 * local_18;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600488A")]
	[Address(RVA = "0x5BB5900", Offset = "0x5BB4900", VA = "0x5BB5900")]
	public float GetPhysicalHeight()
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$GetPhysicalHeight): clean
		BaseMenu __this_00;
		RectTransform __this_01;
		Canvas __this_02;
		float fVar2;
		float fStack_14;

		__this_01 = this.GetComponent<RectTransform>();
		if (__this_01 != null) {
			__this_00 = UIManager.CurrentMenu;
			if (__this_00 != null) {
				__this_02 = __this_00.GetComponent<Canvas>();
				if (__this_02 != null) {
					fVar2 = __this_02.scaleFactor;
					return fVar2 * fStack_14;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600488B")]
	[Address(RVA = "0x5BB59D0", Offset = "0x5BB49D0", VA = "0x5BB59D0")]
	public BasePanel()
	{
		// Lifted from source/cpp/UI/BasePanel.c (UI.BasePanel$$.ctor): clean
		String defaultValue;
		List<BasePopup> __this_00;
		StringSetting __this_01;
		Dictionary<string, Type> __this_02;

		__this_00 = new List<BasePopup>();
		this._popups = __this_00;
		defaultValue = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this_01 = new StringSetting(defaultValue, 0x7fffffff);
		this._currentCategoryPanelName = __this_01;
		__this_02 = new Dictionary<string, Type>();
		this._categoryPanelTypes = __this_02;
		base();
		return;
	}
}
