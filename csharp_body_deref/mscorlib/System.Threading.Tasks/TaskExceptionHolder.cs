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
		[Address(RVA = "0x3D42C00", Offset = "0x3D42C00", VA = "0x3D42C00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60014C3")]
	[Address(RVA = "0x3D43180", Offset = "0x3D43180", VA = "0x3D43180")]
	internal TaskExceptionHolder(Task task)
	{
	}

	[Token(Token = "0x60014C4")]
	[Address(RVA = "0x3D4C440", Offset = "0x3D4C440", VA = "0x3D4C440")]
	private static bool ShouldFailFastOnUnobservedException()
	{
		return default(bool);
	}

	[Token(Token = "0x60014C5")]
	[Address(RVA = "0x3D4C450", Offset = "0x3D4C450", VA = "0x3D4C450", Slot = "1")]
	~TaskExceptionHolder()
	{
	}

	[Token(Token = "0x60014C7")]
	[Address(RVA = "0x3D431B0", Offset = "0x3D431B0", VA = "0x3D431B0")]
	internal void Add(object exceptionObject, bool representsCancellation)
	{
	}

	[Token(Token = "0x60014C8")]
	[Address(RVA = "0x3D4C880", Offset = "0x3D4C880", VA = "0x3D4C880")]
	private void SetCancellationException(object exceptionObject)
	{
	}

	[Token(Token = "0x60014C9")]
	[Address(RVA = "0x3D4C990", Offset = "0x3D4C990", VA = "0x3D4C990")]
	private void AddFaultException(object exceptionObject)
	{
	}

	[Token(Token = "0x60014CA")]
	[Address(RVA = "0x3D4CFA0", Offset = "0x3D4CFA0", VA = "0x3D4CFA0")]
	private void MarkAsUnhandled()
	{
	}

	[Token(Token = "0x60014CB")]
	[Address(RVA = "0x3D42E80", Offset = "0x3D42E80", VA = "0x3D42E80")]
	internal void MarkAsHandled(bool calledFromFinalizer)
	{
	}

	[Token(Token = "0x60014CC")]
	[Address(RVA = "0x3D431C0", Offset = "0x3D431C0", VA = "0x3D431C0")]
	internal AggregateException CreateExceptionObject(bool calledFromFinalizer, Exception includeThisException)
	{
		return null;
	}

	[Token(Token = "0x60014CD")]
	[Address(RVA = "0x3D435F0", Offset = "0x3D435F0", VA = "0x3D435F0")]
	internal ReadOnlyCollection<ExceptionDispatchInfo> GetExceptionDispatchInfos()
	{
		return null;
	}

	[Token(Token = "0x60014CE")]
	[Address(RVA = "0x3D4D010", Offset = "0x3D4D010", VA = "0x3D4D010")]
	internal ExceptionDispatchInfo GetCancellationExceptionDispatchInfo()
	{
		return null;
	}
}
