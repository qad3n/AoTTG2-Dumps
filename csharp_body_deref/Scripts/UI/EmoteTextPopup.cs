using System.Runtime.InteropServices;
using Characters;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005EB")]
internal class EmoteTextPopup : BasePopup
{
	[Token(Token = "0x4001CB1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _text;

	[Token(Token = "0x4001CB2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected Transform _parent;

	[Token(Token = "0x4001CB3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected Transform _transform;

	[Token(Token = "0x4001CB4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	public float ShowTimeLeft;

	[Token(Token = "0x4001CB5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	public BaseCharacter Character;

	[Token(Token = "0x4001CB6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	public Vector3 Offset;

	[Token(Token = "0x4001CB7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xDC")]
	public bool infinitePopup;

	[Token(Token = "0x17000B5C")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6003C1E")]
		[Address(RVA = "0x3FAD240", Offset = "0x3FAD240", VA = "0x3FAD240", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B5D")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6003C1F")]
		[Address(RVA = "0x3FAD250", Offset = "0x3FAD250", VA = "0x3FAD250", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x6003C20")]
	[Address(RVA = "0x3FAD260", Offset = "0x3FAD260", VA = "0x3FAD260", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003C21")]
	[Address(RVA = "0x3FAD310", Offset = "0x3FAD310", VA = "0x3FAD310", Slot = "59")]
	public virtual void Load(string text, float showTime, BaseCharacter character, Vector3 offset)
	{
	}

	[Token(Token = "0x6003C22")]
	[Address(RVA = "0x3FAA6A0", Offset = "0x3FAA6A0", VA = "0x3FAA6A0")]
	public EmoteTextPopup()
	{
	}
}
