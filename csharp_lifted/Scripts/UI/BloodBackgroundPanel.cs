// ==================== AoTTG2 cross-reference ====================
// Type: UI.BloodBackgroundPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/BloodBackgroundPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/BloodBackgroundPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000809")]
internal class BloodBackgroundPanel : BasePopup
{
	[Token(Token = "0x40027FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected RawImage _loadingBackground;

	[Token(Token = "0x40027FB")]
	private const int BloodTextureCount = 5;

	[Token(Token = "0x17000D5C")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004CE7")]
		[Address(RVA = "0x5BFC2D0", Offset = "0x5BFB2D0", VA = "0x5BFC2D0", Slot = "55")]
		get
		{
			// Lifted from source/cpp/UI/BloodBackgroundPanel.c (UI.BloodBackgroundPanel$$get_EscapeBehavior): clean
			return 2;
		}
	}

	[Token(Token = "0x17000D5D")]
	protected override string Title
	{
		[Token(Token = "0x6004CE8")]
		[Address(RVA = "0x5BFC2E0", Offset = "0x5BFB2E0", VA = "0x5BFC2E0", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/BloodBackgroundPanel.c (UI.BloodBackgroundPanel$$get_Title): clean
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
	}

	[Token(Token = "0x17000D5E")]
	protected override float Width
	{
		[Token(Token = "0x6004CE9")]
		[Address(RVA = "0x5BFC300", Offset = "0x5BFB300", VA = "0x5BFC300", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/BloodBackgroundPanel.c (UI.BloodBackgroundPanel$$get_Width): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000D5F")]
	protected override float Height
	{
		[Token(Token = "0x6004CEA")]
		[Address(RVA = "0x5BFC310", Offset = "0x5BFB310", VA = "0x5BFC310", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/BloodBackgroundPanel.c (UI.BloodBackgroundPanel$$get_Height): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000D60")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004CEB")]
		[Address(RVA = "0x5BFC320", Offset = "0x5BFB320", VA = "0x5BFC320", Slot = "36")]
		get
		{
			// Lifted from source/cpp/UI/BloodBackgroundPanel.c (UI.BloodBackgroundPanel$$get_TopBarHeight): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000D61")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004CEC")]
		[Address(RVA = "0x5BFC330", Offset = "0x5BFB330", VA = "0x5BFC330", Slot = "37")]
		get
		{
			// Lifted from source/cpp/UI/BloodBackgroundPanel.c (UI.BloodBackgroundPanel$$get_BottomBarHeight): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000D62")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004CED")]
		[Address(RVA = "0x5BFC340", Offset = "0x5BFB340", VA = "0x5BFC340", Slot = "54")]
		get
		{
			// Lifted from source/cpp/UI/BloodBackgroundPanel.c (UI.BloodBackgroundPanel$$get_PopupAnimationType): clean
			return 1;
		}
	}

	[Token(Token = "0x17000D63")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6004CEE")]
		[Address(RVA = "0x5BFC350", Offset = "0x5BFB350", VA = "0x5BFC350", Slot = "51")]
		get
		{
			// Lifted from source/cpp/UI/BloodBackgroundPanel.c (UI.BloodBackgroundPanel$$get_AnimationTime): clean
			return 0.5;
		}
	}

	[Token(Token = "0x6004CEF")]
	[Address(RVA = "0x5BFC360", Offset = "0x5BFB360", VA = "0x5BFC360", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/BloodBackgroundPanel.c (UI.BloodBackgroundPanel$$Setup): clean
		GraphicsSettings pSVar1;
		BoolSetting pSVar2;
		Transform pUVar3;
		GameObject __this_00;
		RawImage method_00;

		this.Setup(parent);
		pUVar3 = this.transform;
		__this_00 = ElementFactory.InstantiateAndBind(pUVar3, "Prefabs/MainMenu/MainBackground");
		if (__this_00 != null) {
			pUVar3 = __this_00.transform;
			if (pUVar3 != null) {
				pUVar3 = pUVar3.Find("Image");
				if (pUVar3 != null) {
					method_00 = pUVar3.GetComponent<RawImage>();
					this._loadingBackground = method_00;
					pSVar1 = SettingsManager.GraphicsSettings;
					if ((pSVar1 != null) &&(pSVar2 = pSVar1.BloodSplatterEnabled, pSVar2 != null)) {
						if (pSVar2._value == false) {
							return;
						}
						BloodBackgroundPanel.LoadBloodTexture(1);
						BloodBackgroundPanel.LoadBloodTexture(2);
						BloodBackgroundPanel.LoadBloodTexture(3);
						BloodBackgroundPanel.LoadBloodTexture(4);
						BloodBackgroundPanel.LoadBloodTexture(5);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004CF0")]
	[Address(RVA = "0x5BFC5C0", Offset = "0x5BFB5C0", VA = "0x5BFC5C0", Slot = "21")]
	public override void Show()
	{
		// Lifted from source/cpp/UI/BloodBackgroundPanel.c (UI.BloodBackgroundPanel$$Show): 1 lines keep C-only constructs
		RawImage __this_00;
		int index;
		Texture value;
		MethodInfo method_00;

		if (this.IsActive != false) {
			return;
		}
		__this_00 = this._loadingBackground;
		method_00 = (MethodInfo)&g_data_00000006;
		index = Random.Range(1, 6);
		value = (Texture)BloodBackgroundPanel.LoadBloodTexture(index);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.texture = value;
		this.Show();
		return;
	}

	[Token(Token = "0x6004CF1")]
	[Address(RVA = "0x5BFC4C0", Offset = "0x5BFB4C0", VA = "0x5BFC4C0")]
	private static Texture2D LoadBloodTexture(int index)
	{
		// Lifted from source/cpp/UI/BloodBackgroundPanel.c (UI.BloodBackgroundPanel$$LoadBloodTexture): 1 lines keep C-only constructs
		String path;
		String pSVar1;
		Texture2D pUVar2;
		int local_14;

		path = ResourcePaths.UI;
		pSVar1 = local_14.ToString();
		pSVar1 = String.Concat("Backgrounds/Blood/Blood", pSVar1, "BackgroundTexture") ;
		pUVar2 = (Texture2D)ResourceManager.LoadAsset(path, pSVar1, false, true);
		if ((pUVar2 != null) && (pUVar2.klass != typeof(Texture2D))) {
			throw new InvalidCastException();
		}
		return pUVar2;
	}

	[Token(Token = "0x6004CF2")]
	[Address(RVA = "0x5BFC620", Offset = "0x5BFB620", VA = "0x5BFC620")]
	public BloodBackgroundPanel()
	{
		// Lifted from source/cpp/UI/BloodBackgroundPanel.c (UI.BloodBackgroundPanel$$.ctor): clean
		base();
		return;
	}
}
