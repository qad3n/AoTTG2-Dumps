using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements.StyleSheets;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000483")]
internal class VisualTreeStyleUpdaterTraversal : HierarchyTraversal
{
	[Token(Token = "0x4000D95")]
	[FieldOffset(Offset = "0x10")]
	private StyleVariableContext m_ProcessVarContext;

	[Token(Token = "0x4000D96")]
	[FieldOffset(Offset = "0x18")]
	private HashSet<VisualElement> m_UpdateList;

	[Token(Token = "0x4000D97")]
	[FieldOffset(Offset = "0x20")]
	private HashSet<VisualElement> m_ParentList;

	[Token(Token = "0x4000D98")]
	[FieldOffset(Offset = "0x28")]
	private List<SelectorMatchRecord> m_TempMatchResults;

	[Token(Token = "0x4000D9A")]
	[FieldOffset(Offset = "0x38")]
	private StyleMatchingContext m_StyleMatchingContext;

	[Token(Token = "0x4000D9B")]
	[FieldOffset(Offset = "0x40")]
	private StylePropertyReader m_StylePropertyReader;

	[Token(Token = "0x4000D9D")]
	[FieldOffset(Offset = "0x50")]
	private readonly List<StylePropertyId> m_AnimatedProperties;

	[Token(Token = "0x17000755")]
	private float currentPixelsPerPoint
	{
		[Token(Token = "0x6001BFD")]
		[Address(RVA = "0x4C53F30", Offset = "0x4C53F30", VA = "0x4C53F30")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001BFE")]
		[Address(RVA = "0x4C53F40", Offset = "0x4C53F40", VA = "0x4C53F40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000756")]
	private BaseVisualElementPanel currentPanel
	{
		[Token(Token = "0x6001BFF")]
		[Address(RVA = "0x4C53F50", Offset = "0x4C53F50", VA = "0x4C53F50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C00")]
		[Address(RVA = "0x4C53F60", Offset = "0x4C53F60", VA = "0x4C53F60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001C01")]
	[Address(RVA = "0x4C53870", Offset = "0x4C53870", VA = "0x4C53870")]
	public void PrepareTraversal(BaseVisualElementPanel panel, float pixelsPerPoint)
	{
	}

	[Token(Token = "0x6001C02")]
	[Address(RVA = "0x4C52E90", Offset = "0x4C52E90", VA = "0x4C52E90")]
	public void AddChangedElement(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6001C03")]
	[Address(RVA = "0x4C53410", Offset = "0x4C53410", VA = "0x4C53410")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001C04")]
	[Address(RVA = "0x4C53F70", Offset = "0x4C53F70", VA = "0x4C53F70")]
	private void PropagateToChildren(VisualElement ve)
	{
	}

	[Token(Token = "0x6001C05")]
	[Address(RVA = "0x4C54040", Offset = "0x4C54040", VA = "0x4C54040")]
	private void PropagateToParents(VisualElement ve)
	{
	}

	[Token(Token = "0x6001C06")]
	[Address(RVA = "0x4C540F0", Offset = "0x4C540F0", VA = "0x4C540F0")]
	private static void OnProcessMatchResult(VisualElement current, MatchResultInfo info)
	{
	}

	[Token(Token = "0x6001C07")]
	[Address(RVA = "0x4C54110", Offset = "0x4C54110", VA = "0x4C54110", Slot = "5")]
	public override void TraverseRecursive(VisualElement element, int depth)
	{
	}

	[Token(Token = "0x6001C08")]
	[Address(RVA = "0x4C55760", Offset = "0x4C55760", VA = "0x4C55760")]
	private void ProcessTransitions(VisualElement element, ref ComputedStyle oldStyle, ref ComputedStyle newStyle)
	{
	}

	[Token(Token = "0x6001C09")]
	[Address(RVA = "0x4C55860", Offset = "0x4C55860", VA = "0x4C55860")]
	private void ForceUpdateTransitions(VisualElement element)
	{
	}

	[Token(Token = "0x6001C0A")]
	[Address(RVA = "0x4C534B0", Offset = "0x4C534B0", VA = "0x4C534B0")]
	internal void CancelAnimationsWithNoTransitionProperty(VisualElement element, ref ComputedStyle newStyle)
	{
	}

	[Token(Token = "0x6001C0B")]
	[Address(RVA = "0x4C54980", Offset = "0x4C54980", VA = "0x4C54980")]
	protected bool ShouldSkipElement(VisualElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C0C")]
	[Address(RVA = "0x4C549F0", Offset = "0x4C549F0", VA = "0x4C549F0")]
	private ComputedStyle ProcessMatchedRules(VisualElement element, List<SelectorMatchRecord> matchingSelectors)
	{
		return default(ComputedStyle);
	}

	[Token(Token = "0x6001C0D")]
	[Address(RVA = "0x4C55B50", Offset = "0x4C55B50", VA = "0x4C55B50")]
	private void ProcessMatchedVariables(StyleSheet sheet, StyleRule rule)
	{
	}

	[Token(Token = "0x6001C0E")]
	[Address(RVA = "0x4C53990", Offset = "0x4C53990", VA = "0x4C53990")]
	public VisualTreeStyleUpdaterTraversal()
	{
	}
}
