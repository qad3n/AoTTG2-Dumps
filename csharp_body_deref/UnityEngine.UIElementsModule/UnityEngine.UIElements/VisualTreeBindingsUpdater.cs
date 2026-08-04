// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualTreeBindingsUpdater
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements;

[Token(Token = "0x200001C")]
internal class VisualTreeBindingsUpdater : BaseVisualTreeHierarchyTrackerUpdater
{
	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x0")]
	private static readonly PropertyName s_BindingRequestObjectVEPropertyName;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x4")]
	private static readonly PropertyName s_AdditionalBindingObjectVEPropertyName;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string s_Description;

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x10")]
	private static readonly ProfilerMarker s_ProfilerMarker;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x18")]
	private static readonly ProfilerMarker s_ProfilerBindingRequestsMarker;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x20")]
	private static ProfilerMarker s_MarkerUpdate;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x28")]
	private static ProfilerMarker s_MarkerPoll;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static bool _003CdisableBindingsThrottling_003Ek__BackingField;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x38")]
	private readonly HashSet<VisualElement> m_ElementsWithBindings;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x40")]
	private readonly HashSet<VisualElement> m_ElementsToAdd;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x48")]
	private readonly HashSet<VisualElement> m_ElementsToRemove;

	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x50")]
	private long m_LastUpdateTime;

	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x58")]
	private HashSet<VisualElement> m_ElementsToBind;

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x68")]
	private List<IBinding> updatedBindings;

	[Token(Token = "0x17000014")]
	public override ProfilerMarker profilerMarker
	{
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x4F0E500", Offset = "0x4F0E500", VA = "0x4F0E500", Slot = "10")]
		get
		{
			return default(ProfilerMarker);
		}
	}

	[Token(Token = "0x17000015")]
	public Dictionary<object, object> temporaryObjectCache
	{
		[Token(Token = "0x600006A")]
		[Address(RVA = "0x4F0E8D0", Offset = "0x4F0E8D0", VA = "0x4F0E8D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x4F0E570", Offset = "0x4F0E570", VA = "0x4F0E570")]
	private IBinding GetBindingObjectFromElement(VisualElement ve)
	{
		return null;
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x4F0E7D0", Offset = "0x4F0E7D0", VA = "0x4F0E7D0")]
	private void StartTracking(VisualElement ve)
	{
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x4F0E850", Offset = "0x4F0E850", VA = "0x4F0E850")]
	private void StopTracking(VisualElement ve)
	{
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x4F0E730", Offset = "0x4F0E730", VA = "0x4F0E730")]
	public static IBinding GetAdditionalBinding(VisualElement ve)
	{
		return null;
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x4F0E8E0", Offset = "0x4F0E8E0", VA = "0x4F0E8E0")]
	private void StartTrackingRecursive(VisualElement ve)
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x4F0EA60", Offset = "0x4F0EA60", VA = "0x4F0EA60")]
	private void StopTrackingRecursive(VisualElement ve)
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x4F0EBE0", Offset = "0x4F0EBE0", VA = "0x4F0EBE0", Slot = "13")]
	public override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x4F0ED60", Offset = "0x4F0ED60", VA = "0x4F0ED60", Slot = "14")]
	protected override void OnHierarchyChange(VisualElement ve, HierarchyChangeType type)
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x4F0ED80", Offset = "0x4F0ED80", VA = "0x4F0ED80")]
	private static long CurrentTime()
	{
		return default(long);
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x4F0EDE0", Offset = "0x4F0EDE0", VA = "0x4F0EDE0")]
	public void PerformTrackingOperations()
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x4F0F0F0", Offset = "0x4F0F0F0", VA = "0x4F0F0F0", Slot = "12")]
	public override void Update()
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x4F0F7B0", Offset = "0x4F0F7B0", VA = "0x4F0F7B0")]
	private void UpdateBindings()
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x4F0FF10", Offset = "0x4F0FF10", VA = "0x4F0FF10")]
	public VisualTreeBindingsUpdater()
	{
	}
}
