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
		[Address(RVA = "0x4D4B770", Offset = "0x4D4B770", VA = "0x4D4B770", Slot = "10")]
		get
		{
			return default(ProfilerMarker);
		}
	}

	[Token(Token = "0x6000F59")]
	[Address(RVA = "0x4D4B7E0", Offset = "0x4D4B7E0", VA = "0x4D4B7E0", Slot = "13")]
	public override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6000F5A")]
	[Address(RVA = "0x4D4B850", Offset = "0x4D4B850", VA = "0x4D4B850", Slot = "12")]
	public override void Update()
	{
	}

	[Token(Token = "0x6000F5B")]
	[Address(RVA = "0x4D4C6C0", Offset = "0x4D4C6C0", VA = "0x4D4C6C0")]
	private static bool UpdateHierarchyDisplayed(VisualElement ve, List<(Rect, Rect, VisualElement)> changeEvents, bool inheritedDisplayed = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F5C")]
	[Address(RVA = "0x4D4BB00", Offset = "0x4D4BB00", VA = "0x4D4BB00")]
	private void UpdateSubTree(VisualElement ve, List<(Rect, Rect, VisualElement)> changeEvents)
	{
	}

	[Token(Token = "0x6000F5D")]
	[Address(RVA = "0x4D4C300", Offset = "0x4D4C300", VA = "0x4D4C300")]
	private void DispatchChangeEvents(List<(Rect, Rect, VisualElement)> changeEvents, int currentLayoutPass)
	{
	}

	[Token(Token = "0x6000F5E")]
	[Address(RVA = "0x4D4C990", Offset = "0x4D4C990", VA = "0x4D4C990")]
	public UIRLayoutUpdater()
	{
	}
}
