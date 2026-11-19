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
using UnityEngine.Bindings;
using UnityEngine.UIElements.StyleSheets;

namespace UnityEngine.UIElements;

[Token(Token = "0x200055E")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal class VisualTreeStyleUpdaterTraversal : HierarchyTraversal
{
	[Token(Token = "0x4001237")]
	[FieldOffset(Offset = "0x10")]
	private StyleVariableContext m_ProcessVarContext;

	[Token(Token = "0x4001238")]
	[FieldOffset(Offset = "0x18")]
	private HashSet<VisualElement> m_UpdateList;

	[Token(Token = "0x4001239")]
	[FieldOffset(Offset = "0x20")]
	private HashSet<VisualElement> m_ParentList;

	[Token(Token = "0x400123A")]
	[FieldOffset(Offset = "0x28")]
	private List<SelectorMatchRecord> m_TempMatchResults;

	[Token(Token = "0x400123C")]
	[FieldOffset(Offset = "0x38")]
	private StyleMatchingContext m_StyleMatchingContext;

	[Token(Token = "0x400123D")]
	[FieldOffset(Offset = "0x40")]
	private StylePropertyReader m_StylePropertyReader;

	[Token(Token = "0x400123F")]
	[FieldOffset(Offset = "0x50")]
	private readonly List<StylePropertyId> m_AnimatedProperties;

	[Token(Token = "0x17000A3D")]
	private float currentPixelsPerPoint
	{
		[Token(Token = "0x600286D")]
		[Address(RVA = "0x6B740E0", Offset = "0x6B730E0", VA = "0x6B740E0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600286E")]
		[Address(RVA = "0x6B740F0", Offset = "0x6B730F0", VA = "0x6B740F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A3E")]
	private BaseVisualElementPanel currentPanel
	{
		[Token(Token = "0x600286F")]
		[Address(RVA = "0x6B74100", Offset = "0x6B73100", VA = "0x6B74100")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002870")]
		[Address(RVA = "0x6B74110", Offset = "0x6B73110", VA = "0x6B74110")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002871")]
	[Address(RVA = "0x6B73A20", Offset = "0x6B72A20", VA = "0x6B73A20")]
	public void PrepareTraversal(BaseVisualElementPanel panel, float pixelsPerPoint)
	{
	}

	[Token(Token = "0x6002872")]
	[Address(RVA = "0x6B73100", Offset = "0x6B72100", VA = "0x6B73100")]
	public void AddChangedElement(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6002873")]
	[Address(RVA = "0x6B73630", Offset = "0x6B72630", VA = "0x6B73630")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002874")]
	[Address(RVA = "0x6B74120", Offset = "0x6B73120", VA = "0x6B74120")]
	private void PropagateToChildren(VisualElement ve)
	{
	}

	[Token(Token = "0x6002875")]
	[Address(RVA = "0x6B741E0", Offset = "0x6B731E0", VA = "0x6B741E0")]
	private void PropagateToParents(VisualElement ve)
	{
	}

	[Token(Token = "0x6002876")]
	[Address(RVA = "0x6B74290", Offset = "0x6B73290", VA = "0x6B74290")]
	private static void OnProcessMatchResult(VisualElement current, MatchResultInfo info)
	{
	}

	[Token(Token = "0x6002877")]
	[Address(RVA = "0x6B742B0", Offset = "0x6B732B0", VA = "0x6B742B0", Slot = "5")]
	public override void TraverseRecursive(VisualElement element, int depth)
	{
	}

	[Token(Token = "0x6002878")]
	[Address(RVA = "0x6B757C0", Offset = "0x6B747C0", VA = "0x6B757C0")]
	private void ProcessTransitions(VisualElement element, ref ComputedStyle oldStyle, ref ComputedStyle newStyle)
	{
	}

	[Token(Token = "0x6002879")]
	[Address(RVA = "0x6B758A0", Offset = "0x6B748A0", VA = "0x6B758A0")]
	private void ForceUpdateTransitions(VisualElement element)
	{
	}

	[Token(Token = "0x600287A")]
	[Address(RVA = "0x6B736D0", Offset = "0x6B726D0", VA = "0x6B736D0")]
	internal void CancelAnimationsWithNoTransitionProperty(VisualElement element, ref ComputedStyle newStyle)
	{
	}

	[Token(Token = "0x600287B")]
	[Address(RVA = "0x6B74BA0", Offset = "0x6B73BA0", VA = "0x6B74BA0")]
	protected bool ShouldSkipElement(VisualElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x600287C")]
	[Address(RVA = "0x6B74C10", Offset = "0x6B73C10", VA = "0x6B74C10")]
	private ComputedStyle ProcessMatchedRules(VisualElement element, List<SelectorMatchRecord> matchingSelectors)
	{
		return default(ComputedStyle);
	}

	[Token(Token = "0x600287D")]
	[Address(RVA = "0x6B75C50", Offset = "0x6B74C50", VA = "0x6B75C50")]
	private static bool HasStaleMaterial(ref ComputedStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x600287E")]
	[Address(RVA = "0x6B75B60", Offset = "0x6B74B60", VA = "0x6B75B60")]
	private void ProcessMatchedVariables(StyleSheet sheet, StyleRule rule)
	{
	}

	[Token(Token = "0x600287F")]
	[Address(RVA = "0x6B73B40", Offset = "0x6B72B40", VA = "0x6B73B40")]
	public VisualTreeStyleUpdaterTraversal()
	{
	}
}
