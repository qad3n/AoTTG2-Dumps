// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataCommonEventSource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics.Tracing;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000027")]
[EventSource(Name = "System.Data.DataCommonEventSource")]
internal class DataCommonEventSource : EventSource
{
	[Token(Token = "0x40000ED")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataCommonEventSource Log;

	[Token(Token = "0x40000EE")]
	[FieldOffset(Offset = "0x8")]
	private static long s_nextScopeId;

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x5E8BDA0", Offset = "0x5E8ADA0", VA = "0x5E8BDA0")]
	[Event(1, Level = EventLevel.Informational)]
	internal void Trace(string message)
	{
	}

	[Token(Token = "0x6000342")]
	[NonEvent]
	internal void Trace<T0>(string format, T0 arg0)
	{
	}

	[Token(Token = "0x6000343")]
	[NonEvent]
	internal void Trace<T0, T1>(string format, T0 arg0, T1 arg1)
	{
	}

	[Token(Token = "0x6000344")]
	[NonEvent]
	internal void Trace<T0, T1, T2>(string format, T0 arg0, T1 arg1, T2 arg2)
	{
	}

	[Token(Token = "0x6000345")]
	[NonEvent]
	internal void Trace<T0, T1, T2, T3>(string format, T0 arg0, T1 arg1, T2 arg2, T3 arg3)
	{
	}

	[Token(Token = "0x6000346")]
	[NonEvent]
	internal void Trace<T0, T1, T2, T3, T4>(string format, T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
	{
	}

	[Token(Token = "0x6000347")]
	[NonEvent]
	internal void Trace<T0, T1, T2, T3, T4, T5, T6>(string format, T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6)
	{
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x5E8BDB0", Offset = "0x5E8ADB0", VA = "0x5E8BDB0")]
	[Event(2, Level = EventLevel.Verbose)]
	internal long EnterScope(string message)
	{
		return default(long);
	}

	[Token(Token = "0x6000349")]
	[NonEvent]
	internal long EnterScope<T1>(string format, T1 arg1)
	{
		return default(long);
	}

	[Token(Token = "0x600034A")]
	[NonEvent]
	internal long EnterScope<T1, T2>(string format, T1 arg1, T2 arg2)
	{
		return default(long);
	}

	[Token(Token = "0x600034B")]
	[NonEvent]
	internal long EnterScope<T1, T2, T3>(string format, T1 arg1, T2 arg2, T3 arg3)
	{
		return default(long);
	}

	[Token(Token = "0x600034C")]
	[NonEvent]
	internal long EnterScope<T1, T2, T3, T4>(string format, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
	{
		return default(long);
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x5E8BEA0", Offset = "0x5E8AEA0", VA = "0x5E8BEA0")]
	[Event(3, Level = EventLevel.Verbose)]
	internal void ExitScope(long scopeId)
	{
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x5E8BEB0", Offset = "0x5E8AEB0", VA = "0x5E8BEB0")]
	public DataCommonEventSource()
	{
	}
}
