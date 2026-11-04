// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ParticleSystem
// Update status: CHANGED in this game update
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
[UnityEngine.Bindings.NativeHeader("Modules/ParticleSystem/ScriptBindings/ParticleSystemModulesScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/ParticleSystem/ParticleSystem.h")]
[UnityEngine.Bindings.NativeHeader("ParticleSystemScriptingClasses.h")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/ParticleSystem/ScriptBindings/ParticleSystemScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/ParticleSystem/ParticleSystemGeometryJob.h")]
[UnityEngine.Bindings.NativeHeader("Modules/ParticleSystem/ParticleSystem.h")]
[UnityEngine.Bindings.NativeHeader("ParticleSystemScriptingClasses.h")]
[UnityEngine.Bindings.NativeHeader("Modules/ParticleSystem/ScriptBindings/ParticleSystemScriptBindings.h")]
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
			[Address(RVA = "0x2FC7D00", Offset = "0x2FC6300", VA = "0x182FC7D00")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000010")]
		public extern bool loop
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000032")]
			[Address(RVA = "0x2FC7EB0", Offset = "0x2FC64B0", VA = "0x182FC7EB0")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000011")]
		public MinMaxCurve startLifetime
		{
			[Token(Token = "0x6000033")]
			[Address(RVA = "0x2FC8230", Offset = "0x2FC6830", VA = "0x182FC8230")]
			set
			{
			}
		}

		[Token(Token = "0x17000012")]
		[UnityEngine.Bindings.NativeName("StartLifetime")]
		private MinMaxCurveBlittable startLifetimeBlittable
		{
			[Token(Token = "0x6000034")]
			[Address(RVA = "0x2FC81E0", Offset = "0x2FC67E0", VA = "0x182FC81E0")]
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
			[Address(RVA = "0x2FC7A60", Offset = "0x2FC6060", VA = "0x182FC7A60")]
			get;
		}

		[Token(Token = "0x17000014")]
		public MinMaxCurve startSpeed
		{
			[Token(Token = "0x6000036")]
			[Address(RVA = "0x2FC7C70", Offset = "0x2FC6270", VA = "0x182FC7C70")]
			get
			{
				return default(MinMaxCurve);
			}
			[Token(Token = "0x6000037")]
			[Address(RVA = "0x2FC86F0", Offset = "0x2FC6CF0", VA = "0x182FC86F0")]
			set
			{
			}
		}

		[Token(Token = "0x17000015")]
		[UnityEngine.Bindings.NativeName("StartSpeed")]
		private MinMaxCurveBlittable startSpeedBlittable
		{
			[Token(Token = "0x6000038")]
			[Address(RVA = "0x2FC7C20", Offset = "0x2FC6220", VA = "0x182FC7C20")]
			get
			{
				return default(MinMaxCurveBlittable);
			}
			[Token(Token = "0x6000039")]
			[Address(RVA = "0x2FC8650", Offset = "0x2FC6C50", VA = "0x182FC8650")]
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
			[Address(RVA = "0x2FC86A0", Offset = "0x2FC6CA0", VA = "0x182FC86A0")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000017")]
		public MinMaxCurve startSize
		{
			[Token(Token = "0x600003B")]
			[Address(RVA = "0x2FC7B40", Offset = "0x2FC6140", VA = "0x182FC7B40")]
			get
			{
				return default(MinMaxCurve);
			}
			[Token(Token = "0x600003C")]
			[Address(RVA = "0x2FC8540", Offset = "0x2FC6B40", VA = "0x182FC8540")]
			set
			{
			}
		}

		[Token(Token = "0x17000018")]
		[UnityEngine.Bindings.NativeName("StartSizeX")]
		private MinMaxCurveBlittable startSizeBlittable
		{
			[Token(Token = "0x600003D")]
			[Address(RVA = "0x2FC7AF0", Offset = "0x2FC60F0", VA = "0x182FC7AF0")]
			get
			{
				return default(MinMaxCurveBlittable);
			}
			[Token(Token = "0x600003E")]
			[Address(RVA = "0x2FC84A0", Offset = "0x2FC6AA0", VA = "0x182FC84A0")]
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
			[Address(RVA = "0x2FC84F0", Offset = "0x2FC6AF0", VA = "0x182FC84F0")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x1700001A")]
		public MinMaxCurve startRotation
		{
			[Token(Token = "0x6000040")]
			[Address(RVA = "0x2FC8390", Offset = "0x2FC6990", VA = "0x182FC8390")]
			set
			{
			}
		}

		[Token(Token = "0x1700001B")]
		[UnityEngine.Bindings.NativeName("StartRotationZ")]
		private MinMaxCurveBlittable startRotationBlittable
		{
			[Token(Token = "0x6000041")]
			[Address(RVA = "0x2FC8340", Offset = "0x2FC6940", VA = "0x182FC8340")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x1700001C")]
		public MinMaxGradient startColor
		{
			[Token(Token = "0x6000042")]
			[Address(RVA = "0x2FC80B0", Offset = "0x2FC66B0", VA = "0x182FC80B0")]
			set
			{
			}
		}

		[Token(Token = "0x1700001D")]
		[UnityEngine.Bindings.NativeName("StartColor")]
		private MinMaxGradientBlittable startColorBlittable
		{
			[Token(Token = "0x6000043")]
			[Address(RVA = "0x2FC8060", Offset = "0x2FC6660", VA = "0x182FC8060")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x1700001E")]
		public MinMaxCurve gravityModifier
		{
			[Token(Token = "0x6000044")]
			[Address(RVA = "0x2FC7DF0", Offset = "0x2FC63F0", VA = "0x182FC7DF0")]
			set
			{
			}
		}

		[Token(Token = "0x1700001F")]
		[UnityEngine.Bindings.NativeName("GravityModifier")]
		private MinMaxCurveBlittable gravityModifierBlittable
		{
			[Token(Token = "0x6000045")]
			[Address(RVA = "0x2FC7DA0", Offset = "0x2FC63A0", VA = "0x182FC7DA0")]
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
			[Address(RVA = "0x2FC7FD0", Offset = "0x2FC65D0", VA = "0x182FC7FD0")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000021")]
		public extern ParticleSystemScalingMode scalingMode
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000047")]
			[Address(RVA = "0x2FC7F90", Offset = "0x2FC6590", VA = "0x182FC7F90")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000022")]
		public extern bool playOnAwake
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000048")]
			[Address(RVA = "0x2FC7F40", Offset = "0x2FC6540", VA = "0x182FC7F40")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000023")]
		public extern int maxParticles
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000049")]
			[Address(RVA = "0x2FC7F00", Offset = "0x2FC6500", VA = "0x182FC7F00")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000024")]
		public extern ParticleSystemStopAction stopAction
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x600004A")]
			[Address(RVA = "0x2FC87B0", Offset = "0x2FC6DB0", VA = "0x182FC87B0")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x6000030")]
		[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
		internal MainModule(ParticleSystem particleSystem)
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x2FC8190", Offset = "0x2FC6790", VA = "0x182FC8190")]
		private static extern void set_startLifetimeBlittable_Injected(ref MainModule _unity_self, [In] ref MinMaxCurveBlittable value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x2FC7BD0", Offset = "0x2FC61D0", VA = "0x182FC7BD0")]
		private static extern void get_startSpeedBlittable_Injected(ref MainModule _unity_self, out MinMaxCurveBlittable ret);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x2FC8600", Offset = "0x2FC6C00", VA = "0x182FC8600")]
		private static extern void set_startSpeedBlittable_Injected(ref MainModule _unity_self, [In] ref MinMaxCurveBlittable value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x2FC7AA0", Offset = "0x2FC60A0", VA = "0x182FC7AA0")]
		private static extern void get_startSizeBlittable_Injected(ref MainModule _unity_self, out MinMaxCurveBlittable ret);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x2FC8450", Offset = "0x2FC6A50", VA = "0x182FC8450")]
		private static extern void set_startSizeBlittable_Injected(ref MainModule _unity_self, [In] ref MinMaxCurveBlittable value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x2FC82F0", Offset = "0x2FC68F0", VA = "0x182FC82F0")]
		private static extern void set_startRotationBlittable_Injected(ref MainModule _unity_self, [In] ref MinMaxCurveBlittable value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x2FC8010", Offset = "0x2FC6610", VA = "0x182FC8010")]
		private static extern void set_startColorBlittable_Injected(ref MainModule _unity_self, [In] ref MinMaxGradientBlittable value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x2FC7D50", Offset = "0x2FC6350", VA = "0x182FC7D50")]
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
			[Address(RVA = "0x2FC75E0", Offset = "0x2FC5BE0", VA = "0x182FC75E0")]
			get;
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000055")]
			[Address(RVA = "0x2FC7660", Offset = "0x2FC5C60", VA = "0x182FC7660")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000026")]
		public MinMaxCurve rateOverTime
		{
			[Token(Token = "0x6000056")]
			[Address(RVA = "0x2FC77A0", Offset = "0x2FC5DA0", VA = "0x182FC77A0")]
			set
			{
			}
		}

		[Token(Token = "0x17000027")]
		[UnityEngine.Bindings.NativeName("RateOverTime")]
		private MinMaxCurveBlittable rateOverTimeBlittable
		{
			[Token(Token = "0x6000057")]
			[Address(RVA = "0x2FC7700", Offset = "0x2FC5D00", VA = "0x182FC7700")]
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
			[Address(RVA = "0x2FC7750", Offset = "0x2FC5D50", VA = "0x182FC7750")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000029")]
		public extern int burstCount
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x600005C")]
			[Address(RVA = "0x2FC7620", Offset = "0x2FC5C20", VA = "0x182FC7620")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x6000053")]
		[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
		internal EmissionModule(ParticleSystem particleSystem)
		{
		}

		[Token(Token = "0x6000059")]
		[Address(RVA = "0x2FC7500", Offset = "0x2FC5B00", VA = "0x182FC7500")]
		public void SetBursts(Burst[] bursts)
		{
		}

		[Token(Token = "0x600005A")]
		[Address(RVA = "0x2FC7440", Offset = "0x2FC5A40", VA = "0x182FC7440")]
		public void SetBursts(Burst[] bursts, int size)
		{
		}

		[Token(Token = "0x600005B")]
		[Address(RVA = "0x2FC73F0", Offset = "0x2FC59F0", VA = "0x182FC73F0")]
		[UnityEngine.Bindings.NativeThrows]
		public void SetBurst(int index, Burst burst)
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x2FC76B0", Offset = "0x2FC5CB0", VA = "0x182FC76B0")]
		private static extern void set_rateOverTimeBlittable_Injected(ref EmissionModule _unity_self, [In] ref MinMaxCurveBlittable value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x2FC73A0", Offset = "0x2FC59A0", VA = "0x182FC73A0")]
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
			[Address(RVA = "0x2FCAFF0", Offset = "0x2FC95F0", VA = "0x182FCAFF0")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x1700002B")]
		public extern ParticleSystemShapeType shapeType
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000061")]
			[Address(RVA = "0x2FCB3D0", Offset = "0x2FC99D0", VA = "0x182FCB3D0")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x1700002C")]
		public extern float radius
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000062")]
			[Address(RVA = "0x2FCB240", Offset = "0x2FC9840", VA = "0x182FCB240")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x1700002D")]
		public extern float radiusThickness
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000063")]
			[Address(RVA = "0x2FCB1F0", Offset = "0x2FC97F0", VA = "0x182FCB1F0")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x1700002E")]
		public extern ParticleSystemMeshShapeType meshShapeType
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000064")]
			[Address(RVA = "0x2FCB040", Offset = "0x2FC9640", VA = "0x182FCB040")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x1700002F")]
		public Mesh mesh
		{
			[Token(Token = "0x6000065")]
			[Address(RVA = "0x2FCB0D0", Offset = "0x2FC96D0", VA = "0x182FCB0D0")]
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
			[Address(RVA = "0x2FCB460", Offset = "0x2FC9A60", VA = "0x182FCB460")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000031")]
		public extern bool useMeshColors
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000067")]
			[Address(RVA = "0x2FCB410", Offset = "0x2FC9A10", VA = "0x182FCB410")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000032")]
		public Vector3 position
		{
			[Token(Token = "0x6000068")]
			[Address(RVA = "0x2FCB1A0", Offset = "0x2FC97A0", VA = "0x182FCB1A0")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x17000033")]
		public Vector3 rotation
		{
			[Token(Token = "0x6000069")]
			[Address(RVA = "0x2FCB2E0", Offset = "0x2FC98E0", VA = "0x182FCB2E0")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x17000034")]
		public Vector3 scale
		{
			[Token(Token = "0x600006A")]
			[Address(RVA = "0x2FCB380", Offset = "0x2FC9980", VA = "0x182FCB380")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x600005F")]
		[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
		internal ShapeModule(ParticleSystem particleSystem)
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600006B")]
		[Address(RVA = "0x2FCB080", Offset = "0x2FC9680", VA = "0x182FCB080")]
		private static extern void set_mesh_Injected(ref ShapeModule _unity_self, IntPtr value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600006C")]
		[Address(RVA = "0x2FCB150", Offset = "0x2FC9750", VA = "0x182FCB150")]
		private static extern void set_position_Injected(ref ShapeModule _unity_self, [In] ref Vector3 value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600006D")]
		[Address(RVA = "0x2FCB290", Offset = "0x2FC9890", VA = "0x182FCB290")]
		private static extern void set_rotation_Injected(ref ShapeModule _unity_self, [In] ref Vector3 value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600006E")]
		[Address(RVA = "0x2FCB330", Offset = "0x2FC9930", VA = "0x182FCB330")]
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
			[Address(RVA = "0x12BF1F0", Offset = "0x12BD7F0", VA = "0x1812BF1F0")]
			set
			{
			}
		}

		[Token(Token = "0x17000036")]
		public Vector3 position
		{
			[Token(Token = "0x6000070")]
			[Address(RVA = "0x2B889E0", Offset = "0x2B86FE0", VA = "0x182B889E0")]
			set
			{
			}
		}

		[Token(Token = "0x17000037")]
		public Vector3 velocity
		{
			[Token(Token = "0x6000071")]
			[Address(RVA = "0x2EBC190", Offset = "0x2EBA790", VA = "0x182EBC190")]
			set
			{
			}
		}

		[Token(Token = "0x17000038")]
		public float remainingLifetime
		{
			[Token(Token = "0x6000072")]
			[Address(RVA = "0x2FCADC0", Offset = "0x2FC93C0", VA = "0x182FCADC0")]
			get
			{
				return default(float);
			}
			[Token(Token = "0x6000073")]
			[Address(RVA = "0x12BF1F0", Offset = "0x12BD7F0", VA = "0x1812BF1F0")]
			set
			{
			}
		}

		[Token(Token = "0x17000039")]
		public float startLifetime
		{
			[Token(Token = "0x6000074")]
			[Address(RVA = "0x2F5FA60", Offset = "0x2F5E060", VA = "0x182F5FA60")]
			set
			{
			}
		}

		[Token(Token = "0x1700003A")]
		public Color32 startColor
		{
			[Token(Token = "0x6000075")]
			[Address(RVA = "0x1B6A390", Offset = "0x1B68990", VA = "0x181B6A390")]
			set
			{
			}
		}

		[Token(Token = "0x1700003B")]
		public uint randomSeed
		{
			[Token(Token = "0x6000076")]
			[Address(RVA = "0xCDEA50", Offset = "0xCDD050", VA = "0x180CDEA50")]
			set
			{
			}
		}

		[Token(Token = "0x1700003C")]
		public float startSize
		{
			[Token(Token = "0x6000077")]
			[Address(RVA = "0x2FCAE30", Offset = "0x2FC9430", VA = "0x182FCAE30")]
			set
			{
			}
		}

		[Token(Token = "0x1700003D")]
		public Vector3 rotation3D
		{
			[Token(Token = "0x6000078")]
			[Address(RVA = "0x2FCAE00", Offset = "0x2FC9400", VA = "0x182FCAE00")]
			set
			{
			}
		}

		[Token(Token = "0x1700003E")]
		public Vector3 angularVelocity3D
		{
			[Token(Token = "0x6000079")]
			[Address(RVA = "0x2FCADD0", Offset = "0x2FC93D0", VA = "0x182FCADD0")]
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
		[Address(RVA = "0x2FC70E0", Offset = "0x2FC56E0", VA = "0x182FC70E0")]
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
			[Address(RVA = "0xD18930", Offset = "0xD16F30", VA = "0x180D18930")]
			get
			{
				return default(ParticleSystemCurveMode);
			}
		}

		[Token(Token = "0x17000040")]
		public float constantMax
		{
			[Token(Token = "0x600007F")]
			[Address(RVA = "0x2E8CC00", Offset = "0x2E8B200", VA = "0x182E8CC00")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x17000041")]
		public float constantMin
		{
			[Token(Token = "0x6000080")]
			[Address(RVA = "0x2E82BD0", Offset = "0x2E811D0", VA = "0x182E82BD0")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x17000042")]
		public float constant
		{
			[Token(Token = "0x6000081")]
			[Address(RVA = "0x2E8CC00", Offset = "0x2E8B200", VA = "0x182E8CC00")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x600007B")]
		[Address(RVA = "0x2FC8BB0", Offset = "0x2FC71B0", VA = "0x182FC8BB0")]
		public MinMaxCurve(float constant)
		{
		}

		[Token(Token = "0x600007C")]
		[Address(RVA = "0x2FC8C00", Offset = "0x2FC7200", VA = "0x182FC8C00")]
		public MinMaxCurve(float multiplier, AnimationCurve curve)
		{
		}

		[Token(Token = "0x600007D")]
		[Address(RVA = "0x2FC8B50", Offset = "0x2FC7150", VA = "0x182FC8B50")]
		public MinMaxCurve(float min, float max)
		{
		}

		[Token(Token = "0x6000082")]
		[Address(RVA = "0x2FC8C60", Offset = "0x2FC7260", VA = "0x182FC8C60")]
		public static implicit operator MinMaxCurve(float constant)
		{
			return default(MinMaxCurve);
		}
	}

	[Serializable]
	[Token(Token = "0x2000009")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[UnityEngine.Bindings.NativeType(UnityEngine.Bindings.CodegenOptions.Custom, "MonoMinMaxCurve", Header = "Runtime/Scripting/ScriptingCommonStructDefinitions.h")]
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
		[Address(RVA = "0x2FC8A40", Offset = "0x2FC7040", VA = "0x182FC8A40")]
		public static implicit operator MinMaxCurve(MinMaxCurveBlittable minMaxCurveBlittable)
		{
			return default(MinMaxCurve);
		}

		[Token(Token = "0x6000084")]
		[Address(RVA = "0x2FC89B0", Offset = "0x2FC6FB0", VA = "0x182FC89B0")]
		public static implicit operator MinMaxCurveBlittable(MinMaxCurve minMaxCurve)
		{
			return default(MinMaxCurveBlittable);
		}

		[Token(Token = "0x6000085")]
		[Address(RVA = "0x2FC87F0", Offset = "0x2FC6DF0", VA = "0x182FC87F0")]
		internal static MinMaxCurveBlittable FromMixMaxCurve(in MinMaxCurve minMaxCurve)
		{
			return default(MinMaxCurveBlittable);
		}

		[Token(Token = "0x6000086")]
		[Address(RVA = "0x2FC8880", Offset = "0x2FC6E80", VA = "0x182FC8880")]
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
		[Address(RVA = "0x2FC8E40", Offset = "0x2FC7440", VA = "0x182FC8E40")]
		public MinMaxGradient(Color color)
		{
		}

		[Token(Token = "0x6000088")]
		[Address(RVA = "0x2FC8DD0", Offset = "0x2FC73D0", VA = "0x182FC8DD0")]
		public MinMaxGradient(Gradient gradient)
		{
		}

		[Token(Token = "0x6000089")]
		[Address(RVA = "0x2FC8EA0", Offset = "0x2FC74A0", VA = "0x182FC8EA0")]
		public MinMaxGradient(Color min, Color max)
		{
		}

		[Token(Token = "0x600008A")]
		[Address(RVA = "0x2FC8FC0", Offset = "0x2FC75C0", VA = "0x182FC8FC0")]
		public static implicit operator MinMaxGradient(Color color)
		{
			return default(MinMaxGradient);
		}

		[Token(Token = "0x600008B")]
		[Address(RVA = "0x2FC8F10", Offset = "0x2FC7510", VA = "0x182FC8F10")]
		public static implicit operator MinMaxGradient(Gradient gradient)
		{
			return default(MinMaxGradient);
		}
	}

	[Serializable]
	[Token(Token = "0x200000B")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[UnityEngine.Bindings.NativeType(UnityEngine.Bindings.CodegenOptions.Custom, "MonoMinMaxGradient", Header = "Runtime/Scripting/ScriptingCommonStructDefinitions.h")]
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
		[Address(RVA = "0x2FC8D60", Offset = "0x2FC7360", VA = "0x182FC8D60")]
		public static implicit operator MinMaxGradientBlittable(MinMaxGradient minMaxGradient)
		{
			return default(MinMaxGradientBlittable);
		}

		[Token(Token = "0x600008D")]
		[Address(RVA = "0x2FC8CF0", Offset = "0x2FC72F0", VA = "0x182FC8CF0")]
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
			[Address(RVA = "0x2FCB660", Offset = "0x2FC9C60", VA = "0x182FCB660")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000044")]
		public MinMaxCurve x
		{
			[Token(Token = "0x6000090")]
			[Address(RVA = "0x2FCB8F0", Offset = "0x2FC9EF0", VA = "0x182FCB8F0")]
			set
			{
			}
		}

		[Token(Token = "0x17000045")]
		[UnityEngine.Bindings.NativeName("X")]
		private MinMaxCurveBlittable xBlittable
		{
			[Token(Token = "0x6000091")]
			[Address(RVA = "0x2FCB8A0", Offset = "0x2FC9EA0", VA = "0x182FCB8A0")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x17000046")]
		public MinMaxCurve y
		{
			[Token(Token = "0x6000092")]
			[Address(RVA = "0x2FCBA50", Offset = "0x2FCA050", VA = "0x182FCBA50")]
			set
			{
			}
		}

		[Token(Token = "0x17000047")]
		[UnityEngine.Bindings.NativeName("Y")]
		private MinMaxCurveBlittable yBlittable
		{
			[Token(Token = "0x6000093")]
			[Address(RVA = "0x2FCBA00", Offset = "0x2FCA000", VA = "0x182FCBA00")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x17000048")]
		public MinMaxCurve z
		{
			[Token(Token = "0x6000094")]
			[Address(RVA = "0x2FCBBB0", Offset = "0x2FCA1B0", VA = "0x182FCBBB0")]
			set
			{
			}
		}

		[Token(Token = "0x17000049")]
		[UnityEngine.Bindings.NativeName("Z")]
		private MinMaxCurveBlittable zBlittable
		{
			[Token(Token = "0x6000095")]
			[Address(RVA = "0x2FCBB60", Offset = "0x2FCA160", VA = "0x182FCBB60")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x1700004A")]
		public MinMaxCurve radial
		{
			[Token(Token = "0x6000096")]
			[Address(RVA = "0x2FCB750", Offset = "0x2FC9D50", VA = "0x182FCB750")]
			set
			{
			}
		}

		[Token(Token = "0x1700004B")]
		[UnityEngine.Bindings.NativeName("Radial")]
		private MinMaxCurveBlittable radialBlittable
		{
			[Token(Token = "0x6000097")]
			[Address(RVA = "0x2FCB700", Offset = "0x2FC9D00", VA = "0x182FCB700")]
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
			[Address(RVA = "0x2FCB810", Offset = "0x2FC9E10", VA = "0x182FCB810")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x600008E")]
		[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
		internal VelocityOverLifetimeModule(ParticleSystem particleSystem)
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000099")]
		[Address(RVA = "0x2FCB850", Offset = "0x2FC9E50", VA = "0x182FCB850")]
		private static extern void set_xBlittable_Injected(ref VelocityOverLifetimeModule _unity_self, [In] ref MinMaxCurveBlittable value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600009A")]
		[Address(RVA = "0x2FCB9B0", Offset = "0x2FC9FB0", VA = "0x182FCB9B0")]
		private static extern void set_yBlittable_Injected(ref VelocityOverLifetimeModule _unity_self, [In] ref MinMaxCurveBlittable value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600009B")]
		[Address(RVA = "0x2FCBB10", Offset = "0x2FCA110", VA = "0x182FCBB10")]
		private static extern void set_zBlittable_Injected(ref VelocityOverLifetimeModule _unity_self, [In] ref MinMaxCurveBlittable value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600009C")]
		[Address(RVA = "0x2FCB6B0", Offset = "0x2FC9CB0", VA = "0x182FCB6B0")]
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
			[Address(RVA = "0x2FC78B0", Offset = "0x2FC5EB0", VA = "0x182FC78B0")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x1700004E")]
		public MinMaxCurve limit
		{
			[Token(Token = "0x600009F")]
			[Address(RVA = "0x2FC79A0", Offset = "0x2FC5FA0", VA = "0x182FC79A0")]
			set
			{
			}
		}

		[Token(Token = "0x1700004F")]
		[UnityEngine.Bindings.NativeName("Magnitude")]
		private MinMaxCurveBlittable limitBlittable
		{
			[Token(Token = "0x60000A0")]
			[Address(RVA = "0x2FC7950", Offset = "0x2FC5F50", VA = "0x182FC7950")]
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
			[Address(RVA = "0x2FC7860", Offset = "0x2FC5E60", VA = "0x182FC7860")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x600009D")]
		[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
		internal LimitVelocityOverLifetimeModule(ParticleSystem particleSystem)
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x2FC7900", Offset = "0x2FC5F00", VA = "0x182FC7900")]
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
			[Address(RVA = "0x2FC7350", Offset = "0x2FC5950", VA = "0x182FC7350")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000052")]
		public MinMaxGradient color
		{
			[Token(Token = "0x60000A5")]
			[Address(RVA = "0x2FC7270", Offset = "0x2FC5870", VA = "0x182FC7270")]
			set
			{
			}
		}

		[Token(Token = "0x17000053")]
		[UnityEngine.Bindings.NativeName("Color")]
		private MinMaxGradientBlittable colorBlittable
		{
			[Token(Token = "0x60000A6")]
			[Address(RVA = "0x2FC7220", Offset = "0x2FC5820", VA = "0x182FC7220")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x60000A3")]
		[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
		internal ColorOverLifetimeModule(ParticleSystem particleSystem)
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60000A7")]
		[Address(RVA = "0x2FC71D0", Offset = "0x2FC57D0", VA = "0x182FC71D0")]
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
			[Address(RVA = "0x2FCB4B0", Offset = "0x2FC9AB0", VA = "0x182FCB4B0")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000055")]
		public MinMaxCurve size
		{
			[Token(Token = "0x60000AA")]
			[Address(RVA = "0x2FCB5A0", Offset = "0x2FC9BA0", VA = "0x182FCB5A0")]
			set
			{
			}
		}

		[Token(Token = "0x17000056")]
		[UnityEngine.Bindings.NativeName("X")]
		private MinMaxCurveBlittable sizeBlittable
		{
			[Token(Token = "0x60000AB")]
			[Address(RVA = "0x2FCB550", Offset = "0x2FC9B50", VA = "0x182FCB550")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x60000A8")]
		[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
		internal SizeOverLifetimeModule(ParticleSystem particleSystem)
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x2FCB500", Offset = "0x2FC9B00", VA = "0x182FCB500")]
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
			[Address(RVA = "0x2FCAE40", Offset = "0x2FC9440", VA = "0x182FCAE40")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000058")]
		public MinMaxCurve z
		{
			[Token(Token = "0x60000AF")]
			[Address(RVA = "0x2FCAF30", Offset = "0x2FC9530", VA = "0x182FCAF30")]
			set
			{
			}
		}

		[Token(Token = "0x17000059")]
		[UnityEngine.Bindings.NativeName("Z")]
		private MinMaxCurveBlittable zBlittable
		{
			[Token(Token = "0x60000B0")]
			[Address(RVA = "0x2FCAEE0", Offset = "0x2FC94E0", VA = "0x182FCAEE0")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x60000AD")]
		[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
		internal RotationOverLifetimeModule(ParticleSystem particleSystem)
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x2FCAE90", Offset = "0x2FC9490", VA = "0x182FCAE90")]
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
			[Address(RVA = "0x2FC90D0", Offset = "0x2FC76D0", VA = "0x182FC90D0")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x1700005B")]
		public MinMaxCurve strength
		{
			[Token(Token = "0x60000B4")]
			[Address(RVA = "0x2FC93B0", Offset = "0x2FC79B0", VA = "0x182FC93B0")]
			set
			{
			}
		}

		[Token(Token = "0x1700005C")]
		[UnityEngine.Bindings.NativeName("StrengthX")]
		private MinMaxCurveBlittable strengthBlittable
		{
			[Token(Token = "0x60000B5")]
			[Address(RVA = "0x2FC9360", Offset = "0x2FC7960", VA = "0x182FC9360")]
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
			[Address(RVA = "0x2FC9120", Offset = "0x2FC7720", VA = "0x182FC9120")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x1700005E")]
		public extern bool damping
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x60000B7")]
			[Address(RVA = "0x2FC9080", Offset = "0x2FC7680", VA = "0x182FC9080")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x1700005F")]
		public extern int octaveCount
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x60000B8")]
			[Address(RVA = "0x2FC9170", Offset = "0x2FC7770", VA = "0x182FC9170")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x17000060")]
		public MinMaxCurve scrollSpeed
		{
			[Token(Token = "0x60000B9")]
			[Address(RVA = "0x2FC9250", Offset = "0x2FC7850", VA = "0x182FC9250")]
			set
			{
			}
		}

		[Token(Token = "0x17000061")]
		[UnityEngine.Bindings.NativeName("ScrollSpeed")]
		private MinMaxCurveBlittable scrollSpeedBlittable
		{
			[Token(Token = "0x60000BA")]
			[Address(RVA = "0x2FC9200", Offset = "0x2FC7800", VA = "0x182FC9200")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x60000B2")]
		[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
		internal NoiseModule(ParticleSystem particleSystem)
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60000BB")]
		[Address(RVA = "0x2FC9310", Offset = "0x2FC7910", VA = "0x182FC9310")]
		private static extern void set_strengthBlittable_Injected(ref NoiseModule _unity_self, [In] ref MinMaxCurveBlittable value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60000BC")]
		[Address(RVA = "0x2FC91B0", Offset = "0x2FC77B0", VA = "0x182FC91B0")]
		private static extern void set_scrollSpeedBlittable_Injected(ref NoiseModule _unity_self, [In] ref MinMaxCurveBlittable value);
	}

	[Token(Token = "0x4000001")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<ParticleSystem, EmitParams, int, bool> onEmit;

	[Token(Token = "0x17000001")]
	[Obsolete("startColor property is deprecated. Use main.startColor instead.", false)]
	public Color startColor
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x2FCAC80", Offset = "0x2FC9280", VA = "0x182FCAC80")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	[Obsolete("startLifetime property is deprecated. Use main.startLifetime or main.startLifetimeMultiplier instead.", false)]
	public float startLifetime
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x2FCAC20", Offset = "0x2FC9220", VA = "0x182FCAC20")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000003")]
	public bool isPlaying
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x2FCAAE0", Offset = "0x2FC90E0", VA = "0x182FCAAE0")]
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
		[Address(RVA = "0x2FCAA20", Offset = "0x2FC9020", VA = "0x182FCAA20")]
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
		[Address(RVA = "0x2FCABA0", Offset = "0x2FC91A0", VA = "0x182FCABA0")]
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
		[Address(RVA = "0x1BB49C0", Offset = "0x1BB2FC0", VA = "0x181BB49C0")]
		get
		{
			return default(MainModule);
		}
	}

	[Token(Token = "0x17000007")]
	public EmissionModule emission
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x1BB49C0", Offset = "0x1BB2FC0", VA = "0x181BB49C0")]
		get
		{
			return default(EmissionModule);
		}
	}

	[Token(Token = "0x17000008")]
	public ShapeModule shape
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x1BB49C0", Offset = "0x1BB2FC0", VA = "0x181BB49C0")]
		get
		{
			return default(ShapeModule);
		}
	}

	[Token(Token = "0x17000009")]
	public VelocityOverLifetimeModule velocityOverLifetime
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x1BB49C0", Offset = "0x1BB2FC0", VA = "0x181BB49C0")]
		get
		{
			return default(VelocityOverLifetimeModule);
		}
	}

	[Token(Token = "0x1700000A")]
	public LimitVelocityOverLifetimeModule limitVelocityOverLifetime
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x1BB49C0", Offset = "0x1BB2FC0", VA = "0x181BB49C0")]
		get
		{
			return default(LimitVelocityOverLifetimeModule);
		}
	}

	[Token(Token = "0x1700000B")]
	public ColorOverLifetimeModule colorOverLifetime
	{
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x1BB49C0", Offset = "0x1BB2FC0", VA = "0x181BB49C0")]
		get
		{
			return default(ColorOverLifetimeModule);
		}
	}

	[Token(Token = "0x1700000C")]
	public SizeOverLifetimeModule sizeOverLifetime
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x1BB49C0", Offset = "0x1BB2FC0", VA = "0x181BB49C0")]
		get
		{
			return default(SizeOverLifetimeModule);
		}
	}

	[Token(Token = "0x1700000D")]
	public RotationOverLifetimeModule rotationOverLifetime
	{
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x1BB49C0", Offset = "0x1BB2FC0", VA = "0x181BB49C0")]
		get
		{
			return default(RotationOverLifetimeModule);
		}
	}

	[Token(Token = "0x1700000E")]
	public NoiseModule noise
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x1BB49C0", Offset = "0x1BB2FC0", VA = "0x181BB49C0")]
		get
		{
			return default(NoiseModule);
		}
	}

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x2FC9C10", Offset = "0x2FC8210", VA = "0x182FC9C10")]
	[Obsolete("Emit with specific parameters is deprecated. Pass a ParticleSystem.EmitParams parameter instead, which allows you to override some/all of the emission properties", false)]
	public void Emit(Vector3 position, Vector3 velocity, float size, float lifetime, Color32 color)
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x2FC9DE0", Offset = "0x2FC83E0", VA = "0x182FC9DE0")]
	[Obsolete("Emit with a single particle structure is deprecated. Pass a ParticleSystem.EmitParams parameter instead, which allows you to override some/all of the emission properties", false)]
	public void Emit(Particle particle)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x2FCA660", Offset = "0x2FC8C60", VA = "0x182FCA660")]
	[UnityEngine.Bindings.FreeFunction(Name = "ParticleSystemScriptBindings::SetParticles", HasExplicitThis = true, ThrowsException = true)]
	public void SetParticles([Out] Particle[] particles, int size, int offset)
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x2FCA640", Offset = "0x2FC8C40", VA = "0x182FCA640")]
	public void SetParticles([Out] Particle[] particles, int size)
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x2FCA1F0", Offset = "0x2FC87F0", VA = "0x182FCA1F0")]
	[UnityEngine.Bindings.FreeFunction(Name = "ParticleSystemScriptBindings::GetParticles", HasExplicitThis = true, ThrowsException = true)]
	public int GetParticles([Out][UnityEngine.Bindings.NotNull] Particle[] particles, int size, int offset)
	{
		return default(int);
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x2FCA390", Offset = "0x2FC8990", VA = "0x182FCA390")]
	public int GetParticles([Out] Particle[] particles, int size)
	{
		return default(int);
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x2FCA1D0", Offset = "0x2FC87D0", VA = "0x182FCA1D0")]
	public int GetParticles([Out] Particle[] particles)
	{
		return default(int);
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x2FCA4E0", Offset = "0x2FC8AE0", VA = "0x182FCA4E0")]
	[UnityEngine.Bindings.FreeFunction(Name = "ParticleSystemScriptBindings::Play", HasExplicitThis = true)]
	public void Play([DefaultValue("true")] bool withChildren)
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x2FCA570", Offset = "0x2FC8B70", VA = "0x182FCA570")]
	public void Play()
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x2FCA940", Offset = "0x2FC8F40", VA = "0x182FCA940")]
	[UnityEngine.Bindings.FreeFunction(Name = "ParticleSystemScriptBindings::Stop", HasExplicitThis = true)]
	public void Stop([DefaultValue("true")] bool withChildren, [DefaultValue("ParticleSystemStopBehavior.StopEmitting")] ParticleSystemStopBehavior stopBehavior)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x2FCA8B0", Offset = "0x2FC8EB0", VA = "0x182FCA8B0")]
	public void Stop([DefaultValue("true")] bool withChildren)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x2FCA820", Offset = "0x2FC8E20", VA = "0x182FCA820")]
	public void Stop()
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x2FC9850", Offset = "0x2FC7E50", VA = "0x182FC9850")]
	[UnityEngine.Bindings.FreeFunction(Name = "ParticleSystemScriptBindings::Clear", HasExplicitThis = true)]
	public void Clear([DefaultValue("true")] bool withChildren)
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x2FC98E0", Offset = "0x2FC7EE0", VA = "0x182FC98E0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x2FCA400", Offset = "0x2FC8A00", VA = "0x182FCA400")]
	[UnityEngine.Bindings.FreeFunction(Name = "ParticleSystemScriptBindings::IsAlive", HasExplicitThis = true)]
	public bool IsAlive([DefaultValue("true")] bool withChildren)
	{
		return default(bool);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x2FC9E70", Offset = "0x2FC8470", VA = "0x182FC9E70")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public void Emit(int count)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x2FC9B80", Offset = "0x2FC8180", VA = "0x182FC9B80")]
	[UnityEngine.Bindings.NativeName("SyncJobs()->Emit")]
	private void Emit_Internal(int count)
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x2FC9FA0", Offset = "0x2FC85A0", VA = "0x182FC9FA0")]
	public void Emit(EmitParams emitParams, int count)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x2FC9AA0", Offset = "0x2FC80A0", VA = "0x182FC9AA0")]
	[UnityEngine.Bindings.NativeName("SyncJobs()->EmitParticlesExternal")]
	private void EmitWithParams_Internal(EmitParams emitParams, int count)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x2FC99B0", Offset = "0x2FC7FB0", VA = "0x182FC99B0")]
	[UnityEngine.Bindings.NativeName("SyncJobs()->EmitParticleExternal")]
	private void EmitOld_Internal(ref Particle particle)
	{
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public ParticleSystem()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x2FCAAA0", Offset = "0x2FC90A0", VA = "0x182FCAAA0")]
	private static extern bool get_isPlaying_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x2FCA9E0", Offset = "0x2FC8FE0", VA = "0x182FCA9E0")]
	private static extern bool get_isEmitting_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000026")]
	[Address(RVA = "0x2FCAB60", Offset = "0x2FC9160", VA = "0x182FCAB60")]
	private static extern int get_particleCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x2FCA5F0", Offset = "0x2FC8BF0", VA = "0x182FCA5F0")]
	private static extern void SetParticles_Injected(IntPtr _unity_self, out UnityEngine.Bindings.BlittableArrayWrapper particles, int size, int offset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000028")]
	[Address(RVA = "0x2FCA180", Offset = "0x2FC8780", VA = "0x182FCA180")]
	private static extern int GetParticles_Injected(IntPtr _unity_self, out UnityEngine.Bindings.BlittableArrayWrapper particles, int size, int offset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x2FCA490", Offset = "0x2FC8A90", VA = "0x182FCA490")]
	private static extern void Play_Injected(IntPtr _unity_self, [DefaultValue("true")] bool withChildren);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002A")]
	[Address(RVA = "0x2FCA7C0", Offset = "0x2FC8DC0", VA = "0x182FCA7C0")]
	private static extern void Stop_Injected(IntPtr _unity_self, [DefaultValue("true")] bool withChildren, [DefaultValue("ParticleSystemStopBehavior.StopEmitting")] ParticleSystemStopBehavior stopBehavior);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x2FC9800", Offset = "0x2FC7E00", VA = "0x182FC9800")]
	private static extern void Clear_Injected(IntPtr _unity_self, [DefaultValue("true")] bool withChildren);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002C")]
	[Address(RVA = "0x2FCA3B0", Offset = "0x2FC89B0", VA = "0x182FCA3B0")]
	private static extern bool IsAlive_Injected(IntPtr _unity_self, [DefaultValue("true")] bool withChildren);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002D")]
	[Address(RVA = "0x2FC9B40", Offset = "0x2FC8140", VA = "0x182FC9B40")]
	private static extern void Emit_Internal_Injected(IntPtr _unity_self, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002E")]
	[Address(RVA = "0x2FC9A40", Offset = "0x2FC8040", VA = "0x182FC9A40")]
	private static extern void EmitWithParams_Internal_Injected(IntPtr _unity_self, [In] ref EmitParams emitParams, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002F")]
	[Address(RVA = "0x2FC9960", Offset = "0x2FC7F60", VA = "0x182FC9960")]
	private static extern void EmitOld_Internal_Injected(IntPtr _unity_self, ref Particle particle);
}
