using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace UI;

[Token(Token = "0x20005AE")]
internal class HoldableButton : EventTrigger
{
	[Token(Token = "0x4001B83")]
	[FieldOffset(Offset = "0x28")]
	public float ClickSpeed;

	[Token(Token = "0x4001B84")]
	[FieldOffset(Offset = "0x2C")]
	public float HoldDelay;

	[Token(Token = "0x4001B85")]
	[FieldOffset(Offset = "0x30")]
	private bool isHeld;

	[Token(Token = "0x4001B86")]
	[FieldOffset(Offset = "0x34")]
	private float holdTime;

	[Token(Token = "0x4001B87")]
	[FieldOffset(Offset = "0x38")]
	private float nextClickTime;

	[Token(Token = "0x14000003")]
	public event Action OnClick
	{
		[Token(Token = "0x6003A60")]
		[Address(RVA = "0x3F83570", Offset = "0x3F83570", VA = "0x3F83570")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6003A61")]
		[Address(RVA = "0x3F83600", Offset = "0x3F83600", VA = "0x3F83600")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6003A62")]
	[Address(RVA = "0x3F83690", Offset = "0x3F83690", VA = "0x3F83690")]
	private void Update()
	{
	}

	[Token(Token = "0x6003A63")]
	[Address(RVA = "0x3F83710", Offset = "0x3F83710", VA = "0x3F83710", Slot = "25")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6003A64")]
	[Address(RVA = "0x3F83750", Offset = "0x3F83750", VA = "0x3F83750", Slot = "26")]
	public override void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6003A65")]
	[Address(RVA = "0x3F83760", Offset = "0x3F83760", VA = "0x3F83760")]
	public HoldableButton()
	{
	}
}
