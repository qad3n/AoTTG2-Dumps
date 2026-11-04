// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.DebugLogHandler
// Update status: CHANGED in this game update
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
	[Token(Token = "0x6000320")]
	[Address(RVA = "0x2EC1C80", Offset = "0x2EC0280", VA = "0x182EC1C80")]
	[UnityEngine.ThreadAndSerializationSafe]
	internal static void Internal_Log(LogType level, LogOption options, string msg, Object obj)
	{
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x2EC1BB0", Offset = "0x2EC01B0", VA = "0x182EC1BB0")]
	[UnityEngine.ThreadAndSerializationSafe]
	internal static void Internal_LogException(Exception ex, Object obj)
	{
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x2EC1F20", Offset = "0x2EC0520", VA = "0x182EC1F20", Slot = "4")]
	public void LogFormat(LogType logType, Object context, string format, params object[] args)
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x2EC1F70", Offset = "0x2EC0570", VA = "0x182EC1F70")]
	public void LogFormat(LogType logType, LogOption logOptions, Object context, string format, params object[] args)
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x2EC1E50", Offset = "0x2EC0450", VA = "0x182EC1E50", Slot = "5")]
	public void LogException(Exception exception, Object context)
	{
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public DebugLogHandler()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000326")]
	[Address(RVA = "0x2EC1C30", Offset = "0x2EC0230", VA = "0x182EC1C30")]
	private static extern void Internal_Log_Injected(LogType level, LogOption options, ref ManagedSpanWrapper msg, IntPtr obj);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000327")]
	[Address(RVA = "0x2EC1B60", Offset = "0x2EC0160", VA = "0x182EC1B60")]
	private static extern void Internal_LogException_Injected(Exception ex, IntPtr obj);
}
