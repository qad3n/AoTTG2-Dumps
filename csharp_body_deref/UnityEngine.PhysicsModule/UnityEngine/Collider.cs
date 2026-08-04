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
		[Address(RVA = "0x4E80100", Offset = "0x4E80100", VA = "0x4E80100")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x4E801D0", Offset = "0x4E801D0", VA = "0x4E801D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public Rigidbody attachedRigidbody
	{
		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x4E802B0", Offset = "0x4E802B0", VA = "0x4E802B0")]
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
		[Address(RVA = "0x4E80380", Offset = "0x4E80380", VA = "0x4E80380")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000CF")]
		[Address(RVA = "0x4E80450", Offset = "0x4E80450", VA = "0x4E80450")]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public float contactOffset
	{
		[Token(Token = "0x60000D0")]
		[Address(RVA = "0x4E80530", Offset = "0x4E80530", VA = "0x4E80530")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000D1")]
		[Address(RVA = "0x4E80600", Offset = "0x4E80600", VA = "0x4E80600")]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public Bounds bounds
	{
		[Token(Token = "0x60000D3")]
		[Address(RVA = "0x4E80810", Offset = "0x4E80810", VA = "0x4E80810")]
		get
		{
			return default(Bounds);
		}
	}

	[Token(Token = "0x17000029")]
	public bool providesContacts
	{
		[Token(Token = "0x60000D4")]
		[Address(RVA = "0x4E80920", Offset = "0x4E80920", VA = "0x4E80920")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000D5")]
		[Address(RVA = "0x4E809F0", Offset = "0x4E809F0", VA = "0x4E809F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public LayerMask excludeLayers
	{
		[Token(Token = "0x60000D6")]
		[Address(RVA = "0x4E80AD0", Offset = "0x4E80AD0", VA = "0x4E80AD0")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x60000D7")]
		[Address(RVA = "0x4E80BC0", Offset = "0x4E80BC0", VA = "0x4E80BC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public LayerMask includeLayers
	{
		[Token(Token = "0x60000D8")]
		[Address(RVA = "0x4E80CA0", Offset = "0x4E80CA0", VA = "0x4E80CA0")]
		get
		{
			return default(LayerMask);
		}
		[Token(Token = "0x60000D9")]
		[Address(RVA = "0x4E80D90", Offset = "0x4E80D90", VA = "0x4E80D90")]
		set
		{
		}
	}

	[Token(Token = "0x1700002C")]
	[UnityEngine.Bindings.NativeMethod("Material")]
	public PhysicMaterial sharedMaterial
	{
		[Token(Token = "0x60000DA")]
		[Address(RVA = "0x4E80E70", Offset = "0x4E80E70", VA = "0x4E80E70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002D")]
	public PhysicMaterial material
	{
		[Token(Token = "0x60000DB")]
		[Address(RVA = "0x4E80F40", Offset = "0x4E80F40", VA = "0x4E80F40")]
		[UnityEngine.Bindings.NativeMethod("GetClonedMaterial")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000DC")]
		[Address(RVA = "0x4E81010", Offset = "0x4E81010", VA = "0x4E81010")]
		[UnityEngine.Bindings.NativeMethod("SetMaterial")]
		set
		{
		}
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x4E80700", Offset = "0x4E80700", VA = "0x4E80700")]
	public Vector3 ClosestPoint(Vector3 position)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x4E81150", Offset = "0x4E81150", VA = "0x4E81150")]
	private RaycastHit Raycast(Ray ray, float maxDistance, ref bool hasHit)
	{
		return default(RaycastHit);
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x4E812C0", Offset = "0x4E812C0", VA = "0x4E812C0")]
	public bool Raycast(Ray ray, out RaycastHit hitInfo, float maxDistance)
	{
		return default(bool);
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x4E81400", Offset = "0x4E81400", VA = "0x4E81400")]
	[UnityEngine.Bindings.NativeName("ClosestPointOnBounds")]
	private void Internal_ClosestPointOnBounds(Vector3 point, ref Vector3 outPos, ref float distance)
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x4E81520", Offset = "0x4E81520", VA = "0x4E81520")]
	public Vector3 ClosestPointOnBounds(Vector3 position)
	{
		return default(Vector3);
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x4E81650", Offset = "0x4E81650", VA = "0x4E81650")]
	public Collider()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x4E801A0", Offset = "0x4E801A0", VA = "0x4E801A0")]
	private static extern bool get_enabled_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x4E80270", Offset = "0x4E80270", VA = "0x4E80270")]
	private static extern void set_enabled_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x4E80350", Offset = "0x4E80350", VA = "0x4E80350")]
	private static extern Rigidbody get_attachedRigidbody_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x4E80420", Offset = "0x4E80420", VA = "0x4E80420")]
	private static extern bool get_isTrigger_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x4E804F0", Offset = "0x4E804F0", VA = "0x4E804F0")]
	private static extern void set_isTrigger_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x4E805D0", Offset = "0x4E805D0", VA = "0x4E805D0")]
	private static extern float get_contactOffset_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x4E806B0", Offset = "0x4E806B0", VA = "0x4E806B0")]
	private static extern void set_contactOffset_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x4E807D0", Offset = "0x4E807D0", VA = "0x4E807D0")]
	private static extern void ClosestPoint_Injected(IntPtr _unity_self, [In] ref Vector3 position, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x4E808E0", Offset = "0x4E808E0", VA = "0x4E808E0")]
	private static extern void get_bounds_Injected(IntPtr _unity_self, out Bounds ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x4E809C0", Offset = "0x4E809C0", VA = "0x4E809C0")]
	private static extern bool get_providesContacts_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x4E80A90", Offset = "0x4E80A90", VA = "0x4E80A90")]
	private static extern void set_providesContacts_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x4E80B80", Offset = "0x4E80B80", VA = "0x4E80B80")]
	private static extern void get_excludeLayers_Injected(IntPtr _unity_self, out LayerMask ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x4E80C60", Offset = "0x4E80C60", VA = "0x4E80C60")]
	private static extern void set_excludeLayers_Injected(IntPtr _unity_self, [In] ref LayerMask value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x4E80D50", Offset = "0x4E80D50", VA = "0x4E80D50")]
	private static extern void get_includeLayers_Injected(IntPtr _unity_self, out LayerMask ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x4E80E30", Offset = "0x4E80E30", VA = "0x4E80E30")]
	private static extern void set_includeLayers_Injected(IntPtr _unity_self, [In] ref LayerMask value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x4E80F10", Offset = "0x4E80F10", VA = "0x4E80F10")]
	private static extern PhysicMaterial get_sharedMaterial_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x4E80FE0", Offset = "0x4E80FE0", VA = "0x4E80FE0")]
	private static extern PhysicMaterial get_material_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x4E81110", Offset = "0x4E81110", VA = "0x4E81110")]
	private static extern void set_material_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x4E81260", Offset = "0x4E81260", VA = "0x4E81260")]
	private static extern void Raycast_Injected(IntPtr _unity_self, [In] ref Ray ray, float maxDistance, ref bool hasHit, out RaycastHit ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x4E814D0", Offset = "0x4E814D0", VA = "0x4E814D0")]
	private static extern void Internal_ClosestPointOnBounds_Injected(IntPtr _unity_self, [In] ref Vector3 point, ref Vector3 outPos, ref float distance);
}
