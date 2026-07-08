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
			[Address(RVA = "0x4B4A980", Offset = "0x4B4A980", VA = "0x4B4A980")]
			get;
		}

		[Token(Token = "0x17000008")]
		public MinMaxCurve startSpeed
		{
			[Token(Token = "0x6000025")]
			[Address(RVA = "0x4B4B700", Offset = "0x4B4B700", VA = "0x4B4B700")]
			get
			{
				return default(MinMaxCurve);
			}
			[Token(Token = "0x6000026")]
			[Address(RVA = "0x4B4B7A0", Offset = "0x4B4B7A0", VA = "0x4B4B7A0")]
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
			[Address(RVA = "0x4B4B820", Offset = "0x4B4B820", VA = "0x4B4B820")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x1700000A")]
		[UnityEngine.Bindings.NativeName("StartSizeX")]
		public MinMaxCurve startSize
		{
			[Token(Token = "0x6000028")]
			[Address(RVA = "0x4B4B870", Offset = "0x4B4B870", VA = "0x4B4B870")]
			get
			{
				return default(MinMaxCurve);
			}
			[Token(Token = "0x6000029")]
			[Address(RVA = "0x4B4B910", Offset = "0x4B4B910", VA = "0x4B4B910")]
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
			[Address(RVA = "0x4B4B990", Offset = "0x4B4B990", VA = "0x4B4B990")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x1700000C")]
		public MinMaxGradient startColor
		{
			[Token(Token = "0x600002B")]
			[Address(RVA = "0x4B4A8F0", Offset = "0x4B4A8F0", VA = "0x4B4A8F0")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x6000023")]
		[Address(RVA = "0x4B4B6C0", Offset = "0x4B4B6C0", VA = "0x4B4B6C0")]
		internal MainModule(ParticleSystem particleSystem)
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x4B4B760", Offset = "0x4B4B760", VA = "0x4B4B760")]
		private static extern void get_startSpeed_Injected(ref MainModule _unity_self, out MinMaxCurve ret);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x4B4B7E0", Offset = "0x4B4B7E0", VA = "0x4B4B7E0")]
		private static extern void set_startSpeed_Injected(ref MainModule _unity_self, [In] ref MinMaxCurve value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x4B4B8D0", Offset = "0x4B4B8D0", VA = "0x4B4B8D0")]
		private static extern void get_startSize_Injected(ref MainModule _unity_self, out MinMaxCurve ret);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x4B4B950", Offset = "0x4B4B950", VA = "0x4B4B950")]
		private static extern void set_startSize_Injected(ref MainModule _unity_self, [In] ref MinMaxCurve value);

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x4B4B9E0", Offset = "0x4B4B9E0", VA = "0x4B4B9E0")]
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
			[Address(RVA = "0x4B4BA20", Offset = "0x4B4BA20", VA = "0x4B4BA20")]
			get;
			[MethodImpl((MethodImplOptions)4096)]
			[Token(Token = "0x6000033")]
			[Address(RVA = "0x4B4BA50", Offset = "0x4B4BA50", VA = "0x4B4BA50")]
			[UnityEngine.Bindings.NativeThrows]
			set;
		}

		[Token(Token = "0x1700000E")]
		public MinMaxCurve rateOverTime
		{
			[Token(Token = "0x6000034")]
			[Address(RVA = "0x4B4BA90", Offset = "0x4B4BA90", VA = "0x4B4BA90")]
			[UnityEngine.Bindings.NativeThrows]
			set
			{
			}
		}

		[Token(Token = "0x6000031")]
		[Address(RVA = "0x4B4B6F0", Offset = "0x4B4B6F0", VA = "0x4B4B6F0")]
		internal EmissionModule(ParticleSystem particleSystem)
		{
		}

		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x4B4BAD0", Offset = "0x4B4BAD0", VA = "0x4B4BAD0")]
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
			[Address(RVA = "0x4B4A530", Offset = "0x4B4A530", VA = "0x4B4A530")]
			set
			{
			}
		}

		[Token(Token = "0x17000010")]
		public Vector3 position
		{
			[Token(Token = "0x6000037")]
			[Address(RVA = "0x4B4A510", Offset = "0x4B4A510", VA = "0x4B4A510")]
			set
			{
			}
		}

		[Token(Token = "0x17000011")]
		public Vector3 velocity
		{
			[Token(Token = "0x6000038")]
			[Address(RVA = "0x4B4A520", Offset = "0x4B4A520", VA = "0x4B4A520")]
			set
			{
			}
		}

		[Token(Token = "0x17000012")]
		public float remainingLifetime
		{
			[Token(Token = "0x6000039")]
			[Address(RVA = "0x4B4BB20", Offset = "0x4B4BB20", VA = "0x4B4BB20")]
			get
			{
				return default(float);
			}
			[Token(Token = "0x600003A")]
			[Address(RVA = "0x4B4BB10", Offset = "0x4B4BB10", VA = "0x4B4BB10")]
			set
			{
			}
		}

		[Token(Token = "0x17000013")]
		public float startLifetime
		{
			[Token(Token = "0x600003B")]
			[Address(RVA = "0x4B4A540", Offset = "0x4B4A540", VA = "0x4B4A540")]
			set
			{
			}
		}

		[Token(Token = "0x17000014")]
		public Color32 startColor
		{
			[Token(Token = "0x600003C")]
			[Address(RVA = "0x4B4A5A0", Offset = "0x4B4A5A0", VA = "0x4B4A5A0")]
			set
			{
			}
		}

		[Token(Token = "0x17000015")]
		public uint randomSeed
		{
			[Token(Token = "0x600003D")]
			[Address(RVA = "0x4B4A5B0", Offset = "0x4B4A5B0", VA = "0x4B4A5B0")]
			set
			{
			}
		}

		[Token(Token = "0x17000016")]
		public float startSize
		{
			[Token(Token = "0x600003E")]
			[Address(RVA = "0x4B4A550", Offset = "0x4B4A550", VA = "0x4B4A550")]
			set
			{
			}
		}

		[Token(Token = "0x17000017")]
		public Vector3 rotation3D
		{
			[Token(Token = "0x600003F")]
			[Address(RVA = "0x4B4A560", Offset = "0x4B4A560", VA = "0x4B4A560")]
			set
			{
			}
		}

		[Token(Token = "0x17000018")]
		public Vector3 angularVelocity3D
		{
			[Token(Token = "0x6000040")]
			[Address(RVA = "0x4B4A580", Offset = "0x4B4A580", VA = "0x4B4A580")]
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
			[Address(RVA = "0x4B4BBD0", Offset = "0x4B4BBD0", VA = "0x4B4BBD0")]
			get
			{
				return default(ParticleSystemCurveMode);
			}
		}

		[Token(Token = "0x1700001A")]
		public float constantMax
		{
			[Token(Token = "0x6000044")]
			[Address(RVA = "0x4B4BBE0", Offset = "0x4B4BBE0", VA = "0x4B4BBE0")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x1700001B")]
		public float constantMin
		{
			[Token(Token = "0x6000045")]
			[Address(RVA = "0x4B4BBF0", Offset = "0x4B4BBF0", VA = "0x4B4BBF0")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x1700001C")]
		public float constant
		{
			[Token(Token = "0x6000046")]
			[Address(RVA = "0x4B4BC00", Offset = "0x4B4BC00", VA = "0x4B4BC00")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x6000041")]
		[Address(RVA = "0x4B4BB30", Offset = "0x4B4BB30", VA = "0x4B4BB30")]
		public MinMaxCurve(float constant)
		{
		}

		[Token(Token = "0x6000042")]
		[Address(RVA = "0x4B4BB80", Offset = "0x4B4BB80", VA = "0x4B4BB80")]
		public MinMaxCurve(float multiplier, AnimationCurve curve)
		{
		}

		[Token(Token = "0x6000047")]
		[Address(RVA = "0x4B4BC10", Offset = "0x4B4BC10", VA = "0x4B4BC10")]
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
		[Address(RVA = "0x4B4BC90", Offset = "0x4B4BC90", VA = "0x4B4BC90")]
		public MinMaxGradient(Color color)
		{
		}

		[Token(Token = "0x6000049")]
		[Address(RVA = "0x4B4A830", Offset = "0x4B4A830", VA = "0x4B4A830")]
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
		[Address(RVA = "0x4B4A710", Offset = "0x4B4A710", VA = "0x4B4A710")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	[Obsolete("startLifetime property is deprecated. Use main.startLifetime or main.startLifetimeMultiplier instead.", false)]
	public float startLifetime
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x4B4A930", Offset = "0x4B4A930", VA = "0x4B4A930")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000003")]
	public bool isPlaying
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x4B4A9B0", Offset = "0x4B4A9B0", VA = "0x4B4A9B0")]
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
		[Address(RVA = "0x4B4AA80", Offset = "0x4B4AA80", VA = "0x4B4AA80")]
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
		[Address(RVA = "0x4B4A810", Offset = "0x4B4A810", VA = "0x4B4A810")]
		get
		{
			return default(MainModule);
		}
	}

	[Token(Token = "0x17000006")]
	public EmissionModule emission
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x4B4B6D0", Offset = "0x4B4B6D0", VA = "0x4B4B6D0")]
		get
		{
			return default(EmissionModule);
		}
	}

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x4B4A380", Offset = "0x4B4A380", VA = "0x4B4A380")]
	[Obsolete("Emit with specific parameters is deprecated. Pass a ParticleSystem.EmitParams parameter instead, which allows you to override some/all of the emission properties", false)]
	public void Emit(Vector3 position, Vector3 velocity, float size, float lifetime, Color32 color)
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4B4A660", Offset = "0x4B4A660", VA = "0x4B4A660")]
	[Obsolete("Emit with a single particle structure is deprecated. Pass a ParticleSystem.EmitParams parameter instead, which allows you to override some/all of the emission properties", false)]
	public void Emit(Particle particle)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4B4AB50", Offset = "0x4B4AB50", VA = "0x4B4AB50")]
	[UnityEngine.Bindings.FreeFunction(Name = "ParticleSystemScriptBindings::SetParticles", HasExplicitThis = true, ThrowsException = true)]
	public void SetParticles([Out] Particle[] particles, int size, int offset)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x4B4ACD0", Offset = "0x4B4ACD0", VA = "0x4B4ACD0")]
	public void SetParticles([Out] Particle[] particles, int size)
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x4B4ACE0", Offset = "0x4B4ACE0", VA = "0x4B4ACE0")]
	[UnityEngine.Bindings.FreeFunction(Name = "ParticleSystemScriptBindings::GetParticles", HasExplicitThis = true, ThrowsException = true)]
	public int GetParticles([Out][UnityEngine.Bindings.NotNull("ArgumentNullException")] Particle[] particles, int size, int offset)
	{
		return default(int);
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x4B4AEA0", Offset = "0x4B4AEA0", VA = "0x4B4AEA0")]
	public int GetParticles([Out] Particle[] particles, int size)
	{
		return default(int);
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x4B4AEB0", Offset = "0x4B4AEB0", VA = "0x4B4AEB0")]
	public int GetParticles([Out] Particle[] particles)
	{
		return default(int);
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x4B4AEC0", Offset = "0x4B4AEC0", VA = "0x4B4AEC0")]
	[UnityEngine.Bindings.FreeFunction(Name = "ParticleSystemScriptBindings::Play", HasExplicitThis = true)]
	public void Play([DefaultValue("true")] bool withChildren)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x4B4AFA0", Offset = "0x4B4AFA0", VA = "0x4B4AFA0")]
	public void Play()
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x4B4B040", Offset = "0x4B4B040", VA = "0x4B4B040")]
	[UnityEngine.Bindings.FreeFunction(Name = "ParticleSystemScriptBindings::Stop", HasExplicitThis = true)]
	public void Stop([DefaultValue("true")] bool withChildren, [DefaultValue("ParticleSystemStopBehavior.StopEmitting")] ParticleSystemStopBehavior stopBehavior)
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x4B4B130", Offset = "0x4B4B130", VA = "0x4B4B130")]
	public void Stop([DefaultValue("true")] bool withChildren)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x4B4B1E0", Offset = "0x4B4B1E0", VA = "0x4B4B1E0")]
	public void Stop()
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x4B4B290", Offset = "0x4B4B290", VA = "0x4B4B290")]
	[UnityEngine.Bindings.FreeFunction(Name = "ParticleSystemScriptBindings::Clear", HasExplicitThis = true)]
	public void Clear([DefaultValue("true")] bool withChildren)
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x4B4B370", Offset = "0x4B4B370", VA = "0x4B4B370")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4B4B410", Offset = "0x4B4B410", VA = "0x4B4B410")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public void Emit(int count)
	{
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4B4B4B0", Offset = "0x4B4B4B0", VA = "0x4B4B4B0")]
	[UnityEngine.Bindings.NativeName("SyncJobs()->Emit")]
	private void Emit_Internal(int count)
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4B4B590", Offset = "0x4B4B590", VA = "0x4B4B590")]
	[UnityEngine.Bindings.NativeName("SyncJobs()->EmitParticlesExternal")]
	public void Emit(EmitParams emitParams, int count)
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4B4A5C0", Offset = "0x4B4A5C0", VA = "0x4B4A5C0")]
	[UnityEngine.Bindings.NativeName("SyncJobs()->EmitParticleExternal")]
	private void EmitOld_Internal(ref Particle particle)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4B4AA50", Offset = "0x4B4AA50", VA = "0x4B4AA50")]
	private static extern bool get_isPlaying_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4B4AB20", Offset = "0x4B4AB20", VA = "0x4B4AB20")]
	private static extern int get_particleCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4B4AC80", Offset = "0x4B4AC80", VA = "0x4B4AC80")]
	private static extern void SetParticles_Injected(IntPtr _unity_self, out UnityEngine.Bindings.ManagedSpanWrapper particles, int size, int offset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4B4AE50", Offset = "0x4B4AE50", VA = "0x4B4AE50")]
	private static extern int GetParticles_Injected(IntPtr _unity_self, out UnityEngine.Bindings.ManagedSpanWrapper particles, int size, int offset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4B4AF60", Offset = "0x4B4AF60", VA = "0x4B4AF60")]
	private static extern void Play_Injected(IntPtr _unity_self, [DefaultValue("true")] bool withChildren);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4B4B0F0", Offset = "0x4B4B0F0", VA = "0x4B4B0F0")]
	private static extern void Stop_Injected(IntPtr _unity_self, [DefaultValue("true")] bool withChildren, [DefaultValue("ParticleSystemStopBehavior.StopEmitting")] ParticleSystemStopBehavior stopBehavior);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4B4B330", Offset = "0x4B4B330", VA = "0x4B4B330")]
	private static extern void Clear_Injected(IntPtr _unity_self, [DefaultValue("true")] bool withChildren);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4B4B550", Offset = "0x4B4B550", VA = "0x4B4B550")]
	private static extern void Emit_Internal_Injected(IntPtr _unity_self, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4B4B640", Offset = "0x4B4B640", VA = "0x4B4B640")]
	private static extern void Emit_Injected(IntPtr _unity_self, [In] ref EmitParams emitParams, int count);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4B4B680", Offset = "0x4B4B680", VA = "0x4B4B680")]
	private static extern void EmitOld_Internal_Injected(IntPtr _unity_self, ref Particle particle);
}
