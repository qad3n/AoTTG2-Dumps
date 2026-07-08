using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;
using UnityEngine.Rendering;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200008B")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/ReflectionProbes.h")]
public sealed class ReflectionProbe : Behaviour
{
	[Token(Token = "0x200008C")]
	public enum ReflectionProbeEvent
	{
		[Token(Token = "0x4000177")]
		ReflectionProbeAdded,
		[Token(Token = "0x4000178")]
		ReflectionProbeRemoved
	}

	[Token(Token = "0x4000173")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<ReflectionProbe, ReflectionProbeEvent> reflectionProbeChanged;

	[Token(Token = "0x4000174")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<int, Action<Texture>> registeredDefaultReflectionSetActions;

	[Token(Token = "0x4000175")]
	[FieldOffset(Offset = "0x10")]
	private static List<Action<Texture>> registeredDefaultReflectionTextureActions;

	[Token(Token = "0x17000062")]
	public int cullingMask
	{
		[Token(Token = "0x6000201")]
		[Address(RVA = "0x4A8DAB0", Offset = "0x4A8DAB0", VA = "0x4A8DAB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000063")]
	public ReflectionProbeMode mode
	{
		[Token(Token = "0x6000202")]
		[Address(RVA = "0x4A8DBD0", Offset = "0x4A8DBD0", VA = "0x4A8DBD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000064")]
	public ReflectionProbeRefreshMode refreshMode
	{
		[Token(Token = "0x6000203")]
		[Address(RVA = "0x4A8DCF0", Offset = "0x4A8DCF0", VA = "0x4A8DCF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000065")]
	public ReflectionProbeTimeSlicingMode timeSlicingMode
	{
		[Token(Token = "0x6000204")]
		[Address(RVA = "0x4A8DE10", Offset = "0x4A8DE10", VA = "0x4A8DE10")]
		get
		{
			return default(ReflectionProbeTimeSlicingMode);
		}
		[Token(Token = "0x6000205")]
		[Address(RVA = "0x4A8DF10", Offset = "0x4A8DF10", VA = "0x4A8DF10")]
		set
		{
		}
	}

	[Token(Token = "0x17000066")]
	public Texture texture
	{
		[Token(Token = "0x6000206")]
		[Address(RVA = "0x4A8E030", Offset = "0x4A8E030", VA = "0x4A8E030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000067")]
	[UnityEngine.Bindings.StaticAccessor("GetReflectionProbes()")]
	public static Vector4 defaultTextureHDRDecodeValues
	{
		[Token(Token = "0x600020A")]
		[Address(RVA = "0x4A8E2F0", Offset = "0x4A8E2F0", VA = "0x4A8E2F0")]
		get
		{
			return default(Vector4);
		}
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x4A8E130", Offset = "0x4A8E130", VA = "0x4A8E130")]
	public int RenderProbe()
	{
		return default(int);
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x4A8E150", Offset = "0x4A8E150", VA = "0x4A8E150")]
	public int RenderProbe([DefaultValue("null")] RenderTexture targetTexture)
	{
		return default(int);
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x4A8E170", Offset = "0x4A8E170", VA = "0x4A8E170")]
	private int ScheduleRender(ReflectionProbeTimeSlicingMode timeSlicingMode, RenderTexture targetTexture)
	{
		return default(int);
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x4A8E3B0", Offset = "0x4A8E3B0", VA = "0x4A8E3B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void CallReflectionProbeEvent(ReflectionProbe probe, ReflectionProbeEvent probeEvent)
	{
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x4A8E450", Offset = "0x4A8E450", VA = "0x4A8E450")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void CallSetDefaultReflection(Texture defaultReflectionCubemap)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600020E")]
	[Address(RVA = "0x4A8DB90", Offset = "0x4A8DB90", VA = "0x4A8DB90")]
	private static extern void set_cullingMask_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600020F")]
	[Address(RVA = "0x4A8DCB0", Offset = "0x4A8DCB0", VA = "0x4A8DCB0")]
	private static extern void set_mode_Injected(IntPtr _unity_self, ReflectionProbeMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000210")]
	[Address(RVA = "0x4A8DDD0", Offset = "0x4A8DDD0", VA = "0x4A8DDD0")]
	private static extern void set_refreshMode_Injected(IntPtr _unity_self, ReflectionProbeRefreshMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000211")]
	[Address(RVA = "0x4A8DEE0", Offset = "0x4A8DEE0", VA = "0x4A8DEE0")]
	private static extern ReflectionProbeTimeSlicingMode get_timeSlicingMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000212")]
	[Address(RVA = "0x4A8DFF0", Offset = "0x4A8DFF0", VA = "0x4A8DFF0")]
	private static extern void set_timeSlicingMode_Injected(IntPtr _unity_self, ReflectionProbeTimeSlicingMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000213")]
	[Address(RVA = "0x4A8E100", Offset = "0x4A8E100", VA = "0x4A8E100")]
	private static extern Texture get_texture_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000214")]
	[Address(RVA = "0x4A8E2B0", Offset = "0x4A8E2B0", VA = "0x4A8E2B0")]
	private static extern int ScheduleRender_Injected(IntPtr _unity_self, ReflectionProbeTimeSlicingMode timeSlicingMode, IntPtr targetTexture);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000215")]
	[Address(RVA = "0x4A8E380", Offset = "0x4A8E380", VA = "0x4A8E380")]
	private static extern void get_defaultTextureHDRDecodeValues_Injected(out Vector4 ret);
}
