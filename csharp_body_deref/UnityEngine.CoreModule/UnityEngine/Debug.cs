// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Debug
// Update status: unchanged since the previous dump
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

[Token(Token = "0x200008E")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Debug/Debug.bindings.h")]
public class Debug
{
	[Token(Token = "0x4000179")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly ILogger s_DefaultLogger;

	[Token(Token = "0x400017A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static ILogger s_Logger;

	[Token(Token = "0x17000068")]
	public static ILogger unityLogger
	{
		[Token(Token = "0x600021E")]
		[Address(RVA = "0x4DB6380", Offset = "0x4DB6380", VA = "0x4DB6380")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000069")]
	public static extern bool isDebugBuild
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000237")]
		[Address(RVA = "0x4DB86D0", Offset = "0x4DB86D0", VA = "0x4DB86D0")]
		get;
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x4DB63F0", Offset = "0x4DB63F0", VA = "0x4DB63F0")]
	[ExcludeFromDocs]
	public static void DrawLine(Vector3 start, Vector3 end, Color color)
	{
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x4DB6560", Offset = "0x4DB6560", VA = "0x4DB6560")]
	[UnityEngine.Bindings.FreeFunction("DebugDrawLine", IsThreadSafe = true)]
	public static void DrawLine(Vector3 start, Vector3 end, [DefaultValue("Color.white")] Color color, [DefaultValue("0.0f")] float duration, [DefaultValue("true")] bool depthTest)
	{
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x4DB6680", Offset = "0x4DB6680", VA = "0x4DB6680")]
	[ExcludeFromDocs]
	public static void DrawRay(Vector3 start, Vector3 dir, Color color, float duration)
	{
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x4DB6780", Offset = "0x4DB6780", VA = "0x4DB6780")]
	public static void DrawRay(Vector3 start, Vector3 dir, [DefaultValue("Color.white")] Color color, [DefaultValue("0.0f")] float duration, [DefaultValue("true")] bool depthTest)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000223")]
	[Address(RVA = "0x4DB6900", Offset = "0x4DB6900", VA = "0x4DB6900")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern int ExtractStackTraceNoAlloc(byte* buffer, int bufferMax, string projectFolder);

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x4DB6940", Offset = "0x4DB6940", VA = "0x4DB6940")]
	public static void Log(object message)
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x4DB6AC0", Offset = "0x4DB6AC0", VA = "0x4DB6AC0")]
	public static void Log(object message, Object context)
	{
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x4DB6C40", Offset = "0x4DB6C40", VA = "0x4DB6C40")]
	public static void LogFormat(string format, params object[] args)
	{
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x4DB6DC0", Offset = "0x4DB6DC0", VA = "0x4DB6DC0")]
	public static void LogFormat(Object context, string format, params object[] args)
	{
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x4DB6F40", Offset = "0x4DB6F40", VA = "0x4DB6F40")]
	public static void LogFormat(LogType logType, LogOption logOptions, Object context, string format, params object[] args)
	{
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x4DB7390", Offset = "0x4DB7390", VA = "0x4DB7390")]
	public static void LogError(object message)
	{
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x4DB7510", Offset = "0x4DB7510", VA = "0x4DB7510")]
	public static void LogError(object message, Object context)
	{
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x4DB7690", Offset = "0x4DB7690", VA = "0x4DB7690")]
	public static void LogErrorFormat(string format, params object[] args)
	{
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x4DB7810", Offset = "0x4DB7810", VA = "0x4DB7810")]
	public static void LogErrorFormat(Object context, string format, params object[] args)
	{
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x4DAFA10", Offset = "0x4DAFA10", VA = "0x4DAFA10")]
	public static void LogException(Exception exception)
	{
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x4DB7990", Offset = "0x4DB7990", VA = "0x4DB7990")]
	public static void LogException(Exception exception, Object context)
	{
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x4DB7B00", Offset = "0x4DB7B00", VA = "0x4DB7B00")]
	public static void LogWarning(object message)
	{
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x4DB7C80", Offset = "0x4DB7C80", VA = "0x4DB7C80")]
	public static void LogWarning(object message, Object context)
	{
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x4DB7E00", Offset = "0x4DB7E00", VA = "0x4DB7E00")]
	public static void LogWarningFormat(string format, params object[] args)
	{
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x4DB7F80", Offset = "0x4DB7F80", VA = "0x4DB7F80")]
	public static void LogWarningFormat(Object context, string format, params object[] args)
	{
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x4DB8100", Offset = "0x4DB8100", VA = "0x4DB8100")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void Assert(bool condition)
	{
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x4DB8270", Offset = "0x4DB8270", VA = "0x4DB8270")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void Assert(bool condition, string message)
	{
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x4DB83D0", Offset = "0x4DB83D0", VA = "0x4DB83D0")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void LogAssertion(object message)
	{
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x4DB8550", Offset = "0x4DB8550", VA = "0x4DB8550")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void LogAssertionFormat(string format, params object[] args)
	{
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x4DB8700", Offset = "0x4DB8700", VA = "0x4DB8700")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool CallOverridenDebugHandler(Exception exception, Object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x4DB8BE0", Offset = "0x4DB8BE0", VA = "0x4DB8BE0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool IsLoggingEnabled()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600023B")]
	[Address(RVA = "0x4DB6620", Offset = "0x4DB6620", VA = "0x4DB6620")]
	private static extern void DrawLine_Injected([In] ref Vector3 start, [In] ref Vector3 end, [In][DefaultValue("Color.white")] ref Color color, [DefaultValue("0.0f")] float duration, [DefaultValue("true")] bool depthTest);
}
