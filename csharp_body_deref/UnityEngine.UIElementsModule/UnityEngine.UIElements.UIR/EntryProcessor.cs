// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.EntryProcessor
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x2000593")]
internal class EntryProcessor
{
	[Token(Token = "0x2000594")]
	private struct MaskMesh
	{
		[Token(Token = "0x40013A5")]
		[FieldOffset(Offset = "0x0")]
		public NativeSlice<Vertex> vertices;

		[Token(Token = "0x40013A6")]
		[FieldOffset(Offset = "0x10")]
		public NativeSlice<ushort> indices;

		[Token(Token = "0x40013A7")]
		[FieldOffset(Offset = "0x20")]
		public int indexOffset;
	}

	[Token(Token = "0x400137F")]
	[FieldOffset(Offset = "0x10")]
	private EntryPreProcessor m_PreProcessor;

	[Token(Token = "0x4001380")]
	[FieldOffset(Offset = "0x18")]
	private RenderTreeManager m_RenderTreeManager;

	[Token(Token = "0x4001381")]
	[FieldOffset(Offset = "0x20")]
	private RenderData m_CurrentRenderData;

	[Token(Token = "0x4001382")]
	[FieldOffset(Offset = "0x28")]
	private int m_MaskDepth;

	[Token(Token = "0x4001383")]
	[FieldOffset(Offset = "0x2C")]
	private int m_MaskDepthPopped;

	[Token(Token = "0x4001384")]
	[FieldOffset(Offset = "0x30")]
	private int m_MaskDepthPushed;

	[Token(Token = "0x4001385")]
	[FieldOffset(Offset = "0x34")]
	private int m_StencilRef;

	[Token(Token = "0x4001386")]
	[FieldOffset(Offset = "0x38")]
	private int m_StencilRefPopped;

	[Token(Token = "0x4001387")]
	[FieldOffset(Offset = "0x3C")]
	private int m_StencilRefPushed;

	[Token(Token = "0x4001388")]
	[FieldOffset(Offset = "0x40")]
	private BMPAlloc m_ClipRectId;

	[Token(Token = "0x4001389")]
	[FieldOffset(Offset = "0x48")]
	private BMPAlloc m_ClipRectIdPopped;

	[Token(Token = "0x400138A")]
	[FieldOffset(Offset = "0x50")]
	private BMPAlloc m_ClipRectIdPushed;

	[Token(Token = "0x400138B")]
	[FieldOffset(Offset = "0x58")]
	private bool m_IsDrawingMask;

	[Token(Token = "0x400138C")]
	[FieldOffset(Offset = "0x60")]
	private Stack<MaskMesh> m_MaskMeshes;

	[Token(Token = "0x400138D")]
	[FieldOffset(Offset = "0x68")]
	private bool m_VertexDataComputed;

	[Token(Token = "0x400138E")]
	[FieldOffset(Offset = "0x6C")]
	private Matrix4x4 m_Transform;

	[Token(Token = "0x400138F")]
	[FieldOffset(Offset = "0xAC")]
	private Color32 m_TransformData;

	[Token(Token = "0x4001390")]
	[FieldOffset(Offset = "0xB0")]
	private Color32 m_OpacityData;

	[Token(Token = "0x4001391")]
	[FieldOffset(Offset = "0xB4")]
	private Color32 m_TextCoreSettingsPage;

	[Token(Token = "0x4001392")]
	[FieldOffset(Offset = "0xB8")]
	private MeshHandle m_Mesh;

	[Token(Token = "0x4001393")]
	[FieldOffset(Offset = "0xC0")]
	private NativeSlice<Vertex> m_Verts;

	[Token(Token = "0x4001394")]
	[FieldOffset(Offset = "0xD0")]
	private NativeSlice<ushort> m_Indices;

	[Token(Token = "0x4001395")]
	[FieldOffset(Offset = "0xE0")]
	private ushort m_IndexOffset;

	[Token(Token = "0x4001396")]
	[FieldOffset(Offset = "0xE4")]
	private int m_AllocVertexCount;

	[Token(Token = "0x4001397")]
	[FieldOffset(Offset = "0xE8")]
	private int m_AllocIndex;

	[Token(Token = "0x4001398")]
	[FieldOffset(Offset = "0xEC")]
	private int m_VertsFilled;

	[Token(Token = "0x4001399")]
	[FieldOffset(Offset = "0xF0")]
	private int m_IndicesFilled;

	[Token(Token = "0x400139A")]
	[FieldOffset(Offset = "0xF4")]
	private VertexFlags m_RenderType;

	[Token(Token = "0x400139B")]
	[FieldOffset(Offset = "0xF8")]
	private bool m_RemapUVs;

	[Token(Token = "0x400139C")]
	[FieldOffset(Offset = "0xFC")]
	private Rect m_AtlasRect;

	[Token(Token = "0x400139D")]
	[FieldOffset(Offset = "0x10C")]
	private int m_GradientSettingIndexOffset;

