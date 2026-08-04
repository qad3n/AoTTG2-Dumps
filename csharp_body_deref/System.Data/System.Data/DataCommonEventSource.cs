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

[Token(Token = "0x2000007")]
[EventSource(Name = "System.Data.DataCommonEventSource")]
internal class DataCommonEventSource : EventSource
{
	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataCommonEventSource Log;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x8")]
	private static long s_nextScopeId;

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x45331B0", Offset = "0x45331B0", VA = "0x45331B0")]
	[Event(1, Level = EventLevel.Informational)]
	internal void Trace(string message)
	{
	}

	[Token(Token = "0x6000018")]
	[NonEvent]
	internal void Trace<T0>(string format, T0 arg0)
	{
	}

	[Token(Token = "0x6000019")]
	[NonEvent]
	internal void Trace<T0, T1>(string format, T0 arg0, T1 arg1)
	{
	}

	[Token(Token = "0x600001A")]
	[NonEvent]
	internal void Trace<T0, T1, T2>(string format, T0 arg0, T1 arg1, T2 arg2)
	{
	}

	[Token(Token = "0x600001B")]
	[NonEvent]
	internal void Trace<T0, T1, T2, T3>(string format, T0 arg0, T1 arg1, T2 arg2, T3 arg3)
	{
	}

	[Token(Token = "0x600001C")]
	[NonEvent]
	internal void Trace<T0, T1, T2, T3, T4>(string format, T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
	{
	}

	[Token(Token = "0x600001D")]
	[NonEvent]
	internal void Trace<T0, T1, T2, T3, T4, T5, T6>(string format, T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6)
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x45331C0", Offset = "0x45331C0", VA = "0x45331C0")]
	[Event(2, Level = EventLevel.Verbose)]
	internal long EnterScope(string message)
	{
		return default(long);
	}

	[Token(Token = "0x600001F")]
	[NonEvent]
	internal long EnterScope<T1>(string format, T1 arg1)
	{
		return default(long);
	}

	[Token(Token = "0x6000020")]
	[NonEvent]
	internal long EnterScope<T1, T2>(string format, T1 arg1, T2 arg2)
	{
		return default(long);
	}

	[Token(Token = "0x6000021")]
	[NonEvent]
	internal long EnterScope<T1, T2, T3>(string format, T1 arg1, T2 arg2, T3 arg3)
	{
		return default(long);
	}

	[Token(Token = "0x6000022")]
	[NonEvent]
	internal long EnterScope<T1, T2, T3, T4>(string format, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
	{
		return default(long);
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x45332B0", Offset = "0x45332B0", VA = "0x45332B0")]
	[Event(3, Level = EventLevel.Verbose)]
	internal void ExitScope(long scopeId)
	{
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x45332C0", Offset = "0x45332C0", VA = "0x45332C0")]
	public DataCommonEventSource()
	{
	}
}
