// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.CapsuleCollider
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

[Token(Token = "0x2000008")]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/CapsuleCollider.h")]
[RequireComponent(typeof(Transform))]
public class CapsuleCollider : Collider
{
	[Token(Token = "0x1700000F")]
	public Vector3 center
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x2FDC1C0", Offset = "0x2FDA7C0", VA = "0x182FDC1C0")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x2FDC4F0", Offset = "0x2FDAAF0", VA = "0x182FDC4F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public float radius
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x2FDC420", Offset = "0x2FDAA20", VA = "0x182FDC420")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x2FDC780", Offset = "0x2FDAD80", VA = "0x182FDC780")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public float height
	{
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x2FDC360", Offset = "0x2FDA960", VA = "0x182FDC360")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x2FDC6A0", Offset = "0x2FDACA0", VA = "0x182FDC6A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public int direction
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x2FDC2A0", Offset = "0x2FDA8A0", VA = "0x182FDC2A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x2FDC5C0", Offset = "0x2FDABC0", VA = "0x182FDC5C0")]
		set
		{
		}
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public CapsuleCollider()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x2FDC170", Offset = "0x2FDA770", VA = "0x182FDC170")]
	private static extern void get_center_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x2FDC4A0", Offset = "0x2FDAAA0", VA = "0x182FDC4A0")]
	private static extern void set_center_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000026")]
	[Address(RVA = "0x2FDC3E0", Offset = "0x2FDA9E0", VA = "0x182FDC3E0")]
	private static extern float get_radius_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x2FDC730", Offset = "0x2FDAD30", VA = "0x182FDC730")]
	private static extern void set_radius_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000028")]
	[Address(RVA = "0x2FDC320", Offset = "0x2FDA920", VA = "0x182FDC320")]
	private static extern float get_height_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x2FDC650", Offset = "0x2FDAC50", VA = "0x182FDC650")]
	private static extern void set_height_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002A")]
	[Address(RVA = "0x2FDC260", Offset = "0x2FDA860", VA = "0x182FDC260")]
	private static extern int get_direction_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x2FDC580", Offset = "0x2FDAB80", VA = "0x182FDC580")]
	private static extern void set_direction_Injected(IntPtr _unity_self, int value);
}
