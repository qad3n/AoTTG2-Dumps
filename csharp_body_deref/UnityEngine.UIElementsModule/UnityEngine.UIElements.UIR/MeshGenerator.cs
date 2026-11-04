// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.MeshGenerator
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Jobs;
using Unity.Profiling;
using UnityEngine.TextCore.LowLevel;
using UnityEngine.TextCore.Text;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005A9")]
internal class MeshGenerator : IMeshGenerator, IDisposable
{
	[Token(Token = "0x20005AA")]
	private struct RepeatRectUV
	{
		[Token(Token = "0x400143D")]
		[FieldOffset(Offset = "0x0")]
		public Rect rect;

		[Token(Token = "0x400143E")]
		[FieldOffset(Offset = "0x10")]
		public Rect uv;
	}

	[Token(Token = "0x20005AB")]
	public struct BackgroundRepeatInstance
	{
		[Token(Token = "0x400143F")]
		[FieldOffset(Offset = "0x0")]
		public Rect rect;

		[Token(Token = "0x4001440")]
		[FieldOffset(Offset = "0x10")]
		public Rect backgroundRepeatRect;

		[Token(Token = "0x4001441")]
		[FieldOffset(Offset = "0x20")]
		public Rect uv;
	}

	[Token(Token = "0x20005AC")]
	public struct BorderParams
	{
		[Token(Token = "0x4001442")]
		[FieldOffset(Offset = "0x0")]
		public Rect rect;

		[Token(Token = "0x4001443")]
		[FieldOffset(Offset = "0x10")]
		public Color playmodeTintColor;

		[Token(Token = "0x4001444")]
		[FieldOffset(Offset = "0x20")]
		public Color leftColor;

		[Token(Token = "0x4001445")]
		[FieldOffset(Offset = "0x30")]
		public Color topColor;

		[Token(Token = "0x4001446")]
		[FieldOffset(Offset = "0x40")]
		public Color rightColor;

		[Token(Token = "0x4001447")]
		[FieldOffset(Offset = "0x50")]
		public Color bottomColor;

		[Token(Token = "0x4001448")]
		[FieldOffset(Offset = "0x60")]
		public float leftWidth;

		[Token(Token = "0x4001449")]
		[FieldOffset(Offset = "0x64")]
		public float topWidth;

		[Token(Token = "0x400144A")]
		[FieldOffset(Offset = "0x68")]
		public float rightWidth;

		[Token(Token = "0x400144B")]
		[FieldOffset(Offset = "0x6C")]
		public float bottomWidth;

		[Token(Token = "0x400144C")]
		[FieldOffset(Offset = "0x70")]
		public Vector2 topLeftRadius;

		[Token(Token = "0x400144D")]
		[FieldOffset(Offset = "0x78")]
		public Vector2 topRightRadius;

		[Token(Token = "0x400144E")]
		[FieldOffset(Offset = "0x80")]
		public Vector2 bottomRightRadius;

		[Token(Token = "0x400144F")]
		[FieldOffset(Offset = "0x88")]
		public Vector2 bottomLeftRadius;

		[Token(Token = "0x4001450")]
		[FieldOffset(Offset = "0x90")]
		internal ColorPage leftColorPage;

		[Token(Token = "0x4001451")]
		[FieldOffset(Offset = "0x98")]
		internal ColorPage topColorPage;

		[Token(Token = "0x4001452")]
		[FieldOffset(Offset = "0xA0")]
		internal ColorPage rightColorPage;

		[Token(Token = "0x4001453")]
		[FieldOffset(Offset = "0xA8")]
		internal ColorPage bottomColorPage;

		[Token(Token = "0x6002A2A")]
		[Address(RVA = "0x318E100", Offset = "0x318C700", VA = "0x18318E100")]
		internal void ToNativeParams(out MeshBuilderNative.NativeBorderParams nativeBorderParams)
		{
		}
	}

	[Token(Token = "0x20005AD")]
	public struct RectangleParams
	{
		[Token(Token = "0x4001454")]
		[FieldOffset(Offset = "0x0")]
		public Rect rect;

		[Token(Token = "0x4001455")]
		[FieldOffset(Offset = "0x10")]
		public Rect uv;

		[Token(Token = "0x4001456")]
		[FieldOffset(Offset = "0x20")]
		public Color color;

		[Token(Token = "0x4001457")]
		[FieldOffset(Offset = "0x30")]
		public Rect subRect;

		[Token(Token = "0x4001458")]
		[FieldOffset(Offset = "0x40")]
		public Rect backgroundRepeatRect;

