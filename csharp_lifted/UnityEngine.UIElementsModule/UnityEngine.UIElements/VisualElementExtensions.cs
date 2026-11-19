// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualElementExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using JetBrains.Annotations;

namespace UnityEngine.UIElements;

[Token(Token = "0x200053A")]
public static class VisualElementExtensions
{
	[Token(Token = "0x60027C2")]
	[Address(RVA = "0x6B699B0", Offset = "0x6B689B0", VA = "0x6B699B0")]
	public static void StretchToParentSize(this VisualElement elem)
	{
	}

	[Token(Token = "0x60027C3")]
	[Address(RVA = "0x6B69CD0", Offset = "0x6B68CD0", VA = "0x6B69CD0")]
	public static void AddManipulator(this VisualElement ele, IManipulator manipulator)
	{
	}

	[Token(Token = "0x60027C4")]
	[Address(RVA = "0x6B69D80", Offset = "0x6B68D80", VA = "0x6B69D80")]
	public static void RemoveManipulator(this VisualElement ele, IManipulator manipulator)
	{
	}

	[Token(Token = "0x60027C5")]
	[Address(RVA = "0x6B69E10", Offset = "0x6B68E10", VA = "0x6B69E10")]
	public static Vector2 WorldToLocal(this VisualElement ele, Vector2 p)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60027C6")]
	[Address(RVA = "0x6B69EE0", Offset = "0x6B68EE0", VA = "0x6B69EE0")]
	internal static Vector3 WorldToLocal3D(this VisualElement ele, Vector3 p)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60027C7")]
	[Address(RVA = "0x6B69FB0", Offset = "0x6B68FB0", VA = "0x6B69FB0")]
	public static Vector2 LocalToWorld(this VisualElement ele, Vector2 p)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60027C8")]
	[Address(RVA = "0x6B6A080", Offset = "0x6B69080", VA = "0x6B6A080")]
	public static Rect WorldToLocal(this VisualElement ele, Rect r)
	{
		return default(Rect);
	}

	[Token(Token = "0x60027C9")]
	[Address(RVA = "0x6B6A140", Offset = "0x6B69140", VA = "0x6B6A140")]
	internal static Ray LocalToWorld([NotNull] this VisualElement ele, Ray r)
	{
		return default(Ray);
	}

	[Token(Token = "0x60027CA")]
	[Address(RVA = "0x6B6A3A0", Offset = "0x6B693A0", VA = "0x6B6A3A0")]
	internal static Ray WorldToLocal([NotNull] this VisualElement ele, Ray r)
	{
		return default(Ray);
	}

	[Token(Token = "0x60027CB")]
	[Address(RVA = "0x6B6A600", Offset = "0x6B69600", VA = "0x6B6A600")]
	public static Vector2 ChangeCoordinatesTo(this VisualElement src, VisualElement dest, Vector2 point)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60027CC")]
	[Address(RVA = "0x6B6A6A0", Offset = "0x6B696A0", VA = "0x6B6A6A0")]
	internal static Vector2 ChangeCoordinatesTo_2D([NotNull] this VisualElement src, [NotNull] VisualElement dest, Vector2 point)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60027CD")]
	[Address(RVA = "0x6B6A790", Offset = "0x6B69790", VA = "0x6B6A790")]
	internal static Vector2 ChangeCoordinatesTo_3D([NotNull] this VisualElement src, [NotNull] VisualElement dest, Vector2 point)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60027CE")]
	[Address(RVA = "0x6B6A8D0", Offset = "0x6B698D0", VA = "0x6B6A8D0")]
	public static Rect ChangeCoordinatesTo(this VisualElement src, VisualElement dest, Rect rect)
	{
		return default(Rect);
	}

	[Token(Token = "0x60027CF")]
	[Address(RVA = "0x6B6AC00", Offset = "0x6B69C00", VA = "0x6B6AC00")]
	internal static Ray ChangeCoordinatesTo([NotNull] this VisualElement src, [NotNull] VisualElement dest, Ray ray)
	{
		return default(Ray);
	}

	[Token(Token = "0x60027D0")]
	[Address(RVA = "0x6B6AC70", Offset = "0x6B69C70", VA = "0x6B6AC70")]
	internal static bool IntersectWorldRay([NotNull] this VisualElement ve, Ray worldRay, out float distance, out Vector3 localPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x60027D1")]
	[Address(RVA = "0x6B6B210", Offset = "0x6B6A210", VA = "0x6B6B210")]
	internal static bool IntersectLocalRay([NotNull] this VisualElement ve, Ray localRay, out Vector3 localPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x60027D2")]
	[Address(RVA = "0x6B6B3C0", Offset = "0x6B6A3C0", VA = "0x6B6B3C0")]
	internal static Ray TransformRay(this Matrix4x4 m, Ray ray)
	{
		return default(Ray);
	}
}
