// ==================== AoTTG2 cross-reference ====================
// Type: UI.WheelPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/WheelPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/WheelPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x2000877")]
internal class WheelPopup : BasePopup
{
	[Token(Token = "0x4002AEF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private AottgInGameWheelView _view;

	[Token(Token = "0x4002AF0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private int _optionCount;

	[Token(Token = "0x4002AF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB4")]
	public int SelectedItem;

	[Token(Token = "0x4002AF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private UnityAction _callback;

	[Token(Token = "0x4002AF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	public UnityAction OnCancel;

	[Token(Token = "0x17000E0F")]
	public override bool PlayEscapeSound
	{
		[Token(Token = "0x60050BA")]
		[Address(RVA = "0x5C54140", Offset = "0x5C53140", VA = "0x5C54140", Slot = "56")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000E10")]
	protected override float AnimationTime
	{
		[Token(Token = "0x60050BB")]
		[Address(RVA = "0x5C54150", Offset = "0x5C53150", VA = "0x5C54150", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000E11")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x60050BC")]
		[Address(RVA = "0x5C54160", Offset = "0x5C53160", VA = "0x5C54160", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x60050BD")]
	[Address(RVA = "0x5C54170", Offset = "0x5C53170", VA = "0x5C54170", Slot = "57")]
	public override bool DismissFromEscape()
	{
		return default(bool);
	}

	[Token(Token = "0x60050BE")]
	[Address(RVA = "0x5C541A0", Offset = "0x5C531A0", VA = "0x5C541A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60050BF")]
	[Address(RVA = "0x5C54250", Offset = "0x5C53250", VA = "0x5C54250")]
	public void Show(string openKey, List<string> options, UnityAction callback, [Optional] string title, bool showNext = true)
	{
	}

	[Token(Token = "0x60050C0")]
	[Address(RVA = "0x5C54850", Offset = "0x5C53850", VA = "0x5C54850")]
	internal void OnButtonClick(int index)
	{
	}

	[Token(Token = "0x60050C1")]
	[Address(RVA = "0x5C54890", Offset = "0x5C53890", VA = "0x5C54890")]
	private void Update()
	{
	}

	[Token(Token = "0x60050C2")]
	[Address(RVA = "0x5C54A00", Offset = "0x5C53A00", VA = "0x5C54A00")]
	public WheelPopup()
	{
	}
}
