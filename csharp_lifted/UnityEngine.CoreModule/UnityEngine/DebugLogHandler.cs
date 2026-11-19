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

[Token(Token = "0x20000AD")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Debug/Debug.bindings.h")]
internal sealed class DebugLogHandler : ILogHandler
{
	[Token(Token = "0x6000324")]
	[Address(RVA = "0x68C36E0", Offset = "0x68C26E0", VA = "0x68C36E0")]
	[UnityEngine.ThreadAndSerializationSafe]
	internal static void Internal_Log(LogType level, LogOption options, string msg, Object obj)
	{
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x68C38F0", Offset = "0x68C28F0", VA = "0x68C38F0")]
	[UnityEngine.ThreadAndSerializationSafe]
	internal static void Internal_LogException(Exception ex, Object obj)
	{
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x68C39D0", Offset = "0x68C29D0", VA = "0x68C39D0", Slot = "4")]
	public void LogFormat(LogType logType, Object context, string format, params object[] args)
	{
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x68C3A00", Offset = "0x68C2A00", VA = "0x68C3A00")]
	public void LogFormat(LogType logType, LogOption logOptions, Object context, string format, params object[] args)
	{
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x68C3A30", Offset = "0x68C2A30", VA = "0x68C3A30", Slot = "5")]
	public void LogException(Exception exception, Object context)
	{
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x68C3B20", Offset = "0x68C2B20", VA = "0x68C3B20")]
	public DebugLogHandler()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600032A")]
	[Address(RVA = "0x68C38A0", Offset = "0x68C28A0", VA = "0x68C38A0")]
	private static extern void Internal_Log_Injected(LogType level, LogOption options, ref ManagedSpanWrapper msg, IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600032B")]
	[Address(RVA = "0x68C3990", Offset = "0x68C2990", VA = "0x68C3990")]
	private static extern void Internal_LogException_Injected(Exception ex, IntPtr obj);
}
