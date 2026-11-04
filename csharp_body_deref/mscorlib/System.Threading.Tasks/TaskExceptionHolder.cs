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

[Token(Token = "0x2000285")]
internal class TaskExceptionHolder
{
	[Token(Token = "0x4000B3D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly bool s_failFastOnUnobservedException;

	[Token(Token = "0x4000B3E")]
	[FieldOffset(Offset = "0x10")]
	private readonly Task m_task;

	[Token(Token = "0x4000B3F")]
	[FieldOffset(Offset = "0x18")]
	private System.Collections.Generic.LowLevelListWithIList<ExceptionDispatchInfo> m_faultExceptions;

	[Token(Token = "0x4000B40")]
	[FieldOffset(Offset = "0x20")]
	private ExceptionDispatchInfo m_cancellationException;

	[Token(Token = "0x4000B41")]
	[FieldOffset(Offset = "0x28")]
	private bool m_isHandled;

	[Token(Token = "0x17000208")]
	internal bool ContainsFaultList
	{
		[Token(Token = "0x6001532")]
		[Address(RVA = "0x1BB57D0", Offset = "0x1BB3DD0", VA = "0x181BB57D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600152F")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	internal TaskExceptionHolder(Task task)
	{
	}

	[Token(Token = "0x6001530")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	private static bool ShouldFailFastOnUnobservedException()
	{
		return default(bool);
	}

	[Token(Token = "0x6001531")]
	[Address(RVA = "0x1BB52D0", Offset = "0x1BB38D0", VA = "0x181BB52D0", Slot = "1")]
	~TaskExceptionHolder()
	{
	}

	[Token(Token = "0x6001533")]
	[Address(RVA = "0x1BB4FE0", Offset = "0x1BB35E0", VA = "0x181BB4FE0")]
	internal void Add(object exceptionObject, bool representsCancellation)
	{
	}

	[Token(Token = "0x6001534")]
	[Address(RVA = "0x1BB5690", Offset = "0x1BB3C90", VA = "0x181BB5690")]
	private void SetCancellationException(object exceptionObject)
	{
	}

	[Token(Token = "0x6001535")]
	[Address(RVA = "0x1BB4BC0", Offset = "0x1BB31C0", VA = "0x181BB4BC0")]
	private void AddFaultException(object exceptionObject)
	{
	}

	[Token(Token = "0x6001536")]
	[Address(RVA = "0x1BB5620", Offset = "0x1BB3C20", VA = "0x181BB5620")]
	private void MarkAsUnhandled()
	{
	}

	[Token(Token = "0x6001537")]
	[Address(RVA = "0x1BB55A0", Offset = "0x1BB3BA0", VA = "0x181BB55A0")]
	internal void MarkAsHandled(bool calledFromFinalizer)
	{
	}

	[Token(Token = "0x6001538")]
	[Address(RVA = "0x1BB50F0", Offset = "0x1BB36F0", VA = "0x181BB50F0")]
	internal AggregateException CreateExceptionObject(bool calledFromFinalizer, Exception includeThisException)
	{
		return null;
	}

	[Token(Token = "0x6001539")]
	[Address(RVA = "0x1BB54D0", Offset = "0x1BB3AD0", VA = "0x181BB54D0")]
	internal ReadOnlyCollection<ExceptionDispatchInfo> GetExceptionDispatchInfos()
	{
		return null;
	}

	[Token(Token = "0x600153A")]
	[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
	internal ExceptionDispatchInfo GetCancellationExceptionDispatchInfo()
	{
		return null;
	}
}
