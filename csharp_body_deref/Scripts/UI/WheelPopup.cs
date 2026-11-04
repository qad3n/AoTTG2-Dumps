// ==================== AoTTG2 cross-reference ====================
// Type: UI.WheelPopup
// Update status: CHANGED in this game update
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

[Token(Token = "0x20007CB")]
internal class WheelPopup : BasePopup
{
	[Token(Token = "0x400276F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private AottgInGameWheelView _view;

	[Token(Token = "0x4002770")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private int _optionCount;

	[Token(Token = "0x4002771")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB4")]
	public int SelectedItem;

	[Token(Token = "0x4002772")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private UnityAction _callback;

	[Token(Token = "0x4002773")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	public UnityAction OnCancel;

	[Token(Token = "0x17000D9D")]
	public override bool PlayEscapeSound
	{
		[Token(Token = "0x6004B99")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "56")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D9E")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6004B9A")]
		[Address(RVA = "0x2245D40", Offset = "0x2244340", VA = "0x182245D40", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D9F")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004B9B")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x6004B9C")]
	[Address(RVA = "0x2284310", Offset = "0x2282910", VA = "0x182284310", Slot = "57")]
	public override bool DismissFromEscape()
	{
		return default(bool);
	}

	[Token(Token = "0x6004B9D")]
	[Address(RVA = "0x2284390", Offset = "0x2282990", VA = "0x182284390", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004B9E")]
	[Address(RVA = "0x2284450", Offset = "0x2282A50", VA = "0x182284450")]
	public void Show(string openKey, List<string> options, UnityAction callback, [Optional] string title, bool showNext = true)
	{
	}

	[Token(Token = "0x6004B9F")]
	[Address(RVA = "0x2284350", Offset = "0x2282950", VA = "0x182284350")]
	internal void OnButtonClick(int index)
	{
	}

	[Token(Token = "0x6004BA0")]
	[Address(RVA = "0x22849C0", Offset = "0x2282FC0", VA = "0x1822849C0")]
	private void Update()
	{
	}

	[Token(Token = "0x6004BA1")]
	[Address(RVA = "0x21C11A0", Offset = "0x21BF7A0", VA = "0x1821C11A0")]
	public WheelPopup()
	{
	}
}
