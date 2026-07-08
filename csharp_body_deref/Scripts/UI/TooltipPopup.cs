using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200054B")]
internal class TooltipPopup : BasePopup
{
	[Token(Token = "0x4001A60")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _label;

	[Token(Token = "0x4001A61")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private RectTransform _panel;

	[Token(Token = "0x4001A62")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public Component Caller;

	[Token(Token = "0x4001A63")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private float _offset;

	[Token(Token = "0x17000A8F")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6003795")]
		[Address(RVA = "0x3F2C7D0", Offset = "0x3F2C7D0", VA = "0x3F2C7D0", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A90")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6003796")]
		[Address(RVA = "0x3F2C7E0", Offset = "0x3F2C7E0", VA = "0x3F2C7E0", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000A91")]
	protected virtual string TextColor
	{
		[Token(Token = "0x6003797")]
		[Address(RVA = "0x3F2C7F0", Offset = "0x3F2C7F0", VA = "0x3F2C7F0", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A92")]
	protected virtual string BackgroundColor
	{
		[Token(Token = "0x6003798")]
		[Address(RVA = "0x3F2C820", Offset = "0x3F2C820", VA = "0x3F2C820", Slot = "60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003799")]
	[Address(RVA = "0x3F2C850", Offset = "0x3F2C850", VA = "0x3F2C850", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600379A")]
	[Address(RVA = "0x3F239E0", Offset = "0x3F239E0", VA = "0x3F239E0")]
	public void Show(string message, Component caller, float offset)
	{
	}

	[Token(Token = "0x600379B")]
	[Address(RVA = "0x3F2CB10", Offset = "0x3F2CB10", VA = "0x3F2CB10")]
	private void SetTooltipPosition()
	{
	}

	[Token(Token = "0x600379C")]
	[Address(RVA = "0x3F2CC60", Offset = "0x3F2CC60", VA = "0x3F2CC60")]
	private void Update()
	{
	}

	[Token(Token = "0x600379D")]
	[Address(RVA = "0x3F2C7C0", Offset = "0x3F2C7C0", VA = "0x3F2C7C0")]
	public TooltipPopup()
	{
	}
}
