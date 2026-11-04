// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.UnityThread
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Concurrent;
using System.Diagnostics;
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x200019E")]
public static class UnityThread
{
	[Token(Token = "0x40008DB")]
	[FieldOffset(Offset = "0x0")]
	public static Thread thread;

	[Token(Token = "0x40008DC")]
	[FieldOffset(Offset = "0x8")]
	public static Action<Action> editorAsync;

	[Token(Token = "0x40008DD")]
	[FieldOffset(Offset = "0x10")]
	public static ConcurrentQueue<Action> pendingQueue;

	[Token(Token = "0x170001CD")]
	public static bool allowsAPI
	{
		[Token(Token = "0x6001002")]
		[Address(RVA = "0x2E4EAC0", Offset = "0x2E4D0C0", VA = "0x182E4EAC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001003")]
	[Address(RVA = "0x2E4E900", Offset = "0x2E4CF00", VA = "0x182E4E900")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterAssembliesLoaded)]
	private static void ResetStaticsOnLoad()
	{
	}

	[Token(Token = "0x6001004")]
	[Address(RVA = "0x2E4E820", Offset = "0x2E4CE20", VA = "0x182E4E820")]
	[Conditional("UNITY_EDITOR")]
	public static void EditorAsync(Action action)
	{
	}
}
