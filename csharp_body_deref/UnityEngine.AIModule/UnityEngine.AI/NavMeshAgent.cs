// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AI.NavMeshAgent
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
		[Address(RVA = "0x2E97410", Offset = "0x2E95A10", VA = "0x182E97410")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public Vector3 velocity
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x2E969B0", Offset = "0x2E94FB0", VA = "0x182E969B0")]
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
		[Address(RVA = "0x2E970A0", Offset = "0x2E956A0", VA = "0x182E970A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public bool autoBraking
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x2E96D30", Offset = "0x2E95330", VA = "0x182E96D30")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public bool autoRepath
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x2E96E10", Offset = "0x2E95410", VA = "0x182E96E10")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public bool pathPending
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x2E96820", Offset = "0x2E94E20", VA = "0x182E96820")]
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
		[Address(RVA = "0x2E968E0", Offset = "0x2E94EE0", VA = "0x182E968E0")]
		get
		{
			return default(NavMeshPathStatus);
		}
	}

	[Token(Token = "0x17000008")]
	public int agentTypeID
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x2E965E0", Offset = "0x2E94BE0", VA = "0x182E965E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x2E96B70", Offset = "0x2E95170", VA = "0x182E96B70")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public float speed
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x2E97330", Offset = "0x2E95930", VA = "0x182E97330")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public float angularSpeed
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x2E96C50", Offset = "0x2E95250", VA = "0x182E96C50")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public float acceleration
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x2E96AA0", Offset = "0x2E950A0", VA = "0x182E96AA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public bool updatePosition
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x2E974F0", Offset = "0x2E95AF0", VA = "0x182E974F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public bool updateRotation
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x2E975D0", Offset = "0x2E95BD0", VA = "0x182E975D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public float radius
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x2E97250", Offset = "0x2E95850", VA = "0x182E97250")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public float height
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x2E966A0", Offset = "0x2E94CA0", VA = "0x182E966A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x2E96FC0", Offset = "0x2E955C0", VA = "0x182E96FC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public ObstacleAvoidanceType obstacleAvoidanceType
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x2E97170", Offset = "0x2E95770", VA = "0x182E97170")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public int avoidancePriority
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x2E96EE0", Offset = "0x2E954E0", VA = "0x182E96EE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public bool isOnNavMesh
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x2E96760", Offset = "0x2E94D60", VA = "0x182E96760")]
		[UnityEngine.Bindings.NativeName("InCrowdSystem")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x2E96510", Offset = "0x2E94B10", VA = "0x182E96510")]
	public bool SetDestination(Vector3 target)
	{
		return default(bool);
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public NavMeshAgent()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001E")]
	[Address(RVA = "0x2E964C0", Offset = "0x2E94AC0", VA = "0x182E964C0")]
	private static extern bool SetDestination_Injected(IntPtr _unity_self, [In] ref Vector3 target);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001F")]
	[Address(RVA = "0x2E973C0", Offset = "0x2E959C0", VA = "0x182E973C0")]
	private static extern void set_stoppingDistance_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000020")]
	[Address(RVA = "0x2E96960", Offset = "0x2E94F60", VA = "0x182E96960")]
	private static extern void get_velocity_Injected(IntPtr _unity_self, out Vector3 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x2E97050", Offset = "0x2E95650", VA = "0x182E97050")]
	private static extern void set_nextPosition_Injected(IntPtr _unity_self, [In] ref Vector3 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000022")]
	[Address(RVA = "0x2E96CE0", Offset = "0x2E952E0", VA = "0x182E96CE0")]
	private static extern void set_autoBraking_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x2E96DC0", Offset = "0x2E953C0", VA = "0x182E96DC0")]
	private static extern void set_autoRepath_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x2E967E0", Offset = "0x2E94DE0", VA = "0x182E967E0")]
	private static extern bool get_pathPending_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x2E968A0", Offset = "0x2E94EA0", VA = "0x182E968A0")]
	private static extern NavMeshPathStatus get_pathStatus_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000026")]
	[Address(RVA = "0x2E965A0", Offset = "0x2E94BA0", VA = "0x182E965A0")]
	private static extern int get_agentTypeID_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x2E96B30", Offset = "0x2E95130", VA = "0x182E96B30")]
	private static extern void set_agentTypeID_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000028")]
	[Address(RVA = "0x2E972E0", Offset = "0x2E958E0", VA = "0x182E972E0")]
	private static extern void set_speed_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x2E96C00", Offset = "0x2E95200", VA = "0x182E96C00")]
	private static extern void set_angularSpeed_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002A")]
	[Address(RVA = "0x2E96A50", Offset = "0x2E95050", VA = "0x182E96A50")]
	private static extern void set_acceleration_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x2E974A0", Offset = "0x2E95AA0", VA = "0x182E974A0")]
	private static extern void set_updatePosition_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002C")]
	[Address(RVA = "0x2E97580", Offset = "0x2E95B80", VA = "0x182E97580")]
	private static extern void set_updateRotation_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002D")]
	[Address(RVA = "0x2E97200", Offset = "0x2E95800", VA = "0x182E97200")]
	private static extern void set_radius_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002E")]
	[Address(RVA = "0x2E96660", Offset = "0x2E94C60", VA = "0x182E96660")]
	private static extern float get_height_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002F")]
	[Address(RVA = "0x2E96F70", Offset = "0x2E95570", VA = "0x182E96F70")]
	private static extern void set_height_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000030")]
	[Address(RVA = "0x2E97130", Offset = "0x2E95730", VA = "0x182E97130")]
	private static extern void set_obstacleAvoidanceType_Injected(IntPtr _unity_self, ObstacleAvoidanceType value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000031")]
	[Address(RVA = "0x2E96EA0", Offset = "0x2E954A0", VA = "0x182E96EA0")]
	private static extern void set_avoidancePriority_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000032")]
	[Address(RVA = "0x2E96720", Offset = "0x2E94D20", VA = "0x182E96720")]
	private static extern bool get_isOnNavMesh_Injected(IntPtr _unity_self);
}
