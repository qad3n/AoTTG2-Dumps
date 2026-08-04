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
using Unity.Profiling;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x200049A")]
internal class EntryProcessor
{
	[Token(Token = "0x200049B")]
	private struct MaskMesh
	{
		[Token(Token = "0x4000E0E")]
		[FieldOffset(Offset = "0x0")]
		public NativeSlice<Vertex> vertices;

		[Token(Token = "0x4000E0F")]
		[FieldOffset(Offset = "0x10")]
		public NativeSlice<ushort> indices;

		[Token(Token = "0x4000E10")]
		[FieldOffset(Offset = "0x20")]
		public int indexOffset;
	}

	[Token(Token = "0x4000DE3")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker k_ProcessHeadEntriesMarker;

	[Token(Token = "0x4000DE4")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker k_ProcessTailEntriesMarker;

	[Token(Token = "0x4000DE5")]
	[FieldOffset(Offset = "0x10")]
	private EntryPreProcessor m_PreProcessor;

	[Token(Token = "0x4000DE6")]
	[FieldOffset(Offset = "0x18")]
	private RenderChain m_RenderChain;

	[Token(Token = "0x4000DE7")]
	[FieldOffset(Offset = "0x20")]
	private VisualElement m_CurrentElement;

	[Token(Token = "0x4000DE8")]
	[FieldOffset(Offset = "0x28")]
	private int m_MaskDepth;

	[Token(Token = "0x4000DE9")]
	[FieldOffset(Offset = "0x2C")]
	private int m_MaskDepthPopped;

	[Token(Token = "0x4000DEA")]
	[FieldOffset(Offset = "0x30")]
	private int m_MaskDepthPushed;

	[Token(Token = "0x4000DEB")]
	[FieldOffset(Offset = "0x34")]
	private int m_StencilRef;

	[Token(Token = "0x4000DEC")]
	[FieldOffset(Offset = "0x38")]
	private int m_StencilRefPopped;

	[Token(Token = "0x4000DED")]
	[FieldOffset(Offset = "0x3C")]
	private int m_StencilRefPushed;

	[Token(Token = "0x4000DEE")]
	[FieldOffset(Offset = "0x40")]
	private BMPAlloc m_ClipRectId;

	[Token(Token = "0x4000DEF")]
	[FieldOffset(Offset = "0x48")]
	private BMPAlloc m_ClipRectIdPopped;

	[Token(Token = "0x4000DF0")]
	[FieldOffset(Offset = "0x50")]
	private BMPAlloc m_ClipRectIdPushed;

	[Token(Token = "0x4000DF1")]
	[FieldOffset(Offset = "0x58")]
	private bool m_IsDrawingMask;

	[Token(Token = "0x4000DF2")]
	[FieldOffset(Offset = "0x60")]
	private Stack<MaskMesh> m_MaskMeshes;

	[Token(Token = "0x4000DF3")]
	[FieldOffset(Offset = "0x68")]
	private bool m_VertexDataComputed;

	[Token(Token = "0x4000DF4")]
	[FieldOffset(Offset = "0x6C")]
	private Matrix4x4 m_Transform;

	[Token(Token = "0x4000DF5")]
	[FieldOffset(Offset = "0xAC")]
	private Color32 m_TransformData;

	[Token(Token = "0x4000DF6")]
	[FieldOffset(Offset = "0xB0")]
	private Color32 m_OpacityData;

	[Token(Token = "0x4000DF7")]
	[FieldOffset(Offset = "0xB4")]
	private Color32 m_TextCoreSettingsPage;

	[Token(Token = "0x4000DF8")]
	[FieldOffset(Offset = "0xB8")]
	private MeshHandle m_Mesh;

	[Token(Token = "0x4000DF9")]
	[FieldOffset(Offset = "0xC0")]
	private NativeSlice<Vertex> m_Verts;

	[Token(Token = "0x4000DFA")]
	[FieldOffset(Offset = "0xD0")]
	private NativeSlice<ushort> m_Indices;

	[Token(Token = "0x4000DFB")]
	[FieldOffset(Offset = "0xE0")]
	private ushort m_IndexOffset;

	[Token(Token = "0x4000DFC")]
	[FieldOffset(Offset = "0xE4")]
	private int m_VertsFilled;

	[Token(Token = "0x4000DFD")]
	[FieldOffset(Offset = "0xE8")]
	private int m_IndicesFilled;

	[Token(Token = "0x4000DFE")]
	[FieldOffset(Offset = "0xEC")]
	private VertexFlags m_RenderType;

	[Token(Token = "0x4000DFF")]
	[FieldOffset(Offset = "0xF0")]
	private bool m_RemapUVs;

	[Token(Token = "0x4000E00")]
	[FieldOffset(Offset = "0xF4")]
	private Rect m_AtlasRect;

	[Token(Token = "0x4000E01")]
	[FieldOffset(Offset = "0x104")]
	private int m_GradientSettingIndexOffset;

	[Token(Token = "0x4000E02")]
	[FieldOffset(Offset = "0x108")]
	private bool m_IsTail;

	[Token(Token = "0x4000E03")]
	[FieldOffset(Offset = "0x109")]
	private bool m_Fails;

	[Token(Token = "0x4000E04")]
	[FieldOffset(Offset = "0x110")]
	private RenderChainCommand m_FirstCommand;

	[Token(Token = "0x4000E05")]
	[FieldOffset(Offset = "0x118")]
	private RenderChainCommand m_LastCommand;

	[Token(Token = "0x4000E0A")]
	[FieldOffset(Offset = "0x10")]
	private static Material s_blitMaterial_LinearToGamma;

	[Token(Token = "0x4000E0B")]
	[FieldOffset(Offset = "0x18")]
	private static Material s_blitMaterial_GammaToLinear;

	[Token(Token = "0x4000E0C")]
	[FieldOffset(Offset = "0x20")]
	private static Material s_blitMaterial_NoChange;

	[Token(Token = "0x4000E0D")]
	[FieldOffset(Offset = "0x28")]
	private static Shader s_blitShader;

	[Token(Token = "0x17000764")]
	public RenderChainCommand firstHeadCommand
	{
		[Token(Token = "0x6001C93")]
		[Address(RVA = "0x4F86FC0", Offset = "0x4F86FC0", VA = "0x4F86FC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C94")]
		[Address(RVA = "0x4F86FD0", Offset = "0x4F86FD0", VA = "0x4F86FD0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000765")]
	public RenderChainCommand lastHeadCommand
	{
		[Token(Token = "0x6001C95")]
		[Address(RVA = "0x4F86FF0", Offset = "0x4F86FF0", VA = "0x4F86FF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C96")]
		[Address(RVA = "0x4F87000", Offset = "0x4F87000", VA = "0x4F87000")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000766")]
	public RenderChainCommand firstTailCommand
	{
		[Token(Token = "0x6001C97")]
		[Address(RVA = "0x4F87020", Offset = "0x4F87020", VA = "0x4F87020")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C98")]
		[Address(RVA = "0x4F87030", Offset = "0x4F87030", VA = "0x4F87030")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000767")]
	public RenderChainCommand lastTailCommand
	{
		[Token(Token = "0x6001C99")]
		[Address(RVA = "0x4F87050", Offset = "0x4F87050", VA = "0x4F87050")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001C9A")]
		[Address(RVA = "0x4F87060", Offset = "0x4F87060", VA = "0x4F87060")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001C9B")]
	[Address(RVA = "0x4F87080", Offset = "0x4F87080", VA = "0x4F87080")]
	public void Init(Entry root, RenderChain renderChain, VisualElement ve)
	{
	}

	[Token(Token = "0x6001C9C")]
	[Address(RVA = "0x4F87910", Offset = "0x4F87910", VA = "0x4F87910")]
	public void ProcessHead(ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6001C9D")]
	[Address(RVA = "0x4F88B40", Offset = "0x4F88B40", VA = "0x4F88B40")]
	public void ProcessTail(ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6001C9E")]
	[Address(RVA = "0x4F87C10", Offset = "0x4F87C10", VA = "0x4F87C10")]
	private void ProcessRange(int first, int last)
	{
	}

	[Token(Token = "0x6001C9F")]
	[Address(RVA = "0x4F88D20", Offset = "0x4F88D20", VA = "0x4F88D20")]
	private void ProcessMeshEntry(Entry entry, TextureId textureId)
	{
	}

	[Token(Token = "0x6001CA0")]
	[Address(RVA = "0x4F89890", Offset = "0x4F89890", VA = "0x4F89890")]
	private void DrawReverseMask()
	{
	}

	[Token(Token = "0x6001CA1")]
	[Address(RVA = "0x4F8A0A0", Offset = "0x4F8A0A0", VA = "0x4F8A0A0")]
	private RenderChainCommand CreateMeshDrawCommand(MeshHandle mesh, int indexCount, int indexOffset, Material material, TextureId texture)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001CA2")]
	[Address(RVA = "0x4F8A230", Offset = "0x4F8A230", VA = "0x4F8A230")]
	private void AppendCommand(RenderChainCommand next)
	{
	}

	[Token(Token = "0x6001CA3")]
	[Address(RVA = "0x4F87A50", Offset = "0x4F87A50", VA = "0x4F87A50")]
	private void ProcessFirstAlloc(List<EntryPreProcessor.AllocSize> allocList, ref MeshHandle mesh, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6001CA4")]
	[Address(RVA = "0x4F8A2C0", Offset = "0x4F8A2C0", VA = "0x4F8A2C0")]
	private static void UpdateOrAllocate(ref MeshHandle data, int vertexCount, int indexCount, UIRenderDevice device, out NativeSlice<Vertex> verts, out NativeSlice<ushort> indices, out ushort indexOffset, ref ChainBuilderStats stats)
	{
	}

	[Token(Token = "0x6001CA5")]
	[Address(RVA = "0x4F8A3C0", Offset = "0x4F8A3C0", VA = "0x4F8A3C0")]
	private static Material CreateBlitShader(float colorConversion)
	{
		return null;
	}

	[Token(Token = "0x6001CA6")]
	[Address(RVA = "0x4F89D80", Offset = "0x4F89D80", VA = "0x4F89D80")]
	private static Material GetBlitMaterial(VisualElement.RenderTargetMode mode)
	{
		return null;
	}

	[Token(Token = "0x6001CA7")]
	[Address(RVA = "0x4F8A5C0", Offset = "0x4F8A5C0", VA = "0x4F8A5C0")]
	public EntryProcessor()
	{
	}
}
