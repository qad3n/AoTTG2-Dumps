using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x20003D3")]
internal class StyleSelector
{
	[Token(Token = "0x4000B67")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private StyleSelectorPart[] m_Parts;

	[Token(Token = "0x4000B68")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private StyleSelectorRelationship m_PreviousRelationship;

	[Token(Token = "0x4000B69")]
	[FieldOffset(Offset = "0x1C")]
	internal int pseudoStateMask;

	[Token(Token = "0x4000B6A")]
	[FieldOffset(Offset = "0x20")]
	internal int negatedPseudoStateMask;

	[Token(Token = "0x17000680")]
	public StyleSelectorPart[] parts
	{
		[Token(Token = "0x6001841")]
		[Address(RVA = "0x4D8FDA0", Offset = "0x4D8FDA0", VA = "0x4D8FDA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001842")]
		[Address(RVA = "0x4D906E0", Offset = "0x4D906E0", VA = "0x4D906E0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000681")]
	public StyleSelectorRelationship previousRelationship
	{
		[Token(Token = "0x6001843")]
		[Address(RVA = "0x4D906F0", Offset = "0x4D906F0", VA = "0x4D906F0")]
		get
		{
			return default(StyleSelectorRelationship);
		}
		[Token(Token = "0x6001844")]
		[Address(RVA = "0x4D90700", Offset = "0x4D90700", VA = "0x4D90700")]
		internal set
		{
		}
	}

	[Token(Token = "0x6001845")]
	[Address(RVA = "0x4D90710", Offset = "0x4D90710", VA = "0x4D90710", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001846")]
	[Address(RVA = "0x4D90850", Offset = "0x4D90850", VA = "0x4D90850")]
	public StyleSelector()
	{
	}
}
