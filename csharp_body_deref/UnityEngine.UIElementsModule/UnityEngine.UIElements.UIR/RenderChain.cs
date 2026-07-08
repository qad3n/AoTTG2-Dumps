using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004B9")]
internal class RenderChain : IDisposable
{
	[Token(Token = "0x20004BA")]
	private struct DepthOrderedDirtyTracking
	{
		[Token(Token = "0x4000F07")]
		[FieldOffset(Offset = "0x0")]
		public List<VisualElement> heads;

		[Token(Token = "0x4000F08")]
		[FieldOffset(Offset = "0x8")]
		public List<VisualElement> tails;

		[Token(Token = "0x4000F09")]
		[FieldOffset(Offset = "0x10")]
		public int[] minDepths;

		[Token(Token = "0x4000F0A")]
		[FieldOffset(Offset = "0x18")]
		public int[] maxDepths;

		[Token(Token = "0x4000F0B")]
		[FieldOffset(Offset = "0x20")]
		public uint dirtyID;

		[Token(Token = "0x6001D79")]
		[Address(RVA = "0x4C74BE0", Offset = "0x4C74BE0", VA = "0x4C74BE0")]
		public void EnsureFits(int maxDepth)
		{
		}

		[Token(Token = "0x6001D7A")]
		[Address(RVA = "0x4C74D20", Offset = "0x4C74D20", VA = "0x4C74D20")]
		public void RegisterDirty(VisualElement ve, RenderDataDirtyTypes dirtyTypes, RenderDataDirtyTypeClasses dirtyTypeClass)
		{
		}

		[Token(Token = "0x6001D7B")]
		[Address(RVA = "0x4C74F00", Offset = "0x4C74F00", VA = "0x4C74F00")]
		public void ClearDirty(VisualElement ve, RenderDataDirtyTypes dirtyTypesInverse)
		{
		}

