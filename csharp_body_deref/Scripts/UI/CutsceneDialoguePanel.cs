// ==================== AoTTG2 cross-reference ====================
// Type: UI.CutsceneDialoguePanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CutsceneDialoguePanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CutsceneDialoguePopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000632")]
internal class CutsceneDialoguePanel : BasePopup
{
	[Token(Token = "0x4001DCF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _contentLabel;

	[Token(Token = "0x4001DD0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _titleLabel;

	[Token(Token = "0x4001DD1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private RawImage _image;

	[Token(Token = "0x4001DD2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private GameObject _labelRight;

	[Token(Token = "0x17000BC8")]
	protected override string Title
	{
		[Token(Token = "0x6003E41")]
		[Address(RVA = "0x42BBA90", Offset = "0x42BBA90", VA = "0x42BBA90", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BC9")]
	protected override float Width
	{
		[Token(Token = "0x6003E42")]
		[Address(RVA = "0x42BBAB0", Offset = "0x42BBAB0", VA = "0x42BBAB0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BCA")]
	protected override float Height
	{
		[Token(Token = "0x6003E43")]
		[Address(RVA = "0x42BBAC0", Offset = "0x42BBAC0", VA = "0x42BBAC0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BCB")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6003E44")]
		[Address(RVA = "0x42BBAD0", Offset = "0x42BBAD0", VA = "0x42BBAD0", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BCC")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6003E45")]
		[Address(RVA = "0x42BBAE0", Offset = "0x42BBAE0", VA = "0x42BBAE0", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BCD")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003E46")]
		[Address(RVA = "0x42BBAF0", Offset = "0x42BBAF0", VA = "0x42BBAF0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BCE")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003E47")]
		[Address(RVA = "0x42BBB00", Offset = "0x42BBB00", VA = "0x42BBB00", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BCF")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003E48")]
		[Address(RVA = "0x42BBB10", Offset = "0x42BBB10", VA = "0x42BBB10", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BD0")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6003E49")]
		[Address(RVA = "0x42BBB20", Offset = "0x42BBB20", VA = "0x42BBB20", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000BD1")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6003E4A")]
		[Address(RVA = "0x42BBB30", Offset = "0x42BBB30", VA = "0x42BBB30", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000BD2")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6003E4B")]
		[Address(RVA = "0x42BBB40", Offset = "0x42BBB40", VA = "0x42BBB40", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BD3")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6003E4C")]
		[Address(RVA = "0x42BBB50", Offset = "0x42BBB50", VA = "0x42BBB50", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003E4D")]
	[Address(RVA = "0x42BBB80", Offset = "0x42BBB80", VA = "0x42BBB80", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003E4E")]
	[Address(RVA = "0x42BC050", Offset = "0x42BC050", VA = "0x42BC050")]
	public void Show(string icon, string title, string content, bool full)
	{
	}

	[Token(Token = "0x6003E4F")]
	[Address(RVA = "0x42BC210", Offset = "0x42BC210", VA = "0x42BC210")]
	public CutsceneDialoguePanel()
	{
	}
}
