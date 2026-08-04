// ==================== AoTTG2 cross-reference ====================
// Type: UI.HoldableButton
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/HoldableButton.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/HoldableButton.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.EventSystems;

namespace UI;

[Token(Token = "0x20005F3")]
internal class HoldableButton : EventTrigger
{
	[Token(Token = "0x4001C96")]
	[FieldOffset(Offset = "0x28")]
	public float ClickSpeed;

	[Token(Token = "0x4001C97")]
	[FieldOffset(Offset = "0x2C")]
	public float HoldDelay;

	[Token(Token = "0x4001C98")]
	[FieldOffset(Offset = "0x30")]
	private bool isHeld;

	[Token(Token = "0x4001C99")]
	[FieldOffset(Offset = "0x34")]
	private float holdTime;

	[Token(Token = "0x4001C9A")]
	[FieldOffset(Offset = "0x38")]
	private float nextClickTime;

	[Token(Token = "0x14000004")]
	public event Action OnClick
	{
		[Token(Token = "0x6003C70")]
		[Address(RVA = "0x42914E0", Offset = "0x42914E0", VA = "0x42914E0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6003C71")]
		[Address(RVA = "0x4291570", Offset = "0x4291570", VA = "0x4291570")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6003C72")]
	[Address(RVA = "0x4291600", Offset = "0x4291600", VA = "0x4291600")]
	private void Update()
	{
	}

	[Token(Token = "0x6003C73")]
	[Address(RVA = "0x4291680", Offset = "0x4291680", VA = "0x4291680", Slot = "25")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6003C74")]
	[Address(RVA = "0x42916C0", Offset = "0x42916C0", VA = "0x42916C0", Slot = "26")]
	public override void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6003C75")]
	[Address(RVA = "0x42916D0", Offset = "0x42916D0", VA = "0x42916D0")]
	public HoldableButton()
	{
	}
}