		[Token(Token = "0x6001D7C")]
		[Address(RVA = "0x4C75110", Offset = "0x4C75110", VA = "0x4C75110")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x20004BB")]
	private struct RenderChainStaticIndexAllocator
	{
		[Token(Token = "0x4000F0C")]
		[FieldOffset(Offset = "0x0")]
		private static List<RenderChain> renderChains;

		[Token(Token = "0x6001D7D")]
		[Address(RVA = "0x4C75170", Offset = "0x4C75170", VA = "0x4C75170")]
		public static int AllocateIndex(RenderChain renderChain)
		{
			return default(int);
		}

		[Token(Token = "0x6001D7E")]
		[Address(RVA = "0x4C752D0", Offset = "0x4C752D0", VA = "0x4C752D0")]
		public static void FreeIndex(int index)
		{
		}

		[Token(Token = "0x6001D7F")]
		[Address(RVA = "0x4C75370", Offset = "0x4C75370", VA = "0x4C75370")]
		public static RenderChain AccessIndex(int index)
		{
			return null;
		}
	}

	[Token(Token = "0x20004BC")]
	private struct RenderNodeData
	{
		[Token(Token = "0x4000F0D")]
		[FieldOffset(Offset = "0x0")]
		public Material standardMaterial;

		[Token(Token = "0x4000F0E")]
		[FieldOffset(Offset = "0x8")]
		public Material initialMaterial;

		[Token(Token = "0x4000F0F")]
		[FieldOffset(Offset = "0x10")]
		public MaterialPropertyBlock matPropBlock;

		[Token(Token = "0x4000F10")]
		[FieldOffset(Offset = "0x18")]
		public RenderChainCommand firstCommand;

		[Token(Token = "0x4000F11")]
		[FieldOffset(Offset = "0x20")]
		public UIRenderDevice device;

		[Token(Token = "0x4000F12")]
		[FieldOffset(Offset = "0x28")]
		public Texture vectorAtlas;

		[Token(Token = "0x4000F13")]
		[FieldOffset(Offset = "0x30")]
		public Texture shaderInfoAtlas;

		[Token(Token = "0x4000F14")]
		[FieldOffset(Offset = "0x38")]
		public float dpiScale;
	}

	[Token(Token = "0x20004BD")]
	private class VisualChangesProcessor : IDisposable
	{
		[Token(Token = "0x20004BE")]
		private enum VisualsProcessingType
		{
			[Token(Token = "0x4000F1F")]
			Head,
			[Token(Token = "0x4000F20")]
			Tail
		}

		[Token(Token = "0x20004BF")]
		private struct EntryProcessingInfo
		{
			[Token(Token = "0x4000F21")]
			[FieldOffset(Offset = "0x0")]
			public VisualElement visualElement;

			[Token(Token = "0x4000F22")]
			[FieldOffset(Offset = "0x8")]
			public VisualsProcessingType type;

			[Token(Token = "0x4000F23")]
			[FieldOffset(Offset = "0x10")]
			public Entry rootEntry;
		}

		[Token(Token = "0x4000F15")]
		[FieldOffset(Offset = "0x0")]
		private static readonly ProfilerMarker k_GenerateEntriesMarker;

		[Token(Token = "0x4000F16")]
		[FieldOffset(Offset = "0x8")]
		private static readonly ProfilerMarker k_ConvertEntriesToCommandsMarker;

		[Token(Token = "0x4000F17")]
		[FieldOffset(Offset = "0x10")]
		private static readonly ProfilerMarker k_UpdateOpacityIdMarker;

		[Token(Token = "0x4000F18")]
		[FieldOffset(Offset = "0x10")]
		private RenderChain m_RenderChain;

		[Token(Token = "0x4000F19")]
		[FieldOffset(Offset = "0x18")]
		private MeshGenerationContext m_MeshGenerationContext;

		[Token(Token = "0x4000F1A")]
		[FieldOffset(Offset = "0x20")]
		private BaseElementBuilder m_ElementBuilder;

		[Token(Token = "0x4000F1B")]
		[FieldOffset(Offset = "0x28")]
		private List<EntryProcessingInfo> m_EntryProcessingList;

		[Token(Token = "0x4000F1C")]
		[FieldOffset(Offset = "0x30")]
		private List<EntryProcessor> m_Processors;

		[Token(Token = "0x17000783")]
		public BaseElementBuilder elementBuilder
		{
			[Token(Token = "0x6001D81")]
			[Address(RVA = "0x4C754A0", Offset = "0x4C754A0", VA = "0x4C754A0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000784")]
		protected bool disposed
		{
			[Token(Token = "0x6001D89")]
			[Address(RVA = "0x4C77660", Offset = "0x4C77660", VA = "0x4C77660")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6001D8A")]
			[Address(RVA = "0x4C77670", Offset = "0x4C77670", VA = "0x4C77670")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x6001D82")]
		[Address(RVA = "0x4C754B0", Offset = "0x4C754B0", VA = "0x4C754B0")]
		public VisualChangesProcessor(RenderChain renderChain)
		{
		}

		[Token(Token = "0x6001D83")]
		[Address(RVA = "0x4C756D0", Offset = "0x4C756D0", VA = "0x4C756D0")]
		public void ProcessOnVisualsChanged(VisualElement ve, uint dirtyID, ref ChainBuilderStats stats)
		{
		}

		[Token(Token = "0x6001D84")]
		[Address(RVA = "0x4C75710", Offset = "0x4C75710", VA = "0x4C75710")]
		private void DepthFirstOnVisualsChanged(VisualElement ve, uint dirtyID, bool hierarchical, ref ChainBuilderStats stats)
		{
		}

		[Token(Token = "0x6001D85")]
		[Address(RVA = "0x4C75F60", Offset = "0x4C75F60", VA = "0x4C75F60")]
		private static void UpdateWorldFlipsWinding(VisualElement ve)
		{
		}

		[Token(Token = "0x6001D86")]
		[Address(RVA = "0x4C76F20", Offset = "0x4C76F20", VA = "0x4C76F20")]
		public void ConvertEntriesToCommands(ref ChainBuilderStats stats)
		{
		}

		[Token(Token = "0x6001D87")]
		[Address(RVA = "0x4C75E60", Offset = "0x4C75E60", VA = "0x4C75E60")]
		public static void UpdateOpacityId(VisualElement ve, RenderChain renderChain)
		{
		}

		[Token(Token = "0x6001D88")]
		[Address(RVA = "0x4C771F0", Offset = "0x4C771F0", VA = "0x4C771F0")]
		private static void DoUpdateOpacityId(VisualElement ve, RenderChain renderChain, MeshHandle mesh)
		{
		}

		[Token(Token = "0x6001D8B")]
		[Address(RVA = "0x4C77680", Offset = "0x4C77680", VA = "0x4C77680", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6001D8C")]
		[Address(RVA = "0x4C77720", Offset = "0x4C77720", VA = "0x4C77720")]
		protected void Dispose(bool disposing)
		{
		}
	}

	[Token(Token = "0x4000EE1")]
	[FieldOffset(Offset = "0x10")]
	private RenderChainCommand m_FirstCommand;

	[Token(Token = "0x4000EE2")]
	[FieldOffset(Offset = "0x18")]
	private DepthOrderedDirtyTracking m_DirtyTracker;

	[Token(Token = "0x4000EE3")]
	[FieldOffset(Offset = "0x40")]
	private VisualChangesProcessor m_VisualChangesProcessor;

	[Token(Token = "0x4000EE4")]
	[FieldOffset(Offset = "0x48")]
	private LinkedPool<RenderChainCommand> m_CommandPool;

	[Token(Token = "0x4000EE5")]
	[FieldOffset(Offset = "0x50")]
	private BasicNodePool<TextureEntry> m_TexturePool;

	[Token(Token = "0x4000EE6")]
	[FieldOffset(Offset = "0x58")]
	private List<RenderNodeData> m_RenderNodesData;

	[Token(Token = "0x4000EE7")]
	[FieldOffset(Offset = "0x60")]
	private Shader m_DefaultShader;

	[Token(Token = "0x4000EE8")]
	[FieldOffset(Offset = "0x68")]
	private Shader m_DefaultWorldSpaceShader;

	[Token(Token = "0x4000EE9")]
	[FieldOffset(Offset = "0x70")]
	private Material m_DefaultMat;

	[Token(Token = "0x4000EEA")]
	[FieldOffset(Offset = "0x78")]
	private Material m_DefaultWorldSpaceMat;

	[Token(Token = "0x4000EEB")]
	[FieldOffset(Offset = "0x80")]
	private bool m_BlockDirtyRegistration;

	[Token(Token = "0x4000EEC")]
	[FieldOffset(Offset = "0x84")]
	private int m_StaticIndex;

	[Token(Token = "0x4000EED")]
	[FieldOffset(Offset = "0x88")]
	private int m_ActiveRenderNodes;

	[Token(Token = "0x4000EEE")]
	[FieldOffset(Offset = "0x8C")]
	private int m_CustomMaterialCommands;

	[Token(Token = "0x4000EEF")]
	[FieldOffset(Offset = "0x90")]
	private ChainBuilderStats m_Stats;

	[Token(Token = "0x4000EF0")]
	[FieldOffset(Offset = "0xF0")]
	private uint m_StatsElementsAdded;

	[Token(Token = "0x4000EF1")]
	[FieldOffset(Offset = "0xF4")]
	private uint m_StatsElementsRemoved;

	[Token(Token = "0x4000EF2")]
	[FieldOffset(Offset = "0xF8")]
	private TextureRegistry m_TextureRegistry;

	[Token(Token = "0x4000EF4")]
	[FieldOffset(Offset = "0x0")]
	private static EntryPool s_SharedEntryPool;

	[Token(Token = "0x4000EF5")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker k_MarkerProcess;

	[Token(Token = "0x4000EF6")]
	[FieldOffset(Offset = "0x10")]
	private static readonly ProfilerMarker k_MarkerClipProcessing;

	[Token(Token = "0x4000EF7")]
	[FieldOffset(Offset = "0x18")]
	private static readonly ProfilerMarker k_MarkerOpacityProcessing;

	[Token(Token = "0x4000EF8")]
	[FieldOffset(Offset = "0x20")]
	private static readonly ProfilerMarker k_MarkerColorsProcessing;

	[Token(Token = "0x4000EF9")]
	[FieldOffset(Offset = "0x28")]
	private static readonly ProfilerMarker k_MarkerTransformProcessing;

	[Token(Token = "0x4000EFA")]
	[FieldOffset(Offset = "0x30")]
	private static readonly ProfilerMarker k_MarkerVisualsProcessing;

	[Token(Token = "0x4000F04")]
	[FieldOffset(Offset = "0x150")]
	internal UIRVEShaderInfoAllocator shaderInfoAllocator;

	[Token(Token = "0x17000773")]
	public OpacityIdAccelerator opacityIdAccelerator
	{
		[Token(Token = "0x6001D3B")]
		[Address(RVA = "0x4C6DF30", Offset = "0x4C6DF30", VA = "0x4C6DF30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001D3C")]
		[Address(RVA = "0x4C6DF40", Offset = "0x4C6DF40", VA = "0x4C6DF40")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000774")]
	protected bool disposed
	{
		[Token(Token = "0x6001D40")]
		[Address(RVA = "0x4C6ECB0", Offset = "0x4C6ECB0", VA = "0x4C6ECB0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001D41")]
		[Address(RVA = "0x4C6ECC0", Offset = "0x4C6ECC0", VA = "0x4C6ECC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000775")]
	internal BaseVisualElementPanel panel
	{
		[Token(Token = "0x6001D51")]
		[Address(RVA = "0x4C71290", Offset = "0x4C71290", VA = "0x4C71290")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001D52")]
		[Address(RVA = "0x4C712A0", Offset = "0x4C712A0", VA = "0x4C712A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000776")]
	internal UIRenderDevice device
	{
		[Token(Token = "0x6001D53")]
		[Address(RVA = "0x4C712C0", Offset = "0x4C712C0", VA = "0x4C712C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001D54")]
		[Address(RVA = "0x4C712D0", Offset = "0x4C712D0", VA = "0x4C712D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000777")]
	public BaseElementBuilder elementBuilder
	{
		[Token(Token = "0x6001D55")]
		[Address(RVA = "0x4C712F0", Offset = "0x4C712F0", VA = "0x4C712F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000778")]
	internal AtlasBase atlas
	{
		[Token(Token = "0x6001D56")]
		[Address(RVA = "0x4C71310", Offset = "0x4C71310", VA = "0x4C71310")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001D57")]
		[Address(RVA = "0x4C71320", Offset = "0x4C71320", VA = "0x4C71320")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000779")]
	internal VectorImageManager vectorImageManager
	{
		[Token(Token = "0x6001D58")]
		[Address(RVA = "0x4C71340", Offset = "0x4C71340", VA = "0x4C71340")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001D59")]
		[Address(RVA = "0x4C71350", Offset = "0x4C71350", VA = "0x4C71350")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700077A")]
	internal TempAllocator<Vertex> vertexPool
	{
		[Token(Token = "0x6001D5A")]
		[Address(RVA = "0x4C71370", Offset = "0x4C71370", VA = "0x4C71370")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001D5B")]
		[Address(RVA = "0x4C71380", Offset = "0x4C71380", VA = "0x4C71380")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700077B")]
	internal TempAllocator<ushort> indexPool
	{
		[Token(Token = "0x6001D5C")]
		[Address(RVA = "0x4C713A0", Offset = "0x4C713A0", VA = "0x4C713A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001D5D")]
		[Address(RVA = "0x4C713B0", Offset = "0x4C713B0", VA = "0x4C713B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700077C")]
	internal MeshWriteDataPool meshWriteDataPool
	{
		[Token(Token = "0x6001D5E")]
		[Address(RVA = "0x4C713D0", Offset = "0x4C713D0", VA = "0x4C713D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700077D")]
	internal EntryPool entryPool
	{
		[Token(Token = "0x6001D5F")]
		[Address(RVA = "0x4C713E0", Offset = "0x4C713E0", VA = "0x4C713E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700077E")]
	internal JobManager jobManager
	{
		[Token(Token = "0x6001D60")]
		[Address(RVA = "0x4C71450", Offset = "0x4C71450", VA = "0x4C71450")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001D61")]
		[Address(RVA = "0x4C71460", Offset = "0x4C71460", VA = "0x4C71460")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700077F")]
	internal bool drawStats
	{
		[Token(Token = "0x6001D62")]
		[Address(RVA = "0x4C71480", Offset = "0x4C71480", VA = "0x4C71480")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001D63")]
		[Address(RVA = "0x4C71490", Offset = "0x4C71490", VA = "0x4C71490")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000780")]
	internal bool drawInCameras
	{
		[Token(Token = "0x6001D64")]
		[Address(RVA = "0x4C714A0", Offset = "0x4C714A0", VA = "0x4C714A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001D65")]
		[Address(RVA = "0x4C714B0", Offset = "0x4C714B0", VA = "0x4C714B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000781")]
	internal Shader defaultShader
	{
		[Token(Token = "0x6001D66")]
		[Address(RVA = "0x4C714C0", Offset = "0x4C714C0", VA = "0x4C714C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000782")]
	internal Shader defaultWorldSpaceShader
	{
		[Token(Token = "0x6001D67")]
		[Address(RVA = "0x4C71580", Offset = "0x4C71580", VA = "0x4C71580")]
		set
		{
		}
	}

	[Token(Token = "0x6001D3D")]
	[Address(RVA = "0x4C6DF60", Offset = "0x4C6DF60", VA = "0x4C6DF60")]
	static RenderChain()
	{
	}

	[Token(Token = "0x6001D3E")]
	[Address(RVA = "0x4C6E230", Offset = "0x4C6E230", VA = "0x4C6E230")]
	public RenderChain(BaseVisualElementPanel panel)
	{
	}

	[Token(Token = "0x6001D3F")]
	[Address(RVA = "0x4C6E310", Offset = "0x4C6E310", VA = "0x4C6E310")]
	protected RenderChain(BaseVisualElementPanel panel, UIRenderDevice device, AtlasBase atlas, VectorImageManager vectorImageManager)
	{
	}

	[Token(Token = "0x6001D42")]
	[Address(RVA = "0x4C6ECD0", Offset = "0x4C6ECD0", VA = "0x4C6ECD0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001D43")]
	[Address(RVA = "0x4C6ED30", Offset = "0x4C6ED30", VA = "0x4C6ED30")]
	protected void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001D44")]
	[Address(RVA = "0x4C6F160", Offset = "0x4C6F160", VA = "0x4C6F160")]
	public void ProcessChanges()
	{
	}

	[Token(Token = "0x6001D45")]
	[Address(RVA = "0x4C6FB40", Offset = "0x4C6FB40", VA = "0x4C6FB40")]
	public void Render()
	{
	}

	[Token(Token = "0x6001D46")]
	[Address(RVA = "0x4C709A0", Offset = "0x4C709A0", VA = "0x4C709A0")]
	public void UIEOnChildAdded(VisualElement ve)
	{
	}

	[Token(Token = "0x6001D47")]
	[Address(RVA = "0x4C70D00", Offset = "0x4C70D00", VA = "0x4C70D00")]
	public void UIEOnChildrenReordered(VisualElement ve)
	{
	}

	[Token(Token = "0x6001D48")]
	[Address(RVA = "0x4C70EC0", Offset = "0x4C70EC0", VA = "0x4C70EC0")]
	public void UIEOnChildRemoving(VisualElement ve)
	{
	}

	[Token(Token = "0x6001D49")]
	[Address(RVA = "0x4C70FC0", Offset = "0x4C70FC0", VA = "0x4C70FC0")]
	public void UIEOnRenderHintsChanged(VisualElement ve)
	{
	}

	[Token(Token = "0x6001D4A")]
	[Address(RVA = "0x4C70B60", Offset = "0x4C70B60", VA = "0x4C70B60")]
	public void UIEOnClippingChanged(VisualElement ve, bool hierarchical)
	{
	}

	[Token(Token = "0x6001D4B")]
	[Address(RVA = "0x4C70BE0", Offset = "0x4C70BE0", VA = "0x4C70BE0")]
	public void UIEOnOpacityChanged(VisualElement ve, bool hierarchical = false)
	{
	}

	[Token(Token = "0x6001D4C")]
	[Address(RVA = "0x4C71060", Offset = "0x4C71060", VA = "0x4C71060")]
	public void UIEOnColorChanged(VisualElement ve)
	{
	}

	[Token(Token = "0x6001D4D")]
	[Address(RVA = "0x4C710E0", Offset = "0x4C710E0", VA = "0x4C710E0")]
	public void UIEOnTransformOrSizeChanged(VisualElement ve, bool transformChanged, bool clipRectSizeChanged)
	{
	}

	[Token(Token = "0x6001D4E")]
	[Address(RVA = "0x4C70C70", Offset = "0x4C70C70", VA = "0x4C70C70")]
	public void UIEOnVisualsChanged(VisualElement ve, bool hierarchical)
	{
	}

	[Token(Token = "0x6001D4F")]
	[Address(RVA = "0x4C71170", Offset = "0x4C71170", VA = "0x4C71170")]
	public void UIEOnOpacityIdChanged(VisualElement ve)
	{
	}

	[Token(Token = "0x6001D50")]
	[Address(RVA = "0x4C711F0", Offset = "0x4C711F0", VA = "0x4C711F0")]
	public void UIEOnDisableRenderingChanged(VisualElement ve)
	{
	}

	[Token(Token = "0x6001D68")]
	[Address(RVA = "0x4C6FF00", Offset = "0x4C6FF00", VA = "0x4C6FF00")]
	internal Material GetStandardMaterial()
	{
		return null;
	}

	[Token(Token = "0x6001D69")]
	[Address(RVA = "0x4C71640", Offset = "0x4C71640", VA = "0x4C71640")]
	internal Material GetStandardWorldSpaceMaterial()
	{
		return null;
	}

	[Token(Token = "0x6001D6A")]
	[Address(RVA = "0x4C71740", Offset = "0x4C71740", VA = "0x4C71740")]
	internal void EnsureFitsDepth(int depth)
	{
	}

	[Token(Token = "0x6001D6B")]
	[Address(RVA = "0x4C71750", Offset = "0x4C71750", VA = "0x4C71750")]
	internal void ChildWillBeRemoved(VisualElement ve)
	{
	}

	[Token(Token = "0x6001D6C")]
	[Address(RVA = "0x4C61F00", Offset = "0x4C61F00", VA = "0x4C61F00")]
	internal RenderChainCommand AllocCommand()
	{
		return null;
	}

	[Token(Token = "0x6001D6D")]
	[Address(RVA = "0x4C71820", Offset = "0x4C71820", VA = "0x4C71820")]
	internal void FreeCommand(RenderChainCommand cmd)
	{
	}

	[Token(Token = "0x6001D6E")]
	[Address(RVA = "0x4C718C0", Offset = "0x4C718C0", VA = "0x4C718C0")]
	internal void OnRenderCommandAdded(RenderChainCommand command)
	{
	}

	[Token(Token = "0x6001D6F")]
	[Address(RVA = "0x4C71950", Offset = "0x4C71950", VA = "0x4C71950")]
	internal void OnRenderCommandsRemoved(RenderChainCommand firstCommand, RenderChainCommand lastCommand)
	{
	}

	[Token(Token = "0x6001D70")]
	[Address(RVA = "0x4C71980", Offset = "0x4C71980", VA = "0x4C71980")]
	private static RenderNodeData AccessRenderNodeData(IntPtr obj)
	{
		return default(RenderNodeData);
	}

	[Token(Token = "0x6001D71")]
	[Address(RVA = "0x4C71A70", Offset = "0x4C71A70", VA = "0x4C71A70")]
	private static void OnRenderNodeExecute(IntPtr obj)
	{
	}

	[Token(Token = "0x6001D72")]
	[Address(RVA = "0x4C71B20", Offset = "0x4C71B20", VA = "0x4C71B20")]
	private static void OnRegisterIntermediateRenderers(Camera camera)
	{
	}

	[Token(Token = "0x6001D73")]
	[Address(RVA = "0x4C72030", Offset = "0x4C72030", VA = "0x4C72030")]
	private static void OnRegisterIntermediateRendererMat(BaseRuntimePanel rtp, RenderChain renderChain, ref RenderNodeData rnd, Camera camera, int sameDistanceSortPriority)
	{
	}

	[Token(Token = "0x6001D74")]
	[Address(RVA = "0x4C72430", Offset = "0x4C72430", VA = "0x4C72430")]
	internal void RepaintTexturedElements()
	{
	}

	[Token(Token = "0x6001D75")]
	[Address(RVA = "0x4C61E50", Offset = "0x4C61E50", VA = "0x4C61E50")]
	public void AppendTexture(VisualElement ve, Texture src, TextureId id, bool isAtlas)
	{
	}

	[Token(Token = "0x6001D76")]
	[Address(RVA = "0x4C5FDE0", Offset = "0x4C5FDE0", VA = "0x4C5FDE0")]
	public void ResetTextures(VisualElement ve)
	{
	}

	[Token(Token = "0x6001D77")]
	[Address(RVA = "0x4C70000", Offset = "0x4C70000", VA = "0x4C70000")]
	private void DrawStats()
	{
	}

	[Token(Token = "0x6001D78")]
	[Address(RVA = "0x4C6F120", Offset = "0x4C6F120", VA = "0x4C6F120")]
	private static VisualElement GetFirstElementInPanel(VisualElement ve)
	{
		return null;
	}
}
