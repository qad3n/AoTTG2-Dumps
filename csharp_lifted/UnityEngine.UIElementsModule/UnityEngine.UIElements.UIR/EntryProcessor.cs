// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.EntryProcessor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x200057E")]
internal class EntryProcessor
{
	[Token(Token = "0x200057F")]
	private struct MaskMesh
	{
		[Token(Token = "0x40012E7")]
		[FieldOffset(Offset = "0x0")]
		public NativeSlice<Vertex> vertices;

		[Token(Token = "0x40012E8")]
		[FieldOffset(Offset = "0x10")]
		public NativeSlice<ushort> indices;

		[Token(Token = "0x40012E9")]
		[FieldOffset(Offset = "0x20")]
		public int indexOffset;
	}

	[Token(Token = "0x40012C1")]
	[FieldOffset(Offset = "0x10")]
	private EntryPreProcessor m_PreProcessor;

	[Token(Token = "0x40012C2")]
	[FieldOffset(Offset = "0x18")]
	private RenderTreeManager m_RenderTreeManager;

	[Token(Token = "0x40012C3")]
	[FieldOffset(Offset = "0x20")]
	private RenderData m_CurrentRenderData;

	[Token(Token = "0x40012C4")]
	[FieldOffset(Offset = "0x28")]
	private int m_MaskDepth;

	[Token(Token = "0x40012C5")]
	[FieldOffset(Offset = "0x2C")]
	private int m_MaskDepthPopped;

	[Token(Token = "0x40012C6")]
	[FieldOffset(Offset = "0x30")]
	private int m_MaskDepthPushed;

	[Token(Token = "0x40012C7")]
	[FieldOffset(Offset = "0x34")]
	private int m_StencilRef;

	[Token(Token = "0x40012C8")]
	[FieldOffset(Offset = "0x38")]
	private int m_StencilRefPopped;

	[Token(Token = "0x40012C9")]
	[FieldOffset(Offset = "0x3C")]
	private int m_StencilRefPushed;

	[Token(Token = "0x40012CA")]
	[FieldOffset(Offset = "0x40")]
	private BMPAlloc m_ClipRectId;

	[Token(Token = "0x40012CB")]
	[FieldOffset(Offset = "0x48")]
	private BMPAlloc m_ClipRectIdPopped;

	[Token(Token = "0x40012CC")]
	[FieldOffset(Offset = "0x50")]
	private BMPAlloc m_ClipRectIdPushed;

	[Token(Token = "0x40012CD")]
	[FieldOffset(Offset = "0x58")]
	private bool m_IsDrawingMask;

	[Token(Token = "0x40012CE")]
	[FieldOffset(Offset = "0x60")]
	private Stack<MaskMesh> m_MaskMeshes;

	[Token(Token = "0x40012CF")]
	[FieldOffset(Offset = "0x68")]
	private bool m_VertexDataComputed;

	[Token(Token = "0x40012D0")]
	[FieldOffset(Offset = "0x6C")]
	private Matrix4x4 m_Transform;

	[Token(Token = "0x40012D1")]
	[FieldOffset(Offset = "0xAC")]
	private Color32 m_TransformData;

	[Token(Token = "0x40012D2")]
	[FieldOffset(Offset = "0xB0")]
	private Color32 m_OpacityData;

	[Token(Token = "0x40012D3")]
	[FieldOffset(Offset = "0xB4")]
	private Color32 m_TextCoreSettingsPage;

	[Token(Token = "0x40012D4")]
	[FieldOffset(Offset = "0xB8")]
	private MeshHandle m_Mesh;

	[Token(Token = "0x40012D5")]
	[FieldOffset(Offset = "0xC0")]
	private NativeSlice<Vertex> m_Verts;

	[Token(Token = "0x40012D6")]
	[FieldOffset(Offset = "0xD0")]
	private NativeSlice<ushort> m_Indices;

	[Token(Token = "0x40012D7")]
	[FieldOffset(Offset = "0xE0")]
	private ushort m_IndexOffset;

	[Token(Token = "0x40012D8")]
	[FieldOffset(Offset = "0xE4")]
	private int m_AllocVertexCount;

	[Token(Token = "0x40012D9")]
	[FieldOffset(Offset = "0xE8")]
	private int m_AllocIndex;

	[Token(Token = "0x40012DA")]
	[FieldOffset(Offset = "0xEC")]
	private int m_VertsFilled;

	[Token(Token = "0x40012DB")]
	[FieldOffset(Offset = "0xF0")]
	private int m_IndicesFilled;

	[Token(Token = "0x40012DC")]
	[FieldOffset(Offset = "0xF4")]
	private VertexFlags m_RenderType;

	[Token(Token = "0x40012DD")]
	[FieldOffset(Offset = "0xF8")]
	private bool m_RemapUVs;

	[Token(Token = "0x40012DE")]
	[FieldOffset(Offset = "0xFC")]
	private Rect m_AtlasRect;

