// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.MeshGenerator
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000594")]
internal class MeshGenerator : IMeshGenerator, IDisposable
{
	[Token(Token = "0x2000595")]
	private struct RepeatRectUV
	{
		[Token(Token = "0x400137F")]
		[FieldOffset(Offset = "0x0")]
		public Rect rect;

		[Token(Token = "0x4001380")]
		[FieldOffset(Offset = "0x10")]
		public Rect uv;
	}

	[Token(Token = "0x2000596")]
	public struct BackgroundRepeatInstance
	{
		[Token(Token = "0x4001381")]
		[FieldOffset(Offset = "0x0")]
		public Rect rect;

		[Token(Token = "0x4001382")]
		[FieldOffset(Offset = "0x10")]
		public Rect backgroundRepeatRect;

		[Token(Token = "0x4001383")]
		[FieldOffset(Offset = "0x20")]
		public Rect uv;
	}

	[Token(Token = "0x2000597")]
	public struct BorderParams
	{
		[Token(Token = "0x4001384")]
		[FieldOffset(Offset = "0x0")]
		public Rect rect;

		[Token(Token = "0x4001385")]
		[FieldOffset(Offset = "0x10")]
		public Color playmodeTintColor;

		[Token(Token = "0x4001386")]
		[FieldOffset(Offset = "0x20")]
		public Color leftColor;

		[Token(Token = "0x4001387")]
		[FieldOffset(Offset = "0x30")]
		public Color topColor;

		[Token(Token = "0x4001388")]
		[FieldOffset(Offset = "0x40")]
		public Color rightColor;

		[Token(Token = "0x4001389")]
		[FieldOffset(Offset = "0x50")]
		public Color bottomColor;

		[Token(Token = "0x400138A")]
		[FieldOffset(Offset = "0x60")]
		public float leftWidth;

		[Token(Token = "0x400138B")]
		[FieldOffset(Offset = "0x64")]
		public float topWidth;

		[Token(Token = "0x400138C")]
		[FieldOffset(Offset = "0x68")]
		public float rightWidth;

		[Token(Token = "0x400138D")]
		[FieldOffset(Offset = "0x6C")]
		public float bottomWidth;

		[Token(Token = "0x400138E")]
		[FieldOffset(Offset = "0x70")]
		public Vector2 topLeftRadius;

		[Token(Token = "0x400138F")]
		[FieldOffset(Offset = "0x78")]
		public Vector2 topRightRadius;

		[Token(Token = "0x4001390")]
		[FieldOffset(Offset = "0x80")]
		public Vector2 bottomRightRadius;

		[Token(Token = "0x4001391")]
		[FieldOffset(Offset = "0x88")]
		public Vector2 bottomLeftRadius;

		[Token(Token = "0x4001392")]
		[FieldOffset(Offset = "0x90")]
		internal ColorPage leftColorPage;

		[Token(Token = "0x4001393")]
		[FieldOffset(Offset = "0x98")]
		internal ColorPage topColorPage;

		[Token(Token = "0x4001394")]
		[FieldOffset(Offset = "0xA0")]
		internal ColorPage rightColorPage;

		[Token(Token = "0x4001395")]
		[FieldOffset(Offset = "0xA8")]
		internal ColorPage bottomColorPage;

		[Token(Token = "0x60029C9")]
		[Address(RVA = "0x6B92800", Offset = "0x6B91800", VA = "0x6B92800")]
		internal void ToNativeParams(out MeshBuilderNative.NativeBorderParams nativeBorderParams)
		{
		}
	}

	[Token(Token = "0x2000598")]
	public struct RectangleParams
	{
		[Token(Token = "0x4001396")]
		[FieldOffset(Offset = "0x0")]
		public Rect rect;

		[Token(Token = "0x4001397")]
		[FieldOffset(Offset = "0x10")]
		public Rect uv;

		[Token(Token = "0x4001398")]
		[FieldOffset(Offset = "0x20")]
		public Color color;

