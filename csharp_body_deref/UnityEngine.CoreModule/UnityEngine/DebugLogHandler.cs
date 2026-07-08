using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x200008D")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Debug/Debug.bindings.h")]
internal sealed class DebugLogHandler : ILogHandler
{
	[Token(Token = "0x6000216")]
	[Address(RVA = "0x4A8E6B0", Offset = "0x4A8E6B0", VA = "0x4A8E6B0")]
	[UnityEngine.ThreadAndSerializationSafe]
	internal static void Internal_Log(LogType level, LogOption options, string msg, Object obj)
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x4A8E7C0", Offset = "0x4A8E7C0", VA = "0x4A8E7C0")]
	[UnityEngine.ThreadAndSerializationSafe]
	internal static void Internal_LogException(Exception ex, Object obj)
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x4A8E8B0", Offset = "0x4A8E8B0", VA = "0x4A8E8B0", Slot = "4")]
	public void LogFormat(LogType logType, Object context, string format, params object[] args)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x4A8E980", Offset = "0x4A8E980", VA = "0x4A8E980")]
	public void LogFormat(LogType logType, LogOption logOptions, Object context, string format, params object[] args)
	{
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x4A8EA50", Offset = "0x4A8EA50", VA = "0x4A8EA50", Slot = "5")]
	public void LogException(Exception exception, Object context)
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x4A8EB50", Offset = "0x4A8EB50", VA = "0x4A8EB50")]
	public DebugLogHandler()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600021C")]
	[Address(RVA = "0x4A8E770", Offset = "0x4A8E770", VA = "0x4A8E770")]
	private static extern void Internal_Log_Injected(LogType level, LogOption options, string msg, IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600021D")]
	[Address(RVA = "0x4A8E870", Offset = "0x4A8E870", VA = "0x4A8E870")]
	private static extern void Internal_LogException_Injected(Exception ex, IntPtr obj);
}
