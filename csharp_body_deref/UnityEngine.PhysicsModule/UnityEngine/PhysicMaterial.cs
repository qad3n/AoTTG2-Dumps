// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.PhysicMaterial
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

[Token(Token = "0x200000E")]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/PhysicMaterial.h")]
public class PhysicMaterial : Object
{
	[Token(Token = "0x1700000D")]
	public float bounciness
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x4E7D230", Offset = "0x4E7D230", VA = "0x4E7D230")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x4E7D300", Offset = "0x4E7D300", VA = "0x4E7D300")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public float dynamicFriction
	{
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x4E7D400", Offset = "0x4E7D400", VA = "0x4E7D400")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600006A")]
		[Address(RVA = "0x4E7D4D0", Offset = "0x4E7D4D0", VA = "0x4E7D4D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public float staticFriction
	{
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x4E7D5D0", Offset = "0x4E7D5D0", VA = "0x4E7D5D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x4E7D6A0", Offset = "0x4E7D6A0", VA = "0x4E7D6A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public PhysicMaterialCombine frictionCombine
	{
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x4E7D7A0", Offset = "0x4E7D7A0", VA = "0x4E7D7A0")]
		get
		{
			return default(PhysicMaterialCombine);
		}
		[Token(Token = "0x600006E")]
		[Address(RVA = "0x4E7D870", Offset = "0x4E7D870", VA = "0x4E7D870")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public PhysicMaterialCombine bounceCombine
	{
		[Token(Token = "0x600006F")]
		[Address(RVA = "0x4E7D950", Offset = "0x4E7D950", VA = "0x4E7D950")]
		get
		{
			return default(PhysicMaterialCombine);
		}
		[Token(Token = "0x6000070")]
		[Address(RVA = "0x4E7DA20", Offset = "0x4E7DA20", VA = "0x4E7DA20")]
		set
		{
		}
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x4E7D160", Offset = "0x4E7D160", VA = "0x4E7D160")]
	public PhysicMaterial()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000066")]
	[Address(RVA = "0x4E7D1F0", Offset = "0x4E7D1F0", VA = "0x4E7D1F0")]
	private static extern void Internal_CreateDynamicsMaterial([UnityEngine.Writable] PhysicMaterial mat, string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000071")]
	[Address(RVA = "0x4E7D2D0", Offset = "0x4E7D2D0", VA = "0x4E7D2D0")]
	private static extern float get_bounciness_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000072")]
	[Address(RVA = "0x4E7D3B0", Offset = "0x4E7D3B0", VA = "0x4E7D3B0")]
	private static extern void set_bounciness_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000073")]
	[Address(RVA = "0x4E7D4A0", Offset = "0x4E7D4A0", VA = "0x4E7D4A0")]
	private static extern float get_dynamicFriction_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000074")]
	[Address(RVA = "0x4E7D580", Offset = "0x4E7D580", VA = "0x4E7D580")]
	private static extern void set_dynamicFriction_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000075")]
	[Address(RVA = "0x4E7D670", Offset = "0x4E7D670", VA = "0x4E7D670")]
	private static extern float get_staticFriction_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000076")]
	[Address(RVA = "0x4E7D750", Offset = "0x4E7D750", VA = "0x4E7D750")]
	private static extern void set_staticFriction_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000077")]
	[Address(RVA = "0x4E7D840", Offset = "0x4E7D840", VA = "0x4E7D840")]
	private static extern PhysicMaterialCombine get_frictionCombine_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000078")]
	[Address(RVA = "0x4E7D910", Offset = "0x4E7D910", VA = "0x4E7D910")]
	private static extern void set_frictionCombine_Injected(IntPtr _unity_self, PhysicMaterialCombine value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000079")]
	[Address(RVA = "0x4E7D9F0", Offset = "0x4E7D9F0", VA = "0x4E7D9F0")]
	private static extern PhysicMaterialCombine get_bounceCombine_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007A")]
	[Address(RVA = "0x4E7DAC0", Offset = "0x4E7DAC0", VA = "0x4E7DAC0")]
	private static extern void set_bounceCombine_Injected(IntPtr _unity_self, PhysicMaterialCombine value);
}
