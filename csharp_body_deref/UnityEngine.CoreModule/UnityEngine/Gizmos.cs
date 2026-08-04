// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Gizmos
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
using UnityEngine.Internal;

namespace UnityEngine;

[Token(Token = "0x20000A1")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Gizmos/Gizmos.bindings.h")]
[UnityEngine.Bindings.StaticAccessor("GizmoBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
public sealed class Gizmos
{
	[Token(Token = "0x17000092")]
	public static Color color
	{
		[Token(Token = "0x60002EF")]
		[Address(RVA = "0x4DBF720", Offset = "0x4DBF720", VA = "0x4DBF720")]
		set
		{
		}
	}

	[Token(Token = "0x17000093")]
	public static Matrix4x4 matrix
	{
		[Token(Token = "0x60002F0")]
		[Address(RVA = "0x4DBF7A0", Offset = "0x4DBF7A0", VA = "0x4DBF7A0")]
		set
		{
		}
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x4DBF1B0", Offset = "0x4DBF1B0", VA = "0x4DBF1B0")]
	[UnityEngine.Bindings.NativeThrows]
	public static void DrawLine(Vector3 from, Vector3 to)
	{
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x4DBF240", Offset = "0x4DBF240", VA = "0x4DBF240")]
	[UnityEngine.Bindings.NativeThrows]
	public static void DrawWireSphere(Vector3 center, float radius)
	{
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x4DBF2E0", Offset = "0x4DBF2E0", VA = "0x4DBF2E0")]
	[UnityEngine.Bindings.NativeThrows]
	public static void DrawSphere(Vector3 center, float radius)
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x4DBF380", Offset = "0x4DBF380", VA = "0x4DBF380")]
	[UnityEngine.Bindings.NativeThrows]
	public static void DrawWireCube(Vector3 center, Vector3 size)
	{
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x4DBF410", Offset = "0x4DBF410", VA = "0x4DBF410")]
	[UnityEngine.Bindings.NativeThrows]
	public static void DrawCube(Vector3 center, Vector3 size)
	{
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x4DBF4A0", Offset = "0x4DBF4A0", VA = "0x4DBF4A0")]
	[UnityEngine.Bindings.NativeThrows]
	public static void DrawMesh(Mesh mesh, int submeshIndex, [DefaultValue("Vector3.zero")] Vector3 position, [DefaultValue("Quaternion.identity")] Quaternion rotation, [DefaultValue("Vector3.one")] Vector3 scale)
	{
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x4DBF5E0", Offset = "0x4DBF5E0", VA = "0x4DBF5E0")]
	[UnityEngine.Bindings.NativeThrows]
	public static void DrawWireMesh(Mesh mesh, int submeshIndex, [DefaultValue("Vector3.zero")] Vector3 position, [DefaultValue("Quaternion.identity")] Quaternion rotation, [DefaultValue("Vector3.one")] Vector3 scale)
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x4DBF810", Offset = "0x4DBF810", VA = "0x4DBF810")]
	[ExcludeFromDocs]
	public static void DrawMesh(Mesh mesh)
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x4DBF9A0", Offset = "0x4DBF9A0", VA = "0x4DBF9A0")]
	public static void DrawMesh(Mesh mesh, [DefaultValue("Vector3.zero")] Vector3 position, [DefaultValue("Quaternion.identity")] Quaternion rotation, [DefaultValue("Vector3.one")] Vector3 scale)
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x4DBFA90", Offset = "0x4DBFA90", VA = "0x4DBFA90")]
	public static void DrawWireMesh(Mesh mesh, [DefaultValue("Vector3.zero")] Vector3 position, [DefaultValue("Quaternion.identity")] Quaternion rotation, [DefaultValue("Vector3.one")] Vector3 scale)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x4DBF200", Offset = "0x4DBF200", VA = "0x4DBF200")]
	private static extern void DrawLine_Injected([In] ref Vector3 from, [In] ref Vector3 to);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x4DBF290", Offset = "0x4DBF290", VA = "0x4DBF290")]
	private static extern void DrawWireSphere_Injected([In] ref Vector3 center, float radius);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x4DBF330", Offset = "0x4DBF330", VA = "0x4DBF330")]
	private static extern void DrawSphere_Injected([In] ref Vector3 center, float radius);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x4DBF3D0", Offset = "0x4DBF3D0", VA = "0x4DBF3D0")]
	private static extern void DrawWireCube_Injected([In] ref Vector3 center, [In] ref Vector3 size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x4DBF460", Offset = "0x4DBF460", VA = "0x4DBF460")]
	private static extern void DrawCube_Injected([In] ref Vector3 center, [In] ref Vector3 size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x4DBF590", Offset = "0x4DBF590", VA = "0x4DBF590")]
	private static extern void DrawMesh_Injected(IntPtr mesh, int submeshIndex, [In][DefaultValue("Vector3.zero")] ref Vector3 position, [In][DefaultValue("Quaternion.identity")] ref Quaternion rotation, [In][DefaultValue("Vector3.one")] ref Vector3 scale);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x4DBF6D0", Offset = "0x4DBF6D0", VA = "0x4DBF6D0")]
	private static extern void DrawWireMesh_Injected(IntPtr mesh, int submeshIndex, [In][DefaultValue("Vector3.zero")] ref Vector3 position, [In][DefaultValue("Quaternion.identity")] ref Quaternion rotation, [In][DefaultValue("Vector3.one")] ref Vector3 scale);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x4DBF770", Offset = "0x4DBF770", VA = "0x4DBF770")]
	private static extern void set_color_Injected([In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x4DBF7E0", Offset = "0x4DBF7E0", VA = "0x4DBF7E0")]
	private static extern void set_matrix_Injected([In] ref Matrix4x4 value);
}
