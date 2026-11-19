// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputSkin
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputSkin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Serializable]
[Token(Token = "0x200074C")]
public class MobileInputSkin
{
	[Token(Token = "0x40024C3")]
	[FieldOffset(Offset = "0x10")]
	public float R;

	[Token(Token = "0x40024C4")]
	[FieldOffset(Offset = "0x14")]
	public float G;

	[Token(Token = "0x40024C5")]
	[FieldOffset(Offset = "0x18")]
	public float B;

	[Token(Token = "0x40024C6")]
	[FieldOffset(Offset = "0x1C")]
	public float A;

	[Token(Token = "0x40024C7")]
	[FieldOffset(Offset = "0x20")]
	public string Image;

	[Token(Token = "0x40024C8")]
	[FieldOffset(Offset = "0x28")]
	public bool PreserveAspect;

	[Token(Token = "0x60046B6")]
	[Address(RVA = "0x5B72BE0", Offset = "0x5B71BE0", VA = "0x5B72BE0")]
	public MobileInputSkin(float r, float g, float b, float a)
	{
	}

	[Token(Token = "0x60046B7")]
	[Address(RVA = "0x5B72C70", Offset = "0x5B71C70", VA = "0x5B72C70")]
	public MobileInputSkin()
	{
	}

	[Token(Token = "0x60046B8")]
	[Address(RVA = "0x5B6D640", Offset = "0x5B6C640", VA = "0x5B6D640")]
	public Color ToColor()
	{
		return default(Color);
	}

	[Token(Token = "0x60046B9")]
	[Address(RVA = "0x5B6D530", Offset = "0x5B6C530", VA = "0x5B6D530")]
	public bool HasImage()
	{
		return default(bool);
	}

	[Token(Token = "0x60046BA")]
	[Address(RVA = "0x5B72CB0", Offset = "0x5B71CB0", VA = "0x5B72CB0")]
	public MobileInputSkin Clone()
	{
		return null;
	}

	[Token(Token = "0x60046BB")]
	[Address(RVA = "0x5B72D60", Offset = "0x5B71D60", VA = "0x5B72D60")]
	public static MobileInputSkin FromColor(Color color)
	{
		return null;
	}
}
