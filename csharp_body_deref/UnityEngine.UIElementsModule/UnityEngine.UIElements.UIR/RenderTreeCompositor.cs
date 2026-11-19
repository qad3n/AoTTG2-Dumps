// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.RenderTreeCompositor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005AE")]
internal class RenderTreeCompositor : IDisposable
{
	[Token(Token = "0x20005AF")]
	private enum DrawOperationType
	{
		[Token(Token = "0x400145C")]
		Undefined,
		[Token(Token = "0x400145D")]
		RenderTree,
		[Token(Token = "0x400145E")]
		Effect
	}

	[Token(Token = "0x20005B0")]
	private class DrawOperation
	{
		[Token(Token = "0x400145F")]
		[FieldOffset(Offset = "0x10")]
		private DrawOperationType m_Type;

		[Token(Token = "0x4001460")]
		[FieldOffset(Offset = "0x18")]
		private VisualElement m_VisualElement;

		[Token(Token = "0x4001461")]
		[FieldOffset(Offset = "0x20")]
		private RenderTree m_RenderTree;

		[Token(Token = "0x4001462")]
		[FieldOffset(Offset = "0x28")]
		private PostProcessingPass m_FilterPass;

		[Token(Token = "0x4001463")]
		[FieldOffset(Offset = "0x80")]
		private int m_FilterPassIndex;

		[Token(Token = "0x4001464")]
		[FieldOffset(Offset = "0x88")]
		private FilterFunction m_Filter;

		[Token(Token = "0x4001465")]
		[FieldOffset(Offset = "0xF8")]
		public RectInt bounds;

		[Token(Token = "0x4001466")]
		[FieldOffset(Offset = "0x108")]
		public RectInt drawSourceBounds;

		[Token(Token = "0x4001467")]
		[FieldOffset(Offset = "0x118")]
		public Vector4 drawSourceTexOffsets;

		[Token(Token = "0x4001468")]
		[FieldOffset(Offset = "0x128")]
		public RenderTreeAtlas.AtlasBlock dstAtlasBlock;

		[Token(Token = "0x4001469")]
		[FieldOffset(Offset = "0x158")]
		public TextureId dstTextureId;

		[Token(Token = "0x400146A")]
		[FieldOffset(Offset = "0x160")]
		public DrawOperation parent;

		[Token(Token = "0x400146B")]
		[FieldOffset(Offset = "0x168")]
		public DrawOperation firstChild;

		[Token(Token = "0x400146C")]
		[FieldOffset(Offset = "0x170")]
		public DrawOperation lastChild;

		[Token(Token = "0x400146D")]
		[FieldOffset(Offset = "0x178")]
		public DrawOperation prevSibling;

		[Token(Token = "0x400146E")]
		[FieldOffset(Offset = "0x180")]
		public DrawOperation nextSibling;

		[Token(Token = "0x17000A76")]
		public DrawOperationType type
		{
			[Token(Token = "0x6002A60")]
			[Address(RVA = "0x6BA4BD0", Offset = "0x6BA3BD0", VA = "0x6BA4BD0")]
			get
			{
				return default(DrawOperationType);
			}
		}

