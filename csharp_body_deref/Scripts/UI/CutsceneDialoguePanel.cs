using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005E7")]
internal class CutsceneDialoguePanel : BasePopup
{
	[Token(Token = "0x4001C92")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _contentLabel;

	[Token(Token = "0x4001C93")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _titleLabel;

	[Token(Token = "0x4001C94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private RawImage _image;

	[Token(Token = "0x4001C95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private GameObject _labelRight;

	[Token(Token = "0x17000B50")]
	protected override string Title
	{
		[Token(Token = "0x6003BF7")]
		[Address(RVA = "0x3FA99A0", Offset = "0x3FA99A0", VA = "0x3FA99A0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B51")]
	protected override float Width
	{
		[Token(Token = "0x6003BF8")]
		[Address(RVA = "0x3FA99C0", Offset = "0x3FA99C0", VA = "0x3FA99C0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B52")]
	protected override float Height
	{
		[Token(Token = "0x6003BF9")]
		[Address(RVA = "0x3FA99D0", Offset = "0x3FA99D0", VA = "0x3FA99D0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B53")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6003BFA")]
		[Address(RVA = "0x3FA99E0", Offset = "0x3FA99E0", VA = "0x3FA99E0", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B54")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6003BFB")]
		[Address(RVA = "0x3FA99F0", Offset = "0x3FA99F0", VA = "0x3FA99F0", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B55")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003BFC")]
		[Address(RVA = "0x3FA9A00", Offset = "0x3FA9A00", VA = "0x3FA9A00", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B56")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003BFD")]
		[Address(RVA = "0x3FA9A10", Offset = "0x3FA9A10", VA = "0x3FA9A10", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000B57")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003BFE")]
		[Address(RVA = "0x3FA9A20", Offset = "0x3FA9A20", VA = "0x3FA9A20", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B58")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6003BFF")]
		[Address(RVA = "0x3FA9A30", Offset = "0x3FA9A30", VA = "0x3FA9A30", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000B59")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6003C00")]
		[Address(RVA = "0x3FA9A40", Offset = "0x3FA9A40", VA = "0x3FA9A40", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000B5A")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6003C01")]
		[Address(RVA = "0x3FA9A50", Offset = "0x3FA9A50", VA = "0x3FA9A50", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B5B")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6003C02")]
		[Address(RVA = "0x3FA9A60", Offset = "0x3FA9A60", VA = "0x3FA9A60", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003C03")]
	[Address(RVA = "0x3FA9A90", Offset = "0x3FA9A90", VA = "0x3FA9A90", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003C04")]
	[Address(RVA = "0x3FA9F60", Offset = "0x3FA9F60", VA = "0x3FA9F60")]
	public void Show(string icon, string title, string content, bool full)
	{
	}

	[Token(Token = "0x6003C05")]
	[Address(RVA = "0x3FAA120", Offset = "0x3FAA120", VA = "0x3FAA120")]
	public CutsceneDialoguePanel()
	{
	}
}
