// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GeometryUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x200009A")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
[UnityEngine.Bindings.StaticAccessor("GeometryUtilityScripting", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
public sealed class GeometryUtility
{
	[Token(Token = "0x600027C")]
	[Address(RVA = "0x4DBC510", Offset = "0x4DBC510", VA = "0x4DBC510")]
	public static void CalculateFrustumPlanes(Camera camera, Plane[] planes)
	{
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x4DBC840", Offset = "0x4DBC840", VA = "0x4DBC840")]
	public static void CalculateFrustumPlanes(Matrix4x4 worldToProjectionMatrix, Plane[] planes)
	{
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x4DBCA80", Offset = "0x4DBCA80", VA = "0x4DBCA80")]
	public static bool TestPlanesAABB(Plane[] planes, Bounds bounds)
	{
		return default(bool);
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x4DBC9C0", Offset = "0x4DBC9C0", VA = "0x4DBC9C0")]
	[UnityEngine.Bindings.NativeName("ExtractPlanes")]
	private static void Internal_ExtractPlanes([Out] Plane[] planes, Matrix4x4 worldToProjectionMatrix)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000280")]
	[Address(RVA = "0x4DBCB40", Offset = "0x4DBCB40", VA = "0x4DBCB40")]
	private static extern bool TestPlanesAABB_Injected(ref ManagedSpanWrapper planes, [In] ref Bounds bounds);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000281")]
	[Address(RVA = "0x4DBCB80", Offset = "0x4DBCB80", VA = "0x4DBCB80")]
	private static extern void Internal_ExtractPlanes_Injected(out ManagedSpanWrapper planes, [In] ref Matrix4x4 worldToProjectionMatrix);
}