		[Token(Token = "0x17000A77")]
		public VisualElement visualElement
		{
			[Token(Token = "0x6002A61")]
			[Address(RVA = "0x6BA4BE0", Offset = "0x6BA3BE0", VA = "0x6BA4BE0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A78")]
		public RenderTree renderTree
		{
			[Token(Token = "0x6002A62")]
			[Address(RVA = "0x6BA4BF0", Offset = "0x6BA3BF0", VA = "0x6BA4BF0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A79")]
		public PostProcessingPass FilterPass
		{
			[Token(Token = "0x6002A63")]
			[Address(RVA = "0x6BA4C00", Offset = "0x6BA3C00", VA = "0x6BA4C00")]
			get
			{
				return default(PostProcessingPass);
			}
		}

		[Token(Token = "0x17000A7A")]
		public int FilterPassIndex
		{
			[Token(Token = "0x6002A64")]
			[Address(RVA = "0x6BA4C40", Offset = "0x6BA3C40", VA = "0x6BA4C40")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000A7B")]
		public FilterFunction filter
		{
			[Token(Token = "0x6002A65")]
			[Address(RVA = "0x6BA4C50", Offset = "0x6BA3C50", VA = "0x6BA4C50")]
			get
			{
				return default(FilterFunction);
			}
		}

		[Token(Token = "0x6002A66")]
		[Address(RVA = "0x6BA2120", Offset = "0x6BA1120", VA = "0x6BA2120")]
		public void Init(VisualElement ve, in PostProcessingPass filterPass, int filterPassIndex, FilterFunction filter)
		{
		}

		[Token(Token = "0x6002A67")]
		[Address(RVA = "0x6BA1930", Offset = "0x6BA0930", VA = "0x6BA1930")]
		public void Init(RenderTree renderTree)
		{
		}

		[Token(Token = "0x6002A68")]
		[Address(RVA = "0x6BA4CA0", Offset = "0x6BA3CA0", VA = "0x6BA4CA0")]
		private void InitPointers()
		{
		}

		[Token(Token = "0x6002A69")]
		[Address(RVA = "0x6BA49A0", Offset = "0x6BA39A0", VA = "0x6BA49A0")]
		public void Reset()
		{
		}

		[Token(Token = "0x6002A6A")]
		[Address(RVA = "0x6BA22B0", Offset = "0x6BA12B0", VA = "0x6BA22B0")]
		public void AddChild(DrawOperation op)
		{
		}

		[Token(Token = "0x6002A6B")]
		[Address(RVA = "0x6BA4D30", Offset = "0x6BA3D30", VA = "0x6BA4D30")]
		public DrawOperation()
		{
		}
	}

	[Token(Token = "0x4001452")]
	[FieldOffset(Offset = "0x10")]
	private readonly RenderTreeManager m_RenderTreeManager;

	[Token(Token = "0x4001453")]
	[FieldOffset(Offset = "0x18")]
	private DrawOperation m_RootOperation;

	[Token(Token = "0x4001454")]
	[FieldOffset(Offset = "0x20")]
	private List<RenderTexture> m_AllocatedTextures;

	[Token(Token = "0x4001455")]
	[FieldOffset(Offset = "0x28")]
	private MaterialPropertyBlock m_Block;

	[Token(Token = "0x4001456")]
	[FieldOffset(Offset = "0x30")]
	private ObjectPool<DrawOperation> m_DrawOperationPool;

	[Token(Token = "0x4001457")]
	[FieldOffset(Offset = "0x38")]
	private float m_PixelsPerPoint;

	[Token(Token = "0x4001458")]
	private const float k_PixelSnapTolerance = 0.01f;

	[Token(Token = "0x4001459")]
	[FieldOffset(Offset = "0x0")]
	private static Vector4[] s_UVRects;

	[Token(Token = "0x17000A75")]
	protected bool disposed
	{
		[Token(Token = "0x6002A5B")]
		[Address(RVA = "0x6BA4AA0", Offset = "0x6BA3AA0", VA = "0x6BA4AA0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002A5C")]
		[Address(RVA = "0x6BA4AB0", Offset = "0x6BA3AB0", VA = "0x6BA4AB0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002A49")]
	[Address(RVA = "0x6BA0180", Offset = "0x6B9F180", VA = "0x6BA0180")]
	public RenderTreeCompositor(RenderTreeManager owner)
	{
	}

	[Token(Token = "0x6002A4A")]
	[Address(RVA = "0x6BA0360", Offset = "0x6B9F360", VA = "0x6BA0360")]
	public void Update(RenderTree rootRenderTree)
	{
	}

	[Token(Token = "0x6002A4B")]
	[Address(RVA = "0x6BA0560", Offset = "0x6B9F560", VA = "0x6BA0560")]
	private void BuildDrawOperationTree(RenderTree rootRenderTree)
	{
	}

	[Token(Token = "0x6002A4C")]
	[Address(RVA = "0x6BA1A10", Offset = "0x6BA0A10", VA = "0x6BA1A10")]
	private void AddChildrenOperations_DepthFirst(DrawOperation parentOperation, RenderTree renderTree)
	{
	}

	[Token(Token = "0x6002A4D")]
	[Address(RVA = "0x6BA2380", Offset = "0x6BA1380", VA = "0x6BA2380")]
	private static PostProcessingMargins GetReadMargins(PostProcessingPass effect, FilterFunction func)
	{
		return default(PostProcessingMargins);
	}

	[Token(Token = "0x6002A4E")]
	[Address(RVA = "0x6BA2400", Offset = "0x6BA1400", VA = "0x6BA2400")]
	private static PostProcessingMargins GetWriteMargins(PostProcessingPass effect, FilterFunction func)
	{
		return default(PostProcessingMargins);
	}

	[Token(Token = "0x6002A4F")]
	[Address(RVA = "0x6BA0610", Offset = "0x6B9F610", VA = "0x6BA0610")]
	private void UpdateDrawBounds_PostOrder(DrawOperation op)
	{
	}

	[Token(Token = "0x6002A50")]
	[Address(RVA = "0x6BA2720", Offset = "0x6BA1720", VA = "0x6BA2720")]
	private static Rect ScaleRect(Rect r, float scale)
	{
		return default(Rect);
	}

	[Token(Token = "0x6002A51")]
	[Address(RVA = "0x6BA2480", Offset = "0x6BA1480", VA = "0x6BA2480")]
	private Rect PixelsToPoints(RectInt r)
	{
		return default(Rect);
	}

	[Token(Token = "0x6002A52")]
	[Address(RVA = "0x6BA27B0", Offset = "0x6BA17B0", VA = "0x6BA27B0")]
	private static Rect InflateByMargins(Rect r, PostProcessingMargins margins, float scale)
	{
		return default(Rect);
	}

	[Token(Token = "0x6002A53")]
	[Address(RVA = "0x6BA2870", Offset = "0x6BA1870", VA = "0x6BA2870")]
	internal static RectInt SnapOutwardToPixels(Rect r)
	{
		return default(RectInt);
	}

	[Token(Token = "0x6002A54")]
	[Address(RVA = "0x6BA2B00", Offset = "0x6BA1B00", VA = "0x6BA2B00")]
	private static int SnapMaxOutward(int snappedMin, float max, float extent)
	{
		return default(int);
	}

	[Token(Token = "0x6002A55")]
	[Address(RVA = "0x6BA16F0", Offset = "0x6BA06F0", VA = "0x6BA16F0")]
	private void AssignTextureIds_DepthFirst(DrawOperation op)
	{
	}

	[Token(Token = "0x6002A56")]
	[Address(RVA = "0x6BA2BB0", Offset = "0x6BA1BB0", VA = "0x6BA2BB0")]
	public void RenderNestedPasses()
	{
	}

	[Token(Token = "0x6002A57")]
	[Address(RVA = "0x6BA2BC0", Offset = "0x6BA1BC0", VA = "0x6BA2BC0")]
	private void ExecuteDrawOperation_PostOrder(DrawOperation op)
	{
	}

	[Token(Token = "0x6002A58")]
	[Address(RVA = "0x6BA3A10", Offset = "0x6BA2A10", VA = "0x6BA3A10")]
	private void ApplyEffectParameters(PostProcessingPass effect, FilterFunction filter, VisualElement source, bool readsGamma)
	{
	}

	[Token(Token = "0x6002A59")]
	[Address(RVA = "0x6BA03D0", Offset = "0x6B9F3D0", VA = "0x6BA03D0")]
	private void CleanupOperationTree()
	{
	}

	[Token(Token = "0x6002A5A")]
	[Address(RVA = "0x6BA4760", Offset = "0x6BA3760", VA = "0x6BA4760")]
	private void CleanupOperation_PostOrder(DrawOperation op)
	{
	}

	[Token(Token = "0x6002A5D")]
	[Address(RVA = "0x6BA4AC0", Offset = "0x6BA3AC0", VA = "0x6BA4AC0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002A5E")]
	[Address(RVA = "0x6BA4B40", Offset = "0x6BA3B40", VA = "0x6BA4B40")]
	protected void Dispose(bool disposing)
	{
	}
}
