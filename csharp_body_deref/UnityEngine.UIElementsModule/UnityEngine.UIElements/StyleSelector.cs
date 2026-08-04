// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSelector
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x50B76D0", Offset = "0x50B76D0", VA = "0x50B76D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001842")]
		[Address(RVA = "0x50B8010", Offset = "0x50B8010", VA = "0x50B8010")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000681")]
	public StyleSelectorRelationship previousRelationship
	{
		[Token(Token = "0x6001843")]
		[Address(RVA = "0x50B8020", Offset = "0x50B8020", VA = "0x50B8020")]
		get
		{
			return default(StyleSelectorRelationship);
		}
		[Token(Token = "0x6001844")]
		[Address(RVA = "0x50B8030", Offset = "0x50B8030", VA = "0x50B8030")]
		internal set
		{
		}
	}

	[Token(Token = "0x6001845")]
	[Address(RVA = "0x50B8040", Offset = "0x50B8040", VA = "0x50B8040", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001846")]
	[Address(RVA = "0x50B8180", Offset = "0x50B8180", VA = "0x50B8180")]
	public StyleSelector()
	{
	}
}
