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

[Token(Token = "0x20006AF")]
internal class SocialPopup : BasePopup
{
	[Token(Token = "0x17000CE5")]
	protected override string Title
	{
		[Token(Token = "0x6004298")]
		[Address(RVA = "0x4312F60", Offset = "0x4312F60", VA = "0x4312F60", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CE6")]
	protected override float Width
	{
		[Token(Token = "0x6004299")]
		[Address(RVA = "0x4312FC0", Offset = "0x4312FC0", VA = "0x4312FC0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CE7")]
	protected override float Height
	{
		[Token(Token = "0x600429A")]
		[Address(RVA = "0x4312FD0", Offset = "0x4312FD0", VA = "0x4312FD0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CE8")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x600429B")]
		[Address(RVA = "0x4312FE0", Offset = "0x4312FE0", VA = "0x4312FE0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CE9")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600429C")]
		[Address(RVA = "0x4312FF0", Offset = "0x4312FF0", VA = "0x4312FF0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CEA")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x600429D")]
		[Address(RVA = "0x4313000", Offset = "0x4313000", VA = "0x4313000", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000CEB")]
	protected override bool UseSound
	{
		[Token(Token = "0x600429E")]
		[Address(RVA = "0x4313010", Offset = "0x4313010", VA = "0x4313010", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600429F")]
	[Address(RVA = "0x4313020", Offset = "0x4313020", VA = "0x4313020", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60042A0")]
	[Address(RVA = "0x4313420", Offset = "0x4313420", VA = "0x4313420")]
	private void CreateLink(ElementStyle style, string title, string link, string about)
	{
	}

	[Token(Token = "0x60042A1")]
	[Address(RVA = "0x43135A0", Offset = "0x43135A0", VA = "0x43135A0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60042A2")]
	[Address(RVA = "0x4313610", Offset = "0x4313610", VA = "0x4313610")]
	public SocialPopup()
	{
	}
}
