// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.BoxCollider
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000007")]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/BoxCollider.h")]
[RequireComponent(typeof(Transform))]
public class BoxCollider : Collider
{
	[Token(Token = "0x1700000D")]
	public Vector3 center
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x2FDBE20", Offset = "0x2FDA420", VA = "0x182FDBE20")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x2FDC000", Offset = "0x2FDA600", VA = "0x182FDC000")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public Vector3 size
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x2FDBF10", Offset = "0x2FDA510", VA = "0x182FDBF10")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x2FDC0E0", Offset = "0x2FDA6E0", VA = "0x182FDC0E0")]
		set
		{
		}
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public BoxCollider()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000017")]
	[Address(RVA = "0x2FDBDD0", Offset = "0x2FDA3D0", VA = "0x182FDBDD0")]
	private static extern void get_center_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000018")]
	[Address(RVA = "0x2FDBFB0", Offset = "0x2FDA5B0", VA = "0x182FDBFB0")]
	private static extern void set_center_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000019")]
	[Address(RVA = "0x2FDBEC0", Offset = "0x2FDA4C0", VA = "0x182FDBEC0")]
	private static extern void get_size_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001A")]
	[Address(RVA = "0x2FDC090", Offset = "0x2FDA690", VA = "0x182FDC090")]
	private static extern void set_size_Injected(IntPtr _unity_self, [In] ref Vector3 value);
}