	[Token(Token = "0x40012DF")]
	[FieldOffset(Offset = "0x10C")]
	private int m_GradientSettingIndexOffset;

	[Token(Token = "0x40012E0")]
	[FieldOffset(Offset = "0x110")]
	private bool m_IsTail;

	[Token(Token = "0x40012E1")]
	[FieldOffset(Offset = "0x118")]
	private RenderChainCommand m_FirstCommand;

	[Token(Token = "0x40012E2")]
	[FieldOffset(Offset = "0x120")]
	private RenderChainCommand m_LastCommand;

	[Token(Token = "0x17000A52")]
	public RenderChainCommand firstHeadCommand
	{
		[Token(Token = "0x600293C")]
		[Address(RVA = "0x6B82A60", Offset = "0x6B81A60", VA = "0x6B82A60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600293D")]
		[Address(RVA = "0x6B82A70", Offset = "0x6B81A70", VA = "0x6B82A70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A53")]
	public RenderChainCommand lastHeadCommand
	{
		[Token(Token = "0x600293E")]
		[Address(RVA = "0x6B82A90", Offset = "0x6B81A90", VA = "0x6B82A90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600293F")]
		[Address(RVA = "0x6B82AA0", Offset = "0x6B81AA0", VA = "0x6B82AA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A54")]
	public RenderChainCommand firstTailCommand
	{
		[Token(Token = "0x6002940")]
		[Address(RVA = "0x6B82AC0", Offset = "0x6B81AC0", VA = "0x6B82AC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002941")]
		[Address(RVA = "0x6B82AD0", Offset = "0x6B81AD0", VA = "0x6B82AD0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A55")]
	public RenderChainCommand lastTailCommand
	{
		[Token(Token = "0x6002942")]
		[Address(RVA = "0x6B82AF0", Offset = "0x6B81AF0", VA = "0x6B82AF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002943")]
		[Address(RVA = "0x6B82B00", Offset = "0x6B81B00", VA = "0x6B82B00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002944")]
	[Address(RVA = "0x6B82B20", Offset = "0x6B81B20", VA = "0x6B82B20")]
	public void Init(Entry root, RenderTreeManager renderTreeManager, RenderData renderData)
	{
	}

	[Token(Token = "0x6002945")]
	[Address(RVA = "0x6B82DC0", Offset = "0x6B81DC0", VA = "0x6B82DC0")]
	public void ClearReferences()
	{
	}

	[Token(Token = "0x6002946")]
	[Address(RVA = "0x6B82F00", Offset = "0x6B81F00", VA = "0x6B82F00")]
	public void ProcessHead()
	{
	}

	[Token(Token = "0x6002947")]
	[Address(RVA = "0x6B83C70", Offset = "0x6B82C70", VA = "0x6B83C70")]
	public void ProcessTail()
	{
	}

	[Token(Token = "0x6002948")]
	[Address(RVA = "0x6B83150", Offset = "0x6B82150", VA = "0x6B83150")]
	private void ProcessRange(int first, int last)
	{
	}

	[Token(Token = "0x6002949")]
	[Address(RVA = "0x6B83DE0", Offset = "0x6B82DE0", VA = "0x6B83DE0")]
	private void ProcessMeshEntry(Entry entry, TextureId textureId)
	{
	}

	[Token(Token = "0x600294A")]
	[Address(RVA = "0x6B84930", Offset = "0x6B83930", VA = "0x6B84930")]
	private void DrawReverseMask()
	{
	}

	[Token(Token = "0x600294B")]
	[Address(RVA = "0x6B85020", Offset = "0x6B84020", VA = "0x6B85020")]
	private RenderChainCommand CreateMeshDrawCommand(MeshHandle mesh, int indexCount, int indexOffset, Material material, TextureId texture)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600294C")]
	[Address(RVA = "0x6B85210", Offset = "0x6B84210", VA = "0x6B85210")]
	private void AppendCommand(RenderChainCommand next)
	{
	}

	[Token(Token = "0x600294D")]
	[Address(RVA = "0x6B82FC0", Offset = "0x6B81FC0", VA = "0x6B82FC0")]
	private void ProcessFirstAlloc(List<EntryPreProcessor.AllocSize> allocList, ref MeshHandle mesh)
	{
	}

	[Token(Token = "0x600294E")]
	[Address(RVA = "0x6B84E20", Offset = "0x6B83E20", VA = "0x6B84E20")]
	private void ProcessNextAlloc()
	{
	}

	[Token(Token = "0x600294F")]
	[Address(RVA = "0x6B852A0", Offset = "0x6B842A0", VA = "0x6B852A0")]
	private static void UpdateOrAllocate(ref MeshHandle data, int vertexCount, int indexCount, UIRenderDevice device, out NativeSlice<Vertex> verts, out NativeSlice<ushort> indices, out ushort indexOffset, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6002950")]
	[Address(RVA = "0x6B85390", Offset = "0x6B84390", VA = "0x6B85390")]
	public EntryProcessor()
	{
	}
}
