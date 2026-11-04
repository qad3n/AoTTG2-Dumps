// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.CancellationToken
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000204")]
[DebuggerDisplay("IsCancellationRequested = {IsCancellationRequested}")]
public readonly struct CancellationToken
{
	[Token(Token = "0x40009A2")]
	[FieldOffset(Offset = "0x0")]
	private readonly CancellationTokenSource _source;

	[Token(Token = "0x40009A3")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Action<object> s_actionToActionObjShunt;

	[Token(Token = "0x1700019B")]
	public static CancellationToken None
	{
		[Token(Token = "0x60011D7")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return default(CancellationToken);
		}
	}

	[Token(Token = "0x1700019C")]
	public bool IsCancellationRequested
	{
		[Token(Token = "0x60011D8")]
		[Address(RVA = "0x1B96F60", Offset = "0x1B95560", VA = "0x181B96F60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019D")]
	public bool CanBeCanceled
	{
		[Token(Token = "0x60011D9")]
		[Address(RVA = "0x1B96F50", Offset = "0x1B95550", VA = "0x181B96F50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60011DA")]
	[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
	internal CancellationToken(CancellationTokenSource source)
	{
	}

	[Token(Token = "0x60011DB")]
	[Address(RVA = "0x1B96EB0", Offset = "0x1B954B0", VA = "0x181B96EB0")]
	public CancellationToken(bool canceled)
	{
	}

	[Token(Token = "0x60011DC")]
	[Address(RVA = "0x1B96880", Offset = "0x1B94E80", VA = "0x181B96880")]
	public CancellationTokenRegistration Register(Action callback)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x60011DD")]
	[Address(RVA = "0x1B96A20", Offset = "0x1B95020", VA = "0x181B96A20")]
	public CancellationTokenRegistration Register(Action callback, bool useSynchronizationContext)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x60011DE")]
	[Address(RVA = "0x1B96990", Offset = "0x1B94F90", VA = "0x181B96990")]
	public CancellationTokenRegistration Register(Action<object> callback, object state)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x60011DF")]
	[Address(RVA = "0x1B96C70", Offset = "0x1B95270", VA = "0x181B96C70")]
	public CancellationTokenRegistration Register(Action<object> callback, object state, bool useSynchronizationContext)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x60011E0")]
	[Address(RVA = "0x1B967F0", Offset = "0x1B94DF0", VA = "0x181B967F0")]
	internal CancellationTokenRegistration InternalRegisterWithoutEC(Action<object> callback, object state)
	{
		return default(CancellationTokenRegistration);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60011E1")]
	[Address(RVA = "0x1B96B30", Offset = "0x1B95130", VA = "0x181B96B30")]
	public CancellationTokenRegistration Register(Action<object> callback, object state, bool useSynchronizationContext, bool useExecutionContext)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x60011E2")]
	[Address(RVA = "0x187DED0", Offset = "0x187C4D0", VA = "0x18187DED0")]
	public bool Equals(CancellationToken other)
	{
		return default(bool);
	}

	[Token(Token = "0x60011E3")]
	[Address(RVA = "0x1B966D0", Offset = "0x1B94CD0", VA = "0x181B966D0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x60011E4")]
	[Address(RVA = "0x1B96770", Offset = "0x1B94D70", VA = "0x181B96770", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60011E5")]
	[Address(RVA = "0x1B96FA0", Offset = "0x1B955A0", VA = "0x181B96FA0")]
	public static bool operator ==(CancellationToken left, CancellationToken right)
	{
		return default(bool);
	}

	[Token(Token = "0x60011E6")]
	[Address(RVA = "0x1B97000", Offset = "0x1B95600", VA = "0x181B97000")]
	public static bool operator !=(CancellationToken left, CancellationToken right)
	{
		return default(bool);
	}

	[Token(Token = "0x60011E7")]
	[Address(RVA = "0x1B96D00", Offset = "0x1B95300", VA = "0x181B96D00")]
	public void ThrowIfCancellationRequested()
	{
	}

	[Token(Token = "0x60011E8")]
	[Address(RVA = "0x1B96D80", Offset = "0x1B95380", VA = "0x181B96D80")]
	private void ThrowOperationCanceledException()
	{
	}
}
