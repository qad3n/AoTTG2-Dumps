// ==================== AoTTG2 cross-reference ====================
// Type: UI.EmoteTextPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/EmoteTextPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/EmoteTextPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Characters;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000636")]
internal class EmoteTextPopup : BasePopup
{
	[Token(Token = "0x4001DEE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _text;

	[Token(Token = "0x4001DEF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected Transform _parent;

	[Token(Token = "0x4001DF0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected Transform _transform;

	[Token(Token = "0x4001DF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	public float ShowTimeLeft;

	[Token(Token = "0x4001DF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	public BaseCharacter Character;

	[Token(Token = "0x4001DF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	public Vector3 Offset;

	[Token(Token = "0x4001DF4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xDC")]
	public bool infinitePopup;

	[Token(Token = "0x17000BD4")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6003E68")]
		[Address(RVA = "0x42BF330", Offset = "0x42BF330", VA = "0x42BF330", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BD5")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6003E69")]
		[Address(RVA = "0x42BF340", Offset = "0x42BF340", VA = "0x42BF340", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x6003E6A")]
	[Address(RVA = "0x42BF350", Offset = "0x42BF350", VA = "0x42BF350", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003E6B")]
	[Address(RVA = "0x42BF400", Offset = "0x42BF400", VA = "0x42BF400", Slot = "59")]
	public virtual void Load(string text, float showTime, BaseCharacter character, Vector3 offset)
	{
	}

	[Token(Token = "0x6003E6C")]
	[Address(RVA = "0x42BC790", Offset = "0x42BC790", VA = "0x42BC790")]
	public EmoteTextPopup()
	{
	}
}
