// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.RenderTreeCompositor
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005C3")]
internal class RenderTreeCompositor : IDisposable
{
	[Token(Token = "0x20005C4")]
	private enum DrawOperationType
	{
		[Token(Token = "0x400151A")]
		Undefined,
		[Token(Token = "0x400151B")]
		RenderTree,
		[Token(Token = "0x400151C")]
		Effect
	}

	[Token(Token = "0x20005C5")]
	private class DrawOperation
	{
		[Token(Token = "0x400151D")]
		[FieldOffset(Offset = "0x10")]
		private DrawOperationType m_Type;

		[Token(Token = "0x400151E")]
		[FieldOffset(Offset = "0x18")]
		private VisualElement m_VisualElement;

		[Token(Token = "0x400151F")]
		[FieldOffset(Offset = "0x20")]
		private RenderTree m_RenderTree;

		[Token(Token = "0x4001520")]
		[FieldOffset(Offset = "0x28")]
		private PostProcessingPass m_FilterPass;

		[Token(Token = "0x4001521")]
		[FieldOffset(Offset = "0x80")]
		private int m_FilterPassIndex;

		[Token(Token = "0x4001522")]
		[FieldOffset(Offset = "0x88")]
		private FilterFunction m_Filter;

		[Token(Token = "0x4001523")]
		[FieldOffset(Offset = "0xF8")]
		public RectInt bounds;

		[Token(Token = "0x4001524")]
		[FieldOffset(Offset = "0x108")]
		public RectInt drawSourceBounds;

		[Token(Token = "0x4001525")]
		[FieldOffset(Offset = "0x118")]
		public Vector4 drawSourceTexOffsets;

		[Token(Token = "0x4001526")]
		[FieldOffset(Offset = "0x128")]
		public RenderTreeAtlas.AtlasBlock dstAtlasBlock;

		[Token(Token = "0x4001527")]
		[FieldOffset(Offset = "0x158")]
		public TextureId dstTextureId;

		[Token(Token = "0x4001528")]
		[FieldOffset(Offset = "0x160")]
		public DrawOperation parent;

		[Token(Token = "0x4001529")]
		[FieldOffset(Offset = "0x168")]
		public DrawOperation firstChild;

		[Token(Token = "0x400152A")]
		[FieldOffset(Offset = "0x170")]
		public DrawOperation lastChild;

		[Token(Token = "0x400152B")]
		[FieldOffset(Offset = "0x178")]
		public DrawOperation prevSibling;

		[Token(Token = "0x400152C")]
		[FieldOffset(Offset = "0x180")]
		public DrawOperation nextSibling;

