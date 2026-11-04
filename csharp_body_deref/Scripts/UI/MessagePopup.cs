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

[Token(Token = "0x20006F2")]
internal class MessagePopup : PromptPopup
{
	[Token(Token = "0x40022F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _label;

	[Token(Token = "0x40022F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private GameObject _button;

	[Token(Token = "0x17000C26")]
	protected override string Title
	{
		[Token(Token = "0x6004457")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C27")]
	protected override float Width
	{
		[Token(Token = "0x6004458")]
		[Address(RVA = "0x21C1230", Offset = "0x21BF830", VA = "0x1821C1230", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C28")]
	protected override float Height
	{
		[Token(Token = "0x6004459")]
		[Address(RVA = "0x21C11B0", Offset = "0x21BF7B0", VA = "0x1821C11B0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C29")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600445A")]
		[Address(RVA = "0x21BB430", Offset = "0x21B9A30", VA = "0x1821BB430", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C2A")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600445B")]
		[Address(RVA = "0x21BB430", Offset = "0x21B9A30", VA = "0x1821BB430", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C2B")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x600445C")]
		[Address(RVA = "0x846F40", Offset = "0x845540", VA = "0x180846F40", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000C2C")]
	protected virtual float LabelHeight
	{
		[Token(Token = "0x600445D")]
		[Address(RVA = "0x21C11C0", Offset = "0x21BF7C0", VA = "0x1821C11C0", Slot = "62")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600445E")]
	[Address(RVA = "0x21C5850", Offset = "0x21C3E50", VA = "0x1821C5850", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600445F")]
	[Address(RVA = "0x21C5B40", Offset = "0x21C4140", VA = "0x1821C5B40")]
	public void Show(string message, bool allowDismiss = true)
	{
	}

	[Token(Token = "0x6004460")]
	[Address(RVA = "0xA37400", Offset = "0xA35A00", VA = "0x180A37400")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004461")]
	[Address(RVA = "0x21C11A0", Offset = "0x21BF7A0", VA = "0x1821C11A0")]
	public MessagePopup()
	{
	}
}