		[Token(Token = "0x4001399")]
		[FieldOffset(Offset = "0x30")]
		public Rect subRect;

		[Token(Token = "0x400139A")]
		[FieldOffset(Offset = "0x40")]
		public Rect backgroundRepeatRect;

		[Token(Token = "0x400139B")]
		[FieldOffset(Offset = "0x50")]
		public NativePagedList<BackgroundRepeatInstance> backgroundRepeatInstanceList;

		[Token(Token = "0x400139C")]
		[FieldOffset(Offset = "0x58")]
		public int backgroundRepeatInstanceListStartIndex;

		[Token(Token = "0x400139D")]
		[FieldOffset(Offset = "0x5C")]
		public int backgroundRepeatInstanceListEndIndex;

		[Token(Token = "0x400139E")]
		[FieldOffset(Offset = "0x60")]
		public BackgroundPosition backgroundPositionX;

		[Token(Token = "0x400139F")]
		[FieldOffset(Offset = "0x6C")]
		public BackgroundPosition backgroundPositionY;

		[Token(Token = "0x40013A0")]
		[FieldOffset(Offset = "0x78")]
		public BackgroundRepeat backgroundRepeat;

		[Token(Token = "0x40013A1")]
		[FieldOffset(Offset = "0x80")]
		public BackgroundSize backgroundSize;

		[Token(Token = "0x40013A2")]
		[FieldOffset(Offset = "0x98")]
		public Texture texture;

		[Token(Token = "0x40013A3")]
		[FieldOffset(Offset = "0xA0")]
		public Sprite sprite;

		[Token(Token = "0x40013A4")]
		[FieldOffset(Offset = "0xA8")]
		public VectorImage vectorImage;

		[Token(Token = "0x40013A5")]
		[FieldOffset(Offset = "0xB0")]
		public ScaleMode scaleMode;

		[Token(Token = "0x40013A6")]
		[FieldOffset(Offset = "0xB4")]
		public Color playmodeTintColor;

		[Token(Token = "0x40013A7")]
		[FieldOffset(Offset = "0xC4")]
		public Vector2 topLeftRadius;

		[Token(Token = "0x40013A8")]
		[FieldOffset(Offset = "0xCC")]
		public Vector2 topRightRadius;

		[Token(Token = "0x40013A9")]
		[FieldOffset(Offset = "0xD4")]
		public Vector2 bottomRightRadius;

		[Token(Token = "0x40013AA")]
		[FieldOffset(Offset = "0xDC")]
		public Vector2 bottomLeftRadius;

		[Token(Token = "0x40013AB")]
		[FieldOffset(Offset = "0xE4")]
		public Vector2 contentSize;

		[Token(Token = "0x40013AC")]
		[FieldOffset(Offset = "0xEC")]
		public Vector2 textureSize;

		[Token(Token = "0x40013AD")]
		[FieldOffset(Offset = "0xF4")]
		public int leftSlice;

		[Token(Token = "0x40013AE")]
		[FieldOffset(Offset = "0xF8")]
		public int topSlice;

		[Token(Token = "0x40013AF")]
		[FieldOffset(Offset = "0xFC")]
		public int rightSlice;

		[Token(Token = "0x40013B0")]
		[FieldOffset(Offset = "0x100")]
		public int bottomSlice;

		[Token(Token = "0x40013B1")]
		[FieldOffset(Offset = "0x104")]
		public float sliceScale;

		[Token(Token = "0x40013B2")]
		[FieldOffset(Offset = "0x108")]
		internal Rect spriteGeomRect;

		[Token(Token = "0x40013B3")]
		[FieldOffset(Offset = "0x118")]
		public Vector4 rectInset;

		[Token(Token = "0x40013B4")]
		[FieldOffset(Offset = "0x128")]
		internal ColorPage colorPage;

