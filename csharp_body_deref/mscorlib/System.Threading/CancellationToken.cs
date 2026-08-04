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
		[Address(RVA = "0x3D287A0", Offset = "0x3D287A0", VA = "0x3D287A0")]
		get
		{
			return default(CancellationToken);
		}
	}

	[Token(Token = "0x1700019A")]
	public bool IsCancellationRequested
	{
		[Token(Token = "0x600117D")]
		[Address(RVA = "0x3D287B0", Offset = "0x3D287B0", VA = "0x3D287B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019B")]
	public bool CanBeCanceled
	{
		[Token(Token = "0x600117E")]
		[Address(RVA = "0x3D287F0", Offset = "0x3D287F0", VA = "0x3D287F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600117F")]
	[Address(RVA = "0x3D28800", Offset = "0x3D28800", VA = "0x3D28800")]
	internal CancellationToken(CancellationTokenSource source)
	{
	}

	[Token(Token = "0x6001180")]
	[Address(RVA = "0x3D28810", Offset = "0x3D28810", VA = "0x3D28810")]
	public CancellationToken(bool canceled)
	{
	}

	[Token(Token = "0x6001181")]
	[Address(RVA = "0x3D288C0", Offset = "0x3D288C0", VA = "0x3D288C0")]
	public CancellationTokenRegistration Register(Action callback)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x6001182")]
	[Address(RVA = "0x3D28B10", Offset = "0x3D28B10", VA = "0x3D28B10")]
	public CancellationTokenRegistration Register(Action callback, bool useSynchronizationContext)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x6001183")]
	[Address(RVA = "0x3D28C30", Offset = "0x3D28C30", VA = "0x3D28C30")]
	public CancellationTokenRegistration Register(Action<object> callback, object state)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x6001184")]
	[Address(RVA = "0x3D28CC0", Offset = "0x3D28CC0", VA = "0x3D28CC0")]
	public CancellationTokenRegistration Register(Action<object> callback, object state, bool useSynchronizationContext)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x6001185")]
	[Address(RVA = "0x3D28D50", Offset = "0x3D28D50", VA = "0x3D28D50")]
	internal CancellationTokenRegistration InternalRegisterWithoutEC(Action<object> callback, object state)
	{
		return default(CancellationTokenRegistration);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001186")]
	[Address(RVA = "0x3D289E0", Offset = "0x3D289E0", VA = "0x3D289E0")]
	public CancellationTokenRegistration Register(Action<object> callback, object state, bool useSynchronizationContext, bool useExecutionContext)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x6001187")]
	[Address(RVA = "0x3D292F0", Offset = "0x3D292F0", VA = "0x3D292F0")]
	public bool Equals(CancellationToken other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001188")]
	[Address(RVA = "0x3D29300", Offset = "0x3D29300", VA = "0x3D29300", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001189")]
	[Address(RVA = "0x3D29390", Offset = "0x3D29390", VA = "0x3D29390", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600118A")]
	[Address(RVA = "0x3D29400", Offset = "0x3D29400", VA = "0x3D29400")]
	public static bool operator ==(CancellationToken left, CancellationToken right)
	{
		return default(bool);
	}

	[Token(Token = "0x600118B")]
	[Address(RVA = "0x3D29450", Offset = "0x3D29450", VA = "0x3D29450")]
	public static bool operator !=(CancellationToken left, CancellationToken right)
	{
		return default(bool);
	}

	[Token(Token = "0x600118C")]
	[Address(RVA = "0x3D294A0", Offset = "0x3D294A0", VA = "0x3D294A0")]
	public void ThrowIfCancellationRequested()
	{
	}

	[Token(Token = "0x600118D")]
	[Address(RVA = "0x3D29530", Offset = "0x3D29530", VA = "0x3D29530")]
	private void ThrowOperationCanceledException()
	{
	}
}