		[Token(Token = "0x4001459")]
		[FieldOffset(Offset = "0x50")]
		public NativePagedList<BackgroundRepeatInstance> backgroundRepeatInstanceList;

		[Token(Token = "0x400145A")]
		[FieldOffset(Offset = "0x58")]
		public int backgroundRepeatInstanceListStartIndex;

		[Token(Token = "0x400145B")]
		[FieldOffset(Offset = "0x5C")]
		public int backgroundRepeatInstanceListEndIndex;

		[Token(Token = "0x400145C")]
		[FieldOffset(Offset = "0x60")]
		public BackgroundPosition backgroundPositionX;

		[Token(Token = "0x400145D")]
		[FieldOffset(Offset = "0x6C")]
		public BackgroundPosition backgroundPositionY;

		[Token(Token = "0x400145E")]
		[FieldOffset(Offset = "0x78")]
		public BackgroundRepeat backgroundRepeat;

		[Token(Token = "0x400145F")]
		[FieldOffset(Offset = "0x80")]
		public BackgroundSize backgroundSize;

		[Token(Token = "0x4001460")]
		[FieldOffset(Offset = "0x98")]
		public Texture texture;

		[Token(Token = "0x4001461")]
		[FieldOffset(Offset = "0xA0")]
		public Sprite sprite;

		[Token(Token = "0x4001462")]
		[FieldOffset(Offset = "0xA8")]
		public VectorImage vectorImage;

		[Token(Token = "0x4001463")]
		[FieldOffset(Offset = "0xB0")]
		public ScaleMode scaleMode;

		[Token(Token = "0x4001464")]
		[FieldOffset(Offset = "0xB4")]
		public Color playmodeTintColor;

		[Token(Token = "0x4001465")]
		[FieldOffset(Offset = "0xC4")]
		public Vector2 topLeftRadius;

		[Token(Token = "0x4001466")]
		[FieldOffset(Offset = "0xCC")]
		public Vector2 topRightRadius;

		[Token(Token = "0x4001467")]
		[FieldOffset(Offset = "0xD4")]
		public Vector2 bottomRightRadius;

		[Token(Token = "0x4001468")]
		[FieldOffset(Offset = "0xDC")]
		public Vector2 bottomLeftRadius;

		[Token(Token = "0x4001469")]
		[FieldOffset(Offset = "0xE4")]
		public Vector2 contentSize;

		[Token(Token = "0x400146A")]
		[FieldOffset(Offset = "0xEC")]
		public Vector2 textureSize;

		[Token(Token = "0x400146B")]
		[FieldOffset(Offset = "0xF4")]
		public int leftSlice;

		[Token(Token = "0x400146C")]
		[FieldOffset(Offset = "0xF8")]
		public int topSlice;

		[Token(Token = "0x400146D")]
		[FieldOffset(Offset = "0xFC")]
		public int rightSlice;

		[Token(Token = "0x400146E")]
		[FieldOffset(Offset = "0x100")]
		public int bottomSlice;

		[Token(Token = "0x400146F")]
		[FieldOffset(Offset = "0x104")]
		public float sliceScale;

		[Token(Token = "0x4001470")]
		[FieldOffset(Offset = "0x108")]
		internal Rect spriteGeomRect;

		[Token(Token = "0x4001471")]
		[FieldOffset(Offset = "0x118")]
		public Vector4 rectInset;

		[Token(Token = "0x4001472")]
		[FieldOffset(Offset = "0x128")]
		internal ColorPage colorPage;

		[Token(Token = "0x4001473")]
		[FieldOffset(Offset = "0x130")]
		internal MeshGenerationContext.MeshFlags meshFlags;

		[Token(Token = "0x6002A2B")]
		[Address(RVA = "0x3197FA0", Offset = "0x31965A0", VA = "0x183197FA0")]
		private static void AdjustUVsForScaleMode(Rect rect, Rect uv, Texture texture, ScaleMode scaleMode, out Rect rectOut, out Rect uvOut)
		{
		}

		[Token(Token = "0x6002A2C")]
		[Address(RVA = "0x31979D0", Offset = "0x3195FD0", VA = "0x1831979D0")]
		private static void AdjustSpriteUVsForScaleMode(Rect containerRect, Rect srcRect, Rect spriteGeomRect, Sprite sprite, ScaleMode scaleMode, out Rect rectOut, out Rect uvOut)
		{
		}

		[Token(Token = "0x6002A2D")]
		[Address(RVA = "0x3199870", Offset = "0x3197E70", VA = "0x183199870")]
		internal static Rect RectIntersection(Rect a, Rect b)
		{
			return default(Rect);
		}

