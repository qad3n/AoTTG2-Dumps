// ==================== AoTTG2 cross-reference ====================
// Type: UI.LoadingProgressPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/LoadingProgressPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/LoadingMenu/LoadingProgressPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace UI;

[Token(Token = "0x200087D")]
internal class LoadingProgressPanel : BasePopup
{
	[Token(Token = "0x4002B05")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private TMP_Text _label;

	[Token(Token = "0x4002B06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private RectTransform _fill;

	[Token(Token = "0x17000E1C")]
	protected override string Title
	{
		[Token(Token = "0x60050E8")]
		[Address(RVA = "0x5C56570", Offset = "0x5C55570", VA = "0x5C56570", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/LoadingProgressPanel.c (UI.LoadingProgressPanel$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocaleCommon("Loading");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000E1D")]
	protected override float Width
	{
		[Token(Token = "0x60050E9")]
		[Address(RVA = "0x5C565D0", Offset = "0x5C555D0", VA = "0x5C565D0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/LoadingProgressPanel.c (UI.LoadingProgressPanel$$get_Width): clean
			return 340.0;
		}
	}

	[Token(Token = "0x17000E1E")]
	protected override float Height
	{
		[Token(Token = "0x60050EA")]
		[Address(RVA = "0x5C565E0", Offset = "0x5C555E0", VA = "0x5C565E0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/LoadingProgressPanel.c (UI.LoadingProgressPanel$$get_Height): clean
			return 180.0;
		}
	}

	[Token(Token = "0x17000E1F")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x60050EB")]
		[Address(RVA = "0x5C565F0", Offset = "0x5C555F0", VA = "0x5C565F0", Slot = "36")]
		get
		{
			// Lifted from source/cpp/UI/LoadingProgressPanel.c (UI.LoadingProgressPanel$$get_TopBarHeight): clean
			return 50.0;
		}
	}

	[Token(Token = "0x17000E20")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x60050EC")]
		[Address(RVA = "0x5C56600", Offset = "0x5C55600", VA = "0x5C56600", Slot = "37")]
		get
		{
			// Lifted from source/cpp/UI/LoadingProgressPanel.c (UI.LoadingProgressPanel$$get_BottomBarHeight): clean
			return 50.0;
		}
	}

	[Token(Token = "0x17000E21")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x60050ED")]
		[Address(RVA = "0x5C56610", Offset = "0x5C55610", VA = "0x5C56610", Slot = "54")]
		get
		{
			// Lifted from source/cpp/UI/LoadingProgressPanel.c (UI.LoadingProgressPanel$$get_PopupAnimationType): clean
			return 1;
		}
	}

	[Token(Token = "0x17000E22")]
	protected override float AnimationTime
	{
		[Token(Token = "0x60050EE")]
		[Address(RVA = "0x5C56620", Offset = "0x5C55620", VA = "0x5C56620", Slot = "51")]
		get
		{
			// Lifted from source/cpp/UI/LoadingProgressPanel.c (UI.LoadingProgressPanel$$get_AnimationTime): clean
			return 0.2;
		}
	}

	[Token(Token = "0x60050EF")]
	[Address(RVA = "0x5C56630", Offset = "0x5C55630", VA = "0x5C56630", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/LoadingProgressPanel.c (UI.LoadingProgressPanel$$Setup): 1 lines keep C-only constructs
		Transform pUVar1;
		AottgInGameView __this_00;
		String pSVar2;
		TMP_Text pTVar3;
		RectTransform pUVar4;
		float fVar5;
		float fVar6;
		float headerHeight;
		float footerHeight;
		Nullable<float> local_28;

		this.Parent = parent;
		pUVar1 = this.transform;
		fVar5 = this.get_Width();
		fVar6 = this.get_Height();
		headerHeight = this.get_TopBarHeight();
		footerHeight = this.get_BottomBarHeight();
		__this_00 = AottgInGameView.ScaledPopupShell(pUVar1, fVar5, fVar6, headerHeight, footerHeight, ref this.TopBar, ref this.BottomBar, "inGameHeader");
		pUVar1 = this.TopBar;
		pSVar2 = this.get_Title();
		fVar5 = this.get_Width();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Text(pUVar1, pSVar2, fVar5 + -48.0, 40.0, "inGameTitle");
		pUVar1 = this.transform;
		fVar5 = this.get_Width();
		fVar6 = this.GetPanelHeight();
		local_28.hasValue = false;
		local_28._1_3_ = 0;
		local_28.value = 0.0;
		local_28 = new Nullable<float>(8.0);
		pUVar1 = __this_00.Panel(pUVar1, "clear", fVar5 + -64.0, fVar6, false, (Nullable<float>)local_28);
		AottgInGameView.Position(pUVar1, (Vector2)(Vector2.zeroVector));
		fVar5 = this.get_Width();
		pTVar3 = __this_00.Text(pUVar1, "0%", fVar5 + -64.0, 28.0, "inGameText");
		this._label = pTVar3;
		fVar5 = this.get_Width();
		pUVar4 = __this_00.ProgressBar(pUVar1, fVar5 + -64.0, 10.0);
		this._fill = pUVar4;
		pUVar1 = this.BottomBar;
		pSVar2 = UIManager.GetLocaleCommon("Quit");
		__this_00.Button(pUVar1, pSVar2, "ingame.loading.quit", null, 200.0, 36.0, 3);
		return;
	}

	[Token(Token = "0x60050F0")]
	[Address(RVA = "0x5C56300", Offset = "0x5C55300", VA = "0x5C56300")]
	public void ShowImmediate(float progress)
	{
		// Lifted from source/cpp/UI/LoadingProgressPanel.c (UI.LoadingProgressPanel$$ShowImmediate): clean
		this.SetProgress(progress);
		this.ShowImmediate();
		return;
	}

	[Token(Token = "0x60050F1")]
	[Address(RVA = "0x5C56320", Offset = "0x5C55320", VA = "0x5C56320")]
	public void Show(float progress)
	{
		// Lifted from source/cpp/UI/LoadingProgressPanel.c (UI.LoadingProgressPanel$$Show): clean
		this.SetProgress(progress);
		this.Show();
		return;
	}

	[Token(Token = "0x60050F2")]
	[Address(RVA = "0x5C56A00", Offset = "0x5C55A00", VA = "0x5C56A00")]
	private void SetProgress(float progress)
	{
		// Lifted from source/cpp/UI/LoadingProgressPanel.c (UI.LoadingProgressPanel$$SetProgress): 12 lines keep C-only constructs
		TMP_Text pTVar1;
		RectTransform fill;
		double dVar2;
		String pSVar3;
		MethodInfo method_00;
		float fVar4;
		uint in_XMM0_Db;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		int local_3c;
		double local_38;
		Il2CppMethodPointer local_30;
		byte[] local_28 = new byte[16];

		if (g_data_07547f2e == false) {
			local_28._4_4_ = in_XMM0_Db;
			local_28._0_4_ = progress;
			local_28._8_4_ = in_XMM0_Dc;
			local_28._12_4_ = in_XMM0_Dd;
			g_data_07547f2e = true;
			progress = (float)local_28._0_4_;
		}
		fVar4 = 1.0;
		if (progress <= 1.0) {
			fVar4 = progress;
		}
		fVar4 = (float)(-(uint)(0.0 <= progress) & (uint)fVar4);
		pTVar1 = this._label;
		local_28 = ZEXT416((uint)fVar4);
		if (Il2CppMethodInitialized_07541320 == false) {
			Il2CppMethodInitialized_07541320 = true;
			fVar4 = (float)local_28._0_4_;
		}
		local_38 = (double)(fVar4 * 100.0);
		method_00 = (MethodInfo)&local_30;
		dVar2 = modf(local_38, (double)method_00, method);
		if (0.0 <= fVar4 * 100.0) {
			if ((dVar2 != 0.5) || (NAN(dVar2))) {
				local_30 = (Il2CppMethodPointer)floor(local_38 + 0.5, method_00);
			}
			else if (((long)(double)local_30 & 1U) != 0) {
				local_30 = (Il2CppMethodPointer)((double)local_30 + 1.0);
			}
		}
		else if ((dVar2 != -0.5) || (NAN(dVar2))) {
			local_30 = (Il2CppMethodPointer)ceil(local_38 + -0.5, method_00);
		}
		else if (((long)(double)local_30 & 1U) != 0) {
			local_30 = (Il2CppMethodPointer)((double)local_30 + -1.0);
		}
		local_3c = (int)(double)local_30;
		pSVar3 = local_3c.ToString();
		pSVar3 = String.Concat(pSVar3, "%");
		if (pTVar1 == null) {
			throw new NullReferenceException();
		}
		pTVar1.set_text(pSVar3) ;
		fill = this._fill;
		AottgInGameView.SetProgress(fill, (float)local_28._0_4_);
		return;
	}

	[Token(Token = "0x60050F3")]
	[Address(RVA = "0x5C56BD0", Offset = "0x5C55BD0", VA = "0x5C56BD0")]
	public LoadingProgressPanel()
	{
		// Lifted from source/cpp/UI/LoadingProgressPanel.c (UI.LoadingProgressPanel$$.ctor): clean
		base();
		return;
	}
}
