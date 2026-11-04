// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualTreeStyleUpdaterTraversal
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x584C90", Offset = "0x583290", VA = "0x180584C90")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600286E")]
		[Address(RVA = "0x584CB0", Offset = "0x5832B0", VA = "0x180584CB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A3E")]
	private BaseVisualElementPanel currentPanel
	{
		[Token(Token = "0x600286F")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002870")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6002871")]
	[Address(RVA = "0x3172880", Offset = "0x3170E80", VA = "0x183172880")]
	public void PrepareTraversal(BaseVisualElementPanel panel, float pixelsPerPoint)
	{
	}

	[Token(Token = "0x6002872")]
	[Address(RVA = "0x31721E0", Offset = "0x31707E0", VA = "0x1831721E0")]
	public void AddChangedElement(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6002873")]
	[Address(RVA = "0x31724E0", Offset = "0x3170AE0", VA = "0x1831724E0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002874")]
	[Address(RVA = "0x31736D0", Offset = "0x3171CD0", VA = "0x1831736D0")]
	private void PropagateToChildren(VisualElement ve)
	{
	}

	[Token(Token = "0x6002875")]
	[Address(RVA = "0x31737B0", Offset = "0x3171DB0", VA = "0x1831737B0")]
	private void PropagateToParents(VisualElement ve)
	{
	}

	[Token(Token = "0x6002876")]
	[Address(RVA = "0x3172840", Offset = "0x3170E40", VA = "0x183172840")]
	private static void OnProcessMatchResult(VisualElement current, MatchResultInfo info)
	{
	}

	[Token(Token = "0x6002877")]
	[Address(RVA = "0x31738E0", Offset = "0x3171EE0", VA = "0x1831738E0", Slot = "5")]
	public override void TraverseRecursive(VisualElement element, int depth)
	{
	}

	[Token(Token = "0x6002878")]
	[Address(RVA = "0x31735F0", Offset = "0x3171BF0", VA = "0x1831735F0")]
	private void ProcessTransitions(VisualElement element, ref ComputedStyle oldStyle, ref ComputedStyle newStyle)
	{
	}

	[Token(Token = "0x6002879")]
	[Address(RVA = "0x3172580", Offset = "0x3170B80", VA = "0x183172580")]
	private void ForceUpdateTransitions(VisualElement element)
	{
	}

	[Token(Token = "0x600287A")]
	[Address(RVA = "0x31722F0", Offset = "0x31708F0", VA = "0x1831722F0")]
	internal void CancelAnimationsWithNoTransitionProperty(VisualElement element, ref ComputedStyle newStyle)
	{
	}

	[Token(Token = "0x600287B")]
	[Address(RVA = "0x3173860", Offset = "0x3171E60", VA = "0x183173860")]
	protected bool ShouldSkipElement(VisualElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x600287C")]
	[Address(RVA = "0x31728B0", Offset = "0x3170EB0", VA = "0x1831728B0")]
	private ComputedStyle ProcessMatchedRules(VisualElement element, List<SelectorMatchRecord> matchingSelectors)
	{
		return default(ComputedStyle);
	}

	[Token(Token = "0x600287D")]
	[Address(RVA = "0x31727B0", Offset = "0x3170DB0", VA = "0x1831727B0")]
	private static bool HasStaleMaterial(ref ComputedStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x600287E")]
	[Address(RVA = "0x3173500", Offset = "0x3171B00", VA = "0x183173500")]
	private void ProcessMatchedVariables(StyleSheet sheet, StyleRule rule)
	{
	}

	[Token(Token = "0x600287F")]
	[Address(RVA = "0x3174130", Offset = "0x3172730", VA = "0x183174130")]
	public VisualTreeStyleUpdaterTraversal()
	{
	}
}
