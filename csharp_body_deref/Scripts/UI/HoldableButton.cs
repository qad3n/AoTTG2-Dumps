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

[Token(Token = "0x20007F1")]
internal class HoldableButton : EventTrigger
{
	[Token(Token = "0x4002797")]
	[FieldOffset(Offset = "0x28")]
	public float ClickSpeed;

	[Token(Token = "0x4002798")]
	[FieldOffset(Offset = "0x2C")]
	public float HoldDelay;

	[Token(Token = "0x4002799")]
	[FieldOffset(Offset = "0x30")]
	private bool isHeld;

	[Token(Token = "0x400279A")]
	[FieldOffset(Offset = "0x34")]
	private float holdTime;

	[Token(Token = "0x400279B")]
	[FieldOffset(Offset = "0x38")]
	private float nextClickTime;

	[Token(Token = "0x400279C")]
	[FieldOffset(Offset = "0x40")]
	[CompilerGenerated]
	private Action m_OnClick;

	[Token(Token = "0x14000007")]
	public event Action OnClick
	{
		[Token(Token = "0x6004C4A")]
		[Address(RVA = "0x5BF0910", Offset = "0x5BEF910", VA = "0x5BF0910")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6004C4B")]
		[Address(RVA = "0x5BF09A0", Offset = "0x5BEF9A0", VA = "0x5BF09A0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6004C4C")]
	[Address(RVA = "0x5BF0A30", Offset = "0x5BEFA30", VA = "0x5BF0A30")]
	private void Update()
	{
	}

	[Token(Token = "0x6004C4D")]
	[Address(RVA = "0x5BF0AB0", Offset = "0x5BEFAB0", VA = "0x5BF0AB0", Slot = "25")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004C4E")]
	[Address(RVA = "0x5BF0AF0", Offset = "0x5BEFAF0", VA = "0x5BF0AF0", Slot = "26")]
	public override void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6004C4F")]
	[Address(RVA = "0x5BF0B00", Offset = "0x5BEFB00", VA = "0x5BF0B00")]
	public HoldableButton()
	{
	}
}
