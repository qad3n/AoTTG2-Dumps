// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.CapsuleCollider
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

[Token(Token = "0x2000008")]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/CapsuleCollider.h")]
[RequireComponent(typeof(Transform))]
public class CapsuleCollider : Collider
{
	[Token(Token = "0x1700000F")]
	public Vector3 center
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x69D73E0", Offset = "0x69D63E0", VA = "0x69D73E0")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x69D74C0", Offset = "0x69D64C0", VA = "0x69D74C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public float radius
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x69D7590", Offset = "0x69D6590", VA = "0x69D7590")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x69D7640", Offset = "0x69D6640", VA = "0x69D7640")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public float height
	{
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x69D7720", Offset = "0x69D6720", VA = "0x69D7720")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x69D77D0", Offset = "0x69D67D0", VA = "0x69D77D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public int direction
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x69D78B0", Offset = "0x69D68B0", VA = "0x69D78B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x69D7960", Offset = "0x69D6960", VA = "0x69D7960")]
		set
		{
		}
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x69D7A20", Offset = "0x69D6A20", VA = "0x69D7A20")]
	public CapsuleCollider()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x69D7480", Offset = "0x69D6480", VA = "0x69D7480")]
	private static extern void get_center_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x69D7550", Offset = "0x69D6550", VA = "0x69D7550")]
	private static extern void set_center_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000026")]
	[Address(RVA = "0x69D7610", Offset = "0x69D6610", VA = "0x69D7610")]
	private static extern float get_radius_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x69D76D0", Offset = "0x69D66D0", VA = "0x69D76D0")]
	private static extern void set_radius_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000028")]
	[Address(RVA = "0x69D77A0", Offset = "0x69D67A0", VA = "0x69D77A0")]
	private static extern float get_height_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x69D7860", Offset = "0x69D6860", VA = "0x69D7860")]
	private static extern void set_height_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002A")]
	[Address(RVA = "0x69D7930", Offset = "0x69D6930", VA = "0x69D7930")]
	private static extern int get_direction_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x69D79E0", Offset = "0x69D69E0", VA = "0x69D79E0")]
	private static extern void set_direction_Injected(IntPtr _unity_self, int value);
}