		[Token(Token = "0x40013B5")]
		[FieldOffset(Offset = "0x130")]
		internal MeshGenerationContext.MeshFlags meshFlags;

		[Token(Token = "0x60029CA")]
		[Address(RVA = "0x6B92920", Offset = "0x6B91920", VA = "0x6B92920")]
		private static void AdjustUVsForScaleMode(Rect rect, Rect uv, Texture texture, ScaleMode scaleMode, out Rect rectOut, out Rect uvOut)
		{
		}

		[Token(Token = "0x60029CB")]
		[Address(RVA = "0x6B92C50", Offset = "0x6B91C50", VA = "0x6B92C50")]
		private static void AdjustSpriteUVsForScaleMode(Rect containerRect, Rect srcRect, Rect spriteGeomRect, Sprite sprite, ScaleMode scaleMode, out Rect rectOut, out Rect uvOut)
		{
		}

		[Token(Token = "0x60029CC")]
		[Address(RVA = "0x6B93380", Offset = "0x6B92380", VA = "0x6B93380")]
		internal static Rect RectIntersection(Rect a, Rect b)
		{
			return default(Rect);
		}

		[Token(Token = "0x60029CD")]
		[Address(RVA = "0x6B93690", Offset = "0x6B92690", VA = "0x6B93690")]
		private static Rect ComputeGeomRect(Sprite sprite)
		{
			return default(Rect);
		}

		[Token(Token = "0x60029CE")]
		[Address(RVA = "0x6B93770", Offset = "0x6B92770", VA = "0x6B93770")]
		private static Rect ComputeUVRect(Sprite sprite)
		{
			return default(Rect);
		}

		[Token(Token = "0x60029CF")]
		[Address(RVA = "0x6B93850", Offset = "0x6B92850", VA = "0x6B93850")]
		private static Rect ApplyPackingRotation(Rect uv, SpritePackingRotation rotation)
		{
			return default(Rect);
		}

		[Token(Token = "0x60029D0")]
		[Address(RVA = "0x6B93980", Offset = "0x6B92980", VA = "0x6B93980")]
		public static RectangleParams MakeTextured(Rect rect, Rect uv, Texture texture, ScaleMode scaleMode, Color playModeTintColor)
		{
			return default(RectangleParams);
		}

		[Token(Token = "0x60029D1")]
		[Address(RVA = "0x6B93AD0", Offset = "0x6B92AD0", VA = "0x6B93AD0")]
		public static RectangleParams MakeSprite(Rect containerRect, Rect subRect, Sprite sprite, ScaleMode scaleMode, Color playModeTintColor, bool hasRadius, ref Vector4 slices, bool useForRepeat = false)
		{
			return default(RectangleParams);
		}

		[Token(Token = "0x60029D2")]
		[Address(RVA = "0x6B94820", Offset = "0x6B93820", VA = "0x6B94820")]
		public static RectangleParams MakeVectorTextured(Rect rect, Rect uv, VectorImage vectorImage, ScaleMode scaleMode, Color playModeTintColor)
		{
			return default(RectangleParams);
		}

		[Token(Token = "0x60029D3")]
		[Address(RVA = "0x6B94980", Offset = "0x6B93980", VA = "0x6B94980")]
		internal bool HasRadius(float epsilon)
		{
			return default(bool);
		}

		[Token(Token = "0x60029D4")]
		[Address(RVA = "0x6B94A00", Offset = "0x6B93A00", VA = "0x6B94A00")]
		internal bool HasSlices(float epsilon)
		{
			return default(bool);
		}

		[Token(Token = "0x60029D5")]
		[Address(RVA = "0x6B94A50", Offset = "0x6B93A50", VA = "0x6B94A50")]
		internal void ToNativeParams(out MeshBuilderNative.NativeRectParams nativeRectParams)
		{
		}
	}

	[Token(Token = "0x2000599")]
	private struct TessellationJobParameters
	{
		[Token(Token = "0x40013B6")]
		[FieldOffset(Offset = "0x0")]
		public bool isBorderJob;

