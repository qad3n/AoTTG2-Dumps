// ==================== AoTTG2 cross-reference ====================
// Type: UI.LoadingProgressPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/LoadingProgressPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/LoadingMenu/LoadingProgressPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace UI;

[Token(Token = "0x20007CF")]
internal class LoadingProgressPanel : BasePopup
{
	[Token(Token = "0x400277C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private TMP_Text _label;

	[Token(Token = "0x400277D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private RectTransform _fill;

	[Token(Token = "0x17000DAA")]
	protected override string Title
	{
		[Token(Token = "0x6004BBB")]
		[Address(RVA = "0x227B3F0", Offset = "0x22799F0", VA = "0x18227B3F0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DAB")]
	protected override float Width
	{
		[Token(Token = "0x6004BBC")]
		[Address(RVA = "0x21D9B60", Offset = "0x21D8160", VA = "0x1821D9B60", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DAC")]
	protected override float Height
	{
		[Token(Token = "0x6004BBD")]
		[Address(RVA = "0x227B3E0", Offset = "0x22799E0", VA = "0x18227B3E0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DAD")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004BBE")]
		[Address(RVA = "0x20CF520", Offset = "0x20CDB20", VA = "0x1820CF520", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DAE")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004BBF")]
		[Address(RVA = "0x20CF520", Offset = "0x20CDB20", VA = "0x1820CF520", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DAF")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004BC0")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000DB0")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6004BC1")]
		[Address(RVA = "0x2245D40", Offset = "0x2244340", VA = "0x182245D40", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004BC2")]
	[Address(RVA = "0x227AF80", Offset = "0x2279580", VA = "0x18227AF80", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004BC3")]
	[Address(RVA = "0x227B3A0", Offset = "0x22799A0", VA = "0x18227B3A0")]
	public void ShowImmediate(float progress)
	{
	}

	[Token(Token = "0x6004BC4")]
	[Address(RVA = "0x227B3C0", Offset = "0x22799C0", VA = "0x18227B3C0")]
	public void Show(float progress)
	{
	}

	[Token(Token = "0x6004BC5")]
	[Address(RVA = "0x227ADC0", Offset = "0x22793C0", VA = "0x18227ADC0")]
	private void SetProgress(float progress)
	{
	}

	[Token(Token = "0x6004BC6")]
	[Address(RVA = "0x21C11A0", Offset = "0x21BF7A0", VA = "0x1821C11A0")]
	public LoadingProgressPanel()
	{
	}
}
