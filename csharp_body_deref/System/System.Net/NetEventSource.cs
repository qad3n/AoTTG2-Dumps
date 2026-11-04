// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.NetEventSource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics.Tracing;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200029E")]
internal sealed class NetEventSource : EventSource
{
	[Token(Token = "0x200029F")]
	public class Keywords
	{
		[Token(Token = "0x400093F")]
		public const EventKeywords Default = (EventKeywords)1L;

		[Token(Token = "0x4000940")]
		public const EventKeywords Debug = (EventKeywords)2L;

		[Token(Token = "0x4000941")]
		public const EventKeywords EnterExit = (EventKeywords)4L;
	}

	[Token(Token = "0x400093E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly NetEventSource Log;

	[Token(Token = "0x170003B7")]
	public new static bool IsEnabled
	{
		[Token(Token = "0x6001263")]
		[Address(RVA = "0x2904C80", Offset = "0x2903280", VA = "0x182904C80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001253")]
	[Address(RVA = "0x2903380", Offset = "0x2901980", VA = "0x182903380")]
	[NonEvent]
	public static void Enter(object thisOrContextObject, [Optional] FormattableString formattableString, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x6001254")]
	[Address(RVA = "0x2903200", Offset = "0x2901800", VA = "0x182903200")]
	[NonEvent]
	public static void Enter(object thisOrContextObject, object arg0, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x6001255")]
	[Address(RVA = "0x2903510", Offset = "0x2901B10", VA = "0x182903510")]
	[NonEvent]
	public static void Enter(object thisOrContextObject, object arg0, object arg1, object arg2, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x6001256")]
	[Address(RVA = "0x29036B0", Offset = "0x2901CB0", VA = "0x1829036B0")]
	[Event(1, Level = EventLevel.Informational, Keywords = (EventKeywords)4L)]
	private void Enter(string thisOrContextObject, string memberName, string parameters)
	{
	}

	[Token(Token = "0x6001257")]
	[Address(RVA = "0x29039A0", Offset = "0x2901FA0", VA = "0x1829039A0")]
	[NonEvent]
	public static void Exit(object thisOrContextObject, [Optional] FormattableString formattableString, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x6001258")]
	[Address(RVA = "0x2903B30", Offset = "0x2902130", VA = "0x182903B30")]
	[NonEvent]
	public static void Exit(object thisOrContextObject, object arg0, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x6001259")]
	[Address(RVA = "0x2903920", Offset = "0x2901F20", VA = "0x182903920")]
	[Event(2, Level = EventLevel.Informational, Keywords = (EventKeywords)4L)]
	private void Exit(string thisOrContextObject, string memberName, string result)
	{
	}

	[Token(Token = "0x600125A")]
	[Address(RVA = "0x2904670", Offset = "0x2902C70", VA = "0x182904670")]
	[NonEvent]
	public static void Info(object thisOrContextObject, [Optional] FormattableString formattableString, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x600125B")]
	[Address(RVA = "0x2904880", Offset = "0x2902E80", VA = "0x182904880")]
	[NonEvent]
	public static void Info(object thisOrContextObject, object message, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x600125C")]
	[Address(RVA = "0x2904800", Offset = "0x2902E00", VA = "0x182904800")]
	[Event(4, Level = EventLevel.Informational, Keywords = (EventKeywords)1L)]
	private void Info(string thisOrContextObject, string memberName, string message)
	{
	}

	[Token(Token = "0x600125D")]
	[Address(RVA = "0x29037B0", Offset = "0x2901DB0", VA = "0x1829037B0")]
	[NonEvent]
	public static void Error(object thisOrContextObject, object message, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x600125E")]
	[Address(RVA = "0x2903730", Offset = "0x2901D30", VA = "0x182903730")]
	[Event(5, Level = EventLevel.Warning, Keywords = (EventKeywords)1L)]
	private void ErrorMessage(string thisOrContextObject, string memberName, string message)
	{
	}

	[Token(Token = "0x600125F")]
	[Address(RVA = "0x2903CA0", Offset = "0x29022A0", VA = "0x182903CA0")]
	[NonEvent]
	public static void Fail(object thisOrContextObject, object message, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x6001260")]
	[Address(RVA = "0x2903180", Offset = "0x2901780", VA = "0x182903180")]
	[Event(6, Level = EventLevel.Critical, Keywords = (EventKeywords)2L)]
	private void CriticalFailure(string thisOrContextObject, string memberName, string message)
	{
	}

	[Token(Token = "0x6001261")]
	[Address(RVA = "0x2902F80", Offset = "0x2901580", VA = "0x182902F80")]
	[NonEvent]
	public static void Associate(object first, object second, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x6001262")]
	[Address(RVA = "0x2903100", Offset = "0x2901700", VA = "0x182903100")]
	[Event(3, Level = EventLevel.Informational, Keywords = (EventKeywords)1L, Message = "[{2}]<-->[{3}]")]
	private void Associate(string thisOrContextObject, string memberName, string first, string second)
	{
	}

	[Token(Token = "0x6001264")]
	[Address(RVA = "0x2904580", Offset = "0x2902B80", VA = "0x182904580")]
	[NonEvent]
	public static string IdOf(object value)
	{
		return null;
	}

	[Token(Token = "0x6001265")]
	[Address(RVA = "0x7021A0", Offset = "0x7007A0", VA = "0x1807021A0")]
	[NonEvent]
	public static int GetHashCode(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6001266")]
	[Address(RVA = "0x2904160", Offset = "0x2902760", VA = "0x182904160")]
	[NonEvent]
	public static object Format(object value)
	{
		return null;
	}

	[Token(Token = "0x6001267")]
	[Address(RVA = "0x2903E10", Offset = "0x2902410", VA = "0x182903E10")]
	[NonEvent]
	private static string Format(FormattableString s)
	{
		return null;
	}

	[Token(Token = "0x6001268")]
	[Address(RVA = "0x29049F0", Offset = "0x2902FF0", VA = "0x1829049F0")]
	[NonEvent]
	private void WriteEvent(int eventId, string arg1, string arg2, string arg3, string arg4)
	{
	}

	[Token(Token = "0x6001269")]
	[Address(RVA = "0x1ACD670", Offset = "0x1ACBC70", VA = "0x181ACD670")]
	public NetEventSource()
	{
	}
}