		[Token(Token = "0x40013B7")]
		[FieldOffset(Offset = "0x8")]
		public MeshBuilderNative.NativeRectParams rectParams;

		[Token(Token = "0x40013B8")]
		[FieldOffset(Offset = "0x120")]
		public BorderParams borderParams;

		[Token(Token = "0x40013B9")]
		[FieldOffset(Offset = "0x1D0")]
		public UnsafeMeshGenerationNode node;
	}

	[Token(Token = "0x200059A")]
	private struct TessellationJob : IJobParallelFor
	{
		[Token(Token = "0x40013BA")]
		[FieldOffset(Offset = "0x0")]
		[ReadOnly]
		public TempMeshAllocator allocator;

		[Token(Token = "0x40013BB")]
		[FieldOffset(Offset = "0x8")]
		[ReadOnly]
		public NativeSlice<TessellationJobParameters> jobParameters;

		[Token(Token = "0x60029D6")]
		[Address(RVA = "0x6B94C50", Offset = "0x6B93C50", VA = "0x6B94C50", Slot = "4")]
		public void Execute(int i)
		{
		}

		[Token(Token = "0x60029D7")]
		private T ExtractHandle<T>(IntPtr handlePtr) where T : class
		{
			return null;
		}

		[Token(Token = "0x60029D8")]
		[Address(RVA = "0x6B94DA0", Offset = "0x6B93DA0", VA = "0x6B94DA0")]
		private void DrawBorder(UnsafeMeshGenerationNode node, ref BorderParams borderParams)
		{
		}

		[Token(Token = "0x60029D9")]
		[Address(RVA = "0x6B95B40", Offset = "0x6B94B40", VA = "0x6B95B40")]
		private void DrawRectangle(UnsafeMeshGenerationNode node, ref MeshBuilderNative.NativeRectParams rectParams, Texture tex)
		{
		}

		[Token(Token = "0x60029DA")]
		[Address(RVA = "0x6B95640", Offset = "0x6B94640", VA = "0x6B95640")]
		private void DrawSprite(UnsafeMeshGenerationNode node, ref MeshBuilderNative.NativeRectParams rectParams, Sprite sprite)
		{
		}

		[Token(Token = "0x60029DB")]
		[Address(RVA = "0x6B95190", Offset = "0x6B94190", VA = "0x6B95190")]
		private void DrawVectorImage(UnsafeMeshGenerationNode node, ref MeshBuilderNative.NativeRectParams rectParams, VectorImage vi)
		{
		}
	}

	[Token(Token = "0x4001369")]
	[FieldOffset(Offset = "0x0")]
	private static readonly MemoryLabel k_MemoryLabel;

	[Token(Token = "0x400136A")]
	[FieldOffset(Offset = "0x10")]
	private static readonly ProfilerMarker k_MarkerDrawRectangle;

	[Token(Token = "0x400136B")]
	[FieldOffset(Offset = "0x18")]
	private static readonly ProfilerMarker k_MarkerDrawBorder;

	[Token(Token = "0x400136C")]
	[FieldOffset(Offset = "0x20")]
	private static readonly ProfilerMarker k_MarkerDrawVectorImage;

	[Token(Token = "0x400136D")]
	[FieldOffset(Offset = "0x28")]
	private static readonly ProfilerMarker k_MarkerDrawRectangleRepeat;

	[Token(Token = "0x400136E")]
	[FieldOffset(Offset = "0x10")]
	private MeshGenerationContext m_MeshGenerationContext;

	[Token(Token = "0x400136F")]
	[FieldOffset(Offset = "0x18")]
	private List<RepeatRectUV>[] m_RepeatRectUVList;

	[Token(Token = "0x4001370")]
	[FieldOffset(Offset = "0x20")]
	private NativePagedList<BackgroundRepeatInstance> m_BackgroundRepeatInstanceList;