		[Token(Token = "0x17000A82")]
		public DrawOperationType type
		{
			[Token(Token = "0x6002AC1")]
			[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
			get
			{
				return default(DrawOperationType);
			}
		}

		[Token(Token = "0x17000A83")]
		public VisualElement visualElement
		{
			[Token(Token = "0x6002AC2")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A84")]
		public RenderTree renderTree
		{
			[Token(Token = "0x6002AC3")]
			[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A85")]
		public PostProcessingPass FilterPass
		{
			[Token(Token = "0x6002AC4")]
			[Address(RVA = "0x31A3760", Offset = "0x31A1D60", VA = "0x1831A3760")]
			get
			{
				return default(PostProcessingPass);
			}
		}

		[Token(Token = "0x17000A86")]
		public int FilterPassIndex
		{
			[Token(Token = "0x6002AC5")]
			[Address(RVA = "0xB5B9B0", Offset = "0xB59FB0", VA = "0x180B5B9B0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000A87")]
		public FilterFunction filter
		{
			[Token(Token = "0x6002AC6")]
			[Address(RVA = "0x31A37A0", Offset = "0x31A1DA0", VA = "0x1831A37A0")]
			get
			{
				return default(FilterFunction);
			}
		}

		[Token(Token = "0x6002AC7")]
		[Address(RVA = "0x31A34E0", Offset = "0x31A1AE0", VA = "0x1831A34E0")]
		public void Init(VisualElement ve, in PostProcessingPass filterPass, int filterPassIndex, FilterFunction filter)
		{
		}

		[Token(Token = "0x6002AC8")]
		[Address(RVA = "0x31A35F0", Offset = "0x31A1BF0", VA = "0x1831A35F0")]
		public void Init(RenderTree renderTree)
		{
		}

		[Token(Token = "0x6002AC9")]
		[Address(RVA = "0x31A3450", Offset = "0x31A1A50", VA = "0x1831A3450")]
		private void InitPointers()
		{
		}

		[Token(Token = "0x6002ACA")]
		[Address(RVA = "0x31A3650", Offset = "0x31A1C50", VA = "0x1831A3650")]
		public void Reset()
		{
		}

		[Token(Token = "0x6002ACB")]
		[Address(RVA = "0x31A3360", Offset = "0x31A1960", VA = "0x1831A3360")]
		public void AddChild(DrawOperation op)
		{
		}

		[Token(Token = "0x6002ACC")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public DrawOperation()
		{
		}
	}

	[Token(Token = "0x4001510")]
	[FieldOffset(Offset = "0x10")]
	private readonly RenderTreeManager m_RenderTreeManager;

	[Token(Token = "0x4001511")]
	[FieldOffset(Offset = "0x18")]
	private DrawOperation m_RootOperation;

	[Token(Token = "0x4001512")]
	[FieldOffset(Offset = "0x20")]
	private List<RenderTexture> m_AllocatedTextures;

	[Token(Token = "0x4001513")]
	[FieldOffset(Offset = "0x28")]
	private MaterialPropertyBlock m_Block;

	[Token(Token = "0x4001514")]
	[FieldOffset(Offset = "0x30")]
	private ObjectPool<DrawOperation> m_DrawOperationPool;

	[Token(Token = "0x4001515")]
	[FieldOffset(Offset = "0x38")]
	private float m_PixelsPerPoint;

	[Token(Token = "0x4001516")]
	private const float k_PixelSnapTolerance = 0.01f;

	[Token(Token = "0x4001517")]
	[FieldOffset(Offset = "0x0")]
	private static Vector4[] s_UVRects;

	[Token(Token = "0x17000A81")]
	protected bool disposed
	{
		[Token(Token = "0x6002ABC")]
		[Address(RVA = "0xDA7C70", Offset = "0xDA6270", VA = "0x180DA7C70")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002ABD")]
		[Address(RVA = "0xDA7C80", Offset = "0xDA6280", VA = "0x180DA7C80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002AAA")]
	[Address(RVA = "0x31A9BD0", Offset = "0x31A81D0", VA = "0x1831A9BD0")]
	public RenderTreeCompositor(RenderTreeManager owner)
	{
	}

	[Token(Token = "0x6002AAB")]
	[Address(RVA = "0x31A9A10", Offset = "0x31A8010", VA = "0x1831A9A10")]
	public void Update(RenderTree rootRenderTree)
	{
	}

	[Token(Token = "0x6002AAC")]
	[Address(RVA = "0x31A6F80", Offset = "0x31A5580", VA = "0x1831A6F80")]
	private void BuildDrawOperationTree(RenderTree rootRenderTree)
	{
	}

	[Token(Token = "0x6002AAD")]
	[Address(RVA = "0x31A65C0", Offset = "0x31A4BC0", VA = "0x1831A65C0")]
	private void AddChildrenOperations_DepthFirst(DrawOperation parentOperation, RenderTree renderTree)
	{
	}

	[Token(Token = "0x6002AAE")]
	[Address(RVA = "0x31A8350", Offset = "0x31A6950", VA = "0x1831A8350")]
	private static PostProcessingMargins GetReadMargins(PostProcessingPass effect, FilterFunction func)
	{
		return default(PostProcessingMargins);
	}

	[Token(Token = "0x6002AAF")]
	[Address(RVA = "0x31A8400", Offset = "0x31A6A00", VA = "0x1831A8400")]
	private static PostProcessingMargins GetWriteMargins(PostProcessingPass effect, FilterFunction func)
	{
		return default(PostProcessingMargins);
	}

	[Token(Token = "0x6002AB0")]
	[Address(RVA = "0x31A8B10", Offset = "0x31A7110", VA = "0x1831A8B10")]
	private void UpdateDrawBounds_PostOrder(DrawOperation op)
	{
	}

	[Token(Token = "0x6002AB1")]
	[Address(RVA = "0x31A87F0", Offset = "0x31A6DF0", VA = "0x1831A87F0")]
	private static Rect ScaleRect(Rect r, float scale)
	{
		return default(Rect);
	}

	[Token(Token = "0x6002AB2")]
	[Address(RVA = "0x31A8580", Offset = "0x31A6B80", VA = "0x1831A8580")]
	private Rect PixelsToPoints(RectInt r)
	{
		return default(Rect);
	}

	[Token(Token = "0x6002AB3")]
	[Address(RVA = "0x31A84B0", Offset = "0x31A6AB0", VA = "0x1831A84B0")]
	private static Rect InflateByMargins(Rect r, PostProcessingMargins margins, float scale)
	{
		return default(Rect);
	}

	[Token(Token = "0x6002AB4")]
	[Address(RVA = "0x31A88E0", Offset = "0x31A6EE0", VA = "0x1831A88E0")]
	internal static RectInt SnapOutwardToPixels(Rect r)
	{
		return default(RectInt);
	}

	[Token(Token = "0x6002AB5")]
	[Address(RVA = "0x31A8860", Offset = "0x31A6E60", VA = "0x1831A8860")]
	private static int SnapMaxOutward(int snappedMin, float max, float extent)
	{
		return default(int);
	}

	[Token(Token = "0x6002AB6")]
	[Address(RVA = "0x31A6D50", Offset = "0x31A5350", VA = "0x1831A6D50")]
	private void AssignTextureIds_DepthFirst(DrawOperation op)
	{
	}

	[Token(Token = "0x6002AB7")]
	[Address(RVA = "0x31A87E0", Offset = "0x31A6DE0", VA = "0x1831A87E0")]
	public void RenderNestedPasses()
	{
	}

	[Token(Token = "0x6002AB8")]
	[Address(RVA = "0x31A74B0", Offset = "0x31A5AB0", VA = "0x1831A74B0")]
	private void ExecuteDrawOperation_PostOrder(DrawOperation op)
	{
	}

	[Token(Token = "0x6002AB9")]
	[Address(RVA = "0x31A6AB0", Offset = "0x31A50B0", VA = "0x1831A6AB0")]
	private void ApplyEffectParameters(PostProcessingPass effect, FilterFunction filter, VisualElement source, bool readsGamma)
	{
	}

	[Token(Token = "0x6002ABA")]
	[Address(RVA = "0x31A7070", Offset = "0x31A5670", VA = "0x1831A7070")]
	private void CleanupOperationTree()
	{
	}

	[Token(Token = "0x6002ABB")]
	[Address(RVA = "0x31A71F0", Offset = "0x31A57F0", VA = "0x1831A71F0")]
	private void CleanupOperation_PostOrder(DrawOperation op)
	{
	}

	[Token(Token = "0x6002ABE")]
	[Address(RVA = "0x31A7420", Offset = "0x31A5A20", VA = "0x1831A7420", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002ABF")]
	[Address(RVA = "0x31A7480", Offset = "0x31A5A80", VA = "0x1831A7480")]
	protected void Dispose(bool disposing)
	{
	}
}
