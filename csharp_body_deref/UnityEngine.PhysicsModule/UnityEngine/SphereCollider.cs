// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SphereCollider
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
		[Address(RVA = "0x69E3F80", Offset = "0x69E2F80", VA = "0x69E3F80")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x600016B")]
		[Address(RVA = "0x69E4060", Offset = "0x69E3060", VA = "0x69E4060")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public float radius
	{
		[Token(Token = "0x600016C")]
		[Address(RVA = "0x69E4130", Offset = "0x69E3130", VA = "0x69E4130")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600016D")]
		[Address(RVA = "0x69E41E0", Offset = "0x69E31E0", VA = "0x69E41E0")]
		set
		{
		}
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x69E42C0", Offset = "0x69E32C0", VA = "0x69E42C0")]
	public SphereCollider()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600016F")]
	[Address(RVA = "0x69E4020", Offset = "0x69E3020", VA = "0x69E4020")]
	private static extern void get_center_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000170")]
	[Address(RVA = "0x69E40F0", Offset = "0x69E30F0", VA = "0x69E40F0")]
	private static extern void set_center_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000171")]
	[Address(RVA = "0x69E41B0", Offset = "0x69E31B0", VA = "0x69E41B0")]
	private static extern float get_radius_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000172")]
	[Address(RVA = "0x69E4270", Offset = "0x69E3270", VA = "0x69E4270")]
	private static extern void set_radius_Injected(IntPtr _unity_self, float value);
}
