// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SphereCollider
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

[Token(Token = "0x2000022")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/SphereCollider.h")]
public class SphereCollider : Collider
{
	[Token(Token = "0x1700004D")]
	public Vector3 center
	{
		[Token(Token = "0x600016A")]
		[Address(RVA = "0x2FE8E70", Offset = "0x2FE7470", VA = "0x182FE8E70")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x600016B")]
		[Address(RVA = "0x2FE9020", Offset = "0x2FE7620", VA = "0x182FE9020")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public float radius
	{
		[Token(Token = "0x600016C")]
		[Address(RVA = "0x2FE8F50", Offset = "0x2FE7550", VA = "0x182FE8F50")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600016D")]
		[Address(RVA = "0x2FE9100", Offset = "0x2FE7700", VA = "0x182FE9100")]
		set
		{
		}
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public SphereCollider()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600016F")]
	[Address(RVA = "0x2FE8E20", Offset = "0x2FE7420", VA = "0x182FE8E20")]
	private static extern void get_center_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000170")]
	[Address(RVA = "0x2FE8FD0", Offset = "0x2FE75D0", VA = "0x182FE8FD0")]
	private static extern void set_center_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000171")]
	[Address(RVA = "0x2FE8F10", Offset = "0x2FE7510", VA = "0x182FE8F10")]
	private static extern float get_radius_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000172")]
	[Address(RVA = "0x2FE90B0", Offset = "0x2FE76B0", VA = "0x182FE90B0")]
	private static extern void set_radius_Injected(IntPtr _unity_self, float value);
}
