// ==================== AoTTG2 cross-reference ====================
// Type: UI.BloodBackgroundPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/BloodBackgroundPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/BloodBackgroundPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000762")]
internal class BloodBackgroundPanel : BasePopup
{
	[Token(Token = "0x400248C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected RawImage _loadingBackground;

	[Token(Token = "0x17000CE0")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x60047D2")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000CE1")]
	protected override string Title
	{
		[Token(Token = "0x60047D3")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CE2")]
	protected override float Width
	{
		[Token(Token = "0x60047D4")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CE3")]
	protected override float Height
	{
		[Token(Token = "0x60047D5")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CE4")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x60047D6")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CE5")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x60047D7")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CE6")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x60047D8")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000CE7")]
	protected override float AnimationTime
	{
		[Token(Token = "0x60047D9")]
		[Address(RVA = "0x21779B0", Offset = "0x2175FB0", VA = "0x1821779B0", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60047DA")]
	[Address(RVA = "0x221D010", Offset = "0x221B610", VA = "0x18221D010", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60047DB")]
	[Address(RVA = "0x221D0E0", Offset = "0x221B6E0", VA = "0x18221D0E0", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x60047DC")]
	[Address(RVA = "0x21C11A0", Offset = "0x21BF7A0", VA = "0x1821C11A0")]
	public BloodBackgroundPanel()
	{
	}
}
