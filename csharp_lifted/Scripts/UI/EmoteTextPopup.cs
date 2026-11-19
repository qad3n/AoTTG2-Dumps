// ==================== AoTTG2 cross-reference ====================
// Type: UI.EmoteTextPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/EmoteTextPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/EmoteTextPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Characters;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200083C")]
internal class EmoteTextPopup : BasePopup
{
	[Token(Token = "0x4002914")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _text;

	[Token(Token = "0x4002915")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected Transform _parent;

	[Token(Token = "0x4002916")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected Transform _transform;

	[Token(Token = "0x4002917")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	public float ShowTimeLeft;

	[Token(Token = "0x4002918")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	public BaseCharacter Character;

	[Token(Token = "0x4002919")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	public Vector3 Offset;

	[Token(Token = "0x400291A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xDC")]
	public bool infinitePopup;

	[Token(Token = "0x17000DA2")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004E83")]
		[Address(RVA = "0x5C211A0", Offset = "0x5C201A0", VA = "0x5C211A0", Slot = "55")]
		get
		{
			// Lifted from source/cpp/UI/EmoteTextPopup.c (UI.EmoteTextPopup$$get_EscapeBehavior): clean
			return 2;
		}
	}

	[Token(Token = "0x17000DA3")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6004E84")]
		[Address(RVA = "0x5C211B0", Offset = "0x5C201B0", VA = "0x5C211B0", Slot = "51")]
		get
		{
			// Lifted from source/cpp/UI/EmoteTextPopup.c (UI.EmoteTextPopup$$get_AnimationTime): clean
			return 0.25;
		}
	}

	[Token(Token = "0x17000DA4")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004E85")]
		[Address(RVA = "0x5C211C0", Offset = "0x5C201C0", VA = "0x5C211C0", Slot = "54")]
		get
		{
			// Lifted from source/cpp/UI/EmoteTextPopup.c (UI.EmoteTextPopup$$get_PopupAnimationType): clean
			return 1;
		}
	}

	[Token(Token = "0x6004E86")]
	[Address(RVA = "0x5C211D0", Offset = "0x5C201D0", VA = "0x5C211D0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/EmoteTextPopup.c (UI.EmoteTextPopup$$Setup): clean
		Transform pUVar1;
		Text pUVar2;

		pUVar1 = this.transform;
		if (pUVar1 != null) {
			pUVar1 = pUVar1.Find("Panel/Text/Label");
			if (pUVar1 != null) {
				pUVar2 = pUVar1.GetComponent<Text>();
				this._text = pUVar2;
				pUVar1 = this.transform;
				this._transform = pUVar1;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004E87")]
	[Address(RVA = "0x5C21280", Offset = "0x5C20280", VA = "0x5C21280", Slot = "62")]
	public virtual void Load(string text, float showTime, BaseCharacter character, Vector3 offset)
	{
		// Lifted from source/cpp/UI/EmoteTextPopup.c (UI.EmoteTextPopup$$Load): clean
		Text text_00;

		text_00 = this._text;
		LanguageFonts.SetText(text_00, text);
		this.ShowTimeLeft = showTime;
		this.Character = character;
		this.Offset.x = offset.x;
		this.Offset.y = offset.y;
		this.Offset.z = offset.z;
		return;
	}

	[Token(Token = "0x6004E88")]
	[Address(RVA = "0x5C1E370", Offset = "0x5C1D370", VA = "0x5C1E370")]
	public EmoteTextPopup()
	{
		// Lifted from source/cpp/UI/EmoteTextPopup.c (UI.EmoteTextPopup$$.ctor): clean
		base();
		return;
	}
}
