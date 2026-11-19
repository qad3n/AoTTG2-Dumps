// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.PhysicsMaterial
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x69E05E0", Offset = "0x69DF5E0", VA = "0x69E05E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000E3")]
		[Address(RVA = "0x69E0690", Offset = "0x69DF690", VA = "0x69E0690")]
		set
		{
		}
	}

	[Token(Token = "0x17000037")]
	public float dynamicFriction
	{
		[Token(Token = "0x60000E4")]
		[Address(RVA = "0x69E0770", Offset = "0x69DF770", VA = "0x69E0770")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x69E0820", Offset = "0x69DF820", VA = "0x69E0820")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public float staticFriction
	{
		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x69E0900", Offset = "0x69DF900", VA = "0x69E0900")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x69E09B0", Offset = "0x69DF9B0", VA = "0x69E09B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000039")]
	public PhysicsMaterialCombine frictionCombine
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x69E0A90", Offset = "0x69DFA90", VA = "0x69E0A90")]
		get
		{
			return default(PhysicsMaterialCombine);
		}
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x69E0B40", Offset = "0x69DFB40", VA = "0x69E0B40")]
		set
		{
		}
	}

	[Token(Token = "0x1700003A")]
	public PhysicsMaterialCombine bounceCombine
	{
		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x69E0C00", Offset = "0x69DFC00", VA = "0x69E0C00")]
		get
		{
			return default(PhysicsMaterialCombine);
		}
		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x69E0CB0", Offset = "0x69DFCB0", VA = "0x69E0CB0")]
		set
		{
		}
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x69E0360", Offset = "0x69DF360", VA = "0x69E0360")]
	public PhysicsMaterial()
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x69E0540", Offset = "0x69DF540", VA = "0x69E0540")]
	public PhysicsMaterial(string name)
	{
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x69E03D0", Offset = "0x69DF3D0", VA = "0x69E03D0")]
	private static void Internal_CreateDynamicsMaterial([UnityEngine.Writable] PhysicsMaterial mat, string name)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x69E05A0", Offset = "0x69DF5A0", VA = "0x69E05A0")]
	private static extern void Internal_CreateDynamicsMaterial_Injected([UnityEngine.Writable] PhysicsMaterial mat, ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x69E0660", Offset = "0x69DF660", VA = "0x69E0660")]
	private static extern float get_bounciness_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x69E0720", Offset = "0x69DF720", VA = "0x69E0720")]
	private static extern void set_bounciness_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x69E07F0", Offset = "0x69DF7F0", VA = "0x69E07F0")]
	private static extern float get_dynamicFriction_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x69E08B0", Offset = "0x69DF8B0", VA = "0x69E08B0")]
	private static extern void set_dynamicFriction_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x69E0980", Offset = "0x69DF980", VA = "0x69E0980")]
	private static extern float get_staticFriction_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x69E0A40", Offset = "0x69DFA40", VA = "0x69E0A40")]
	private static extern void set_staticFriction_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x69E0B10", Offset = "0x69DFB10", VA = "0x69E0B10")]
	private static extern PhysicsMaterialCombine get_frictionCombine_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x69E0BC0", Offset = "0x69DFBC0", VA = "0x69E0BC0")]
	private static extern void set_frictionCombine_Injected(IntPtr _unity_self, PhysicsMaterialCombine value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x69E0C80", Offset = "0x69DFC80", VA = "0x69E0C80")]
	private static extern PhysicsMaterialCombine get_bounceCombine_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x69E0D30", Offset = "0x69DFD30", VA = "0x69E0D30")]
	private static extern void set_bounceCombine_Injected(IntPtr _unity_self, PhysicsMaterialCombine value);
}
