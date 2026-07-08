using System;
using System.Collections.Concurrent;
using System.Diagnostics;
using System.Threading;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200019E")]
public static class UnityThread
{
	[Token(Token = "0x40008DD")]
	[FieldOffset(Offset = "0x0")]
	public static Thread thread;

	[Token(Token = "0x40008DE")]
	[FieldOffset(Offset = "0x8")]
	public static Action<Action> editorAsync;

	[Token(Token = "0x40008DF")]
	[FieldOffset(Offset = "0x10")]
	public static ConcurrentQueue<Action> pendingQueue;

	[Token(Token = "0x170001CA")]
	public static bool allowsAPI
	{
		[Token(Token = "0x6000FF5")]
		[Address(RVA = "0x4A374F0", Offset = "0x4A374F0", VA = "0x4A374F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000FF6")]
	[Address(RVA = "0x4A38B50", Offset = "0x4A38B50", VA = "0x4A38B50")]
	internal static void RuntimeInitialize()
	{
	}

	[Token(Token = "0x6000FF7")]
	[Address(RVA = "0x4A38BC0", Offset = "0x4A38BC0", VA = "0x4A38BC0")]
	[Conditional("UNITY_EDITOR")]
	public static void EditorAsync(Action action)
	{
	}
}
