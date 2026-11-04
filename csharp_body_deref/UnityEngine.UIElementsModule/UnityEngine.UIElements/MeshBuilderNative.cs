// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MeshBuilderNative
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002A6")]
[UnityEngine.Bindings.NativeHeader("Modules/UIElements/Core/Native/Renderer/UIRMeshBuilder.bindings.h")]
internal static class MeshBuilderNative
{
	[Token(Token = "0x20002A7")]
	public struct NativeColorPage
	{
		[Token(Token = "0x40009ED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int isValid;

		[Token(Token = "0x40009EE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		public Color32 pageAndID;
	}

	[Token(Token = "0x20002A8")]
	public struct NativeBorderParams
	{
		[Token(Token = "0x40009EF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Rect rect;

		[Token(Token = "0x40009F0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public Color leftColor;

		[Token(Token = "0x40009F1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Color topColor;

		[Token(Token = "0x40009F2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Color rightColor;

		[Token(Token = "0x40009F3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public Color bottomColor;

		[Token(Token = "0x40009F4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public float leftWidth;

		[Token(Token = "0x40009F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
		public float topWidth;

		[Token(Token = "0x40009F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public float rightWidth;

		[Token(Token = "0x40009F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
		public float bottomWidth;

		[Token(Token = "0x40009F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public Vector2 topLeftRadius;

		[Token(Token = "0x40009F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public Vector2 topRightRadius;

		[Token(Token = "0x40009FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		public Vector2 bottomRightRadius;

		[Token(Token = "0x40009FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		public Vector2 bottomLeftRadius;

		[Token(Token = "0x40009FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		internal NativeColorPage leftColorPage;

		[Token(Token = "0x40009FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		internal NativeColorPage topColorPage;

		[Token(Token = "0x40009FE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
		internal NativeColorPage rightColorPage;

		[Token(Token = "0x40009FF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
		internal NativeColorPage bottomColorPage;
	}

	[Token(Token = "0x20002A9")]
	public struct NativeRectParams
	{
		[Token(Token = "0x4000A00")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Rect rect;

		[Token(Token = "0x4000A01")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public Rect subRect;

		[Token(Token = "0x4000A02")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Rect uv;

		[Token(Token = "0x4000A03")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Color color;

		[Token(Token = "0x4000A04")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public ScaleMode scaleMode;

		[Token(Token = "0x4000A05")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public IntPtr backgroundRepeatInstanceList;

		[Token(Token = "0x4000A06")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public int backgroundRepeatInstanceListStartIndex;

		[Token(Token = "0x4000A07")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
		public int backgroundRepeatInstanceListEndIndex;

		[Token(Token = "0x4000A08")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public Vector2 topLeftRadius;

		[Token(Token = "0x4000A09")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public Vector2 topRightRadius;

		[Token(Token = "0x4000A0A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public Vector2 bottomRightRadius;

		[Token(Token = "0x4000A0B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		public Vector2 bottomLeftRadius;

		[Token(Token = "0x4000A0C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		public Rect backgroundRepeatRect;

		[Token(Token = "0x4000A0D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		public IntPtr texture;

		[Token(Token = "0x4000A0E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
		public IntPtr sprite;

		[Token(Token = "0x4000A0F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
		public IntPtr vectorImage;

		[Token(Token = "0x4000A10")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
		public IntPtr spriteTexture;

		[Token(Token = "0x4000A11")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
		public IntPtr spriteVertices;

		[Token(Token = "0x4000A12")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
		public IntPtr spriteUVs;

		[Token(Token = "0x4000A13")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
		public IntPtr spriteTriangles;

		[Token(Token = "0x4000A14")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
		public Rect spriteGeomRect;

		[Token(Token = "0x4000A15")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
		public Vector2 contentSize;

		[Token(Token = "0x4000A16")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
		public Vector2 textureSize;

		[Token(Token = "0x4000A17")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
		public float texturePixelsPerPoint;

		[Token(Token = "0x4000A18")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xE4")]
		public int leftSlice;

		[Token(Token = "0x4000A19")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
		public int topSlice;

		[Token(Token = "0x4000A1A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xEC")]
		public int rightSlice;

		[Token(Token = "0x4000A1B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
		public int bottomSlice;

		[Token(Token = "0x4000A1C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xF4")]
		public float sliceScale;

		[Token(Token = "0x4000A1D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
		public Vector4 rectInset;

		[Token(Token = "0x4000A1E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
		public NativeColorPage colorPage;

		[Token(Token = "0x4000A1F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
		public int meshFlags;
	}

	[Token(Token = "0x60011CA")]
	[Address(RVA = "0x32AEEF0", Offset = "0x32AD4F0", VA = "0x1832AEEF0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static MeshWriteDataInterface MakeBorder(ref NativeBorderParams borderParams)
	{
		return default(MeshWriteDataInterface);
	}

	[Token(Token = "0x60011CB")]
	[Address(RVA = "0x32AEFA0", Offset = "0x32AD5A0", VA = "0x1832AEFA0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static MeshWriteDataInterface MakeSolidRect(ref NativeRectParams rectParams)
	{
		return default(MeshWriteDataInterface);
	}

	[Token(Token = "0x60011CC")]
	[Address(RVA = "0x32AF050", Offset = "0x32AD650", VA = "0x1832AF050")]
	[UnityEngine.Bindings.ThreadSafe]
	public static MeshWriteDataInterface MakeTexturedRect(ref NativeRectParams rectParams)
	{
		return default(MeshWriteDataInterface);
	}

	[Token(Token = "0x60011CD")]
	[Address(RVA = "0x32AF360", Offset = "0x32AD960", VA = "0x1832AF360")]
	[UnityEngine.Bindings.ThreadSafe]
	public static MeshWriteDataInterface MakeVectorGraphicsStretchBackground(Vertex[] svgVertices, ushort[] svgIndices, float svgWidth, float svgHeight, Rect targetRect, Rect sourceUV, ScaleMode scaleMode, Color tint, NativeColorPage colorPage)
	{
		return default(MeshWriteDataInterface);
	}

	[Token(Token = "0x60011CE")]
	[Address(RVA = "0x32AF120", Offset = "0x32AD720", VA = "0x1832AF120")]
	[UnityEngine.Bindings.ThreadSafe]
	public static MeshWriteDataInterface MakeVectorGraphics9SliceBackground(Vertex[] svgVertices, ushort[] svgIndices, float svgWidth, float svgHeight, Rect targetRect, Vector4 sliceLTRB, Color tint, NativeColorPage colorPage)
	{
		return default(MeshWriteDataInterface);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011CF")]
	[Address(RVA = "0x32AEEA0", Offset = "0x32AD4A0", VA = "0x1832AEEA0")]
	private static extern void MakeBorder_Injected(ref NativeBorderParams borderParams, out MeshWriteDataInterface ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011D0")]
	[Address(RVA = "0x32AEF50", Offset = "0x32AD550", VA = "0x1832AEF50")]
	private static extern void MakeSolidRect_Injected(ref NativeRectParams rectParams, out MeshWriteDataInterface ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011D1")]
	[Address(RVA = "0x32AF000", Offset = "0x32AD600", VA = "0x1832AF000")]
	private static extern void MakeTexturedRect_Injected(ref NativeRectParams rectParams, out MeshWriteDataInterface ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011D2")]
	[Address(RVA = "0x32AF2F0", Offset = "0x32AD8F0", VA = "0x1832AF2F0")]
	private static extern void MakeVectorGraphicsStretchBackground_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper svgVertices, ref UnityEngine.Bindings.ManagedSpanWrapper svgIndices, float svgWidth, float svgHeight, [In] ref Rect targetRect, [In] ref Rect sourceUV, ScaleMode scaleMode, [In] ref Color tint, [In] ref NativeColorPage colorPage, out MeshWriteDataInterface ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011D3")]
	[Address(RVA = "0x32AF0B0", Offset = "0x32AD6B0", VA = "0x1832AF0B0")]
	private static extern void MakeVectorGraphics9SliceBackground_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper svgVertices, ref UnityEngine.Bindings.ManagedSpanWrapper svgIndices, float svgWidth, float svgHeight, [In] ref Rect targetRect, [In] ref Vector4 sliceLTRB, [In] ref Color tint, [In] ref NativeColorPage colorPage, out MeshWriteDataInterface ret);
}
