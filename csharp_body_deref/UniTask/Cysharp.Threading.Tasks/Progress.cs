// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Progress
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000067")]
public static class Progress
{
	[Token(Token = "0x2000068")]
	private sealed class NullProgress<T> : IProgress<T>
	{
		[Token(Token = "0x40000DB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly IProgress<T> Instance;

		[Token(Token = "0x6000166")]
		private NullProgress()
		{
		}

		[Token(Token = "0x6000167")]
		public void Report(T value)
		{
		}
	}

	[Token(Token = "0x2000069")]
	private sealed class AnonymousProgress<T> : IProgress<T>
	{
		[Token(Token = "0x40000DC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly Action<T> action;

		[Token(Token = "0x6000169")]
		public AnonymousProgress(Action<T> action)
		{
		}

		[Token(Token = "0x600016A")]
		public void Report(T value)
		{
		}
	}

	[Token(Token = "0x200006A")]
	private sealed class OnlyValueChangedProgress<T> : IProgress<T>
	{
		[Token(Token = "0x40000DD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly Action<T> action;

		[Token(Token = "0x40000DE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly IEqualityComparer<T> comparer;

		[Token(Token = "0x40000DF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool isFirstCall;

		[Token(Token = "0x40000E0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T latestValue;

		[Token(Token = "0x600016B")]
		public OnlyValueChangedProgress(Action<T> action, IEqualityComparer<T> comparer)
		{
		}

		[Token(Token = "0x600016C")]
		public void Report(T value)
		{
		}
	}

	[Token(Token = "0x6000164")]
	public static IProgress<T> Create<T>(Action<T> handler)
	{
		return null;
	}

	[Token(Token = "0x6000165")]
	public static IProgress<T> CreateOnlyValueChanged<T>(Action<T> handler, [Optional] IEqualityComparer<T> comparer)
	{
		return null;
	}
}
