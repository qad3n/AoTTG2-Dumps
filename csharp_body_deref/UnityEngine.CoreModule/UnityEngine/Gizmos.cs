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
		[Address(RVA = "0x4A97F00", Offset = "0x4A97F00", VA = "0x4A97F00")]
		set
		{
		}
	}

	[Token(Token = "0x17000093")]
	public static Matrix4x4 matrix
	{
		[Token(Token = "0x60002F0")]
		[Address(RVA = "0x4A97F80", Offset = "0x4A97F80", VA = "0x4A97F80")]
		set
		{
		}
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x4A97990", Offset = "0x4A97990", VA = "0x4A97990")]
	[UnityEngine.Bindings.NativeThrows]
	public static void DrawLine(Vector3 from, Vector3 to)
	{
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x4A97A20", Offset = "0x4A97A20", VA = "0x4A97A20")]
	[UnityEngine.Bindings.NativeThrows]
	public static void DrawWireSphere(Vector3 center, float radius)
	{
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x4A97AC0", Offset = "0x4A97AC0", VA = "0x4A97AC0")]
	[UnityEngine.Bindings.NativeThrows]
	public static void DrawSphere(Vector3 center, float radius)
	{
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x4A97B60", Offset = "0x4A97B60", VA = "0x4A97B60")]
	[UnityEngine.Bindings.NativeThrows]
	public static void DrawWireCube(Vector3 center, Vector3 size)
	{
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x4A97BF0", Offset = "0x4A97BF0", VA = "0x4A97BF0")]
	[UnityEngine.Bindings.NativeThrows]
	public static void DrawCube(Vector3 center, Vector3 size)
	{
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x4A97C80", Offset = "0x4A97C80", VA = "0x4A97C80")]
	[UnityEngine.Bindings.NativeThrows]
	public static void DrawMesh(Mesh mesh, int submeshIndex, [DefaultValue("Vector3.zero")] Vector3 position, [DefaultValue("Quaternion.identity")] Quaternion rotation, [DefaultValue("Vector3.one")] Vector3 scale)
	{
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x4A97DC0", Offset = "0x4A97DC0", VA = "0x4A97DC0")]
	[UnityEngine.Bindings.NativeThrows]
	public static void DrawWireMesh(Mesh mesh, int submeshIndex, [DefaultValue("Vector3.zero")] Vector3 position, [DefaultValue("Quaternion.identity")] Quaternion rotation, [DefaultValue("Vector3.one")] Vector3 scale)
	{
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x4A97FF0", Offset = "0x4A97FF0", VA = "0x4A97FF0")]
	[ExcludeFromDocs]
	public static void DrawMesh(Mesh mesh)
	{
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x4A98180", Offset = "0x4A98180", VA = "0x4A98180")]
	public static void DrawMesh(Mesh mesh, [DefaultValue("Vector3.zero")] Vector3 position, [DefaultValue("Quaternion.identity")] Quaternion rotation, [DefaultValue("Vector3.one")] Vector3 scale)
	{
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x4A98270", Offset = "0x4A98270", VA = "0x4A98270")]
	public static void DrawWireMesh(Mesh mesh, [DefaultValue("Vector3.zero")] Vector3 position, [DefaultValue("Quaternion.identity")] Quaternion rotation, [DefaultValue("Vector3.one")] Vector3 scale)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x4A979E0", Offset = "0x4A979E0", VA = "0x4A979E0")]
	private static extern void DrawLine_Injected([In] ref Vector3 from, [In] ref Vector3 to);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x4A97A70", Offset = "0x4A97A70", VA = "0x4A97A70")]
	private static extern void DrawWireSphere_Injected([In] ref Vector3 center, float radius);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x4A97B10", Offset = "0x4A97B10", VA = "0x4A97B10")]
	private static extern void DrawSphere_Injected([In] ref Vector3 center, float radius);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x4A97BB0", Offset = "0x4A97BB0", VA = "0x4A97BB0")]
	private static extern void DrawWireCube_Injected([In] ref Vector3 center, [In] ref Vector3 size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x4A97C40", Offset = "0x4A97C40", VA = "0x4A97C40")]
	private static extern void DrawCube_Injected([In] ref Vector3 center, [In] ref Vector3 size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x4A97D70", Offset = "0x4A97D70", VA = "0x4A97D70")]
	private static extern void DrawMesh_Injected(IntPtr mesh, int submeshIndex, [In][DefaultValue("Vector3.zero")] ref Vector3 position, [In][DefaultValue("Quaternion.identity")] ref Quaternion rotation, [In][DefaultValue("Vector3.one")] ref Vector3 scale);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x4A97EB0", Offset = "0x4A97EB0", VA = "0x4A97EB0")]
	private static extern void DrawWireMesh_Injected(IntPtr mesh, int submeshIndex, [In][DefaultValue("Vector3.zero")] ref Vector3 position, [In][DefaultValue("Quaternion.identity")] ref Quaternion rotation, [In][DefaultValue("Vector3.one")] ref Vector3 scale);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x4A97F50", Offset = "0x4A97F50", VA = "0x4A97F50")]
	private static extern void set_color_Injected([In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x4A97FC0", Offset = "0x4A97FC0", VA = "0x4A97FC0")]
	private static extern void set_matrix_Injected([In] ref Matrix4x4 value);
}