	[Token(Token = "0x4001371")]
	[FieldOffset(Offset = "0x28")]
	private GCHandlePool m_GCHandlePool;

	[Token(Token = "0x4001372")]
	[FieldOffset(Offset = "0x30")]
	private NativeArray<TessellationJobParameters> m_JobParameters;

	[Token(Token = "0x4001375")]
	[FieldOffset(Offset = "0x50")]
	private UnityEngine.TextCore.Text.TextInfo m_TextInfo;

	[Token(Token = "0x4001376")]
	[FieldOffset(Offset = "0x58")]
	private UnityEngine.TextCore.Text.TextGenerationSettings m_Settings;

	[Token(Token = "0x4001377")]
	[FieldOffset(Offset = "0x60")]
	private List<NativeSlice<Vertex>> m_VerticesArray;

	[Token(Token = "0x4001378")]
	[FieldOffset(Offset = "0x68")]
	private List<NativeSlice<ushort>> m_IndicesArray;

	[Token(Token = "0x4001379")]
	[FieldOffset(Offset = "0x70")]
	private List<Texture2D> m_Atlases;

	[Token(Token = "0x400137A")]
	[FieldOffset(Offset = "0x78")]
	private List<float> m_SdfScales;

	[Token(Token = "0x400137B")]
	[FieldOffset(Offset = "0x80")]
	private List<GlyphRenderMode> m_RenderModes;

	[Token(Token = "0x400137C")]
	[FieldOffset(Offset = "0x88")]
	private MeshGenerationCallback m_OnMeshGenerationDelegate;

	[Token(Token = "0x400137D")]
	[FieldOffset(Offset = "0x90")]
	private List<TessellationJobParameters> m_TesselationJobParameters;

