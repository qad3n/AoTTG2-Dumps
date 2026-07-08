using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x20003CE")]
internal class StyleComplexSelector : ISerializationCallbackReceiver
{
	[Token(Token = "0x20003CF")]
	private struct PseudoStateData
	{
		[Token(Token = "0x4000B5A")]
		[FieldOffset(Offset = "0x0")]
		public readonly PseudoStates state;

		[Token(Token = "0x4000B5B")]
		[FieldOffset(Offset = "0x4")]
		public readonly bool negate;

		[Token(Token = "0x6001837")]
		[Address(RVA = "0x4D8FD90", Offset = "0x4D8FD90", VA = "0x4D8FD90")]
		public PseudoStateData(PseudoStates state, bool negate)
		{
		}
	}

	[NonSerialized]
	[Token(Token = "0x4000B50")]
	[FieldOffset(Offset = "0x10")]
	public Hashes ancestorHashes;

	[Token(Token = "0x4000B51")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private int m_Specificity;

	[NonSerialized]
	[Token(Token = "0x4000B53")]
	[FieldOffset(Offset = "0x30")]
	private bool m_isSimple;

	[Token(Token = "0x4000B54")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private StyleSelector[] m_Selectors;

	[Token(Token = "0x4000B55")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	internal int ruleIndex;

	[NonSerialized]
	[Token(Token = "0x4000B56")]
	[FieldOffset(Offset = "0x48")]
	internal StyleComplexSelector nextInTable;

	[NonSerialized]
	[Token(Token = "0x4000B57")]
	[FieldOffset(Offset = "0x50")]
	internal int orderInStyleSheet;

	[Token(Token = "0x4000B58")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, PseudoStateData> s_PseudoStates;

	[Token(Token = "0x4000B59")]
	[FieldOffset(Offset = "0x8")]
	private static List<StyleSelectorPart> m_HashList;

	[Token(Token = "0x17000679")]
	public int specificity
	{
		[Token(Token = "0x6001829")]
		[Address(RVA = "0x4D8F740", Offset = "0x4D8F740", VA = "0x4D8F740")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700067A")]
	public StyleRule rule
	{
		[Token(Token = "0x600182A")]
		[Address(RVA = "0x4D8F750", Offset = "0x4D8F750", VA = "0x4D8F750")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600182B")]
		[Address(RVA = "0x4D8F760", Offset = "0x4D8F760", VA = "0x4D8F760")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x1700067B")]
	public bool isSimple
	{
		[Token(Token = "0x600182C")]
		[Address(RVA = "0x4D8F770", Offset = "0x4D8F770", VA = "0x4D8F770")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700067C")]
	public StyleSelector[] selectors
	{
		[Token(Token = "0x600182D")]
		[Address(RVA = "0x4D8F780", Offset = "0x4D8F780", VA = "0x4D8F780")]
		get
		{
			return null;
		}
		[Token(Token = "0x600182E")]
		[Address(RVA = "0x4D8F790", Offset = "0x4D8F790", VA = "0x4D8F790")]
		internal set
		{
		}
	}

	[Token(Token = "0x600182F")]
	[Address(RVA = "0x4D8F7C0", Offset = "0x4D8F7C0", VA = "0x4D8F7C0", Slot = "4")]
	public void OnBeforeSerialize()
	{
	}

	[Token(Token = "0x6001830")]
	[Address(RVA = "0x4D8F7D0", Offset = "0x4D8F7D0", VA = "0x4D8F7D0", Slot = "6")]
	public virtual void OnAfterDeserialize()
	{
	}

	[Token(Token = "0x6001831")]
	[Address(RVA = "0x4D8F7F0", Offset = "0x4D8F7F0", VA = "0x4D8F7F0")]
	internal void CachePseudoStateMasks()
	{
	}

	[Token(Token = "0x6001832")]
	[Address(RVA = "0x4D8FDD0", Offset = "0x4D8FDD0", VA = "0x4D8FDD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001833")]
	[Address(RVA = "0x4D8FF40", Offset = "0x4D8FF40", VA = "0x4D8FF40")]
	private static int StyleSelectorPartCompare(StyleSelectorPart x, StyleSelectorPart y)
	{
		return default(int);
	}

	[Token(Token = "0x6001834")]
	[Address(RVA = "0x4D8FF80", Offset = "0x4D8FF80", VA = "0x4D8FF80")]
	internal void CalculateHashes()
	{
	}

	[Token(Token = "0x6001835")]
	[Address(RVA = "0x4D90530", Offset = "0x4D90530", VA = "0x4D90530")]
	public StyleComplexSelector()
	{
	}
}
