// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Collider
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

[Token(Token = "0x200000B")]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/Collider.h")]
public class Collider : Component
{
	[Token(Token = "0x17000013")]
	public bool enabled
	{
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x2FDD030", Offset = "0x2FDB630", VA = "0x182FDD030")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x2FDD6E0", Offset = "0x2FDBCE0", VA = "0x182FDD6E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public Rigidbody attachedRigidbody
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x2FDCDA0", Offset = "0x2FDB3A0", VA = "0x182FDCDA0")]
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
		[Address(RVA = "0x2FDD2B0", Offset = "0x2FDB8B0", VA = "0x182FDD2B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x2FDD960", Offset = "0x2FDBF60", VA = "0x182FDD960")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public float contactOffset
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x2FDCF70", Offset = "0x2FDB570", VA = "0x182FDCF70")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x2FDD600", Offset = "0x2FDBC00", VA = "0x182FDD600")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public Bounds bounds
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x2FDCE90", Offset = "0x2FDB490", VA = "0x182FDCE90")]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x17000018")]
	public bool providesContacts
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x2FDD450", Offset = "0x2FDBA50", VA = "0x182FDD450")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x2FDDB50", Offset = "0x2FDC150", VA = "0x182FDDB50")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public LayerMask excludeLayers
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x2FDD100", Offset = "0x2FDB700", VA = "0x182FDD100")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x2FDD7C0", Offset = "0x2FDBDC0", VA = "0x182FDD7C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public LayerMask includeLayers
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x2FDD1E0", Offset = "0x2FDB7E0", VA = "0x182FDD1E0")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x2FDD890", Offset = "0x2FDBE90", VA = "0x182FDD890")]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	[UnityEngine.Bindings.NativeMethod("Material")]
	public PhysicsMaterial sharedMaterial
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x2FDD510", Offset = "0x2FDBB10", VA = "0x182FDD510")]
		get
		{
			return null;
		}
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x2FDDC30", Offset = "0x2FDC230", VA = "0x182FDDC30")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public PhysicsMaterial material
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x2FDD370", Offset = "0x2FDB970", VA = "0x182FDD370")]
		[UnityEngine.Bindings.NativeMethod("GetClonedMaterial")]
		get
		{
			return null;
		}
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x2FDDA40", Offset = "0x2FDC040", VA = "0x182FDDA40")]
		[UnityEngine.Bindings.NativeMethod("SetMaterial")]
		set
		{
		}
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x2FDC980", Offset = "0x2FDAF80", VA = "0x182FDC980")]
	public Vector3 ClosestPoint(Vector3 position)
	{
		return default(Vector3);
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x2FDCB90", Offset = "0x2FDB190", VA = "0x182FDCB90")]
	private RaycastHit Raycast(Ray ray, float maxDistance, ref bool hasHit)
	{
		return default(RaycastHit);
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x2FDCC50", Offset = "0x2FDB250", VA = "0x182FDCC50")]
	public bool Raycast(Ray ray, out RaycastHit hitInfo, float maxDistance)
	{
		return default(bool);
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x2FDCA80", Offset = "0x2FDB080", VA = "0x182FDCA80")]
	[UnityEngine.Bindings.NativeName("ClosestPointOnBounds")]
	private void Internal_ClosestPointOnBounds(Vector3 point, ref Vector3 outPos, ref float distance)
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x2FDC810", Offset = "0x2FDAE10", VA = "0x182FDC810")]
	public Vector3 ClosestPointOnBounds(Vector3 position)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public Collider()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000044")]
	[Address(RVA = "0x2FDCFF0", Offset = "0x2FDB5F0", VA = "0x182FDCFF0")]
	private static extern bool get_enabled_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x2FDD690", Offset = "0x2FDBC90", VA = "0x182FDD690")]
	private static extern void set_enabled_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000046")]
	[Address(RVA = "0x2FDCD60", Offset = "0x2FDB360", VA = "0x182FDCD60")]
	private static extern IntPtr get_attachedRigidbody_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000047")]
	[Address(RVA = "0x2FDD270", Offset = "0x2FDB870", VA = "0x182FDD270")]
	private static extern bool get_isTrigger_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000048")]
	[Address(RVA = "0x2FDD910", Offset = "0x2FDBF10", VA = "0x182FDD910")]
	private static extern void set_isTrigger_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000049")]
	[Address(RVA = "0x2FDCF30", Offset = "0x2FDB530", VA = "0x182FDCF30")]
	private static extern float get_contactOffset_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004A")]
	[Address(RVA = "0x2FDD5B0", Offset = "0x2FDBBB0", VA = "0x182FDD5B0")]
	private static extern void set_contactOffset_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004B")]
	[Address(RVA = "0x2FDC920", Offset = "0x2FDAF20", VA = "0x182FDC920")]
	private static extern void ClosestPoint_Injected(IntPtr _unity_self, [In] ref Vector3 position, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004C")]
	[Address(RVA = "0x2FDCE40", Offset = "0x2FDB440", VA = "0x182FDCE40")]
	private static extern void get_bounds_Injected(IntPtr _unity_self, out Bounds ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004D")]
	[Address(RVA = "0x2FDD410", Offset = "0x2FDBA10", VA = "0x182FDD410")]
	private static extern bool get_providesContacts_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004E")]
	[Address(RVA = "0x2FDDB00", Offset = "0x2FDC100", VA = "0x182FDDB00")]
	private static extern void set_providesContacts_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004F")]
	[Address(RVA = "0x2FDD0B0", Offset = "0x2FDB6B0", VA = "0x182FDD0B0")]
	private static extern void get_excludeLayers_Injected(IntPtr _unity_self, out LayerMask ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000050")]
	[Address(RVA = "0x2FDD770", Offset = "0x2FDBD70", VA = "0x182FDD770")]
	private static extern void set_excludeLayers_Injected(IntPtr _unity_self, [In] ref LayerMask value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000051")]
	[Address(RVA = "0x2FDD190", Offset = "0x2FDB790", VA = "0x182FDD190")]
	private static extern void get_includeLayers_Injected(IntPtr _unity_self, out LayerMask ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000052")]
	[Address(RVA = "0x2FDD840", Offset = "0x2FDBE40", VA = "0x182FDD840")]
	private static extern void set_includeLayers_Injected(IntPtr _unity_self, [In] ref LayerMask value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000053")]
	[Address(RVA = "0x2FDD4D0", Offset = "0x2FDBAD0", VA = "0x182FDD4D0")]
	private static extern IntPtr get_sharedMaterial_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000054")]
	[Address(RVA = "0x2FDDBE0", Offset = "0x2FDC1E0", VA = "0x182FDDBE0")]
	private static extern void set_sharedMaterial_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000055")]
	[Address(RVA = "0x2FDD330", Offset = "0x2FDB930", VA = "0x182FDD330")]
	private static extern IntPtr get_material_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000056")]
	[Address(RVA = "0x2FDD9F0", Offset = "0x2FDBFF0", VA = "0x182FDD9F0")]
	private static extern void set_material_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x2FDCB20", Offset = "0x2FDB120", VA = "0x182FDCB20")]
	private static extern void Raycast_Injected(IntPtr _unity_self, [In] ref Ray ray, float maxDistance, ref bool hasHit, out RaycastHit ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000058")]
	[Address(RVA = "0x2FDCA30", Offset = "0x2FDB030", VA = "0x182FDCA30")]
	private static extern void Internal_ClosestPointOnBounds_Injected(IntPtr _unity_self, [In] ref Vector3 point, ref Vector3 outPos, ref float distance);
}