	[Token(Token = "0x17000A60")]
	public VisualElement currentElement
	{
		[Token(Token = "0x60029B2")]
		[Address(RVA = "0x6B894C0", Offset = "0x6B884C0", VA = "0x6B894C0", Slot = "4")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A61")]
	public TextJobSystem textJobSystem
	{
		[Token(Token = "0x60029B3")]
		[Address(RVA = "0x6B894D0", Offset = "0x6B884D0", VA = "0x6B894D0", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60029B4")]
		[Address(RVA = "0x6B894E0", Offset = "0x6B884E0", VA = "0x6B894E0", Slot = "13")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000A62")]
	internal bool disposed
	{
		[Token(Token = "0x60029C4")]
		[Address(RVA = "0x6B8E660", Offset = "0x6B8D660", VA = "0x6B8E660")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60029C5")]
		[Address(RVA = "0x6B8E670", Offset = "0x6B8D670", VA = "0x6B8E670")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60029B1")]
	[Address(RVA = "0x6B89020", Offset = "0x6B88020", VA = "0x6B89020")]
	public MeshGenerator(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x60029B5")]
	[Address(RVA = "0x6B894F0", Offset = "0x6B884F0", VA = "0x6B894F0")]
	private static Vector2 ConvertBorderRadiusPercentToPoints(Vector2 borderRectSize, Length length)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60029B6")]
	[Address(RVA = "0x6B7FC50", Offset = "0x6B7EC50", VA = "0x6B7FC50")]
	public static void GetVisualElementRadii(VisualElement ve, out Vector2 topLeft, out Vector2 bottomLeft, out Vector2 topRight, out Vector2 bottomRight)
	{
	}

	[Token(Token = "0x60029B7")]
	[Address(RVA = "0x6B7FF30", Offset = "0x6B7EF30", VA = "0x6B7FF30")]
	public static void AdjustBackgroundSizeForBorders(VisualElement visualElement, ref RectangleParams rectParams)
	{
	}

	[Token(Token = "0x60029B8")]
	[Address(RVA = "0x6B89520", Offset = "0x6B88520", VA = "0x6B89520", Slot = "7")]
	public void DrawText(List<NativeSlice<Vertex>> vertices, List<NativeSlice<ushort>> indices, List<Material> materials, List<GlyphRenderMode> renderModes)
	{
	}

	[Token(Token = "0x60029B9")]
	[Address(RVA = "0x6B89860", Offset = "0x6B88860", VA = "0x6B89860", Slot = "6")]
	public void DrawText(List<NativeSlice<Vertex>> vertices, List<NativeSlice<ushort>> indices, List<Texture2D> atlases, List<GlyphRenderMode> renderModes, List<float> sdfScales)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60029BA")]
	[Address(RVA = "0x6B89C90", Offset = "0x6B88C90", VA = "0x6B89C90")]
	internal static Vertex ConvertTextVertexToUIRVertex(ref UnityEngine.TextCore.Text.TextCoreVertex vertex, Vector2 posOffset, float inverseScale, bool isDynamicColor = false, bool isColorGlyph = false, bool isTextCore = false)
	{
		return default(Vertex);
	}

	[Token(Token = "0x60029BB")]
	[Address(RVA = "0x6B89B10", Offset = "0x6B88B10", VA = "0x6B89B10")]
	private void MakeText(Texture texture, NativeSlice<Vertex> vertices, NativeSlice<ushort> indices, bool isSdf, float sdfScale, float sharpness, bool multiChannel)
	{
	}

	[Token(Token = "0x60029BC")]
	[Address(RVA = "0x6B89F70", Offset = "0x6B88F70", VA = "0x6B89F70", Slot = "8")]
	public void DrawRectangle(RectangleParams rectParams)
	{
	}

	[Token(Token = "0x60029BD")]
	[Address(RVA = "0x6B8A4C0", Offset = "0x6B894C0", VA = "0x6B8A4C0", Slot = "9")]
	public void DrawBorder(BorderParams borderParams)
	{
	}

	[Token(Token = "0x60029BE")]
	[Address(RVA = "0x6B8A670", Offset = "0x6B89670", VA = "0x6B8A670", Slot = "10")]
	public void DrawRectangleRepeat(RectangleParams rectParams, Rect totalRect, float scaledPixelsPerPoint)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60029BF")]
	[Address(RVA = "0x6B8A720", Offset = "0x6B89720", VA = "0x6B8A720")]
	private void DoDrawRectangleRepeat(ref RectangleParams rectParams, Rect totalRect, float scaledPixelsPerPoint)
	{
	}

	[Token(Token = "0x60029C0")]
	[Address(RVA = "0x6B8D7D0", Offset = "0x6B8C7D0", VA = "0x6B8D7D0")]
	private void StampRectangleWithSubRect(RectangleParams rectParams, Rect targetRect, Rect totalRect, Rect targetUV, ref NativePagedList<BackgroundRepeatInstance> backgroundRepeatInstanceList)
	{
	}

	[Token(Token = "0x60029C1")]
	[Address(RVA = "0x6B8DF50", Offset = "0x6B8CF50", VA = "0x6B8DF50")]
	private static void AdjustSpriteWinding(Vector2[] vertices, ushort[] indices, NativeSlice<ushort> newIndices)
	{
	}

	[Token(Token = "0x60029C2")]
	[Address(RVA = "0x6B8E3A0", Offset = "0x6B8D3A0", VA = "0x6B8E3A0", Slot = "11")]
	public void ScheduleJobs(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x60029C3")]
	[Address(RVA = "0x6B8E610", Offset = "0x6B8D610", VA = "0x6B8E610")]
	private void OnMeshGeneration(MeshGenerationContext ctx, object data)
	{
	}

	[Token(Token = "0x60029C6")]
	[Address(RVA = "0x6B8E680", Offset = "0x6B8D680", VA = "0x6B8E680", Slot = "12")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60029C7")]
	[Address(RVA = "0x6B8E6E0", Offset = "0x6B8D6E0", VA = "0x6B8E6E0")]
	private void Dispose(bool disposing)
	{
	}
}