		[Token(Token = "0x6002A2E")]
		[Address(RVA = "0x3198370", Offset = "0x3196970", VA = "0x183198370")]
		private static Rect ComputeGeomRect(Sprite sprite)
		{
			return default(Rect);
		}

		[Token(Token = "0x6002A2F")]
		[Address(RVA = "0x3198440", Offset = "0x3196A40", VA = "0x183198440")]
		private static Rect ComputeUVRect(Sprite sprite)
		{
			return default(Rect);
		}

		[Token(Token = "0x6002A30")]
		[Address(RVA = "0x3198220", Offset = "0x3196820", VA = "0x183198220")]
		private static Rect ApplyPackingRotation(Rect uv, SpritePackingRotation rotation)
		{
			return default(Rect);
		}

		[Token(Token = "0x6002A31")]
		[Address(RVA = "0x3199480", Offset = "0x3197A80", VA = "0x183199480")]
		public static RectangleParams MakeTextured(Rect rect, Rect uv, Texture texture, ScaleMode scaleMode, Color playModeTintColor)
		{
			return default(RectangleParams);
		}

		[Token(Token = "0x6002A32")]
		[Address(RVA = "0x31985E0", Offset = "0x3196BE0", VA = "0x1831985E0")]
		public static RectangleParams MakeSprite(Rect containerRect, Rect subRect, Sprite sprite, ScaleMode scaleMode, Color playModeTintColor, bool hasRadius, ref Vector4 slices, bool useForRepeat = false)
		{
			return default(RectangleParams);
		}

		[Token(Token = "0x6002A33")]
		[Address(RVA = "0x31996B0", Offset = "0x3197CB0", VA = "0x1831996B0")]
		public static RectangleParams MakeVectorTextured(Rect rect, Rect uv, VectorImage vectorImage, ScaleMode scaleMode, Color playModeTintColor)
		{
			return default(RectangleParams);
		}

		[Token(Token = "0x6002A34")]
		[Address(RVA = "0x3198510", Offset = "0x3196B10", VA = "0x183198510")]
		internal bool HasRadius(float epsilon)
		{
			return default(bool);
		}

		[Token(Token = "0x6002A35")]
		[Address(RVA = "0x3198590", Offset = "0x3196B90", VA = "0x183198590")]
		internal bool HasSlices(float epsilon)
		{
			return default(bool);
		}

		[Token(Token = "0x6002A36")]
		[Address(RVA = "0x3199AF0", Offset = "0x31980F0", VA = "0x183199AF0")]
		internal void ToNativeParams(out MeshBuilderNative.NativeRectParams nativeRectParams)
		{
		}
	}

	[Token(Token = "0x20005AE")]
	private struct TessellationJobParameters
	{
		[Token(Token = "0x4001474")]
		[FieldOffset(Offset = "0x0")]
		public bool isBorderJob;

		[Token(Token = "0x4001475")]
		[FieldOffset(Offset = "0x8")]
		public MeshBuilderNative.NativeRectParams rectParams;

		[Token(Token = "0x4001476")]
		[FieldOffset(Offset = "0x120")]
		public BorderParams borderParams;

		[Token(Token = "0x4001477")]
		[FieldOffset(Offset = "0x1D0")]
		public UnsafeMeshGenerationNode node;
	}

	[Token(Token = "0x20005AF")]
	private struct TessellationJob : IJobParallelFor
	{
		[Token(Token = "0x4001478")]
		[FieldOffset(Offset = "0x0")]
		[ReadOnly]
		public TempMeshAllocator allocator;

		[Token(Token = "0x4001479")]
		[FieldOffset(Offset = "0x8")]
		[ReadOnly]
		public NativeSlice<TessellationJobParameters> jobParameters;

		[Token(Token = "0x6002A37")]
		[Address(RVA = "0x31A1B70", Offset = "0x31A0170", VA = "0x1831A1B70", Slot = "4")]
		public void Execute(int i)
		{
		}

		[Token(Token = "0x6002A38")]
		private T ExtractHandle<T>(IntPtr handlePtr) where T : class
		{
			return null;
		}

		[Token(Token = "0x6002A39")]
		[Address(RVA = "0x31A0050", Offset = "0x319E650", VA = "0x1831A0050")]
		private void DrawBorder(UnsafeMeshGenerationNode node, ref BorderParams borderParams)
		{
		}

		[Token(Token = "0x6002A3A")]
		[Address(RVA = "0x31A03E0", Offset = "0x319E9E0", VA = "0x1831A03E0")]
		private void DrawRectangle(UnsafeMeshGenerationNode node, ref MeshBuilderNative.NativeRectParams rectParams, Texture tex)
		{
		}

