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

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x6CCB280", Offset = "0x6CCA280", VA = "0x6CCB280")]
	public static Vector2 PixelAdjustPoint(Vector2 point, Transform elementTransform, Canvas canvas)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x6CCB400", Offset = "0x6CCA400", VA = "0x6CCB400")]
	public static Rect PixelAdjustRect(RectTransform rectTransform, Canvas canvas)
	{
		return default(Rect);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x6CCB570", Offset = "0x6CCA570", VA = "0x6CCB570")]
	private static bool PointInRectangle(Vector2 screenPoint, RectTransform rect, Camera cam, Vector4 offset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x6CCB730", Offset = "0x6CCA730", VA = "0x6CCB730")]
	public static bool RectangleContainsScreenPoint(RectTransform rect, Vector2 screenPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x6CCB790", Offset = "0x6CCA790", VA = "0x6CCB790")]
	public static bool RectangleContainsScreenPoint(RectTransform rect, Vector2 screenPoint, Camera cam)
	{
		return default(bool);
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x6CCB880", Offset = "0x6CCA880", VA = "0x6CCB880")]
	public static bool RectangleContainsScreenPoint(RectTransform rect, Vector2 screenPoint, Camera cam, Vector4 offset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x6CCB910", Offset = "0x6CCA910", VA = "0x6CCB910")]
	public static bool ScreenPointToWorldPointInRectangle(RectTransform rect, Vector2 screenPoint, Camera cam, out Vector3 worldPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x6CCC030", Offset = "0x6CCB030", VA = "0x6CCC030")]
	public static bool ScreenPointToLocalPointInRectangle(RectTransform rect, Vector2 screenPoint, Camera cam, out Vector2 localPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x6CCBE40", Offset = "0x6CCAE40", VA = "0x6CCBE40")]
	public static Ray ScreenPointToRay(Camera cam, Vector2 screenPos)
	{
		return default(Ray);
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x6CCC110", Offset = "0x6CCB110", VA = "0x6CCC110")]
	public static Vector2 WorldToScreenPoint(Camera cam, Vector3 worldPoint)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x6CCC1A0", Offset = "0x6CCB1A0", VA = "0x6CCC1A0")]
	public static Bounds CalculateRelativeRectTransformBounds(Transform root, Transform child)
	{
		return default(Bounds);
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x6CCC800", Offset = "0x6CCB800", VA = "0x6CCC800")]
	public static void FlipLayoutOnAxis(RectTransform rect, int axis, bool keepPositioning, bool recursive)
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x6CCCAE0", Offset = "0x6CCBAE0", VA = "0x6CCCAE0")]
	public static void FlipLayoutAxes(RectTransform rect, bool keepPositioning, bool recursive)
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x6CCCCF0", Offset = "0x6CCBCF0", VA = "0x6CCCCF0")]
	private static Vector2 GetTransposed(Vector2 input)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005D")]
	[Address(RVA = "0x6CCB3B0", Offset = "0x6CCA3B0", VA = "0x6CCB3B0")]
	private static extern void PixelAdjustPoint_Injected([In] ref Vector2 point, IntPtr elementTransform, IntPtr canvas, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005E")]
	[Address(RVA = "0x6CCB530", Offset = "0x6CCA530", VA = "0x6CCB530")]
	private static extern void PixelAdjustRect_Injected(IntPtr rectTransform, IntPtr canvas, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005F")]
	[Address(RVA = "0x6CCB6E0", Offset = "0x6CCA6E0", VA = "0x6CCB6E0")]
	private static extern bool PointInRectangle_Injected([In] ref Vector2 screenPoint, IntPtr rect, IntPtr cam, [In] ref Vector4 offset);
}
