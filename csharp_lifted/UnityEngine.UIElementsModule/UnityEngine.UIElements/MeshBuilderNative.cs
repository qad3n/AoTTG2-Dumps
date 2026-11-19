// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.MeshBuilderNative
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20002A5")]
[UnityEngine.Bindings.NativeHeader("Modules/UIElements/Core/Native/Renderer/UIRMeshBuilder.bindings.h")]
internal static class MeshBuilderNative
{
	[Token(Token = "0x20002A6")]
	public struct NativeColorPage
	{
		[Token(Token = "0x40009EB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int isValid;

		[Token(Token = "0x40009EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		public Color32 pageAndID;
	}

	[Token(Token = "0x20002A7")]
	public struct NativeBorderParams
	{
		[Token(Token = "0x40009ED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Rect rect;

		[Token(Token = "0x40009EE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public Color leftColor;

		[Token(Token = "0x40009EF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Color topColor;

		[Token(Token = "0x40009F0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Color rightColor;

		[Token(Token = "0x40009F1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public Color bottomColor;

		[Token(Token = "0x40009F2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public float leftWidth;

		[Token(Token = "0x40009F3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
		public float topWidth;

		[Token(Token = "0x40009F4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public float rightWidth;

		[Token(Token = "0x40009F5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
		public float bottomWidth;

		[Token(Token = "0x40009F6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public Vector2 topLeftRadius;

		[Token(Token = "0x40009F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public Vector2 topRightRadius;

		[Token(Token = "0x40009F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		public Vector2 bottomRightRadius;

		[Token(Token = "0x40009F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		public Vector2 bottomLeftRadius;

		[Token(Token = "0x40009FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		internal NativeColorPage leftColorPage;

		[Token(Token = "0x40009FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		internal NativeColorPage topColorPage;

		[Token(Token = "0x40009FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
		internal NativeColorPage rightColorPage;

		[Token(Token = "0x40009FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
		internal NativeColorPage bottomColorPage;
	}

	[Token(Token = "0x20002A8")]
	public struct NativeRectParams
	{
		[Token(Token = "0x40009FE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Rect rect;

		[Token(Token = "0x40009FF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public Rect subRect;

		[Token(Token = "0x4000A00")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Rect uv;

		[Token(Token = "0x4000A01")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Color color;

		[Token(Token = "0x4000A02")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public ScaleMode scaleMode;

		[Token(Token = "0x4000A03")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public IntPtr backgroundRepeatInstanceList;

		[Token(Token = "0x4000A04")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public int backgroundRepeatInstanceListStartIndex;

		[Token(Token = "0x4000A05")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
		public int backgroundRepeatInstanceListEndIndex;

		[Token(Token = "0x4000A06")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public Vector2 topLeftRadius;

		[Token(Token = "0x4000A07")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public Vector2 topRightRadius;

		[Token(Token = "0x4000A08")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public Vector2 bottomRightRadius;

		[Token(Token = "0x4000A09")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		public Vector2 bottomLeftRadius;

		[Token(Token = "0x4000A0A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		public Rect backgroundRepeatRect;

		[Token(Token = "0x4000A0B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		public IntPtr texture;

		[Token(Token = "0x4000A0C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
		public IntPtr sprite;

		[Token(Token = "0x4000A0D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
		public IntPtr vectorImage;

		[Token(Token = "0x4000A0E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
		public IntPtr spriteTexture;

		[Token(Token = "0x4000A0F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
		public IntPtr spriteVertices;

		[Token(Token = "0x4000A10")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
		public IntPtr spriteUVs;

		[Token(Token = "0x4000A11")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
		public IntPtr spriteTriangles;

		[Token(Token = "0x4000A12")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
		public Rect spriteGeomRect;

		[Token(Token = "0x4000A13")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
		public Vector2 contentSize;

		[Token(Token = "0x4000A14")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
		public Vector2 textureSize;

		[Token(Token = "0x4000A15")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
		public float texturePixelsPerPoint;

		[Token(Token = "0x4000A16")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xE4")]
		public int leftSlice;

		[Token(Token = "0x4000A17")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
		public int topSlice;

		[Token(Token = "0x4000A18")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xEC")]
		public int rightSlice;

		[Token(Token = "0x4000A19")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
		public int bottomSlice;

		[Token(Token = "0x4000A1A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xF4")]
		public float sliceScale;

		[Token(Token = "0x4000A1B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
		public Vector4 rectInset;

		[Token(Token = "0x4000A1C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
		public NativeColorPage colorPage;

		[Token(Token = "0x4000A1D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
		public int meshFlags;
	}

	[Token(Token = "0x60011C4")]
	[Address(RVA = "0x6CB2830", Offset = "0x6CB1830", VA = "0x6CB2830")]
	[UnityEngine.Bindings.ThreadSafe]
	public static MeshWriteDataInterface MakeBorder(ref NativeBorderParams borderParams)
	{
		return default(MeshWriteDataInterface);
	}

	[Token(Token = "0x60011C5")]
	[Address(RVA = "0x6CB28D0", Offset = "0x6CB18D0", VA = "0x6CB28D0")]
	[UnityEngine.Bindings.ThreadSafe]
	public static MeshWriteDataInterface MakeSolidRect(ref NativeRectParams rectParams)
	{
		return default(MeshWriteDataInterface);
	}

	[Token(Token = "0x60011C6")]
	[Address(RVA = "0x6CB2970", Offset = "0x6CB1970", VA = "0x6CB2970")]
	[UnityEngine.Bindings.ThreadSafe]
	public static MeshWriteDataInterface MakeTexturedRect(ref NativeRectParams rectParams)
	{
		return default(MeshWriteDataInterface);
	}

	[Token(Token = "0x60011C7")]
	[Address(RVA = "0x6CB2A10", Offset = "0x6CB1A10", VA = "0x6CB2A10")]
	[UnityEngine.Bindings.ThreadSafe]
	public static MeshWriteDataInterface MakeVectorGraphicsStretchBackground(Vertex[] svgVertices, ushort[] svgIndices, float svgWidth, float svgHeight, Rect targetRect, Rect sourceUV, ScaleMode scaleMode, Color tint, NativeColorPage colorPage)
	{
		return default(MeshWriteDataInterface);
	}

	[Token(Token = "0x60011C8")]
	[Address(RVA = "0x6CB2C70", Offset = "0x6CB1C70", VA = "0x6CB2C70")]
	[UnityEngine.Bindings.ThreadSafe]
	public static MeshWriteDataInterface MakeVectorGraphics9SliceBackground(Vertex[] svgVertices, ushort[] svgIndices, float svgWidth, float svgHeight, Rect targetRect, Vector4 sliceLTRB, Color tint, NativeColorPage colorPage)
	{
		return default(MeshWriteDataInterface);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011C9")]
	[Address(RVA = "0x6CB2890", Offset = "0x6CB1890", VA = "0x6CB2890")]
	private static extern void MakeBorder_Injected(ref NativeBorderParams borderParams, out MeshWriteDataInterface ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011CA")]
	[Address(RVA = "0x6CB2930", Offset = "0x6CB1930", VA = "0x6CB2930")]
	private static extern void MakeSolidRect_Injected(ref NativeRectParams rectParams, out MeshWriteDataInterface ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011CB")]
	[Address(RVA = "0x6CB29D0", Offset = "0x6CB19D0", VA = "0x6CB29D0")]
	private static extern void MakeTexturedRect_Injected(ref NativeRectParams rectParams, out MeshWriteDataInterface ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011CC")]
	[Address(RVA = "0x6CB2BF0", Offset = "0x6CB1BF0", VA = "0x6CB2BF0")]
	private static extern void MakeVectorGraphicsStretchBackground_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper svgVertices, ref UnityEngine.Bindings.ManagedSpanWrapper svgIndices, float svgWidth, float svgHeight, [In] ref Rect targetRect, [In] ref Rect sourceUV, ScaleMode scaleMode, [In] ref Color tint, [In] ref NativeColorPage colorPage, out MeshWriteDataInterface ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011CD")]
	[Address(RVA = "0x6CB2E50", Offset = "0x6CB1E50", VA = "0x6CB2E50")]
	private static extern void MakeVectorGraphics9SliceBackground_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper svgVertices, ref UnityEngine.Bindings.ManagedSpanWrapper svgIndices, float svgWidth, float svgHeight, [In] ref Rect targetRect, [In] ref Vector4 sliceLTRB, [In] ref Color tint, [In] ref NativeColorPage colorPage, out MeshWriteDataInterface ret);
}
