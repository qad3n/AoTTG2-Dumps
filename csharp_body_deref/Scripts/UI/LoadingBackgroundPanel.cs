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

[Token(Token = "0x20007CC")]
internal class LoadingBackgroundPanel : BasePopup
{
	[Token(Token = "0x4002774")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected GameObject _background;

	[Token(Token = "0x4002775")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public int BackgroundIndex;

	[Token(Token = "0x17000DA0")]
	protected override string Title
	{
		[Token(Token = "0x6004BA2")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DA1")]
	protected override float Width
	{
		[Token(Token = "0x6004BA3")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DA2")]
	protected override float Height
	{
		[Token(Token = "0x6004BA4")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DA3")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004BA5")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DA4")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004BA6")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DA5")]
	protected override bool ShowOnTop
	{
		[Token(Token = "0x6004BA7")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "52")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000DA6")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004BA8")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000DA7")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6004BA9")]
		[Address(RVA = "0x2245D40", Offset = "0x2244340", VA = "0x182245D40", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004BAA")]
	[Address(RVA = "0x227A780", Offset = "0x2278D80", VA = "0x18227A780", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004BAB")]
	[Address(RVA = "0x227A5E0", Offset = "0x2278BE0", VA = "0x18227A5E0")]
	public void SetRandomBackground(bool loading, bool seasonal = false)
	{
	}

	[Token(Token = "0x6004BAC")]
	[Address(RVA = "0x227A1E0", Offset = "0x22787E0", VA = "0x18227A1E0")]
	public void SetBackground(bool loading, int backgroundIndex, string path = "MainBackgrounds")
	{
	}

	[Token(Token = "0x6004BAD")]
	[Address(RVA = "0x227A130", Offset = "0x2278730", VA = "0x18227A130", Slot = "61")]
	protected override float GetAnimationSpeed(float min, float max)
	{
		return default(float);
	}

	[Token(Token = "0x6004BAE")]
	[Address(RVA = "0x227A800", Offset = "0x2278E00", VA = "0x18227A800")]
	public LoadingBackgroundPanel()
	{
	}
}
