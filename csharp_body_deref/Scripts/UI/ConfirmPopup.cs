// ==================== AoTTG2 cross-reference ====================
// Type: UI.ConfirmPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ConfirmPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/ConfirmPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000791")]
internal class ConfirmPopup : PromptPopup
{
	[Token(Token = "0x4002643")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _label;

	[Token(Token = "0x4002644")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private UnityAction _onConfirm;

	[Token(Token = "0x17000C76")]
	protected override string Title
	{
		[Token(Token = "0x600490C")]
		[Address(RVA = "0x5BBC5E0", Offset = "0x5BBB5E0", VA = "0x5BBC5E0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C77")]
	protected override float Width
	{
		[Token(Token = "0x600490D")]
		[Address(RVA = "0x5BBC640", Offset = "0x5BBB640", VA = "0x5BBC640", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C78")]
	protected override float Height
	{
		[Token(Token = "0x600490E")]
		[Address(RVA = "0x5BBC650", Offset = "0x5BBB650", VA = "0x5BBC650", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C79")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600490F")]
		[Address(RVA = "0x5BBC660", Offset = "0x5BBB660", VA = "0x5BBC660", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C7A")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004910")]
		[Address(RVA = "0x5BBC670", Offset = "0x5BBB670", VA = "0x5BBC670", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C7B")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6004911")]
		[Address(RVA = "0x5BBC680", Offset = "0x5BBB680", VA = "0x5BBC680", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000C7C")]
	protected virtual float LabelHeight
	{
		[Token(Token = "0x6004912")]
		[Address(RVA = "0x5BBC690", Offset = "0x5BBB690", VA = "0x5BBC690", Slot = "62")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004913")]
	[Address(RVA = "0x5BBC6A0", Offset = "0x5BBB6A0", VA = "0x5BBC6A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004914")]
	[Address(RVA = "0x5BBC9D0", Offset = "0x5BBB9D0", VA = "0x5BBC9D0")]
	public void Show(string message, UnityAction onConfirm, [Optional] string title)
	{
	}

	[Token(Token = "0x6004915")]
	[Address(RVA = "0x5BBCB20", Offset = "0x5BBBB20", VA = "0x5BBCB20")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004916")]
	[Address(RVA = "0x5BBCBA0", Offset = "0x5BBBBA0", VA = "0x5BBCBA0")]
	public ConfirmPopup()
	{
	}
}
