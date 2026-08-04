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

[Token(Token = "0x2000069")]
public static class Progress
{
	[Token(Token = "0x200006A")]
	private sealed class NullProgress<T> : IProgress<T>
	{
		[Token(Token = "0x40000E0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static readonly IProgress<T> Instance;

		[Token(Token = "0x6000168")]
		private NullProgress()
		{
		}

		[Token(Token = "0x6000169")]
		public void Report(T value)
		{
		}
	}

	[Token(Token = "0x200006B")]
	private sealed class AnonymousProgress<T> : IProgress<T>
	{
		[Token(Token = "0x40000E1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly Action<T> action;

		[Token(Token = "0x600016B")]
		public AnonymousProgress(Action<T> action)
		{
		}

		[Token(Token = "0x600016C")]
		public void Report(T value)
		{
		}
	}

	[Token(Token = "0x200006C")]
	private sealed class OnlyValueChangedProgress<T> : IProgress<T>
	{
		[Token(Token = "0x40000E2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly Action<T> action;

		[Token(Token = "0x40000E3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly IEqualityComparer<T> comparer;

		[Token(Token = "0x40000E4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool isFirstCall;

		[Token(Token = "0x40000E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T latestValue;

		[Token(Token = "0x600016D")]
		public OnlyValueChangedProgress(Action<T> action, IEqualityComparer<T> comparer)
		{
		}

		[Token(Token = "0x600016E")]
		public void Report(T value)
		{
		}
	}

	[Token(Token = "0x6000166")]
	public static IProgress<T> Create<T>(Action<T> handler)
	{
		return null;
	}

	[Token(Token = "0x6000167")]
	public static IProgress<T> CreateOnlyValueChanged<T>(Action<T> handler, [Optional] IEqualityComparer<T> comparer)
	{
		return null;
	}
}
