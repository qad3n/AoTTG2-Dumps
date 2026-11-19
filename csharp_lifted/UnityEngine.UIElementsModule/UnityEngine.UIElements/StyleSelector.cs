// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSelector
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x200047D")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal class StyleSelector
{
	[Token(Token = "0x4000EC9")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private StyleSelectorPart[] m_Parts;

	[Token(Token = "0x4000ECA")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private StyleSelectorRelationship m_PreviousRelationship;

	[Token(Token = "0x4000ECB")]
	public const int InvalidPseudoStateMask = -1;

	[Token(Token = "0x4000ECC")]
	[FieldOffset(Offset = "0x1C")]
	internal int pseudoStateMask;

	[Token(Token = "0x4000ECD")]
	[FieldOffset(Offset = "0x20")]
	internal int negatedPseudoStateMask;

	[Token(Token = "0x1700092A")]
	public StyleSelectorPart[] parts
	{
		[Token(Token = "0x6002293")]
		[Address(RVA = "0x6B1F930", Offset = "0x6B1E930", VA = "0x6B1F930")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002294")]
		[Address(RVA = "0x6B1F190", Offset = "0x6B1E190", VA = "0x6B1F190")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		internal set
		{
		}
	}

	[Token(Token = "0x1700092B")]
	public StyleSelectorRelationship previousRelationship
	{
		[Token(Token = "0x6002295")]
		[Address(RVA = "0x6B21C70", Offset = "0x6B20C70", VA = "0x6B21C70")]
		get
		{
			return default(StyleSelectorRelationship);
		}
		[Token(Token = "0x6002296")]
		[Address(RVA = "0x6B1F1A0", Offset = "0x6B1E1A0", VA = "0x6B1F1A0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		internal set
		{
		}
	}

	[Token(Token = "0x6002297")]
	[Address(RVA = "0x6B21C80", Offset = "0x6B20C80", VA = "0x6B21C80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002298")]
	[Address(RVA = "0x6B1F180", Offset = "0x6B1E180", VA = "0x6B1F180")]
	public StyleSelector()
	{
	}
}
