// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.MeshCollider
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
		[Address(RVA = "0x2FDECA0", Offset = "0x2FDD2A0", VA = "0x182FDECA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x2FDEE70", Offset = "0x2FDD470", VA = "0x182FDEE70")]
		set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public bool convex
	{
		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x2FDEBE0", Offset = "0x2FDD1E0", VA = "0x182FDEBE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x2FDED90", Offset = "0x2FDD390", VA = "0x182FDED90")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x2FDEC60", Offset = "0x2FDD260", VA = "0x182FDEC60")]
	private static extern IntPtr get_sharedMesh_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x2FDEE20", Offset = "0x2FDD420", VA = "0x182FDEE20")]
	private static extern void set_sharedMesh_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x2FDEBA0", Offset = "0x2FDD1A0", VA = "0x182FDEBA0")]
	private static extern bool get_convex_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x2FDED40", Offset = "0x2FDD340", VA = "0x182FDED40")]
	private static extern void set_convex_Injected(IntPtr _unity_self, bool value);
}
