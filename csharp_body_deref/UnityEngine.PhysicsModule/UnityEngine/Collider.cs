using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000011")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/Collider.h")]
public class Collider : Component
{
	[Token(Token = "0x17000024")]
	public bool enabled
	{
		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x4B587D0", Offset = "0x4B587D0", VA = "0x4B587D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x4B588A0", Offset = "0x4B588A0", VA = "0x4B588A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public Rigidbody attachedRigidbody
	{
		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x4B58980", Offset = "0x4B58980", VA = "0x4B58980")]
		[UnityEngine.Bindings.NativeMethod("GetRigidbody")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000026")]
	public bool isTrigger
	{
		[Token(Token = "0x60000CE")]
		[Address(RVA = "0x4B58A50", Offset = "0x4B58A50", VA = "0x4B58A50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000CF")]
		[Address(RVA = "0x4B58B20", Offset = "0x4B58B20", VA = "0x4B58B20")]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public float contactOffset
	{
		[Token(Token = "0x60000D0")]
		[Address(RVA = "0x4B58C00", Offset = "0x4B58C00", VA = "0x4B58C00")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000D1")]
		[Address(RVA = "0x4B58CD0", Offset = "0x4B58CD0", VA = "0x4B58CD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public Bounds bounds
	{
		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x4B58EE0", Offset = "0x4B58EE0", VA = "0x4B58EE0")]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x17000029")]
	public bool providesContacts
	{
		[Token(Token = "0x60000D4")]
		[Address(RVA = "0x4B58FF0", Offset = "0x4B58FF0", VA = "0x4B58FF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000D5")]
		[Address(RVA = "0x4B590C0", Offset = "0x4B590C0", VA = "0x4B590C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public LayerMask excludeLayers
	{
		[Token(Token = "0x60000D6")]
		[Address(RVA = "0x4B591A0", Offset = "0x4B591A0", VA = "0x4B591A0")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x60000D7")]
		[Address(RVA = "0x4B59290", Offset = "0x4B59290", VA = "0x4B59290")]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public LayerMask includeLayers
	{
		[Token(Token = "0x60000D8")]
		[Address(RVA = "0x4B59370", Offset = "0x4B59370", VA = "0x4B59370")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x60000D9")]
		[Address(RVA = "0x4B59460", Offset = "0x4B59460", VA = "0x4B59460")]
		set
		{
		}
	}

	[Token(Token = "0x1700002C")]
	[UnityEngine.Bindings.NativeMethod("Material")]
	public PhysicMaterial sharedMaterial
	{
		[Token(Token = "0x60000DA")]
		[Address(RVA = "0x4B59540", Offset = "0x4B59540", VA = "0x4B59540")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002D")]
	public PhysicMaterial material
	{
		[Token(Token = "0x60000DB")]
		[Address(RVA = "0x4B59610", Offset = "0x4B59610", VA = "0x4B59610")]
		[UnityEngine.Bindings.NativeMethod("GetClonedMaterial")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000DC")]
		[Address(RVA = "0x4B596E0", Offset = "0x4B596E0", VA = "0x4B596E0")]
		[UnityEngine.Bindings.NativeMethod("SetMaterial")]
		set
		{
		}
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x4B58DD0", Offset = "0x4B58DD0", VA = "0x4B58DD0")]
	public Vector3 ClosestPoint(Vector3 position)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x4B59820", Offset = "0x4B59820", VA = "0x4B59820")]
	private RaycastHit Raycast(Ray ray, float maxDistance, ref bool hasHit)
	{
		return default(RaycastHit);
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x4B59990", Offset = "0x4B59990", VA = "0x4B59990")]
	public bool Raycast(Ray ray, out RaycastHit hitInfo, float maxDistance)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x4B59AD0", Offset = "0x4B59AD0", VA = "0x4B59AD0")]
	[UnityEngine.Bindings.NativeName("ClosestPointOnBounds")]
	private void Internal_ClosestPointOnBounds(Vector3 point, ref Vector3 outPos, ref float distance)
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x4B59BF0", Offset = "0x4B59BF0", VA = "0x4B59BF0")]
	public Vector3 ClosestPointOnBounds(Vector3 position)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x4B59D20", Offset = "0x4B59D20", VA = "0x4B59D20")]
	public Collider()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x4B58870", Offset = "0x4B58870", VA = "0x4B58870")]
	private static extern bool get_enabled_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x4B58940", Offset = "0x4B58940", VA = "0x4B58940")]
	private static extern void set_enabled_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x4B58A20", Offset = "0x4B58A20", VA = "0x4B58A20")]
	private static extern Rigidbody get_attachedRigidbody_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x4B58AF0", Offset = "0x4B58AF0", VA = "0x4B58AF0")]
	private static extern bool get_isTrigger_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x4B58BC0", Offset = "0x4B58BC0", VA = "0x4B58BC0")]
	private static extern void set_isTrigger_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x4B58CA0", Offset = "0x4B58CA0", VA = "0x4B58CA0")]
	private static extern float get_contactOffset_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x4B58D80", Offset = "0x4B58D80", VA = "0x4B58D80")]
	private static extern void set_contactOffset_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x4B58EA0", Offset = "0x4B58EA0", VA = "0x4B58EA0")]
	private static extern void ClosestPoint_Injected(IntPtr _unity_self, [In] ref Vector3 position, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x4B58FB0", Offset = "0x4B58FB0", VA = "0x4B58FB0")]
	private static extern void get_bounds_Injected(IntPtr _unity_self, out Bounds ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x4B59090", Offset = "0x4B59090", VA = "0x4B59090")]
	private static extern bool get_providesContacts_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x4B59160", Offset = "0x4B59160", VA = "0x4B59160")]
	private static extern void set_providesContacts_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x4B59250", Offset = "0x4B59250", VA = "0x4B59250")]
	private static extern void get_excludeLayers_Injected(IntPtr _unity_self, out LayerMask ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x4B59330", Offset = "0x4B59330", VA = "0x4B59330")]
	private static extern void set_excludeLayers_Injected(IntPtr _unity_self, [In] ref LayerMask value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x4B59420", Offset = "0x4B59420", VA = "0x4B59420")]
	private static extern void get_includeLayers_Injected(IntPtr _unity_self, out LayerMask ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x4B59500", Offset = "0x4B59500", VA = "0x4B59500")]
	private static extern void set_includeLayers_Injected(IntPtr _unity_self, [In] ref LayerMask value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x4B595E0", Offset = "0x4B595E0", VA = "0x4B595E0")]
	private static extern PhysicMaterial get_sharedMaterial_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x4B596B0", Offset = "0x4B596B0", VA = "0x4B596B0")]
	private static extern PhysicMaterial get_material_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x4B597E0", Offset = "0x4B597E0", VA = "0x4B597E0")]
	private static extern void set_material_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x4B59930", Offset = "0x4B59930", VA = "0x4B59930")]
	private static extern void Raycast_Injected(IntPtr _unity_self, [In] ref Ray ray, float maxDistance, ref bool hasHit, out RaycastHit ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x4B59BA0", Offset = "0x4B59BA0", VA = "0x4B59BA0")]
	private static extern void Internal_ClosestPointOnBounds_Injected(IntPtr _unity_self, [In] ref Vector3 point, ref Vector3 outPos, ref float distance);
}
