// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.DebugLogHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4DB5ED0", Offset = "0x4DB5ED0", VA = "0x4DB5ED0")]
	[UnityEngine.ThreadAndSerializationSafe]
	internal static void Internal_Log(LogType level, LogOption options, string msg, Object obj)
	{
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x4DB5FE0", Offset = "0x4DB5FE0", VA = "0x4DB5FE0")]
	[UnityEngine.ThreadAndSerializationSafe]
	internal static void Internal_LogException(Exception ex, Object obj)
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x4DB60D0", Offset = "0x4DB60D0", VA = "0x4DB60D0", Slot = "4")]
	public void LogFormat(LogType logType, Object context, string format, params object[] args)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x4DB61A0", Offset = "0x4DB61A0", VA = "0x4DB61A0")]
	public void LogFormat(LogType logType, LogOption logOptions, Object context, string format, params object[] args)
	{
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x4DB6270", Offset = "0x4DB6270", VA = "0x4DB6270", Slot = "5")]
	public void LogException(Exception exception, Object context)
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x4DB6370", Offset = "0x4DB6370", VA = "0x4DB6370")]
	public DebugLogHandler()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600021C")]
	[Address(RVA = "0x4DB5F90", Offset = "0x4DB5F90", VA = "0x4DB5F90")]
	private static extern void Internal_Log_Injected(LogType level, LogOption options, string msg, IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600021D")]
	[Address(RVA = "0x4DB6090", Offset = "0x4DB6090", VA = "0x4DB6090")]
	private static extern void Internal_LogException_Injected(Exception ex, IntPtr obj);
}
