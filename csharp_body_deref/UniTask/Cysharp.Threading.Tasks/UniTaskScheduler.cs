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

[Token(Token = "0x2000151")]
public static class UniTaskScheduler
{
	[Token(Token = "0x400053D")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	private static Action<Exception> m_UnobservedTaskException;

	[Token(Token = "0x400053E")]
	[FieldOffset(Offset = "0x8")]
	public static bool PropagateOperationCanceledException;

	[Token(Token = "0x400053F")]
	[FieldOffset(Offset = "0xC")]
	public static LogType UnobservedExceptionWriteLogType;

	[Token(Token = "0x4000540")]
	[FieldOffset(Offset = "0x10")]
	public static bool DispatchUnityMainThread;

	[Token(Token = "0x4000541")]
	[FieldOffset(Offset = "0x18")]
	private static readonly SendOrPostCallback handleExceptionInvoke;

	[Token(Token = "0x14000001")]
	public static event Action<Exception> UnobservedTaskException
	{
		[Token(Token = "0x60007DE")]
		[Address(RVA = "0x2948EB0", Offset = "0x29474B0", VA = "0x182948EB0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60007DF")]
		[Address(RVA = "0x2948FC0", Offset = "0x29475C0", VA = "0x182948FC0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x2948970", Offset = "0x2946F70", VA = "0x182948970")]
	private static void InvokeUnobservedTaskException(object state)
	{
	}

	[Token(Token = "0x60007E1")]
	[Address(RVA = "0x2948A30", Offset = "0x2947030", VA = "0x182948A30")]
	internal static void PublishUnobservedTaskException(Exception ex)
	{
	}
}
