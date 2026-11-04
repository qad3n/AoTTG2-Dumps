// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RectTransformUtility
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

namespace UnityEngine;

[Token(Token = "0x2000006")]
[UnityEngine.Bindings.StaticAccessor("UI", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Runtime/Transform/RectTransform.h")]
[UnityEngine.Bindings.NativeHeader("Modules/UI/RectTransformUtil.h")]
[UnityEngine.Bindings.NativeHeader("Modules/UI/Canvas.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/Camera.h")]
public sealed class RectTransformUtility
{
	[Token(Token = "0x4000002")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Vector3[] s_Corners;

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x32C1210", Offset = "0x32BF810", VA = "0x1832C1210")]
	public static Vector2 PixelAdjustPoint(Vector2 point, Transform elementTransform, Canvas canvas)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x32C1360", Offset = "0x32BF960", VA = "0x1832C1360")]
	public static Rect PixelAdjustRect(RectTransform rectTransform, Canvas canvas)
	{
		return default(Rect);
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x32C1490", Offset = "0x32BFA90", VA = "0x1832C1490")]
	private static bool PointInRectangle(Vector2 screenPoint, RectTransform rect, Camera cam, Vector4 offset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x32C1830", Offset = "0x32BFE30", VA = "0x1832C1830")]
	public static bool RectangleContainsScreenPoint(RectTransform rect, Vector2 screenPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x32C16A0", Offset = "0x32BFCA0", VA = "0x1832C16A0")]
	public static bool RectangleContainsScreenPoint(RectTransform rect, Vector2 screenPoint, Camera cam)
	{
		return default(bool);
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x32C1570", Offset = "0x32BFB70", VA = "0x1832C1570")]
	public static bool RectangleContainsScreenPoint(RectTransform rect, Vector2 screenPoint, Camera cam, Vector4 offset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x32C1CB0", Offset = "0x32C02B0", VA = "0x1832C1CB0")]
	public static bool ScreenPointToWorldPointInRectangle(RectTransform rect, Vector2 screenPoint, Camera cam, out Vector3 worldPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x32C19D0", Offset = "0x32BFFD0", VA = "0x1832C19D0")]
	public static bool ScreenPointToLocalPointInRectangle(RectTransform rect, Vector2 screenPoint, Camera cam, out Vector2 localPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x32C1AF0", Offset = "0x32C00F0", VA = "0x1832C1AF0")]
	public static Ray ScreenPointToRay(Camera cam, Vector2 screenPos)
	{
		return default(Ray);
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x32C22B0", Offset = "0x32C08B0", VA = "0x1832C22B0")]
	public static Vector2 WorldToScreenPoint(Camera cam, Vector3 worldPoint)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x32C0620", Offset = "0x32BEC20", VA = "0x1832C0620")]
	public static Bounds CalculateRelativeRectTransformBounds(Transform root, Transform child)
	{
		return default(Bounds);
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x32C0DB0", Offset = "0x32BF3B0", VA = "0x1832C0DB0")]
	public static void FlipLayoutOnAxis(RectTransform rect, int axis, bool keepPositioning, bool recursive)
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x32C0B40", Offset = "0x32BF140", VA = "0x1832C0B40")]
	public static void FlipLayoutAxes(RectTransform rect, bool keepPositioning, bool recursive)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x32C11A0", Offset = "0x32BF7A0", VA = "0x1832C11A0")]
	private static Vector2 GetTransposed(Vector2 input)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005E")]
	[Address(RVA = "0x32C11C0", Offset = "0x32BF7C0", VA = "0x1832C11C0")]
	private static extern void PixelAdjustPoint_Injected([In] ref Vector2 point, IntPtr elementTransform, IntPtr canvas, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005F")]
	[Address(RVA = "0x32C1300", Offset = "0x32BF900", VA = "0x1832C1300")]
	private static extern void PixelAdjustRect_Injected(IntPtr rectTransform, IntPtr canvas, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000060")]
	[Address(RVA = "0x32C1440", Offset = "0x32BFA40", VA = "0x1832C1440")]
	private static extern bool PointInRectangle_Injected([In] ref Vector2 screenPoint, IntPtr rect, IntPtr cam, [In] ref Vector4 offset);
}
