using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.ExceptionServices;
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000255")]
internal class TaskExceptionHolder
{
	[Token(Token = "0x4000AF3")]
	[FieldOffset(Offset = "0x0")]
	private static readonly bool s_failFastOnUnobservedException;

	[Token(Token = "0x4000AF4")]
	[FieldOffset(Offset = "0x10")]
	private readonly Task m_task;

	[Token(Token = "0x4000AF5")]
	[FieldOffset(Offset = "0x18")]
	private System.Collections.Generic.LowLevelListWithIList<ExceptionDispatchInfo> m_faultExceptions;

	[Token(Token = "0x4000AF6")]
	[FieldOffset(Offset = "0x20")]
	private ExceptionDispatchInfo m_cancellationException;

	[Token(Token = "0x4000AF7")]
	[FieldOffset(Offset = "0x28")]
	private bool m_isHandled;

	[Token(Token = "0x17000206")]
	internal bool ContainsFaultList
	{
		[Token(Token = "0x60014C6")]
		[Address(RVA = "0x505D0E0", Offset = "0x505D0E0", VA = "0x505D0E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60014C3")]
	[Address(RVA = "0x505D660", Offset = "0x505D660", VA = "0x505D660")]
	internal TaskExceptionHolder(Task task)
	{
	}

	[Token(Token = "0x60014C4")]
	[Address(RVA = "0x5066920", Offset = "0x5066920", VA = "0x5066920")]
	private static bool ShouldFailFastOnUnobservedException()
	{
		return default(bool);
	}

	[Token(Token = "0x60014C5")]
	[Address(RVA = "0x5066930", Offset = "0x5066930", VA = "0x5066930", Slot = "1")]
	~TaskExceptionHolder()
	{
	}

	[Token(Token = "0x60014C7")]
	[Address(RVA = "0x505D690", Offset = "0x505D690", VA = "0x505D690")]
	internal void Add(object exceptionObject, bool representsCancellation)
	{
	}

	[Token(Token = "0x60014C8")]
	[Address(RVA = "0x5066D60", Offset = "0x5066D60", VA = "0x5066D60")]
	private void SetCancellationException(object exceptionObject)
	{
	}

	[Token(Token = "0x60014C9")]
	[Address(RVA = "0x5066E70", Offset = "0x5066E70", VA = "0x5066E70")]
	private void AddFaultException(object exceptionObject)
	{
	}

	[Token(Token = "0x60014CA")]
	[Address(RVA = "0x5067480", Offset = "0x5067480", VA = "0x5067480")]
	private void MarkAsUnhandled()
	{
	}

	[Token(Token = "0x60014CB")]
	[Address(RVA = "0x505D360", Offset = "0x505D360", VA = "0x505D360")]
	internal void MarkAsHandled(bool calledFromFinalizer)
	{
	}

	[Token(Token = "0x60014CC")]
	[Address(RVA = "0x505D6A0", Offset = "0x505D6A0", VA = "0x505D6A0")]
	internal AggregateException CreateExceptionObject(bool calledFromFinalizer, Exception includeThisException)
	{
		return null;
	}

	[Token(Token = "0x60014CD")]
	[Address(RVA = "0x505DAD0", Offset = "0x505DAD0", VA = "0x505DAD0")]
	internal ReadOnlyCollection<ExceptionDispatchInfo> GetExceptionDispatchInfos()
	{
		return null;
	}

	[Token(Token = "0x60014CE")]
	[Address(RVA = "0x50674F0", Offset = "0x50674F0", VA = "0x50674F0")]
	internal ExceptionDispatchInfo GetCancellationExceptionDispatchInfo()
	{
		return null;
	}
}