	[Token(Token = "0x400139E")]
	[FieldOffset(Offset = "0x110")]
	private bool m_IsTail;

	[Token(Token = "0x400139F")]
	[FieldOffset(Offset = "0x118")]
	private RenderChainCommand m_FirstCommand;

	[Token(Token = "0x40013A0")]
	[FieldOffset(Offset = "0x120")]
	private RenderChainCommand m_LastCommand;

	[Token(Token = "0x17000A5E")]
	public RenderChainCommand firstHeadCommand
	{
		[Token(Token = "0x600299D")]
		[Address(RVA = "0x2CE6A00", Offset = "0x2CE5000", VA = "0x182CE6A00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600299E")]
		[Address(RVA = "0x3182970", Offset = "0x3180F70", VA = "0x183182970")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A5F")]
	public RenderChainCommand lastHeadCommand
	{
		[Token(Token = "0x600299F")]
		[Address(RVA = "0x2CF3C00", Offset = "0x2CF2200", VA = "0x182CF3C00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60029A0")]
		[Address(RVA = "0x24C0B20", Offset = "0x24BF120", VA = "0x1824C0B20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A60")]
	public RenderChainCommand firstTailCommand
	{
		[Token(Token = "0x60029A1")]
		[Address(RVA = "0xA29AC0", Offset = "0xA280C0", VA = "0x180A29AC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60029A2")]
		[Address(RVA = "0x306D1A0", Offset = "0x306B7A0", VA = "0x18306D1A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000A61")]
	public RenderChainCommand lastTailCommand
	{
		[Token(Token = "0x60029A3")]
		[Address(RVA = "0x1D1FA50", Offset = "0x1D1E050", VA = "0x181D1FA50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60029A4")]
		[Address(RVA = "0x1D1FE00", Offset = "0x1D1E400", VA = "0x181D1FE00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60029A5")]
	[Address(RVA = "0x31806E0", Offset = "0x317ECE0", VA = "0x1831806E0")]
	public void Init(Entry root, RenderTreeManager renderTreeManager, RenderData renderData)
	{
	}

	[Token(Token = "0x60029A6")]
	[Address(RVA = "0x317FF40", Offset = "0x317E540", VA = "0x18317FF40")]
	public void ClearReferences()
	{
	}

	[Token(Token = "0x60029A7")]
	[Address(RVA = "0x3180C00", Offset = "0x317F200", VA = "0x183180C00")]
	public void ProcessHead()
	{
	}

	[Token(Token = "0x60029A8")]
	[Address(RVA = "0x3182500", Offset = "0x3180B00", VA = "0x183182500")]
	public void ProcessTail()
	{
	}

	[Token(Token = "0x60029A9")]
	[Address(RVA = "0x3181BB0", Offset = "0x31801B0", VA = "0x183181BB0")]
	private void ProcessRange(int first, int last)
	{
	}

	[Token(Token = "0x60029AA")]
	[Address(RVA = "0x3180CD0", Offset = "0x317F2D0", VA = "0x183180CD0")]
	private void ProcessMeshEntry(Entry entry, TextureId textureId)
	{
	}

	[Token(Token = "0x60029AB")]
	[Address(RVA = "0x3180200", Offset = "0x317E800", VA = "0x183180200")]
	private void DrawReverseMask()
	{
	}

	[Token(Token = "0x60029AC")]
	[Address(RVA = "0x3180070", Offset = "0x317E670", VA = "0x183180070")]
	private RenderChainCommand CreateMeshDrawCommand(MeshHandle mesh, int indexCount, int indexOffset, Material material, TextureId texture)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60029AD")]
	[Address(RVA = "0x31761C0", Offset = "0x31747C0", VA = "0x1831761C0")]
	private void AppendCommand(RenderChainCommand next)
	{
	}

	[Token(Token = "0x60029AE")]
	[Address(RVA = "0x31809C0", Offset = "0x317EFC0", VA = "0x1831809C0")]
	private void ProcessFirstAlloc(List<EntryPreProcessor.AllocSize> allocList, ref MeshHandle mesh)
	{
	}

	[Token(Token = "0x60029AF")]
	[Address(RVA = "0x31816C0", Offset = "0x317FCC0", VA = "0x1831816C0")]
	private void ProcessNextAlloc()
	{
	}

	[Token(Token = "0x60029B0")]
	[Address(RVA = "0x3182670", Offset = "0x3180C70", VA = "0x183182670")]
	private static void UpdateOrAllocate(ref MeshHandle data, int vertexCount, int indexCount, UIRenderDevice device, out NativeSlice<Vertex> verts, out NativeSlice<ushort> indices, out ushort indexOffset, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x60029B1")]
	[Address(RVA = "0x3182790", Offset = "0x3180D90", VA = "0x183182790")]
	public EntryProcessor()
	{
	}
}
