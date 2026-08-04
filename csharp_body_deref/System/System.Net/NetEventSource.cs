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

[Token(Token = "0x2000116")]
internal sealed class NetEventSource : EventSource
{
	[Token(Token = "0x2000117")]
	public class Keywords
	{
		[Token(Token = "0x4000529")]
		public const EventKeywords Default = (EventKeywords)1L;

		[Token(Token = "0x400052A")]
		public const EventKeywords Debug = (EventKeywords)2L;

		[Token(Token = "0x400052B")]
		public const EventKeywords EnterExit = (EventKeywords)4L;
	}

	[Token(Token = "0x4000528")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly NetEventSource Log;

	[Token(Token = "0x17000162")]
	public new static bool IsEnabled
	{
		[Token(Token = "0x60006A4")]
		[Address(RVA = "0x4946220", Offset = "0x4946220", VA = "0x4946220")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000694")]
	[Address(RVA = "0x4947380", Offset = "0x4947380", VA = "0x4947380")]
	[NonEvent]
	public static void Enter(object thisOrContextObject, [Optional] FormattableString formattableString, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x6000695")]
	[Address(RVA = "0x4947A40", Offset = "0x4947A40", VA = "0x4947A40")]
	[NonEvent]
	public static void Enter(object thisOrContextObject, object arg0, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x6000696")]
	[Address(RVA = "0x4947FA0", Offset = "0x4947FA0", VA = "0x4947FA0")]
	[NonEvent]
	public static void Enter(object thisOrContextObject, object arg0, object arg1, object arg2, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x6000697")]
	[Address(RVA = "0x49479D0", Offset = "0x49479D0", VA = "0x49479D0")]
	[Event(1, Level = EventLevel.Informational, Keywords = (EventKeywords)4L)]
	private void Enter(string thisOrContextObject, string memberName, string parameters)
	{
	}

	[Token(Token = "0x6000698")]
	[Address(RVA = "0x49481A0", Offset = "0x49481A0", VA = "0x49481A0")]
	[NonEvent]
	public static void Exit(object thisOrContextObject, [Optional] FormattableString formattableString, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x6000699")]
	[Address(RVA = "0x49483E0", Offset = "0x49483E0", VA = "0x49483E0")]
	[NonEvent]
	public static void Exit(object thisOrContextObject, object arg0, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x600069A")]
	[Address(RVA = "0x4948370", Offset = "0x4948370", VA = "0x4948370")]
	[Event(2, Level = EventLevel.Informational, Keywords = (EventKeywords)4L)]
	private void Exit(string thisOrContextObject, string memberName, string result)
	{
	}

	[Token(Token = "0x600069B")]
	[Address(RVA = "0x49462A0", Offset = "0x49462A0", VA = "0x49462A0")]
	[NonEvent]
	public static void Info(object thisOrContextObject, [Optional] FormattableString formattableString, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x600069C")]
	[Address(RVA = "0x4946470", Offset = "0x4946470", VA = "0x4946470")]
	[NonEvent]
	public static void Info(object thisOrContextObject, object message, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x600069D")]
	[Address(RVA = "0x4948590", Offset = "0x4948590", VA = "0x4948590")]
	[Event(4, Level = EventLevel.Informational, Keywords = (EventKeywords)1L)]
	private void Info(string thisOrContextObject, string memberName, string message)
	{
	}

	[Token(Token = "0x600069E")]
	[Address(RVA = "0x4948600", Offset = "0x4948600", VA = "0x4948600")]
	[NonEvent]
	public static void Error(object thisOrContextObject, object message, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x600069F")]
	[Address(RVA = "0x49487B0", Offset = "0x49487B0", VA = "0x49487B0")]
	[Event(5, Level = EventLevel.Warning, Keywords = (EventKeywords)1L)]
	private void ErrorMessage(string thisOrContextObject, string memberName, string message)
	{
	}

	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x4945810", Offset = "0x4945810", VA = "0x4945810")]
	[NonEvent]
	public static void Fail(object thisOrContextObject, object message, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x4948820", Offset = "0x4948820", VA = "0x4948820")]
	[Event(6, Level = EventLevel.Critical, Keywords = (EventKeywords)2L)]
	private void CriticalFailure(string thisOrContextObject, string memberName, string message)
	{
	}

	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x4948890", Offset = "0x4948890", VA = "0x4948890")]
	[NonEvent]
	public static void Associate(object first, object second, [Optional][CallerMemberName] string memberName)
	{
	}

	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x4948A30", Offset = "0x4948A30", VA = "0x4948A30")]
	[Event(3, Level = EventLevel.Informational, Keywords = (EventKeywords)1L, Message = "[{2}]<-->[{3}]")]
	private void Associate(string thisOrContextObject, string memberName, string first, string second)
	{
	}

	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x4947550", Offset = "0x4947550", VA = "0x4947550")]
	[NonEvent]
	public static string IdOf(object value)
	{
		return null;
	}

	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x4948CB0", Offset = "0x4948CB0", VA = "0x4948CB0")]
	[NonEvent]
	public static int GetHashCode(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x4947BF0", Offset = "0x4947BF0", VA = "0x4947BF0")]
	[NonEvent]
	public static object Format(object value)
	{
		return null;
	}

	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x4947640", Offset = "0x4947640", VA = "0x4947640")]
	[NonEvent]
	private static string Format(FormattableString s)
	{
		return null;
	}

	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x4948AB0", Offset = "0x4948AB0", VA = "0x4948AB0")]
	[NonEvent]
	private void WriteEvent(int eventId, string arg1, string arg2, string arg3, string arg4)
	{
	}

	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x4948CD0", Offset = "0x4948CD0", VA = "0x4948CD0")]
	public NetEventSource()
	{
	}
}
