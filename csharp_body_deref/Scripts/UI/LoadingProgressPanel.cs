// ==================== AoTTG2 cross-reference ====================
// Type: UI.LoadingProgressPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/LoadingProgressPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/LoadingMenu/LoadingProgressPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
			return null;
		}
	}

	[Token(Token = "0x17000E1D")]
	protected override float Width
	{
		[Token(Token = "0x60050E9")]
		[Address(RVA = "0x5C565D0", Offset = "0x5C555D0", VA = "0x5C565D0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E1E")]
	protected override float Height
	{
		[Token(Token = "0x60050EA")]
		[Address(RVA = "0x5C565E0", Offset = "0x5C555E0", VA = "0x5C565E0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E1F")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x60050EB")]
		[Address(RVA = "0x5C565F0", Offset = "0x5C555F0", VA = "0x5C565F0", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E20")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x60050EC")]
		[Address(RVA = "0x5C56600", Offset = "0x5C55600", VA = "0x5C56600", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E21")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x60050ED")]
		[Address(RVA = "0x5C56610", Offset = "0x5C55610", VA = "0x5C56610", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000E22")]
	protected override float AnimationTime
	{
		[Token(Token = "0x60050EE")]
		[Address(RVA = "0x5C56620", Offset = "0x5C55620", VA = "0x5C56620", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60050EF")]
	[Address(RVA = "0x5C56630", Offset = "0x5C55630", VA = "0x5C56630", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60050F0")]
	[Address(RVA = "0x5C56300", Offset = "0x5C55300", VA = "0x5C56300")]
	public void ShowImmediate(float progress)
	{
	}

	[Token(Token = "0x60050F1")]
	[Address(RVA = "0x5C56320", Offset = "0x5C55320", VA = "0x5C56320")]
	public void Show(float progress)
	{
	}

	[Token(Token = "0x60050F2")]
	[Address(RVA = "0x5C56A00", Offset = "0x5C55A00", VA = "0x5C56A00")]
	private void SetProgress(float progress)
	{
	}

	[Token(Token = "0x60050F3")]
	[Address(RVA = "0x5C56BD0", Offset = "0x5C55BD0", VA = "0x5C56BD0")]
	public LoadingProgressPanel()
	{
	}
}
