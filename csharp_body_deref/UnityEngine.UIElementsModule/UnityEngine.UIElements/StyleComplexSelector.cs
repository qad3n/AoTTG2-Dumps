// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleComplexSelector
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x2000478")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal class StyleComplexSelector
{
	[Token(Token = "0x2000479")]
	private struct PseudoStateData
	{
		[Token(Token = "0x4000EBA")]
		[FieldOffset(Offset = "0x0")]
		public readonly PseudoStates state;

		[Token(Token = "0x4000EBB")]
		[FieldOffset(Offset = "0x4")]
		public readonly bool negate;

		[Token(Token = "0x600227A")]
		[Address(RVA = "0xFEDB70", Offset = "0xFEC170", VA = "0x180FEDB70")]
		public PseudoStateData(PseudoStates state, bool negate)
		{
		}
	}

	[NonSerialized]
	[Token(Token = "0x4000EB1")]
	[FieldOffset(Offset = "0x10")]
	public Hashes ancestorHashes;

	[Token(Token = "0x4000EB2")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private int m_Specificity;

	[Token(Token = "0x4000EB4")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private StyleSelector[] m_Selectors;

	[Token(Token = "0x4000EB5")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal int ruleIndex;

	[NonSerialized]
	[Token(Token = "0x4000EB6")]
	[FieldOffset(Offset = "0x40")]
	internal StyleComplexSelector nextInTable;

	[NonSerialized]
	[Token(Token = "0x4000EB7")]
	[FieldOffset(Offset = "0x48")]
	internal int orderInStyleSheet;

	[Token(Token = "0x4000EB8")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, PseudoStateData> s_PseudoStates;

	[Token(Token = "0x4000EB9")]
	[FieldOffset(Offset = "0x8")]
	private static readonly List<StyleSelectorPart> s_HashList;

	[Token(Token = "0x1700091E")]
	public int specificity
	{
		[Token(Token = "0x600226D")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600226E")]
		[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700091F")]
	public StyleRule rule
	{
		[Token(Token = "0x600226F")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002270")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		[CompilerGenerated]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		internal set
		{
		}
	}

	[Token(Token = "0x17000920")]
	public bool isSimple
	{
		[Token(Token = "0x6002271")]
		[Address(RVA = "0x31132E0", Offset = "0x31118E0", VA = "0x1831132E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000921")]
	public StyleSelector[] selectors
	{
		[Token(Token = "0x6002272")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002273")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		internal set
		{
		}
	}

	[Token(Token = "0x6002274")]
	[Address(RVA = "0x3113290", Offset = "0x3111890", VA = "0x183113290")]
	internal StyleComplexSelector()
	{
	}

	[Token(Token = "0x6002275")]
	[Address(RVA = "0x3112390", Offset = "0x3110990", VA = "0x183112390")]
	internal void CachePseudoStateMasks(StyleSheet styleSheet)
	{
	}

	[Token(Token = "0x6002276")]
	[Address(RVA = "0x3113090", Offset = "0x3111690", VA = "0x183113090", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002277")]
	[Address(RVA = "0x3113040", Offset = "0x3111640", VA = "0x183113040")]
	private static int StyleSelectorPartCompare(StyleSelectorPart x, StyleSelectorPart y)
	{
		return default(int);
	}

	[Token(Token = "0x6002278")]
	[Address(RVA = "0x3112A90", Offset = "0x3111090", VA = "0x183112A90")]
	internal void CalculateHashes()
	{
	}
}
