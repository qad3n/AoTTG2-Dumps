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
		[Address(RVA = "0x4A69560", Offset = "0x4A69560", VA = "0x4A69560")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x4A69630", Offset = "0x4A69630", VA = "0x4A69630")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public float radius
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x4A69730", Offset = "0x4A69730", VA = "0x4A69730")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x4A69800", Offset = "0x4A69800", VA = "0x4A69800")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public bool carving
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x4A69900", Offset = "0x4A69900", VA = "0x4A69900")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x4A699D0", Offset = "0x4A699D0", VA = "0x4A699D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public bool carveOnlyStationary
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x4A69AB0", Offset = "0x4A69AB0", VA = "0x4A69AB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x4A69B80", Offset = "0x4A69B80", VA = "0x4A69B80")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public NavMeshObstacleShape shape
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x4A69C60", Offset = "0x4A69C60", VA = "0x4A69C60")]
		get
		{
			return default(NavMeshObstacleShape);
		}
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x4A69D30", Offset = "0x4A69D30", VA = "0x4A69D30")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public Vector3 center
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x4A69E10", Offset = "0x4A69E10", VA = "0x4A69E10")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x4A69F10", Offset = "0x4A69F10", VA = "0x4A69F10")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public Vector3 size
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x4A6A000", Offset = "0x4A6A000", VA = "0x4A6A000")]
		[UnityEngine.Bindings.FreeFunction("NavMeshObstacleScriptBindings::GetSize", HasExplicitThis = true)]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x4A6A100", Offset = "0x4A6A100", VA = "0x4A6A100")]
		[UnityEngine.Bindings.FreeFunction("NavMeshObstacleScriptBindings::SetSize", HasExplicitThis = true)]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x4A69600", Offset = "0x4A69600", VA = "0x4A69600")]
	private static extern float get_height_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003B")]
	[Address(RVA = "0x4A696E0", Offset = "0x4A696E0", VA = "0x4A696E0")]
	private static extern void set_height_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003C")]
	[Address(RVA = "0x4A697D0", Offset = "0x4A697D0", VA = "0x4A697D0")]
	private static extern float get_radius_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003D")]
	[Address(RVA = "0x4A698B0", Offset = "0x4A698B0", VA = "0x4A698B0")]
	private static extern void set_radius_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4A699A0", Offset = "0x4A699A0", VA = "0x4A699A0")]
	private static extern bool get_carving_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003F")]
	[Address(RVA = "0x4A69A70", Offset = "0x4A69A70", VA = "0x4A69A70")]
	private static extern void set_carving_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000040")]
	[Address(RVA = "0x4A69B50", Offset = "0x4A69B50", VA = "0x4A69B50")]
	private static extern bool get_carveOnlyStationary_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x4A69C20", Offset = "0x4A69C20", VA = "0x4A69C20")]
	private static extern void set_carveOnlyStationary_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4A69D00", Offset = "0x4A69D00", VA = "0x4A69D00")]
	private static extern NavMeshObstacleShape get_shape_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000043")]
	[Address(RVA = "0x4A69DD0", Offset = "0x4A69DD0", VA = "0x4A69DD0")]
	private static extern void set_shape_Injected(IntPtr _unity_self, NavMeshObstacleShape value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000044")]
	[Address(RVA = "0x4A69ED0", Offset = "0x4A69ED0", VA = "0x4A69ED0")]
	private static extern void get_center_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x4A69FC0", Offset = "0x4A69FC0", VA = "0x4A69FC0")]
	private static extern void set_center_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000046")]
	[Address(RVA = "0x4A6A0C0", Offset = "0x4A6A0C0", VA = "0x4A6A0C0")]
	private static extern void get_size_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000047")]
	[Address(RVA = "0x4A6A1B0", Offset = "0x4A6A1B0", VA = "0x4A6A1B0")]
	private static extern void set_size_Injected(IntPtr _unity_self, [In] ref Vector3 value);
}
