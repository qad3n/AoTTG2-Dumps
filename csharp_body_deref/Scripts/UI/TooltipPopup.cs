// ==================== AoTTG2 cross-reference ====================
// Type: UI.TooltipPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/TooltipPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/TooltipPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007AC")]
internal class TooltipPopup : BasePopup
{
	[Token(Token = "0x40026A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly List<TooltipPopup> Visible;

	[Token(Token = "0x40026A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _label;

	[Token(Token = "0x40026AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private RectTransform _panel;

	[Token(Token = "0x40026AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public Component Caller;

	[Token(Token = "0x40026AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private BasePopup[] _callerPopups;

	[Token(Token = "0x40026AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private float _offset;

	[Token(Token = "0x17000CD4")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x60049F6")]
		[Address(RVA = "0x5BC8230", Offset = "0x5BC7230", VA = "0x5BC8230", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000CD5")]
	protected override float AnimationTime
	{
		[Token(Token = "0x60049F7")]
		[Address(RVA = "0x5BC8240", Offset = "0x5BC7240", VA = "0x5BC8240", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CD6")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x60049F8")]
		[Address(RVA = "0x5BC8250", Offset = "0x5BC7250", VA = "0x5BC8250", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000CD7")]
	protected virtual string TextColor
	{
		[Token(Token = "0x60049FA")]
		[Address(RVA = "0x5BC8260", Offset = "0x5BC7260", VA = "0x5BC8260", Slot = "62")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000CD8")]
	protected virtual string BackgroundColor
	{
		[Token(Token = "0x60049FB")]
		[Address(RVA = "0x5BC8290", Offset = "0x5BC7290", VA = "0x5BC8290", Slot = "63")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60049F9")]
	[Address(RVA = "0x5BB6C90", Offset = "0x5BB5C90", VA = "0x5BB6C90")]
	public static void HideWithin(Transform root)
	{
	}

	[Token(Token = "0x60049FC")]
	[Address(RVA = "0x5BC82C0", Offset = "0x5BC72C0", VA = "0x5BC82C0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60049FD")]
	[Address(RVA = "0x5BBEF00", Offset = "0x5BBDF00", VA = "0x5BBEF00")]
	public void Show(string message, Component caller, float offset)
	{
	}

	[Token(Token = "0x60049FE")]
	[Address(RVA = "0x5BC86A0", Offset = "0x5BC76A0", VA = "0x5BC86A0")]
	private void SetTooltipPosition()
	{
	}

	[Token(Token = "0x60049FF")]
	[Address(RVA = "0x5BC8850", Offset = "0x5BC7850", VA = "0x5BC8850")]
	private void Update()
	{
	}

	[Token(Token = "0x6004A00")]
	[Address(RVA = "0x5BC88E0", Offset = "0x5BC78E0", VA = "0x5BC88E0", Slot = "59")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x6004A01")]
	[Address(RVA = "0x5BC8580", Offset = "0x5BC7580", VA = "0x5BC8580")]
	private static bool CanShow(Component caller, BasePopup[] callerPopups)
	{
		return default(bool);
	}

	[Token(Token = "0x6004A02")]
	[Address(RVA = "0x5BC8220", Offset = "0x5BC7220", VA = "0x5BC8220")]
	public TooltipPopup()
	{
	}
}
