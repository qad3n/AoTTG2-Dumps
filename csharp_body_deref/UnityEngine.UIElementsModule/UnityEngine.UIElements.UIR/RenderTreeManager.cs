// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.RenderTreeManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine.Pool;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005B5")]
internal class RenderTreeManager : IDisposable
{
	[Token(Token = "0x20005B6")]
	internal struct ElementInsertionData
	{
		[Token(Token = "0x40014B1")]
		[FieldOffset(Offset = "0x0")]
		public VisualElement element;

		[Token(Token = "0x40014B2")]
		[FieldOffset(Offset = "0x8")]
		public bool canceled;
	}

	[Token(Token = "0x20005B7")]
	internal class VisualChangesProcessor : IDisposable
	{
		[Token(Token = "0x20005B8")]
		private enum VisualsProcessingType
		{
			[Token(Token = "0x40014BD")]
			Head,
			[Token(Token = "0x40014BE")]
			Tail
		}

		[Token(Token = "0x20005B9")]
		private struct EntryProcessingInfo
		{
			[Token(Token = "0x40014BF")]
			[FieldOffset(Offset = "0x0")]
			public RenderData renderData;

			[Token(Token = "0x40014C0")]
			[FieldOffset(Offset = "0x8")]
			public VisualsProcessingType type;

			[Token(Token = "0x40014C1")]
			[FieldOffset(Offset = "0x10")]
			public Entry rootEntry;
		}

		[Token(Token = "0x40014B3")]
		[FieldOffset(Offset = "0x0")]
		private static readonly ProfilerMarker k_GenerateEntriesMarker;

		[Token(Token = "0x40014B4")]
		[FieldOffset(Offset = "0x8")]
		private static readonly ProfilerMarker k_ConvertEntriesToCommandsMarker;

		[Token(Token = "0x40014B5")]
		[FieldOffset(Offset = "0x10")]
		private static readonly ProfilerMarker k_UpdateOpacityIdMarker;

		[Token(Token = "0x40014B6")]
		[FieldOffset(Offset = "0x10")]
		private RenderTreeManager m_RenderTreeManager;

		[Token(Token = "0x40014B7")]
		[FieldOffset(Offset = "0x18")]
		private MeshGenerationContext m_MeshGenerationContext;

		[Token(Token = "0x40014B8")]
		[FieldOffset(Offset = "0x20")]
		private BaseElementBuilder m_ElementBuilder;

		[Token(Token = "0x40014B9")]
		[FieldOffset(Offset = "0x28")]
		private List<EntryProcessingInfo> m_EntryProcessingList;

		[Token(Token = "0x40014BA")]
		[FieldOffset(Offset = "0x30")]
		private List<EntryProcessor> m_Processors;

