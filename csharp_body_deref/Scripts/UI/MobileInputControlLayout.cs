// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputControlLayout
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputControlLayout.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UI;

[Serializable]
[Token(Token = "0x200074D")]
public class MobileInputControlLayout
{
	[Token(Token = "0x40024C9")]
	private const float DefaultJoystickBaseScale = 0.45f;

	[Token(Token = "0x40024CA")]
	private const float DefaultJoystickHandleScale = 0.43f;

	[Token(Token = "0x40024CB")]
	private const float DefaultJoystickReelOutRingDiameter = 380f;

	[NonSerialized]
	[Token(Token = "0x40024CC")]
	[FieldOffset(Offset = "0x10")]
	public string Id;

	[Token(Token = "0x40024CD")]
	[FieldOffset(Offset = "0x18")]
	public string Label;

	[Token(Token = "0x40024CE")]
	[FieldOffset(Offset = "0x20")]
	public MobileInputSkin Icon;

	[Token(Token = "0x40024CF")]
	[FieldOffset(Offset = "0x28")]
	public float IconSize;

	[Token(Token = "0x40024D0")]
	[FieldOffset(Offset = "0x30")]
	public string Actions;

	[Token(Token = "0x40024D1")]
	[FieldOffset(Offset = "0x38")]
	public string Kind;

	[Token(Token = "0x40024D2")]
	[FieldOffset(Offset = "0x40")]
	public string Shape;

	[Token(Token = "0x40024D3")]
	[FieldOffset(Offset = "0x48")]
	public float X;

	[Token(Token = "0x40024D4")]
	[FieldOffset(Offset = "0x4C")]
	public float Y;

	[Token(Token = "0x40024D5")]
	[FieldOffset(Offset = "0x50")]
	public float Width;

	[Token(Token = "0x40024D6")]
	[FieldOffset(Offset = "0x54")]
	public float Height;

	[Token(Token = "0x40024D7")]
	[FieldOffset(Offset = "0x58")]
	public string PopupMode;

	[Token(Token = "0x40024D8")]
	[FieldOffset(Offset = "0x60")]
	public MobileInputSkin Skin;

	[Token(Token = "0x40024D9")]
	[FieldOffset(Offset = "0x68")]
	public MobileInputSkin OnSkin;

	[Token(Token = "0x40024DA")]
	[FieldOffset(Offset = "0x70")]
	public MobileInputSkin JoystickHandleSkin;

	[Token(Token = "0x40024DB")]
	[FieldOffset(Offset = "0x78")]
	public MobileInputSkin JoystickActiveSkin;

	[Token(Token = "0x40024DC")]
	[FieldOffset(Offset = "0x80")]
	public MobileInputSkin JoystickRingSkin;

	[Token(Token = "0x40024DD")]
	[FieldOffset(Offset = "0x88")]
	public MobileInputSkin JoystickReelInSkin;

	[Token(Token = "0x40024DE")]
	[FieldOffset(Offset = "0x90")]
	public MobileInputSkin JoystickReelOutSkin;

	[Token(Token = "0x40024DF")]
	[FieldOffset(Offset = "0x98")]
	public float JoystickBaseScale;

	[Token(Token = "0x40024E0")]
	[FieldOffset(Offset = "0x9C")]
	public float JoystickHandleScale;

	[Token(Token = "0x40024E1")]
	[FieldOffset(Offset = "0xA0")]
	public float JoystickReelOutRingDiameter;

	[Token(Token = "0x40024E2")]
	[FieldOffset(Offset = "0xA4")]
	public bool DisableContentMovement;

	[Token(Token = "0x40024E3")]
	[FieldOffset(Offset = "0xA5")]
	public bool AllowLookAreaThrough;

	[Token(Token = "0x40024E4")]
	[FieldOffset(Offset = "0xA8")]
	public float BindReelInAngle;

	[Token(Token = "0x40024E5")]
	[FieldOffset(Offset = "0xAC")]
	public float BindReelOutAngle;

	[Token(Token = "0x40024E6")]
	[FieldOffset(Offset = "0xB0")]
	public bool AimAssistOnPress;

	[Token(Token = "0x40024E7")]
	[FieldOffset(Offset = "0xB1")]
	public bool AimAssistOnRelease;

	[Token(Token = "0x40024E8")]
	[FieldOffset(Offset = "0xB8")]
	public List<MobileInputControlLayout> Children;

