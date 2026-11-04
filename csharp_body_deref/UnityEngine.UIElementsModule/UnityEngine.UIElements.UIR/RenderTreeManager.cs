// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.RenderTreeManager
// Update status: NEW in this game update
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

[Token(Token = "0x20005CA")]
internal class RenderTreeManager : IDisposable
{
	[Token(Token = "0x20005CB")]
	internal struct ElementInsertionData
	{
		[Token(Token = "0x400156F")]
		[FieldOffset(Offset = "0x0")]
		public VisualElement element;

		[Token(Token = "0x4001570")]
		[FieldOffset(Offset = "0x8")]
		public bool canceled;
	}

	[Token(Token = "0x20005CC")]
	internal class VisualChangesProcessor : IDisposable
	{
		[Token(Token = "0x20005CD")]
		private enum VisualsProcessingType
		{
			[Token(Token = "0x400157B")]
			Head,
			[Token(Token = "0x400157C")]
			Tail
		}

		[Token(Token = "0x20005CE")]
		private struct EntryProcessingInfo
		{
			[Token(Token = "0x400157D")]
			[FieldOffset(Offset = "0x0")]
			public RenderData renderData;

			[Token(Token = "0x400157E")]
			[FieldOffset(Offset = "0x8")]
			public VisualsProcessingType type;

			[Token(Token = "0x400157F")]
			[FieldOffset(Offset = "0x10")]
			public Entry rootEntry;
		}

		[Token(Token = "0x4001571")]
		[FieldOffset(Offset = "0x0")]
		private static readonly ProfilerMarker k_GenerateEntriesMarker;

		[Token(Token = "0x4001572")]
		[FieldOffset(Offset = "0x8")]
		private static readonly ProfilerMarker k_ConvertEntriesToCommandsMarker;

		[Token(Token = "0x4001573")]
		[FieldOffset(Offset = "0x10")]
		private static readonly ProfilerMarker k_UpdateOpacityIdMarker;

		[Token(Token = "0x4001574")]
		[FieldOffset(Offset = "0x10")]
		private RenderTreeManager m_RenderTreeManager;

		[Token(Token = "0x4001575")]
		[FieldOffset(Offset = "0x18")]
		private MeshGenerationContext m_MeshGenerationContext;

		[Token(Token = "0x4001576")]
		[FieldOffset(Offset = "0x20")]
		private BaseElementBuilder m_ElementBuilder;

		[Token(Token = "0x4001577")]
		[FieldOffset(Offset = "0x28")]
		private List<EntryProcessingInfo> m_EntryProcessingList;

		[Token(Token = "0x4001578")]
		[FieldOffset(Offset = "0x30")]
		private List<EntryProcessor> m_Processors;

