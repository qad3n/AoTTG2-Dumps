// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.MeshCollider
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

[Token(Token = "0x2000013")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/MeshCollider.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Mesh/Mesh.h")]
public class MeshCollider : Collider
{
	[Token(Token = "0x17000022")]
	public Mesh sharedMesh
	{
		[Token(Token = "0x60000C0")]
		[Address(RVA = "0x69DFF00", Offset = "0x69DEF00", VA = "0x69DFF00")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x69DFFD0", Offset = "0x69DEFD0", VA = "0x69DFFD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public bool convex
	{
		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x69E00E0", Offset = "0x69DF0E0", VA = "0x69E00E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x69E0190", Offset = "0x69DF190", VA = "0x69E0190")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x69DFFA0", Offset = "0x69DEFA0", VA = "0x69DFFA0")]
	private static extern IntPtr get_sharedMesh_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x69E00A0", Offset = "0x69DF0A0", VA = "0x69E00A0")]
	private static extern void set_sharedMesh_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x69E0160", Offset = "0x69DF160", VA = "0x69E0160")]
	private static extern bool get_convex_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x69E0210", Offset = "0x69DF210", VA = "0x69E0210")]
	private static extern void set_convex_Injected(IntPtr _unity_self, bool value);
}
