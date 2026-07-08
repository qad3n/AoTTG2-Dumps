using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005ED")]
internal class GlobalPauseGamePopup : BasePopup
{
	[Token(Token = "0x4001CBB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _label;

	[Token(Token = "0x17000B5F")]
	protected override string Title
	{
		[Token(Token = "0x6003C2B")]
		[Address(RVA = "0x3FADF60", Offset = "0x3FADF60", VA = "0x3FADF60", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B60")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6003C2C")]
		[Address(RVA = "0x3FADF90", Offset = "0x3FADF90", VA = "0x3FADF90", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B61")]
	protected override float Width
	{
		[Token(Token = "0x6003C2D")]
		[Address(RVA = "0x3FADFC0", Offset = "0x3FADFC0", VA = "0x3FADFC0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B62")]
	protected override float Height
	{
		[Token(Token = "0x6003C2E")]
		[Address(RVA = "0x3FADFD0", Offset = "0x3FADFD0", VA = "0x3FADFD0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B63")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6003C2F")]
		[Address(RVA = "0x3FADFE0", Offset = "0x3FADFE0", VA = "0x3FADFE0", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B64")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6003C30")]
		[Address(RVA = "0x3FADFF0", Offset = "0x3FADFF0", VA = "0x3FADFF0", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B65")]
	protected override int TitleFontSize
	{
		[Token(Token = "0x6003C31")]
		[Address(RVA = "0x3FAE000", Offset = "0x3FAE000", VA = "0x3FAE000", Slot = "40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B66")]
	protected override int ButtonFontSize
	{
		[Token(Token = "0x6003C32")]
		[Address(RVA = "0x3FAE010", Offset = "0x3FAE010", VA = "0x3FAE010", Slot = "41")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B67")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003C33")]
		[Address(RVA = "0x3FAE020", Offset = "0x3FAE020", VA = "0x3FAE020", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B68")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003C34")]
		[Address(RVA = "0x3FAE030", Offset = "0x3FAE030", VA = "0x3FAE030", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B69")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6003C35")]
		[Address(RVA = "0x3FAE040", Offset = "0x3FAE040", VA = "0x3FAE040", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000B6A")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6003C36")]
		[Address(RVA = "0x3FAE050", Offset = "0x3FAE050", VA = "0x3FAE050", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000B6B")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6003C37")]
		[Address(RVA = "0x3FAE060", Offset = "0x3FAE060", VA = "0x3FAE060", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003C38")]
	[Address(RVA = "0x3FAE070", Offset = "0x3FAE070", VA = "0x3FAE070", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003C39")]
	[Address(RVA = "0x3FAE3B0", Offset = "0x3FAE3B0", VA = "0x3FAE3B0")]
	public void SetLabel(string label)
	{
	}

	[Token(Token = "0x6003C3A")]
	[Address(RVA = "0x3FAE3E0", Offset = "0x3FAE3E0", VA = "0x3FAE3E0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003C3B")]
	[Address(RVA = "0x3FAE440", Offset = "0x3FAE440", VA = "0x3FAE440")]
	public GlobalPauseGamePopup()
	{
	}
}
