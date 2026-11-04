// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualTreeDataBindingsUpdater
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Profiling;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x200004A")]
internal class VisualTreeDataBindingsUpdater : BaseVisualTreeUpdater
{
	[Token(Token = "0x200004B")]
	private readonly struct VersionInfo
	{
		[Token(Token = "0x40000DF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly object source;

		[Token(Token = "0x40000E0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public readonly long version;

		[Token(Token = "0x6000191")]
		[Address(RVA = "0x180F490", Offset = "0x180DA90", VA = "0x18180F490")]
		public VersionInfo(object source, long version)
		{
		}
	}

	[Token(Token = "0x40000CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker s_UpdateProfilerMarker;

	[Token(Token = "0x40000D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker s_ProcessBindingRequestsProfilerMarker;

	[Token(Token = "0x40000D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly ProfilerMarker s_ProcessDataSourcesProfilerMarker;

	[Token(Token = "0x40000D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly ProfilerMarker s_ShouldUpdateBindingProfilerMarker;

	[Token(Token = "0x40000D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly ProfilerMarker s_UpdateBindingProfilerMarker;

	[Token(Token = "0x40000D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly BindingUpdater m_Updater;

	[Token(Token = "0x40000D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly List<VisualElement> m_BindingRegistrationRequests;

	[Token(Token = "0x40000D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly HashSet<VisualElement> m_DataSourceChangedRequests;

	[Token(Token = "0x40000D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly HashSet<VisualElement> m_RemovedElements;

	[Token(Token = "0x40000D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly List<VisualElement> m_BoundsElement;

	[Token(Token = "0x40000D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly List<VersionInfo> m_VersionChanges;

	[Token(Token = "0x40000DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private readonly HashSet<object> m_TrackedObjects;

	[Token(Token = "0x40000DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private readonly HashSet<Binding> m_RanUpdate;

	[Token(Token = "0x40000DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private readonly HashSet<object> m_KnownSources;

	[Token(Token = "0x40000DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private readonly HashSet<Binding> m_DirtyBindings;

	[Token(Token = "0x40000DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private BaseVisualElementPanel m_AttachedPanel;

	[Token(Token = "0x1700004D")]
	private DataBindingManager bindingManager
	{
		[Token(Token = "0x6000180")]
		[Address(RVA = "0x309D5D0", Offset = "0x309BBD0", VA = "0x18309D5D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004E")]
	public override ProfilerMarker profilerMarker
	{
		[Token(Token = "0x6000181")]
		[Address(RVA = "0x309D600", Offset = "0x309BC00", VA = "0x18309D600", Slot = "12")]
		get
		{
			return default(ProfilerMarker);
		}
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x309D300", Offset = "0x309B900", VA = "0x18309D300")]
	public VisualTreeDataBindingsUpdater()
	{
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x309AB70", Offset = "0x3099170", VA = "0x18309AB70")]
	protected void OnHierarchyChange(VisualElement ve, HierarchyChangeType type, [Optional] IReadOnlyList<VisualElement> additionalContext)
	{
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x309B040", Offset = "0x3099640", VA = "0x18309B040", Slot = "15")]
	public override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x309A200", Offset = "0x3098800", VA = "0x18309A200")]
	private void CacheAndLogBindingResult(bool appliedOnUiCache, in DataBindingManager.BindingData bindingData, in BindingResult result)
	{
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x309AA30", Offset = "0x3099030", VA = "0x18309AA30")]
	private void LogResult(in BindingResult result)
	{
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x309BE20", Offset = "0x309A420", VA = "0x18309BE20", Slot = "14")]
	public override void Update()
	{
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x309A6D0", Offset = "0x3098CD0", VA = "0x18309A6D0")]
	private (bool, long) GetDataSourceVersion(object source)
	{
		return default((bool, long));
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x309A8A0", Offset = "0x3098EA0", VA = "0x18309A8A0")]
	private bool IsPrefix(in PropertyPath prefix, in PropertyPath path)
	{
		return default(bool);
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x309B2C0", Offset = "0x30998C0", VA = "0x18309B2C0")]
	private void ProcessDataSourceChangedRequests()
	{
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x309AF50", Offset = "0x3099550", VA = "0x18309AF50")]
	private void OnPanelChanged(BaseVisualElementPanel p)
	{
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x309A520", Offset = "0x3098B20", VA = "0x18309A520", Slot = "13")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x309B0E0", Offset = "0x30996E0", VA = "0x18309B0E0")]
	private void ProcessAllBindingRequests()
	{
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x309B270", Offset = "0x3099870", VA = "0x18309B270")]
	private void ProcessBindingRequests(VisualElement element)
	{
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x309B560", Offset = "0x3099B60", VA = "0x18309B560")]
	private void ProcessPropertyChangedEvents(HashSet<Binding> ranUpdate)
	{
	}
}
