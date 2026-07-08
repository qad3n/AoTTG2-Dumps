using System.Runtime.InteropServices;
using Characters;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005E8")]
internal class EmoteEmojiPopup : EmoteTextPopup
{
	[Token(Token = "0x4001C96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	protected RawImage _emojiImage;

	[Token(Token = "0x4001C97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	protected bool _animated;

	[Token(Token = "0x4001C98")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE9")]
	protected bool _isFirstFrame;

	[Token(Token = "0x4001C99")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	protected Texture _texture0;

	[Token(Token = "0x4001C9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	protected Texture _texture1;

	[Token(Token = "0x4001C9B")]
	protected const float AnimationFrameTime = 0.5f;

	[Token(Token = "0x4001C9C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	protected float _animationTimeLeft;

	[Token(Token = "0x6003C06")]
	[Address(RVA = "0x3FAA130", Offset = "0x3FAA130", VA = "0x3FAA130", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003C07")]
	[Address(RVA = "0x3FAA1E0", Offset = "0x3FAA1E0", VA = "0x3FAA1E0", Slot = "59")]
	public override void Load(string text, float showTime, BaseCharacter character, Vector3 offset)
	{
	}

	[Token(Token = "0x6003C08")]
	[Address(RVA = "0x3FAA5F0", Offset = "0x3FAA5F0", VA = "0x3FAA5F0")]
	protected void Update()
	{
	}

	[Token(Token = "0x6003C09")]
	[Address(RVA = "0x3FAA690", Offset = "0x3FAA690", VA = "0x3FAA690")]
	public EmoteEmojiPopup()
	{
	}
}
