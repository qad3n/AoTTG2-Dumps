using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000014")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/CapsuleCollider.h")]
public class CapsuleCollider : Collider
{
	[Token(Token = "0x17000030")]
	public Vector3 center
	{
		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x4B5A0F0", Offset = "0x4B5A0F0", VA = "0x4B5A0F0")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x60000FF")]
		[Address(RVA = "0x4B5A1F0", Offset = "0x4B5A1F0", VA = "0x4B5A1F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public float radius
	{
		[Token(Token = "0x6000100")]
		[Address(RVA = "0x4B5A2E0", Offset = "0x4B5A2E0", VA = "0x4B5A2E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000101")]
		[Address(RVA = "0x4B5A3B0", Offset = "0x4B5A3B0", VA = "0x4B5A3B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000032")]
	public float height
	{
		[Token(Token = "0x6000102")]
		[Address(RVA = "0x4B5A4B0", Offset = "0x4B5A4B0", VA = "0x4B5A4B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000103")]
		[Address(RVA = "0x4B5A580", Offset = "0x4B5A580", VA = "0x4B5A580")]
		set
		{
		}
	}

	[Token(Token = "0x17000033")]
	public int direction
	{
		[Token(Token = "0x6000104")]
		[Address(RVA = "0x4B5A680", Offset = "0x4B5A680", VA = "0x4B5A680")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000105")]
		[Address(RVA = "0x4B5A750", Offset = "0x4B5A750", VA = "0x4B5A750")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000106")]
	[Address(RVA = "0x4B5A1B0", Offset = "0x4B5A1B0", VA = "0x4B5A1B0")]
	private static extern void get_center_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000107")]
	[Address(RVA = "0x4B5A2A0", Offset = "0x4B5A2A0", VA = "0x4B5A2A0")]
	private static extern void set_center_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000108")]
	[Address(RVA = "0x4B5A380", Offset = "0x4B5A380", VA = "0x4B5A380")]
	private static extern float get_radius_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000109")]
	[Address(RVA = "0x4B5A460", Offset = "0x4B5A460", VA = "0x4B5A460")]
	private static extern void set_radius_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600010A")]
	[Address(RVA = "0x4B5A550", Offset = "0x4B5A550", VA = "0x4B5A550")]
	private static extern float get_height_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600010B")]
	[Address(RVA = "0x4B5A630", Offset = "0x4B5A630", VA = "0x4B5A630")]
	private static extern void set_height_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600010C")]
	[Address(RVA = "0x4B5A720", Offset = "0x4B5A720", VA = "0x4B5A720")]
	private static extern int get_direction_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600010D")]
	[Address(RVA = "0x4B5A7F0", Offset = "0x4B5A7F0", VA = "0x4B5A7F0")]
	private static extern void set_direction_Injected(IntPtr _unity_self, int value);
}
