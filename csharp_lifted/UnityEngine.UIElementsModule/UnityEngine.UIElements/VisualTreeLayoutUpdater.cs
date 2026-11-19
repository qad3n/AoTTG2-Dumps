// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualTreeLayoutUpdater
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x200055A")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal class VisualTreeLayoutUpdater : BaseVisualTreeUpdater
{
	[Token(Token = "0x400121E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string s_Description;

	[Token(Token = "0x400121F")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker s_ProfilerMarker;

	[Token(Token = "0x4001220")]
	[FieldOffset(Offset = "0x10")]
	private static readonly ProfilerMarker k_ComputeLayoutMarker;

	[Token(Token = "0x4001221")]
	[FieldOffset(Offset = "0x18")]
	private static readonly ProfilerMarker k_UpdateSubTreeMarker;

	[Token(Token = "0x4001222")]
	[FieldOffset(Offset = "0x20")]
	private static readonly ProfilerMarker k_DispatchChangeEventsMarker;

	[Token(Token = "0x4001223")]
	[FieldOffset(Offset = "0x28")]
	private List<(Rect, Rect, VisualElement)> changeEventsList;

	[Token(Token = "0x4001224")]
	[FieldOffset(Offset = "0x30")]
	private List<VisualElement> missedHierarchyChangeEventsList;

	[Token(Token = "0x4001225")]
	[FieldOffset(Offset = "0x38")]
	private TextJobSystem m_TextJobSystem;

	[Token(Token = "0x17000A39")]
	public override ProfilerMarker profilerMarker
	{
		[Token(Token = "0x600284E")]
		[Address(RVA = "0x6B708D0", Offset = "0x6B6F8D0", VA = "0x6B708D0", Slot = "12")]
		get
		{
			return default(ProfilerMarker);
		}
	}

	[Token(Token = "0x600284F")]
	[Address(RVA = "0x6B70940", Offset = "0x6B6F940", VA = "0x6B70940", Slot = "15")]
	public override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6002850")]
	[Address(RVA = "0x6B70A90", Offset = "0x6B6FA90", VA = "0x6B70A90", Slot = "14")]
	public override void Update()
	{
	}

	[Token(Token = "0x6002851")]
	[Address(RVA = "0x6B72100", Offset = "0x6B71100", VA = "0x6B72100")]
	private static bool UpdateHierarchyDisplayed(VisualElement ve, List<(Rect, Rect, VisualElement)> changeEvents, bool inheritedDisplayed = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6002852")]
	[Address(RVA = "0x6B70FB0", Offset = "0x6B6FFB0", VA = "0x6B70FB0")]
	private void UpdateSubTree(VisualElement ve, List<(Rect, Rect, VisualElement)> changeEvents)
	{
	}

	[Token(Token = "0x6002853")]
	[Address(RVA = "0x6B71A00", Offset = "0x6B70A00", VA = "0x6B71A00")]
	private void DispatchChangeEvents(List<(Rect, Rect, VisualElement)> changeEvents, int currentLayoutPass)
	{
	}

	[Token(Token = "0x6002854")]
	[Address(RVA = "0x6B71D50", Offset = "0x6B70D50", VA = "0x6B71D50")]
	private void DispatchMissedHierarchyChangeEvents(List<VisualElement> missedHierarchyChangeEvents, int currentLayoutPass)
	{
	}

	[Token(Token = "0x6002855")]
	[Address(RVA = "0x6B724D0", Offset = "0x6B714D0", VA = "0x6B724D0")]
	public VisualTreeLayoutUpdater()
	{
	}
}
