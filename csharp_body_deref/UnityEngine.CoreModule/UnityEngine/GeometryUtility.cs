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
	[Address(RVA = "0x4A94CF0", Offset = "0x4A94CF0", VA = "0x4A94CF0")]
	public static void CalculateFrustumPlanes(Camera camera, Plane[] planes)
	{
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x4A95020", Offset = "0x4A95020", VA = "0x4A95020")]
	public static void CalculateFrustumPlanes(Matrix4x4 worldToProjectionMatrix, Plane[] planes)
	{
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x4A95260", Offset = "0x4A95260", VA = "0x4A95260")]
	public static bool TestPlanesAABB(Plane[] planes, Bounds bounds)
	{
		return default(bool);
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x4A951A0", Offset = "0x4A951A0", VA = "0x4A951A0")]
	[UnityEngine.Bindings.NativeName("ExtractPlanes")]
	private static void Internal_ExtractPlanes([Out] Plane[] planes, Matrix4x4 worldToProjectionMatrix)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000280")]
	[Address(RVA = "0x4A95320", Offset = "0x4A95320", VA = "0x4A95320")]
	private static extern bool TestPlanesAABB_Injected(ref ManagedSpanWrapper planes, [In] ref Bounds bounds);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000281")]
	[Address(RVA = "0x4A95360", Offset = "0x4A95360", VA = "0x4A95360")]
	private static extern void Internal_ExtractPlanes_Injected(out ManagedSpanWrapper planes, [In] ref Matrix4x4 worldToProjectionMatrix);
}
