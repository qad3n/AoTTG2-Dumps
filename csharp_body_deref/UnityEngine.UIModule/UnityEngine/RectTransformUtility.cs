using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000005")]
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

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x4D94420", Offset = "0x4D94420", VA = "0x4D94420")]
	public static Vector2 PixelAdjustPoint(Vector2 point, Transform elementTransform, Canvas canvas)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x4D945D0", Offset = "0x4D945D0", VA = "0x4D945D0")]
	public static Rect PixelAdjustRect(RectTransform rectTransform, Canvas canvas)
	{
		return default(Rect);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x4D94770", Offset = "0x4D94770", VA = "0x4D94770")]
	private static bool PointInRectangle(Vector2 screenPoint, RectTransform rect, Camera cam, Vector4 offset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x4D94960", Offset = "0x4D94960", VA = "0x4D94960")]
	public static bool RectangleContainsScreenPoint(RectTransform rect, Vector2 screenPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4D949C0", Offset = "0x4D949C0", VA = "0x4D949C0")]
	public static bool RectangleContainsScreenPoint(RectTransform rect, Vector2 screenPoint, Camera cam)
	{
		return default(bool);
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4D94AB0", Offset = "0x4D94AB0", VA = "0x4D94AB0")]
	public static bool RectangleContainsScreenPoint(RectTransform rect, Vector2 screenPoint, Camera cam, Vector4 offset)
	{
		return default(bool);
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x4D94B40", Offset = "0x4D94B40", VA = "0x4D94B40")]
	public static bool ScreenPointToWorldPointInRectangle(RectTransform rect, Vector2 screenPoint, Camera cam, out Vector3 worldPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4D95230", Offset = "0x4D95230", VA = "0x4D95230")]
	public static bool ScreenPointToLocalPointInRectangle(RectTransform rect, Vector2 screenPoint, Camera cam, out Vector2 localPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4D95020", Offset = "0x4D95020", VA = "0x4D95020")]
	public static Ray ScreenPointToRay(Camera cam, Vector2 screenPos)
	{
		return default(Ray);
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4D95310", Offset = "0x4D95310", VA = "0x4D95310")]
	public static Vector2 WorldToScreenPoint(Camera cam, Vector3 worldPoint)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4D953A0", Offset = "0x4D953A0", VA = "0x4D953A0")]
	public static Bounds CalculateRelativeRectTransformBounds(Transform root, Transform child)
	{
		return default(Bounds);
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x4D95920", Offset = "0x4D95920", VA = "0x4D95920")]
	public static void FlipLayoutOnAxis(RectTransform rect, int axis, bool keepPositioning, bool recursive)
	{
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x4D95C30", Offset = "0x4D95C30", VA = "0x4D95C30")]
	public static void FlipLayoutAxes(RectTransform rect, bool keepPositioning, bool recursive)
	{
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x4D95E40", Offset = "0x4D95E40", VA = "0x4D95E40")]
	private static Vector2 GetTransposed(Vector2 input)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000055")]
	[Address(RVA = "0x4D94580", Offset = "0x4D94580", VA = "0x4D94580")]
	private static extern void PixelAdjustPoint_Injected([In] ref Vector2 point, IntPtr elementTransform, IntPtr canvas, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000056")]
	[Address(RVA = "0x4D94730", Offset = "0x4D94730", VA = "0x4D94730")]
	private static extern void PixelAdjustRect_Injected(IntPtr rectTransform, IntPtr canvas, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x4D94910", Offset = "0x4D94910", VA = "0x4D94910")]
	private static extern bool PointInRectangle_Injected([In] ref Vector2 screenPoint, IntPtr rect, IntPtr cam, [In] ref Vector4 offset);
}
