// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.TaskExceptionHolder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.ExceptionServices;
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200025D")]
internal class TaskExceptionHolder
{
	[Token(Token = "0x4000A9B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly bool s_failFastOnUnobservedException;

	[Token(Token = "0x4000A9C")]
	[FieldOffset(Offset = "0x10")]
	private readonly Task m_task;

	[Token(Token = "0x4000A9D")]
	[FieldOffset(Offset = "0x18")]
	private System.Collections.Generic.LowLevelListWithIList<ExceptionDispatchInfo> m_faultExceptions;

	[Token(Token = "0x4000A9E")]
	[FieldOffset(Offset = "0x20")]
	private ExceptionDispatchInfo m_cancellationException;

	[Token(Token = "0x4000A9F")]
	[FieldOffset(Offset = "0x28")]
	private bool m_isHandled;

	[Token(Token = "0x17000207")]
	internal bool ContainsFaultList
	{
		[Token(Token = "0x6001509")]
		[Address(RVA = "0x5544FD0", Offset = "0x5543FD0", VA = "0x5544FD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001506")]
	[Address(RVA = "0x5545540", Offset = "0x5544540", VA = "0x5545540")]
	internal TaskExceptionHolder(Task task)
	{
	}

	[Token(Token = "0x6001507")]
	[Address(RVA = "0x554D1F0", Offset = "0x554C1F0", VA = "0x554D1F0")]
	private static bool ShouldFailFastOnUnobservedException()
	{
		return default(bool);
	}

	[Token(Token = "0x6001508")]
	[Address(RVA = "0x554D200", Offset = "0x554C200", VA = "0x554D200", Slot = "1")]
	~TaskExceptionHolder()
	{
	}

	[Token(Token = "0x600150A")]
	[Address(RVA = "0x5545570", Offset = "0x5544570", VA = "0x5545570")]
	internal void Add(object exceptionObject, bool representsCancellation)
	{
	}

	[Token(Token = "0x600150B")]
	[Address(RVA = "0x554D610", Offset = "0x554C610", VA = "0x554D610")]
	private void SetCancellationException(object exceptionObject)
	{
	}

	[Token(Token = "0x600150C")]
	[Address(RVA = "0x554D730", Offset = "0x554C730", VA = "0x554D730")]
	private void AddFaultException(object exceptionObject)
	{
	}

	[Token(Token = "0x600150D")]
	[Address(RVA = "0x554DC90", Offset = "0x554CC90", VA = "0x554DC90")]
	private void MarkAsUnhandled()
	{
	}

	[Token(Token = "0x600150E")]
	[Address(RVA = "0x5545240", Offset = "0x5544240", VA = "0x5545240")]
	internal void MarkAsHandled(bool calledFromFinalizer)
	{
	}

	[Token(Token = "0x600150F")]
	[Address(RVA = "0x5545580", Offset = "0x5544580", VA = "0x5545580")]
	internal AggregateException CreateExceptionObject(bool calledFromFinalizer, Exception includeThisException)
	{
		return null;
	}

	[Token(Token = "0x6001510")]
	[Address(RVA = "0x55459A0", Offset = "0x55449A0", VA = "0x55459A0")]
	internal ReadOnlyCollection<ExceptionDispatchInfo> GetExceptionDispatchInfos()
	{
		return null;
	}

	[Token(Token = "0x6001511")]
	[Address(RVA = "0x554DD00", Offset = "0x554CD00", VA = "0x554DD00")]
	internal ExceptionDispatchInfo GetCancellationExceptionDispatchInfo()
	{
		return null;
	}
}
