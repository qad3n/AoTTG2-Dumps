// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ParticleSystem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000002")]
[UnityEngine.Bindings.NativeHeader("Modules/ParticleSystem/ScriptBindings/ParticleSystemScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("ParticleSystemScriptingClasses.h")]
[UnityEngine.Bindings.NativeHeader("Modules/ParticleSystem/ParticleSystem.h")]
[UnityEngine.Bindings.NativeHeader("Modules/ParticleSystem/ParticleSystemGeometryJob.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeHeader("ParticleSystemScriptingClasses.h")]
[UnityEngine.Bindings.NativeHeader("Modules/ParticleSystem/ScriptBindings/ParticleSystemScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/ParticleSystem/ScriptBindings/ParticleSystemModulesScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/ParticleSystem/ParticleSystem.h")]
public sealed class ParticleSystem : Component
{
	[Token(Token = "0x2000003")]
	public struct MainModule
	{
		[Token(Token = "0x4000002")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal ParticleSystem m_ParticleSystem;

		[Token(Token = "0x1700000F")]
		public extern float duration
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000031")]
			[Address(RVA = "0x69C30A0", Offset = "0x69C20A0", VA = "0x69C30A0")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000010")]
		public extern bool loop
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000032")]
			[Address(RVA = "0x69C30F0", Offset = "0x69C20F0", VA = "0x69C30F0")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000011")]
		public MinMaxCurve startLifetime
		{
			[Token(Token = "0x6000033")]
			[Address(RVA = "0x69C3130", Offset = "0x69C2130", VA = "0x69C3130")]
			set
			{
			}
		}

		[Token(Token = "0x17000012")]
		[UnityEngine.Bindings.NativeName("StartLifetime")]
		private MinMaxCurveBlittable startLifetimeBlittable
		{
			[Token(Token = "0x6000034")]
			[Address(RVA = "0x69C3240", Offset = "0x69C2240", VA = "0x69C3240")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x17000013")]
		public extern float startLifetimeMultiplier
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000035")]
			[Address(RVA = "0x69C1F20", Offset = "0x69C0F20", VA = "0x69C1F20")]
			get;
		}

		[Token(Token = "0x17000014")]
		public MinMaxCurve startSpeed
		{
			[Token(Token = "0x6000036")]
			[Address(RVA = "0x69C32C0", Offset = "0x69C22C0", VA = "0x69C32C0")]
			get
			{
				return default(MinMaxCurve);
			}
			[Token(Token = "0x6000037")]
			[Address(RVA = "0x69C33E0", Offset = "0x69C23E0", VA = "0x69C33E0")]
			set
			{
			}
		}

		[Token(Token = "0x17000015")]
		[UnityEngine.Bindings.NativeName("StartSpeed")]
		private MinMaxCurveBlittable startSpeedBlittable
		{
			[Token(Token = "0x6000038")]
			[Address(RVA = "0x69C3350", Offset = "0x69C2350", VA = "0x69C3350")]
			get
			{
				return default(MinMaxCurveBlittable);
			}
			[Token(Token = "0x6000039")]
			[Address(RVA = "0x69C3480", Offset = "0x69C2480", VA = "0x69C3480")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x17000016")]
		public extern float startSpeedMultiplier
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x600003A")]
			[Address(RVA = "0x69C3540", Offset = "0x69C2540", VA = "0x69C3540")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000017")]
		public MinMaxCurve startSize
		{
			[Token(Token = "0x600003B")]
			[Address(RVA = "0x69C3590", Offset = "0x69C2590", VA = "0x69C3590")]
			get
			{
				return default(MinMaxCurve);
			}
			[Token(Token = "0x600003C")]
			[Address(RVA = "0x69C3680", Offset = "0x69C2680", VA = "0x69C3680")]
			set
			{
			}
		}

		[Token(Token = "0x17000018")]
		[UnityEngine.Bindings.NativeName("StartSizeX")]
		private MinMaxCurveBlittable startSizeBlittable
		{
			[Token(Token = "0x600003D")]
			[Address(RVA = "0x69C3620", Offset = "0x69C2620", VA = "0x69C3620")]
			get
			{
				return default(MinMaxCurveBlittable);
			}
			[Token(Token = "0x600003E")]
			[Address(RVA = "0x69C3720", Offset = "0x69C2720", VA = "0x69C3720")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x17000019")]
		[UnityEngine.Bindings.NativeName("StartSizeXMultiplier")]
		public extern float startSizeMultiplier
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x600003F")]
			[Address(RVA = "0x69C37E0", Offset = "0x69C27E0", VA = "0x69C37E0")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x1700001A")]
		public MinMaxCurve startRotation
		{
			[Token(Token = "0x6000040")]
			[Address(RVA = "0x69C3830", Offset = "0x69C2830", VA = "0x69C3830")]
			set
			{
			}
		}

		[Token(Token = "0x1700001B")]
		[UnityEngine.Bindings.NativeName("StartRotationZ")]
		private MinMaxCurveBlittable startRotationBlittable
		{
			[Token(Token = "0x6000041")]
			[Address(RVA = "0x69C38D0", Offset = "0x69C28D0", VA = "0x69C38D0")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x1700001C")]
		public MinMaxGradient startColor
		{
			[Token(Token = "0x6000042")]
			[Address(RVA = "0x69C1E20", Offset = "0x69C0E20", VA = "0x69C1E20")]
			set
			{
			}
		}

		[Token(Token = "0x1700001D")]
		[UnityEngine.Bindings.NativeName("StartColor")]
		private MinMaxGradientBlittable startColorBlittable
		{
			[Token(Token = "0x6000043")]
			[Address(RVA = "0x69C39C0", Offset = "0x69C29C0", VA = "0x69C39C0")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x1700001E")]
		public MinMaxCurve gravityModifier
		{
			[Token(Token = "0x6000044")]
			[Address(RVA = "0x69C3A40", Offset = "0x69C2A40", VA = "0x69C3A40")]
			set
			{
			}
		}

		[Token(Token = "0x1700001F")]
		[UnityEngine.Bindings.NativeName("GravityModifier")]
		private MinMaxCurveBlittable gravityModifierBlittable
		{
			[Token(Token = "0x6000045")]
			[Address(RVA = "0x69C3AE0", Offset = "0x69C2AE0", VA = "0x69C3AE0")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x17000020")]
		public extern ParticleSystemSimulationSpace simulationSpace
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000046")]
			[Address(RVA = "0x69C3B60", Offset = "0x69C2B60", VA = "0x69C3B60")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000021")]
		public extern ParticleSystemScalingMode scalingMode
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000047")]
			[Address(RVA = "0x69C3BA0", Offset = "0x69C2BA0", VA = "0x69C3BA0")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000022")]
		public extern bool playOnAwake
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000048")]
			[Address(RVA = "0x69C3BE0", Offset = "0x69C2BE0", VA = "0x69C3BE0")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000023")]
		public extern int maxParticles
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000049")]
			[Address(RVA = "0x69C3C20", Offset = "0x69C2C20", VA = "0x69C3C20")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000024")]
		public extern ParticleSystemStopAction stopAction
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x600004A")]
			[Address(RVA = "0x69C3C60", Offset = "0x69C2C60", VA = "0x69C3C60")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x6000030")]
		[Address(RVA = "0x69C2F00", Offset = "0x69C1F00", VA = "0x69C2F00")]
		internal MainModule(ParticleSystem particleSystem)
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x69C3280", Offset = "0x69C2280", VA = "0x69C3280")]
		private static extern void set_startLifetimeBlittable_Injected(ref MainModule _unity_self, [In] ref MinMaxCurveBlittable value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x69C34C0", Offset = "0x69C24C0", VA = "0x69C34C0")]
		private static extern void get_startSpeedBlittable_Injected(ref MainModule _unity_self, out MinMaxCurveBlittable ret);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x69C3500", Offset = "0x69C2500", VA = "0x69C3500")]
		private static extern void set_startSpeedBlittable_Injected(ref MainModule _unity_self, [In] ref MinMaxCurveBlittable value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x69C3760", Offset = "0x69C2760", VA = "0x69C3760")]
		private static extern void get_startSizeBlittable_Injected(ref MainModule _unity_self, out MinMaxCurveBlittable ret);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x69C37A0", Offset = "0x69C27A0", VA = "0x69C37A0")]
		private static extern void set_startSizeBlittable_Injected(ref MainModule _unity_self, [In] ref MinMaxCurveBlittable value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x69C3910", Offset = "0x69C2910", VA = "0x69C3910")]
		private static extern void set_startRotationBlittable_Injected(ref MainModule _unity_self, [In] ref MinMaxCurveBlittable value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x69C3A00", Offset = "0x69C2A00", VA = "0x69C3A00")]
		private static extern void set_startColorBlittable_Injected(ref MainModule _unity_self, [In] ref MinMaxGradientBlittable value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x69C3B20", Offset = "0x69C2B20", VA = "0x69C3B20")]
		private static extern void set_gravityModifierBlittable_Injected(ref MainModule _unity_self, [In] ref MinMaxCurveBlittable value);
	}

	[Token(Token = "0x2000004")]
	public struct EmissionModule
	{
		[Token(Token = "0x4000003")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal ParticleSystem m_ParticleSystem;

		[Token(Token = "0x17000025")]
		public extern bool enabled
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000054")]
			[Address(RVA = "0x69C3CA0", Offset = "0x69C2CA0", VA = "0x69C3CA0")]
			get;
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000055")]
			[Address(RVA = "0x69C3CD0", Offset = "0x69C2CD0", VA = "0x69C3CD0")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000026")]
		public MinMaxCurve rateOverTime
		{
			[Token(Token = "0x6000056")]
			[Address(RVA = "0x69C3D10", Offset = "0x69C2D10", VA = "0x69C3D10")]
			set
			{
			}
		}

		[Token(Token = "0x17000027")]
		[UnityEngine.Bindings.NativeName("RateOverTime")]
		private MinMaxCurveBlittable rateOverTimeBlittable
		{
			[Token(Token = "0x6000057")]
			[Address(RVA = "0x69C3DB0", Offset = "0x69C2DB0", VA = "0x69C3DB0")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x17000028")]
		public extern float rateOverTimeMultiplier
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000058")]
			[Address(RVA = "0x69C3E30", Offset = "0x69C2E30", VA = "0x69C3E30")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000029")]
		public extern int burstCount
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x600005C")]
			[Address(RVA = "0x69C4060", Offset = "0x69C3060", VA = "0x69C4060")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x6000053")]
		[Address(RVA = "0x69C2F30", Offset = "0x69C1F30", VA = "0x69C2F30")]
		internal EmissionModule(ParticleSystem particleSystem)
		{
		}

		[Token(Token = "0x6000059")]
		[Address(RVA = "0x69C3E80", Offset = "0x69C2E80", VA = "0x69C3E80")]
		public void SetBursts(Burst[] bursts)
		{
		}

		[Token(Token = "0x600005A")]
		[Address(RVA = "0x69C3F70", Offset = "0x69C2F70", VA = "0x69C3F70")]
		public void SetBursts(Burst[] bursts, int size)
		{
		}

		[Token(Token = "0x600005B")]
		[Address(RVA = "0x69C40A0", Offset = "0x69C30A0", VA = "0x69C40A0")]
		[UnityEngine.Bindings.NativeThrows]
		public void SetBurst(int index, Burst burst)
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x69C3DF0", Offset = "0x69C2DF0", VA = "0x69C3DF0")]
		private static extern void set_rateOverTimeBlittable_Injected(ref EmissionModule _unity_self, [In] ref MinMaxCurveBlittable value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x69C40E0", Offset = "0x69C30E0", VA = "0x69C40E0")]
		private static extern void SetBurst_Injected(ref EmissionModule _unity_self, int index, [In] ref Burst burst);
	}

	[Token(Token = "0x2000005")]
	public struct ShapeModule
	{
		[Token(Token = "0x4000004")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal ParticleSystem m_ParticleSystem;

		[Token(Token = "0x1700002A")]
		public extern bool enabled
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000060")]
			[Address(RVA = "0x69C4120", Offset = "0x69C3120", VA = "0x69C4120")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x1700002B")]
		public extern ParticleSystemShapeType shapeType
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000061")]
			[Address(RVA = "0x69C4160", Offset = "0x69C3160", VA = "0x69C4160")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x1700002C")]
		public extern float radius
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000062")]
			[Address(RVA = "0x69C41A0", Offset = "0x69C31A0", VA = "0x69C41A0")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x1700002D")]
		public extern float radiusThickness
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000063")]
			[Address(RVA = "0x69C41F0", Offset = "0x69C31F0", VA = "0x69C41F0")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x1700002E")]
		public extern ParticleSystemMeshShapeType meshShapeType
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000064")]
			[Address(RVA = "0x69C4240", Offset = "0x69C3240", VA = "0x69C4240")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x1700002F")]
		public Mesh mesh
		{
			[Token(Token = "0x6000065")]
			[Address(RVA = "0x69C4280", Offset = "0x69C3280", VA = "0x69C4280")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x17000030")]
		public extern bool useMeshMaterialIndex
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000066")]
			[Address(RVA = "0x69C4360", Offset = "0x69C3360", VA = "0x69C4360")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000031")]
		public extern bool useMeshColors
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000067")]
			[Address(RVA = "0x69C43A0", Offset = "0x69C33A0", VA = "0x69C43A0")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000032")]
		public Vector3 position
		{
			[Token(Token = "0x6000068")]
			[Address(RVA = "0x69C43E0", Offset = "0x69C33E0", VA = "0x69C43E0")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x17000033")]
		public Vector3 rotation
		{
			[Token(Token = "0x6000069")]
			[Address(RVA = "0x69C4460", Offset = "0x69C3460", VA = "0x69C4460")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x17000034")]
		public Vector3 scale
		{
			[Token(Token = "0x600006A")]
			[Address(RVA = "0x69C44E0", Offset = "0x69C34E0", VA = "0x69C44E0")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x600005F")]
		[Address(RVA = "0x69C2F60", Offset = "0x69C1F60", VA = "0x69C2F60")]
		internal ShapeModule(ParticleSystem particleSystem)
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x69C4320", Offset = "0x69C3320", VA = "0x69C4320")]
		private static extern void set_mesh_Injected(ref ShapeModule _unity_self, IntPtr value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x69C4420", Offset = "0x69C3420", VA = "0x69C4420")]
		private static extern void set_position_Injected(ref ShapeModule _unity_self, [In] ref Vector3 value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x69C44A0", Offset = "0x69C34A0", VA = "0x69C44A0")]
		private static extern void set_rotation_Injected(ref ShapeModule _unity_self, [In] ref Vector3 value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600006E")]
		[Address(RVA = "0x69C4520", Offset = "0x69C3520", VA = "0x69C4520")]
		private static extern void set_scale_Injected(ref ShapeModule _unity_self, [In] ref Vector3 value);
	}

	[Token(Token = "0x2000006")]
	[UnityEngine.Scripting.RequiredByNativeCode("particleSystemParticle", Optional = true)]
	public struct Particle
	{
		[Token(Token = "0x4000005")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Vector3 m_Position;

		[Token(Token = "0x4000006")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		private Vector3 m_Velocity;

		[Token(Token = "0x4000007")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private Vector3 m_AnimatedVelocity;

		[Token(Token = "0x4000008")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		private Vector3 m_InitialVelocity;

		[Token(Token = "0x4000009")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private Vector3 m_AxisOfRotation;

		[Token(Token = "0x400000A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
		private Vector3 m_Rotation;

		[Token(Token = "0x400000B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private Vector3 m_AngularVelocity;

		[Token(Token = "0x400000C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
		private Vector3 m_StartSize;

		[Token(Token = "0x400000D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private Color32 m_StartColor;

		[Token(Token = "0x400000E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
		private uint m_RandomSeed;

		[Token(Token = "0x400000F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private uint m_ParentRandomSeed;

		[Token(Token = "0x4000010")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
		private float m_Lifetime;

		[Token(Token = "0x4000011")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private float m_StartLifetime;

		[Token(Token = "0x4000012")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
		private int m_MeshIndex;

		[Token(Token = "0x4000013")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private float m_EmitAccumulator0;

		[Token(Token = "0x4000014")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
		private float m_EmitAccumulator1;

		[Token(Token = "0x4000015")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private uint m_Flags;

		[Token(Token = "0x17000035")]
		[Obsolete("Please use Particle.remainingLifetime instead. (UnityUpgradable) -> UnityEngine.ParticleSystem/Particle.remainingLifetime", false)]
		public float lifetime
		{
			[Token(Token = "0x600006F")]
			[Address(RVA = "0x69C1A90", Offset = "0x69C0A90", VA = "0x69C1A90")]
			set
			{
			}
		}

		[Token(Token = "0x17000036")]
		public Vector3 position
		{
			[Token(Token = "0x6000070")]
			[Address(RVA = "0x69C1A70", Offset = "0x69C0A70", VA = "0x69C1A70")]
			set
			{
			}
		}

		[Token(Token = "0x17000037")]
		public Vector3 velocity
		{
			[Token(Token = "0x6000071")]
			[Address(RVA = "0x69C1A80", Offset = "0x69C0A80", VA = "0x69C1A80")]
			set
			{
			}
		}

		[Token(Token = "0x17000038")]
		public float remainingLifetime
		{
			[Token(Token = "0x6000072")]
			[Address(RVA = "0x69C4570", Offset = "0x69C3570", VA = "0x69C4570")]
			get
			{
				return default(float);
			}
			[Token(Token = "0x6000073")]
			[Address(RVA = "0x69C4560", Offset = "0x69C3560", VA = "0x69C4560")]
			set
			{
			}
		}

		[Token(Token = "0x17000039")]
		public float startLifetime
		{
			[Token(Token = "0x6000074")]
			[Address(RVA = "0x69C1AA0", Offset = "0x69C0AA0", VA = "0x69C1AA0")]
			set
			{
			}
		}

		[Token(Token = "0x1700003A")]
		public Color32 startColor
		{
			[Token(Token = "0x6000075")]
			[Address(RVA = "0x69C1B00", Offset = "0x69C0B00", VA = "0x69C1B00")]
			set
			{
			}
		}

		[Token(Token = "0x1700003B")]
		public uint randomSeed
		{
			[Token(Token = "0x6000076")]
			[Address(RVA = "0x69C1B10", Offset = "0x69C0B10", VA = "0x69C1B10")]
			set
			{
			}
		}

		[Token(Token = "0x1700003C")]
		public float startSize
		{
			[Token(Token = "0x6000077")]
			[Address(RVA = "0x69C1AB0", Offset = "0x69C0AB0", VA = "0x69C1AB0")]
			set
			{
			}
		}

		[Token(Token = "0x1700003D")]
		public Vector3 rotation3D
		{
			[Token(Token = "0x6000078")]
			[Address(RVA = "0x69C1AC0", Offset = "0x69C0AC0", VA = "0x69C1AC0")]
			set
			{
			}
		}

		[Token(Token = "0x1700003E")]
		public Vector3 angularVelocity3D
		{
			[Token(Token = "0x6000079")]
			[Address(RVA = "0x69C1AE0", Offset = "0x69C0AE0", VA = "0x69C1AE0")]
			set
			{
			}
		}
	}

	[Token(Token = "0x2000007")]
	[UnityEngine.Bindings.NativeType(UnityEngine.Bindings.CodegenOptions.Custom, "MonoBurst", Header = "Runtime/Scripting/ScriptingCommonStructDefinitions.h")]
	public struct Burst
	{
		[Token(Token = "0x4000016")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private float m_Time;

		[Token(Token = "0x4000017")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private MinMaxCurveBlittable m_Count;

		[Token(Token = "0x4000018")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private int m_RepeatCount;

		[Token(Token = "0x4000019")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		private float m_RepeatInterval;

		[Token(Token = "0x400001A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private float m_InvProbability;

		[Token(Token = "0x600007A")]
		[Address(RVA = "0x69C4580", Offset = "0x69C3580", VA = "0x69C4580")]
		public Burst(float _time, short _count)
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000008")]
	public struct MinMaxCurve
	{
		[Token(Token = "0x400001B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		[SerializeField]
		internal ParticleSystemCurveMode m_Mode;

		[Token(Token = "0x400001C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		[SerializeField]
		internal float m_CurveMultiplier;

		[Token(Token = "0x400001D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		[SerializeField]
		internal AnimationCurve m_CurveMin;

		[Token(Token = "0x400001E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		[SerializeField]
		internal AnimationCurve m_CurveMax;

		[Token(Token = "0x400001F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		[SerializeField]
		internal float m_ConstantMin;

		[Token(Token = "0x4000020")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		[SerializeField]
		internal float m_ConstantMax;

		[Token(Token = "0x1700003F")]
		public ParticleSystemCurveMode mode
		{
			[Token(Token = "0x600007E")]
			[Address(RVA = "0x69C4810", Offset = "0x69C3810", VA = "0x69C4810")]
			get
			{
				return default(ParticleSystemCurveMode);
			}
		}

		[Token(Token = "0x17000040")]
		public float constantMax
		{
			[Token(Token = "0x600007F")]
			[Address(RVA = "0x69C4820", Offset = "0x69C3820", VA = "0x69C4820")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x17000041")]
		public float constantMin
		{
			[Token(Token = "0x6000080")]
			[Address(RVA = "0x69C4830", Offset = "0x69C3830", VA = "0x69C4830")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x17000042")]
		public float constant
		{
			[Token(Token = "0x6000081")]
			[Address(RVA = "0x69C4840", Offset = "0x69C3840", VA = "0x69C4840")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x600007B")]
		[Address(RVA = "0x69C4710", Offset = "0x69C3710", VA = "0x69C4710")]
		public MinMaxCurve(float constant)
		{
		}

		[Token(Token = "0x600007C")]
		[Address(RVA = "0x69C4760", Offset = "0x69C3760", VA = "0x69C4760")]
		public MinMaxCurve(float multiplier, AnimationCurve curve)
		{
		}

		[Token(Token = "0x600007D")]
		[Address(RVA = "0x69C47B0", Offset = "0x69C37B0", VA = "0x69C47B0")]
		public MinMaxCurve(float min, float max)
		{
		}

		[Token(Token = "0x6000082")]
		[Address(RVA = "0x69C4630", Offset = "0x69C3630", VA = "0x69C4630")]
		public static implicit operator MinMaxCurve(float constant)
		{
			return default(MinMaxCurve);
		}
	}

	[Serializable]
	[Token(Token = "0x2000009")]
	[UnityEngine.Bindings.NativeType(UnityEngine.Bindings.CodegenOptions.Custom, "MonoMinMaxCurve", Header = "Runtime/Scripting/ScriptingCommonStructDefinitions.h")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal struct MinMaxCurveBlittable
	{
		[Token(Token = "0x4000021")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ParticleSystemCurveMode m_Mode;

		[Token(Token = "0x4000022")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		private float m_CurveMultiplier;

		[Token(Token = "0x4000023")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private IntPtr m_CurveMin;

		[Token(Token = "0x4000024")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private IntPtr m_CurveMax;

		[Token(Token = "0x4000025")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal float m_ConstantMin;

		[Token(Token = "0x4000026")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		internal float m_ConstantMax;

		[Token(Token = "0x6000083")]
		[Address(RVA = "0x69C33B0", Offset = "0x69C23B0", VA = "0x69C33B0")]
		public static implicit operator MinMaxCurve(MinMaxCurveBlittable minMaxCurveBlittable)
		{
			return default(MinMaxCurve);
		}

		[Token(Token = "0x6000084")]
		[Address(RVA = "0x69C31D0", Offset = "0x69C21D0", VA = "0x69C31D0")]
		public static implicit operator MinMaxCurveBlittable(MinMaxCurve minMaxCurve)
		{
			return default(MinMaxCurveBlittable);
		}

		[Token(Token = "0x6000085")]
		[Address(RVA = "0x69C46B0", Offset = "0x69C36B0", VA = "0x69C46B0")]
		internal static MinMaxCurveBlittable FromMixMaxCurve(in MinMaxCurve minMaxCurve)
		{
			return default(MinMaxCurveBlittable);
		}

		[Token(Token = "0x6000086")]
		[Address(RVA = "0x69C4850", Offset = "0x69C3850", VA = "0x69C4850")]
		internal static MinMaxCurve ToMinMaxCurve(in MinMaxCurveBlittable minMaxCurveBlittable)
		{
			return default(MinMaxCurve);
		}
	}

	[Serializable]
	[Token(Token = "0x200000A")]
	public struct MinMaxGradient
	{
		[Token(Token = "0x4000027")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		[SerializeField]
		internal ParticleSystemGradientMode m_Mode;

		[Token(Token = "0x4000028")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		[SerializeField]
		internal Gradient m_GradientMin;

		[Token(Token = "0x4000029")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		[SerializeField]
		internal Gradient m_GradientMax;

		[Token(Token = "0x400002A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		[SerializeField]
		internal Color m_ColorMin;

		[Token(Token = "0x400002B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		[SerializeField]
		internal Color m_ColorMax;

		[Token(Token = "0x6000087")]
		[Address(RVA = "0x69C4950", Offset = "0x69C3950", VA = "0x69C4950")]
		public MinMaxGradient(Color color)
		{
		}

		[Token(Token = "0x6000088")]
		[Address(RVA = "0x69C49B0", Offset = "0x69C39B0", VA = "0x69C49B0")]
		public MinMaxGradient(Gradient gradient)
		{
		}

		[Token(Token = "0x6000089")]
		[Address(RVA = "0x69C4A00", Offset = "0x69C3A00", VA = "0x69C4A00")]
		public MinMaxGradient(Color min, Color max)
		{
		}

		[Token(Token = "0x600008A")]
		[Address(RVA = "0x69C1D80", Offset = "0x69C0D80", VA = "0x69C1D80")]
		public static implicit operator MinMaxGradient(Color color)
		{
			return default(MinMaxGradient);
		}

		[Token(Token = "0x600008B")]
		[Address(RVA = "0x69C4A70", Offset = "0x69C3A70", VA = "0x69C4A70")]
		public static implicit operator MinMaxGradient(Gradient gradient)
		{
			return default(MinMaxGradient);
		}
	}

	[Serializable]
	[Token(Token = "0x200000B")]
	[UnityEngine.Bindings.NativeType(UnityEngine.Bindings.CodegenOptions.Custom, "MonoMinMaxGradient", Header = "Runtime/Scripting/ScriptingCommonStructDefinitions.h")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal struct MinMaxGradientBlittable
	{
		[Token(Token = "0x400002C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ParticleSystemGradientMode m_Mode;

		[Token(Token = "0x400002D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private IntPtr m_GradientMin;

		[Token(Token = "0x400002E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private IntPtr m_GradientMax;

		[Token(Token = "0x400002F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private Color m_ColorMin;

		[Token(Token = "0x4000030")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private Color m_ColorMax;

		[Token(Token = "0x600008C")]
		[Address(RVA = "0x69C3950", Offset = "0x69C2950", VA = "0x69C3950")]
		public static implicit operator MinMaxGradientBlittable(MinMaxGradient minMaxGradient)
		{
			return default(MinMaxGradientBlittable);
		}

		[Token(Token = "0x600008D")]
		[Address(RVA = "0x69C4B10", Offset = "0x69C3B10", VA = "0x69C4B10")]
		internal static MinMaxGradientBlittable FromMixMaxGradient(in MinMaxGradient minMaxGradient)
		{
			return default(MinMaxGradientBlittable);
		}
	}

	[Token(Token = "0x200000C")]
	public struct EmitParams
	{
		[Token(Token = "0x4000031")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		[UnityEngine.Bindings.NativeName("particle")]
		private Particle m_Particle;

		[Token(Token = "0x4000032")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x84")]
		[UnityEngine.Bindings.NativeName("positionSet")]
		private bool m_PositionSet;

		[Token(Token = "0x4000033")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x85")]
		[UnityEngine.Bindings.NativeName("velocitySet")]
		private bool m_VelocitySet;

		[Token(Token = "0x4000034")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x86")]
		[UnityEngine.Bindings.NativeName("axisOfRotationSet")]
		private bool m_AxisOfRotationSet;

		[Token(Token = "0x4000035")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x87")]
		[UnityEngine.Bindings.NativeName("rotationSet")]
		private bool m_RotationSet;

		[Token(Token = "0x4000036")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		[UnityEngine.Bindings.NativeName("rotationalSpeedSet")]
		private bool m_AngularVelocitySet;

		[Token(Token = "0x4000037")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x89")]
		[UnityEngine.Bindings.NativeName("startSizeSet")]
		private bool m_StartSizeSet;

		[Token(Token = "0x4000038")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8A")]
		[UnityEngine.Bindings.NativeName("startColorSet")]
		private bool m_StartColorSet;

		[Token(Token = "0x4000039")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8B")]
		[UnityEngine.Bindings.NativeName("randomSeedSet")]
		private bool m_RandomSeedSet;

		[Token(Token = "0x400003A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
		[UnityEngine.Bindings.NativeName("startLifetimeSet")]
		private bool m_StartLifetimeSet;

		[Token(Token = "0x400003B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8D")]
		[UnityEngine.Bindings.NativeName("meshIndexSet")]
		private bool m_MeshIndexSet;

		[Token(Token = "0x400003C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8E")]
		[UnityEngine.Bindings.NativeName("applyShapeToPosition")]
		private bool m_ApplyShapeToPosition;
	}

	[Token(Token = "0x200000D")]
	public struct VelocityOverLifetimeModule
	{
		[Token(Token = "0x400003D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal ParticleSystem m_ParticleSystem;

		[Token(Token = "0x17000043")]
		public extern bool enabled
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x600008F")]
			[Address(RVA = "0x69C4B70", Offset = "0x69C3B70", VA = "0x69C4B70")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000044")]
		public MinMaxCurve x
		{
			[Token(Token = "0x6000090")]
			[Address(RVA = "0x69C4BB0", Offset = "0x69C3BB0", VA = "0x69C4BB0")]
			set
			{
			}
		}

		[Token(Token = "0x17000045")]
		[UnityEngine.Bindings.NativeName("X")]
		private MinMaxCurveBlittable xBlittable
		{
			[Token(Token = "0x6000091")]
			[Address(RVA = "0x69C4C50", Offset = "0x69C3C50", VA = "0x69C4C50")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x17000046")]
		public MinMaxCurve y
		{
			[Token(Token = "0x6000092")]
			[Address(RVA = "0x69C4CD0", Offset = "0x69C3CD0", VA = "0x69C4CD0")]
			set
			{
			}
		}

		[Token(Token = "0x17000047")]
		[UnityEngine.Bindings.NativeName("Y")]
		private MinMaxCurveBlittable yBlittable
		{
			[Token(Token = "0x6000093")]
			[Address(RVA = "0x69C4D70", Offset = "0x69C3D70", VA = "0x69C4D70")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x17000048")]
		public MinMaxCurve z
		{
			[Token(Token = "0x6000094")]
			[Address(RVA = "0x69C4DF0", Offset = "0x69C3DF0", VA = "0x69C4DF0")]
			set
			{
			}
		}

		[Token(Token = "0x17000049")]
		[UnityEngine.Bindings.NativeName("Z")]
		private MinMaxCurveBlittable zBlittable
		{
			[Token(Token = "0x6000095")]
			[Address(RVA = "0x69C4E90", Offset = "0x69C3E90", VA = "0x69C4E90")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x1700004A")]
		public MinMaxCurve radial
		{
			[Token(Token = "0x6000096")]
			[Address(RVA = "0x69C4F10", Offset = "0x69C3F10", VA = "0x69C4F10")]
			set
			{
			}
		}

		[Token(Token = "0x1700004B")]
		[UnityEngine.Bindings.NativeName("Radial")]
		private MinMaxCurveBlittable radialBlittable
		{
			[Token(Token = "0x6000097")]
			[Address(RVA = "0x69C4FB0", Offset = "0x69C3FB0", VA = "0x69C4FB0")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x1700004C")]
		public extern ParticleSystemSimulationSpace space
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000098")]
			[Address(RVA = "0x69C5030", Offset = "0x69C4030", VA = "0x69C5030")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x600008E")]
		[Address(RVA = "0x69C2F90", Offset = "0x69C1F90", VA = "0x69C2F90")]
		internal VelocityOverLifetimeModule(ParticleSystem particleSystem)
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000099")]
		[Address(RVA = "0x69C4C90", Offset = "0x69C3C90", VA = "0x69C4C90")]
		private static extern void set_xBlittable_Injected(ref VelocityOverLifetimeModule _unity_self, [In] ref MinMaxCurveBlittable value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600009A")]
		[Address(RVA = "0x69C4DB0", Offset = "0x69C3DB0", VA = "0x69C4DB0")]
		private static extern void set_yBlittable_Injected(ref VelocityOverLifetimeModule _unity_self, [In] ref MinMaxCurveBlittable value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600009B")]
		[Address(RVA = "0x69C4ED0", Offset = "0x69C3ED0", VA = "0x69C4ED0")]
		private static extern void set_zBlittable_Injected(ref VelocityOverLifetimeModule _unity_self, [In] ref MinMaxCurveBlittable value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600009C")]
		[Address(RVA = "0x69C4FF0", Offset = "0x69C3FF0", VA = "0x69C4FF0")]
		private static extern void set_radialBlittable_Injected(ref VelocityOverLifetimeModule _unity_self, [In] ref MinMaxCurveBlittable value);
	}

	[Token(Token = "0x200000E")]
	public struct LimitVelocityOverLifetimeModule
	{
		[Token(Token = "0x400003E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal ParticleSystem m_ParticleSystem;

		[Token(Token = "0x1700004D")]
		public extern bool enabled
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x600009E")]
			[Address(RVA = "0x69C5070", Offset = "0x69C4070", VA = "0x69C5070")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x1700004E")]
		public MinMaxCurve limit
		{
			[Token(Token = "0x600009F")]
			[Address(RVA = "0x69C50B0", Offset = "0x69C40B0", VA = "0x69C50B0")]
			set
			{
			}
		}

		[Token(Token = "0x1700004F")]
		[UnityEngine.Bindings.NativeName("Magnitude")]
		private MinMaxCurveBlittable limitBlittable
		{
			[Token(Token = "0x60000A0")]
			[Address(RVA = "0x69C5150", Offset = "0x69C4150", VA = "0x69C5150")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x17000050")]
		public extern float dampen
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x60000A1")]
			[Address(RVA = "0x69C51D0", Offset = "0x69C41D0", VA = "0x69C51D0")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x600009D")]
		[Address(RVA = "0x69C2FC0", Offset = "0x69C1FC0", VA = "0x69C2FC0")]
		internal LimitVelocityOverLifetimeModule(ParticleSystem particleSystem)
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x69C5190", Offset = "0x69C4190", VA = "0x69C5190")]
		private static extern void set_limitBlittable_Injected(ref LimitVelocityOverLifetimeModule _unity_self, [In] ref MinMaxCurveBlittable value);
	}

	[Token(Token = "0x200000F")]
	public struct ColorOverLifetimeModule
	{
		[Token(Token = "0x400003F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal ParticleSystem m_ParticleSystem;

		[Token(Token = "0x17000051")]
		public extern bool enabled
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x60000A4")]
			[Address(RVA = "0x69C5220", Offset = "0x69C4220", VA = "0x69C5220")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000052")]
		public MinMaxGradient color
		{
			[Token(Token = "0x60000A5")]
			[Address(RVA = "0x69C5260", Offset = "0x69C4260", VA = "0x69C5260")]
			set
			{
			}
		}

		[Token(Token = "0x17000053")]
		[UnityEngine.Bindings.NativeName("Color")]
		private MinMaxGradientBlittable colorBlittable
		{
			[Token(Token = "0x60000A6")]
			[Address(RVA = "0x69C5310", Offset = "0x69C4310", VA = "0x69C5310")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x60000A3")]
		[Address(RVA = "0x69C2FF0", Offset = "0x69C1FF0", VA = "0x69C2FF0")]
		internal ColorOverLifetimeModule(ParticleSystem particleSystem)
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60000A7")]
		[Address(RVA = "0x69C5350", Offset = "0x69C4350", VA = "0x69C5350")]
		private static extern void set_colorBlittable_Injected(ref ColorOverLifetimeModule _unity_self, [In] ref MinMaxGradientBlittable value);
	}

	[Token(Token = "0x2000010")]
	public struct SizeOverLifetimeModule
	{
		[Token(Token = "0x4000040")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal ParticleSystem m_ParticleSystem;

		[Token(Token = "0x17000054")]
		public extern bool enabled
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x60000A9")]
			[Address(RVA = "0x69C5390", Offset = "0x69C4390", VA = "0x69C5390")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000055")]
		public MinMaxCurve size
		{
			[Token(Token = "0x60000AA")]
			[Address(RVA = "0x69C53D0", Offset = "0x69C43D0", VA = "0x69C53D0")]
			set
			{
			}
		}

		[Token(Token = "0x17000056")]
		[UnityEngine.Bindings.NativeName("X")]
		private MinMaxCurveBlittable sizeBlittable
		{
			[Token(Token = "0x60000AB")]
			[Address(RVA = "0x69C5470", Offset = "0x69C4470", VA = "0x69C5470")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x60000A8")]
		[Address(RVA = "0x69C3020", Offset = "0x69C2020", VA = "0x69C3020")]
		internal SizeOverLifetimeModule(ParticleSystem particleSystem)
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x69C54B0", Offset = "0x69C44B0", VA = "0x69C54B0")]
		private static extern void set_sizeBlittable_Injected(ref SizeOverLifetimeModule _unity_self, [In] ref MinMaxCurveBlittable value);
	}

	[Token(Token = "0x2000011")]
	public struct RotationOverLifetimeModule
	{
		[Token(Token = "0x4000041")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal ParticleSystem m_ParticleSystem;

		[Token(Token = "0x17000057")]
		public extern bool enabled
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x60000AE")]
			[Address(RVA = "0x69C54F0", Offset = "0x69C44F0", VA = "0x69C54F0")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000058")]
		public MinMaxCurve z
		{
			[Token(Token = "0x60000AF")]
			[Address(RVA = "0x69C5530", Offset = "0x69C4530", VA = "0x69C5530")]
			set
			{
			}
		}

		[Token(Token = "0x17000059")]
		[UnityEngine.Bindings.NativeName("Z")]
		private MinMaxCurveBlittable zBlittable
		{
			[Token(Token = "0x60000B0")]
			[Address(RVA = "0x69C55D0", Offset = "0x69C45D0", VA = "0x69C55D0")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x69C3050", Offset = "0x69C2050", VA = "0x69C3050")]
		internal RotationOverLifetimeModule(ParticleSystem particleSystem)
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x69C5610", Offset = "0x69C4610", VA = "0x69C5610")]
		private static extern void set_zBlittable_Injected(ref RotationOverLifetimeModule _unity_self, [In] ref MinMaxCurveBlittable value);
	}

	[Token(Token = "0x2000012")]
	public struct NoiseModule
	{
		[Token(Token = "0x4000042")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal ParticleSystem m_ParticleSystem;

		[Token(Token = "0x1700005A")]
		public extern bool enabled
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x60000B3")]
			[Address(RVA = "0x69C5650", Offset = "0x69C4650", VA = "0x69C5650")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x1700005B")]
		public MinMaxCurve strength
		{
			[Token(Token = "0x60000B4")]
			[Address(RVA = "0x69C5690", Offset = "0x69C4690", VA = "0x69C5690")]
			set
			{
			}
		}

		[Token(Token = "0x1700005C")]
		[UnityEngine.Bindings.NativeName("StrengthX")]
		private MinMaxCurveBlittable strengthBlittable
		{
			[Token(Token = "0x60000B5")]
			[Address(RVA = "0x69C5730", Offset = "0x69C4730", VA = "0x69C5730")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x1700005D")]
		public extern float frequency
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x60000B6")]
			[Address(RVA = "0x69C57B0", Offset = "0x69C47B0", VA = "0x69C57B0")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x1700005E")]
		public extern bool damping
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x60000B7")]
			[Address(RVA = "0x69C5800", Offset = "0x69C4800", VA = "0x69C5800")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x1700005F")]
		public extern int octaveCount
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x60000B8")]
			[Address(RVA = "0x69C5840", Offset = "0x69C4840", VA = "0x69C5840")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000060")]
		public MinMaxCurve scrollSpeed
		{
			[Token(Token = "0x60000B9")]
			[Address(RVA = "0x69C5880", Offset = "0x69C4880", VA = "0x69C5880")]
			set
			{
			}
		}

		[Token(Token = "0x17000061")]
		[UnityEngine.Bindings.NativeName("ScrollSpeed")]
		private MinMaxCurveBlittable scrollSpeedBlittable
		{
			[Token(Token = "0x60000BA")]
			[Address(RVA = "0x69C5920", Offset = "0x69C4920", VA = "0x69C5920")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x60000B2")]
		[Address(RVA = "0x69C3080", Offset = "0x69C2080", VA = "0x69C3080")]
		internal NoiseModule(ParticleSystem particleSystem)
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60000BB")]
		[Address(RVA = "0x69C5770", Offset = "0x69C4770", VA = "0x69C5770")]
		private static extern void set_strengthBlittable_Injected(ref NoiseModule _unity_self, [In] ref MinMaxCurveBlittable value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60000BC")]
		[Address(RVA = "0x69C5960", Offset = "0x69C4960", VA = "0x69C5960")]
		private static extern void set_scrollSpeedBlittable_Injected(ref NoiseModule _unity_self, [In] ref MinMaxCurveBlittable value);
	}

	[Token(Token = "0x4000001")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action<ParticleSystem, EmitParams, int, bool> onEmit;

	[Token(Token = "0x17000001")]
	[Obsolete("startColor property is deprecated. Use main.startColor instead.", false)]
	public Color startColor
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x69C1C30", Offset = "0x69C0C30", VA = "0x69C1C30")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	[Obsolete("startLifetime property is deprecated. Use main.startLifetime or main.startLifetimeMultiplier instead.", false)]
	public float startLifetime
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x69C1ED0", Offset = "0x69C0ED0", VA = "0x69C1ED0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000003")]
	public bool isPlaying
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x69C1F50", Offset = "0x69C0F50", VA = "0x69C1F50")]
		[UnityEngine.Bindings.NativeName("SyncJobs(false)->IsPlaying")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000004")]
	public bool isEmitting
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x69C2000", Offset = "0x69C1000", VA = "0x69C2000")]
		[UnityEngine.Bindings.NativeName("SyncJobs(false)->IsEmitting")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000005")]
	public int particleCount
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x69C20B0", Offset = "0x69C10B0", VA = "0x69C20B0")]
		[UnityEngine.Bindings.NativeName("SyncJobs(false)->GetParticleCount")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000006")]
	public MainModule main
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x69C1D60", Offset = "0x69C0D60", VA = "0x69C1D60")]
		get
		{
			return default(MainModule);
		}
	}

	[Token(Token = "0x17000007")]
	public EmissionModule emission
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x69C2F10", Offset = "0x69C1F10", VA = "0x69C2F10")]
		get
		{
			return default(EmissionModule);
		}
	}

	[Token(Token = "0x17000008")]
	public ShapeModule shape
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x69C2F40", Offset = "0x69C1F40", VA = "0x69C2F40")]
		get
		{
			return default(ShapeModule);
		}
	}

	[Token(Token = "0x17000009")]
	public VelocityOverLifetimeModule velocityOverLifetime
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x69C2F70", Offset = "0x69C1F70", VA = "0x69C2F70")]
		get
		{
			return default(VelocityOverLifetimeModule);
		}
	}

	[Token(Token = "0x1700000A")]
	public LimitVelocityOverLifetimeModule limitVelocityOverLifetime
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x69C2FA0", Offset = "0x69C1FA0", VA = "0x69C2FA0")]
		get
		{
			return default(LimitVelocityOverLifetimeModule);
		}
	}

	[Token(Token = "0x1700000B")]
	public ColorOverLifetimeModule colorOverLifetime
	{
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x69C2FD0", Offset = "0x69C1FD0", VA = "0x69C2FD0")]
		get
		{
			return default(ColorOverLifetimeModule);
		}
	}

	[Token(Token = "0x1700000C")]
	public SizeOverLifetimeModule sizeOverLifetime
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x69C3000", Offset = "0x69C2000", VA = "0x69C3000")]
		get
		{
			return default(SizeOverLifetimeModule);
		}
	}

	[Token(Token = "0x1700000D")]
	public RotationOverLifetimeModule rotationOverLifetime
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x69C3030", Offset = "0x69C2030", VA = "0x69C3030")]
		get
		{
			return default(RotationOverLifetimeModule);
		}
	}

	[Token(Token = "0x1700000E")]
	public NoiseModule noise
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x69C3060", Offset = "0x69C2060", VA = "0x69C3060")]
		get
		{
			return default(NoiseModule);
		}
	}

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x69C1900", Offset = "0x69C0900", VA = "0x69C1900")]
	[Obsolete("Emit with specific parameters is deprecated. Pass a ParticleSystem.EmitParams parameter instead, which allows you to override some/all of the emission properties", false)]
	public void Emit(Vector3 position, Vector3 velocity, float size, float lifetime, Color32 color)
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x69C1BA0", Offset = "0x69C0BA0", VA = "0x69C1BA0")]
	[Obsolete("Emit with a single particle structure is deprecated. Pass a ParticleSystem.EmitParams parameter instead, which allows you to override some/all of the emission properties", false)]
	public void Emit(Particle particle)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x69C2160", Offset = "0x69C1160", VA = "0x69C2160")]
	[UnityEngine.Bindings.FreeFunction(Name = "ParticleSystemScriptBindings::SetParticles", HasExplicitThis = true, ThrowsException = true)]
	public void SetParticles([Out] Particle[] particles, int size, int offset)
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x69C2330", Offset = "0x69C1330", VA = "0x69C2330")]
	public void SetParticles([Out] Particle[] particles, int size)
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x69C2340", Offset = "0x69C1340", VA = "0x69C2340")]
	[UnityEngine.Bindings.FreeFunction(Name = "ParticleSystemScriptBindings::GetParticles", HasExplicitThis = true, ThrowsException = true)]
	public int GetParticles([Out][UnityEngine.Bindings.NotNull] Particle[] particles, int size, int offset)
	{
		return default(int);
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x69C2550", Offset = "0x69C1550", VA = "0x69C2550")]
	public int GetParticles([Out] Particle[] particles, int size)
	{
		return default(int);
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x69C2560", Offset = "0x69C1560", VA = "0x69C2560")]
	public int GetParticles([Out] Particle[] particles)
	{
		return default(int);
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x69C2570", Offset = "0x69C1570", VA = "0x69C2570")]
	[UnityEngine.Bindings.FreeFunction(Name = "ParticleSystemScriptBindings::Play", HasExplicitThis = true)]
	public void Play([DefaultValue("true")] bool withChildren)
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x69C2630", Offset = "0x69C1630", VA = "0x69C2630")]
	public void Play()
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x69C26B0", Offset = "0x69C16B0", VA = "0x69C26B0")]
	[UnityEngine.Bindings.FreeFunction(Name = "ParticleSystemScriptBindings::Stop", HasExplicitThis = true)]
	public void Stop([DefaultValue("true")] bool withChildren, [DefaultValue("ParticleSystemStopBehavior.StopEmitting")] ParticleSystemStopBehavior stopBehavior)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x69C2780", Offset = "0x69C1780", VA = "0x69C2780")]
	public void Stop([DefaultValue("true")] bool withChildren)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x69C2810", Offset = "0x69C1810", VA = "0x69C2810")]
	public void Stop()
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x69C28A0", Offset = "0x69C18A0", VA = "0x69C28A0")]
	[UnityEngine.Bindings.FreeFunction(Name = "ParticleSystemScriptBindings::Clear", HasExplicitThis = true)]
	public void Clear([DefaultValue("true")] bool withChildren)
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x69C2960", Offset = "0x69C1960", VA = "0x69C2960")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x69C29E0", Offset = "0x69C19E0", VA = "0x69C29E0")]
	[UnityEngine.Bindings.FreeFunction(Name = "ParticleSystemScriptBindings::IsAlive", HasExplicitThis = true)]
	public bool IsAlive([DefaultValue("true")] bool withChildren)
	{
		return default(bool);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x69C2AA0", Offset = "0x69C1AA0", VA = "0x69C2AA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public void Emit(int count)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x69C2C10", Offset = "0x69C1C10", VA = "0x69C2C10")]
	[UnityEngine.Bindings.NativeName("SyncJobs()->Emit")]
	private void Emit_Internal(int count)
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x69C2CD0", Offset = "0x69C1CD0", VA = "0x69C2CD0")]
	public void Emit(EmitParams emitParams, int count)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x69C2DF0", Offset = "0x69C1DF0", VA = "0x69C2DF0")]
	[UnityEngine.Bindings.NativeName("SyncJobs()->EmitParticlesExternal")]
	private void EmitWithParams_Internal(EmitParams emitParams, int count)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x69C1B20", Offset = "0x69C0B20", VA = "0x69C1B20")]
	[UnityEngine.Bindings.NativeName("SyncJobs()->EmitParticleExternal")]
	private void EmitOld_Internal(ref Particle particle)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x69C3090", Offset = "0x69C2090", VA = "0x69C3090")]
	public ParticleSystem()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x69C1FD0", Offset = "0x69C0FD0", VA = "0x69C1FD0")]
	private static extern bool get_isPlaying_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x69C2080", Offset = "0x69C1080", VA = "0x69C2080")]
	private static extern bool get_isEmitting_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000026")]
	[Address(RVA = "0x69C2130", Offset = "0x69C1130", VA = "0x69C2130")]
	private static extern int get_particleCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x69C22E0", Offset = "0x69C12E0", VA = "0x69C22E0")]
	private static extern void SetParticles_Injected(IntPtr _unity_self, out UnityEngine.Bindings.BlittableArrayWrapper particles, int size, int offset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000028")]
	[Address(RVA = "0x69C2500", Offset = "0x69C1500", VA = "0x69C2500")]
	private static extern int GetParticles_Injected(IntPtr _unity_self, out UnityEngine.Bindings.BlittableArrayWrapper particles, int size, int offset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x69C25F0", Offset = "0x69C15F0", VA = "0x69C25F0")]
	private static extern void Play_Injected(IntPtr _unity_self, [DefaultValue("true")] bool withChildren);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002A")]
	[Address(RVA = "0x69C2740", Offset = "0x69C1740", VA = "0x69C2740")]
	private static extern void Stop_Injected(IntPtr _unity_self, [DefaultValue("true")] bool withChildren, [DefaultValue("ParticleSystemStopBehavior.StopEmitting")] ParticleSystemStopBehavior stopBehavior);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x69C2920", Offset = "0x69C1920", VA = "0x69C2920")]
	private static extern void Clear_Injected(IntPtr _unity_self, [DefaultValue("true")] bool withChildren);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002C")]
	[Address(RVA = "0x69C2A60", Offset = "0x69C1A60", VA = "0x69C2A60")]
	private static extern bool IsAlive_Injected(IntPtr _unity_self, [DefaultValue("true")] bool withChildren);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002D")]
	[Address(RVA = "0x69C2C90", Offset = "0x69C1C90", VA = "0x69C2C90")]
	private static extern void Emit_Internal_Injected(IntPtr _unity_self, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002E")]
	[Address(RVA = "0x69C2E80", Offset = "0x69C1E80", VA = "0x69C2E80")]
	private static extern void EmitWithParams_Internal_Injected(IntPtr _unity_self, [In] ref EmitParams emitParams, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002F")]
	[Address(RVA = "0x69C2EC0", Offset = "0x69C1EC0", VA = "0x69C2EC0")]
	private static extern void EmitOld_Internal_Injected(IntPtr _unity_self, ref Particle particle);
}
