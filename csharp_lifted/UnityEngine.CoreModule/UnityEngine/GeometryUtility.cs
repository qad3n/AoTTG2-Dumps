// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GeometryUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20000BA")]
[UnityEngine.Bindings.StaticAccessor("GeometryUtilityScripting", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
public sealed class GeometryUtility
{
	[Token(Token = "0x600039B")]
	[Address(RVA = "0x68CA040", Offset = "0x68C9040", VA = "0x68CA040")]
	public static void CalculateFrustumPlanes(Camera camera, Plane[] planes)
	{
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x68CA340", Offset = "0x68C9340", VA = "0x68CA340")]
	public static void CalculateFrustumPlanes(in Matrix4x4 worldToProjectionMatrix, Span<Plane> planes)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039D")]
	[Address(RVA = "0x68CA590", Offset = "0x68C9590", VA = "0x68CA590")]
	public static void CalculateFrustumPlanes(Matrix4x4 worldToProjectionMatrix, Plane[] planes)
	{
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x68CA610", Offset = "0x68C9610", VA = "0x68CA610")]
	[UnityEngine.Bindings.NativeName("TestPlanesAABB")]
	private static bool Internal_TestPlanesAABB(ReadOnlySpan<Plane> planes, in Bounds bounds)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600039F")]
	[Address(RVA = "0x68CA700", Offset = "0x68C9700", VA = "0x68CA700")]
	public static bool TestPlanesAABB(Plane[] planes, Bounds bounds)
	{
		return default(bool);
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x68CA4E0", Offset = "0x68C94E0", VA = "0x68CA4E0")]
	[UnityEngine.Bindings.NativeName("ExtractPlanes")]
	private static void Internal_ExtractPlanes(Span<Plane> planes, in Matrix4x4 worldToProjectionMatrix)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x68CA6C0", Offset = "0x68C96C0", VA = "0x68CA6C0")]
	private static extern bool Internal_TestPlanesAABB_Injected(ref ManagedSpanWrapper planes, in Bounds bounds);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x68CA830", Offset = "0x68C9830", VA = "0x68CA830")]
	private static extern void Internal_ExtractPlanes_Injected(ref ManagedSpanWrapper planes, in Matrix4x4 worldToProjectionMatrix);
}