	[Token(Token = "0x60046BC")]
	[Address(RVA = "0x5B6B3B0", Offset = "0x5B6A3B0", VA = "0x5B6B3B0")]
	public string[] GetActionIds()
	{
		return null;
	}

	[Token(Token = "0x60046BD")]
	[Address(RVA = "0x5B6B330", Offset = "0x5B6A330", VA = "0x5B6B330")]
	public MobileInputControlKind GetKind()
	{
		return default(MobileInputControlKind);
	}

	[Token(Token = "0x60046BE")]
	[Address(RVA = "0x5B68350", Offset = "0x5B67350", VA = "0x5B68350")]
	public MobileInputControlShape GetShape()
	{
		return default(MobileInputControlShape);
	}

	[Token(Token = "0x60046BF")]
	[Address(RVA = "0x5B6C6A0", Offset = "0x5B6B6A0", VA = "0x5B6C6A0")]
	public MobileInputPopupMode GetPopupMode()
	{
		return default(MobileInputPopupMode);
	}

	[Token(Token = "0x60046C0")]
	[Address(RVA = "0x5B68820", Offset = "0x5B67820", VA = "0x5B68820")]
	public MobileInputSkin GetSkin()
	{
		return null;
	}

	[Token(Token = "0x60046C1")]
	[Address(RVA = "0x5B69F80", Offset = "0x5B68F80", VA = "0x5B69F80")]
	public MobileInputSkin GetOnSkin()
	{
		return null;
	}

	[Token(Token = "0x60046C2")]
	[Address(RVA = "0x5B68900", Offset = "0x5B67900", VA = "0x5B68900")]
	public MobileInputSkin GetJoystickHandleSkin()
	{
		return null;
	}

	[Token(Token = "0x60046C3")]
	[Address(RVA = "0x5B68990", Offset = "0x5B67990", VA = "0x5B68990")]
	public MobileInputSkin GetJoystickActiveSkin()
	{
		return null;
	}

	[Token(Token = "0x60046C4")]
	[Address(RVA = "0x5B685C0", Offset = "0x5B675C0", VA = "0x5B685C0")]
	public MobileInputSkin GetJoystickRingSkin()
	{
		return null;
	}

	[Token(Token = "0x60046C5")]
	[Address(RVA = "0x5B68A20", Offset = "0x5B67A20", VA = "0x5B68A20")]
	public MobileInputSkin GetJoystickReelInSkin()
	{
		return null;
	}

	[Token(Token = "0x60046C6")]
	[Address(RVA = "0x5B68AC0", Offset = "0x5B67AC0", VA = "0x5B68AC0")]
	public MobileInputSkin GetJoystickReelOutSkin()
	{
		return null;
	}

	[Token(Token = "0x60046C7")]
	[Address(RVA = "0x5B68520", Offset = "0x5B67520", VA = "0x5B68520")]
	public float GetJoystickBaseScale()
	{
		return default(float);
	}

	[Token(Token = "0x60046C8")]
	[Address(RVA = "0x5B688B0", Offset = "0x5B678B0", VA = "0x5B688B0")]
	public float GetJoystickHandleScale()
	{
		return default(float);
	}

	[Token(Token = "0x60046C9")]
	[Address(RVA = "0x5B68570", Offset = "0x5B67570", VA = "0x5B68570")]
	public float GetJoystickReelOutRingDiameter()
	{
		return default(float);
	}

	[Token(Token = "0x60046CA")]
	[Address(RVA = "0x5B6D430", Offset = "0x5B6C430", VA = "0x5B6D430")]
	public MobileInputSkin GetIcon()
	{
		return null;
	}

	[Token(Token = "0x60046CB")]
	[Address(RVA = "0x5B6D650", Offset = "0x5B6C650", VA = "0x5B6D650")]
	public float GetIconSize()
	{
		return default(float);
	}

	[Token(Token = "0x60046CC")]
	[Address(RVA = "0x5B72DF0", Offset = "0x5B71DF0", VA = "0x5B72DF0")]
	public MobileInputControlLayout Clone()
	{
		return null;
	}

	[Token(Token = "0x60046CD")]
	[Address(RVA = "0x5B6A050", Offset = "0x5B69050", VA = "0x5B6A050")]
	public bool ShouldMoveContentWithTouch()
	{
		return default(bool);
	}

	[Token(Token = "0x60046CE")]
	[Address(RVA = "0x5B67E60", Offset = "0x5B66E60", VA = "0x5B67E60")]
	public MobileInputControlLayout()
	{
	}
}
