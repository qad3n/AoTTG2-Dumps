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

[Token(Token = "0x2000633")]
internal class EmoteEmojiPopup : EmoteTextPopup
{
	[Token(Token = "0x4001DD3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	protected RawImage _emojiImage;

	[Token(Token = "0x4001DD4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	protected bool _animated;

	[Token(Token = "0x4001DD5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE9")]
	protected bool _isFirstFrame;

	[Token(Token = "0x4001DD6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	protected Texture _texture0;

	[Token(Token = "0x4001DD7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	protected Texture _texture1;

	[Token(Token = "0x4001DD8")]
	protected const float AnimationFrameTime = 0.5f;

	[Token(Token = "0x4001DD9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	protected float _animationTimeLeft;

	[Token(Token = "0x6003E50")]
	[Address(RVA = "0x42BC220", Offset = "0x42BC220", VA = "0x42BC220", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003E51")]
	[Address(RVA = "0x42BC2D0", Offset = "0x42BC2D0", VA = "0x42BC2D0", Slot = "59")]
	public override void Load(string text, float showTime, BaseCharacter character, Vector3 offset)
	{
	}

	[Token(Token = "0x6003E52")]
	[Address(RVA = "0x42BC6E0", Offset = "0x42BC6E0", VA = "0x42BC6E0")]
	protected void Update()
	{
	}

	[Token(Token = "0x6003E53")]
	[Address(RVA = "0x42BC780", Offset = "0x42BC780", VA = "0x42BC780")]
	public EmoteEmojiPopup()
	{
	}
}
