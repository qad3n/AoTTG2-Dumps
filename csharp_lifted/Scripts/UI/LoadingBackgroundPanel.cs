// ==================== AoTTG2 cross-reference ====================
// Type: UI.LoadingBackgroundPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/LoadingBackgroundPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/LoadingMenu/LoadingBackgroundPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200087A")]
internal class LoadingBackgroundPanel : BasePopup
{
	[Token(Token = "0x4002AFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected GameObject _background;

	[Token(Token = "0x4002AFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public int BackgroundIndex;

	[Token(Token = "0x17000E12")]
	protected override string Title
	{
		[Token(Token = "0x60050CE")]
		[Address(RVA = "0x5C55580", Offset = "0x5C54580", VA = "0x5C55580", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/LoadingBackgroundPanel.c (UI.LoadingBackgroundPanel$$get_Title): clean
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
	}

	[Token(Token = "0x17000E13")]
	protected override float Width
	{
		[Token(Token = "0x60050CF")]
		[Address(RVA = "0x5C555A0", Offset = "0x5C545A0", VA = "0x5C555A0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/LoadingBackgroundPanel.c (UI.LoadingBackgroundPanel$$get_Width): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000E14")]
	protected override float Height
	{
		[Token(Token = "0x60050D0")]
		[Address(RVA = "0x5C555B0", Offset = "0x5C545B0", VA = "0x5C555B0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/LoadingBackgroundPanel.c (UI.LoadingBackgroundPanel$$get_Height): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000E15")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x60050D1")]
		[Address(RVA = "0x5C555C0", Offset = "0x5C545C0", VA = "0x5C555C0", Slot = "36")]
		get
		{
			// Lifted from source/cpp/UI/LoadingBackgroundPanel.c (UI.LoadingBackgroundPanel$$get_TopBarHeight): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000E16")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x60050D2")]
		[Address(RVA = "0x5C555D0", Offset = "0x5C545D0", VA = "0x5C555D0", Slot = "37")]
		get
		{
			// Lifted from source/cpp/UI/LoadingBackgroundPanel.c (UI.LoadingBackgroundPanel$$get_BottomBarHeight): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000E17")]
	protected override bool ShowOnTop
	{
		[Token(Token = "0x60050D3")]
		[Address(RVA = "0x5C555E0", Offset = "0x5C545E0", VA = "0x5C555E0", Slot = "52")]
		get
		{
			// Lifted from source/cpp/UI/LoadingBackgroundPanel.c (UI.LoadingBackgroundPanel$$get_ShowOnTop): clean
			return false;
		}
	}

	[Token(Token = "0x17000E18")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x60050D4")]
		[Address(RVA = "0x5C555F0", Offset = "0x5C545F0", VA = "0x5C555F0", Slot = "54")]
		get
		{
			// Lifted from source/cpp/UI/LoadingBackgroundPanel.c (UI.LoadingBackgroundPanel$$get_PopupAnimationType): clean
			return 1;
		}
	}

	[Token(Token = "0x17000E19")]
	protected override float AnimationTime
	{
		[Token(Token = "0x60050D5")]
		[Address(RVA = "0x5C55600", Offset = "0x5C54600", VA = "0x5C55600", Slot = "51")]
		get
		{
			// Lifted from source/cpp/UI/LoadingBackgroundPanel.c (UI.LoadingBackgroundPanel$$get_AnimationTime): clean
			return 0.2;
		}
	}

	[Token(Token = "0x60050D6")]
	[Address(RVA = "0x5C55610", Offset = "0x5C54610", VA = "0x5C55610", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/LoadingBackgroundPanel.c (UI.LoadingBackgroundPanel$$Setup): clean
		Transform parent_00;
		GameObject pUVar1;

		this.Setup(parent);
		parent_00 = this.transform;
		pUVar1 = ElementFactory.InstantiateAndBind(parent_00, "Prefabs/MainMenu/MainBackground");
		this._background = pUVar1;
		return;
	}

	[Token(Token = "0x60050D7")]
	[Address(RVA = "0x5C55690", Offset = "0x5C54690", VA = "0x5C55690")]
	public void SetRandomBackground(bool loading, bool seasonal = false)
	{
		// Lifted from source/cpp/UI/LoadingBackgroundPanel.c (UI.LoadingBackgroundPanel$$SetRandomBackground): 1 lines keep C-only constructs
		bool bVar1;
		int iVar2;
		int iVar3;
		JSONNode pSVar4;
		JSONArray pSVar5;
		String pSVar6;
		String path;

		path = "MainBackgrounds";
		pSVar6 = "EventBackgrounds";
		if (seasonal) {
			pSVar4 = MainMenu.MainBackgroundInfo;
			if (pSVar4 == null) goto label_05d55830;
			bVar1 = pSVar4.HasKey("EventBackgrounds");
			if (bVar1) {
				pSVar4 = MainMenu.MainBackgroundInfo;
				if (((pSVar4 == null) ||(pSVar4 = pSVar4.get_Item(pSVar6), pSVar4 == null)) ||(pSVar5 = pSVar4.get_AsArray(), pSVar5 == null)) goto label_05d55830;
				iVar2 = (**(code*)((long)pSVar5.klass + 0x1e8))(pSVar5,*(ulong)((long)pSVar5.klass + 0x1f0));
				if (0 < iVar2) {
					path = pSVar6;
				}
			}
		}
		pSVar4 = MainMenu.MainBackgroundInfo;
		if (loading) {
			if (pSVar4 == null) goto label_05d55830;
			pSVar6 = "LoadingBackgrounds";
		}
		else {
			pSVar6 = path;
			if (pSVar4 == null) goto label_05d55830;
		}
		pSVar4 = pSVar4.get_Item(pSVar6);
		if (pSVar4 != null) {
			do {
				iVar3 = pSVar4.get_Count();
				iVar3 = Random.Range(0, iVar3);
			} while (iVar3 == this.BackgroundIndex);
			this.SetBackground(loading, iVar3, path);
			return;
		}
	label_05d55830: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60050D8")]
	[Address(RVA = "0x5C55840", Offset = "0x5C54840", VA = "0x5C55840")]
	public void SetBackground(bool loading, int backgroundIndex, string path = "MainBackgrounds")
	{
		// Lifted from source/cpp/UI/LoadingBackgroundPanel.c (UI.LoadingBackgroundPanel$$SetBackground): 3 lines keep C-only constructs
		uint uVar1;
		GameObject __this_00;
		String pSVar2;
		Vector2 value;
		int iVar3;
		int iVar4;
		JSONNode pSVar5;
		Transform pUVar6;
		RawImage __this_01;
		String pSVar7;
		Texture pUVar8;
		RectTransform __this_02;
		float fVar9;

		this.BackgroundIndex = backgroundIndex;
		pSVar5 = MainMenu.MainBackgroundInfo;
		if (loading) {
			if (pSVar5 == null) goto label_05d55b79;
			path = "LoadingBackgrounds";
		}
		else if (pSVar5 == null) goto label_05d55b79;
		pSVar5 = pSVar5.get_Item(path);
		__this_00 = this._background;
		if (__this_00 != null) {
			pUVar6 = __this_00.transform;
			if (pUVar6 != null) {
				pUVar6 = pUVar6.Find("Image");
				if (pUVar6 != null) {
					__this_01 = pUVar6.GetComponent<RawImage>();
					uVar1 = (typeof(ResourcePaths)._2).cctor_finished_or_no_cctor;
					if (this.BackgroundIndex < 0) {
						if (uVar1 == 0) {
						}
						pSVar2 = ResourcePaths.UI;
						pUVar8 = (Texture)ResourceManager.LoadAsset(pSVar2, "Backgrounds/MainBackgroundBlankTexture", false, false);
						if (__this_01 == null) {
							throw new NullReferenceException();
						}
						if ((pUVar8 != null) &&(pUVar8.klass != (Texture)typeof(Texture2D))) {
							throw new InvalidCastException();
						}
						__this_01.texture = pUVar8;
					}
					else {
						if (uVar1 == 0) {
						}
						if (pSVar5 == null) {
							throw new NullReferenceException();
						}
						pSVar2 = ResourcePaths.UI;
						pSVar5 = pSVar5.get_Item(backgroundIndex);
						if (pSVar5 == null) {
							throw new NullReferenceException();
						}
						pSVar7 = (String)(**(code*)((long)pSVar5.klass + 0x1c8))(pSVar5,*(ulong)((long)pSVar5.klass + 0x1d0));
						pSVar7 = String.Concat("Backgrounds/", pSVar7);
						pUVar8 = (Texture)ResourceManager.LoadAsset(pSVar2, pSVar7, false, false) ;
						if (__this_01 == null) {
							throw new NullReferenceException();
						}
						if ((pUVar8 != null) &&(pUVar8.klass != (Texture)typeof(Texture2D))) {
							throw new InvalidCastException();
						}
						__this_01.texture = pUVar8;
					}
					pUVar8 = __this_01.m_Texture;
					if (pUVar8 == null) {
						throw new NullReferenceException();
					}
					iVar3 = pUVar8.get_width();
					pUVar8 = __this_01.m_Texture;
					if (pUVar8 == null) {
						throw new NullReferenceException();
					}
					iVar4 = pUVar8.get_height();
					__this_02 = __this_01.GetComponent<RectTransform>();
					if (__this_02 == null) {
						throw new NullReferenceException();
					}
					fVar9 = (float)iVar4 * (1928.0 / (float)iVar3);
					if (fVar9 <= 1084.0) {
						fVar9 = 1084.0;
					}
					value.y = fVar9;
					value.x = 1928.0;
					__this_02.sizeDelta = value;
					return;
				}
			}
		}
	label_05d55b79: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60050D9")]
	[Address(RVA = "0x5C55CA0", Offset = "0x5C54CA0", VA = "0x5C55CA0", Slot = "61")]
	protected override float GetAnimationSpeed(float min, float max)
	{
		// Lifted from source/cpp/UI/LoadingBackgroundPanel.c (UI.LoadingBackgroundPanel$$GetAnimationSpeed): clean
		UISettings pSVar1;
		BoolSetting pSVar2;
		float fVar3;

		pSVar1 = SettingsManager.UISettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.FadeLoadscreen, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		if (pSVar2._value == false) {
			return (max - min) / 0.01;
		}
		fVar3 = this.GetAnimationSpeed(min, max);
		return fVar3;
	}

	[Token(Token = "0x60050DA")]
	[Address(RVA = "0x5C55D40", Offset = "0x5C54D40", VA = "0x5C55D40")]
	public LoadingBackgroundPanel()
	{
		// Lifted from source/cpp/UI/LoadingBackgroundPanel.c (UI.LoadingBackgroundPanel$$.ctor): clean
		this.BackgroundIndex = -1;
		base();
		return;
	}
}