		[Token(Token = "0x6002A3B")]
		[Address(RVA = "0x31A0EE0", Offset = "0x319F4E0", VA = "0x1831A0EE0")]
		private void DrawSprite(UnsafeMeshGenerationNode node, ref MeshBuilderNative.NativeRectParams rectParams, Sprite sprite)
		{
		}

		[Token(Token = "0x6002A3C")]
		[Address(RVA = "0x31A1480", Offset = "0x319FA80", VA = "0x1831A1480")]
		private void DrawVectorImage(UnsafeMeshGenerationNode node, ref MeshBuilderNative.NativeRectParams rectParams, VectorImage vi)
		{
		}
	}

	[Token(Token = "0x4001427")]
	[FieldOffset(Offset = "0x0")]
	private static readonly MemoryLabel k_MemoryLabel;

	[Token(Token = "0x4001428")]
	[FieldOffset(Offset = "0x10")]
	private static readonly ProfilerMarker k_MarkerDrawRectangle;

	[Token(Token = "0x4001429")]
	[FieldOffset(Offset = "0x18")]
	private static readonly ProfilerMarker k_MarkerDrawBorder;

	[Token(Token = "0x400142A")]
	[FieldOffset(Offset = "0x20")]
	private static readonly ProfilerMarker k_MarkerDrawVectorImage;

	[Token(Token = "0x400142B")]
	[FieldOffset(Offset = "0x28")]
	private static readonly ProfilerMarker k_MarkerDrawRectangleRepeat;

	[Token(Token = "0x400142C")]
	[FieldOffset(Offset = "0x10")]
	private MeshGenerationContext m_MeshGenerationContext;

	[Token(Token = "0x400142D")]
	[FieldOffset(Offset = "0x18")]
	private List<RepeatRectUV>[] m_RepeatRectUVList;

	[Token(Token = "0x400142E")]
	[FieldOffset(Offset = "0x20")]
	private NativePagedList<BackgroundRepeatInstance> m_BackgroundRepeatInstanceList;

	[Token(Token = "0x400142F")]
	[FieldOffset(Offset = "0x28")]
	private GCHandlePool m_GCHandlePool;

	[Token(Token = "0x4001430")]
	[FieldOffset(Offset = "0x30")]
	private NativeArray<TessellationJobParameters> m_JobParameters;

	[Token(Token = "0x4001433")]
	[FieldOffset(Offset = "0x50")]
	private UnityEngine.TextCore.Text.TextInfo m_TextInfo;

	[Token(Token = "0x4001434")]
	[FieldOffset(Offset = "0x58")]
	private UnityEngine.TextCore.Text.TextGenerationSettings m_Settings;

	[Token(Token = "0x4001435")]
	[FieldOffset(Offset = "0x60")]
	private List<NativeSlice<Vertex>> m_VerticesArray;

	[Token(Token = "0x4001436")]
	[FieldOffset(Offset = "0x68")]
	private List<NativeSlice<ushort>> m_IndicesArray;

	[Token(Token = "0x4001437")]
	[FieldOffset(Offset = "0x70")]
	private List<Texture2D> m_Atlases;

	[Token(Token = "0x4001438")]
	[FieldOffset(Offset = "0x78")]
	private List<float> m_SdfScales;

	[Token(Token = "0x4001439")]
	[FieldOffset(Offset = "0x80")]
	private List<GlyphRenderMode> m_RenderModes;

	[Token(Token = "0x400143A")]
	[FieldOffset(Offset = "0x88")]
	private MeshGenerationCallback m_OnMeshGenerationDelegate;

	[Token(Token = "0x400143B")]
	[FieldOffset(Offset = "0x90")]
	private List<TessellationJobParameters> m_TesselationJobParameters;

