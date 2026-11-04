// ==================== AoTTG2 cross-reference ====================
// Type: UI.TooltipPopup
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000702")]
internal class TooltipPopup : BasePopup
{
	[Token(Token = "0x400232B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly List<TooltipPopup> Visible;

	[Token(Token = "0x400232C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _label;

	[Token(Token = "0x400232D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private RectTransform _panel;

	[Token(Token = "0x400232E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public Component Caller;

	[Token(Token = "0x400232F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private BasePopup[] _callerPopups;

	[Token(Token = "0x4002330")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private float _offset;

	[Token(Token = "0x17000C50")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x60044CF")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000C51")]
	protected override float AnimationTime
	{
		[Token(Token = "0x60044D0")]
		[Address(RVA = "0x21E5490", Offset = "0x21E3A90", VA = "0x1821E5490", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C52")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x60044D1")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000C53")]
	protected virtual string TextColor
	{
		[Token(Token = "0x60044D3")]
		[Address(RVA = "0x21E54D0", Offset = "0x21E3AD0", VA = "0x1821E54D0", Slot = "62")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C54")]
	protected virtual string BackgroundColor
	{
		[Token(Token = "0x60044D4")]
		[Address(RVA = "0x21E54A0", Offset = "0x21E3AA0", VA = "0x1821E54A0", Slot = "63")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60044D2")]
	[Address(RVA = "0x21E49A0", Offset = "0x21E2FA0", VA = "0x1821E49A0")]
	public static void HideWithin(Transform root)
	{
	}

	[Token(Token = "0x60044D5")]
	[Address(RVA = "0x21E4DF0", Offset = "0x21E33F0", VA = "0x1821E4DF0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60044D6")]
	[Address(RVA = "0x21E50D0", Offset = "0x21E36D0", VA = "0x1821E50D0")]
	public void Show(string message, Component caller, float offset)
	{
	}

	[Token(Token = "0x60044D7")]
	[Address(RVA = "0x21E4BF0", Offset = "0x21E31F0", VA = "0x1821E4BF0")]
	private void SetTooltipPosition()
	{
	}

	[Token(Token = "0x60044D8")]
	[Address(RVA = "0x21E5360", Offset = "0x21E3960", VA = "0x1821E5360")]
	private void Update()
	{
	}

	[Token(Token = "0x60044D9")]
	[Address(RVA = "0x21E4B30", Offset = "0x21E3130", VA = "0x1821E4B30", Slot = "59")]
	protected override void OnDisable()
	{
	}

	[Token(Token = "0x60044DA")]
	[Address(RVA = "0x21E4880", Offset = "0x21E2E80", VA = "0x1821E4880")]
	private static bool CanShow(Component caller, BasePopup[] callerPopups)
	{
		return default(bool);
	}

	[Token(Token = "0x60044DB")]
	[Address(RVA = "0x21C11A0", Offset = "0x21BF7A0", VA = "0x1821C11A0")]
	public TooltipPopup()
	{
	}
}
