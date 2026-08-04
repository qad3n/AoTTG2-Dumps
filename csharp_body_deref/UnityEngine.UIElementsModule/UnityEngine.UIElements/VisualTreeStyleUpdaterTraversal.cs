// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualTreeStyleUpdaterTraversal
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4F7B860", Offset = "0x4F7B860", VA = "0x4F7B860")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001BFE")]
		[Address(RVA = "0x4F7B870", Offset = "0x4F7B870", VA = "0x4F7B870")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000756")]
	private BaseVisualElementPanel currentPanel
	{
		[Token(Token = "0x6001BFF")]
		[Address(RVA = "0x4F7B880", Offset = "0x4F7B880", VA = "0x4F7B880")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C00")]
		[Address(RVA = "0x4F7B890", Offset = "0x4F7B890", VA = "0x4F7B890")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001C01")]
	[Address(RVA = "0x4F7B1A0", Offset = "0x4F7B1A0", VA = "0x4F7B1A0")]
	public void PrepareTraversal(BaseVisualElementPanel panel, float pixelsPerPoint)
	{
	}

	[Token(Token = "0x6001C02")]
	[Address(RVA = "0x4F7A7C0", Offset = "0x4F7A7C0", VA = "0x4F7A7C0")]
	public void AddChangedElement(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6001C03")]
	[Address(RVA = "0x4F7AD40", Offset = "0x4F7AD40", VA = "0x4F7AD40")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001C04")]
	[Address(RVA = "0x4F7B8A0", Offset = "0x4F7B8A0", VA = "0x4F7B8A0")]
	private void PropagateToChildren(VisualElement ve)
	{
	}

	[Token(Token = "0x6001C05")]
	[Address(RVA = "0x4F7B970", Offset = "0x4F7B970", VA = "0x4F7B970")]
	private void PropagateToParents(VisualElement ve)
	{
	}

	[Token(Token = "0x6001C06")]
	[Address(RVA = "0x4F7BA20", Offset = "0x4F7BA20", VA = "0x4F7BA20")]
	private static void OnProcessMatchResult(VisualElement current, MatchResultInfo info)
	{
	}

	[Token(Token = "0x6001C07")]
	[Address(RVA = "0x4F7BA40", Offset = "0x4F7BA40", VA = "0x4F7BA40", Slot = "5")]
	public override void TraverseRecursive(VisualElement element, int depth)
	{
	}

	[Token(Token = "0x6001C08")]
	[Address(RVA = "0x4F7D090", Offset = "0x4F7D090", VA = "0x4F7D090")]
	private void ProcessTransitions(VisualElement element, ref ComputedStyle oldStyle, ref ComputedStyle newStyle)
	{
	}

	[Token(Token = "0x6001C09")]
	[Address(RVA = "0x4F7D190", Offset = "0x4F7D190", VA = "0x4F7D190")]
	private void ForceUpdateTransitions(VisualElement element)
	{
	}

	[Token(Token = "0x6001C0A")]
	[Address(RVA = "0x4F7ADE0", Offset = "0x4F7ADE0", VA = "0x4F7ADE0")]
	internal void CancelAnimationsWithNoTransitionProperty(VisualElement element, ref ComputedStyle newStyle)
	{
	}

	[Token(Token = "0x6001C0B")]
	[Address(RVA = "0x4F7C2B0", Offset = "0x4F7C2B0", VA = "0x4F7C2B0")]
	protected bool ShouldSkipElement(VisualElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C0C")]
	[Address(RVA = "0x4F7C320", Offset = "0x4F7C320", VA = "0x4F7C320")]
	private ComputedStyle ProcessMatchedRules(VisualElement element, List<SelectorMatchRecord> matchingSelectors)
	{
		return default(ComputedStyle);
	}

	[Token(Token = "0x6001C0D")]
	[Address(RVA = "0x4F7D480", Offset = "0x4F7D480", VA = "0x4F7D480")]
	private void ProcessMatchedVariables(StyleSheet sheet, StyleRule rule)
	{
	}

	[Token(Token = "0x6001C0E")]
	[Address(RVA = "0x4F7B2C0", Offset = "0x4F7B2C0", VA = "0x4F7B2C0")]
	public VisualTreeStyleUpdaterTraversal()
	{
	}
}
