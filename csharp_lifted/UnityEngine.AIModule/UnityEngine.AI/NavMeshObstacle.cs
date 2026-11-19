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
[HelpURL("https://docs.unity3d.com/Packages/com.unity.ai.navigation@2.0/manual/NavMeshObstacle.html")]
[MovedFrom("UnityEngine")]
public sealed class NavMeshObstacle : Behaviour
{
	[Token(Token = "0x17000013")]
	public float height
	{
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x6894C70", Offset = "0x6893C70", VA = "0x6894C70")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x6894D20", Offset = "0x6893D20", VA = "0x6894D20")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public float radius
	{
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x6894E00", Offset = "0x6893E00", VA = "0x6894E00")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x6894EB0", Offset = "0x6893EB0", VA = "0x6894EB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public bool carving
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x6894F90", Offset = "0x6893F90", VA = "0x6894F90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x6895040", Offset = "0x6894040", VA = "0x6895040")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public bool carveOnlyStationary
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x6895100", Offset = "0x6894100", VA = "0x6895100")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x68951B0", Offset = "0x68941B0", VA = "0x68951B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public NavMeshObstacleShape shape
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x6895270", Offset = "0x6894270", VA = "0x6895270")]
		get
		{
			return default(NavMeshObstacleShape);
		}
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x6895320", Offset = "0x6894320", VA = "0x6895320")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public Vector3 center
	{
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x68953E0", Offset = "0x68943E0", VA = "0x68953E0")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x68954C0", Offset = "0x68944C0", VA = "0x68954C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public Vector3 size
	{
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x6895590", Offset = "0x6894590", VA = "0x6895590")]
		[UnityEngine.Bindings.FreeFunction("NavMeshObstacleScriptBindings::GetSize", HasExplicitThis = true)]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x6895670", Offset = "0x6894670", VA = "0x6895670")]
		[UnityEngine.Bindings.FreeFunction("NavMeshObstacleScriptBindings::SetSize", HasExplicitThis = true)]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000041")]
	[Address(RVA = "0x6894CF0", Offset = "0x6893CF0", VA = "0x6894CF0")]
	private static extern float get_height_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000042")]
	[Address(RVA = "0x6894DB0", Offset = "0x6893DB0", VA = "0x6894DB0")]
	private static extern void set_height_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000043")]
	[Address(RVA = "0x6894E80", Offset = "0x6893E80", VA = "0x6894E80")]
	private static extern float get_radius_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000044")]
	[Address(RVA = "0x6894F40", Offset = "0x6893F40", VA = "0x6894F40")]
	private static extern void set_radius_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x6895010", Offset = "0x6894010", VA = "0x6895010")]
	private static extern bool get_carving_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000046")]
	[Address(RVA = "0x68950C0", Offset = "0x68940C0", VA = "0x68950C0")]
	private static extern void set_carving_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000047")]
	[Address(RVA = "0x6895180", Offset = "0x6894180", VA = "0x6895180")]
	private static extern bool get_carveOnlyStationary_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000048")]
	[Address(RVA = "0x6895230", Offset = "0x6894230", VA = "0x6895230")]
	private static extern void set_carveOnlyStationary_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000049")]
	[Address(RVA = "0x68952F0", Offset = "0x68942F0", VA = "0x68952F0")]
	private static extern NavMeshObstacleShape get_shape_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004A")]
	[Address(RVA = "0x68953A0", Offset = "0x68943A0", VA = "0x68953A0")]
	private static extern void set_shape_Injected(IntPtr _unity_self, NavMeshObstacleShape value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004B")]
	[Address(RVA = "0x6895480", Offset = "0x6894480", VA = "0x6895480")]
	private static extern void get_center_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004C")]
	[Address(RVA = "0x6895550", Offset = "0x6894550", VA = "0x6895550")]
	private static extern void set_center_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004D")]
	[Address(RVA = "0x6895630", Offset = "0x6894630", VA = "0x6895630")]
	private static extern void get_size_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004E")]
	[Address(RVA = "0x6895700", Offset = "0x6894700", VA = "0x6895700")]
	private static extern void set_size_Injected(IntPtr _unity_self, [In] ref Vector3 value);
}
