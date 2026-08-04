// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AI.NavMeshAgent
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
		[Address(RVA = "0x4D8FDD0", Offset = "0x4D8FDD0", VA = "0x4D8FDD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public Vector3 velocity
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x4D8FED0", Offset = "0x4D8FED0", VA = "0x4D8FED0")]
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
		[Address(RVA = "0x4D8FFD0", Offset = "0x4D8FFD0", VA = "0x4D8FFD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public bool autoBraking
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x4D900C0", Offset = "0x4D900C0", VA = "0x4D900C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public bool autoRepath
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x4D901A0", Offset = "0x4D901A0", VA = "0x4D901A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public bool pathPending
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x4D90280", Offset = "0x4D90280", VA = "0x4D90280")]
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
		[Address(RVA = "0x4D90350", Offset = "0x4D90350", VA = "0x4D90350")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public float speed
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x4D90430", Offset = "0x4D90430", VA = "0x4D90430")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public float angularSpeed
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x4D90530", Offset = "0x4D90530", VA = "0x4D90530")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public float acceleration
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x4D90630", Offset = "0x4D90630", VA = "0x4D90630")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public bool updatePosition
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x4D90730", Offset = "0x4D90730", VA = "0x4D90730")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public bool updateRotation
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x4D90810", Offset = "0x4D90810", VA = "0x4D90810")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public float radius
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x4D908F0", Offset = "0x4D908F0", VA = "0x4D908F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public float height
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x4D909F0", Offset = "0x4D909F0", VA = "0x4D909F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public ObstacleAvoidanceType obstacleAvoidanceType
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x4D90AF0", Offset = "0x4D90AF0", VA = "0x4D90AF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public int avoidancePriority
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x4D90BD0", Offset = "0x4D90BD0", VA = "0x4D90BD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public bool isOnNavMesh
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x4D90CB0", Offset = "0x4D90CB0", VA = "0x4D90CB0")]
		[UnityEngine.Bindings.NativeName("InCrowdSystem")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x4D8FCE0", Offset = "0x4D8FCE0", VA = "0x4D8FCE0")]
	public bool SetDestination(Vector3 target)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4D8FD90", Offset = "0x4D8FD90", VA = "0x4D8FD90")]
	private static extern bool SetDestination_Injected(IntPtr _unity_self, [In] ref Vector3 target);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4D8FE80", Offset = "0x4D8FE80", VA = "0x4D8FE80")]
	private static extern void set_stoppingDistance_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4D8FF90", Offset = "0x4D8FF90", VA = "0x4D8FF90")]
	private static extern void get_velocity_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4D90080", Offset = "0x4D90080", VA = "0x4D90080")]
	private static extern void set_nextPosition_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4D90160", Offset = "0x4D90160", VA = "0x4D90160")]
	private static extern void set_autoBraking_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4D90240", Offset = "0x4D90240", VA = "0x4D90240")]
	private static extern void set_autoRepath_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4D90320", Offset = "0x4D90320", VA = "0x4D90320")]
	private static extern bool get_pathPending_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4D903F0", Offset = "0x4D903F0", VA = "0x4D903F0")]
	private static extern void set_agentTypeID_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4D904E0", Offset = "0x4D904E0", VA = "0x4D904E0")]
	private static extern void set_speed_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4D905E0", Offset = "0x4D905E0", VA = "0x4D905E0")]
	private static extern void set_angularSpeed_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4D906E0", Offset = "0x4D906E0", VA = "0x4D906E0")]
	private static extern void set_acceleration_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4D907D0", Offset = "0x4D907D0", VA = "0x4D907D0")]
	private static extern void set_updatePosition_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4D908B0", Offset = "0x4D908B0", VA = "0x4D908B0")]
	private static extern void set_updateRotation_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4D909A0", Offset = "0x4D909A0", VA = "0x4D909A0")]
	private static extern void set_radius_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000028")]
	[Address(RVA = "0x4D90AA0", Offset = "0x4D90AA0", VA = "0x4D90AA0")]
	private static extern void set_height_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x4D90B90", Offset = "0x4D90B90", VA = "0x4D90B90")]
	private static extern void set_obstacleAvoidanceType_Injected(IntPtr _unity_self, ObstacleAvoidanceType value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4D90C70", Offset = "0x4D90C70", VA = "0x4D90C70")]
	private static extern void set_avoidancePriority_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x4D90D50", Offset = "0x4D90D50", VA = "0x4D90D50")]
	private static extern bool get_isOnNavMesh_Injected(IntPtr _unity_self);
}
