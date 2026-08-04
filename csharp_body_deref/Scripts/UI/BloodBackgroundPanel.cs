// ==================== AoTTG2 cross-reference ====================
// Type: UI.BloodBackgroundPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/BloodBackgroundPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/BloodBackgroundPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000608")]
internal class BloodBackgroundPanel : BasePopup
{
	[Token(Token = "0x4001CEB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected RawImage _loadingBackground;

	[Token(Token = "0x17000B99")]
	protected override string Title
	{
		[Token(Token = "0x6003CFD")]
		[Address(RVA = "0x429B650", Offset = "0x429B650", VA = "0x429B650", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B9A")]
	protected override float Width
	{
		[Token(Token = "0x6003CFE")]
		[Address(RVA = "0x429B670", Offset = "0x429B670", VA = "0x429B670", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B9B")]
	protected override float Height
	{
		[Token(Token = "0x6003CFF")]
		[Address(RVA = "0x429B680", Offset = "0x429B680", VA = "0x429B680", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B9C")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6003D00")]
		[Address(RVA = "0x429B690", Offset = "0x429B690", VA = "0x429B690", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B9D")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6003D01")]
		[Address(RVA = "0x429B6A0", Offset = "0x429B6A0", VA = "0x429B6A0", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B9E")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6003D02")]
		[Address(RVA = "0x429B6B0", Offset = "0x429B6B0", VA = "0x429B6B0", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000B9F")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6003D03")]
		[Address(RVA = "0x429B6C0", Offset = "0x429B6C0", VA = "0x429B6C0", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003D04")]
	[Address(RVA = "0x429B6D0", Offset = "0x429B6D0", VA = "0x429B6D0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003D05")]
	[Address(RVA = "0x429B7A0", Offset = "0x429B7A0", VA = "0x429B7A0", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6003D06")]
	[Address(RVA = "0x429B8F0", Offset = "0x429B8F0", VA = "0x429B8F0")]
	public BloodBackgroundPanel()
	{
	}
}
