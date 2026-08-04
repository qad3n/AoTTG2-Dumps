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

[Token(Token = "0x2000671")]
internal class LoadingBackgroundPanel : BasePopup
{
	[Token(Token = "0x4001F9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected GameObject _background;

	[Token(Token = "0x4001F9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public int BackgroundIndex;

	[Token(Token = "0x17000C54")]
	protected override string Title
	{
		[Token(Token = "0x60040A6")]
		[Address(RVA = "0x42EEBB0", Offset = "0x42EEBB0", VA = "0x42EEBB0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C55")]
	protected override float Width
	{
		[Token(Token = "0x60040A7")]
		[Address(RVA = "0x42EEBD0", Offset = "0x42EEBD0", VA = "0x42EEBD0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C56")]
	protected override float Height
	{
		[Token(Token = "0x60040A8")]
		[Address(RVA = "0x42EEBE0", Offset = "0x42EEBE0", VA = "0x42EEBE0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C57")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x60040A9")]
		[Address(RVA = "0x42EEBF0", Offset = "0x42EEBF0", VA = "0x42EEBF0", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C58")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x60040AA")]
		[Address(RVA = "0x42EEC00", Offset = "0x42EEC00", VA = "0x42EEC00", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C59")]
	protected override bool ShowOnTop
	{
		[Token(Token = "0x60040AB")]
		[Address(RVA = "0x42EEC10", Offset = "0x42EEC10", VA = "0x42EEC10", Slot = "52")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C5A")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x60040AC")]
		[Address(RVA = "0x42EEC20", Offset = "0x42EEC20", VA = "0x42EEC20", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000C5B")]
	protected override float AnimationTime
	{
		[Token(Token = "0x60040AD")]
		[Address(RVA = "0x42EEC30", Offset = "0x42EEC30", VA = "0x42EEC30", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60040AE")]
	[Address(RVA = "0x42EEC40", Offset = "0x42EEC40", VA = "0x42EEC40", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60040AF")]
	[Address(RVA = "0x42EECC0", Offset = "0x42EECC0", VA = "0x42EECC0")]
	public void SetRandomBackground(bool loading, bool seasonal = false)
	{
	}

	[Token(Token = "0x60040B0")]
	[Address(RVA = "0x42EEE80", Offset = "0x42EEE80", VA = "0x42EEE80")]
	public void SetBackground(bool loading, int backgroundIndex, string path = "MainBackgrounds")
	{
	}

	[Token(Token = "0x60040B1")]
	[Address(RVA = "0x42EF380", Offset = "0x42EF380", VA = "0x42EF380", Slot = "58")]
	protected override float GetAnimationSpeed(float min, float max)
	{
		return default(float);
	}

	[Token(Token = "0x60040B2")]
	[Address(RVA = "0x42EF420", Offset = "0x42EF420", VA = "0x42EF420")]
	public LoadingBackgroundPanel()
	{
	}
}
