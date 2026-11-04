// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DataBindingManager
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;
using UnityEngine.UIElements.StyleSheets;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000030")]
internal sealed class DataBindingManager : IDisposable
{
	[Token(Token = "0x2000031")]
	private readonly struct BindingRequest
	{
		[Token(Token = "0x4000082")]
		[FieldOffset(Offset = "0x0")]
		public readonly BindingId bindingId;

		[Token(Token = "0x4000083")]
		[FieldOffset(Offset = "0x98")]
		public readonly Binding binding;

		[Token(Token = "0x4000084")]
		[FieldOffset(Offset = "0xA0")]
		public readonly bool shouldProcess;

		[Token(Token = "0x600010C")]
		[Address(RVA = "0x3085C60", Offset = "0x3084260", VA = "0x183085C60")]
		public BindingRequest(in BindingId bindingId, Binding binding, bool shouldProcess = true)
		{
		}

		[Token(Token = "0x600010D")]
		[Address(RVA = "0x3085B70", Offset = "0x3084170", VA = "0x183085B70")]
		public BindingRequest CancelRequest()
		{
			return default(BindingRequest);
		}
	}

	[Token(Token = "0x2000032")]
	private struct BindingDataCollection : IDisposable
	{
		[Token(Token = "0x4000085")]
		[FieldOffset(Offset = "0x0")]
		private Dictionary<BindingId, BindingData> m_BindingPerId;

		[Token(Token = "0x4000086")]
		[FieldOffset(Offset = "0x8")]
		private List<BindingData> m_Bindings;

		[Token(Token = "0x600010E")]
		[Address(RVA = "0x3084ED0", Offset = "0x30834D0", VA = "0x183084ED0")]
		public static BindingDataCollection Create()
		{
			return default(BindingDataCollection);
		}

		[Token(Token = "0x600010F")]
		[Address(RVA = "0x3084CC0", Offset = "0x30832C0", VA = "0x183084CC0")]
		public void AddBindingData(BindingData bindingData)
		{
		}

		[Token(Token = "0x6000110")]
		[Address(RVA = "0x3085280", Offset = "0x3083880", VA = "0x183085280")]
		public bool TryGetBindingData(in BindingId bindingId, out BindingData data)
		{
			return default(bool);
		}

		[Token(Token = "0x6000111")]
		[Address(RVA = "0x30850C0", Offset = "0x30836C0", VA = "0x1830850C0")]
		public bool RemoveBindingData(BindingData bindingData)
		{
			return default(bool);
		}

		[Token(Token = "0x6000112")]
		[Address(RVA = "0x1B943C0", Offset = "0x1B929C0", VA = "0x181B943C0")]
		public List<BindingData> GetBindings()
		{
			return null;
		}

		[Token(Token = "0x6000113")]
		[Address(RVA = "0x3085080", Offset = "0x3083680", VA = "0x183085080")]
		public int GetBindingCount()
		{
			return default(int);
		}

