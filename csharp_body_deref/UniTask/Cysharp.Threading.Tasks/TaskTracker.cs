using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Text;
using Cysharp.Threading.Tasks.Internal;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200003C")]
public static class TaskTracker
{
	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x0")]
	private static List<KeyValuePair<IUniTaskSource, (string formattedType, int trackingId, DateTime addTime, string stackTrace)>> listPool;

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0x8")]
	private static readonly WeakDictionary<IUniTaskSource, (string formattedType, int trackingId, DateTime addTime, string stackTrace)> tracking;

	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0x10")]
	private static bool dirty;

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x46B0B30", Offset = "0x46B0B30", VA = "0x46B0B30")]
	[Conditional("UNITY_EDITOR")]
	public static void TrackActiveTask(IUniTaskSource task, int skipFrame)
	{
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x46B0B40", Offset = "0x46B0B40", VA = "0x46B0B40")]
	[Conditional("UNITY_EDITOR")]
	public static void RemoveTracking(IUniTaskSource task)
	{
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x46B0B50", Offset = "0x46B0B50", VA = "0x46B0B50")]
	public static bool CheckAndResetDirty()
	{
		return default(bool);
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x46B0BA0", Offset = "0x46B0BA0", VA = "0x46B0BA0")]
	public static void ForEachActiveTask(Action<int, string, UniTaskStatus, DateTime, string> action)
	{
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x46B11C0", Offset = "0x46B11C0", VA = "0x46B11C0")]
	private static void TypeBeautify(Type type, StringBuilder sb)
	{
	}
}
