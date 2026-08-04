// ==================== AoTTG2 cross-reference ====================
// Type: UI.TooltipPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/TooltipPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/TooltipPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000590")]
internal class TooltipPopup : BasePopup
{
	[Token(Token = "0x4001B73")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _label;

	[Token(Token = "0x4001B74")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private RectTransform _panel;

	[Token(Token = "0x4001B75")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public Component Caller;

	[Token(Token = "0x4001B76")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private float _offset;

	[Token(Token = "0x17000AF9")]
	protected override float AnimationTime
	{
		[Token(Token = "0x60039A4")]
		[Address(RVA = "0x4255FB0", Offset = "0x4255FB0", VA = "0x4255FB0", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AFA")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x60039A5")]
		[Address(RVA = "0x4255FC0", Offset = "0x4255FC0", VA = "0x4255FC0", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000AFB")]
	protected virtual string TextColor
	{
		[Token(Token = "0x60039A6")]
		[Address(RVA = "0x4255FD0", Offset = "0x4255FD0", VA = "0x4255FD0", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000AFC")]
	protected virtual string BackgroundColor
	{
		[Token(Token = "0x60039A7")]
		[Address(RVA = "0x4256000", Offset = "0x4256000", VA = "0x4256000", Slot = "60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60039A8")]
	[Address(RVA = "0x4256030", Offset = "0x4256030", VA = "0x4256030", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60039A9")]
	[Address(RVA = "0x424D190", Offset = "0x424D190", VA = "0x424D190")]
	public void Show(string message, Component caller, float offset)
	{
	}

	[Token(Token = "0x60039AA")]
	[Address(RVA = "0x42562F0", Offset = "0x42562F0", VA = "0x42562F0")]
	private void SetTooltipPosition()
	{
	}

	[Token(Token = "0x60039AB")]
	[Address(RVA = "0x4256440", Offset = "0x4256440", VA = "0x4256440")]
	private void Update()
	{
	}

	[Token(Token = "0x60039AC")]
	[Address(RVA = "0x4255FA0", Offset = "0x4255FA0", VA = "0x4255FA0")]
	public TooltipPopup()
	{
	}
}
