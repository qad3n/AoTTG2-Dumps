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
[HelpURL("https://docs.unity3d.com/Packages/com.unity.ai.navigation@2.0/manual/NavMeshAgent.html")]
[UnityEngine.Bindings.NativeHeader("Modules/AI/NavMesh/NavMesh.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/AI/Components/NavMeshAgent.bindings.h")]
[MovedFrom("UnityEngine")]
public sealed class NavMeshAgent : Behaviour
{
	[Token(Token = "0x17000001")]
	public float stoppingDistance
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x6893CC0", Offset = "0x6892CC0", VA = "0x6893CC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public Vector3 velocity
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x6893DA0", Offset = "0x6892DA0", VA = "0x6893DA0")]
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
		[Address(RVA = "0x6893E80", Offset = "0x6892E80", VA = "0x6893E80")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public bool autoBraking
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x6893F50", Offset = "0x6892F50", VA = "0x6893F50")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public bool autoRepath
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x6894010", Offset = "0x6893010", VA = "0x6894010")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public bool pathPending
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x68940D0", Offset = "0x68930D0", VA = "0x68940D0")]
		[UnityEngine.Bindings.NativeName("PathPending")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000007")]
	public NavMeshPathStatus pathStatus
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x6894180", Offset = "0x6893180", VA = "0x6894180")]
		get
		{
			return default(NavMeshPathStatus);
		}
	}

	[Token(Token = "0x17000008")]
	public int agentTypeID
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x6894230", Offset = "0x6893230", VA = "0x6894230")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x68942E0", Offset = "0x68932E0", VA = "0x68942E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public float speed
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x68943A0", Offset = "0x68933A0", VA = "0x68943A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public float angularSpeed
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x6894480", Offset = "0x6893480", VA = "0x6894480")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public float acceleration
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x6894560", Offset = "0x6893560", VA = "0x6894560")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public bool updatePosition
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x6894640", Offset = "0x6893640", VA = "0x6894640")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public bool updateRotation
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x6894700", Offset = "0x6893700", VA = "0x6894700")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public float radius
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x68947C0", Offset = "0x68937C0", VA = "0x68947C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public float height
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x68948A0", Offset = "0x68938A0", VA = "0x68948A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x6894950", Offset = "0x6893950", VA = "0x6894950")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public ObstacleAvoidanceType obstacleAvoidanceType
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x6894A30", Offset = "0x6893A30", VA = "0x6894A30")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public int avoidancePriority
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x6894AF0", Offset = "0x6893AF0", VA = "0x6894AF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public bool isOnNavMesh
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x6894BB0", Offset = "0x6893BB0", VA = "0x6894BB0")]
		[UnityEngine.Bindings.NativeName("InCrowdSystem")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x6893BF0", Offset = "0x6892BF0", VA = "0x6893BF0")]
	public bool SetDestination(Vector3 target)
	{
		return default(bool);
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x6894C60", Offset = "0x6893C60", VA = "0x6894C60")]
	public NavMeshAgent()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001E")]
	[Address(RVA = "0x6893C80", Offset = "0x6892C80", VA = "0x6893C80")]
	private static extern bool SetDestination_Injected(IntPtr _unity_self, [In] ref Vector3 target);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001F")]
	[Address(RVA = "0x6893D50", Offset = "0x6892D50", VA = "0x6893D50")]
	private static extern void set_stoppingDistance_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000020")]
	[Address(RVA = "0x6893E40", Offset = "0x6892E40", VA = "0x6893E40")]
	private static extern void get_velocity_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x6893F10", Offset = "0x6892F10", VA = "0x6893F10")]
	private static extern void set_nextPosition_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000022")]
	[Address(RVA = "0x6893FD0", Offset = "0x6892FD0", VA = "0x6893FD0")]
	private static extern void set_autoBraking_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x6894090", Offset = "0x6893090", VA = "0x6894090")]
	private static extern void set_autoRepath_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x6894150", Offset = "0x6893150", VA = "0x6894150")]
	private static extern bool get_pathPending_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x6894200", Offset = "0x6893200", VA = "0x6894200")]
	private static extern NavMeshPathStatus get_pathStatus_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000026")]
	[Address(RVA = "0x68942B0", Offset = "0x68932B0", VA = "0x68942B0")]
	private static extern int get_agentTypeID_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x6894360", Offset = "0x6893360", VA = "0x6894360")]
	private static extern void set_agentTypeID_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000028")]
	[Address(RVA = "0x6894430", Offset = "0x6893430", VA = "0x6894430")]
	private static extern void set_speed_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x6894510", Offset = "0x6893510", VA = "0x6894510")]
	private static extern void set_angularSpeed_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002A")]
	[Address(RVA = "0x68945F0", Offset = "0x68935F0", VA = "0x68945F0")]
	private static extern void set_acceleration_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x68946C0", Offset = "0x68936C0", VA = "0x68946C0")]
	private static extern void set_updatePosition_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002C")]
	[Address(RVA = "0x6894780", Offset = "0x6893780", VA = "0x6894780")]
	private static extern void set_updateRotation_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002D")]
	[Address(RVA = "0x6894850", Offset = "0x6893850", VA = "0x6894850")]
	private static extern void set_radius_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002E")]
	[Address(RVA = "0x6894920", Offset = "0x6893920", VA = "0x6894920")]
	private static extern float get_height_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002F")]
	[Address(RVA = "0x68949E0", Offset = "0x68939E0", VA = "0x68949E0")]
	private static extern void set_height_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000030")]
	[Address(RVA = "0x6894AB0", Offset = "0x6893AB0", VA = "0x6894AB0")]
	private static extern void set_obstacleAvoidanceType_Injected(IntPtr _unity_self, ObstacleAvoidanceType value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000031")]
	[Address(RVA = "0x6894B70", Offset = "0x6893B70", VA = "0x6894B70")]
	private static extern void set_avoidancePriority_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000032")]
	[Address(RVA = "0x6894C30", Offset = "0x6893C30", VA = "0x6894C30")]
	private static extern bool get_isOnNavMesh_Injected(IntPtr _unity_self);
}
