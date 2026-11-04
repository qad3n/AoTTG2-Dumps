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

[Token(Token = "0x2000749")]
internal class HoldableButton : EventTrigger
{
	[Token(Token = "0x4002426")]
	[FieldOffset(Offset = "0x28")]
	public float ClickSpeed;

	[Token(Token = "0x4002427")]
	[FieldOffset(Offset = "0x2C")]
	public float HoldDelay;

	[Token(Token = "0x4002428")]
	[FieldOffset(Offset = "0x30")]
	private bool isHeld;

	[Token(Token = "0x4002429")]
	[FieldOffset(Offset = "0x34")]
	private float holdTime;

	[Token(Token = "0x400242A")]
	[FieldOffset(Offset = "0x38")]
	private float nextClickTime;

	[Token(Token = "0x400242B")]
	[FieldOffset(Offset = "0x40")]
	[CompilerGenerated]
	private Action m_OnClick;

	[Token(Token = "0x14000004")]
	public event Action OnClick
	{
		[Token(Token = "0x6004728")]
		[Address(RVA = "0x22117A0", Offset = "0x220FDA0", VA = "0x1822117A0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6004729")]
		[Address(RVA = "0x2211840", Offset = "0x220FE40", VA = "0x182211840")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600472A")]
	[Address(RVA = "0x2211700", Offset = "0x220FD00", VA = "0x182211700")]
	private void Update()
	{
	}

	[Token(Token = "0x600472B")]
	[Address(RVA = "0x22116B0", Offset = "0x220FCB0", VA = "0x1822116B0", Slot = "25")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600472C")]
	[Address(RVA = "0xACCA60", Offset = "0xACB060", VA = "0x180ACCA60", Slot = "26")]
	public override void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600472D")]
	[Address(RVA = "0x2211780", Offset = "0x220FD80", VA = "0x182211780")]
	public HoldableButton()
	{
	}
}
