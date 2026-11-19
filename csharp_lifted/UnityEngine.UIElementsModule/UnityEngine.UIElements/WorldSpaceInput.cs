// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.WorldSpaceInput
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6C8FBD0", Offset = "0x6C8EBD0", VA = "0x6C8FBD0")]
		internal void ComputeCollisionData(Ray ray)
		{
		}
	}

	[Token(Token = "0x6001149")]
	[Address(RVA = "0x6C83180", Offset = "0x6C82180", VA = "0x6C83180")]
	public static VisualElement Pick3D(UIDocument document, Ray worldRay, out float distance)
	{
		return null;
	}

	[Token(Token = "0x600114A")]
	[Address(RVA = "0x6C8F830", Offset = "0x6C8E830", VA = "0x6C8F830")]
	public static VisualElement Pick3D(IPanel panel, Ray panelRay, [Optional] List<VisualElement> outResults)
	{
		return null;
	}

	[Token(Token = "0x600114B")]
	[Address(RVA = "0x6C8F990", Offset = "0x6C8E990", VA = "0x6C8F990")]
	public static VisualElement Pick3D(VisualElement rootVisualElement, Ray localRay, [Optional] List<VisualElement> outResults)
	{
		return null;
	}

	[Token(Token = "0x600114C")]
	[Address(RVA = "0x6C820B0", Offset = "0x6C810B0", VA = "0x6C820B0")]
	public static PickResult PickDocument3D(Ray worldRay, float maxDistance = 1f / 0f, int layerMask = -5)
	{
		return default(PickResult);
	}

	[Token(Token = "0x600114D")]
	[Address(RVA = "0x6C8F6C0", Offset = "0x6C8E6C0", VA = "0x6C8F6C0")]
	internal static VisualElement Pick_Internal(UIDocument document, Ray documentRay, [Optional] List<VisualElement> outResults)
	{
		return null;
	}

	[Token(Token = "0x600114E")]
	[Address(RVA = "0x6C8FA70", Offset = "0x6C8EA70", VA = "0x6C8FA70")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "Assembly-CSharp-testable" })]
	internal static VisualElement PerformPick(VisualElement root, Ray ray, List<VisualElement> outResults)
	{
		return null;
	}

	[Token(Token = "0x600114F")]
	[Address(RVA = "0x6C8FE10", Offset = "0x6C8EE10", VA = "0x6C8FE10")]
	private static VisualElement PerformPick2D(VisualElement root, Ray ray, List<VisualElement> outResults)
	{
		return null;
	}

	[Token(Token = "0x6001150")]
	[Address(RVA = "0x6C8FE70", Offset = "0x6C8EE70", VA = "0x6C8FE70")]
	private static VisualElement PerformPick3D(VisualElement root, Ray ray, List<VisualElement> outResults)
	{
		return null;
	}

	[Token(Token = "0x6001151")]
	[Address(RVA = "0x6C90260", Offset = "0x6C8F260", VA = "0x6C90260")]
	private static VisualElement PerformPick2D_LocalPoint(VisualElement root, Vector3 localPoint, [Optional] List<VisualElement> picked)
	{
		return null;
	}

	[Token(Token = "0x6001152")]
	[Address(RVA = "0x6C8DBE0", Offset = "0x6C8CBE0", VA = "0x6C8DBE0")]
	internal static Bounds GetPicking3DWorldBounds(VisualElement ve)
	{
		return default(Bounds);
	}

	[Token(Token = "0x6001153")]
	[Address(RVA = "0x6C8FB00", Offset = "0x6C8EB00", VA = "0x6C8FB00")]
	internal static Bounds GetPicking3DLocalBounds(VisualElement ve)
	{
		return default(Bounds);
	}
}
