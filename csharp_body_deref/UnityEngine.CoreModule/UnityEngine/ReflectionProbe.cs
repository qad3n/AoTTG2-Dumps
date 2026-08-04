// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ReflectionProbe
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4DB52D0", Offset = "0x4DB52D0", VA = "0x4DB52D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000063")]
	public ReflectionProbeMode mode
	{
		[Token(Token = "0x6000202")]
		[Address(RVA = "0x4DB53F0", Offset = "0x4DB53F0", VA = "0x4DB53F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000064")]
	public ReflectionProbeRefreshMode refreshMode
	{
		[Token(Token = "0x6000203")]
		[Address(RVA = "0x4DB5510", Offset = "0x4DB5510", VA = "0x4DB5510")]
		set
		{
		}
	}

	[Token(Token = "0x17000065")]
	public ReflectionProbeTimeSlicingMode timeSlicingMode
	{
		[Token(Token = "0x6000204")]
		[Address(RVA = "0x4DB5630", Offset = "0x4DB5630", VA = "0x4DB5630")]
		get
		{
			return default(ReflectionProbeTimeSlicingMode);
		}
		[Token(Token = "0x6000205")]
		[Address(RVA = "0x4DB5730", Offset = "0x4DB5730", VA = "0x4DB5730")]
		set
		{
		}
	}

	[Token(Token = "0x17000066")]
	public Texture texture
	{
		[Token(Token = "0x6000206")]
		[Address(RVA = "0x4DB5850", Offset = "0x4DB5850", VA = "0x4DB5850")]
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
		[Address(RVA = "0x4DB5B10", Offset = "0x4DB5B10", VA = "0x4DB5B10")]
		get
		{
			return default(Vector4);
		}
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x4DB5950", Offset = "0x4DB5950", VA = "0x4DB5950")]
	public int RenderProbe()
	{
		return default(int);
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x4DB5970", Offset = "0x4DB5970", VA = "0x4DB5970")]
	public int RenderProbe([DefaultValue("null")] RenderTexture targetTexture)
	{
		return default(int);
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x4DB5990", Offset = "0x4DB5990", VA = "0x4DB5990")]
	private int ScheduleRender(ReflectionProbeTimeSlicingMode timeSlicingMode, RenderTexture targetTexture)
	{
		return default(int);
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x4DB5BD0", Offset = "0x4DB5BD0", VA = "0x4DB5BD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void CallReflectionProbeEvent(ReflectionProbe probe, ReflectionProbeEvent probeEvent)
	{
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x4DB5C70", Offset = "0x4DB5C70", VA = "0x4DB5C70")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void CallSetDefaultReflection(Texture defaultReflectionCubemap)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600020E")]
	[Address(RVA = "0x4DB53B0", Offset = "0x4DB53B0", VA = "0x4DB53B0")]
	private static extern void set_cullingMask_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600020F")]
	[Address(RVA = "0x4DB54D0", Offset = "0x4DB54D0", VA = "0x4DB54D0")]
	private static extern void set_mode_Injected(IntPtr _unity_self, ReflectionProbeMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000210")]
	[Address(RVA = "0x4DB55F0", Offset = "0x4DB55F0", VA = "0x4DB55F0")]
	private static extern void set_refreshMode_Injected(IntPtr _unity_self, ReflectionProbeRefreshMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000211")]
	[Address(RVA = "0x4DB5700", Offset = "0x4DB5700", VA = "0x4DB5700")]
	private static extern ReflectionProbeTimeSlicingMode get_timeSlicingMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000212")]
	[Address(RVA = "0x4DB5810", Offset = "0x4DB5810", VA = "0x4DB5810")]
	private static extern void set_timeSlicingMode_Injected(IntPtr _unity_self, ReflectionProbeTimeSlicingMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000213")]
	[Address(RVA = "0x4DB5920", Offset = "0x4DB5920", VA = "0x4DB5920")]
	private static extern Texture get_texture_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000214")]
	[Address(RVA = "0x4DB5AD0", Offset = "0x4DB5AD0", VA = "0x4DB5AD0")]
	private static extern int ScheduleRender_Injected(IntPtr _unity_self, ReflectionProbeTimeSlicingMode timeSlicingMode, IntPtr targetTexture);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000215")]
	[Address(RVA = "0x4DB5BA0", Offset = "0x4DB5BA0", VA = "0x4DB5BA0")]
	private static extern void get_defaultTextureHDRDecodeValues_Injected(out Vector4 ret);
}
