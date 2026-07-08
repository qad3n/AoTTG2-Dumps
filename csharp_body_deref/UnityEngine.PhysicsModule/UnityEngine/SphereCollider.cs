using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000016")]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/SphereCollider.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class SphereCollider : Collider
{
	[Token(Token = "0x17000036")]
	public Vector3 center
	{
		[Token(Token = "0x6000116")]
		[Address(RVA = "0x4B5AC10", Offset = "0x4B5AC10", VA = "0x4B5AC10")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000117")]
		[Address(RVA = "0x4B5AD10", Offset = "0x4B5AD10", VA = "0x4B5AD10")]
		set
		{
		}
	}

	[Token(Token = "0x17000037")]
	public float radius
	{
		[Token(Token = "0x6000118")]
		[Address(RVA = "0x4B5AE00", Offset = "0x4B5AE00", VA = "0x4B5AE00")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000119")]
		[Address(RVA = "0x4B5AED0", Offset = "0x4B5AED0", VA = "0x4B5AED0")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011A")]
	[Address(RVA = "0x4B5ACD0", Offset = "0x4B5ACD0", VA = "0x4B5ACD0")]
	private static extern void get_center_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011B")]
	[Address(RVA = "0x4B5ADC0", Offset = "0x4B5ADC0", VA = "0x4B5ADC0")]
	private static extern void set_center_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011C")]
	[Address(RVA = "0x4B5AEA0", Offset = "0x4B5AEA0", VA = "0x4B5AEA0")]
	private static extern float get_radius_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600011D")]
	[Address(RVA = "0x4B5AF80", Offset = "0x4B5AF80", VA = "0x4B5AF80")]
	private static extern void set_radius_Injected(IntPtr _unity_self, float value);
}
