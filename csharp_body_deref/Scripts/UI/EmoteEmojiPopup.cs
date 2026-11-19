// ==================== AoTTG2 cross-reference ====================
// Type: UI.EmoteEmojiPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/EmoteEmojiPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/EmoteEmojiPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Characters;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000839")]
internal class EmoteEmojiPopup : EmoteTextPopup
{
	[Token(Token = "0x40028F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	protected RawImage _emojiImage;

	[Token(Token = "0x40028FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	protected bool _animated;

	[Token(Token = "0x40028FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE9")]
	protected bool _isFirstFrame;

	[Token(Token = "0x40028FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	protected Texture _texture0;

	[Token(Token = "0x40028FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	protected Texture _texture1;

	[Token(Token = "0x40028FE")]
	protected const float AnimationFrameTime = 0.5f;

	[Token(Token = "0x40028FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	protected float _animationTimeLeft;

	[Token(Token = "0x6004E68")]
	[Address(RVA = "0x5C1DDF0", Offset = "0x5C1CDF0", VA = "0x5C1DDF0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004E69")]
	[Address(RVA = "0x5C1DEA0", Offset = "0x5C1CEA0", VA = "0x5C1DEA0", Slot = "62")]
	public override void Load(string text, float showTime, BaseCharacter character, Vector3 offset)
	{
	}

	[Token(Token = "0x6004E6A")]
	[Address(RVA = "0x5C1E2C0", Offset = "0x5C1D2C0", VA = "0x5C1E2C0")]
	protected void Update()
	{
	}

	[Token(Token = "0x6004E6B")]
	[Address(RVA = "0x5C1E360", Offset = "0x5C1D360", VA = "0x5C1E360")]
	public EmoteEmojiPopup()
	{
	}
}
