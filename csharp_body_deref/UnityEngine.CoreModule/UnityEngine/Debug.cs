// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Debug
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/SupportLogger.cs
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

[Token(Token = "0x20000AE")]
[UnityEngine.Bindings.NativeHeader("Runtime/Diagnostics/Validation.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Debug/Debug.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Diagnostics/IntegrityCheck.h")]
public class Debug
{
	[Token(Token = "0x40001CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly ILogger s_DefaultLogger;

	[Token(Token = "0x40001CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static ILogger s_Logger;

	[Token(Token = "0x17000083")]
	public static ILogger unityLogger
	{
		[Token(Token = "0x6000328")]
		[Address(RVA = "0x2EC3DD0", Offset = "0x2EC23D0", VA = "0x182EC3DD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000084")]
	public static extern bool isDebugBuild
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000342")]
		[Address(RVA = "0x2EC3DA0", Offset = "0x2EC23A0", VA = "0x182EC3DA0")]
		get;
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x2EC25F0", Offset = "0x2EC0BF0", VA = "0x182EC25F0")]
	[ExcludeFromDocs]
	public static void DrawLine(Vector3 start, Vector3 end, Color color)
	{
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x2EC2550", Offset = "0x2EC0B50", VA = "0x182EC2550")]
	[UnityEngine.Bindings.FreeFunction("DebugDrawLine", IsThreadSafe = true)]
	public static void DrawLine(Vector3 start, Vector3 end, [DefaultValue("Color.white")] Color color, [DefaultValue("0.0f")] float duration, [DefaultValue("true")] bool depthTest)
	{
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x2EC26E0", Offset = "0x2EC0CE0", VA = "0x182EC26E0")]
	[ExcludeFromDocs]
	public static void DrawRay(Vector3 start, Vector3 dir, Color color, float duration)
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x2EC2870", Offset = "0x2EC0E70", VA = "0x182EC2870")]
	public static void DrawRay(Vector3 start, Vector3 dir, [DefaultValue("Color.white")] Color color, [DefaultValue("0.0f")] float duration, [DefaultValue("true")] bool depthTest)
	{
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x2EC29F0", Offset = "0x2EC0FF0", VA = "0x182EC29F0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static int ExtractStackTraceNoAlloc(byte* buffer, int bufferMax, string projectFolder)
	{
		return default(int);
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x2EC3BD0", Offset = "0x2EC21D0", VA = "0x182EC3BD0")]
	public static void Log(object message)
	{
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x2EC3B00", Offset = "0x2EC2100", VA = "0x182EC3B00")]
	public static void Log(object message, Object context)
	{
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x2EC3610", Offset = "0x2EC1C10", VA = "0x182EC3610")]
	public static void LogFormat(string format, params object[] args)
	{
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x2EC36E0", Offset = "0x2EC1CE0", VA = "0x182EC36E0")]
	public static void LogFormat(Object context, string format, params object[] args)
	{
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x2EC3370", Offset = "0x2EC1970", VA = "0x182EC3370")]
	public static void LogFormat(LogType logType, LogOption logOptions, Object context, string format, params object[] args)
	{
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x2EC3130", Offset = "0x2EC1730", VA = "0x182EC3130")]
	public static void LogError(object message)
	{
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x2EC3060", Offset = "0x2EC1660", VA = "0x182EC3060")]
	public static void LogError(object message, Object context)
	{
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x2EC2F90", Offset = "0x2EC1590", VA = "0x182EC2F90")]
	public static void LogErrorFormat(string format, params object[] args)
	{
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x2EC2EB0", Offset = "0x2EC14B0", VA = "0x182EC2EB0")]
	public static void LogErrorFormat(Object context, string format, params object[] args)
	{
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x2EC31F0", Offset = "0x2EC17F0", VA = "0x182EC31F0")]
	public static void LogException(Exception exception)
	{
	}

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x2EC32B0", Offset = "0x2EC18B0", VA = "0x182EC32B0")]
	public static void LogException(Exception exception, Object context)
	{
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x2EC3A40", Offset = "0x2EC2040", VA = "0x182EC3A40")]
	public static void LogWarning(object message)
	{
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x2EC3970", Offset = "0x2EC1F70", VA = "0x182EC3970")]
	public static void LogWarning(object message, Object context)
	{
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x2EC37C0", Offset = "0x2EC1DC0", VA = "0x182EC37C0")]
	public static void LogWarningFormat(string format, params object[] args)
	{
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x2EC3890", Offset = "0x2EC1E90", VA = "0x182EC3890")]
	public static void LogWarningFormat(Object context, string format, params object[] args)
	{
	}

	[Token(Token = "0x600033D")]
	[Address(RVA = "0x2EC20A0", Offset = "0x2EC06A0", VA = "0x182EC20A0")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void Assert(bool condition)
	{
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x2EC2180", Offset = "0x2EC0780", VA = "0x182EC2180")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void Assert(bool condition, string message)
	{
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x2EC1FC0", Offset = "0x2EC05C0", VA = "0x182EC1FC0")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void AssertFormat(bool condition, string format, params object[] args)
	{
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x2EC2DF0", Offset = "0x2EC13F0", VA = "0x182EC2DF0")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void LogAssertion(object message)
	{
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x2EC2D20", Offset = "0x2EC1320", VA = "0x182EC2D20")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void LogAssertionFormat(string format, params object[] args)
	{
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x2EC2250", Offset = "0x2EC0850", VA = "0x182EC2250")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool CallOverridenDebugHandler(Exception exception, Object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x2EC2BB0", Offset = "0x2EC11B0", VA = "0x182EC2BB0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool IsLoggingEnabled()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000346")]
	[Address(RVA = "0x2EC24E0", Offset = "0x2EC0AE0", VA = "0x182EC24E0")]
	private static extern void DrawLine_Injected([In] ref Vector3 start, [In] ref Vector3 end, [In][DefaultValue("Color.white")] ref Color color, [DefaultValue("0.0f")] float duration, [DefaultValue("true")] bool depthTest);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000347")]
	[Address(RVA = "0x2EC29A0", Offset = "0x2EC0FA0", VA = "0x182EC29A0")]
	private unsafe static extern int ExtractStackTraceNoAlloc_Injected(byte* buffer, int bufferMax, ref ManagedSpanWrapper projectFolder);
}
