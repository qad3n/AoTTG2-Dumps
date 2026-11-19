// ==================== AoTTG2 cross-reference ====================
// Type: UI.BloodBackgroundPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/BloodBackgroundPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/BloodBackgroundPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000D5D")]
	protected override string Title
	{
		[Token(Token = "0x6004CE8")]
		[Address(RVA = "0x5BFC2E0", Offset = "0x5BFB2E0", VA = "0x5BFC2E0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D5E")]
	protected override float Width
	{
		[Token(Token = "0x6004CE9")]
		[Address(RVA = "0x5BFC300", Offset = "0x5BFB300", VA = "0x5BFC300", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D5F")]
	protected override float Height
	{
		[Token(Token = "0x6004CEA")]
		[Address(RVA = "0x5BFC310", Offset = "0x5BFB310", VA = "0x5BFC310", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D60")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004CEB")]
		[Address(RVA = "0x5BFC320", Offset = "0x5BFB320", VA = "0x5BFC320", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D61")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004CEC")]
		[Address(RVA = "0x5BFC330", Offset = "0x5BFB330", VA = "0x5BFC330", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D62")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004CED")]
		[Address(RVA = "0x5BFC340", Offset = "0x5BFB340", VA = "0x5BFC340", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000D63")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6004CEE")]
		[Address(RVA = "0x5BFC350", Offset = "0x5BFB350", VA = "0x5BFC350", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004CEF")]
	[Address(RVA = "0x5BFC360", Offset = "0x5BFB360", VA = "0x5BFC360", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004CF0")]
	[Address(RVA = "0x5BFC5C0", Offset = "0x5BFB5C0", VA = "0x5BFC5C0", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6004CF1")]
	[Address(RVA = "0x5BFC4C0", Offset = "0x5BFB4C0", VA = "0x5BFC4C0")]
	private static Texture2D LoadBloodTexture(int index)
	{
		return null;
	}

	[Token(Token = "0x6004CF2")]
	[Address(RVA = "0x5BFC620", Offset = "0x5BFB620", VA = "0x5BFC620")]
	public BloodBackgroundPanel()
	{
	}
}
