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

[Token(Token = "0x20000AB")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/ReflectionProbes.h")]
public sealed class ReflectionProbe : Behaviour
{
	[Token(Token = "0x20000AC")]
	public enum ReflectionProbeEvent
	{
		[Token(Token = "0x40001CA")]
		ReflectionProbeAdded,
		[Token(Token = "0x40001CB")]
		ReflectionProbeRemoved
	}

	[Token(Token = "0x40001C6")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<ReflectionProbe, ReflectionProbeEvent> reflectionProbeChanged;

	[Token(Token = "0x40001C7")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<int, Action<Texture>> registeredDefaultReflectionSetActions;

	[Token(Token = "0x40001C8")]
	[FieldOffset(Offset = "0x10")]
	private static List<Action<Texture>> registeredDefaultReflectionTextureActions;

	[Token(Token = "0x1700007D")]
	public int cullingMask
	{
		[Token(Token = "0x6000308")]
		[Address(RVA = "0x68C2910", Offset = "0x68C1910", VA = "0x68C2910")]
		set
		{
		}
	}

	[Token(Token = "0x1700007E")]
	public ReflectionProbeMode mode
	{
		[Token(Token = "0x6000309")]
		[Address(RVA = "0x68C2A10", Offset = "0x68C1A10", VA = "0x68C2A10")]
		get
		{
			return default(ReflectionProbeMode);
		}
		[Token(Token = "0x600030A")]
		[Address(RVA = "0x68C2AF0", Offset = "0x68C1AF0", VA = "0x68C2AF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	public ReflectionProbeRefreshMode refreshMode
	{
		[Token(Token = "0x600030B")]
		[Address(RVA = "0x68C2BF0", Offset = "0x68C1BF0", VA = "0x68C2BF0")]
		get
		{
			return default(ReflectionProbeRefreshMode);
		}
		[Token(Token = "0x600030C")]
		[Address(RVA = "0x68C2CD0", Offset = "0x68C1CD0", VA = "0x68C2CD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000080")]
	public ReflectionProbeTimeSlicingMode timeSlicingMode
	{
		[Token(Token = "0x600030D")]
		[Address(RVA = "0x68C2DD0", Offset = "0x68C1DD0", VA = "0x68C2DD0")]
		get
		{
			return default(ReflectionProbeTimeSlicingMode);
		}
		[Token(Token = "0x600030E")]
		[Address(RVA = "0x68C2EB0", Offset = "0x68C1EB0", VA = "0x68C2EB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	public Texture texture
	{
		[Token(Token = "0x600030F")]
		[Address(RVA = "0x68C2FB0", Offset = "0x68C1FB0", VA = "0x68C2FB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000082")]
	[UnityEngine.Bindings.StaticAccessor("GetReflectionProbes()")]
	public static Vector4 defaultTextureHDRDecodeValues
	{
		[Token(Token = "0x6000313")]
		[Address(RVA = "0x68C3250", Offset = "0x68C2250", VA = "0x68C3250")]
		get
		{
			return default(Vector4);
		}
	}

	[Token(Token = "0x17000083")]
	[UnityEngine.Bindings.StaticAccessor("GetReflectionProbes()")]
	public static Texture defaultTexture
	{
		[Token(Token = "0x6000314")]
		[Address(RVA = "0x68C3310", Offset = "0x68C2310", VA = "0x68C3310")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x68C30C0", Offset = "0x68C20C0", VA = "0x68C30C0")]
	public int RenderProbe()
	{
		return default(int);
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x68C30E0", Offset = "0x68C20E0", VA = "0x68C30E0")]
	public int RenderProbe([DefaultValue("null")] RenderTexture targetTexture)
	{
		return default(int);
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x68C3110", Offset = "0x68C2110", VA = "0x68C3110")]
	private int ScheduleRender(ReflectionProbeTimeSlicingMode timeSlicingMode, RenderTexture targetTexture)
	{
		return default(int);
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x68C33E0", Offset = "0x68C23E0", VA = "0x68C33E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void CallReflectionProbeEvent(ReflectionProbe probe, ReflectionProbeEvent probeEvent)
	{
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x68C3480", Offset = "0x68C2480", VA = "0x68C3480")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void CallSetDefaultReflection(Texture defaultReflectionCubemap)
	{
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x68C35F0", Offset = "0x68C25F0", VA = "0x68C35F0")]
	public ReflectionProbe()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000319")]
	[Address(RVA = "0x68C29D0", Offset = "0x68C19D0", VA = "0x68C29D0")]
	private static extern void set_cullingMask_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600031A")]
	[Address(RVA = "0x68C2AC0", Offset = "0x68C1AC0", VA = "0x68C2AC0")]
	private static extern ReflectionProbeMode get_mode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600031B")]
	[Address(RVA = "0x68C2BB0", Offset = "0x68C1BB0", VA = "0x68C2BB0")]
	private static extern void set_mode_Injected(IntPtr _unity_self, ReflectionProbeMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600031C")]
	[Address(RVA = "0x68C2CA0", Offset = "0x68C1CA0", VA = "0x68C2CA0")]
	private static extern ReflectionProbeRefreshMode get_refreshMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600031D")]
	[Address(RVA = "0x68C2D90", Offset = "0x68C1D90", VA = "0x68C2D90")]
	private static extern void set_refreshMode_Injected(IntPtr _unity_self, ReflectionProbeRefreshMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600031E")]
	[Address(RVA = "0x68C2E80", Offset = "0x68C1E80", VA = "0x68C2E80")]
	private static extern ReflectionProbeTimeSlicingMode get_timeSlicingMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600031F")]
	[Address(RVA = "0x68C2F70", Offset = "0x68C1F70", VA = "0x68C2F70")]
	private static extern void set_timeSlicingMode_Injected(IntPtr _unity_self, ReflectionProbeTimeSlicingMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000320")]
	[Address(RVA = "0x68C3090", Offset = "0x68C2090", VA = "0x68C3090")]
	private static extern IntPtr get_texture_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000321")]
	[Address(RVA = "0x68C3210", Offset = "0x68C2210", VA = "0x68C3210")]
	private static extern int ScheduleRender_Injected(IntPtr _unity_self, ReflectionProbeTimeSlicingMode timeSlicingMode, IntPtr targetTexture);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000322")]
	[Address(RVA = "0x68C32E0", Offset = "0x68C22E0", VA = "0x68C32E0")]
	private static extern void get_defaultTextureHDRDecodeValues_Injected(out Vector4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000323")]
	[Address(RVA = "0x68C33B0", Offset = "0x68C23B0", VA = "0x68C33B0")]
	private static extern IntPtr get_defaultTexture_Injected();
}
