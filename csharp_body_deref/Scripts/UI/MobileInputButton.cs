// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputButton
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputButton.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200073C")]
public class MobileInputButton : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IPointerUpHandler
{
	[Token(Token = "0x400245A")]
	[FieldOffset(Offset = "0x20")]
	private MobileInput[] _inputs;

	[Token(Token = "0x400245B")]
	[FieldOffset(Offset = "0x28")]
	private bool _aimAssistOnPress;

	[Token(Token = "0x400245C")]
	[FieldOffset(Offset = "0x29")]
	private bool _aimAssistOnRelease;

	[Token(Token = "0x400245D")]
	[FieldOffset(Offset = "0x2A")]
	private bool _pressed;

	[Token(Token = "0x400245E")]
	[FieldOffset(Offset = "0x30")]
	private Image _image;

	[Token(Token = "0x400245F")]
	[FieldOffset(Offset = "0x38")]
	private MobileInputSkin _normalSkin;

	[Token(Token = "0x4002460")]
	[FieldOffset(Offset = "0x40")]
	private MobileInputSkin _pressedSkin;

	[Token(Token = "0x4002461")]
	[FieldOffset(Offset = "0x48")]
	private MobileInputControlShape _shape;

	[Token(Token = "0x17000C08")]
	public bool HasInputs
	{
		[Token(Token = "0x6004637")]
		[Address(RVA = "0x5B6AD40", Offset = "0x5B69D40", VA = "0x5B6AD40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004638")]
	[Address(RVA = "0x5B6C5A0", Offset = "0x5B6B5A0", VA = "0x5B6C5A0")]
	public void Setup(MobileInput[] inputs, bool aimAssistOnPress, bool aimAssistOnRelease, MobileInputSkin normalSkin, MobileInputSkin pressedSkin, MobileInputControlShape shape)
	{
	}

	[Token(Token = "0x6004639")]
	[Address(RVA = "0x5B6DE20", Offset = "0x5B6CE20", VA = "0x5B6DE20")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600463A")]
	[Address(RVA = "0x5B6DE40", Offset = "0x5B6CE40", VA = "0x5B6DE40", Slot = "4")]
	public void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600463B")]
	[Address(RVA = "0x5B6DE50", Offset = "0x5B6CE50", VA = "0x5B6DE50", Slot = "5")]
	public void OnPointerUp(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600463C")]
	[Address(RVA = "0x5B6DE30", Offset = "0x5B6CE30", VA = "0x5B6DE30")]
	public void SetPressed(bool pressed)
	{
	}

	[Token(Token = "0x600463D")]
	[Address(RVA = "0x5B6DF60", Offset = "0x5B6CF60", VA = "0x5B6DF60")]
	public void SetHighlighted(bool highlighted)
	{
	}

	[Token(Token = "0x600463E")]
	[Address(RVA = "0x5B6DE60", Offset = "0x5B6CE60", VA = "0x5B6DE60")]
	public void SetPressed(bool pressed, Func<MobileInput, bool> keepInputPressed)
	{
	}

	[Token(Token = "0x600463F")]
	[Address(RVA = "0x5B6E010", Offset = "0x5B6D010", VA = "0x5B6E010")]
	public void TriggerOneFrame()
	{
	}

	[Token(Token = "0x6004640")]
	[Address(RVA = "0x5B6E070", Offset = "0x5B6D070", VA = "0x5B6E070")]
	public MobileInputButton()
	{
	}
}
