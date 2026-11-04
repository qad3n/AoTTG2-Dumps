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

[Token(Token = "0x200078E")]
internal class EmoteEmojiPopup : EmoteTextPopup
{
	[Token(Token = "0x4002588")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	protected RawImage _emojiImage;

	[Token(Token = "0x4002589")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	protected bool _animated;

	[Token(Token = "0x400258A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE9")]
	protected bool _isFirstFrame;

	[Token(Token = "0x400258B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	protected Texture _texture0;

	[Token(Token = "0x400258C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	protected Texture _texture1;

	[Token(Token = "0x400258D")]
	protected const float AnimationFrameTime = 0.5f;

	[Token(Token = "0x400258E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	protected float _animationTimeLeft;

	[Token(Token = "0x6004942")]
	[Address(RVA = "0x2241D20", Offset = "0x2240320", VA = "0x182241D20", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004943")]
	[Address(RVA = "0x22418C0", Offset = "0x223FEC0", VA = "0x1822418C0", Slot = "62")]
	public override void Load(string text, float showTime, BaseCharacter character, Vector3 offset)
	{
	}

	[Token(Token = "0x6004944")]
	[Address(RVA = "0x2241DD0", Offset = "0x22403D0", VA = "0x182241DD0")]
	protected void Update()
	{
	}

	[Token(Token = "0x6004945")]
	[Address(RVA = "0x21C11A0", Offset = "0x21BF7A0", VA = "0x1821C11A0")]
	public EmoteEmojiPopup()
	{
	}
}
