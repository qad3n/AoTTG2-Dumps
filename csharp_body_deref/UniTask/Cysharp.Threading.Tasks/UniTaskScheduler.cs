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
		[Address(RVA = "0x46D1F00", Offset = "0x46D1F00", VA = "0x46D1F00")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60007E1")]
		[Address(RVA = "0x46D1FF0", Offset = "0x46D1FF0", VA = "0x46D1FF0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x46D20E0", Offset = "0x46D20E0", VA = "0x46D20E0")]
	private static void InvokeUnobservedTaskException(object state)
	{
	}

	[Token(Token = "0x60007E3")]
	[Address(RVA = "0x46D21C0", Offset = "0x46D21C0", VA = "0x46D21C0")]
	internal static void PublishUnobservedTaskException(Exception ex)
	{
	}
}
