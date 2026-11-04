// ==================== AoTTG2 cross-reference ====================
// Type: UI.SocialPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/SocialPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/SocialPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200080A")]
internal class SocialPopup : BasePopup
{
	[Token(Token = "0x17000E2B")]
	protected override string Title
	{
		[Token(Token = "0x6004D8C")]
		[Address(RVA = "0x229AC70", Offset = "0x2299270", VA = "0x18229AC70", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000E2C")]
	protected override float Width
	{
		[Token(Token = "0x6004D8D")]
		[Address(RVA = "0x229ACD0", Offset = "0x22992D0", VA = "0x18229ACD0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E2D")]
	protected override float Height
	{
		[Token(Token = "0x6004D8E")]
		[Address(RVA = "0x229AC50", Offset = "0x2299250", VA = "0x18229AC50", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E2E")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6004D8F")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E2F")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004D90")]
		[Address(RVA = "0x229AC60", Offset = "0x2299260", VA = "0x18229AC60", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E30")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004D91")]
		[Address(RVA = "0x565FB0", Offset = "0x5645B0", VA = "0x180565FB0", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000E31")]
	protected override bool UseSound
	{
		[Token(Token = "0x6004D92")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004D93")]
	[Address(RVA = "0x229A630", Offset = "0x2298C30", VA = "0x18229A630", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004D94")]
	[Address(RVA = "0x229A430", Offset = "0x2298A30", VA = "0x18229A430")]
	private void CreateLink(ElementStyle style, string title, string link, string about)
	{
	}

	[Token(Token = "0x6004D95")]
	[Address(RVA = "0x229A5D0", Offset = "0x2298BD0", VA = "0x18229A5D0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004D96")]
	[Address(RVA = "0x21C11A0", Offset = "0x21BF7A0", VA = "0x1821C11A0")]
	public SocialPopup()
	{
	}
}
