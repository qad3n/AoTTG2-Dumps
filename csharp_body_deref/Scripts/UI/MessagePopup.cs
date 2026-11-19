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

[Token(Token = "0x200079B")]
internal class MessagePopup : PromptPopup
{
	[Token(Token = "0x400266D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _label;

	[Token(Token = "0x400266E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private GameObject _button;

	[Token(Token = "0x17000CAA")]
	protected override string Title
	{
		[Token(Token = "0x600497C")]
		[Address(RVA = "0x5BC18D0", Offset = "0x5BC08D0", VA = "0x5BC18D0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CAB")]
	protected override float Width
	{
		[Token(Token = "0x600497D")]
		[Address(RVA = "0x5BC18F0", Offset = "0x5BC08F0", VA = "0x5BC18F0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CAC")]
	protected override float Height
	{
		[Token(Token = "0x600497E")]
		[Address(RVA = "0x5BC1900", Offset = "0x5BC0900", VA = "0x5BC1900", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CAD")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600497F")]
		[Address(RVA = "0x5BC1910", Offset = "0x5BC0910", VA = "0x5BC1910", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CAE")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004980")]
		[Address(RVA = "0x5BC1920", Offset = "0x5BC0920", VA = "0x5BC1920", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000CAF")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004981")]
		[Address(RVA = "0x5BC1930", Offset = "0x5BC0930", VA = "0x5BC1930", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000CB0")]
	protected virtual float LabelHeight
	{
		[Token(Token = "0x6004982")]
		[Address(RVA = "0x5BC1940", Offset = "0x5BC0940", VA = "0x5BC1940", Slot = "62")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004983")]
	[Address(RVA = "0x5BC1950", Offset = "0x5BC0950", VA = "0x5BC1950", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004984")]
	[Address(RVA = "0x5BC1C30", Offset = "0x5BC0C30", VA = "0x5BC1C30")]
	public void Show(string message, bool allowDismiss = true)
	{
	}

	[Token(Token = "0x6004985")]
	[Address(RVA = "0x5BC1C90", Offset = "0x5BC0C90", VA = "0x5BC1C90")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004986")]
	[Address(RVA = "0x5BC1CB0", Offset = "0x5BC0CB0", VA = "0x5BC1CB0")]
	public MessagePopup()
	{
	}
}
