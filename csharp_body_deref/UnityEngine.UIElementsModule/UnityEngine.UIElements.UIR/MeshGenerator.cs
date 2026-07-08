using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;
using Unity.Profiling;
using UnityEngine.TextCore.Text;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20004AD")]
internal class MeshGenerator : IMeshGenerator
{
	[Token(Token = "0x20004AE")]
	private struct RepeatRectUV
	{
		[Token(Token = "0x4000E88")]
		[FieldOffset(Offset = "0x0")]
		public Rect rect;

		[Token(Token = "0x4000E89")]
		[FieldOffset(Offset = "0x10")]
		public Rect uv;
	}

	[Token(Token = "0x20004AF")]
	public struct BorderParams
	{
		[Token(Token = "0x4000E8A")]
		[FieldOffset(Offset = "0x0")]
		public Rect rect;

		[Token(Token = "0x4000E8B")]
		[FieldOffset(Offset = "0x10")]
		public Color playmodeTintColor;

		[Token(Token = "0x4000E8C")]
		[FieldOffset(Offset = "0x20")]
		public Color leftColor;

		[Token(Token = "0x4000E8D")]
		[FieldOffset(Offset = "0x30")]
		public Color topColor;

		[Token(Token = "0x4000E8E")]
		[FieldOffset(Offset = "0x40")]
		public Color rightColor;

		[Token(Token = "0x4000E8F")]
		[FieldOffset(Offset = "0x50")]
		public Color bottomColor;

		[Token(Token = "0x4000E90")]
		[FieldOffset(Offset = "0x60")]
		public float leftWidth;

		[Token(Token = "0x4000E91")]
		[FieldOffset(Offset = "0x64")]
		public float topWidth;

		[Token(Token = "0x4000E92")]
		[FieldOffset(Offset = "0x68")]
		public float rightWidth;

		[Token(Token = "0x4000E93")]
		[FieldOffset(Offset = "0x6C")]
		public float bottomWidth;

		[Token(Token = "0x4000E94")]
		[FieldOffset(Offset = "0x70")]
		public Vector2 topLeftRadius;

		[Token(Token = "0x4000E95")]
		[FieldOffset(Offset = "0x78")]
		public Vector2 topRightRadius;

		[Token(Token = "0x4000E96")]
		[FieldOffset(Offset = "0x80")]
		public Vector2 bottomRightRadius;

		[Token(Token = "0x4000E97")]
		[FieldOffset(Offset = "0x88")]
		public Vector2 bottomLeftRadius;

		[Token(Token = "0x4000E98")]
		[FieldOffset(Offset = "0x90")]
		internal ColorPage leftColorPage;

		[Token(Token = "0x4000E99")]
		[FieldOffset(Offset = "0x98")]
		internal ColorPage topColorPage;

		[Token(Token = "0x4000E9A")]
		[FieldOffset(Offset = "0xA0")]
		internal ColorPage rightColorPage;

		[Token(Token = "0x4000E9B")]
		[FieldOffset(Offset = "0xA8")]
		internal ColorPage bottomColorPage;

		[Token(Token = "0x6001D13")]
		[Address(RVA = "0x4C68AE0", Offset = "0x4C68AE0", VA = "0x4C68AE0")]
		internal MeshBuilderNative.NativeBorderParams ToNativeParams()
		{
			return default(MeshBuilderNative.NativeBorderParams);
		}
	}

	[Token(Token = "0x20004B0")]
	public struct RectangleParams
	{
		[Token(Token = "0x4000E9C")]
		[FieldOffset(Offset = "0x0")]
		public Rect rect;

		[Token(Token = "0x4000E9D")]
		[FieldOffset(Offset = "0x10")]
		public Rect uv;

		[Token(Token = "0x4000E9E")]
		[FieldOffset(Offset = "0x20")]
		public Color color;

		[Token(Token = "0x4000E9F")]
		[FieldOffset(Offset = "0x30")]
		public Rect subRect;

		[Token(Token = "0x4000EA0")]
		[FieldOffset(Offset = "0x40")]
		public BackgroundPosition backgroundPositionX;

		[Token(Token = "0x4000EA1")]
		[FieldOffset(Offset = "0x4C")]
		public BackgroundPosition backgroundPositionY;

		[Token(Token = "0x4000EA2")]
		[FieldOffset(Offset = "0x58")]
		public BackgroundRepeat backgroundRepeat;

		[Token(Token = "0x4000EA3")]
		[FieldOffset(Offset = "0x60")]
		public BackgroundSize backgroundSize;

		[Token(Token = "0x4000EA4")]
		[FieldOffset(Offset = "0x78")]
		public Texture texture;

