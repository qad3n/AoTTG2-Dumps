using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.AI;

[Token(Token = "0x2000004")]
[UnityEngine.Bindings.NativeHeader("Modules/AI/NavMesh/NavMesh.bindings.h")]
[MovedFrom("UnityEngine")]
[UnityEngine.Bindings.NativeHeader("Modules/AI/Components/NavMeshAgent.bindings.h")]
public sealed class NavMeshAgent : Behaviour
{
	[Token(Token = "0x17000001")]
	public float stoppingDistance
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x4A685B0", Offset = "0x4A685B0", VA = "0x4A685B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public Vector3 velocity
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x4A686B0", Offset = "0x4A686B0", VA = "0x4A686B0")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000003")]
	[UnityEngine.Bindings.NativeProperty("Position")]
	public Vector3 nextPosition
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x4A687B0", Offset = "0x4A687B0", VA = "0x4A687B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public bool autoBraking
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x4A688A0", Offset = "0x4A688A0", VA = "0x4A688A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public bool autoRepath
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x4A68980", Offset = "0x4A68980", VA = "0x4A68980")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public bool pathPending
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x4A68A60", Offset = "0x4A68A60", VA = "0x4A68A60")]
		[UnityEngine.Bindings.NativeName("PathPending")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000007")]
	public int agentTypeID
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x4A68B30", Offset = "0x4A68B30", VA = "0x4A68B30")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public float speed
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x4A68C10", Offset = "0x4A68C10", VA = "0x4A68C10")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public float angularSpeed
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x4A68D10", Offset = "0x4A68D10", VA = "0x4A68D10")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public float acceleration
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x4A68E10", Offset = "0x4A68E10", VA = "0x4A68E10")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public bool updatePosition
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x4A68F10", Offset = "0x4A68F10", VA = "0x4A68F10")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public bool updateRotation
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x4A68FF0", Offset = "0x4A68FF0", VA = "0x4A68FF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public float radius
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x4A690D0", Offset = "0x4A690D0", VA = "0x4A690D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public float height
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x4A691D0", Offset = "0x4A691D0", VA = "0x4A691D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public ObstacleAvoidanceType obstacleAvoidanceType
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x4A692D0", Offset = "0x4A692D0", VA = "0x4A692D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public int avoidancePriority
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x4A693B0", Offset = "0x4A693B0", VA = "0x4A693B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public bool isOnNavMesh
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x4A69490", Offset = "0x4A69490", VA = "0x4A69490")]
		[UnityEngine.Bindings.NativeName("InCrowdSystem")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x4A684C0", Offset = "0x4A684C0", VA = "0x4A684C0")]
	public bool SetDestination(Vector3 target)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4A68570", Offset = "0x4A68570", VA = "0x4A68570")]
	private static extern bool SetDestination_Injected(IntPtr _unity_self, [In] ref Vector3 target);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4A68660", Offset = "0x4A68660", VA = "0x4A68660")]
	private static extern void set_stoppingDistance_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4A68770", Offset = "0x4A68770", VA = "0x4A68770")]
	private static extern void get_velocity_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4A68860", Offset = "0x4A68860", VA = "0x4A68860")]
	private static extern void set_nextPosition_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4A68940", Offset = "0x4A68940", VA = "0x4A68940")]
	private static extern void set_autoBraking_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4A68A20", Offset = "0x4A68A20", VA = "0x4A68A20")]
	private static extern void set_autoRepath_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4A68B00", Offset = "0x4A68B00", VA = "0x4A68B00")]
	private static extern bool get_pathPending_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4A68BD0", Offset = "0x4A68BD0", VA = "0x4A68BD0")]
	private static extern void set_agentTypeID_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4A68CC0", Offset = "0x4A68CC0", VA = "0x4A68CC0")]
	private static extern void set_speed_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4A68DC0", Offset = "0x4A68DC0", VA = "0x4A68DC0")]
	private static extern void set_angularSpeed_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4A68EC0", Offset = "0x4A68EC0", VA = "0x4A68EC0")]
	private static extern void set_acceleration_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4A68FB0", Offset = "0x4A68FB0", VA = "0x4A68FB0")]
	private static extern void set_updatePosition_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4A69090", Offset = "0x4A69090", VA = "0x4A69090")]
	private static extern void set_updateRotation_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4A69180", Offset = "0x4A69180", VA = "0x4A69180")]
	private static extern void set_radius_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000028")]
	[Address(RVA = "0x4A69280", Offset = "0x4A69280", VA = "0x4A69280")]
	private static extern void set_height_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x4A69370", Offset = "0x4A69370", VA = "0x4A69370")]
	private static extern void set_obstacleAvoidanceType_Injected(IntPtr _unity_self, ObstacleAvoidanceType value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4A69450", Offset = "0x4A69450", VA = "0x4A69450")]
	private static extern void set_avoidancePriority_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x4A69530", Offset = "0x4A69530", VA = "0x4A69530")]
	private static extern bool get_isOnNavMesh_Injected(IntPtr _unity_self);
}
