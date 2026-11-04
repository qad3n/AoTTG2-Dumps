// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSelector
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x172DEB0", Offset = "0x172C4B0", VA = "0x18172DEB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002294")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		internal set
		{
		}
	}

	[Token(Token = "0x1700092B")]
	public StyleSelectorRelationship previousRelationship
	{
		[Token(Token = "0x6002295")]
		[Address(RVA = "0xB3E0C0", Offset = "0xB3C6C0", VA = "0x180B3E0C0")]
		get
		{
			return default(StyleSelectorRelationship);
		}
		[Token(Token = "0x6002296")]
		[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		internal set
		{
		}
	}

	[Token(Token = "0x6002297")]
	[Address(RVA = "0x31184E0", Offset = "0x3116AE0", VA = "0x1831184E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002298")]
	[Address(RVA = "0x3118620", Offset = "0x3116C20", VA = "0x183118620")]
	public StyleSelector()
	{
	}
}