		[Token(Token = "0x4000EA5")]
		[FieldOffset(Offset = "0x80")]
		public Sprite sprite;

		[Token(Token = "0x4000EA6")]
		[FieldOffset(Offset = "0x88")]
		public VectorImage vectorImage;

		[Token(Token = "0x4000EA7")]
		[FieldOffset(Offset = "0x90")]
		public ScaleMode scaleMode;

		[Token(Token = "0x4000EA8")]
		[FieldOffset(Offset = "0x94")]
		public Color playmodeTintColor;

		[Token(Token = "0x4000EA9")]
		[FieldOffset(Offset = "0xA4")]
		public Vector2 topLeftRadius;

		[Token(Token = "0x4000EAA")]
		[FieldOffset(Offset = "0xAC")]
		public Vector2 topRightRadius;

		[Token(Token = "0x4000EAB")]
		[FieldOffset(Offset = "0xB4")]
		public Vector2 bottomRightRadius;

		[Token(Token = "0x4000EAC")]
		[FieldOffset(Offset = "0xBC")]
		public Vector2 bottomLeftRadius;

		[Token(Token = "0x4000EAD")]
		[FieldOffset(Offset = "0xC4")]
		public Vector2 contentSize;

		[Token(Token = "0x4000EAE")]
		[FieldOffset(Offset = "0xCC")]
		public Vector2 textureSize;

		[Token(Token = "0x4000EAF")]
		[FieldOffset(Offset = "0xD4")]
		public int leftSlice;

		[Token(Token = "0x4000EB0")]
		[FieldOffset(Offset = "0xD8")]
		public int topSlice;

		[Token(Token = "0x4000EB1")]
		[FieldOffset(Offset = "0xDC")]
		public int rightSlice;

		[Token(Token = "0x4000EB2")]
		[FieldOffset(Offset = "0xE0")]
		public int bottomSlice;

		[Token(Token = "0x4000EB3")]
		[FieldOffset(Offset = "0xE4")]
		public float sliceScale;

		[Token(Token = "0x4000EB4")]
		[FieldOffset(Offset = "0xE8")]
		internal Rect spriteGeomRect;

		[Token(Token = "0x4000EB5")]
		[FieldOffset(Offset = "0xF8")]
		public Vector4 rectInset;

		[Token(Token = "0x4000EB6")]
		[FieldOffset(Offset = "0x108")]
		internal ColorPage colorPage;

		[Token(Token = "0x4000EB7")]
		[FieldOffset(Offset = "0x110")]
		internal MeshGenerationContext.MeshFlags meshFlags;

		[Token(Token = "0x6001D14")]
		[Address(RVA = "0x4C6BB80", Offset = "0x4C6BB80", VA = "0x4C6BB80")]
		private static void AdjustUVsForScaleMode(Rect rect, Rect uv, Texture texture, ScaleMode scaleMode, out Rect rectOut, out Rect uvOut)
		{
		}

		[Token(Token = "0x6001D15")]
		[Address(RVA = "0x4C6BD90", Offset = "0x4C6BD90", VA = "0x4C6BD90")]
		private static void AdjustSpriteUVsForScaleMode(Rect containerRect, Rect srcRect, Rect spriteGeomRect, Sprite sprite, ScaleMode scaleMode, out Rect rectOut, out Rect uvOut)
		{
		}

		[Token(Token = "0x6001D16")]
		[Address(RVA = "0x4C6B610", Offset = "0x4C6B610", VA = "0x4C6B610")]
		internal static Rect RectIntersection(Rect a, Rect b)
		{
			return default(Rect);
		}

		[Token(Token = "0x6001D17")]
		[Address(RVA = "0x4C6C2D0", Offset = "0x4C6C2D0", VA = "0x4C6C2D0")]
		private static Rect ComputeGeomRect(Sprite sprite)
		{
			return default(Rect);
		}

		[Token(Token = "0x6001D18")]
		[Address(RVA = "0x4C6C380", Offset = "0x4C6C380", VA = "0x4C6C380")]
		private static Rect ComputeUVRect(Sprite sprite)
		{
			return default(Rect);
		}

		[Token(Token = "0x6001D19")]
		[Address(RVA = "0x4C6C430", Offset = "0x4C6C430", VA = "0x4C6C430")]
		private static Rect ApplyPackingRotation(Rect uv, SpritePackingRotation rotation)
		{
			return default(Rect);
		}

		[Token(Token = "0x6001D1A")]
		[Address(RVA = "0x4C6C490", Offset = "0x4C6C490", VA = "0x4C6C490")]
		public static RectangleParams MakeTextured(Rect rect, Rect uv, Texture texture, ScaleMode scaleMode, ContextType panelContext)
		{
			return default(RectangleParams);
		}

