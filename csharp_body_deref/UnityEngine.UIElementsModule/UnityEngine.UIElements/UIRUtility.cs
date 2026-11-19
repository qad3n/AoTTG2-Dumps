// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIRUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine.UIElements.UIR;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002E2")]
internal static class UIRUtility
{
	[Token(Token = "0x4000B3B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker k_ComputeTransformMatrixMarker;

	[Token(Token = "0x4000B3C")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string k_DefaultShaderName;

	[Token(Token = "0x4000B3D")]
	[ThreadStatic]
	private static int? s_ThreadIndex;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600138E")]
	[Address(RVA = "0x6CC2490", Offset = "0x6CC1490", VA = "0x6CC2490")]
	public static bool ShapeWindingIsClockwise(int maskDepth, int stencilRef)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600138F")]
	[Address(RVA = "0x6CC24F0", Offset = "0x6CC14F0", VA = "0x6CC24F0")]
	public static Rect Encapsulate(Rect a, Rect b)
	{
		return default(Rect);
	}

	[Token(Token = "0x6001390")]
	[Address(RVA = "0x6CC2600", Offset = "0x6CC1600", VA = "0x6CC2600")]
	public static void ComputeMatrixRelativeToAncestor(RenderData renderData, RenderData ancestor, out Matrix4x4 transform)
	{
	}

	[Token(Token = "0x6001391")]
	[Address(RVA = "0x6CC2A20", Offset = "0x6CC1A20", VA = "0x6CC2A20")]
	public static void ComputeMatrixRelativeToRenderTree(RenderData renderData, out Matrix4x4 transform)
	{
	}

	[Token(Token = "0x6001392")]
	[Address(RVA = "0x6CC2AF0", Offset = "0x6CC1AF0", VA = "0x6CC2AF0")]
	public static void GetVerticesTransformInfo(RenderData renderData, out Matrix4x4 transform)
	{
	}

	[Token(Token = "0x6001393")]
	[Address(RVA = "0x6CC26F0", Offset = "0x6CC16F0", VA = "0x6CC26F0")]
	internal static void ComputeTransformMatrix(RenderData renderData, RenderData ancestor, out Matrix4x4 result)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001394")]
	[Address(RVA = "0x6CC2C30", Offset = "0x6CC1C30", VA = "0x6CC2C30")]
	public static bool RectHasArea(Rect rect)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001395")]
	[Address(RVA = "0x6CC2CD0", Offset = "0x6CC1CD0", VA = "0x6CC2CD0")]
	public static bool RectHasArea(RectInt rect)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001396")]
	[Address(RVA = "0x6CC2D60", Offset = "0x6CC1D60", VA = "0x6CC2D60")]
	public static Rect CastToRect(RectInt rect)
	{
		return default(Rect);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001397")]
	[Address(RVA = "0x6CC2DE0", Offset = "0x6CC1DE0", VA = "0x6CC2DE0")]
	public static bool IsRoundRect(VisualElement ve)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001398")]
	[Address(RVA = "0x6CC3010", Offset = "0x6CC2010", VA = "0x6CC3010")]
	public static bool IsVectorImageBackground(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001399")]
	[Address(RVA = "0x6CBCEE0", Offset = "0x6CBBEE0", VA = "0x6CBCEE0")]
	public static void Destroy(Object obj)
	{
	}

	[Token(Token = "0x600139A")]
	[Address(RVA = "0x6CC30A0", Offset = "0x6CC20A0", VA = "0x6CC30A0")]
	public static int GetPrevPow2(int n)
	{
		return default(int);
	}

	[Token(Token = "0x600139B")]
	[Address(RVA = "0x6CBD460", Offset = "0x6CBC460", VA = "0x6CBD460")]
	public static int GetNextPow2(int n)
	{
		return default(int);
	}

	[Token(Token = "0x600139C")]
	[Address(RVA = "0x6CC30D0", Offset = "0x6CC20D0", VA = "0x6CC30D0")]
	public static int GetNextPow2Exp(int n)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600139D")]
	[Address(RVA = "0x6CC30F0", Offset = "0x6CC20F0", VA = "0x6CC30F0")]
	public static int GetThreadIndex()
	{
		return default(int);
	}
}
