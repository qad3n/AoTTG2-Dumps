// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ReflectionProbe
// Update status: CHANGED in this game update
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

	[Token(Token = "0x1700007C")]
	public int cullingMask
	{
		[Token(Token = "0x6000304")]
		[Address(RVA = "0x2ED31C0", Offset = "0x2ED17C0", VA = "0x182ED31C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007D")]
	public ReflectionProbeMode mode
	{
		[Token(Token = "0x6000305")]
		[Address(RVA = "0x2ED2E20", Offset = "0x2ED1420", VA = "0x182ED2E20")]
		get
		{
			return default(ReflectionProbeMode);
		}
		[Token(Token = "0x6000306")]
		[Address(RVA = "0x2ED32B0", Offset = "0x2ED18B0", VA = "0x182ED32B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007E")]
	public ReflectionProbeRefreshMode refreshMode
	{
		[Token(Token = "0x6000307")]
		[Address(RVA = "0x2ED2F00", Offset = "0x2ED1500", VA = "0x182ED2F00")]
		get
		{
			return default(ReflectionProbeRefreshMode);
		}
		[Token(Token = "0x6000308")]
		[Address(RVA = "0x2ED33A0", Offset = "0x2ED19A0", VA = "0x182ED33A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	public ReflectionProbeTimeSlicingMode timeSlicingMode
	{
		[Token(Token = "0x6000309")]
		[Address(RVA = "0x2ED30E0", Offset = "0x2ED16E0", VA = "0x182ED30E0")]
		get
		{
			return default(ReflectionProbeTimeSlicingMode);
		}
		[Token(Token = "0x600030A")]
		[Address(RVA = "0x2ED3490", Offset = "0x2ED1A90", VA = "0x182ED3490")]
		set
		{
		}
	}

	[Token(Token = "0x17000080")]
	public Texture texture
	{
		[Token(Token = "0x600030B")]
		[Address(RVA = "0x2ED2FE0", Offset = "0x2ED15E0", VA = "0x182ED2FE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000081")]
	[UnityEngine.Bindings.StaticAccessor("GetReflectionProbes()")]
	public static Vector4 defaultTextureHDRDecodeValues
	{
		[Token(Token = "0x600030F")]
		[Address(RVA = "0x2ED2CC0", Offset = "0x2ED12C0", VA = "0x182ED2CC0")]
		get
		{
			return default(Vector4);
		}
	}

	[Token(Token = "0x17000082")]
	[UnityEngine.Bindings.StaticAccessor("GetReflectionProbes()")]
	public static Texture defaultTexture
	{
		[Token(Token = "0x6000310")]
		[Address(RVA = "0x2ED2D60", Offset = "0x2ED1360", VA = "0x182ED2D60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x2ED27B0", Offset = "0x2ED0DB0", VA = "0x182ED27B0")]
	public int RenderProbe()
	{
		return default(int);
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x2ED28F0", Offset = "0x2ED0EF0", VA = "0x182ED28F0")]
	public int RenderProbe([DefaultValue("null")] RenderTexture targetTexture)
	{
		return default(int);
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x2ED2AA0", Offset = "0x2ED10A0", VA = "0x182ED2AA0")]
	private int ScheduleRender(ReflectionProbeTimeSlicingMode timeSlicingMode, RenderTexture targetTexture)
	{
		return default(int);
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x2ED25D0", Offset = "0x2ED0BD0", VA = "0x182ED25D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void CallReflectionProbeEvent(ReflectionProbe probe, ReflectionProbeEvent probeEvent)
	{
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x2ED2650", Offset = "0x2ED0C50", VA = "0x182ED2650")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void CallSetDefaultReflection(Texture defaultReflectionCubemap)
	{
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public ReflectionProbe()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000315")]
	[Address(RVA = "0x2ED3180", Offset = "0x2ED1780", VA = "0x182ED3180")]
	private static extern void set_cullingMask_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000316")]
	[Address(RVA = "0x2ED2DE0", Offset = "0x2ED13E0", VA = "0x182ED2DE0")]
	private static extern ReflectionProbeMode get_mode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000317")]
	[Address(RVA = "0x2ED3270", Offset = "0x2ED1870", VA = "0x182ED3270")]
	private static extern void set_mode_Injected(IntPtr _unity_self, ReflectionProbeMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000318")]
	[Address(RVA = "0x2ED2EC0", Offset = "0x2ED14C0", VA = "0x182ED2EC0")]
	private static extern ReflectionProbeRefreshMode get_refreshMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000319")]
	[Address(RVA = "0x2ED3360", Offset = "0x2ED1960", VA = "0x182ED3360")]
	private static extern void set_refreshMode_Injected(IntPtr _unity_self, ReflectionProbeRefreshMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600031A")]
	[Address(RVA = "0x2ED30A0", Offset = "0x2ED16A0", VA = "0x182ED30A0")]
	private static extern ReflectionProbeTimeSlicingMode get_timeSlicingMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600031B")]
	[Address(RVA = "0x2ED3450", Offset = "0x2ED1A50", VA = "0x182ED3450")]
	private static extern void set_timeSlicingMode_Injected(IntPtr _unity_self, ReflectionProbeTimeSlicingMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600031C")]
	[Address(RVA = "0x2ED2FA0", Offset = "0x2ED15A0", VA = "0x182ED2FA0")]
	private static extern IntPtr get_texture_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600031D")]
	[Address(RVA = "0x2ED2A50", Offset = "0x2ED1050", VA = "0x182ED2A50")]
	private static extern int ScheduleRender_Injected(IntPtr _unity_self, ReflectionProbeTimeSlicingMode timeSlicingMode, IntPtr targetTexture);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600031E")]
	[Address(RVA = "0x2ED2C80", Offset = "0x2ED1280", VA = "0x182ED2C80")]
	private static extern void get_defaultTextureHDRDecodeValues_Injected(out Vector4 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600031F")]
	[Address(RVA = "0x2ED2D30", Offset = "0x2ED1330", VA = "0x182ED2D30")]
	private static extern IntPtr get_defaultTexture_Injected();
}
