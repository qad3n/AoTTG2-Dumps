// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.DataBindingManager
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6A850F0", Offset = "0x6A840F0", VA = "0x6A850F0")]
		public BindingRequest(in BindingId bindingId, Binding binding, bool shouldProcess = true)
		{
		}

		[Token(Token = "0x600010D")]
		[Address(RVA = "0x6A85060", Offset = "0x6A84060", VA = "0x6A85060")]
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
		[Address(RVA = "0x6A86620", Offset = "0x6A85620", VA = "0x6A86620")]
		public static BindingDataCollection Create()
		{
			return default(BindingDataCollection);
		}

		[Token(Token = "0x600010F")]
		[Address(RVA = "0x6A866F0", Offset = "0x6A856F0", VA = "0x6A866F0")]
		public void AddBindingData(BindingData bindingData)
		{
		}

		[Token(Token = "0x6000110")]
		[Address(RVA = "0x6A825D0", Offset = "0x6A815D0", VA = "0x6A825D0")]
		public bool TryGetBindingData(in BindingId bindingId, out BindingData data)
		{
			return default(bool);
		}

		[Token(Token = "0x6000111")]
		[Address(RVA = "0x6A86860", Offset = "0x6A85860", VA = "0x6A86860")]
		public bool RemoveBindingData(BindingData bindingData)
		{
			return default(bool);
		}

		[Token(Token = "0x6000112")]
		[Address(RVA = "0x6A824A0", Offset = "0x6A814A0", VA = "0x6A824A0")]
		public List<BindingData> GetBindings()
		{
			return null;
		}

		[Token(Token = "0x6000113")]
		[Address(RVA = "0x6A86970", Offset = "0x6A85970", VA = "0x6A86970")]
		public int GetBindingCount()
		{
			return default(int);
		}

		[Token(Token = "0x6000114")]
		[Address(RVA = "0x6A869B0", Offset = "0x6A859B0", VA = "0x6A869B0", Slot = "4")]
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
			[Address(RVA = "0x6A86A90", Offset = "0x6A85A90", VA = "0x6A86A90")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000116")]
			[Address(RVA = "0x6A86AA0", Offset = "0x6A85AA0", VA = "0x6A86AA0")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700003C")]
		public DataSourceContext context
		{
			[Token(Token = "0x6000118")]
			[Address(RVA = "0x6A86AC0", Offset = "0x6A85AC0", VA = "0x6A86AC0")]
			set
			{
			}
		}

		[Token(Token = "0x6000117")]
		[Address(RVA = "0x6A863F0", Offset = "0x6A853F0", VA = "0x6A863F0")]
		public void Reset()
		{
		}

		[Token(Token = "0x6000119")]
		[Address(RVA = "0x6A863E0", Offset = "0x6A853E0", VA = "0x6A863E0")]
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
			[Address(RVA = "0x6A86CC0", Offset = "0x6A85CC0", VA = "0x6A86CC0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600011A")]
		[Address(RVA = "0x6A86C70", Offset = "0x6A85C70", VA = "0x6A86C70")]
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
				[Address(RVA = "0x6A87280", Offset = "0x6A86280", VA = "0x6A87280")]
				[CompilerGenerated]
				get
				{
					return null;
				}
				[Token(Token = "0x6000129")]
				[Address(RVA = "0x6A87290", Offset = "0x6A86290", VA = "0x6A87290")]
				[CompilerGenerated]
				set
				{
				}
			}

			[Token(Token = "0x1700003F")]
			public List<VisualElement> results
			{
				[Token(Token = "0x600012A")]
				[Address(RVA = "0x6A872A0", Offset = "0x6A862A0", VA = "0x6A872A0")]
				[CompilerGenerated]
				get
				{
					return null;
				}
				[Token(Token = "0x600012B")]
				[Address(RVA = "0x6A872B0", Offset = "0x6A862B0", VA = "0x6A872B0")]
				[CompilerGenerated]
				set
				{
				}
			}

			[Token(Token = "0x600012C")]
			[Address(RVA = "0x6A872C0", Offset = "0x6A862C0", VA = "0x6A872C0", Slot = "5")]
			public override void TraverseRecursive(VisualElement element, int depth)
			{
			}

			[Token(Token = "0x600012D")]
			[Address(RVA = "0x6A86DA0", Offset = "0x6A85DA0", VA = "0x6A86DA0")]
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
		[Address(RVA = "0x6A81DA0", Offset = "0x6A80DA0", VA = "0x6A81DA0")]
		public int GetTrackedElementsCount()
		{
			return default(int);
		}

		[Token(Token = "0x600011D")]
		[Address(RVA = "0x6A81E20", Offset = "0x6A80E20", VA = "0x6A81E20")]
		public List<VisualElement> GetBoundElements()
		{
			return null;
		}

		[Token(Token = "0x600011E")]
		[Address(RVA = "0x6A80DE0", Offset = "0x6A7FDE0", VA = "0x6A80DE0")]
		public HierarchyBindingTracker(BaseVisualElementPanel panel)
		{
		}

		[Token(Token = "0x600011F")]
		[Address(RVA = "0x6A85CC0", Offset = "0x6A84CC0", VA = "0x6A85CC0")]
		public void SetDirty()
		{
		}

		[Token(Token = "0x6000120")]
		[Address(RVA = "0x6A82440", Offset = "0x6A81440", VA = "0x6A82440")]
		public bool TryGetBindingCollection(VisualElement element, out BindingDataCollection collection)
		{
			return default(bool);
		}

		[Token(Token = "0x6000121")]
		[Address(RVA = "0x6A84440", Offset = "0x6A83440", VA = "0x6A84440")]
		public bool IsTrackingElement(VisualElement element)
		{
			return default(bool);
		}

		[Token(Token = "0x6000122")]
		[Address(RVA = "0x6A836A0", Offset = "0x6A826A0", VA = "0x6A836A0")]
		public void StartTrackingBinding(VisualElement element, BindingData binding)
		{
		}

		[Token(Token = "0x6000123")]
		[Address(RVA = "0x6A86DB0", Offset = "0x6A85DB0", VA = "0x6A86DB0")]
		private void OnPropertyChanged(PropertyChangedEvent evt, Dictionary<VisualElement, BindingDataCollection> bindingCollection)
		{
		}

		[Token(Token = "0x6000124")]
		[Address(RVA = "0x6A83F90", Offset = "0x6A82F90", VA = "0x6A83F90")]
		public void StopTrackingBinding(VisualElement element, BindingData binding)
		{
		}

		[Token(Token = "0x6000125")]
		[Address(RVA = "0x6A84980", Offset = "0x6A83980", VA = "0x6A84980")]
		public void StopTrackingElement(VisualElement element)
		{
		}

		[Token(Token = "0x6000126")]
		[Address(RVA = "0x6A84DA0", Offset = "0x6A83DA0", VA = "0x6A84DA0", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000127")]
		[Address(RVA = "0x6A86CF0", Offset = "0x6A85CF0", VA = "0x6A86CF0")]
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
				[Address(RVA = "0x6A87FE0", Offset = "0x6A86FE0", VA = "0x6A87FE0")]
				[CompilerGenerated]
				get
				{
					return default(long);
				}
				[Token(Token = "0x6000144")]
				[Address(RVA = "0x6A87FF0", Offset = "0x6A86FF0", VA = "0x6A87FF0")]
				[CompilerGenerated]
				set
				{
				}
			}

			[Token(Token = "0x17000041")]
			public int refCount
			{
				[Token(Token = "0x6000145")]
				[Address(RVA = "0x6A88000", Offset = "0x6A87000", VA = "0x6A88000")]
				[CompilerGenerated]
				get
				{
					return default(int);
				}
				[Token(Token = "0x6000146")]
				[Address(RVA = "0x6A88010", Offset = "0x6A87010", VA = "0x6A88010")]
				[CompilerGenerated]
				set
				{
				}
			}

			[Token(Token = "0x17000042")]
			public HashSet<PropertyPath> detectedChanges
			{
				[Token(Token = "0x6000147")]
				[Address(RVA = "0x6A87F10", Offset = "0x6A86F10", VA = "0x6A87F10")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x17000043")]
			public HashSet<PropertyPath> detectedChangesNoAlloc
			{
				[Token(Token = "0x6000148")]
				[Address(RVA = "0x6A88020", Offset = "0x6A87020", VA = "0x6A88020")]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000149")]
			[Address(RVA = "0x6A87480", Offset = "0x6A86480", VA = "0x6A87480")]
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
			[Address(RVA = "0x6A87580", Offset = "0x6A86580", VA = "0x6A87580")]
			public InvalidateDataSourcesTraversal(HierarchyDataSourceTracker dataSourceTracker)
			{
			}

			[Token(Token = "0x600014B")]
			[Address(RVA = "0x6A87820", Offset = "0x6A86820", VA = "0x6A87820")]
			public void Invalidate(List<VisualElement> addedOrMovedElements, HashSet<VisualElement> removedElements)
			{
			}

			[Token(Token = "0x600014C")]
			[Address(RVA = "0x6A88030", Offset = "0x6A87030", VA = "0x6A88030", Slot = "5")]
			public override void TraverseRecursive(VisualElement element, int depth)
			{
			}
		}

		[Token(Token = "0x200003A")]
		private class ObjectComparer : IEqualityComparer<object>
		{
			[Token(Token = "0x600014D")]
			[Address(RVA = "0x6A88130", Offset = "0x6A87130", VA = "0x6A88130", Slot = "4")]
			private bool System_002ECollections_002EGeneric_002EIEqualityComparer_003CSystem_002EObject_003E_002EEquals(object x, object y)
			{
				return default(bool);
			}

			[Token(Token = "0x600014E")]
			[Address(RVA = "0x6A881B0", Offset = "0x6A871B0", VA = "0x6A881B0", Slot = "5")]
			private int System_002ECollections_002EGeneric_002EIEqualityComparer_003CSystem_002EObject_003E_002EGetHashCode(object obj)
			{
				return default(int);
			}

			[Token(Token = "0x600014F")]
			[Address(RVA = "0x6A87570", Offset = "0x6A86570", VA = "0x6A87570")]
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
		[Address(RVA = "0x6A873C0", Offset = "0x6A863C0", VA = "0x6A873C0")]
		private SourceInfo GetPooledSourceInfo()
		{
			return null;
		}

		[Token(Token = "0x600012F")]
		[Address(RVA = "0x6A87490", Offset = "0x6A86490", VA = "0x6A87490")]
		private void ReleasePooledSourceInfo(SourceInfo info)
		{
		}

		[Token(Token = "0x6000130")]
		[Address(RVA = "0x6A80B10", Offset = "0x6A7FB10", VA = "0x6A80B10")]
		public HierarchyDataSourceTracker(DataBindingManager manager)
		{
		}

		[Token(Token = "0x6000131")]
		[Address(RVA = "0x6A834C0", Offset = "0x6A824C0", VA = "0x6A834C0")]
		internal void IncreaseBindingRefCount(ref BindingData bindingData)
		{
		}

		[Token(Token = "0x6000132")]
		[Address(RVA = "0x6A831F0", Offset = "0x6A821F0", VA = "0x6A831F0")]
		internal void DecreaseBindingRefCount(ref BindingData bindingData)
		{
		}

		[Token(Token = "0x6000133")]
		[Address(RVA = "0x6A85F20", Offset = "0x6A84F20", VA = "0x6A85F20")]
		internal void IncreaseRefCount(object dataSource)
		{
		}

		[Token(Token = "0x6000134")]
		[Address(RVA = "0x6A87610", Offset = "0x6A86610", VA = "0x6A87610")]
		private void OnVisualElementPropertyChanged(PropertyChangedEvent evt, VisualElement element)
		{
		}

		[Token(Token = "0x6000135")]
		[Address(RVA = "0x6A85D10", Offset = "0x6A84D10", VA = "0x6A85D10")]
		internal void DecreaseRefCount(object dataSource)
		{
		}

		[Token(Token = "0x6000136")]
		[Address(RVA = "0x6A80FE0", Offset = "0x6A7FFE0", VA = "0x6A80FE0")]
		public int GetTrackedDataSourcesCount()
		{
			return default(int);
		}

		[Token(Token = "0x6000137")]
		[Address(RVA = "0x6A82240", Offset = "0x6A81240", VA = "0x6A82240")]
		public HashSet<PropertyPath> GetChangesFromSource(object dataSource)
		{
			return null;
		}

		[Token(Token = "0x6000138")]
		[Address(RVA = "0x6A822E0", Offset = "0x6A812E0", VA = "0x6A822E0")]
		public void ClearChangesFromSource(object dataSource)
		{
		}

		[Token(Token = "0x6000139")]
		[Address(RVA = "0x6A84A60", Offset = "0x6A83A60", VA = "0x6A84A60")]
		public void InvalidateCachedDataSource(HashSet<VisualElement> elements, HashSet<VisualElement> removedElements)
		{
		}

		[Token(Token = "0x600013A")]
		[Address(RVA = "0x6A81530", Offset = "0x6A80530", VA = "0x6A81530")]
		public DataSourceContext GetResolvedDataSourceContext(VisualElement element, BindingData bindingData)
		{
			return default(DataSourceContext);
		}

		[Token(Token = "0x600013B")]
		[Address(RVA = "0x6A87E60", Offset = "0x6A86E60", VA = "0x6A87E60")]
		private void TrackPropertyChanges(object sender, BindablePropertyChangedEventArgs args)
		{
		}

		[Token(Token = "0x600013C")]
		[Address(RVA = "0x6A876C0", Offset = "0x6A866C0", VA = "0x6A876C0")]
		private void TrackPropertyChanges(object sender, PropertyPath propertyPath)
		{
		}

		[Token(Token = "0x600013D")]
		[Address(RVA = "0x6A810B0", Offset = "0x6A800B0", VA = "0x6A810B0")]
		public bool TryGetLastVersion(object source, out long version)
		{
			return default(bool);
		}

		[Token(Token = "0x600013E")]
		[Address(RVA = "0x6A81160", Offset = "0x6A80160", VA = "0x6A81160")]
		public void UpdateVersion(object source, long version)
		{
		}

		[Token(Token = "0x600013F")]
		[Address(RVA = "0x6A87A30", Offset = "0x6A86A30", VA = "0x6A87A30")]
		internal DataSourceContext GetHierarchicalDataSourceContext(VisualElement element)
		{
			return default(DataSourceContext);
		}

		[Token(Token = "0x6000140")]
		[Address(RVA = "0x6A87F90", Offset = "0x6A86F90", VA = "0x6A87F90")]
		internal void RemoveHierarchyDataSourceContextFromElement(VisualElement element)
		{
		}

		[Token(Token = "0x6000141")]
		[Address(RVA = "0x6A84F80", Offset = "0x6A83F80", VA = "0x6A84F80", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000142")]
		[Address(RVA = "0x6A86120", Offset = "0x6A85120", VA = "0x6A86120")]
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
		[Address(RVA = "0x6A87200", Offset = "0x6A86200", VA = "0x6A87200")]
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
		[Address(RVA = "0x6A82080", Offset = "0x6A81080", VA = "0x6A82080")]
		internal IgnoreUIChangesScope(DataBindingManager manager, VisualElement target, BindingId bindingId, Binding binding)
		{
		}

		[Token(Token = "0x6000152")]
		[Address(RVA = "0x6A881C0", Offset = "0x6A871C0", VA = "0x6A881C0", Slot = "4")]
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
		[Address(RVA = "0x6A7DF90", Offset = "0x6A7CF90", VA = "0x6A7DF90")]
		get
		{
			return default(BindingLogLevel);
		}
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x6A7DE60", Offset = "0x6A7CE60", VA = "0x6A7DE60")]
		set
		{
		}
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x6A7E090", Offset = "0x6A7D090", VA = "0x6A7E090")]
	internal void ResetLogLevel()
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x6A809C0", Offset = "0x6A7F9C0", VA = "0x6A809C0")]
	internal DataBindingManager(BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x6A80F90", Offset = "0x6A7FF90", VA = "0x6A80F90")]
	internal int GetTrackedDataSourcesCount()
	{
		return default(int);
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x6A81020", Offset = "0x6A80020", VA = "0x6A81020")]
	internal bool TryGetLastVersion(object source, out long version)
	{
		return default(bool);
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x6A81140", Offset = "0x6A80140", VA = "0x6A81140")]
	internal void UpdateVersion(object source, long version)
	{
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x6A811F0", Offset = "0x6A801F0", VA = "0x6A811F0")]
	internal void CacheUIBindingResult(BindingData bindingData, BindingResult result)
	{
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x6A81280", Offset = "0x6A80280", VA = "0x6A81280")]
	internal bool TryGetLastUIBindingResult(BindingData bindingData, out BindingResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x6A81310", Offset = "0x6A80310", VA = "0x6A81310")]
	internal void CacheSourceBindingResult(BindingData bindingData, BindingResult result)
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x6A813A0", Offset = "0x6A803A0", VA = "0x6A813A0")]
	internal bool TryGetLastSourceBindingResult(BindingData bindingData, out BindingResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x6A81430", Offset = "0x6A80430", VA = "0x6A81430")]
	internal DataSourceContext GetResolvedDataSourceContext(VisualElement element, BindingData bindingData)
	{
		return default(DataSourceContext);
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x6A81D60", Offset = "0x6A80D60", VA = "0x6A81D60")]
	internal int GetBoundElementsCount()
	{
		return default(int);
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x6A81DE0", Offset = "0x6A80DE0", VA = "0x6A81DE0")]
	internal IEnumerable<VisualElement> GetBoundElements()
	{
		return null;
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x6A81E60", Offset = "0x6A80E60", VA = "0x6A81E60")]
	public IgnoreUIChangesScope IgnoreChangesScope(VisualElement target, BindingId bindingId, Binding binding)
	{
		return default(IgnoreUIChangesScope);
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x6A821B0", Offset = "0x6A811B0", VA = "0x6A821B0")]
	internal List<ChangesFromUI> GetChangedDetectedFromUI()
	{
		return null;
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x6A821C0", Offset = "0x6A811C0", VA = "0x6A821C0")]
	internal HashSet<PropertyPath> GetChangedDetectedFromSource(object dataSource)
	{
		return null;
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x6A822C0", Offset = "0x6A812C0", VA = "0x6A822C0")]
	internal void ClearChangesFromSource(object dataSource)
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x6A82370", Offset = "0x6A81370", VA = "0x6A82370")]
	internal List<BindingData> GetBindingData(VisualElement element)
	{
		return null;
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x6A824B0", Offset = "0x6A814B0", VA = "0x6A824B0")]
	internal bool TryGetBindingData(VisualElement element, in BindingId bindingId, out BindingData bindingData)
	{
		return default(bool);
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x6A82640", Offset = "0x6A81640", VA = "0x6A82640")]
	internal void RegisterBinding(VisualElement element, in BindingId bindingId, Binding binding)
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x6A83850", Offset = "0x6A82850", VA = "0x6A83850")]
	internal void UnregisterBinding(VisualElement element, in BindingId bindingId)
	{
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x6A84290", Offset = "0x6A83290", VA = "0x6A84290")]
	internal void TransferBindingRequests(VisualElement element)
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x6A84A40", Offset = "0x6A83A40", VA = "0x6A84A40")]
	public void InvalidateCachedDataSource(HashSet<VisualElement> addedOrMovedElements, HashSet<VisualElement> removedElements)
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x6A84D30", Offset = "0x6A83D30", VA = "0x6A84D30", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x6A84490", Offset = "0x6A83490", VA = "0x6A84490")]
	private static void CreateBindingRequest(VisualElement target, in BindingId bindingId, Binding binding, bool isTransferring)
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x6A85140", Offset = "0x6A84140", VA = "0x6A85140")]
	public void ProcessBindingRequests(VisualElement element)
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x6A85720", Offset = "0x6A84720", VA = "0x6A85720")]
	private void ClearAllBindings(VisualElement element)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x6A859A0", Offset = "0x6A849A0", VA = "0x6A859A0")]
	internal static bool AnyPendingBindingRequests(VisualElement element)
	{
		return default(bool);
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x6A85A90", Offset = "0x6A84A90", VA = "0x6A85A90")]
	internal static bool TryGetBindingRequest(VisualElement element, in BindingId bindingId, out Binding binding)
	{
		return default(bool);
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x6A85CA0", Offset = "0x6A84CA0", VA = "0x6A85CA0")]
	public void DirtyBindingOrder()
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x6A85CD0", Offset = "0x6A84CD0", VA = "0x6A85CD0")]
	public void TrackDataSource(object previous, object current)
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x6A86100", Offset = "0x6A85100", VA = "0x6A86100")]
	public void ClearSourceCache()
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x6A833B0", Offset = "0x6A823B0", VA = "0x6A833B0")]
	public BindingData GetPooledBindingData(BindingTarget target, Binding binding)
	{
		return null;
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x6A84120", Offset = "0x6A83120", VA = "0x6A84120")]
	public void ReleasePoolBindingData(BindingData data)
	{
	}
}
