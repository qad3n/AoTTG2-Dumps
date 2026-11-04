// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GeometryUtility
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000B8")]
[UnityEngine.Bindings.StaticAccessor("GeometryUtilityScripting", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
public sealed class GeometryUtility
{
	[Token(Token = "0x6000395")]
	[Address(RVA = "0x2EC7D70", Offset = "0x2EC6370", VA = "0x182EC7D70")]
	public static void CalculateFrustumPlanes(Camera camera, Plane[] planes)
	{
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x2EC7BA0", Offset = "0x2EC61A0", VA = "0x182EC7BA0")]
	public static void CalculateFrustumPlanes(in Matrix4x4 worldToProjectionMatrix, Span<Plane> planes)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000397")]
	[Address(RVA = "0x2EC7FF0", Offset = "0x2EC65F0", VA = "0x182EC7FF0")]
	public static void CalculateFrustumPlanes(Matrix4x4 worldToProjectionMatrix, Plane[] planes)
	{
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x2EC81D0", Offset = "0x2EC67D0", VA = "0x182EC81D0")]
	[UnityEngine.Bindings.NativeName("TestPlanesAABB")]
	private static bool Internal_TestPlanesAABB(ReadOnlySpan<Plane> planes, in Bounds bounds)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000399")]
	[Address(RVA = "0x2EC8280", Offset = "0x2EC6880", VA = "0x182EC8280")]
	public static bool TestPlanesAABB(Plane[] planes, Bounds bounds)
	{
		return default(bool);
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x2EC80D0", Offset = "0x2EC66D0", VA = "0x182EC80D0")]
	[UnityEngine.Bindings.NativeName("ExtractPlanes")]
	private static void Internal_ExtractPlanes(Span<Plane> planes, in Matrix4x4 worldToProjectionMatrix)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600039B")]
	[Address(RVA = "0x2EC8180", Offset = "0x2EC6780", VA = "0x182EC8180")]
	private static extern bool Internal_TestPlanesAABB_Injected(ref ManagedSpanWrapper planes, in Bounds bounds);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600039C")]
	[Address(RVA = "0x2EC8080", Offset = "0x2EC6680", VA = "0x182EC8080")]
	private static extern void Internal_ExtractPlanes_Injected(ref ManagedSpanWrapper planes, in Matrix4x4 worldToProjectionMatrix);
}
