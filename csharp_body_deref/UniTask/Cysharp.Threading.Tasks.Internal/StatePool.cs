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

[Token(Token = "0x2000236")]
internal static class StatePool<T1>
{
	[Token(Token = "0x400066D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConcurrentQueue<StateTuple<T1>> queue;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CD5")]
	public static StateTuple<T1> Create(T1 item1)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CD6")]
	public static void Return(StateTuple<T1> tuple)
	{
	}
}
[Token(Token = "0x2000238")]
internal static class StatePool<T1, T2>
{
	[Token(Token = "0x4000670")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConcurrentQueue<StateTuple<T1, T2>> queue;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CDB")]
	public static StateTuple<T1, T2> Create(T1 item1, T2 item2)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CDC")]
	public static void Return(StateTuple<T1, T2> tuple)
	{
	}
}
[Token(Token = "0x200023A")]
internal static class StatePool<T1, T2, T3>
{
	[Token(Token = "0x4000674")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConcurrentQueue<StateTuple<T1, T2, T3>> queue;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CE1")]
	public static StateTuple<T1, T2, T3> Create(T1 item1, T2 item2, T3 item3)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CE2")]
	public static void Return(StateTuple<T1, T2, T3> tuple)
	{
	}
}
