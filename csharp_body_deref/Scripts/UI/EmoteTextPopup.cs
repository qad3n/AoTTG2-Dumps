// ==================== AoTTG2 cross-reference ====================
// Type: UI.EmoteTextPopup
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000791")]
internal class EmoteTextPopup : BasePopup
{
	[Token(Token = "0x40025A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _text;

	[Token(Token = "0x40025A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected Transform _parent;

	[Token(Token = "0x40025A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected Transform _transform;

	[Token(Token = "0x40025A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	public float ShowTimeLeft;

	[Token(Token = "0x40025A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	public BaseCharacter Character;

	[Token(Token = "0x40025A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	public Vector3 Offset;

	[Token(Token = "0x40025A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xDC")]
	public bool infinitePopup;

	[Token(Token = "0x17000D26")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x600495C")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000D27")]
	protected override float AnimationTime
	{
		[Token(Token = "0x600495D")]
		[Address(RVA = "0x22258B0", Offset = "0x2223EB0", VA = "0x1822258B0", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D28")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x600495E")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x600495F")]
	[Address(RVA = "0x2244C50", Offset = "0x2243250", VA = "0x182244C50", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004960")]
	[Address(RVA = "0x2244BC0", Offset = "0x22431C0", VA = "0x182244BC0", Slot = "62")]
	public virtual void Load(string text, float showTime, BaseCharacter character, Vector3 offset)
	{
	}

	[Token(Token = "0x6004961")]
	[Address(RVA = "0x21C11A0", Offset = "0x21BF7A0", VA = "0x1821C11A0")]
	public EmoteTextPopup()
	{
	}
}
