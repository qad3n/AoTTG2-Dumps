// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.PhysicsMaterial
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x200001C")]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/PhysicsMaterial.h")]
public class PhysicsMaterial : Object
{
	[Token(Token = "0x17000036")]
	public float bounciness
	{
		[Token(Token = "0x60000E2")]
		[Address(RVA = "0x2FDF2F0", Offset = "0x2FDD8F0", VA = "0x182FDF2F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000E3")]
		[Address(RVA = "0x2FDF6D0", Offset = "0x2FDDCD0", VA = "0x182FDF6D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000037")]
	public float dynamicFriction
	{
		[Token(Token = "0x60000E4")]
		[Address(RVA = "0x2FDF3B0", Offset = "0x2FDD9B0", VA = "0x182FDF3B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x2FDF7B0", Offset = "0x2FDDDB0", VA = "0x182FDF7B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public float staticFriction
	{
		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x2FDF530", Offset = "0x2FDDB30", VA = "0x182FDF530")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x2FDF960", Offset = "0x2FDDF60", VA = "0x182FDF960")]
		set
		{
		}
	}

	[Token(Token = "0x17000039")]
	public PhysicsMaterialCombine frictionCombine
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x2FDF470", Offset = "0x2FDDA70", VA = "0x182FDF470")]
		get
		{
			return default(PhysicsMaterialCombine);
		}
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x2FDF880", Offset = "0x2FDDE80", VA = "0x182FDF880")]
		set
		{
		}
	}

	[Token(Token = "0x1700003A")]
	public PhysicsMaterialCombine bounceCombine
	{
		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x2FDF230", Offset = "0x2FDD830", VA = "0x182FDF230")]
		get
		{
			return default(PhysicsMaterialCombine);
		}
		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x2FDF5F0", Offset = "0x2FDDBF0", VA = "0x182FDF5F0")]
		set
		{
		}
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x2FDF110", Offset = "0x2FDD710", VA = "0x182FDF110")]
	public PhysicsMaterial()
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x2FDF180", Offset = "0x2FDD780", VA = "0x182FDF180")]
	public PhysicsMaterial(string name)
	{
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x2FDEF80", Offset = "0x2FDD580", VA = "0x182FDEF80")]
	private static void Internal_CreateDynamicsMaterial([UnityEngine.Writable] PhysicsMaterial mat, string name)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x2FDEF30", Offset = "0x2FDD530", VA = "0x182FDEF30")]
	private static extern void Internal_CreateDynamicsMaterial_Injected([UnityEngine.Writable] PhysicsMaterial mat, ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x2FDF2B0", Offset = "0x2FDD8B0", VA = "0x182FDF2B0")]
	private static extern float get_bounciness_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x2FDF680", Offset = "0x2FDDC80", VA = "0x182FDF680")]
	private static extern void set_bounciness_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x2FDF370", Offset = "0x2FDD970", VA = "0x182FDF370")]
	private static extern float get_dynamicFriction_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x2FDF760", Offset = "0x2FDDD60", VA = "0x182FDF760")]
	private static extern void set_dynamicFriction_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x2FDF4F0", Offset = "0x2FDDAF0", VA = "0x182FDF4F0")]
	private static extern float get_staticFriction_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x2FDF910", Offset = "0x2FDDF10", VA = "0x182FDF910")]
	private static extern void set_staticFriction_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x2FDF430", Offset = "0x2FDDA30", VA = "0x182FDF430")]
	private static extern PhysicsMaterialCombine get_frictionCombine_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x2FDF840", Offset = "0x2FDDE40", VA = "0x182FDF840")]
	private static extern void set_frictionCombine_Injected(IntPtr _unity_self, PhysicsMaterialCombine value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x2FDF1F0", Offset = "0x2FDD7F0", VA = "0x182FDF1F0")]
	private static extern PhysicsMaterialCombine get_bounceCombine_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x2FDF5B0", Offset = "0x2FDDBB0", VA = "0x182FDF5B0")]
	private static extern void set_bounceCombine_Injected(IntPtr _unity_self, PhysicsMaterialCombine value);
}