		[Token(Token = "0x6000114")]
		[Address(RVA = "0x3084FA0", Offset = "0x30835A0", VA = "0x183084FA0", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x2000033")]
	internal class BindingData
	{
		[Token(Token = "0x4000087")]
		[FieldOffset(Offset = "0x10")]
		public long version;

		[Token(Token = "0x4000088")]
		[FieldOffset(Offset = "0x18")]
		public BindingTarget target;

		[Token(Token = "0x4000089")]
		[FieldOffset(Offset = "0xB8")]
		public Binding binding;

		[Token(Token = "0x400008A")]
		[FieldOffset(Offset = "0xC0")]
		private DataSourceContext m_LastContext;

		[Token(Token = "0x400008C")]
		[FieldOffset(Offset = "0x160")]
		public BindingResult? m_SourceToUILastUpdate;

		[Token(Token = "0x400008D")]
		[FieldOffset(Offset = "0x178")]
		public BindingResult? m_UIToSourceLastUpdate;

		[Token(Token = "0x1700003B")]
		public object localDataSource
		{
			[Token(Token = "0x6000115")]
			[Address(RVA = "0x3012390", Offset = "0x3010990", VA = "0x183012390")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000116")]
			[Address(RVA = "0x30126B0", Offset = "0x3010CB0", VA = "0x1830126B0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700003C")]
		public DataSourceContext context
		{
			[Token(Token = "0x6000118")]
			[Address(RVA = "0x3085420", Offset = "0x3083A20", VA = "0x183085420")]
			set
			{
			}
		}

		[Token(Token = "0x6000117")]
		[Address(RVA = "0x3085360", Offset = "0x3083960", VA = "0x183085360")]
		public void Reset()
		{
		}

		[Token(Token = "0x6000119")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public BindingData()
		{
		}
	}

	[Token(Token = "0x2000034")]
	internal readonly struct ChangesFromUI
	{
		[Token(Token = "0x400008E")]
		[FieldOffset(Offset = "0x0")]
		public readonly long version;

		[Token(Token = "0x400008F")]
		[FieldOffset(Offset = "0x8")]
		public readonly Binding binding;

		[Token(Token = "0x4000090")]
		[FieldOffset(Offset = "0x10")]
		public readonly BindingData bindingData;

		[Token(Token = "0x1700003D")]
		public bool IsValid
		{
			[Token(Token = "0x600011B")]
			[Address(RVA = "0x3088A50", Offset = "0x3087050", VA = "0x183088A50")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600011A")]
		[Address(RVA = "0x3088A00", Offset = "0x3087000", VA = "0x183088A00")]
		public ChangesFromUI(BindingData bindingData)
		{
		}
	}

	[Token(Token = "0x2000035")]
	private class HierarchyBindingTracker : IDisposable
	{
		[Token(Token = "0x2000036")]
		private class HierarchicalBindingsSorter : HierarchyTraversal
		{
			[Token(Token = "0x1700003E")]
			public HashSet<VisualElement> boundElements
			{
				[Token(Token = "0x6000128")]
				[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
				[CompilerGenerated]
				get
				{
					return null;
				}
				[Token(Token = "0x6000129")]
				[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
				[CompilerGenerated]
				set
				{
				}
			}

			[Token(Token = "0x1700003F")]
			public List<VisualElement> results
			{
				[Token(Token = "0x600012A")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
				[CompilerGenerated]
				get
				{
					return null;
				}
				[Token(Token = "0x600012B")]
				[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
				[CompilerGenerated]
				set
				{
				}
			}

			[Token(Token = "0x600012C")]
			[Address(RVA = "0x3091B30", Offset = "0x3090130", VA = "0x183091B30", Slot = "5")]
			public override void TraverseRecursive(VisualElement element, int depth)
			{
			}

			[Token(Token = "0x600012D")]
			[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
			public HierarchicalBindingsSorter()
			{
			}
		}

		[Token(Token = "0x4000091")]
		[FieldOffset(Offset = "0x10")]
		private readonly BaseVisualElementPanel m_Panel;

		[Token(Token = "0x4000092")]
		[FieldOffset(Offset = "0x18")]
		private readonly HierarchicalBindingsSorter m_BindingSorter;

		[Token(Token = "0x4000093")]
		[FieldOffset(Offset = "0x20")]
		private readonly Dictionary<VisualElement, BindingDataCollection> m_BindingDataPerElement;

		[Token(Token = "0x4000094")]
		[FieldOffset(Offset = "0x28")]
		private readonly HashSet<VisualElement> m_BoundElements;

		[Token(Token = "0x4000095")]
		[FieldOffset(Offset = "0x30")]
		private readonly List<VisualElement> m_OrderedBindings;

		[Token(Token = "0x4000096")]
		[FieldOffset(Offset = "0x38")]
		private bool m_IsDirty;

		[Token(Token = "0x4000097")]
		[FieldOffset(Offset = "0x40")]
		private EventCallback<PropertyChangedEvent, Dictionary<VisualElement, BindingDataCollection>> m_OnPropertyChanged;

		[Token(Token = "0x600011C")]
		[Address(RVA = "0x3091EC0", Offset = "0x30904C0", VA = "0x183091EC0")]
		public int GetTrackedElementsCount()
		{
			return default(int);
		}

		[Token(Token = "0x600011D")]
		[Address(RVA = "0x3091DD0", Offset = "0x30903D0", VA = "0x183091DD0")]
		public List<VisualElement> GetBoundElements()
		{
			return null;
		}

		[Token(Token = "0x600011E")]
		[Address(RVA = "0x3092B50", Offset = "0x3091150", VA = "0x183092B50")]
		public HierarchyBindingTracker(BaseVisualElementPanel panel)
		{
		}

		[Token(Token = "0x600011F")]
		[Address(RVA = "0xCD9BE0", Offset = "0xCD81E0", VA = "0x180CD9BE0")]
		public void SetDirty()
		{
		}

		[Token(Token = "0x6000120")]
		[Address(RVA = "0x3092AE0", Offset = "0x30910E0", VA = "0x183092AE0")]
		public bool TryGetBindingCollection(VisualElement element, out BindingDataCollection collection)
		{
			return default(bool);
		}

		[Token(Token = "0x6000121")]
		[Address(RVA = "0x3091F00", Offset = "0x3090500", VA = "0x183091F00")]
		public bool IsTrackingElement(VisualElement element)
		{
			return default(bool);
		}

		[Token(Token = "0x6000122")]
		[Address(RVA = "0x3092600", Offset = "0x3090C00", VA = "0x183092600")]
		public void StartTrackingBinding(VisualElement element, BindingData binding)
		{
		}

		[Token(Token = "0x6000123")]
		[Address(RVA = "0x3091F60", Offset = "0x3090560", VA = "0x183091F60")]
		private void OnPropertyChanged(PropertyChangedEvent evt, Dictionary<VisualElement, BindingDataCollection> bindingCollection)
		{
		}

		[Token(Token = "0x6000124")]
		[Address(RVA = "0x3092880", Offset = "0x3090E80", VA = "0x183092880")]
		public void StopTrackingBinding(VisualElement element, BindingData binding)
		{
		}

		[Token(Token = "0x6000125")]
		[Address(RVA = "0x3092A20", Offset = "0x3091020", VA = "0x183092A20")]
		public void StopTrackingElement(VisualElement element)
		{
		}

		[Token(Token = "0x6000126")]
		[Address(RVA = "0x3091C00", Offset = "0x3090200", VA = "0x183091C00", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000127")]
		[Address(RVA = "0x3092540", Offset = "0x3090B40", VA = "0x183092540")]
		private void OrderBindings(VisualElement root)
		{
		}
	}

	[Token(Token = "0x2000037")]
	private class HierarchyDataSourceTracker : IDisposable
	{
		[Token(Token = "0x2000038")]
		private class SourceInfo
		{
			[Token(Token = "0x40000A3")]
			[FieldOffset(Offset = "0x10")]
			private HashSet<PropertyPath> m_DetectedChanges;

			[Token(Token = "0x17000040")]
			public long lastVersion
			{
				[Token(Token = "0x6000143")]
				[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
				[CompilerGenerated]
				get
				{
					return default(long);
				}
				[Token(Token = "0x6000144")]
				[Address(RVA = "0x111C9B0", Offset = "0x111AFB0", VA = "0x18111C9B0")]
				[CompilerGenerated]
				set
				{
				}
			}

			[Token(Token = "0x17000041")]
			public int refCount
			{
				[Token(Token = "0x6000145")]
				[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
				[CompilerGenerated]
				get
				{
					return default(int);
				}
				[Token(Token = "0x6000146")]
				[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0")]
				[CompilerGenerated]
				set
				{
				}
			}

			[Token(Token = "0x17000042")]
			public HashSet<PropertyPath> detectedChanges
			{
				[Token(Token = "0x6000147")]
				[Address(RVA = "0x3096C80", Offset = "0x3095280", VA = "0x183096C80")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000043")]
			public HashSet<PropertyPath> detectedChangesNoAlloc
			{
				[Token(Token = "0x6000148")]
				[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000149")]
			[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
			public SourceInfo()
			{
			}
		}

		[Token(Token = "0x2000039")]
		private class InvalidateDataSourcesTraversal : HierarchyTraversal
		{
			[Token(Token = "0x40000A6")]
			[FieldOffset(Offset = "0x10")]
			private readonly HierarchyDataSourceTracker m_DataSourceTracker;

			[Token(Token = "0x40000A7")]
			[FieldOffset(Offset = "0x18")]
			private readonly HashSet<VisualElement> m_VisitedElements;

			[Token(Token = "0x600014A")]
			[Address(RVA = "0x3095CB0", Offset = "0x30942B0", VA = "0x183095CB0")]
			public InvalidateDataSourcesTraversal(HierarchyDataSourceTracker dataSourceTracker)
			{
			}

			[Token(Token = "0x600014B")]
			[Address(RVA = "0x30959E0", Offset = "0x3093FE0", VA = "0x1830959E0")]
			public void Invalidate(List<VisualElement> addedOrMovedElements, HashSet<VisualElement> removedElements)
			{
			}

			[Token(Token = "0x600014C")]
			[Address(RVA = "0x3095BB0", Offset = "0x30941B0", VA = "0x183095BB0", Slot = "5")]
			public override void TraverseRecursive(VisualElement element, int depth)
			{
			}
		}

		[Token(Token = "0x200003A")]
		private class ObjectComparer : IEqualityComparer<object>
		{
			[Token(Token = "0x600014D")]
			[Address(RVA = "0x3095DB0", Offset = "0x30943B0", VA = "0x183095DB0", Slot = "4")]
			private bool System_002ECollections_002EGeneric_002EIEqualityComparer_003CSystem_002EObject_003E_002EEquals(object x, object y)
			{
				return default(bool);
			}

			[Token(Token = "0x600014E")]
			[Address(RVA = "0x1C51D90", Offset = "0x1C50390", VA = "0x181C51D90", Slot = "5")]
			private int System_002ECollections_002EGeneric_002EIEqualityComparer_003CSystem_002EObject_003E_002EGetHashCode(object obj)
			{
				return default(int);
			}

			[Token(Token = "0x600014F")]
			[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
			public ObjectComparer()
			{
			}
		}

		[Token(Token = "0x400009A")]
		[FieldOffset(Offset = "0x10")]
		private readonly List<SourceInfo> m_SourceInfosPool;

		[Token(Token = "0x400009B")]
		[FieldOffset(Offset = "0x18")]
		private readonly DataBindingManager m_DataBindingManager;

		[Token(Token = "0x400009C")]
		[FieldOffset(Offset = "0x20")]
		private readonly Dictionary<VisualElement, DataSourceContext> m_ResolvedHierarchicalDataSourceContext;

		[Token(Token = "0x400009D")]
		[FieldOffset(Offset = "0x28")]
		private readonly Dictionary<Binding, int> m_BindingRefCount;

		[Token(Token = "0x400009E")]
		[FieldOffset(Offset = "0x30")]
		private readonly Dictionary<object, SourceInfo> m_SourceInfos;

		[Token(Token = "0x400009F")]
		[FieldOffset(Offset = "0x38")]
		private readonly HashSet<object> m_SourcesToRemove;

		[Token(Token = "0x40000A0")]
		[FieldOffset(Offset = "0x40")]
		private readonly InvalidateDataSourcesTraversal m_InvalidateResolvedDataSources;

		[Token(Token = "0x40000A1")]
		[FieldOffset(Offset = "0x48")]
		private readonly EventHandler<BindablePropertyChangedEventArgs> m_Handler;

		[Token(Token = "0x40000A2")]
		[FieldOffset(Offset = "0x50")]
		private readonly EventCallback<PropertyChangedEvent, VisualElement> m_VisualElementHandler;

		[Token(Token = "0x600012E")]
		[Address(RVA = "0x3093C00", Offset = "0x3092200", VA = "0x183093C00")]
		private SourceInfo GetPooledSourceInfo()
		{
			return null;
		}

		[Token(Token = "0x600012F")]
		[Address(RVA = "0x3094DA0", Offset = "0x30933A0", VA = "0x183094DA0")]
		private void ReleasePooledSourceInfo(SourceInfo info)
		{
		}

		[Token(Token = "0x6000130")]
		[Address(RVA = "0x3095320", Offset = "0x3093920", VA = "0x183095320")]
		public HierarchyDataSourceTracker(DataBindingManager manager)
		{
		}

		[Token(Token = "0x6000131")]
		[Address(RVA = "0x3094600", Offset = "0x3092C00", VA = "0x183094600")]
		internal void IncreaseBindingRefCount(ref BindingData bindingData)
		{
		}

		[Token(Token = "0x6000132")]
		[Address(RVA = "0x30930A0", Offset = "0x30916A0", VA = "0x1830930A0")]
		internal void DecreaseBindingRefCount(ref BindingData bindingData)
		{
		}

		[Token(Token = "0x6000133")]
		[Address(RVA = "0x3094730", Offset = "0x3092D30", VA = "0x183094730")]
		internal void IncreaseRefCount(object dataSource)
		{
		}

		[Token(Token = "0x6000134")]
		[Address(RVA = "0x3094C20", Offset = "0x3093220", VA = "0x183094C20")]
		private void OnVisualElementPropertyChanged(PropertyChangedEvent evt, VisualElement element)
		{
		}

		[Token(Token = "0x6000135")]
		[Address(RVA = "0x3093200", Offset = "0x3091800", VA = "0x183093200")]
		internal void DecreaseRefCount(object dataSource)
		{
		}

		[Token(Token = "0x6000136")]
		[Address(RVA = "0x30945B0", Offset = "0x3092BB0", VA = "0x1830945B0")]
		public int GetTrackedDataSourcesCount()
		{
			return default(int);
		}

		[Token(Token = "0x6000137")]
		[Address(RVA = "0x30934A0", Offset = "0x3091AA0", VA = "0x1830934A0")]
		public HashSet<PropertyPath> GetChangesFromSource(object dataSource)
		{
			return null;
		}

		[Token(Token = "0x6000138")]
		[Address(RVA = "0x3092CF0", Offset = "0x30912F0", VA = "0x183092CF0")]
		public void ClearChangesFromSource(object dataSource)
		{
		}

		[Token(Token = "0x6000139")]
		[Address(RVA = "0x3094980", Offset = "0x3092F80", VA = "0x183094980")]
		public void InvalidateCachedDataSource(HashSet<VisualElement> elements, HashSet<VisualElement> removedElements)
		{
		}

		[Token(Token = "0x600013A")]
		[Address(RVA = "0x3093CE0", Offset = "0x30922E0", VA = "0x183093CE0")]
		public DataSourceContext GetResolvedDataSourceContext(VisualElement element, BindingData bindingData)
		{
			return default(DataSourceContext);
		}

		[Token(Token = "0x600013B")]
		[Address(RVA = "0x3094EF0", Offset = "0x30934F0", VA = "0x183094EF0")]
		private void TrackPropertyChanges(object sender, BindablePropertyChangedEventArgs args)
		{
		}

		[Token(Token = "0x600013C")]
		[Address(RVA = "0x3095060", Offset = "0x3093660", VA = "0x183095060")]
		private void TrackPropertyChanges(object sender, PropertyPath propertyPath)
		{
		}

		[Token(Token = "0x600013D")]
		[Address(RVA = "0x30951E0", Offset = "0x30937E0", VA = "0x1830951E0")]
		public bool TryGetLastVersion(object source, out long version)
		{
			return default(bool);
		}

		[Token(Token = "0x600013E")]
		[Address(RVA = "0x3095280", Offset = "0x3093880", VA = "0x183095280")]
		public void UpdateVersion(object source, long version)
		{
		}

		[Token(Token = "0x600013F")]
		[Address(RVA = "0x3093530", Offset = "0x3091B30", VA = "0x183093530")]
		internal DataSourceContext GetHierarchicalDataSourceContext(VisualElement element)
		{
			return default(DataSourceContext);
		}

		[Token(Token = "0x6000140")]
		[Address(RVA = "0x3094E90", Offset = "0x3093490", VA = "0x183094E90")]
		internal void RemoveHierarchyDataSourceContextFromElement(VisualElement element)
		{
		}

		[Token(Token = "0x6000141")]
		[Address(RVA = "0x30933C0", Offset = "0x30919C0", VA = "0x1830933C0", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000142")]
		[Address(RVA = "0x3092D90", Offset = "0x3091390", VA = "0x183092D90")]
		public void ClearSourceCache()
		{
		}
	}

	[Token(Token = "0x200003B")]
	private struct IgnoreUIChangesData
	{
		[Token(Token = "0x40000A8")]
		[FieldOffset(Offset = "0x0")]
		public VisualElement element;

		[Token(Token = "0x40000A9")]
		[FieldOffset(Offset = "0x8")]
		public Binding binding;

		[Token(Token = "0x40000AA")]
		[FieldOffset(Offset = "0x10")]
		public BindingId bindingId;

		[Token(Token = "0x6000150")]
		[Address(RVA = "0x3095630", Offset = "0x3093C30", VA = "0x183095630")]
		public bool ShouldIgnoreChange(VisualElement ve, Binding b, BindingId id)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200003C")]
	public struct IgnoreUIChangesScope : IDisposable
	{
		[Token(Token = "0x40000AB")]
		[FieldOffset(Offset = "0x0")]
		private IgnoreUIChangesData m_ScopeData;

		[Token(Token = "0x40000AC")]
		[FieldOffset(Offset = "0xA8")]
		private DataBindingManager manager;

		[Token(Token = "0x6000151")]
		[Address(RVA = "0x3095790", Offset = "0x3093D90", VA = "0x183095790")]
		internal IgnoreUIChangesScope(DataBindingManager manager, VisualElement target, BindingId bindingId, Binding binding)
		{
		}

		[Token(Token = "0x6000152")]
		[Address(RVA = "0x30956B0", Offset = "0x3093CB0", VA = "0x1830956B0", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x4000077")]
	[FieldOffset(Offset = "0x10")]
	private readonly List<BindingData> m_BindingDataLocalPool;

	[Token(Token = "0x4000078")]
	[FieldOffset(Offset = "0x0")]
	private static readonly PropertyName k_RequestBindingPropertyName;

	[Token(Token = "0x4000079")]
	[FieldOffset(Offset = "0x8")]
	private static readonly BindingId k_ClearBindingsToken;

	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0xA0")]
	internal static BindingLogLevel globalLogLevel;

	[Token(Token = "0x400007B")]
	[FieldOffset(Offset = "0x18")]
	private BindingLogLevel? m_LogLevel;

	[Token(Token = "0x400007C")]
	[FieldOffset(Offset = "0xA8")]
	private static readonly List<BindingData> s_Empty;

	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x20")]
	private readonly BaseVisualElementPanel m_Panel;

	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x28")]
	private readonly HierarchyDataSourceTracker m_DataSourceTracker;

	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x30")]
	private readonly HierarchyBindingTracker m_BindingsTracker;

	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0x38")]
	private readonly List<ChangesFromUI> m_DetectedChangesFromUI;

	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x40")]
	private IgnoreUIChangesData m_IgnoreUIChangesData;

	[Token(Token = "0x1700003A")]
	internal BindingLogLevel logLevel
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x308F160", Offset = "0x308D760", VA = "0x18308F160")]
		get
		{
			return default(BindingLogLevel);
		}
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x308F1F0", Offset = "0x308D7F0", VA = "0x18308F1F0")]
		set
		{
		}
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x1CBB7C0", Offset = "0x1CB9DC0", VA = "0x181CBB7C0")]
	internal void ResetLogLevel()
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x308EEA0", Offset = "0x308D4A0", VA = "0x18308EEA0")]
	internal DataBindingManager(BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x308C200", Offset = "0x308A800", VA = "0x18308C200")]
	internal int GetTrackedDataSourcesCount()
	{
		return default(int);
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x308DEA0", Offset = "0x308C4A0", VA = "0x18308DEA0")]
	internal bool TryGetLastVersion(object source, out long version)
	{
		return default(bool);
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x308EC30", Offset = "0x308D230", VA = "0x18308EC30")]
	internal void UpdateVersion(object source, long version)
	{
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x308B200", Offset = "0x3089800", VA = "0x18308B200")]
	internal void CacheUIBindingResult(BindingData bindingData, BindingResult result)
	{
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x308DE00", Offset = "0x308C400", VA = "0x18308DE00")]
	internal bool TryGetLastUIBindingResult(BindingData bindingData, out BindingResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x308B160", Offset = "0x3089760", VA = "0x18308B160")]
	internal void CacheSourceBindingResult(BindingData bindingData, BindingResult result)
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x308DD60", Offset = "0x308C360", VA = "0x18308DD60")]
	internal bool TryGetLastSourceBindingResult(BindingData bindingData, out BindingResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x308C0B0", Offset = "0x308A6B0", VA = "0x18308C0B0")]
	internal DataSourceContext GetResolvedDataSourceContext(VisualElement element, BindingData bindingData)
	{
		return default(DataSourceContext);
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x308BD50", Offset = "0x308A350", VA = "0x18308BD50")]
	internal int GetBoundElementsCount()
	{
		return default(int);
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x308BDA0", Offset = "0x308A3A0", VA = "0x18308BDA0")]
	internal IEnumerable<VisualElement> GetBoundElements()
	{
		return null;
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x308C250", Offset = "0x308A850", VA = "0x18308C250")]
	public IgnoreUIChangesScope IgnoreChangesScope(VisualElement target, BindingId bindingId, Binding binding)
	{
		return default(IgnoreUIChangesScope);
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0xAD2BE0", Offset = "0xAD11E0", VA = "0x180AD2BE0")]
	internal List<ChangesFromUI> GetChangedDetectedFromUI()
	{
		return null;
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x308BEA0", Offset = "0x308A4A0", VA = "0x18308BEA0")]
	internal HashSet<PropertyPath> GetChangedDetectedFromSource(object dataSource)
	{
		return null;
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x308B4D0", Offset = "0x3089AD0", VA = "0x18308B4D0")]
	internal void ClearChangesFromSource(object dataSource)
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x308BC60", Offset = "0x308A260", VA = "0x18308BC60")]
	internal List<BindingData> GetBindingData(VisualElement element)
	{
		return null;
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x308DA80", Offset = "0x308C080", VA = "0x18308DA80")]
	internal bool TryGetBindingData(VisualElement element, in BindingId bindingId, out BindingData bindingData)
	{
		return default(bool);
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x308C940", Offset = "0x308AF40", VA = "0x18308C940")]
	internal void RegisterBinding(VisualElement element, in BindingId bindingId, Binding binding)
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x308DF50", Offset = "0x308C550", VA = "0x18308DF50")]
	internal void UnregisterBinding(VisualElement element, in BindingId bindingId)
	{
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x308D8D0", Offset = "0x308BED0", VA = "0x18308D8D0")]
	internal void TransferBindingRequests(VisualElement element)
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x308C390", Offset = "0x308A990", VA = "0x18308C390")]
	public void InvalidateCachedDataSource(HashSet<VisualElement> addedOrMovedElements, HashSet<VisualElement> removedElements)
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x308BB00", Offset = "0x308A100", VA = "0x18308BB00", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x308B590", Offset = "0x3089B90", VA = "0x18308B590")]
	private static void CreateBindingRequest(VisualElement target, in BindingId bindingId, Binding binding, bool isTransferring)
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x308C3B0", Offset = "0x308A9B0", VA = "0x18308C3B0")]
	public void ProcessBindingRequests(VisualElement element)
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x308B2A0", Offset = "0x30898A0", VA = "0x18308B2A0")]
	private void ClearAllBindings(VisualElement element)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x308B090", Offset = "0x3089690", VA = "0x18308B090")]
	internal static bool AnyPendingBindingRequests(VisualElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x308DB50", Offset = "0x308C150", VA = "0x18308DB50")]
	internal static bool TryGetBindingRequest(VisualElement element, in BindingId bindingId, out Binding binding)
	{
		return default(bool);
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x308BAE0", Offset = "0x308A0E0", VA = "0x18308BAE0")]
	public void DirtyBindingOrder()
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x308D880", Offset = "0x308BE80", VA = "0x18308D880")]
	public void TrackDataSource(object previous, object current)
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x308B570", Offset = "0x3089B70", VA = "0x18308B570")]
	public void ClearSourceCache()
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x308BF30", Offset = "0x308A530", VA = "0x18308BF30")]
	public BindingData GetPooledBindingData(BindingTarget target, Binding binding)
	{
		return null;
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x308D710", Offset = "0x308BD10", VA = "0x18308D710")]
	public void ReleasePoolBindingData(BindingData data)
	{
	}
}
