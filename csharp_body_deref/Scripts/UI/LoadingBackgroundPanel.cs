// ==================== AoTTG2 cross-reference ====================
// Type: UI.LoadingBackgroundPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/LoadingBackgroundPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/LoadingMenu/LoadingBackgroundPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
			return null;
		}
	}

	[Token(Token = "0x17000E13")]
	protected override float Width
	{
		[Token(Token = "0x60050CF")]
		[Address(RVA = "0x5C555A0", Offset = "0x5C545A0", VA = "0x5C555A0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E14")]
	protected override float Height
	{
		[Token(Token = "0x60050D0")]
		[Address(RVA = "0x5C555B0", Offset = "0x5C545B0", VA = "0x5C555B0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E15")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x60050D1")]
		[Address(RVA = "0x5C555C0", Offset = "0x5C545C0", VA = "0x5C555C0", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E16")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x60050D2")]
		[Address(RVA = "0x5C555D0", Offset = "0x5C545D0", VA = "0x5C555D0", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E17")]
	protected override bool ShowOnTop
	{
		[Token(Token = "0x60050D3")]
		[Address(RVA = "0x5C555E0", Offset = "0x5C545E0", VA = "0x5C555E0", Slot = "52")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E18")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x60050D4")]
		[Address(RVA = "0x5C555F0", Offset = "0x5C545F0", VA = "0x5C555F0", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000E19")]
	protected override float AnimationTime
	{
		[Token(Token = "0x60050D5")]
		[Address(RVA = "0x5C55600", Offset = "0x5C54600", VA = "0x5C55600", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60050D6")]
	[Address(RVA = "0x5C55610", Offset = "0x5C54610", VA = "0x5C55610", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60050D7")]
	[Address(RVA = "0x5C55690", Offset = "0x5C54690", VA = "0x5C55690")]
	public void SetRandomBackground(bool loading, bool seasonal = false)
	{
	}

	[Token(Token = "0x60050D8")]
	[Address(RVA = "0x5C55840", Offset = "0x5C54840", VA = "0x5C55840")]
	public void SetBackground(bool loading, int backgroundIndex, string path = "MainBackgrounds")
	{
	}

	[Token(Token = "0x60050D9")]
	[Address(RVA = "0x5C55CA0", Offset = "0x5C54CA0", VA = "0x5C55CA0", Slot = "61")]
	protected override float GetAnimationSpeed(float min, float max)
	{
		return default(float);
	}

	[Token(Token = "0x60050DA")]
	[Address(RVA = "0x5C55D40", Offset = "0x5C54D40", VA = "0x5C55D40")]
	public LoadingBackgroundPanel()
	{
	}
}