		[Token(Token = "0x17000A9E")]
		public BaseElementBuilder elementBuilder
		{
			[Token(Token = "0x6002B1F")]
			[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A9F")]
		public MeshGenerationContext meshGenerationContext
		{
			[Token(Token = "0x6002B20")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000AA0")]
		protected bool disposed
		{
			[Token(Token = "0x6002B29")]
			[Address(RVA = "0xF1D190", Offset = "0xF1B790", VA = "0x180F1D190")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6002B2A")]
			[Address(RVA = "0xF1D640", Offset = "0xF1BC40", VA = "0x180F1D640")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x6002B21")]
		[Address(RVA = "0x31B8340", Offset = "0x31B6940", VA = "0x1831B8340")]
		public VisualChangesProcessor(RenderTreeManager renderTreeManager)
		{
		}

		[Token(Token = "0x6002B22")]
		[Address(RVA = "0x31B80C0", Offset = "0x31B66C0", VA = "0x1831B80C0")]
		public void ScheduleMeshGenerationJobs()
		{
		}

		[Token(Token = "0x6002B23")]
		[Address(RVA = "0x31B8070", Offset = "0x31B6670", VA = "0x1831B8070")]
		public void ProcessOnVisualsChanged(RenderData renderData, uint dirtyID, ref ChainBuilderStats stats)
		{
		}

		[Token(Token = "0x6002B24")]
		[Address(RVA = "0x31B7780", Offset = "0x31B5D80", VA = "0x1831B7780")]
		private void DepthFirstOnVisualsChanged(RenderData renderData, uint dirtyID, bool hierarchical, ref ChainBuilderStats stats)
		{
		}

		[Token(Token = "0x6002B25")]
		[Address(RVA = "0x31B8220", Offset = "0x31B6820", VA = "0x1831B8220")]
		private static void UpdateWorldFlipsWinding(RenderData renderData)
		{
		}

		[Token(Token = "0x6002B26")]
		[Address(RVA = "0x31B74F0", Offset = "0x31B5AF0", VA = "0x1831B74F0")]
		public void ConvertEntriesToCommands(ref ChainBuilderStats stats)
		{
		}

		[Token(Token = "0x6002B27")]
		[Address(RVA = "0x31B80F0", Offset = "0x31B66F0", VA = "0x1831B80F0")]
		public static void UpdateOpacityId(RenderData renderData, RenderTreeManager renderTreeManager)
		{
		}

		[Token(Token = "0x6002B28")]
		[Address(RVA = "0x31B7E20", Offset = "0x31B6420", VA = "0x1831B7E20")]
		private static void DoUpdateOpacityId(RenderData renderData, RenderTreeManager renderTreeManager, MeshHandle mesh)
		{
		}

		[Token(Token = "0x6002B2B")]
		[Address(RVA = "0x31B7D50", Offset = "0x31B6350", VA = "0x1831B7D50", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6002B2C")]
		[Address(RVA = "0x31B7DD0", Offset = "0x31B63D0", VA = "0x1831B7DD0")]
		protected void Dispose(bool disposing)
		{
		}
	}

	[Token(Token = "0x4001548")]
	[FieldOffset(Offset = "0x10")]
	private RenderTreeCompositor m_Compositor;

	[Token(Token = "0x4001549")]
	[FieldOffset(Offset = "0x18")]
	private VisualChangesProcessor m_VisualChangesProcessor;

	[Token(Token = "0x400154A")]
	[FieldOffset(Offset = "0x20")]
	private LinkedPool<RenderChainCommand> m_CommandPool;

	[Token(Token = "0x400154B")]
	[FieldOffset(Offset = "0x28")]
	private LinkedPool<ExtraRenderData> m_ExtraDataPool;

	[Token(Token = "0x400154C")]
	[FieldOffset(Offset = "0x30")]
	private BasicNodePool<MeshHandle> m_MeshHandleNodePool;

	[Token(Token = "0x400154D")]
	[FieldOffset(Offset = "0x38")]
	private BasicNodePool<GraphicEntry> m_GraphicEntryPool;

	[Token(Token = "0x400154E")]
	[FieldOffset(Offset = "0x40")]
	private Dictionary<RenderData, ExtraRenderData> m_ExtraData;

	[Token(Token = "0x400154F")]
	[FieldOffset(Offset = "0x48")]
	internal List<ElementInsertionData> m_InsertionList;

	[Token(Token = "0x4001550")]
	[FieldOffset(Offset = "0x50")]
	private MeshGenerationDeferrer m_MeshGenerationDeferrer;

	[Token(Token = "0x4001551")]
	[FieldOffset(Offset = "0x58")]
	private Material m_DefaultMat;

	[Token(Token = "0x4001552")]
	[FieldOffset(Offset = "0x60")]
	private bool m_BlockDirtyRegistration;

	[Token(Token = "0x4001553")]
	[FieldOffset(Offset = "0x64")]
	private ChainBuilderStats m_Stats;

	[Token(Token = "0x4001554")]
	[FieldOffset(Offset = "0xC0")]
	private uint m_StatsElementsAdded;

	[Token(Token = "0x4001555")]
	[FieldOffset(Offset = "0xC4")]
	private uint m_StatsElementsRemoved;

	[Token(Token = "0x4001556")]
	[FieldOffset(Offset = "0xC8")]
	private TextureRegistry m_TextureRegistry;

	[Token(Token = "0x4001558")]
	[FieldOffset(Offset = "0xD8")]
	private UnityEngine.Pool.ObjectPool<RenderData> m_RenderDataPool;

	[Token(Token = "0x4001559")]
	[FieldOffset(Offset = "0xE0")]
	private UnityEngine.Pool.ObjectPool<RenderTree> m_RenderTreePool;

	[Token(Token = "0x400155A")]
	[FieldOffset(Offset = "0xE8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private bool _003CblockDirtyRegistration_003Ek__BackingField;

	[Token(Token = "0x400155C")]
	[FieldOffset(Offset = "0x0")]
	private static EntryPool s_SharedEntryPool;

	[Token(Token = "0x400155D")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker k_MarkerProcess;

	[Token(Token = "0x400155E")]
	[FieldOffset(Offset = "0x10")]
	private static readonly ProfilerMarker k_MarkerSerialize;

	[Token(Token = "0x4001560")]
	[FieldOffset(Offset = "0xF8")]
	private RenderTree m_RootRenderTree;

	[Token(Token = "0x4001567")]
	[FieldOffset(Offset = "0x130")]
	public EntryRecorder entryRecorder;

	[Token(Token = "0x400156A")]
	[FieldOffset(Offset = "0x148")]
	internal UIRVEShaderInfoAllocator shaderInfoAllocator;

	[Token(Token = "0x17000A88")]
	internal TextureRegistry textureRegistry
	{
		[Token(Token = "0x6002AD5")]
		[Address(RVA = "0x187BC00", Offset = "0x187A200", VA = "0x18187BC00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A89")]
	internal VisualChangesProcessor visualChangesProcessor
	{
		[Token(Token = "0x6002AD6")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A8A")]
	public OpacityIdAccelerator opacityIdAccelerator
	{
		[Token(Token = "0x6002AD7")]
		[Address(RVA = "0x187BC40", Offset = "0x187A240", VA = "0x18187BC40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002AD8")]
		[Address(RVA = "0x1BE7800", Offset = "0x1BE5E00", VA = "0x181BE7800")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A8B")]
	public TextureSlotCount textureSlotCount
	{
		[Token(Token = "0x6002AD9")]
		[Address(RVA = "0x31AEC80", Offset = "0x31AD280", VA = "0x1831AEC80")]
		[CompilerGenerated]
		get
		{
			return default(TextureSlotCount);
		}
		[Token(Token = "0x6002ADA")]
		[Address(RVA = "0x31AED20", Offset = "0x31AD320", VA = "0x1831AED20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A8C")]
	protected bool disposed
	{
		[Token(Token = "0x6002AE0")]
		[Address(RVA = "0x1C3F930", Offset = "0x1C3DF30", VA = "0x181C3F930")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002AE1")]
		[Address(RVA = "0x2C12990", Offset = "0x2C10F90", VA = "0x182C12990")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A8D")]
	internal unsafe ref ChainBuilderStats statsByRef
	{
		[Token(Token = "0x6002AE5")]
		[Address(RVA = "0x31AEC70", Offset = "0x31AD270", VA = "0x1831AEC70")]
		get
		{
			return ref *(ChainBuilderStats*)null;
		}
	}

	[Token(Token = "0x17000A8E")]
	internal RenderTree rootRenderTree
	{
		[Token(Token = "0x6002AE6")]
		[Address(RVA = "0x31AECA0", Offset = "0x31AD2A0", VA = "0x1831AECA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000A8F")]
	internal BaseVisualElementPanel panel
	{
		[Token(Token = "0x6002AFA")]
		[Address(RVA = "0x187BC70", Offset = "0x187A270", VA = "0x18187BC70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002AFB")]
		[Address(RVA = "0x1BD5920", Offset = "0x1BD3F20", VA = "0x181BD5920")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A90")]
	internal UIRenderDevice device
	{
		[Token(Token = "0x6002AFC")]
		[Address(RVA = "0x1BD4C80", Offset = "0x1BD3280", VA = "0x181BD4C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002AFD")]
		[Address(RVA = "0x1BD5400", Offset = "0x1BD3A00", VA = "0x181BD5400")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A91")]
	public BaseElementBuilder elementBuilder
	{
		[Token(Token = "0x6002AFE")]
		[Address(RVA = "0x1CB0C00", Offset = "0x1CAF200", VA = "0x181CB0C00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A92")]
	internal AtlasBase atlas
	{
		[Token(Token = "0x6002AFF")]
		[Address(RVA = "0x1C41CF0", Offset = "0x1C402F0", VA = "0x181C41CF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002B00")]
		[Address(RVA = "0x1C41E00", Offset = "0x1C40400", VA = "0x181C41E00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A93")]
	internal VectorImageManager vectorImageManager
	{
		[Token(Token = "0x6002B01")]
		[Address(RVA = "0x1C54FF0", Offset = "0x1C535F0", VA = "0x181C54FF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002B02")]
		[Address(RVA = "0x1C61340", Offset = "0x1C5F940", VA = "0x181C61340")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A94")]
	internal TempMeshAllocatorImpl tempMeshAllocator
	{
		[Token(Token = "0x6002B03")]
		[Address(RVA = "0xA2F260", Offset = "0xA2D860", VA = "0x180A2F260")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002B04")]
		[Address(RVA = "0x2CF3F20", Offset = "0x2CF2520", VA = "0x182CF3F20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A95")]
	internal MeshWriteDataPool meshWriteDataPool
	{
		[Token(Token = "0x6002B05")]
		[Address(RVA = "0x2CE6A00", Offset = "0x2CE5000", VA = "0x182CE6A00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A96")]
	internal EntryPool entryPool
	{
		[Token(Token = "0x6002B06")]
		[Address(RVA = "0x31AEC00", Offset = "0x31AD200", VA = "0x1831AEC00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A97")]
	public MeshGenerationDeferrer meshGenerationDeferrer
	{
		[Token(Token = "0x6002B07")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A98")]
	public MeshGenerationNodeManager meshGenerationNodeManager
	{
		[Token(Token = "0x6002B08")]
		[Address(RVA = "0xA29AC0", Offset = "0xA280C0", VA = "0x180A29AC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002B09")]
		[Address(RVA = "0x306D1A0", Offset = "0x306B7A0", VA = "0x18306D1A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A99")]
	internal JobManager jobManager
	{
		[Token(Token = "0x6002B0A")]
		[Address(RVA = "0x1D1FA50", Offset = "0x1D1E050", VA = "0x181D1FA50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002B0B")]
		[Address(RVA = "0x1D1FE00", Offset = "0x1D1E400", VA = "0x181D1FE00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A9A")]
	internal bool drawStats
	{
		[Token(Token = "0x6002B0C")]
		[Address(RVA = "0x31AEBF0", Offset = "0x31AD1F0", VA = "0x1831AEBF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002B0D")]
		[Address(RVA = "0x31AEC90", Offset = "0x31AD290", VA = "0x1831AEC90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A9B")]
	internal bool drawInCameras
	{
		[Token(Token = "0x6002B0E")]
		[Address(RVA = "0x31AEBE0", Offset = "0x31AD1E0", VA = "0x1831AEBE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A9C")]
	internal bool isFlat
	{
		[Token(Token = "0x6002B0F")]
		[Address(RVA = "0x31AEC60", Offset = "0x31AD260", VA = "0x1831AEC60")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A9D")]
	public bool forceGammaRendering
	{
		[Token(Token = "0x6002B10")]
		[Address(RVA = "0x31AEC50", Offset = "0x31AD250", VA = "0x1831AEC50")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002ADB")]
	[Address(RVA = "0x31AB690", Offset = "0x31A9C90", VA = "0x1831AB690")]
	internal RenderData GetPooledRenderData()
	{
		return null;
	}

	[Token(Token = "0x6002ADC")]
	[Address(RVA = "0x31ACD40", Offset = "0x31AB340", VA = "0x1831ACD40")]
	internal void ReturnPoolRenderData(RenderData data)
	{
	}

	[Token(Token = "0x6002ADD")]
	[Address(RVA = "0x31AB6F0", Offset = "0x31A9CF0", VA = "0x1831AB6F0")]
	internal RenderTree GetPooledRenderTree(RenderTreeManager renderTreeManager, RenderData rootRenderData)
	{
		return null;
	}

	[Token(Token = "0x6002ADE")]
	[Address(RVA = "0x31ACDB0", Offset = "0x31AB3B0", VA = "0x1831ACDB0")]
	internal void ReturnPoolRenderTree(RenderTree tree)
	{
	}

	[Token(Token = "0x6002ADF")]
	[Address(RVA = "0x31AD990", Offset = "0x31ABF90", VA = "0x1831AD990")]
	public RenderTreeManager(BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6002AE2")]
	[Address(RVA = "0x31AA0C0", Offset = "0x31A86C0", VA = "0x1831AA0C0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002AE3")]
	[Address(RVA = "0x31AA120", Offset = "0x31A8720", VA = "0x1831AA120")]
	protected void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002AE4")]
	[Address(RVA = "0x31ACE80", Offset = "0x31AB480", VA = "0x1831ACE80")]
	private static void ReverseDepthFirstDisposeRenderTrees(RenderTree renderTree)
	{
	}

	[Token(Token = "0x6002AE7")]
	[Address(RVA = "0x31A9F20", Offset = "0x31A8520", VA = "0x1831A9F20")]
	private void DepthFirstProcessChanges(RenderTree renderTree)
	{
	}

	[Token(Token = "0x6002AE8")]
	[Address(RVA = "0x31AB9C0", Offset = "0x31A9FC0", VA = "0x1831AB9C0")]
	public void ProcessChanges()
	{
	}

	[Token(Token = "0x6002AE9")]
	[Address(RVA = "0x31ACF20", Offset = "0x31AB520", VA = "0x1831ACF20")]
	private void SerializeRootTreeCommands()
	{
	}

	[Token(Token = "0x6002AEA")]
	[Address(RVA = "0x31AC230", Offset = "0x31AA830", VA = "0x1831AC230")]
	public void RenderRootTree()
	{
	}

	[Token(Token = "0x6002AEB")]
	[Address(RVA = "0x31AC200", Offset = "0x31AA800", VA = "0x1831AC200")]
	private void RenderNestedTrees()
	{
	}

	[Token(Token = "0x6002AEC")]
	[Address(RVA = "0x31AC430", Offset = "0x31AAA30", VA = "0x1831AC430")]
	public void RenderSingleTree(RenderTree renderTree, RenderTexture nestedTreeRT, RectInt nestedTreeViewport, Rect bounds)
	{
	}

	[Token(Token = "0x6002AED")]
	[Address(RVA = "0x31A9DF0", Offset = "0x31A83F0", VA = "0x1831A9DF0")]
	public void CancelInsertion(VisualElement ve)
	{
	}

	[Token(Token = "0x6002AEE")]
	[Address(RVA = "0x31AD160", Offset = "0x31AB760", VA = "0x1831AD160")]
	public void UIEOnChildAdded(VisualElement ve)
	{
	}

	[Token(Token = "0x6002AEF")]
	[Address(RVA = "0x31AC000", Offset = "0x31AA600", VA = "0x1831AC000")]
	private void ProcessChildAdded(VisualElement ve)
	{
	}

	[Token(Token = "0x6002AF0")]
	[Address(RVA = "0x31AD370", Offset = "0x31AB970", VA = "0x1831AD370")]
	public void UIEOnChildrenReordered(VisualElement ve)
	{
	}

	[Token(Token = "0x6002AF1")]
	[Address(RVA = "0x31AD270", Offset = "0x31AB870", VA = "0x1831AD270")]
	public void UIEOnChildRemoving(VisualElement ve)
	{
	}

	[Token(Token = "0x6002AF2")]
	[Address(RVA = "0x31AD670", Offset = "0x31ABC70", VA = "0x1831AD670")]
	public void UIEOnRenderHintsChanged(VisualElement ve)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002AF3")]
	[Address(RVA = "0x31A1F30", Offset = "0x31A0530", VA = "0x1831A1F30")]
	private void RegisterDirty(VisualElement ve, RenderDataDirtyTypes dirtyTypes, RenderDataDirtyTypeClasses dirtyClasses)
	{
	}

	[Token(Token = "0x6002AF4")]
	[Address(RVA = "0x31AD520", Offset = "0x31ABB20", VA = "0x1831AD520")]
	public void UIEOnClippingChanged(VisualElement ve, bool hierarchical)
	{
	}

	[Token(Token = "0x6002AF5")]
	[Address(RVA = "0x31AD630", Offset = "0x31ABC30", VA = "0x1831AD630")]
	public void UIEOnOpacityChanged(VisualElement ve, bool hierarchical = false)
	{
	}

	[Token(Token = "0x6002AF6")]
	[Address(RVA = "0x31AD560", Offset = "0x31ABB60", VA = "0x1831AD560")]
	public void UIEOnColorChanged(VisualElement ve)
	{
	}

	[Token(Token = "0x6002AF7")]
	[Address(RVA = "0x31AD830", Offset = "0x31ABE30", VA = "0x1831AD830")]
	public void UIEOnTransformOrSizeChanged(VisualElement ve, bool transformChanged, bool clipRectSizeChanged)
	{
	}

	[Token(Token = "0x6002AF8")]
	[Address(RVA = "0x31AD860", Offset = "0x31ABE60", VA = "0x1831AD860")]
	public void UIEOnVisualsChanged(VisualElement ve, bool hierarchical)
	{
	}

	[Token(Token = "0x6002AF9")]
	[Address(RVA = "0x31AD590", Offset = "0x31ABB90", VA = "0x1831AD590")]
	public void UIEOnDisableRenderingChanged(VisualElement ve)
	{
	}

	[Token(Token = "0x6002B11")]
	[Address(RVA = "0x31A9DA0", Offset = "0x31A83A0", VA = "0x1831A9DA0")]
	internal RenderChainCommand AllocCommand()
	{
		return null;
	}

	[Token(Token = "0x6002B12")]
	[Address(RVA = "0x31AB340", Offset = "0x31A9940", VA = "0x1831AB340")]
	internal void FreeCommand(RenderChainCommand cmd)
	{
	}

	[Token(Token = "0x6002B13")]
	[Address(RVA = "0x31ACAF0", Offset = "0x31AB0F0", VA = "0x1831ACAF0")]
	internal void RepaintTexturedElements()
	{
	}

	[Token(Token = "0x6002B14")]
	[Address(RVA = "0x31AA000", Offset = "0x31A8600", VA = "0x1831AA000")]
	private void DepthFirstRepaintTextured(RenderTree renderTree)
	{
	}

	[Token(Token = "0x6002B15")]
	[Address(RVA = "0x31A9F80", Offset = "0x31A8580", VA = "0x1831A9F80")]
	private void DepthFirstRepaintTextured(RenderData renderData)
	{
	}

	[Token(Token = "0x6002B16")]
	[Address(RVA = "0x31AB5C0", Offset = "0x31A9BC0", VA = "0x1831AB5C0")]
	public ExtraRenderData GetOrAddExtraData(RenderData renderData)
	{
		return null;
	}

	[Token(Token = "0x6002B17")]
	[Address(RVA = "0x31AB3B0", Offset = "0x31A99B0", VA = "0x1831AB3B0")]
	public void FreeExtraData(RenderData renderData)
	{
	}

	[Token(Token = "0x6002B18")]
	[Address(RVA = "0x31AB770", Offset = "0x31A9D70", VA = "0x1831AB770")]
	public void InsertExtraMesh(RenderData renderData, MeshHandle mesh)
	{
	}

	[Token(Token = "0x6002B19")]
	[Address(RVA = "0x31AB4A0", Offset = "0x31A9AA0", VA = "0x1831AB4A0")]
	public void FreeExtraMeshes(RenderData renderData)
	{
	}

	[Token(Token = "0x6002B1A")]
	[Address(RVA = "0x31AB820", Offset = "0x31A9E20", VA = "0x1831AB820")]
	public void InsertTexture(RenderData renderData, Texture src, TextureId id, bool isAtlas)
	{
	}

	[Token(Token = "0x6002B1B")]
	[Address(RVA = "0x31AB8C0", Offset = "0x31A9EC0", VA = "0x1831AB8C0")]
	public void InsertVectorImage(RenderData renderData, VectorImage vi)
	{
	}

	[Token(Token = "0x6002B1C")]
	[Address(RVA = "0x31ACBB0", Offset = "0x31AB1B0", VA = "0x1831ACBB0")]
	public void ResetGraphicEntries(RenderData renderData)
	{
	}

	[Token(Token = "0x6002B1D")]
	[Address(RVA = "0x31AA950", Offset = "0x31A8F50", VA = "0x1831AA950")]
	private void DrawStats()
	{
	}
}