	[Token(Token = "0x17000A6C")]
	public VisualElement currentElement
	{
		[Token(Token = "0x6002A13")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700", Slot = "4")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A6D")]
	public TextJobSystem textJobSystem
	{
		[Token(Token = "0x6002A14")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002A15")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10", Slot = "13")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A6E")]
	internal bool disposed
	{
		[Token(Token = "0x6002A25")]
		[Address(RVA = "0xA4D590", Offset = "0xA4BB90", VA = "0x180A4D590")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002A26")]
		[Address(RVA = "0xA4D740", Offset = "0xA4BD40", VA = "0x180A4D740")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002A12")]
	[Address(RVA = "0x3196F40", Offset = "0x3195540", VA = "0x183196F40")]
	public MeshGenerator(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6002A16")]
	[Address(RVA = "0x3191CA0", Offset = "0x31902A0", VA = "0x183191CA0")]
	private static Vector2 ConvertBorderRadiusPercentToPoints(Vector2 borderRectSize, Length length)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6002A17")]
	[Address(RVA = "0x3195B00", Offset = "0x3194100", VA = "0x183195B00")]
	public static void GetVisualElementRadii(VisualElement ve, out Vector2 topLeft, out Vector2 bottomLeft, out Vector2 topRight, out Vector2 bottomRight)
	{
	}

	[Token(Token = "0x6002A18")]
	[Address(RVA = "0x31914C0", Offset = "0x318FAC0", VA = "0x1831914C0")]
	public static void AdjustBackgroundSizeForBorders(VisualElement visualElement, ref RectangleParams rectParams)
	{
	}

	[Token(Token = "0x6002A19")]
	[Address(RVA = "0x3195810", Offset = "0x3193E10", VA = "0x183195810", Slot = "7")]
	public void DrawText(List<NativeSlice<Vertex>> vertices, List<NativeSlice<ushort>> indices, List<Material> materials, List<GlyphRenderMode> renderModes)
	{
	}

	[Token(Token = "0x6002A1A")]
	[Address(RVA = "0x31954D0", Offset = "0x3193AD0", VA = "0x1831954D0", Slot = "6")]
	public void DrawText(List<NativeSlice<Vertex>> vertices, List<NativeSlice<ushort>> indices, List<Texture2D> atlases, List<GlyphRenderMode> renderModes, List<float> sdfScales)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002A1B")]
	[Address(RVA = "0x3191D10", Offset = "0x3190310", VA = "0x183191D10")]
	internal static Vertex ConvertTextVertexToUIRVertex(ref UnityEngine.TextCore.Text.TextCoreVertex vertex, Vector2 posOffset, float inverseScale, bool isDynamicColor = false, bool isColorGlyph = false, bool isTextCore = false)
	{
		return default(Vertex);
	}

	[Token(Token = "0x6002A1C")]
	[Address(RVA = "0x3195DF0", Offset = "0x31943F0", VA = "0x183195DF0")]
	private void MakeText(Texture texture, NativeSlice<Vertex> vertices, NativeSlice<ushort> indices, bool isSdf, float sdfScale, float sharpness, bool multiChannel)
	{
	}

	[Token(Token = "0x6002A1D")]
	[Address(RVA = "0x3194900", Offset = "0x3192F00", VA = "0x183194900", Slot = "8")]
	public void DrawRectangle(RectangleParams rectParams)
	{
	}

	[Token(Token = "0x6002A1E")]
	[Address(RVA = "0x3194650", Offset = "0x3192C50", VA = "0x183194650", Slot = "9")]
	public void DrawBorder(BorderParams borderParams)
	{
	}

	[Token(Token = "0x6002A1F")]
	[Address(RVA = "0x31948D0", Offset = "0x3192ED0", VA = "0x1831948D0", Slot = "10")]
	public void DrawRectangleRepeat(RectangleParams rectParams, Rect totalRect, float scaledPixelsPerPoint)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002A20")]
	[Address(RVA = "0x31920E0", Offset = "0x31906E0", VA = "0x1831920E0")]
	private void DoDrawRectangleRepeat(ref RectangleParams rectParams, Rect totalRect, float scaledPixelsPerPoint)
	{
	}

	[Token(Token = "0x6002A21")]
	[Address(RVA = "0x3196370", Offset = "0x3194970", VA = "0x183196370")]
	private void StampRectangleWithSubRect(RectangleParams rectParams, Rect targetRect, Rect totalRect, Rect targetUV, ref NativePagedList<BackgroundRepeatInstance> backgroundRepeatInstanceList)
	{
	}

	[Token(Token = "0x6002A22")]
	[Address(RVA = "0x31918B0", Offset = "0x318FEB0", VA = "0x1831918B0")]
	private static void AdjustSpriteWinding(Vector2[] vertices, ushort[] indices, NativeSlice<ushort> newIndices)
	{
	}

	[Token(Token = "0x6002A23")]
	[Address(RVA = "0x3195F90", Offset = "0x3194590", VA = "0x183195F90", Slot = "11")]
	public void ScheduleJobs(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6002A24")]
	[Address(RVA = "0x3195F30", Offset = "0x3194530", VA = "0x183195F30")]
	private void OnMeshGeneration(MeshGenerationContext ctx, object data)
	{
	}

	[Token(Token = "0x6002A27")]
	[Address(RVA = "0x3191F80", Offset = "0x3190580", VA = "0x183191F80", Slot = "12")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002A28")]
	[Address(RVA = "0x3192040", Offset = "0x3190640", VA = "0x183192040")]
	private void Dispose(bool disposing)
	{
	}
}
