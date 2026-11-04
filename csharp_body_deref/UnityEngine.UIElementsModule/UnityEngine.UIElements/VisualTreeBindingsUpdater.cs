// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualTreeBindingsUpdater
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000048")]
internal class VisualTreeBindingsUpdater : BaseVisualTreeHierarchyTrackerUpdater
{
	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x0")]
	private static readonly PropertyName s_BindingRequestObjectVEPropertyName;

	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0x4")]
	private static readonly PropertyName s_AdditionalBindingObjectVEPropertyName;

	[Token(Token = "0x40000BF")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string s_Description;

	[Token(Token = "0x40000C0")]
	[FieldOffset(Offset = "0x10")]
	private static readonly ProfilerMarker s_ProfilerMarker;

	[Token(Token = "0x40000C1")]
	[FieldOffset(Offset = "0x18")]
	private static readonly ProfilerMarker s_ProfilerBindingRequestsMarker;

	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0x20")]
	private static ProfilerMarker s_MarkerUpdate;

	[Token(Token = "0x40000C3")]
	[FieldOffset(Offset = "0x28")]
	private static ProfilerMarker s_MarkerPoll;

	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0x40")]
	private readonly HashSet<VisualElement> m_ElementsWithBindings;

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x48")]
	private readonly HashSet<VisualElement> m_ElementsToAdd;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x50")]
	private readonly HashSet<VisualElement> m_ElementsToRemove;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x58")]
	private long m_LastUpdateTime;

	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x60")]
	private HashSet<VisualElement> m_ElementsToBind;

	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x70")]
	private List<IBinding> updatedBindings;

	[Token(Token = "0x1700004A")]
	public override ProfilerMarker profilerMarker
	{
		[Token(Token = "0x600016D")]
		[Address(RVA = "0x309A1B0", Offset = "0x30987B0", VA = "0x18309A1B0", Slot = "12")]
		get
		{
			return default(ProfilerMarker);
		}
	}

	[Token(Token = "0x1700004B")]
	public static bool disableBindingsThrottling
	{
		[Token(Token = "0x600016E")]
		[Address(RVA = "0x309A160", Offset = "0x3098760", VA = "0x18309A160")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700004C")]
	public Dictionary<object, object> temporaryObjectCache
	{
		[Token(Token = "0x6000172")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x3098AD0", Offset = "0x30970D0", VA = "0x183098AD0")]
	private IBinding GetBindingObjectFromElement(VisualElement ve)
	{
		return null;
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x3099190", Offset = "0x3097790", VA = "0x183099190")]
	private void StartTracking(VisualElement ve)
	{
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x3099340", Offset = "0x3097940", VA = "0x183099340")]
	private void StopTracking(VisualElement ve)
	{
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x3098A40", Offset = "0x3097040", VA = "0x183098A40")]
	public static IBinding GetAdditionalBinding(VisualElement ve)
	{
		return null;
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x3099050", Offset = "0x3097650", VA = "0x183099050")]
	private void StartTrackingRecursive(VisualElement ve)
	{
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x3099210", Offset = "0x3097810", VA = "0x183099210")]
	private void StopTrackingRecursive(VisualElement ve)
	{
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x3098C10", Offset = "0x3097210", VA = "0x183098C10", Slot = "15")]
	public override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x3098BE0", Offset = "0x30971E0", VA = "0x183098BE0", Slot = "16")]
	protected override void OnHierarchyChange(VisualElement ve, HierarchyChangeType type)
	{
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x30989F0", Offset = "0x3096FF0", VA = "0x1830989F0")]
	private long CurrentTime()
	{
		return default(long);
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x3098F80", Offset = "0x3097580", VA = "0x183098F80")]
	public bool ShouldProcessBindings(long startTime)
	{
		return default(bool);
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x3098D00", Offset = "0x3097300", VA = "0x183098D00")]
	public void PerformTrackingOperations()
	{
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x3099870", Offset = "0x3097E70", VA = "0x183099870", Slot = "14")]
	public override void Update()
	{
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x30993C0", Offset = "0x30979C0", VA = "0x1830993C0")]
	private void UpdateBindings()
	{
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x3098A20", Offset = "0x3097020", VA = "0x183098A20", Slot = "13")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x3099FC0", Offset = "0x30985C0", VA = "0x183099FC0")]
	public VisualTreeBindingsUpdater()
	{
	}
}
