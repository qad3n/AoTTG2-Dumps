// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ParticleSystem
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
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000002")]
[UnityEngine.Bindings.NativeHeader("Modules/ParticleSystem/ParticleSystem.h")]
[UnityEngine.Bindings.NativeHeader("Modules/ParticleSystem/ParticleSystemGeometryJob.h")]
[UnityEngine.Bindings.NativeHeader("Modules/ParticleSystem/ScriptBindings/ParticleSystemScriptBindings.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeHeader("ParticleSystemScriptingClasses.h")]
[UnityEngine.Bindings.NativeHeader("Modules/ParticleSystem/ParticleSystem.h")]
[UnityEngine.Bindings.NativeHeader("Modules/ParticleSystem/ScriptBindings/ParticleSystemScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/ParticleSystem/ScriptBindings/ParticleSystemModulesScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("ParticleSystemScriptingClasses.h")]
public sealed class ParticleSystem : Component
{
	[Token(Token = "0x2000003")]
	public struct MainModule
	{
		[Token(Token = "0x4000001")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal ParticleSystem m_ParticleSystem;

		[Token(Token = "0x17000007")]
		public extern float startLifetimeMultiplier
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000024")]
			[Address(RVA = "0x4E722B0", Offset = "0x4E722B0", VA = "0x4E722B0")]
			get;
		}

		[Token(Token = "0x17000008")]
		public MinMaxCurve startSpeed
		{
			[Token(Token = "0x6000025")]
			[Address(RVA = "0x4E73030", Offset = "0x4E73030", VA = "0x4E73030")]
			get
			{
				return default(MinMaxCurve);
			}
			[Token(Token = "0x6000026")]
			[Address(RVA = "0x4E730D0", Offset = "0x4E730D0", VA = "0x4E730D0")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x17000009")]
		public extern float startSpeedMultiplier
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000027")]
			[Address(RVA = "0x4E73150", Offset = "0x4E73150", VA = "0x4E73150")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x1700000A")]
		[UnityEngine.Bindings.NativeName("StartSizeX")]
		public MinMaxCurve startSize
		{
			[Token(Token = "0x6000028")]
			[Address(RVA = "0x4E731A0", Offset = "0x4E731A0", VA = "0x4E731A0")]
			get
			{
				return default(MinMaxCurve);
			}
			[Token(Token = "0x6000029")]
			[Address(RVA = "0x4E73240", Offset = "0x4E73240", VA = "0x4E73240")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x1700000B")]
		[UnityEngine.Bindings.NativeName("StartSizeXMultiplier")]
		public extern float startSizeMultiplier
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x600002A")]
			[Address(RVA = "0x4E732C0", Offset = "0x4E732C0", VA = "0x4E732C0")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x1700000C")]
		public MinMaxGradient startColor
		{
			[Token(Token = "0x600002B")]
			[Address(RVA = "0x4E72220", Offset = "0x4E72220", VA = "0x4E72220")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x6000023")]
		[Address(RVA = "0x4E72FF0", Offset = "0x4E72FF0", VA = "0x4E72FF0")]
		internal MainModule(ParticleSystem particleSystem)
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x4E73090", Offset = "0x4E73090", VA = "0x4E73090")]
		private static extern void get_startSpeed_Injected(ref MainModule _unity_self, out MinMaxCurve ret);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x4E73110", Offset = "0x4E73110", VA = "0x4E73110")]
		private static extern void set_startSpeed_Injected(ref MainModule _unity_self, [In] ref MinMaxCurve value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x4E73200", Offset = "0x4E73200", VA = "0x4E73200")]
		private static extern void get_startSize_Injected(ref MainModule _unity_self, out MinMaxCurve ret);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x4E73280", Offset = "0x4E73280", VA = "0x4E73280")]
		private static extern void set_startSize_Injected(ref MainModule _unity_self, [In] ref MinMaxCurve value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x4E73310", Offset = "0x4E73310", VA = "0x4E73310")]
		private static extern void set_startColor_Injected(ref MainModule _unity_self, [In] ref MinMaxGradient value);
	}

	[Token(Token = "0x2000004")]
	public struct EmissionModule
	{
		[Token(Token = "0x4000002")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal ParticleSystem m_ParticleSystem;

		[Token(Token = "0x1700000D")]
		public extern bool enabled
		{
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000032")]
			[Address(RVA = "0x4E73350", Offset = "0x4E73350", VA = "0x4E73350")]
			get;
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000033")]
			[Address(RVA = "0x4E73380", Offset = "0x4E73380", VA = "0x4E73380")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x1700000E")]
		public MinMaxCurve rateOverTime
		{
			[Token(Token = "0x6000034")]
			[Address(RVA = "0x4E733C0", Offset = "0x4E733C0", VA = "0x4E733C0")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x6000031")]
		[Address(RVA = "0x4E73020", Offset = "0x4E73020", VA = "0x4E73020")]
		internal EmissionModule(ParticleSystem particleSystem)
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x4E73400", Offset = "0x4E73400", VA = "0x4E73400")]
		private static extern void set_rateOverTime_Injected(ref EmissionModule _unity_self, [In] ref MinMaxCurve value);
	}

	[Token(Token = "0x2000005")]
	[UnityEngine.Scripting.RequiredByNativeCode("particleSystemParticle", Optional = true)]
	public struct Particle
	{
		[Token(Token = "0x4000003")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Vector3 m_Position;

		[Token(Token = "0x4000004")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		private Vector3 m_Velocity;

		[Token(Token = "0x4000005")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private Vector3 m_AnimatedVelocity;

		[Token(Token = "0x4000006")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		private Vector3 m_InitialVelocity;

		[Token(Token = "0x4000007")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private Vector3 m_AxisOfRotation;

		[Token(Token = "0x4000008")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
		private Vector3 m_Rotation;

		[Token(Token = "0x4000009")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private Vector3 m_AngularVelocity;

		[Token(Token = "0x400000A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
		private Vector3 m_StartSize;

		[Token(Token = "0x400000B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private Color32 m_StartColor;

		[Token(Token = "0x400000C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
		private uint m_RandomSeed;

		[Token(Token = "0x400000D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private uint m_ParentRandomSeed;

		[Token(Token = "0x400000E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
		private float m_Lifetime;

		[Token(Token = "0x400000F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private float m_StartLifetime;

		[Token(Token = "0x4000010")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
		private int m_MeshIndex;

		[Token(Token = "0x4000011")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
		private float m_EmitAccumulator0;

		[Token(Token = "0x4000012")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
		private float m_EmitAccumulator1;

		[Token(Token = "0x4000013")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private uint m_Flags;

		[Token(Token = "0x1700000F")]
		[Obsolete("Please use Particle.remainingLifetime instead. (UnityUpgradable) -> UnityEngine.ParticleSystem/Particle.remainingLifetime", false)]
		public float lifetime
		{
			[Token(Token = "0x6000036")]
			[Address(RVA = "0x4E71E60", Offset = "0x4E71E60", VA = "0x4E71E60")]
			set
			{
			}
		}

		[Token(Token = "0x17000010")]
		public Vector3 position
		{
			[Token(Token = "0x6000037")]
			[Address(RVA = "0x4E71E40", Offset = "0x4E71E40", VA = "0x4E71E40")]
			set
			{
			}
		}

		[Token(Token = "0x17000011")]
		public Vector3 velocity
		{
			[Token(Token = "0x6000038")]
			[Address(RVA = "0x4E71E50", Offset = "0x4E71E50", VA = "0x4E71E50")]
			set
			{
			}
		}

		[Token(Token = "0x17000012")]
		public float remainingLifetime
		{
			[Token(Token = "0x6000039")]
			[Address(RVA = "0x4E73450", Offset = "0x4E73450", VA = "0x4E73450")]
			get
			{
				return default(float);
			}
			[Token(Token = "0x600003A")]
			[Address(RVA = "0x4E73440", Offset = "0x4E73440", VA = "0x4E73440")]
			set
			{
			}
		}

		[Token(Token = "0x17000013")]
		public float startLifetime
		{
			[Token(Token = "0x600003B")]
			[Address(RVA = "0x4E71E70", Offset = "0x4E71E70", VA = "0x4E71E70")]
			set
			{
			}
		}

		[Token(Token = "0x17000014")]
		public Color32 startColor
		{
			[Token(Token = "0x600003C")]
			[Address(RVA = "0x4E71ED0", Offset = "0x4E71ED0", VA = "0x4E71ED0")]
			set
			{
			}
		}

		[Token(Token = "0x17000015")]
		public uint randomSeed
		{
			[Token(Token = "0x600003D")]
			[Address(RVA = "0x4E71EE0", Offset = "0x4E71EE0", VA = "0x4E71EE0")]
			set
			{
			}
		}

		[Token(Token = "0x17000016")]
		public float startSize
		{
			[Token(Token = "0x600003E")]
			[Address(RVA = "0x4E71E80", Offset = "0x4E71E80", VA = "0x4E71E80")]
			set
			{
			}
		}

		[Token(Token = "0x17000017")]
		public Vector3 rotation3D
		{
			[Token(Token = "0x600003F")]
			[Address(RVA = "0x4E71E90", Offset = "0x4E71E90", VA = "0x4E71E90")]
			set
			{
			}
		}

		[Token(Token = "0x17000018")]
		public Vector3 angularVelocity3D
		{
			[Token(Token = "0x6000040")]
			[Address(RVA = "0x4E71EB0", Offset = "0x4E71EB0", VA = "0x4E71EB0")]
			set
			{
			}
		}
	}

	[Serializable]
	[Token(Token = "0x2000006")]
	[UnityEngine.Bindings.NativeType(UnityEngine.Bindings.CodegenOptions.Custom, "MonoMinMaxCurve", Header = "Runtime/Scripting/ScriptingCommonStructDefinitions.h")]
	public struct MinMaxCurve
	{
		[Token(Token = "0x4000014")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		[SerializeField]
		private ParticleSystemCurveMode m_Mode;

		[Token(Token = "0x4000015")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		[SerializeField]
		private float m_CurveMultiplier;

		[Token(Token = "0x4000016")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		[SerializeField]
		private AnimationCurve m_CurveMin;

		[Token(Token = "0x4000017")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		[SerializeField]
		private AnimationCurve m_CurveMax;

		[Token(Token = "0x4000018")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		[SerializeField]
		private float m_ConstantMin;

		[Token(Token = "0x4000019")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		[SerializeField]
		private float m_ConstantMax;

		[Token(Token = "0x17000019")]
		public ParticleSystemCurveMode mode
		{
			[Token(Token = "0x6000043")]
			[Address(RVA = "0x4E73500", Offset = "0x4E73500", VA = "0x4E73500")]
			get
			{
				return default(ParticleSystemCurveMode);
			}
		}

		[Token(Token = "0x1700001A")]
		public float constantMax
		{
			[Token(Token = "0x6000044")]
			[Address(RVA = "0x4E73510", Offset = "0x4E73510", VA = "0x4E73510")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x1700001B")]
		public float constantMin
		{
			[Token(Token = "0x6000045")]
			[Address(RVA = "0x4E73520", Offset = "0x4E73520", VA = "0x4E73520")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x1700001C")]
		public float constant
		{
			[Token(Token = "0x6000046")]
			[Address(RVA = "0x4E73530", Offset = "0x4E73530", VA = "0x4E73530")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x6000041")]
		[Address(RVA = "0x4E73460", Offset = "0x4E73460", VA = "0x4E73460")]
		public MinMaxCurve(float constant)
		{
		}

		[Token(Token = "0x6000042")]
		[Address(RVA = "0x4E734B0", Offset = "0x4E734B0", VA = "0x4E734B0")]
		public MinMaxCurve(float multiplier, AnimationCurve curve)
		{
		}

		[Token(Token = "0x6000047")]
		[Address(RVA = "0x4E73540", Offset = "0x4E73540", VA = "0x4E73540")]
		public static implicit operator MinMaxCurve(float constant)
		{
			return default(MinMaxCurve);
		}
	}

	[Serializable]
	[Token(Token = "0x2000007")]
	[UnityEngine.Bindings.NativeType(UnityEngine.Bindings.CodegenOptions.Custom, "MonoMinMaxGradient", Header = "Runtime/Scripting/ScriptingCommonStructDefinitions.h")]
	public struct MinMaxGradient
	{
		[Token(Token = "0x400001A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		[SerializeField]
		private ParticleSystemGradientMode m_Mode;

		[Token(Token = "0x400001B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		[SerializeField]
		private Gradient m_GradientMin;

		[Token(Token = "0x400001C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		[SerializeField]
		private Gradient m_GradientMax;

		[Token(Token = "0x400001D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		[SerializeField]
		private Color m_ColorMin;

		[Token(Token = "0x400001E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		[SerializeField]
		private Color m_ColorMax;

		[Token(Token = "0x6000048")]
		[Address(RVA = "0x4E735C0", Offset = "0x4E735C0", VA = "0x4E735C0")]
		public MinMaxGradient(Color color)
		{
		}

		[Token(Token = "0x6000049")]
		[Address(RVA = "0x4E72160", Offset = "0x4E72160", VA = "0x4E72160")]
		public static implicit operator MinMaxGradient(Color color)
		{
			return default(MinMaxGradient);
		}
	}

	[Token(Token = "0x2000008")]
	public struct EmitParams
	{
		[Token(Token = "0x400001F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		[UnityEngine.Bindings.NativeName("particle")]
		private Particle m_Particle;

		[Token(Token = "0x4000020")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x84")]
		[UnityEngine.Bindings.NativeName("positionSet")]
		private bool m_PositionSet;

		[Token(Token = "0x4000021")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x85")]
		[UnityEngine.Bindings.NativeName("velocitySet")]
		private bool m_VelocitySet;

		[Token(Token = "0x4000022")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x86")]
		[UnityEngine.Bindings.NativeName("axisOfRotationSet")]
		private bool m_AxisOfRotationSet;

		[Token(Token = "0x4000023")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x87")]
		[UnityEngine.Bindings.NativeName("rotationSet")]
		private bool m_RotationSet;

		[Token(Token = "0x4000024")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
		[UnityEngine.Bindings.NativeName("rotationalSpeedSet")]
		private bool m_AngularVelocitySet;

		[Token(Token = "0x4000025")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x89")]
		[UnityEngine.Bindings.NativeName("startSizeSet")]
		private bool m_StartSizeSet;

		[Token(Token = "0x4000026")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8A")]
		[UnityEngine.Bindings.NativeName("startColorSet")]
		private bool m_StartColorSet;

		[Token(Token = "0x4000027")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8B")]
		[UnityEngine.Bindings.NativeName("randomSeedSet")]
		private bool m_RandomSeedSet;

		[Token(Token = "0x4000028")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
		[UnityEngine.Bindings.NativeName("startLifetimeSet")]
		private bool m_StartLifetimeSet;

		[Token(Token = "0x4000029")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8D")]
		[UnityEngine.Bindings.NativeName("meshIndexSet")]
		private bool m_MeshIndexSet;

		[Token(Token = "0x400002A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8E")]
		[UnityEngine.Bindings.NativeName("applyShapeToPosition")]
		private bool m_ApplyShapeToPosition;
	}

	[Token(Token = "0x17000001")]
	[Obsolete("startColor property is deprecated. Use main.startColor instead.", false)]
	public Color startColor
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x4E72040", Offset = "0x4E72040", VA = "0x4E72040")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	[Obsolete("startLifetime property is deprecated. Use main.startLifetime or main.startLifetimeMultiplier instead.", false)]
	public float startLifetime
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x4E72260", Offset = "0x4E72260", VA = "0x4E72260")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000003")]
	public bool isPlaying
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x4E722E0", Offset = "0x4E722E0", VA = "0x4E722E0")]
		[UnityEngine.Bindings.NativeName("SyncJobs(false)->IsPlaying")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000004")]
	public int particleCount
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x4E723B0", Offset = "0x4E723B0", VA = "0x4E723B0")]
		[UnityEngine.Bindings.NativeName("SyncJobs(false)->GetParticleCount")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000005")]
	public MainModule main
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x4E72140", Offset = "0x4E72140", VA = "0x4E72140")]
		get
		{
			return default(MainModule);
		}
	}

	[Token(Token = "0x17000006")]
	public EmissionModule emission
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x4E73000", Offset = "0x4E73000", VA = "0x4E73000")]
		get
		{
			return default(EmissionModule);
		}
	}

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x4E71CB0", Offset = "0x4E71CB0", VA = "0x4E71CB0")]
	[Obsolete("Emit with specific parameters is deprecated. Pass a ParticleSystem.EmitParams parameter instead, which allows you to override some/all of the emission properties", false)]
	public void Emit(Vector3 position, Vector3 velocity, float size, float lifetime, Color32 color)
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4E71F90", Offset = "0x4E71F90", VA = "0x4E71F90")]
	[Obsolete("Emit with a single particle structure is deprecated. Pass a ParticleSystem.EmitParams parameter instead, which allows you to override some/all of the emission properties", false)]
	public void Emit(Particle particle)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4E72480", Offset = "0x4E72480", VA = "0x4E72480")]
	[UnityEngine.Bindings.FreeFunction(Name = "ParticleSystemScriptBindings::SetParticles", HasExplicitThis = true, ThrowsException = true)]
	public void SetParticles([Out] Particle[] particles, int size, int offset)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x4E72600", Offset = "0x4E72600", VA = "0x4E72600")]
	public void SetParticles([Out] Particle[] particles, int size)
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x4E72610", Offset = "0x4E72610", VA = "0x4E72610")]
	[UnityEngine.Bindings.FreeFunction(Name = "ParticleSystemScriptBindings::GetParticles", HasExplicitThis = true, ThrowsException = true)]
	public int GetParticles([Out][UnityEngine.Bindings.NotNull("ArgumentNullException")] Particle[] particles, int size, int offset)
	{
		return default(int);
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x4E727D0", Offset = "0x4E727D0", VA = "0x4E727D0")]
	public int GetParticles([Out] Particle[] particles, int size)
	{
		return default(int);
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x4E727E0", Offset = "0x4E727E0", VA = "0x4E727E0")]
	public int GetParticles([Out] Particle[] particles)
	{
		return default(int);
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x4E727F0", Offset = "0x4E727F0", VA = "0x4E727F0")]
	[UnityEngine.Bindings.FreeFunction(Name = "ParticleSystemScriptBindings::Play", HasExplicitThis = true)]
	public void Play([DefaultValue("true")] bool withChildren)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x4E728D0", Offset = "0x4E728D0", VA = "0x4E728D0")]
	public void Play()
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x4E72970", Offset = "0x4E72970", VA = "0x4E72970")]
	[UnityEngine.Bindings.FreeFunction(Name = "ParticleSystemScriptBindings::Stop", HasExplicitThis = true)]
	public void Stop([DefaultValue("true")] bool withChildren, [DefaultValue("ParticleSystemStopBehavior.StopEmitting")] ParticleSystemStopBehavior stopBehavior)
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x4E72A60", Offset = "0x4E72A60", VA = "0x4E72A60")]
	public void Stop([DefaultValue("true")] bool withChildren)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x4E72B10", Offset = "0x4E72B10", VA = "0x4E72B10")]
	public void Stop()
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x4E72BC0", Offset = "0x4E72BC0", VA = "0x4E72BC0")]
	[UnityEngine.Bindings.FreeFunction(Name = "ParticleSystemScriptBindings::Clear", HasExplicitThis = true)]
	public void Clear([DefaultValue("true")] bool withChildren)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x4E72CA0", Offset = "0x4E72CA0", VA = "0x4E72CA0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4E72D40", Offset = "0x4E72D40", VA = "0x4E72D40")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public void Emit(int count)
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4E72DE0", Offset = "0x4E72DE0", VA = "0x4E72DE0")]
	[UnityEngine.Bindings.NativeName("SyncJobs()->Emit")]
	private void Emit_Internal(int count)
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4E72EC0", Offset = "0x4E72EC0", VA = "0x4E72EC0")]
	[UnityEngine.Bindings.NativeName("SyncJobs()->EmitParticlesExternal")]
	public void Emit(EmitParams emitParams, int count)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4E71EF0", Offset = "0x4E71EF0", VA = "0x4E71EF0")]
	[UnityEngine.Bindings.NativeName("SyncJobs()->EmitParticleExternal")]
	private void EmitOld_Internal(ref Particle particle)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4E72380", Offset = "0x4E72380", VA = "0x4E72380")]
	private static extern bool get_isPlaying_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4E72450", Offset = "0x4E72450", VA = "0x4E72450")]
	private static extern int get_particleCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4E725B0", Offset = "0x4E725B0", VA = "0x4E725B0")]
	private static extern void SetParticles_Injected(IntPtr _unity_self, out UnityEngine.Bindings.ManagedSpanWrapper particles, int size, int offset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4E72780", Offset = "0x4E72780", VA = "0x4E72780")]
	private static extern int GetParticles_Injected(IntPtr _unity_self, out UnityEngine.Bindings.ManagedSpanWrapper particles, int size, int offset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4E72890", Offset = "0x4E72890", VA = "0x4E72890")]
	private static extern void Play_Injected(IntPtr _unity_self, [DefaultValue("true")] bool withChildren);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4E72A20", Offset = "0x4E72A20", VA = "0x4E72A20")]
	private static extern void Stop_Injected(IntPtr _unity_self, [DefaultValue("true")] bool withChildren, [DefaultValue("ParticleSystemStopBehavior.StopEmitting")] ParticleSystemStopBehavior stopBehavior);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4E72C60", Offset = "0x4E72C60", VA = "0x4E72C60")]
	private static extern void Clear_Injected(IntPtr _unity_self, [DefaultValue("true")] bool withChildren);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4E72E80", Offset = "0x4E72E80", VA = "0x4E72E80")]
	private static extern void Emit_Internal_Injected(IntPtr _unity_self, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4E72F70", Offset = "0x4E72F70", VA = "0x4E72F70")]
	private static extern void Emit_Injected(IntPtr _unity_self, [In] ref EmitParams emitParams, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4E72FB0", Offset = "0x4E72FB0", VA = "0x4E72FB0")]
	private static extern void EmitOld_Internal_Injected(IntPtr _unity_self, ref Particle particle);
}
