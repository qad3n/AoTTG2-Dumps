// ==================== AoTTG2 cross-reference ====================
// Type: UI.ExternalLinkPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ExternalLinkPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/ExternalLinkPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000578")]
internal class ExternalLinkPopup : PromptPopup
{
	[Token(Token = "0x4001B19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected float LabelHeight;

	[Token(Token = "0x4001B1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _label;

	[Token(Token = "0x4001B1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private string _url;

	[Token(Token = "0x17000AA8")]
	protected override string Title
	{
		[Token(Token = "0x60038D7")]
		[Address(RVA = "0x424BB30", Offset = "0x424BB30", VA = "0x424BB30", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000AA9")]
	protected override float Width
	{
		[Token(Token = "0x60038D8")]
		[Address(RVA = "0x424BB90", Offset = "0x424BB90", VA = "0x424BB90", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AAA")]
	protected override float Height
	{
		[Token(Token = "0x60038D9")]
		[Address(RVA = "0x424BBA0", Offset = "0x424BBA0", VA = "0x424BBA0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AAB")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x60038DA")]
		[Address(RVA = "0x424BBB0", Offset = "0x424BBB0", VA = "0x424BBB0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AAC")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x60038DB")]
		[Address(RVA = "0x424BBC0", Offset = "0x424BBC0", VA = "0x424BBC0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AAD")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x60038DC")]
		[Address(RVA = "0x424BBD0", Offset = "0x424BBD0", VA = "0x424BBD0", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x60038DD")]
	[Address(RVA = "0x424BBE0", Offset = "0x424BBE0", VA = "0x424BBE0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60038DE")]
	[Address(RVA = "0x424BF30", Offset = "0x424BF30", VA = "0x424BF30")]
	public void Show(string url)
	{
	}

	[Token(Token = "0x60038DF")]
	[Address(RVA = "0x424C040", Offset = "0x424C040", VA = "0x424C040")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x60038E0")]
	[Address(RVA = "0x424C0D0", Offset = "0x424C0D0", VA = "0x424C0D0")]
	public ExternalLinkPopup()
	{
	}
}
