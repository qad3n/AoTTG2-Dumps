// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualTreeDataBindingsUpdater
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6A8DB50", Offset = "0x6A8CB50", VA = "0x6A8DB50")]
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
		[Address(RVA = "0x6A8A8F0", Offset = "0x6A898F0", VA = "0x6A8A8F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004E")]
	public override ProfilerMarker profilerMarker
	{
		[Token(Token = "0x6000181")]
		[Address(RVA = "0x6A8A920", Offset = "0x6A89920", VA = "0x6A8A920", Slot = "12")]
		get
		{
			return default(ProfilerMarker);
		}
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x6A8A990", Offset = "0x6A89990", VA = "0x6A8A990")]
	public VisualTreeDataBindingsUpdater()
	{
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x6A8AC70", Offset = "0x6A89C70", VA = "0x6A8AC70")]
	protected void OnHierarchyChange(VisualElement ve, HierarchyChangeType type, [Optional] IReadOnlyList<VisualElement> additionalContext)
	{
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x6A8B100", Offset = "0x6A8A100", VA = "0x6A8B100", Slot = "15")]
	public override void OnVersionChanged(VisualElement ve, VersionChangeType versionChangeType)
	{
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x6A8B1E0", Offset = "0x6A8A1E0", VA = "0x6A8B1E0")]
	private void CacheAndLogBindingResult(bool appliedOnUiCache, in DataBindingManager.BindingData bindingData, in BindingResult result)
	{
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x6A8B570", Offset = "0x6A8A570", VA = "0x6A8B570")]
	private void LogResult(in BindingResult result)
	{
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x6A8B6B0", Offset = "0x6A8A6B0", VA = "0x6A8B6B0", Slot = "14")]
	public override void Update()
	{
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x6A8D8D0", Offset = "0x6A8C8D0", VA = "0x6A8D8D0")]
	private (bool, long) GetDataSourceVersion(object source)
	{
		return default((bool, long));
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x6A8DB70", Offset = "0x6A8CB70", VA = "0x6A8DB70")]
	private bool IsPrefix(in PropertyPath prefix, in PropertyPath path)
	{
		return default(bool);
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x6A8CCA0", Offset = "0x6A8BCA0", VA = "0x6A8CCA0")]
	private void ProcessDataSourceChangedRequests()
	{
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x6A8DD20", Offset = "0x6A8CD20", VA = "0x6A8DD20")]
	private void OnPanelChanged(BaseVisualElementPanel p)
	{
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x6A8DE10", Offset = "0x6A8CE10", VA = "0x6A8DE10", Slot = "13")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x6A8CA70", Offset = "0x6A8BA70", VA = "0x6A8CA70")]
	private void ProcessAllBindingRequests()
	{
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x6A8DE70", Offset = "0x6A8CE70", VA = "0x6A8DE70")]
	private void ProcessBindingRequests(VisualElement element)
	{
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x6A8CF90", Offset = "0x6A8BF90", VA = "0x6A8CF90")]
	private void ProcessPropertyChangedEvents(HashSet<Binding> ranUpdate)
	{
	}
}
