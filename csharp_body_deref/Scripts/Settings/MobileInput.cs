// ==================== AoTTG2 cross-reference ====================
// Type: Settings.MobileInput
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Settings/MobileInput.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UI;

namespace Settings;

[Token(Token = "0x200009A")]
public class MobileInput
{
	[Token(Token = "0x4000316")]
	[FieldOffset(Offset = "0x10")]
	private bool _current;

	[Token(Token = "0x4000317")]
	[FieldOffset(Offset = "0x11")]
	private bool _previous;

	[Token(Token = "0x4000318")]
	[FieldOffset(Offset = "0x14")]
	private int _pressedFrame;

	[Token(Token = "0x4000319")]
	[FieldOffset(Offset = "0x18")]
	private int _releasedFrame;

	[Token(Token = "0x400031A")]
	[FieldOffset(Offset = "0x1C")]
	private int _keyDownReturnedFrame;

	[Token(Token = "0x400031B")]
	[FieldOffset(Offset = "0x20")]
	private int _keyUpReturnedFrame;

	[Token(Token = "0x400031C")]
	[FieldOffset(Offset = "0x24")]
	private int _oneFrameReleaseFrame;

	[Token(Token = "0x400031D")]
	[FieldOffset(Offset = "0x28")]
	private Func<bool> _pressedOverride;

	[Token(Token = "0x400031E")]
	[FieldOffset(Offset = "0x30")]
	private readonly Dictionary<MobileInputLayoutRole, List<string>> _displayNames;

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x58CE150", Offset = "0x58CD150", VA = "0x58CE150")]
	public bool GetKey()
	{
		return default(bool);
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x58CE1D0", Offset = "0x58CD1D0", VA = "0x58CE1D0")]
	public bool GetKeyDown()
	{
		return default(bool);
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x58CE220", Offset = "0x58CD220", VA = "0x58CE220")]
	public bool GetKeyUp()
	{
		return default(bool);
	}

	[Token(Token = "0x600044E")]
	[Address(RVA = "0x58CE270", Offset = "0x58CD270", VA = "0x58CE270")]
	public void SetPressed(bool pressed)
	{
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x58CE2D0", Offset = "0x58CD2D0", VA = "0x58CE2D0")]
	public void SetPressedOverride(Func<bool> pressedOverride)
	{
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x58CE2E0", Offset = "0x58CD2E0", VA = "0x58CE2E0")]
	public void PressForOneFrame()
	{
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x58CE320", Offset = "0x58CD320", VA = "0x58CE320")]
	public void LateUpdate()
	{
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x58CE390", Offset = "0x58CD390", VA = "0x58CE390")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x58CE3B0", Offset = "0x58CD3B0", VA = "0x58CE3B0")]
	public void RegisterDisplayName(MobileInputLayoutRole role, string displayName)
	{
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x58CE530", Offset = "0x58CD530", VA = "0x58CE530")]
	public void ClearDisplayNames()
	{
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x58CE570", Offset = "0x58CD570", VA = "0x58CE570")]
	public string GetDisplayName(MobileInputLayoutRole[] roles)
	{
		return null;
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x58CE1A0", Offset = "0x58CD1A0", VA = "0x58CE1A0")]
	private bool IsPressed()
	{
		return default(bool);
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x58CE8A0", Offset = "0x58CD8A0", VA = "0x58CE8A0")]
	public MobileInput()
	{
	}
}
