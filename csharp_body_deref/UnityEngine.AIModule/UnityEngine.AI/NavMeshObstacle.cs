// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AI.NavMeshObstacle
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
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.AI;

[Token(Token = "0x2000006")]
[UnityEngine.Bindings.NativeHeader("Modules/AI/Components/NavMeshObstacle.bindings.h")]
[MovedFrom("UnityEngine")]
public sealed class NavMeshObstacle : Behaviour
{
	[Token(Token = "0x17000012")]
	public float height
	{
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x4D90D80", Offset = "0x4D90D80", VA = "0x4D90D80")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x4D90E50", Offset = "0x4D90E50", VA = "0x4D90E50")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public float radius
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x4D90F50", Offset = "0x4D90F50", VA = "0x4D90F50")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x4D91020", Offset = "0x4D91020", VA = "0x4D91020")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public bool carving
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x4D91120", Offset = "0x4D91120", VA = "0x4D91120")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x4D911F0", Offset = "0x4D911F0", VA = "0x4D911F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public bool carveOnlyStationary
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x4D912D0", Offset = "0x4D912D0", VA = "0x4D912D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x4D913A0", Offset = "0x4D913A0", VA = "0x4D913A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public NavMeshObstacleShape shape
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x4D91480", Offset = "0x4D91480", VA = "0x4D91480")]
		get
		{
			return default(NavMeshObstacleShape);
		}
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x4D91550", Offset = "0x4D91550", VA = "0x4D91550")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public Vector3 center
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x4D91630", Offset = "0x4D91630", VA = "0x4D91630")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x4D91730", Offset = "0x4D91730", VA = "0x4D91730")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public Vector3 size
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x4D91820", Offset = "0x4D91820", VA = "0x4D91820")]
		[UnityEngine.Bindings.FreeFunction("NavMeshObstacleScriptBindings::GetSize", HasExplicitThis = true)]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x4D91920", Offset = "0x4D91920", VA = "0x4D91920")]
		[UnityEngine.Bindings.FreeFunction("NavMeshObstacleScriptBindings::SetSize", HasExplicitThis = true)]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x4D90E20", Offset = "0x4D90E20", VA = "0x4D90E20")]
	private static extern float get_height_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x4D90F00", Offset = "0x4D90F00", VA = "0x4D90F00")]
	private static extern void set_height_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003C")]
	[Address(RVA = "0x4D90FF0", Offset = "0x4D90FF0", VA = "0x4D90FF0")]
	private static extern float get_radius_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003D")]
	[Address(RVA = "0x4D910D0", Offset = "0x4D910D0", VA = "0x4D910D0")]
	private static extern void set_radius_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4D911C0", Offset = "0x4D911C0", VA = "0x4D911C0")]
	private static extern bool get_carving_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003F")]
	[Address(RVA = "0x4D91290", Offset = "0x4D91290", VA = "0x4D91290")]
	private static extern void set_carving_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000040")]
	[Address(RVA = "0x4D91370", Offset = "0x4D91370", VA = "0x4D91370")]
	private static extern bool get_carveOnlyStationary_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x4D91440", Offset = "0x4D91440", VA = "0x4D91440")]
	private static extern void set_carveOnlyStationary_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4D91520", Offset = "0x4D91520", VA = "0x4D91520")]
	private static extern NavMeshObstacleShape get_shape_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000043")]
	[Address(RVA = "0x4D915F0", Offset = "0x4D915F0", VA = "0x4D915F0")]
	private static extern void set_shape_Injected(IntPtr _unity_self, NavMeshObstacleShape value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000044")]
	[Address(RVA = "0x4D916F0", Offset = "0x4D916F0", VA = "0x4D916F0")]
	private static extern void get_center_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x4D917E0", Offset = "0x4D917E0", VA = "0x4D917E0")]
	private static extern void set_center_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000046")]
	[Address(RVA = "0x4D918E0", Offset = "0x4D918E0", VA = "0x4D918E0")]
	private static extern void get_size_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000047")]
	[Address(RVA = "0x4D919D0", Offset = "0x4D919D0", VA = "0x4D919D0")]
	private static extern void set_size_Injected(IntPtr _unity_self, [In] ref Vector3 value);
}
