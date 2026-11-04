// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.TaskTracker
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Text;
using Cysharp.Threading.Tasks.Internal;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200003A")]
public static class TaskTracker
{
	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0x0")]
	private static List<KeyValuePair<IUniTaskSource, (string formattedType, int trackingId, DateTime addTime, string stackTrace)>> listPool;

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0x8")]
	private static readonly WeakDictionary<IUniTaskSource, (string formattedType, int trackingId, DateTime addTime, string stackTrace)> tracking;

	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0x10")]
	private static bool dirty;

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("UNITY_EDITOR")]
	public static void TrackActiveTask(IUniTaskSource task, int skipFrame)
	{
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("UNITY_EDITOR")]
	public static void RemoveTracking(IUniTaskSource task)
	{
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x2912110", Offset = "0x2910710", VA = "0x182912110")]
	public static bool CheckAndResetDirty()
	{
		return default(bool);
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x2912170", Offset = "0x2910770", VA = "0x182912170")]
	public static void ForEachActiveTask(Action<int, string, UniTaskStatus, DateTime, string> action)
	{
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x29125F0", Offset = "0x2910BF0", VA = "0x1829125F0")]
	private static void TypeBeautify(Type type, StringBuilder sb)
	{
	}
}