		[Token(Token = "0x17000A92")]
		public BaseElementBuilder elementBuilder
		{
			[Token(Token = "0x6002ABE")]
			[Address(RVA = "0x6BA8670", Offset = "0x6BA7670", VA = "0x6BA8670")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A93")]
		public MeshGenerationContext meshGenerationContext
		{
			[Token(Token = "0x6002ABF")]
			[Address(RVA = "0x6BA8680", Offset = "0x6BA7680", VA = "0x6BA8680")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A94")]
		protected bool disposed
		{
			[Token(Token = "0x6002AC8")]
			[Address(RVA = "0x6BA97A0", Offset = "0x6BA87A0", VA = "0x6BA97A0")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6002AC9")]
			[Address(RVA = "0x6BA97B0", Offset = "0x6BA87B0", VA = "0x6BA97B0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x6002AC0")]
		[Address(RVA = "0x6BA8690", Offset = "0x6BA7690", VA = "0x6BA8690")]
		public VisualChangesProcessor(RenderTreeManager renderTreeManager)
		{
		}

		[Token(Token = "0x6002AC1")]
		[Address(RVA = "0x6BA8850", Offset = "0x6BA7850", VA = "0x6BA8850")]
		public void ScheduleMeshGenerationJobs()
		{
		}

		[Token(Token = "0x6002AC2")]
		[Address(RVA = "0x6BA8880", Offset = "0x6BA7880", VA = "0x6BA8880")]
		public void ProcessOnVisualsChanged(RenderData renderData, uint dirtyID, ref ChainBuilderStats stats)
		{
		}

		[Token(Token = "0x6002AC3")]
		[Address(RVA = "0x6BA88C0", Offset = "0x6BA78C0", VA = "0x6BA88C0")]
		private void DepthFirstOnVisualsChanged(RenderData renderData, uint dirtyID, bool hierarchical, ref ChainBuilderStats stats)
		{
		}

		[Token(Token = "0x6002AC4")]
		[Address(RVA = "0x6BA8FF0", Offset = "0x6BA7FF0", VA = "0x6BA8FF0")]
		private static void UpdateWorldFlipsWinding(RenderData renderData)
		{
		}

		[Token(Token = "0x6002AC5")]
		[Address(RVA = "0x6BA9050", Offset = "0x6BA8050", VA = "0x6BA9050")]
		public void ConvertEntriesToCommands(ref ChainBuilderStats stats)
		{
		}

		[Token(Token = "0x6002AC6")]
		[Address(RVA = "0x6BA8E90", Offset = "0x6BA7E90", VA = "0x6BA8E90")]
		public static void UpdateOpacityId(RenderData renderData, RenderTreeManager renderTreeManager)
		{
		}

		[Token(Token = "0x6002AC7")]
		[Address(RVA = "0x6BA9350", Offset = "0x6BA8350", VA = "0x6BA9350")]
		private static void DoUpdateOpacityId(RenderData renderData, RenderTreeManager renderTreeManager, MeshHandle mesh)
		{
		}

		[Token(Token = "0x6002ACA")]
		[Address(RVA = "0x6BA97C0", Offset = "0x6BA87C0", VA = "0x6BA97C0", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6002ACB")]
		[Address(RVA = "0x6BA9860", Offset = "0x6BA8860", VA = "0x6BA9860")]
		protected void Dispose(bool disposing)
		{
		}
	}

	[Token(Token = "0x400148A")]
	[FieldOffset(Offset = "0x10")]
	private RenderTreeCompositor m_Compositor;

	[Token(Token = "0x400148B")]
	[FieldOffset(Offset = "0x18")]
	private VisualChangesProcessor m_VisualChangesProcessor;

	[Token(Token = "0x400148C")]
	[FieldOffset(Offset = "0x20")]
	private LinkedPool<RenderChainCommand> m_CommandPool;

	[Token(Token = "0x400148D")]
	[FieldOffset(Offset = "0x28")]
	private LinkedPool<ExtraRenderData> m_ExtraDataPool;

	[Token(Token = "0x400148E")]
	[FieldOffset(Offset = "0x30")]
	private BasicNodePool<MeshHandle> m_MeshHandleNodePool;

	[Token(Token = "0x400148F")]
	[FieldOffset(Offset = "0x38")]
	private BasicNodePool<GraphicEntry> m_GraphicEntryPool;

	[Token(Token = "0x4001490")]
	[FieldOffset(Offset = "0x40")]
	private Dictionary<RenderData, ExtraRenderData> m_ExtraData;

	[Token(Token = "0x4001491")]
	[FieldOffset(Offset = "0x48")]
	internal List<ElementInsertionData> m_InsertionList;

	[Token(Token = "0x4001492")]
	[FieldOffset(Offset = "0x50")]
	private MeshGenerationDeferrer m_MeshGenerationDeferrer;

	[Token(Token = "0x4001493")]
	[FieldOffset(Offset = "0x58")]
	private Material m_DefaultMat;

	[Token(Token = "0x4001494")]
	[FieldOffset(Offset = "0x60")]
	private bool m_BlockDirtyRegistration;

	[Token(Token = "0x4001495")]
	[FieldOffset(Offset = "0x64")]
	private ChainBuilderStats m_Stats;

	[Token(Token = "0x4001496")]
	[FieldOffset(Offset = "0xC0")]
	private uint m_StatsElementsAdded;

	[Token(Token = "0x4001497")]
	[FieldOffset(Offset = "0xC4")]
	private uint m_StatsElementsRemoved;

	[Token(Token = "0x4001498")]
	[FieldOffset(Offset = "0xC8")]
	private TextureRegistry m_TextureRegistry;

	[Token(Token = "0x400149A")]
	[FieldOffset(Offset = "0xD8")]
	private UnityEngine.Pool.ObjectPool<RenderData> m_RenderDataPool;

	[Token(Token = "0x400149B")]
	[FieldOffset(Offset = "0xE0")]
	private UnityEngine.Pool.ObjectPool<RenderTree> m_RenderTreePool;

	[Token(Token = "0x400149C")]
	[FieldOffset(Offset = "0xE8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CblockDirtyRegistration_003Ek__BackingField;

	[Token(Token = "0x400149E")]
	[FieldOffset(Offset = "0x0")]
	private static EntryPool s_SharedEntryPool;

	[Token(Token = "0x400149F")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker k_MarkerProcess;

	[Token(Token = "0x40014A0")]
	[FieldOffset(Offset = "0x10")]
	private static readonly ProfilerMarker k_MarkerSerialize;

	[Token(Token = "0x40014A2")]
	[FieldOffset(Offset = "0xF8")]
	private RenderTree m_RootRenderTree;

	[Token(Token = "0x40014A9")]
	[FieldOffset(Offset = "0x130")]
	public EntryRecorder entryRecorder;

	[Token(Token = "0x40014AC")]
	[FieldOffset(Offset = "0x148")]
	internal UIRVEShaderInfoAllocator shaderInfoAllocator;

	[Token(Token = "0x17000A7C")]
	internal TextureRegistry textureRegistry
	{
		[Token(Token = "0x6002A74")]
		[Address(RVA = "0x6BA5000", Offset = "0x6BA4000", VA = "0x6BA5000")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A7D")]
	internal VisualChangesProcessor visualChangesProcessor
	{
		[Token(Token = "0x6002A75")]
		[Address(RVA = "0x6BA5010", Offset = "0x6BA4010", VA = "0x6BA5010")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A7E")]
	public OpacityIdAccelerator opacityIdAccelerator
	{
		[Token(Token = "0x6002A76")]
		[Address(RVA = "0x6BA5020", Offset = "0x6BA4020", VA = "0x6BA5020")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002A77")]
		[Address(RVA = "0x6BA5030", Offset = "0x6BA4030", VA = "0x6BA5030")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A7F")]
	public TextureSlotCount textureSlotCount
	{
		[Token(Token = "0x6002A78")]
		[Address(RVA = "0x6BA5050", Offset = "0x6BA4050", VA = "0x6BA5050")]
		[CompilerGenerated]
		get
		{
			return default(TextureSlotCount);
		}
		[Token(Token = "0x6002A79")]
		[Address(RVA = "0x6BA5060", Offset = "0x6BA4060", VA = "0x6BA5060")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A80")]
	protected bool disposed
	{
		[Token(Token = "0x6002A7F")]
		[Address(RVA = "0x6BA5E80", Offset = "0x6BA4E80", VA = "0x6BA5E80")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002A80")]
		[Address(RVA = "0x6BA5E90", Offset = "0x6BA4E90", VA = "0x6BA5E90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A81")]
	internal unsafe ref ChainBuilderStats statsByRef
	{
		[Token(Token = "0x6002A84")]
		[Address(RVA = "0x6BA6470", Offset = "0x6BA5470", VA = "0x6BA6470")]
		get
		{
			return ref *(ChainBuilderStats*)null;
		}
	}

	[Token(Token = "0x17000A82")]
	internal RenderTree rootRenderTree
	{
		[Token(Token = "0x6002A85")]
		[Address(RVA = "0x6B9ABE0", Offset = "0x6B99BE0", VA = "0x6B9ABE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000A83")]
	internal BaseVisualElementPanel panel
	{
		[Token(Token = "0x6002A99")]
		[Address(RVA = "0x6BA7DF0", Offset = "0x6BA6DF0", VA = "0x6BA7DF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002A9A")]
		[Address(RVA = "0x6BA7E00", Offset = "0x6BA6E00", VA = "0x6BA7E00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A84")]
	internal UIRenderDevice device
	{
		[Token(Token = "0x6002A9B")]
		[Address(RVA = "0x6BA7E20", Offset = "0x6BA6E20", VA = "0x6BA7E20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002A9C")]
		[Address(RVA = "0x6BA7E30", Offset = "0x6BA6E30", VA = "0x6BA7E30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A85")]
	public BaseElementBuilder elementBuilder
	{
		[Token(Token = "0x6002A9D")]
		[Address(RVA = "0x6B9E5E0", Offset = "0x6B9D5E0", VA = "0x6B9E5E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A86")]
	internal AtlasBase atlas
	{
		[Token(Token = "0x6002A9E")]
		[Address(RVA = "0x6BA7E50", Offset = "0x6BA6E50", VA = "0x6BA7E50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002A9F")]
		[Address(RVA = "0x6BA7E60", Offset = "0x6BA6E60", VA = "0x6BA7E60")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A87")]
	internal VectorImageManager vectorImageManager
	{
		[Token(Token = "0x6002AA0")]
		[Address(RVA = "0x6BA7E80", Offset = "0x6BA6E80", VA = "0x6BA7E80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002AA1")]
		[Address(RVA = "0x6BA7E90", Offset = "0x6BA6E90", VA = "0x6BA7E90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A88")]
	internal TempMeshAllocatorImpl tempMeshAllocator
	{
		[Token(Token = "0x6002AA2")]
		[Address(RVA = "0x6BA7EB0", Offset = "0x6BA6EB0", VA = "0x6BA7EB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002AA3")]
		[Address(RVA = "0x6BA7EC0", Offset = "0x6BA6EC0", VA = "0x6BA7EC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A89")]
	internal MeshWriteDataPool meshWriteDataPool
	{
		[Token(Token = "0x6002AA4")]
		[Address(RVA = "0x6BA7EE0", Offset = "0x6BA6EE0", VA = "0x6BA7EE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A8A")]
	internal EntryPool entryPool
	{
		[Token(Token = "0x6002AA5")]
		[Address(RVA = "0x6BA7EF0", Offset = "0x6BA6EF0", VA = "0x6BA7EF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A8B")]
	public MeshGenerationDeferrer meshGenerationDeferrer
	{
		[Token(Token = "0x6002AA6")]
		[Address(RVA = "0x6BA7F60", Offset = "0x6BA6F60", VA = "0x6BA7F60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A8C")]
	public MeshGenerationNodeManager meshGenerationNodeManager
	{
		[Token(Token = "0x6002AA7")]
		[Address(RVA = "0x6BA7F70", Offset = "0x6BA6F70", VA = "0x6BA7F70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002AA8")]
		[Address(RVA = "0x6BA7F80", Offset = "0x6BA6F80", VA = "0x6BA7F80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A8D")]
	internal JobManager jobManager
	{
		[Token(Token = "0x6002AA9")]
		[Address(RVA = "0x6BA7FA0", Offset = "0x6BA6FA0", VA = "0x6BA7FA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002AAA")]
		[Address(RVA = "0x6BA7FB0", Offset = "0x6BA6FB0", VA = "0x6BA7FB0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A8E")]
	internal bool drawStats
	{
		[Token(Token = "0x6002AAB")]
		[Address(RVA = "0x6BA7FD0", Offset = "0x6BA6FD0", VA = "0x6BA7FD0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002AAC")]
		[Address(RVA = "0x6BA7FE0", Offset = "0x6BA6FE0", VA = "0x6BA7FE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A8F")]
	internal bool drawInCameras
	{
		[Token(Token = "0x6002AAD")]
		[Address(RVA = "0x6BA7FF0", Offset = "0x6BA6FF0", VA = "0x6BA7FF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A90")]
	internal bool isFlat
	{
		[Token(Token = "0x6002AAE")]
		[Address(RVA = "0x6BA8000", Offset = "0x6BA7000", VA = "0x6BA8000")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A91")]
	public bool forceGammaRendering
	{
		[Token(Token = "0x6002AAF")]
		[Address(RVA = "0x6BA8010", Offset = "0x6BA7010", VA = "0x6BA8010")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002A7A")]
	[Address(RVA = "0x6B9AB10", Offset = "0x6B99B10", VA = "0x6B9AB10")]
	internal RenderData GetPooledRenderData()
	{
		return null;
	}

	[Token(Token = "0x6002A7B")]
	[Address(RVA = "0x6B9D280", Offset = "0x6B9C280", VA = "0x6B9D280")]
	internal void ReturnPoolRenderData(RenderData data)
	{
	}

	[Token(Token = "0x6002A7C")]
	[Address(RVA = "0x6B9AB70", Offset = "0x6B99B70", VA = "0x6B9AB70")]
	internal RenderTree GetPooledRenderTree(RenderTreeManager renderTreeManager, RenderData rootRenderData)
	{
		return null;
	}

	[Token(Token = "0x6002A7D")]
	[Address(RVA = "0x6B9CCA0", Offset = "0x6B9BCA0", VA = "0x6B9CCA0")]
	internal void ReturnPoolRenderTree(RenderTree tree)
	{
	}

	[Token(Token = "0x6002A7E")]
	[Address(RVA = "0x6BA5070", Offset = "0x6BA4070", VA = "0x6BA5070")]
	public RenderTreeManager(BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6002A81")]
	[Address(RVA = "0x6BA5EA0", Offset = "0x6BA4EA0", VA = "0x6BA5EA0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002A82")]
	[Address(RVA = "0x6BA5F00", Offset = "0x6BA4F00", VA = "0x6BA5F00")]
	protected void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002A83")]
	[Address(RVA = "0x6BA63E0", Offset = "0x6BA53E0", VA = "0x6BA63E0")]
	private static void ReverseDepthFirstDisposeRenderTrees(RenderTree renderTree)
	{
	}

	[Token(Token = "0x6002A86")]
	[Address(RVA = "0x6BA6480", Offset = "0x6BA5480", VA = "0x6BA6480")]
	private void DepthFirstProcessChanges(RenderTree renderTree)
	{
	}

	[Token(Token = "0x6002A87")]
	[Address(RVA = "0x6BA64E0", Offset = "0x6BA54E0", VA = "0x6BA64E0")]
	public void ProcessChanges()
	{
	}

	[Token(Token = "0x6002A88")]
	[Address(RVA = "0x6BA69E0", Offset = "0x6BA59E0", VA = "0x6BA69E0")]
	private void SerializeRootTreeCommands()
	{
	}

	[Token(Token = "0x6002A89")]
	[Address(RVA = "0x6BA6C30", Offset = "0x6BA5C30", VA = "0x6BA6C30")]
	public void RenderRootTree()
	{
	}

	[Token(Token = "0x6002A8A")]
	[Address(RVA = "0x6BA69C0", Offset = "0x6BA59C0", VA = "0x6BA69C0")]
	private void RenderNestedTrees()
	{
	}

	[Token(Token = "0x6002A8B")]
	[Address(RVA = "0x6BA4030", Offset = "0x6BA3030", VA = "0x6BA4030")]
	public void RenderSingleTree(RenderTree renderTree, RenderTexture nestedTreeRT, RectInt nestedTreeViewport, Rect bounds)
	{
	}

	[Token(Token = "0x6002A8C")]
	[Address(RVA = "0x6B9AA00", Offset = "0x6B99A00", VA = "0x6B9AA00")]
	public void CancelInsertion(VisualElement ve)
	{
	}

	[Token(Token = "0x6002A8D")]
	[Address(RVA = "0x6BA7830", Offset = "0x6BA6830", VA = "0x6BA7830")]
	public void UIEOnChildAdded(VisualElement ve)
	{
	}

	[Token(Token = "0x6002A8E")]
	[Address(RVA = "0x6BA67E0", Offset = "0x6BA57E0", VA = "0x6BA67E0")]
	private void ProcessChildAdded(VisualElement ve)
	{
	}

	[Token(Token = "0x6002A8F")]
	[Address(RVA = "0x6BA7930", Offset = "0x6BA6930", VA = "0x6BA7930")]
	public void UIEOnChildrenReordered(VisualElement ve)
	{
	}

	[Token(Token = "0x6002A90")]
	[Address(RVA = "0x6BA7AC0", Offset = "0x6BA6AC0", VA = "0x6BA7AC0")]
	public void UIEOnChildRemoving(VisualElement ve)
	{
	}

	[Token(Token = "0x6002A91")]
	[Address(RVA = "0x6BA7BB0", Offset = "0x6BA6BB0", VA = "0x6BA7BB0")]
	public void UIEOnRenderHintsChanged(VisualElement ve)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002A92")]
	[Address(RVA = "0x6BA7C80", Offset = "0x6BA6C80", VA = "0x6BA7C80")]
	private void RegisterDirty(VisualElement ve, RenderDataDirtyTypes dirtyTypes, RenderDataDirtyTypeClasses dirtyClasses)
	{
	}

	[Token(Token = "0x6002A93")]
	[Address(RVA = "0x6B9ADA0", Offset = "0x6B99DA0", VA = "0x6B9ADA0")]
	public void UIEOnClippingChanged(VisualElement ve, bool hierarchical)
	{
	}

	[Token(Token = "0x6002A94")]
	[Address(RVA = "0x6B9ADC0", Offset = "0x6B99DC0", VA = "0x6B9ADC0")]
	public void UIEOnOpacityChanged(VisualElement ve, bool hierarchical = false)
	{
	}

	[Token(Token = "0x6002A95")]
	[Address(RVA = "0x6BA7D30", Offset = "0x6BA6D30", VA = "0x6BA7D30")]
	public void UIEOnColorChanged(VisualElement ve)
	{
	}

	[Token(Token = "0x6002A96")]
	[Address(RVA = "0x6BA7920", Offset = "0x6BA6920", VA = "0x6BA7920")]
	public void UIEOnTransformOrSizeChanged(VisualElement ve, bool transformChanged, bool clipRectSizeChanged)
	{
	}

	[Token(Token = "0x6002A97")]
	[Address(RVA = "0x6B9ADF0", Offset = "0x6B99DF0", VA = "0x6B9ADF0")]
	public void UIEOnVisualsChanged(VisualElement ve, bool hierarchical)
	{
	}

	[Token(Token = "0x6002A98")]
	[Address(RVA = "0x6BA7D50", Offset = "0x6BA6D50", VA = "0x6BA7D50")]
	public void UIEOnDisableRenderingChanged(VisualElement ve)
	{
	}

	[Token(Token = "0x6002AB0")]
	[Address(RVA = "0x6BA8020", Offset = "0x6BA7020", VA = "0x6BA8020")]
	internal RenderChainCommand AllocCommand()
	{
		return null;
	}

	[Token(Token = "0x6002AB1")]
	[Address(RVA = "0x6BA8060", Offset = "0x6BA7060", VA = "0x6BA8060")]
	internal void FreeCommand(RenderChainCommand cmd)
	{
	}

	[Token(Token = "0x6002AB2")]
	[Address(RVA = "0x6BA80C0", Offset = "0x6BA70C0", VA = "0x6BA80C0")]
	internal void RepaintTexturedElements()
	{
	}

	[Token(Token = "0x6002AB3")]
	[Address(RVA = "0x6BA80E0", Offset = "0x6BA70E0", VA = "0x6BA80E0")]
	private void DepthFirstRepaintTextured(RenderTree renderTree)
	{
	}

	[Token(Token = "0x6002AB4")]
	[Address(RVA = "0x6BA8140", Offset = "0x6BA7140", VA = "0x6BA8140")]
	private void DepthFirstRepaintTextured(RenderData renderData)
	{
	}

	[Token(Token = "0x6002AB5")]
	[Address(RVA = "0x6B9E520", Offset = "0x6B9D520", VA = "0x6B9E520")]
	public ExtraRenderData GetOrAddExtraData(RenderData renderData)
	{
		return null;
	}

	[Token(Token = "0x6002AB6")]
	[Address(RVA = "0x6B9D1A0", Offset = "0x6B9C1A0", VA = "0x6B9D1A0")]
	public void FreeExtraData(RenderData renderData)
	{
	}

	[Token(Token = "0x6002AB7")]
	[Address(RVA = "0x6BA81B0", Offset = "0x6BA71B0", VA = "0x6BA81B0")]
	public void InsertExtraMesh(RenderData renderData, MeshHandle mesh)
	{
	}

	[Token(Token = "0x6002AB8")]
	[Address(RVA = "0x6B9D080", Offset = "0x6B9C080", VA = "0x6B9D080")]
	public void FreeExtraMeshes(RenderData renderData)
	{
	}

	[Token(Token = "0x6002AB9")]
	[Address(RVA = "0x6BA8270", Offset = "0x6BA7270", VA = "0x6BA8270")]
	public void InsertTexture(RenderData renderData, Texture src, TextureId id, bool isAtlas)
	{
	}

	[Token(Token = "0x6002ABA")]
	[Address(RVA = "0x6BA8320", Offset = "0x6BA7320", VA = "0x6BA8320")]
	public void InsertVectorImage(RenderData renderData, VectorImage vi)
	{
	}

	[Token(Token = "0x6002ABB")]
	[Address(RVA = "0x6B9CD80", Offset = "0x6B9BD80", VA = "0x6B9CD80")]
	public void ResetGraphicEntries(RenderData renderData)
	{
	}

	[Token(Token = "0x6002ABC")]
	[Address(RVA = "0x6BA6E60", Offset = "0x6BA5E60", VA = "0x6BA6E60")]
	private void DrawStats()
	{
	}
}
