// ==================== AoTTG2 cross-reference ====================
// Type: UI.MessagePopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MessagePopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/MessagePopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000580")]
internal class MessagePopup : PromptPopup
{
	[Token(Token = "0x4001B3B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _label;

	[Token(Token = "0x4001B3C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private GameObject _button;

	[Token(Token = "0x17000ACF")]
	protected override string Title
	{
		[Token(Token = "0x600392C")]
		[Address(RVA = "0x424F830", Offset = "0x424F830", VA = "0x424F830", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000AD0")]
	protected override float Width
	{
		[Token(Token = "0x600392D")]
		[Address(RVA = "0x424F850", Offset = "0x424F850", VA = "0x424F850", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AD1")]
	protected override float Height
	{
		[Token(Token = "0x600392E")]
		[Address(RVA = "0x424F860", Offset = "0x424F860", VA = "0x424F860", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AD2")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600392F")]
		[Address(RVA = "0x424F870", Offset = "0x424F870", VA = "0x424F870", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AD3")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003930")]
		[Address(RVA = "0x424F880", Offset = "0x424F880", VA = "0x424F880", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000AD4")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6003931")]
		[Address(RVA = "0x424F890", Offset = "0x424F890", VA = "0x424F890", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000AD5")]
	protected virtual float LabelHeight
	{
		[Token(Token = "0x6003932")]
		[Address(RVA = "0x424F8A0", Offset = "0x424F8A0", VA = "0x424F8A0", Slot = "59")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003933")]
	[Address(RVA = "0x424F8B0", Offset = "0x424F8B0", VA = "0x424F8B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003934")]
	[Address(RVA = "0x424FB90", Offset = "0x424FB90", VA = "0x424FB90")]
	public void Show(string message, bool allowDismiss = true)
	{
	}

	[Token(Token = "0x6003935")]
	[Address(RVA = "0x424FBF0", Offset = "0x424FBF0", VA = "0x424FBF0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003936")]
	[Address(RVA = "0x424FC10", Offset = "0x424FC10", VA = "0x424FC10")]
	public MessagePopup()
	{
	}
}
