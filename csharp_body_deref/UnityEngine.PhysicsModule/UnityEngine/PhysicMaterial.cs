using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x200000E")]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/PhysicMaterial.h")]
public class PhysicMaterial : Object
{
	[Token(Token = "0x1700000D")]
	public float bounciness
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x4B55900", Offset = "0x4B55900", VA = "0x4B55900")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x4B559D0", Offset = "0x4B559D0", VA = "0x4B559D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public float dynamicFriction
	{
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x4B55AD0", Offset = "0x4B55AD0", VA = "0x4B55AD0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600006A")]
		[Address(RVA = "0x4B55BA0", Offset = "0x4B55BA0", VA = "0x4B55BA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public float staticFriction
	{
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x4B55CA0", Offset = "0x4B55CA0", VA = "0x4B55CA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x4B55D70", Offset = "0x4B55D70", VA = "0x4B55D70")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public PhysicMaterialCombine frictionCombine
	{
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x4B55E70", Offset = "0x4B55E70", VA = "0x4B55E70")]
		get
		{
			return default(PhysicMaterialCombine);
		}
		[Token(Token = "0x600006E")]
		[Address(RVA = "0x4B55F40", Offset = "0x4B55F40", VA = "0x4B55F40")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public PhysicMaterialCombine bounceCombine
	{
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x4B56020", Offset = "0x4B56020", VA = "0x4B56020")]
		get
		{
			return default(PhysicMaterialCombine);
		}
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x4B560F0", Offset = "0x4B560F0", VA = "0x4B560F0")]
		set
		{
		}
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x4B55830", Offset = "0x4B55830", VA = "0x4B55830")]
	public PhysicMaterial()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000066")]
	[Address(RVA = "0x4B558C0", Offset = "0x4B558C0", VA = "0x4B558C0")]
	private static extern void Internal_CreateDynamicsMaterial([UnityEngine.Writable] PhysicMaterial mat, string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000071")]
	[Address(RVA = "0x4B559A0", Offset = "0x4B559A0", VA = "0x4B559A0")]
	private static extern float get_bounciness_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000072")]
	[Address(RVA = "0x4B55A80", Offset = "0x4B55A80", VA = "0x4B55A80")]
	private static extern void set_bounciness_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000073")]
	[Address(RVA = "0x4B55B70", Offset = "0x4B55B70", VA = "0x4B55B70")]
	private static extern float get_dynamicFriction_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000074")]
	[Address(RVA = "0x4B55C50", Offset = "0x4B55C50", VA = "0x4B55C50")]
	private static extern void set_dynamicFriction_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000075")]
	[Address(RVA = "0x4B55D40", Offset = "0x4B55D40", VA = "0x4B55D40")]
	private static extern float get_staticFriction_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000076")]
	[Address(RVA = "0x4B55E20", Offset = "0x4B55E20", VA = "0x4B55E20")]
	private static extern void set_staticFriction_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000077")]
	[Address(RVA = "0x4B55F10", Offset = "0x4B55F10", VA = "0x4B55F10")]
	private static extern PhysicMaterialCombine get_frictionCombine_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000078")]
	[Address(RVA = "0x4B55FE0", Offset = "0x4B55FE0", VA = "0x4B55FE0")]
	private static extern void set_frictionCombine_Injected(IntPtr _unity_self, PhysicMaterialCombine value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000079")]
	[Address(RVA = "0x4B560C0", Offset = "0x4B560C0", VA = "0x4B560C0")]
	private static extern PhysicMaterialCombine get_bounceCombine_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007A")]
	[Address(RVA = "0x4B56190", Offset = "0x4B56190", VA = "0x4B56190")]
	private static extern void set_bounceCombine_Injected(IntPtr _unity_self, PhysicMaterialCombine value);
}