		[Token(Token = "0x6001D1B")]
		[Address(RVA = "0x4C6C710", Offset = "0x4C6C710", VA = "0x4C6C710")]
		public static RectangleParams MakeSprite(Rect containerRect, Rect subRect, Sprite sprite, ScaleMode scaleMode, ContextType panelContext, bool hasRadius, ref Vector4 slices, bool useForRepeat = false)
		{
			return default(RectangleParams);
		}

		[Token(Token = "0x6001D1C")]
		[Address(RVA = "0x4C6D350", Offset = "0x4C6D350", VA = "0x4C6D350")]
		public static RectangleParams MakeVectorTextured(Rect rect, Rect uv, VectorImage vectorImage, ScaleMode scaleMode, ContextType panelContext)
		{
			return default(RectangleParams);
		}

		[Token(Token = "0x6001D1D")]
		[Address(RVA = "0x4C6D550", Offset = "0x4C6D550", VA = "0x4C6D550")]
		internal bool HasRadius(float epsilon)
		{
			return default(bool);
		}

		[Token(Token = "0x6001D1E")]
		[Address(RVA = "0x4C6B5C0", Offset = "0x4C6B5C0", VA = "0x4C6B5C0")]
		internal bool HasSlices(float epsilon)
		{
			return default(bool);
		}

		[Token(Token = "0x6001D1F")]
		[Address(RVA = "0x4C684B0", Offset = "0x4C684B0", VA = "0x4C684B0")]
		internal MeshBuilderNative.NativeRectParams ToNativeParams()
		{
			return default(MeshBuilderNative.NativeRectParams);
		}
	}

