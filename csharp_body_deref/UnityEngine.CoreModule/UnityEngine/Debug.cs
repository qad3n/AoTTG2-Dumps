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
		[Address(RVA = "0x4A8EB60", Offset = "0x4A8EB60", VA = "0x4A8EB60")]
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
		[Address(RVA = "0x4A90EB0", Offset = "0x4A90EB0", VA = "0x4A90EB0")]
		get;
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x4A8EBD0", Offset = "0x4A8EBD0", VA = "0x4A8EBD0")]
	[ExcludeFromDocs]
	public static void DrawLine(Vector3 start, Vector3 end, Color color)
	{
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x4A8ED40", Offset = "0x4A8ED40", VA = "0x4A8ED40")]
	[UnityEngine.Bindings.FreeFunction("DebugDrawLine", IsThreadSafe = true)]
	public static void DrawLine(Vector3 start, Vector3 end, [DefaultValue("Color.white")] Color color, [DefaultValue("0.0f")] float duration, [DefaultValue("true")] bool depthTest)
	{
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x4A8EE60", Offset = "0x4A8EE60", VA = "0x4A8EE60")]
	[ExcludeFromDocs]
	public static void DrawRay(Vector3 start, Vector3 dir, Color color, float duration)
	{
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x4A8EF60", Offset = "0x4A8EF60", VA = "0x4A8EF60")]
	public static void DrawRay(Vector3 start, Vector3 dir, [DefaultValue("Color.white")] Color color, [DefaultValue("0.0f")] float duration, [DefaultValue("true")] bool depthTest)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000223")]
	[Address(RVA = "0x4A8F0E0", Offset = "0x4A8F0E0", VA = "0x4A8F0E0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static extern int ExtractStackTraceNoAlloc(byte* buffer, int bufferMax, string projectFolder);

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x4A8F120", Offset = "0x4A8F120", VA = "0x4A8F120")]
	public static void Log(object message)
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x4A8F2A0", Offset = "0x4A8F2A0", VA = "0x4A8F2A0")]
	public static void Log(object message, Object context)
	{
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x4A8F420", Offset = "0x4A8F420", VA = "0x4A8F420")]
	public static void LogFormat(string format, params object[] args)
	{
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x4A8F5A0", Offset = "0x4A8F5A0", VA = "0x4A8F5A0")]
	public static void LogFormat(Object context, string format, params object[] args)
	{
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x4A8F720", Offset = "0x4A8F720", VA = "0x4A8F720")]
	public static void LogFormat(LogType logType, LogOption logOptions, Object context, string format, params object[] args)
	{
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x4A8FB70", Offset = "0x4A8FB70", VA = "0x4A8FB70")]
	public static void LogError(object message)
	{
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x4A8FCF0", Offset = "0x4A8FCF0", VA = "0x4A8FCF0")]
	public static void LogError(object message, Object context)
	{
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x4A8FE70", Offset = "0x4A8FE70", VA = "0x4A8FE70")]
	public static void LogErrorFormat(string format, params object[] args)
	{
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x4A8FFF0", Offset = "0x4A8FFF0", VA = "0x4A8FFF0")]
	public static void LogErrorFormat(Object context, string format, params object[] args)
	{
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x4A881F0", Offset = "0x4A881F0", VA = "0x4A881F0")]
	public static void LogException(Exception exception)
	{
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x4A90170", Offset = "0x4A90170", VA = "0x4A90170")]
	public static void LogException(Exception exception, Object context)
	{
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x4A902E0", Offset = "0x4A902E0", VA = "0x4A902E0")]
	public static void LogWarning(object message)
	{
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x4A90460", Offset = "0x4A90460", VA = "0x4A90460")]
	public static void LogWarning(object message, Object context)
	{
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x4A905E0", Offset = "0x4A905E0", VA = "0x4A905E0")]
	public static void LogWarningFormat(string format, params object[] args)
	{
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x4A90760", Offset = "0x4A90760", VA = "0x4A90760")]
	public static void LogWarningFormat(Object context, string format, params object[] args)
	{
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x4A908E0", Offset = "0x4A908E0", VA = "0x4A908E0")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void Assert(bool condition)
	{
	}

	[Token(Token = "0x6000234")]
	[Address(RVA = "0x4A90A50", Offset = "0x4A90A50", VA = "0x4A90A50")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void Assert(bool condition, string message)
	{
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x4A90BB0", Offset = "0x4A90BB0", VA = "0x4A90BB0")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void LogAssertion(object message)
	{
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x4A90D30", Offset = "0x4A90D30", VA = "0x4A90D30")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void LogAssertionFormat(string format, params object[] args)
	{
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x4A90EE0", Offset = "0x4A90EE0", VA = "0x4A90EE0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool CallOverridenDebugHandler(Exception exception, Object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x4A913C0", Offset = "0x4A913C0", VA = "0x4A913C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool IsLoggingEnabled()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600023B")]
	[Address(RVA = "0x4A8EE00", Offset = "0x4A8EE00", VA = "0x4A8EE00")]
	private static extern void DrawLine_Injected([In] ref Vector3 start, [In] ref Vector3 end, [In][DefaultValue("Color.white")] ref Color color, [DefaultValue("0.0f")] float duration, [DefaultValue("true")] bool depthTest);
}
