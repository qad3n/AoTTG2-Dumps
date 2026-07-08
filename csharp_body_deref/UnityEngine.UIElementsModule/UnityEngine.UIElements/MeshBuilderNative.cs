using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x200022D")]
[UnityEngine.Bindings.NativeHeader("ModuleOverrides/com.unity.ui/Core/Native/Renderer/UIRMeshBuilder.bindings.h")]
internal static class MeshBuilderNative
{
	[Token(Token = "0x200022E")]
	public struct NativeColorPage
	{
		[Token(Token = "0x40007C6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int isValid;

		[Token(Token = "0x40007C7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		public Color32 pageAndID;
	}

	[Token(Token = "0x200022F")]
	public struct NativeBorderParams
	{
		[Token(Token = "0x40007C8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Rect rect;

		[Token(Token = "0x40007C9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public Color leftColor;

		[Token(Token = "0x40007CA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Color topColor;

		[Token(Token = "0x40007CB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Color rightColor;

		[Token(Token = "0x40007CC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public Color bottomColor;

		[Token(Token = "0x40007CD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public float leftWidth;

		[Token(Token = "0x40007CE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
		public float topWidth;

		[Token(Token = "0x40007CF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public float rightWidth;

		[Token(Token = "0x40007D0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
		public float bottomWidth;

		[Token(Token = "0x40007D1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public Vector2 topLeftRadius;

		[Token(Token = "0x40007D2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public Vector2 topRightRadius;

		[Token(Token = "0x40007D3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		public Vector2 bottomRightRadius;

		[Token(Token = "0x40007D4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		public Vector2 bottomLeftRadius;

		[Token(Token = "0x40007D5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		internal NativeColorPage leftColorPage;

		[Token(Token = "0x40007D6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		internal NativeColorPage topColorPage;

		[Token(Token = "0x40007D7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
		internal NativeColorPage rightColorPage;

		[Token(Token = "0x40007D8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
		internal NativeColorPage bottomColorPage;
	}

	[Token(Token = "0x2000230")]
	public struct NativeRectParams
	{
		[Token(Token = "0x40007D9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Rect rect;

		[Token(Token = "0x40007DA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public Rect subRect;

		[Token(Token = "0x40007DB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Rect uv;

		[Token(Token = "0x40007DC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public Color color;

		[Token(Token = "0x40007DD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public ScaleMode scaleMode;

		[Token(Token = "0x40007DE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
		public Vector2 topLeftRadius;

		[Token(Token = "0x40007DF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		public Vector2 topRightRadius;

		[Token(Token = "0x40007E0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
		public Vector2 bottomRightRadius;

		[Token(Token = "0x40007E1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
		public Vector2 bottomLeftRadius;

		[Token(Token = "0x40007E2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
		public Vector2 contentSize;

		[Token(Token = "0x40007E3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
		public Vector2 textureSize;

		[Token(Token = "0x40007E4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
		public float texturePixelsPerPoint;

		[Token(Token = "0x40007E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		public int leftSlice;

		[Token(Token = "0x40007E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
		public int topSlice;

		[Token(Token = "0x40007E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		public int rightSlice;

		[Token(Token = "0x40007E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x84")]
		public int bottomSlice;

		[Token(Token = "0x40007E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		public float sliceScale;

		[Token(Token = "0x40007EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
		public Vector4 rectInset;

		[Token(Token = "0x40007EB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x9C")]
		public NativeColorPage colorPage;
	}

	[Token(Token = "0x6000E2A")]
	[Address(RVA = "0x4D259A0", Offset = "0x4D259A0", VA = "0x4D259A0")]
	public static MeshWriteDataInterface MakeBorder(NativeBorderParams borderParams, float posZ)
	{
		return default(MeshWriteDataInterface);
	}

	[Token(Token = "0x6000E2B")]
	[Address(RVA = "0x4D25A70", Offset = "0x4D25A70", VA = "0x4D25A70")]
	public static MeshWriteDataInterface MakeSolidRect(NativeRectParams rectParams, float posZ)
	{
		return default(MeshWriteDataInterface);
	}

	[Token(Token = "0x6000E2C")]
	[Address(RVA = "0x4D25B40", Offset = "0x4D25B40", VA = "0x4D25B40")]
	public static MeshWriteDataInterface MakeTexturedRect(NativeRectParams rectParams, float posZ)
	{
		return default(MeshWriteDataInterface);
	}

	[Token(Token = "0x6000E2D")]
	[Address(RVA = "0x4D25C10", Offset = "0x4D25C10", VA = "0x4D25C10")]
	public static MeshWriteDataInterface MakeVectorGraphicsStretchBackground(Vertex[] svgVertices, ushort[] svgIndices, float svgWidth, float svgHeight, Rect targetRect, Rect sourceUV, ScaleMode scaleMode, Color tint, NativeColorPage colorPage)
	{
		return default(MeshWriteDataInterface);
	}

	[Token(Token = "0x6000E2E")]
	[Address(RVA = "0x4D25E70", Offset = "0x4D25E70", VA = "0x4D25E70")]
	public static MeshWriteDataInterface MakeVectorGraphics9SliceBackground(Vertex[] svgVertices, ushort[] svgIndices, float svgWidth, float svgHeight, Rect targetRect, Vector4 sliceLTRB, Color tint, NativeColorPage colorPage)
	{
		return default(MeshWriteDataInterface);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E2F")]
	[Address(RVA = "0x4D25A20", Offset = "0x4D25A20", VA = "0x4D25A20")]
	private static extern void MakeBorder_Injected([In] ref NativeBorderParams borderParams, float posZ, out MeshWriteDataInterface ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E30")]
	[Address(RVA = "0x4D25AF0", Offset = "0x4D25AF0", VA = "0x4D25AF0")]
	private static extern void MakeSolidRect_Injected([In] ref NativeRectParams rectParams, float posZ, out MeshWriteDataInterface ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E31")]
	[Address(RVA = "0x4D25BC0", Offset = "0x4D25BC0", VA = "0x4D25BC0")]
	private static extern void MakeTexturedRect_Injected([In] ref NativeRectParams rectParams, float posZ, out MeshWriteDataInterface ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E32")]
	[Address(RVA = "0x4D25DF0", Offset = "0x4D25DF0", VA = "0x4D25DF0")]
	private static extern void MakeVectorGraphicsStretchBackground_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper svgVertices, ref UnityEngine.Bindings.ManagedSpanWrapper svgIndices, float svgWidth, float svgHeight, [In] ref Rect targetRect, [In] ref Rect sourceUV, ScaleMode scaleMode, [In] ref Color tint, [In] ref NativeColorPage colorPage, out MeshWriteDataInterface ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E33")]
	[Address(RVA = "0x4D26040", Offset = "0x4D26040", VA = "0x4D26040")]
	private static extern void MakeVectorGraphics9SliceBackground_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper svgVertices, ref UnityEngine.Bindings.ManagedSpanWrapper svgIndices, float svgWidth, float svgHeight, [In] ref Rect targetRect, [In] ref Vector4 sliceLTRB, [In] ref Color tint, [In] ref NativeColorPage colorPage, out MeshWriteDataInterface ret);
}
