using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001D9")]
[DebuggerDisplay("IsCancellationRequested = {IsCancellationRequested}")]
public readonly struct CancellationToken
{
	[Token(Token = "0x4000941")]
	[FieldOffset(Offset = "0x0")]
	private readonly CancellationTokenSource _source;

	[Token(Token = "0x4000942")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Action<object> s_actionToActionObjShunt;

	[Token(Token = "0x17000199")]
	public static CancellationToken None
	{
		[Token(Token = "0x600117C")]
		[Address(RVA = "0x5042C80", Offset = "0x5042C80", VA = "0x5042C80")]
		get
		{
			return default(CancellationToken);
		}
	}

	[Token(Token = "0x1700019A")]
	public bool IsCancellationRequested
	{
		[Token(Token = "0x600117D")]
		[Address(RVA = "0x5042C90", Offset = "0x5042C90", VA = "0x5042C90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019B")]
	public bool CanBeCanceled
	{
		[Token(Token = "0x600117E")]
		[Address(RVA = "0x5042CD0", Offset = "0x5042CD0", VA = "0x5042CD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600117F")]
	[Address(RVA = "0x5042CE0", Offset = "0x5042CE0", VA = "0x5042CE0")]
	internal CancellationToken(CancellationTokenSource source)
	{
	}

	[Token(Token = "0x6001180")]
	[Address(RVA = "0x5042CF0", Offset = "0x5042CF0", VA = "0x5042CF0")]
	public CancellationToken(bool canceled)
	{
	}

	[Token(Token = "0x6001181")]
	[Address(RVA = "0x5042DA0", Offset = "0x5042DA0", VA = "0x5042DA0")]
	public CancellationTokenRegistration Register(Action callback)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x6001182")]
	[Address(RVA = "0x5042FF0", Offset = "0x5042FF0", VA = "0x5042FF0")]
	public CancellationTokenRegistration Register(Action callback, bool useSynchronizationContext)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x6001183")]
	[Address(RVA = "0x5043110", Offset = "0x5043110", VA = "0x5043110")]
	public CancellationTokenRegistration Register(Action<object> callback, object state)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x6001184")]
	[Address(RVA = "0x50431A0", Offset = "0x50431A0", VA = "0x50431A0")]
	public CancellationTokenRegistration Register(Action<object> callback, object state, bool useSynchronizationContext)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x6001185")]
	[Address(RVA = "0x5043230", Offset = "0x5043230", VA = "0x5043230")]
	internal CancellationTokenRegistration InternalRegisterWithoutEC(Action<object> callback, object state)
	{
		return default(CancellationTokenRegistration);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001186")]
	[Address(RVA = "0x5042EC0", Offset = "0x5042EC0", VA = "0x5042EC0")]
	public CancellationTokenRegistration Register(Action<object> callback, object state, bool useSynchronizationContext, bool useExecutionContext)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x6001187")]
	[Address(RVA = "0x50437D0", Offset = "0x50437D0", VA = "0x50437D0")]
	public bool Equals(CancellationToken other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001188")]
	[Address(RVA = "0x50437E0", Offset = "0x50437E0", VA = "0x50437E0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001189")]
	[Address(RVA = "0x5043870", Offset = "0x5043870", VA = "0x5043870", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600118A")]
	[Address(RVA = "0x50438E0", Offset = "0x50438E0", VA = "0x50438E0")]
	public static bool operator ==(CancellationToken left, CancellationToken right)
	{
		return default(bool);
	}

	[Token(Token = "0x600118B")]
	[Address(RVA = "0x5043930", Offset = "0x5043930", VA = "0x5043930")]
	public static bool operator !=(CancellationToken left, CancellationToken right)
	{
		return default(bool);
	}

	[Token(Token = "0x600118C")]
	[Address(RVA = "0x5043980", Offset = "0x5043980", VA = "0x5043980")]
	public void ThrowIfCancellationRequested()
	{
	}

	[Token(Token = "0x600118D")]
	[Address(RVA = "0x5043A10", Offset = "0x5043A10", VA = "0x5043A10")]
	private void ThrowOperationCanceledException()
	{
	}
}
