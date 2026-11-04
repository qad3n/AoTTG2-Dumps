// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.WorldSpaceInput
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000287")]
internal static class WorldSpaceInput
{
	[Token(Token = "0x2000288")]
	public struct PickResult
	{
		[Token(Token = "0x400098F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly PickResult Empty;

		[Token(Token = "0x4000990")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Collider collider;

		[Token(Token = "0x4000991")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public UIDocument document;

		[Token(Token = "0x4000992")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public VisualElement pickedElement;

		[Token(Token = "0x4000993")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public float distance;

		[Token(Token = "0x4000994")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		public Vector3 normal;

		[Token(Token = "0x4000995")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public Vector3 point;

		[Token(Token = "0x4000996")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		public Vector3 localPoint;

		[Token(Token = "0x6001154")]
		[Address(RVA = "0x3283E50", Offset = "0x3282450", VA = "0x183283E50")]
		internal void ComputeCollisionData(Ray ray)
		{
		}
	}

	[Token(Token = "0x6001149")]
	[Address(RVA = "0x328BA90", Offset = "0x328A090", VA = "0x18328BA90")]
	public static VisualElement Pick3D(UIDocument document, Ray worldRay, out float distance)
	{
		return null;
	}

	[Token(Token = "0x600114A")]
	[Address(RVA = "0x328BDB0", Offset = "0x328A3B0", VA = "0x18328BDB0")]
	public static VisualElement Pick3D(IPanel panel, Ray panelRay, [Optional] List<VisualElement> outResults)
	{
		return null;
	}

	[Token(Token = "0x600114B")]
	[Address(RVA = "0x328BF20", Offset = "0x328A520", VA = "0x18328BF20")]
	public static VisualElement Pick3D(VisualElement rootVisualElement, Ray localRay, [Optional] List<VisualElement> outResults)
	{
		return null;
	}

	[Token(Token = "0x600114C")]
	[Address(RVA = "0x328C000", Offset = "0x328A600", VA = "0x18328C000")]
	public static PickResult PickDocument3D(Ray worldRay, float maxDistance = 1f / 0f, int layerMask = -5)
	{
		return default(PickResult);
	}

	[Token(Token = "0x600114D")]
	[Address(RVA = "0x328C950", Offset = "0x328AF50", VA = "0x18328C950")]
	internal static VisualElement Pick_Internal(UIDocument document, Ray documentRay, [Optional] List<VisualElement> outResults)
	{
		return null;
	}

	[Token(Token = "0x600114E")]
	[Address(RVA = "0x328B9D0", Offset = "0x3289FD0", VA = "0x18328B9D0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "Assembly-CSharp-testable" })]
	internal static VisualElement PerformPick(VisualElement root, Ray ray, List<VisualElement> outResults)
	{
		return null;
	}

	[Token(Token = "0x600114F")]
	[Address(RVA = "0x328B670", Offset = "0x3289C70", VA = "0x18328B670")]
	private static VisualElement PerformPick2D(VisualElement root, Ray ray, List<VisualElement> outResults)
	{
		return null;
	}

	[Token(Token = "0x6001150")]
	[Address(RVA = "0x328B6F0", Offset = "0x3289CF0", VA = "0x18328B6F0")]
	private static VisualElement PerformPick3D(VisualElement root, Ray ray, List<VisualElement> outResults)
	{
		return null;
	}

	[Token(Token = "0x6001151")]
	[Address(RVA = "0x328B340", Offset = "0x3289940", VA = "0x18328B340")]
	private static VisualElement PerformPick2D_LocalPoint(VisualElement root, Vector3 localPoint, [Optional] List<VisualElement> picked)
	{
		return null;
	}

	[Token(Token = "0x6001152")]
	[Address(RVA = "0x328B230", Offset = "0x3289830", VA = "0x18328B230")]
	internal static Bounds GetPicking3DWorldBounds(VisualElement ve)
	{
		return default(Bounds);
	}

	[Token(Token = "0x6001153")]
	[Address(RVA = "0x328B0F0", Offset = "0x32896F0", VA = "0x18328B0F0")]
	internal static Bounds GetPicking3DLocalBounds(VisualElement ve)
	{
		return default(Bounds);
	}
}
