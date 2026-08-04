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
	[Address(RVA = "0x50BBD50", Offset = "0x50BBD50", VA = "0x50BBD50")]
	public static Vector2 PixelAdjustPoint(Vector2 point, Transform elementTransform, Canvas canvas)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x50BBF00", Offset = "0x50BBF00", VA = "0x50BBF00")]
	public static Rect PixelAdjustRect(RectTransform rectTransform, Canvas canvas)
	{
		return default(Rect);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x50BC0A0", Offset = "0x50BC0A0", VA = "0x50BC0A0")]
	private static bool PointInRectangle(Vector2 screenPoint, RectTransform rect, Camera cam, Vector4 offset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x50BC290", Offset = "0x50BC290", VA = "0x50BC290")]
	public static bool RectangleContainsScreenPoint(RectTransform rect, Vector2 screenPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x50BC2F0", Offset = "0x50BC2F0", VA = "0x50BC2F0")]
	public static bool RectangleContainsScreenPoint(RectTransform rect, Vector2 screenPoint, Camera cam)
	{
		return default(bool);
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x50BC3E0", Offset = "0x50BC3E0", VA = "0x50BC3E0")]
	public static bool RectangleContainsScreenPoint(RectTransform rect, Vector2 screenPoint, Camera cam, Vector4 offset)
	{
		return default(bool);
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x50BC470", Offset = "0x50BC470", VA = "0x50BC470")]
	public static bool ScreenPointToWorldPointInRectangle(RectTransform rect, Vector2 screenPoint, Camera cam, out Vector3 worldPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x50BCB60", Offset = "0x50BCB60", VA = "0x50BCB60")]
	public static bool ScreenPointToLocalPointInRectangle(RectTransform rect, Vector2 screenPoint, Camera cam, out Vector2 localPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x50BC950", Offset = "0x50BC950", VA = "0x50BC950")]
	public static Ray ScreenPointToRay(Camera cam, Vector2 screenPos)
	{
		return default(Ray);
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x50BCC40", Offset = "0x50BCC40", VA = "0x50BCC40")]
	public static Vector2 WorldToScreenPoint(Camera cam, Vector3 worldPoint)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x50BCCD0", Offset = "0x50BCCD0", VA = "0x50BCCD0")]
	public static Bounds CalculateRelativeRectTransformBounds(Transform root, Transform child)
	{
		return default(Bounds);
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x50BD250", Offset = "0x50BD250", VA = "0x50BD250")]
	public static void FlipLayoutOnAxis(RectTransform rect, int axis, bool keepPositioning, bool recursive)
	{
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x50BD560", Offset = "0x50BD560", VA = "0x50BD560")]
	public static void FlipLayoutAxes(RectTransform rect, bool keepPositioning, bool recursive)
	{
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x50BD770", Offset = "0x50BD770", VA = "0x50BD770")]
	private static Vector2 GetTransposed(Vector2 input)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000055")]
	[Address(RVA = "0x50BBEB0", Offset = "0x50BBEB0", VA = "0x50BBEB0")]
	private static extern void PixelAdjustPoint_Injected([In] ref Vector2 point, IntPtr elementTransform, IntPtr canvas, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000056")]
	[Address(RVA = "0x50BC060", Offset = "0x50BC060", VA = "0x50BC060")]
	private static extern void PixelAdjustRect_Injected(IntPtr rectTransform, IntPtr canvas, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x50BC240", Offset = "0x50BC240", VA = "0x50BC240")]
	private static extern bool PointInRectangle_Injected([In] ref Vector2 screenPoint, IntPtr rect, IntPtr cam, [In] ref Vector4 offset);
}
