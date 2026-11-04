// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIRUtility
// Update status: CHANGED in this game update
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
	[Address(RVA = "0x32BBEE0", Offset = "0x32BA4E0", VA = "0x1832BBEE0")]
	public static bool ShapeWindingIsClockwise(int maskDepth, int stencilRef)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600138F")]
	[Address(RVA = "0x32BB830", Offset = "0x32B9E30", VA = "0x1832BB830")]
	public static Rect Encapsulate(Rect a, Rect b)
	{
		return default(Rect);
	}

	[Token(Token = "0x6001390")]
	[Address(RVA = "0x32BB240", Offset = "0x32B9840", VA = "0x1832BB240")]
	public static void ComputeMatrixRelativeToAncestor(RenderData renderData, RenderData ancestor, out Matrix4x4 transform)
	{
	}

	[Token(Token = "0x6001391")]
	[Address(RVA = "0x32BB340", Offset = "0x32B9940", VA = "0x1832BB340")]
	public static void ComputeMatrixRelativeToRenderTree(RenderData renderData, out Matrix4x4 transform)
	{
	}

	[Token(Token = "0x6001392")]
	[Address(RVA = "0x32BBAE0", Offset = "0x32BA0E0", VA = "0x1832BBAE0")]
	public static void GetVerticesTransformInfo(RenderData renderData, out Matrix4x4 transform)
	{
	}

	[Token(Token = "0x6001393")]
	[Address(RVA = "0x32BB420", Offset = "0x32B9A20", VA = "0x1832BB420")]
	internal static void ComputeTransformMatrix(RenderData renderData, RenderData ancestor, out Matrix4x4 result)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001394")]
	[Address(RVA = "0x32BBDF0", Offset = "0x32BA3F0", VA = "0x1832BBDF0")]
	public static bool RectHasArea(Rect rect)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001395")]
	[Address(RVA = "0x32BBE70", Offset = "0x32BA470", VA = "0x1832BBE70")]
	public static bool RectHasArea(RectInt rect)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001396")]
	[Address(RVA = "0x32BB190", Offset = "0x32B9790", VA = "0x1832BB190")]
	public static Rect CastToRect(RectInt rect)
	{
		return default(Rect);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001397")]
	[Address(RVA = "0x32BBC90", Offset = "0x32BA290", VA = "0x1832BBC90")]
	public static bool IsRoundRect(VisualElement ve)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001398")]
	[Address(RVA = "0x32BBD70", Offset = "0x32BA370", VA = "0x1832BBD70")]
	public static bool IsVectorImageBackground(VisualElement ve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001399")]
	[Address(RVA = "0x32BB770", Offset = "0x32B9D70", VA = "0x1832BB770")]
	public static void Destroy(Object obj)
	{
	}

	[Token(Token = "0x600139A")]
	[Address(RVA = "0x32BB9D0", Offset = "0x32B9FD0", VA = "0x1832BB9D0")]
	public static int GetPrevPow2(int n)
	{
		return default(int);
	}

	[Token(Token = "0x600139B")]
	[Address(RVA = "0x32BB9B0", Offset = "0x32B9FB0", VA = "0x1832BB9B0")]
	public static int GetNextPow2(int n)
	{
		return default(int);
	}

	[Token(Token = "0x600139C")]
	[Address(RVA = "0x32BB990", Offset = "0x32B9F90", VA = "0x1832BB990")]
	public static int GetNextPow2Exp(int n)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600139D")]
	[Address(RVA = "0x32BB9F0", Offset = "0x32B9FF0", VA = "0x1832BB9F0")]
	public static int GetThreadIndex()
	{
		return default(int);
	}
}
