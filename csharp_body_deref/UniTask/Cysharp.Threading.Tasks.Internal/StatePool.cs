// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Internal.StatePool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Concurrent;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x2000239")]
internal static class StatePool<T1>
{
	[Token(Token = "0x4000680")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConcurrentQueue<StateTuple<T1>> queue;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CF9")]
	public static StateTuple<T1> Create(T1 item1)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CFA")]
	public static void Return(StateTuple<T1> tuple)
	{
	}
}
[Token(Token = "0x200023B")]
internal static class StatePool<T1, T2>
{
	[Token(Token = "0x4000683")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConcurrentQueue<StateTuple<T1, T2>> queue;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CFF")]
	public static StateTuple<T1, T2> Create(T1 item1, T2 item2)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D00")]
	public static void Return(StateTuple<T1, T2> tuple)
	{
	}
}
[Token(Token = "0x200023D")]
internal static class StatePool<T1, T2, T3>
{
	[Token(Token = "0x4000687")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConcurrentQueue<StateTuple<T1, T2, T3>> queue;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D05")]
	public static StateTuple<T1, T2, T3> Create(T1 item1, T2 item2, T3 item3)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D06")]
	public static void Return(StateTuple<T1, T2, T3> tuple)
	{
	}
}
