// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Collider
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

[Token(Token = "0x200000B")]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/Collider.h")]
public class Collider : Component
{
	[Token(Token = "0x17000013")]
	public bool enabled
	{
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x69D7A30", Offset = "0x69D6A30", VA = "0x69D7A30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x69D7AE0", Offset = "0x69D6AE0", VA = "0x69D7AE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public Rigidbody attachedRigidbody
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x69D7BA0", Offset = "0x69D6BA0", VA = "0x69D7BA0")]
		[UnityEngine.Bindings.NativeMethod("GetRigidbody")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000015")]
	public bool isTrigger
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x69D7C70", Offset = "0x69D6C70", VA = "0x69D7C70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x69D7D20", Offset = "0x69D6D20", VA = "0x69D7D20")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public float contactOffset
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x69D7DE0", Offset = "0x69D6DE0", VA = "0x69D7DE0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x69D7E90", Offset = "0x69D6E90", VA = "0x69D7E90")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public Bounds bounds
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x69D8060", Offset = "0x69D7060", VA = "0x69D8060")]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x17000018")]
	public bool providesContacts
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x69D8150", Offset = "0x69D7150", VA = "0x69D8150")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x69D8200", Offset = "0x69D7200", VA = "0x69D8200")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public LayerMask excludeLayers
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x69D82C0", Offset = "0x69D72C0", VA = "0x69D82C0")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x69D8390", Offset = "0x69D7390", VA = "0x69D8390")]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public LayerMask includeLayers
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x69D8450", Offset = "0x69D7450", VA = "0x69D8450")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x69D8520", Offset = "0x69D7520", VA = "0x69D8520")]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	[UnityEngine.Bindings.NativeMethod("Material")]
	public PhysicsMaterial sharedMaterial
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x69D85E0", Offset = "0x69D75E0", VA = "0x69D85E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x69D86B0", Offset = "0x69D76B0", VA = "0x69D86B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public PhysicsMaterial material
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x69D87C0", Offset = "0x69D77C0", VA = "0x69D87C0")]
		[UnityEngine.Bindings.NativeMethod("GetClonedMaterial")]
		get
		{
			return null;
		}
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x69D8890", Offset = "0x69D7890", VA = "0x69D8890")]
		[UnityEngine.Bindings.NativeMethod("SetMaterial")]
		set
		{
		}
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x69D7F70", Offset = "0x69D6F70", VA = "0x69D7F70")]
	public Vector3 ClosestPoint(Vector3 position)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x69D89A0", Offset = "0x69D79A0", VA = "0x69D89A0")]
	private RaycastHit Raycast(Ray ray, float maxDistance, ref bool hasHit)
	{
		return default(RaycastHit);
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x69D8AF0", Offset = "0x69D7AF0", VA = "0x69D8AF0")]
	public bool Raycast(Ray ray, out RaycastHit hitInfo, float maxDistance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x69D8C10", Offset = "0x69D7C10", VA = "0x69D8C10")]
	[UnityEngine.Bindings.NativeName("ClosestPointOnBounds")]
	private void Internal_ClosestPointOnBounds(Vector3 point, ref Vector3 outPos, ref float distance)
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x69D8D10", Offset = "0x69D7D10", VA = "0x69D8D10")]
	public Vector3 ClosestPointOnBounds(Vector3 position)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x69D73D0", Offset = "0x69D63D0", VA = "0x69D73D0")]
	public Collider()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000044")]
	[Address(RVA = "0x69D7AB0", Offset = "0x69D6AB0", VA = "0x69D7AB0")]
	private static extern bool get_enabled_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x69D7B60", Offset = "0x69D6B60", VA = "0x69D7B60")]
	private static extern void set_enabled_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000046")]
	[Address(RVA = "0x69D7C40", Offset = "0x69D6C40", VA = "0x69D7C40")]
	private static extern IntPtr get_attachedRigidbody_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000047")]
	[Address(RVA = "0x69D7CF0", Offset = "0x69D6CF0", VA = "0x69D7CF0")]
	private static extern bool get_isTrigger_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000048")]
	[Address(RVA = "0x69D7DA0", Offset = "0x69D6DA0", VA = "0x69D7DA0")]
	private static extern void set_isTrigger_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000049")]
	[Address(RVA = "0x69D7E60", Offset = "0x69D6E60", VA = "0x69D7E60")]
	private static extern float get_contactOffset_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004A")]
	[Address(RVA = "0x69D7F20", Offset = "0x69D6F20", VA = "0x69D7F20")]
	private static extern void set_contactOffset_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004B")]
	[Address(RVA = "0x69D8020", Offset = "0x69D7020", VA = "0x69D8020")]
	private static extern void ClosestPoint_Injected(IntPtr _unity_self, [In] ref Vector3 position, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004C")]
	[Address(RVA = "0x69D8110", Offset = "0x69D7110", VA = "0x69D8110")]
	private static extern void get_bounds_Injected(IntPtr _unity_self, out Bounds ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004D")]
	[Address(RVA = "0x69D81D0", Offset = "0x69D71D0", VA = "0x69D81D0")]
	private static extern bool get_providesContacts_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004E")]
	[Address(RVA = "0x69D8280", Offset = "0x69D7280", VA = "0x69D8280")]
	private static extern void set_providesContacts_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004F")]
	[Address(RVA = "0x69D8350", Offset = "0x69D7350", VA = "0x69D8350")]
	private static extern void get_excludeLayers_Injected(IntPtr _unity_self, out LayerMask ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000050")]
	[Address(RVA = "0x69D8410", Offset = "0x69D7410", VA = "0x69D8410")]
	private static extern void set_excludeLayers_Injected(IntPtr _unity_self, [In] ref LayerMask value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000051")]
	[Address(RVA = "0x69D84E0", Offset = "0x69D74E0", VA = "0x69D84E0")]
	private static extern void get_includeLayers_Injected(IntPtr _unity_self, out LayerMask ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000052")]
	[Address(RVA = "0x69D85A0", Offset = "0x69D75A0", VA = "0x69D85A0")]
	private static extern void set_includeLayers_Injected(IntPtr _unity_self, [In] ref LayerMask value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000053")]
	[Address(RVA = "0x69D8680", Offset = "0x69D7680", VA = "0x69D8680")]
	private static extern IntPtr get_sharedMaterial_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000054")]
	[Address(RVA = "0x69D8780", Offset = "0x69D7780", VA = "0x69D8780")]
	private static extern void set_sharedMaterial_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000055")]
	[Address(RVA = "0x69D8860", Offset = "0x69D7860", VA = "0x69D8860")]
	private static extern IntPtr get_material_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000056")]
	[Address(RVA = "0x69D8960", Offset = "0x69D7960", VA = "0x69D8960")]
	private static extern void set_material_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x69D8A90", Offset = "0x69D7A90", VA = "0x69D8A90")]
	private static extern void Raycast_Injected(IntPtr _unity_self, [In] ref Ray ray, float maxDistance, ref bool hasHit, out RaycastHit ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000058")]
	[Address(RVA = "0x69D8CC0", Offset = "0x69D7CC0", VA = "0x69D8CC0")]
	private static extern void Internal_ClosestPointOnBounds_Injected(IntPtr _unity_self, [In] ref Vector3 point, ref Vector3 outPos, ref float distance);
}
