// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.UniTaskScheduler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000153")]
public static class UniTaskScheduler
{
	[Token(Token = "0x4000543")]
	[FieldOffset(Offset = "0x8")]
	public static bool PropagateOperationCanceledException;

	[Token(Token = "0x4000544")]
	[FieldOffset(Offset = "0xC")]
	public static LogType UnobservedExceptionWriteLogType;

	[Token(Token = "0x4000545")]
	[FieldOffset(Offset = "0x10")]
	public static bool DispatchUnityMainThread;

	[Token(Token = "0x4000546")]
	[FieldOffset(Offset = "0x18")]
	private static readonly SendOrPostCallback handleExceptionInvoke;

	[Token(Token = "0x14000001")]
	public static event Action<Exception> UnobservedTaskException
	{
		[Token(Token = "0x60007E0")]
		[Address(RVA = "0x49F7000", Offset = "0x49F7000", VA = "0x49F7000")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60007E1")]
		[Address(RVA = "0x49F70F0", Offset = "0x49F70F0", VA = "0x49F70F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x49F71E0", Offset = "0x49F71E0", VA = "0x49F71E0")]
	private static void InvokeUnobservedTaskException(object state)
	{
	}

	[Token(Token = "0x60007E3")]
	[Address(RVA = "0x49F72C0", Offset = "0x49F72C0", VA = "0x49F72C0")]
	internal static void PublishUnobservedTaskException(Exception ex)
	{
	}
}