	[Token(Token = "0x4000E7F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker k_MarkerDrawRectangle;

	[Token(Token = "0x4000E80")]
	[FieldOffset(Offset = "0x8")]
	private static readonly ProfilerMarker k_MarkerDrawBorder;

	[Token(Token = "0x4000E81")]
	[FieldOffset(Offset = "0x10")]
	private static readonly ProfilerMarker k_MarkerDrawVectorImage;

	[Token(Token = "0x4000E82")]
	[FieldOffset(Offset = "0x18")]
	private static readonly ProfilerMarker k_MarkerDrawRectangleRepeat;

	[Token(Token = "0x4000E83")]
	[FieldOffset(Offset = "0x10")]
	private MeshGenerationContext m_MeshGenerationContext;

	[Token(Token = "0x4000E84")]
	[FieldOffset(Offset = "0x18")]
	private List<RepeatRectUV>[] m_RepeatRectUVList;

	[Token(Token = "0x4000E86")]
	[FieldOffset(Offset = "0x28")]
	private UnityEngine.TextCore.Text.TextInfo m_TextInfo;

	[Token(Token = "0x4000E87")]
	[FieldOffset(Offset = "0x20")]
	private static readonly int s_MaxTextMeshVertices;

	[Token(Token = "0x17000770")]
	public VisualElement currentElement
	{
		[Token(Token = "0x6001CFD")]
		[Address(RVA = "0x4C65CA0", Offset = "0x4C65CA0", VA = "0x4C65CA0", Slot = "9")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001CFE")]
		[Address(RVA = "0x4C65CB0", Offset = "0x4C65CB0", VA = "0x4C65CB0", Slot = "4")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001CFC")]
	[Address(RVA = "0x4C65C10", Offset = "0x4C65C10", VA = "0x4C65C10")]
	public MeshGenerator(MeshGenerationContext mgc)
	{
	}

	[Token(Token = "0x6001CFF")]
	[Address(RVA = "0x4C65CC0", Offset = "0x4C65CC0", VA = "0x4C65CC0")]
	private static Vector2 ConvertBorderRadiusPercentToPoints(Vector2 borderRectSize, Length length)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6001D00")]
	[Address(RVA = "0x4C65CF0", Offset = "0x4C65CF0", VA = "0x4C65CF0")]
	public static void GetVisualElementRadii(VisualElement ve, out Vector2 topLeft, out Vector2 bottomLeft, out Vector2 topRight, out Vector2 bottomRight)
	{
	}

	[Token(Token = "0x6001D01")]
	[Address(RVA = "0x4C66010", Offset = "0x4C66010", VA = "0x4C66010")]
	public static void AdjustBackgroundSizeForBorders(VisualElement visualElement, ref RectangleParams rectParams)
	{
	}

	[Token(Token = "0x6001D02")]
	[Address(RVA = "0x4C66490", Offset = "0x4C66490", VA = "0x4C66490")]
	private void BuildEntryFromNativeMesh(MeshWriteDataInterface meshData, Texture texture, bool skipAtlas)
	{
	}

	[Token(Token = "0x6001D03")]
	[Address(RVA = "0x4C66740", Offset = "0x4C66740", VA = "0x4C66740")]
	private void BuildGradientEntryFromNativeMesh(MeshWriteDataInterface meshData, VectorImage gradientsOwner)
	{
	}

	[Token(Token = "0x6001D04")]
	[Address(RVA = "0x4C66A50", Offset = "0x4C66A50", VA = "0x4C66A50", Slot = "5")]
	public void DrawText(UnityEngine.TextCore.Text.MeshInfo[] meshInfo, Vector2 offset, bool hasMultipleColors)
	{
	}

	[Token(Token = "0x6001D05")]
	[Address(RVA = "0x4C66A60", Offset = "0x4C66A60", VA = "0x4C66A60")]
	private void DrawTextInfo(UnityEngine.TextCore.Text.MeshInfo[] meshInfo, Vector2 offset, bool useHints)
	{
	}

	[Token(Token = "0x6001D06")]
	[Address(RVA = "0x4C674D0", Offset = "0x4C674D0", VA = "0x4C674D0")]
	private static Vertex ConvertTextVertexToUIRVertex(UnityEngine.TextCore.Text.MeshInfo info, int index, Vector2 offset, bool isDynamicColor = false)
	{
		return default(Vertex);
	}

	[Token(Token = "0x6001D07")]
	[Address(RVA = "0x4C675E0", Offset = "0x4C675E0", VA = "0x4C675E0")]
	private static int LimitTextVertices(int vertexCount, bool logTruncation = true)
	{
		return default(int);
	}

	[Token(Token = "0x6001D08")]
	[Address(RVA = "0x4C66DB0", Offset = "0x4C66DB0", VA = "0x4C66DB0")]
	private void MakeText(Texture texture, UnityEngine.TextCore.Text.MeshInfo meshInfo, Vector2 offset, bool isSdf, bool isDynamicColor, float sdfScale, float sharpness)
	{
	}

	[Token(Token = "0x6001D09")]
	[Address(RVA = "0x4C67720", Offset = "0x4C67720", VA = "0x4C67720", Slot = "6")]
	public void DrawRectangle(RectangleParams rectParams)
	{
	}

	[Token(Token = "0x6001D0A")]
	[Address(RVA = "0x4C68880", Offset = "0x4C68880", VA = "0x4C68880", Slot = "7")]
	public void DrawBorder(BorderParams borderParams)
	{
	}

	[Token(Token = "0x6001D0B")]
	[Address(RVA = "0x4C68C00", Offset = "0x4C68C00", VA = "0x4C68C00", Slot = "8")]
	public void DrawRectangleRepeat(RectangleParams rectParams, Rect totalRect, float scaledPixelsPerPoint)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D0C")]
	[Address(RVA = "0x4C68CB0", Offset = "0x4C68CB0", VA = "0x4C68CB0")]
	private void DoDrawRectangleRepeat(ref RectangleParams rectParams, Rect totalRect, float scaledPixelsPerPoint)
	{
	}

	[Token(Token = "0x6001D0D")]
	[Address(RVA = "0x4C6B360", Offset = "0x4C6B360", VA = "0x4C6B360")]
	private void StampRectangleWithSubRect(RectangleParams rectParams, Rect targetRect, Rect targetUV)
	{
	}

	[Token(Token = "0x6001D0E")]
	[Address(RVA = "0x4C6B6A0", Offset = "0x4C6B6A0", VA = "0x4C6B6A0")]
	private static void AdjustSpriteWinding(Vector2[] vertices, ushort[] indices, NativeSlice<ushort> newIndices)
	{
	}

	[Token(Token = "0x6001D0F")]
	[Address(RVA = "0x4C67FE0", Offset = "0x4C67FE0", VA = "0x4C67FE0")]
	private void DrawSprite(RectangleParams rectParams)
	{
	}

	[Token(Token = "0x6001D10")]
	[Address(RVA = "0x4C685C0", Offset = "0x4C685C0", VA = "0x4C685C0")]
	private void ApplyInset(ref MeshBuilderNative.NativeRectParams rectParams, Texture tex)
	{
	}

	[Token(Token = "0x6001D11")]
	[Address(RVA = "0x4C67B40", Offset = "0x4C67B40", VA = "0x4C67B40")]
	private void DrawVectorImage(RectangleParams rectParams)
	{
	}
}
