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

[Token(Token = "0x20000AE")]
[UnityEngine.Bindings.NativeHeader("Runtime/Diagnostics/IntegrityCheck.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Diagnostics/Validation.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Debug/Debug.bindings.h")]
public class Debug
{
	[Token(Token = "0x40001CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly ILogger s_DefaultLogger;

	[Token(Token = "0x40001CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static ILogger s_Logger;

	[Token(Token = "0x17000084")]
	public static ILogger unityLogger
	{
		[Token(Token = "0x600032C")]
		[Address(RVA = "0x68C3B30", Offset = "0x68C2B30", VA = "0x68C3B30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000085")]
	public static extern bool isDebugBuild
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000346")]
		[Address(RVA = "0x68C5FA0", Offset = "0x68C4FA0", VA = "0x68C5FA0")]
		get;
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x68C3BA0", Offset = "0x68C2BA0", VA = "0x68C3BA0")]
	[ExcludeFromDocs]
	public static void DrawLine(Vector3 start, Vector3 end, Color color)
	{
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x68C3D10", Offset = "0x68C2D10", VA = "0x68C3D10")]
	[UnityEngine.Bindings.FreeFunction("DebugDrawLine", IsThreadSafe = true)]
	public static void DrawLine(Vector3 start, Vector3 end, [DefaultValue("Color.white")] Color color, [DefaultValue("0.0f")] float duration, [DefaultValue("true")] bool depthTest)
	{
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x68C3E30", Offset = "0x68C2E30", VA = "0x68C3E30")]
	[ExcludeFromDocs]
	public static void DrawRay(Vector3 start, Vector3 dir, Color color, float duration)
	{
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x68C3F40", Offset = "0x68C2F40", VA = "0x68C3F40")]
	public static void DrawRay(Vector3 start, Vector3 dir, [DefaultValue("Color.white")] Color color, [DefaultValue("0.0f")] float duration, [DefaultValue("true")] bool depthTest)
	{
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x68C40C0", Offset = "0x68C30C0", VA = "0x68C40C0")]
	[UnityEngine.Bindings.ThreadSafe]
	public unsafe static int ExtractStackTraceNoAlloc(byte* buffer, int bufferMax, string projectFolder)
	{
		return default(int);
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x68C42A0", Offset = "0x68C32A0", VA = "0x68C42A0")]
	public static void Log(object message)
	{
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x68C4420", Offset = "0x68C3420", VA = "0x68C4420")]
	public static void Log(object message, Object context)
	{
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x68C45A0", Offset = "0x68C35A0", VA = "0x68C45A0")]
	public static void LogFormat(string format, params object[] args)
	{
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x68C4720", Offset = "0x68C3720", VA = "0x68C4720")]
	public static void LogFormat(Object context, string format, params object[] args)
	{
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x68C48A0", Offset = "0x68C38A0", VA = "0x68C48A0")]
	public static void LogFormat(LogType logType, LogOption logOptions, Object context, string format, params object[] args)
	{
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x68C4C70", Offset = "0x68C3C70", VA = "0x68C4C70")]
	public static void LogError(object message)
	{
	}

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x68C4DF0", Offset = "0x68C3DF0", VA = "0x68C4DF0")]
	public static void LogError(object message, Object context)
	{
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x68C4F70", Offset = "0x68C3F70", VA = "0x68C4F70")]
	public static void LogErrorFormat(string format, params object[] args)
	{
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x68C50F0", Offset = "0x68C40F0", VA = "0x68C50F0")]
	public static void LogErrorFormat(Object context, string format, params object[] args)
	{
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x68BD800", Offset = "0x68BC800", VA = "0x68BD800")]
	public static void LogException(Exception exception)
	{
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x68B8D60", Offset = "0x68B7D60", VA = "0x68B8D60")]
	public static void LogException(Exception exception, Object context)
	{
	}

	[Token(Token = "0x600033D")]
	[Address(RVA = "0x68C5270", Offset = "0x68C4270", VA = "0x68C5270")]
	public static void LogWarning(object message)
	{
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x68C53F0", Offset = "0x68C43F0", VA = "0x68C53F0")]
	public static void LogWarning(object message, Object context)
	{
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x68C5570", Offset = "0x68C4570", VA = "0x68C5570")]
	public static void LogWarningFormat(string format, params object[] args)
	{
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x68C56F0", Offset = "0x68C46F0", VA = "0x68C56F0")]
	public static void LogWarningFormat(Object context, string format, params object[] args)
	{
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x68C5870", Offset = "0x68C4870", VA = "0x68C5870")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void Assert(bool condition)
	{
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x68C59E0", Offset = "0x68C49E0", VA = "0x68C59E0")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void Assert(bool condition, string message)
	{
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x68C5B40", Offset = "0x68C4B40", VA = "0x68C5B40")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void AssertFormat(bool condition, string format, params object[] args)
	{
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x68C5CA0", Offset = "0x68C4CA0", VA = "0x68C5CA0")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void LogAssertion(object message)
	{
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x68C5E20", Offset = "0x68C4E20", VA = "0x68C5E20")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void LogAssertionFormat(string format, params object[] args)
	{
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x68C5FD0", Offset = "0x68C4FD0", VA = "0x68C5FD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool CallOverridenDebugHandler(Exception exception, Object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x68C63A0", Offset = "0x68C53A0", VA = "0x68C63A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool IsLoggingEnabled()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600034A")]
	[Address(RVA = "0x68C3DD0", Offset = "0x68C2DD0", VA = "0x68C3DD0")]
	private static extern void DrawLine_Injected([In] ref Vector3 start, [In] ref Vector3 end, [In][DefaultValue("Color.white")] ref Color color, [DefaultValue("0.0f")] float duration, [DefaultValue("true")] bool depthTest);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600034B")]
	[Address(RVA = "0x68C4260", Offset = "0x68C3260", VA = "0x68C4260")]
	private unsafe static extern int ExtractStackTraceNoAlloc_Injected(byte* buffer, int bufferMax, ref ManagedSpanWrapper projectFolder);
}
