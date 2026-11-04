// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualElementExtensions
// Update status: CHANGED in this game update
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
	[Address(RVA = "0x3164B60", Offset = "0x3163160", VA = "0x183164B60")]
	public static void StretchToParentSize(this VisualElement elem)
	{
	}

	[Token(Token = "0x60027C3")]
	[Address(RVA = "0x3163930", Offset = "0x3161F30", VA = "0x183163930")]
	public static void AddManipulator(this VisualElement ele, IManipulator manipulator)
	{
	}

	[Token(Token = "0x60027C4")]
	[Address(RVA = "0x3164B10", Offset = "0x3163110", VA = "0x183164B10")]
	public static void RemoveManipulator(this VisualElement ele, IManipulator manipulator)
	{
	}

	[Token(Token = "0x60027C5")]
	[Address(RVA = "0x3165480", Offset = "0x3163A80", VA = "0x183165480")]
	public static Vector2 WorldToLocal(this VisualElement ele, Vector2 p)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60027C6")]
	[Address(RVA = "0x31650C0", Offset = "0x31636C0", VA = "0x1831650C0")]
	internal static Vector3 WorldToLocal3D(this VisualElement ele, Vector3 p)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60027C7")]
	[Address(RVA = "0x3164840", Offset = "0x3162E40", VA = "0x183164840")]
	public static Vector2 LocalToWorld(this VisualElement ele, Vector2 p)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60027C8")]
	[Address(RVA = "0x31651D0", Offset = "0x31637D0", VA = "0x1831651D0")]
	public static Rect WorldToLocal(this VisualElement ele, Rect r)
	{
		return default(Rect);
	}

	[Token(Token = "0x60027C9")]
	[Address(RVA = "0x3164940", Offset = "0x3162F40", VA = "0x183164940")]
	internal static Ray LocalToWorld([NotNull] this VisualElement ele, Ray r)
	{
		return default(Ray);
	}

	[Token(Token = "0x60027CA")]
	[Address(RVA = "0x31652B0", Offset = "0x31638B0", VA = "0x1831652B0")]
	internal static Ray WorldToLocal([NotNull] this VisualElement ele, Ray r)
	{
		return default(Ray);
	}

	[Token(Token = "0x60027CB")]
	[Address(RVA = "0x3163C80", Offset = "0x3162280", VA = "0x183163C80")]
	public static Vector2 ChangeCoordinatesTo(this VisualElement src, VisualElement dest, Vector2 point)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60027CC")]
	[Address(RVA = "0x3163980", Offset = "0x3161F80", VA = "0x183163980")]
	internal static Vector2 ChangeCoordinatesTo_2D([NotNull] this VisualElement src, [NotNull] VisualElement dest, Vector2 point)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60027CD")]
	[Address(RVA = "0x3163A90", Offset = "0x3162090", VA = "0x183163A90")]
	internal static Vector2 ChangeCoordinatesTo_3D([NotNull] this VisualElement src, [NotNull] VisualElement dest, Vector2 point)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60027CE")]
	[Address(RVA = "0x3163D70", Offset = "0x3162370", VA = "0x183163D70")]
	public static Rect ChangeCoordinatesTo(this VisualElement src, VisualElement dest, Rect rect)
	{
		return default(Rect);
	}

	[Token(Token = "0x60027CF")]
	[Address(RVA = "0x3163BF0", Offset = "0x31621F0", VA = "0x183163BF0")]
	internal static Ray ChangeCoordinatesTo([NotNull] this VisualElement src, [NotNull] VisualElement dest, Ray ray)
	{
		return default(Ray);
	}

	[Token(Token = "0x60027D0")]
	[Address(RVA = "0x31643E0", Offset = "0x31629E0", VA = "0x1831643E0")]
	internal static bool IntersectWorldRay([NotNull] this VisualElement ve, Ray worldRay, out float distance, out Vector3 localPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x60027D1")]
	[Address(RVA = "0x3164200", Offset = "0x3162800", VA = "0x183164200")]
	internal static bool IntersectLocalRay([NotNull] this VisualElement ve, Ray localRay, out Vector3 localPoint)
	{
		return default(bool);
	}

	[Token(Token = "0x60027D2")]
	[Address(RVA = "0x3164F30", Offset = "0x3163530", VA = "0x183164F30")]
	internal static Ray TransformRay(this Matrix4x4 m, Ray ray)
	{
		return default(Ray);
	}
}
