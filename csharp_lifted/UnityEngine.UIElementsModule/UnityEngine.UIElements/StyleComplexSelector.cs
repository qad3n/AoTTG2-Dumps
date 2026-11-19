// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleComplexSelector
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6B1F920", Offset = "0x6B1E920", VA = "0x6B1F920")]
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
		[Address(RVA = "0x6B1F1B0", Offset = "0x6B1E1B0", VA = "0x6B1F1B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600226E")]
		[Address(RVA = "0x6B1F1C0", Offset = "0x6B1E1C0", VA = "0x6B1F1C0")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700091F")]
	public StyleRule rule
	{
		[Token(Token = "0x600226F")]
		[Address(RVA = "0x6B1F1D0", Offset = "0x6B1E1D0", VA = "0x6B1F1D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002270")]
		[Address(RVA = "0x6B1F1E0", Offset = "0x6B1E1E0", VA = "0x6B1F1E0")]
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
		[Address(RVA = "0x6B1F1F0", Offset = "0x6B1E1F0", VA = "0x6B1F1F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000921")]
	public StyleSelector[] selectors
	{
		[Token(Token = "0x6002272")]
		[Address(RVA = "0x6B1F210", Offset = "0x6B1E210", VA = "0x6B1F210")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002273")]
		[Address(RVA = "0x6B1F220", Offset = "0x6B1E220", VA = "0x6B1F220")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		internal set
		{
		}
	}

	[Token(Token = "0x6002274")]
	[Address(RVA = "0x6B1F230", Offset = "0x6B1E230", VA = "0x6B1F230")]
	internal StyleComplexSelector()
	{
	}

	[Token(Token = "0x6002275")]
	[Address(RVA = "0x6B1F300", Offset = "0x6B1E300", VA = "0x6B1F300")]
	internal void CachePseudoStateMasks(StyleSheet styleSheet)
	{
	}

	[Token(Token = "0x6002276")]
	[Address(RVA = "0x6B1F950", Offset = "0x6B1E950", VA = "0x6B1F950", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002277")]
	[Address(RVA = "0x6B1FAC0", Offset = "0x6B1EAC0", VA = "0x6B1FAC0")]
	private static int StyleSelectorPartCompare(StyleSelectorPart x, StyleSelectorPart y)
	{
		return default(int);
	}

	[Token(Token = "0x6002278")]
	[Address(RVA = "0x6B1FB00", Offset = "0x6B1EB00", VA = "0x6B1FB00")]
	internal void CalculateHashes()
	{
	}
}
