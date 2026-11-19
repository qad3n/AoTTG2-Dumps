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

[Token(Token = "0x200025F")]
internal sealed class NetEventSource : EventSource
{
	[Token(Token = "0x2000260")]
	public class Keywords
	{
		[Token(Token = "0x4000870")]
		public const EventKeywords Default = (EventKeywords)1L;

		[Token(Token = "0x4000871")]
		public const EventKeywords Debug = (EventKeywords)2L;

		[Token(Token = "0x4000872")]
		public const EventKeywords EnterExit = (EventKeywords)4L;
	}

	[Token(Token = "0x400086F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly NetEventSource Log;

	[Token(Token = "0x17000388")]
	public new static bool IsEnabled
	{
		[Token(Token = "0x60010A5")]
		[Address(RVA = "0x628F480", Offset = "0x628E480", VA = "0x628F480")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001095")]
	[Address(RVA = "0x6290580", Offset = "0x628F580", VA = "0x6290580")]
	[NonEvent]
	public static void Enter(object thisOrContextObject, [Optional] FormattableString formattableString, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x6001096")]
	[Address(RVA = "0x6290C10", Offset = "0x628FC10", VA = "0x6290C10")]
	[NonEvent]
	public static void Enter(object thisOrContextObject, object arg0, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x6001097")]
	[Address(RVA = "0x6291150", Offset = "0x6290150", VA = "0x6291150")]
	[NonEvent]
	public static void Enter(object thisOrContextObject, object arg0, object arg1, object arg2, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x6001098")]
	[Address(RVA = "0x6290BA0", Offset = "0x628FBA0", VA = "0x6290BA0")]
	[Event(1, Level = EventLevel.Informational, Keywords = (EventKeywords)4L)]
	private void Enter(string thisOrContextObject, string memberName, string parameters)
	{
	}

	[Token(Token = "0x6001099")]
	[Address(RVA = "0x6291320", Offset = "0x6290320", VA = "0x6291320")]
	[NonEvent]
	public static void Exit(object thisOrContextObject, [Optional] FormattableString formattableString, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x600109A")]
	[Address(RVA = "0x6291530", Offset = "0x6290530", VA = "0x6291530")]
	[NonEvent]
	public static void Exit(object thisOrContextObject, object arg0, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x600109B")]
	[Address(RVA = "0x62914C0", Offset = "0x62904C0", VA = "0x62914C0")]
	[Event(2, Level = EventLevel.Informational, Keywords = (EventKeywords)4L)]
	private void Exit(string thisOrContextObject, string memberName, string result)
	{
	}

	[Token(Token = "0x600109C")]
	[Address(RVA = "0x628F500", Offset = "0x628E500", VA = "0x628F500")]
	[NonEvent]
	public static void Info(object thisOrContextObject, [Optional] FormattableString formattableString, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x600109D")]
	[Address(RVA = "0x628F6A0", Offset = "0x628E6A0", VA = "0x628F6A0")]
	[NonEvent]
	public static void Info(object thisOrContextObject, object message, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x600109E")]
	[Address(RVA = "0x62916C0", Offset = "0x62906C0", VA = "0x62916C0")]
	[Event(4, Level = EventLevel.Informational, Keywords = (EventKeywords)1L)]
	private void Info(string thisOrContextObject, string memberName, string message)
	{
	}

	[Token(Token = "0x600109F")]
	[Address(RVA = "0x6291730", Offset = "0x6290730", VA = "0x6291730")]
	[NonEvent]
	public static void Error(object thisOrContextObject, object message, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x60010A0")]
	[Address(RVA = "0x62918C0", Offset = "0x62908C0", VA = "0x62918C0")]
	[Event(5, Level = EventLevel.Warning, Keywords = (EventKeywords)1L)]
	private void ErrorMessage(string thisOrContextObject, string memberName, string message)
	{
	}

	[Token(Token = "0x60010A1")]
	[Address(RVA = "0x628EB40", Offset = "0x628DB40", VA = "0x628EB40")]
	[NonEvent]
	public static void Fail(object thisOrContextObject, object message, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x60010A2")]
	[Address(RVA = "0x6291930", Offset = "0x6290930", VA = "0x6291930")]
	[Event(6, Level = EventLevel.Critical, Keywords = (EventKeywords)2L)]
	private void CriticalFailure(string thisOrContextObject, string memberName, string message)
	{
	}

	[Token(Token = "0x60010A3")]
	[Address(RVA = "0x62919A0", Offset = "0x62909A0", VA = "0x62919A0")]
	[NonEvent]
	public static void Associate(object first, object second, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x60010A4")]
	[Address(RVA = "0x6291B20", Offset = "0x6290B20", VA = "0x6291B20")]
	[Event(3, Level = EventLevel.Informational, Keywords = (EventKeywords)1L, Message = "[{2}]<-->[{3}]")]
	private void Associate(string thisOrContextObject, string memberName, string first, string second)
	{
	}

	[Token(Token = "0x60010A6")]
	[Address(RVA = "0x6290720", Offset = "0x628F720", VA = "0x6290720")]
	[NonEvent]
	public static string IdOf(object value)
	{
		return null;
	}

	[Token(Token = "0x60010A7")]
	[Address(RVA = "0x6291DA0", Offset = "0x6290DA0", VA = "0x6291DA0")]
	[NonEvent]
	public static int GetHashCode(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60010A8")]
	[Address(RVA = "0x6290DA0", Offset = "0x628FDA0", VA = "0x6290DA0")]
	[NonEvent]
	public static object Format(object value)
	{
		return null;
	}

	[Token(Token = "0x60010A9")]
	[Address(RVA = "0x6290800", Offset = "0x628F800", VA = "0x6290800")]
	[NonEvent]
	private static string Format(FormattableString s)
	{
		return null;
	}

	[Token(Token = "0x60010AA")]
	[Address(RVA = "0x6291BA0", Offset = "0x6290BA0", VA = "0x6291BA0")]
	[NonEvent]
	private void WriteEvent(int eventId, string arg1, string arg2, string arg3, string arg4)
	{
	}

	[Token(Token = "0x60010AB")]
	[Address(RVA = "0x6291DC0", Offset = "0x6290DC0", VA = "0x6291DC0")]
	public NetEventSource()
	{
	}
}
