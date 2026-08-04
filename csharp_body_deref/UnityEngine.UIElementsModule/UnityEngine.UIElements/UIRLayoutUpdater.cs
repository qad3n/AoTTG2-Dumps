// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIRLayoutUpdater
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000252")]
internal class UIRLayoutUpdater : BaseVisualTreeUpdater
{
	[Token(Token = "0x400088F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string s_Description;

	[Token(Token = "0x4000890")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker s_ProfilerMarker;

	[Token(Token = "0x4000891")]
	[FieldOffset(Offset = "0x10")]
	private static readonly ProfilerMarker k_ComputeLayoutMarker;

	[Token(Token = "0x4000892")]
	[FieldOffset(Offset = "0x18")]
	private static readonly ProfilerMarker k_UpdateSubTreeMarker;

	[Token(Token = "0x4000893")]
	[FieldOffset(Offset = "0x20")]
	private static readonly ProfilerMarker k_DispatchChangeEventsMarker;

	[Token(Token = "0x4000894")]
	[FieldOffset(Offset = "0x20")]
	private List<(Rect, Rect, VisualElement)> changeEventsList;

	[Token(Token = "0x170002F9")]
	public override ProfilerMarker profilerMarker
	{
		[Token(Token = "0x6000F58")]
		[Address(RVA = "0x50730A0", Offset = "0x50730A0", VA = "0x50730A0", Slot = "10")]
		get
		{
			return default(ProfilerMarker);
		}
	}

	[Token(Token = "0x6000F59")]
	[Address(RVA = "0x5073110", Offset = "0x5073110", VA = "0x5073110", Slot = "13")]
	public override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6000F5A")]
	[Address(RVA = "0x5073180", Offset = "0x5073180", VA = "0x5073180", Slot = "12")]
	public override void Update()
	{
	}

	[Token(Token = "0x6000F5B")]
	[Address(RVA = "0x5073FF0", Offset = "0x5073FF0", VA = "0x5073FF0")]
	private static bool UpdateHierarchyDisplayed(VisualElement ve, List<(Rect, Rect, VisualElement)> changeEvents, bool inheritedDisplayed = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F5C")]
	[Address(RVA = "0x5073430", Offset = "0x5073430", VA = "0x5073430")]
	private void UpdateSubTree(VisualElement ve, List<(Rect, Rect, VisualElement)> changeEvents)
	{
	}

	[Token(Token = "0x6000F5D")]
	[Address(RVA = "0x5073C30", Offset = "0x5073C30", VA = "0x5073C30")]
	private void DispatchChangeEvents(List<(Rect, Rect, VisualElement)> changeEvents, int currentLayoutPass)
	{
	}

	[Token(Token = "0x6000F5E")]
	[Address(RVA = "0x50742C0", Offset = "0x50742C0", VA = "0x50742C0")]
	public UIRLayoutUpdater()
	{
	}
}
