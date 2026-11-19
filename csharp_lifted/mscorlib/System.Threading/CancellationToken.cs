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

[Token(Token = "0x20001DC")]
[DebuggerDisplay("IsCancellationRequested = {IsCancellationRequested}")]
public readonly struct CancellationToken
{
	[Token(Token = "0x4000900")]
	[FieldOffset(Offset = "0x0")]
	private readonly CancellationTokenSource _source;

	[Token(Token = "0x4000901")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Action<object> s_actionToActionObjShunt;

	[Token(Token = "0x1700019A")]
	public static CancellationToken None
	{
		[Token(Token = "0x60011AE")]
		[Address(RVA = "0x552BB60", Offset = "0x552AB60", VA = "0x552BB60")]
		get
		{
			return default(CancellationToken);
		}
	}

	[Token(Token = "0x1700019B")]
	public bool IsCancellationRequested
	{
		[Token(Token = "0x60011AF")]
		[Address(RVA = "0x552BB70", Offset = "0x552AB70", VA = "0x552BB70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019C")]
	public bool CanBeCanceled
	{
		[Token(Token = "0x60011B0")]
		[Address(RVA = "0x552BBB0", Offset = "0x552ABB0", VA = "0x552BBB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60011B1")]
	[Address(RVA = "0x552BBC0", Offset = "0x552ABC0", VA = "0x552BBC0")]
	internal CancellationToken(CancellationTokenSource source)
	{
	}

	[Token(Token = "0x60011B2")]
	[Address(RVA = "0x552BBD0", Offset = "0x552ABD0", VA = "0x552BBD0")]
	public CancellationToken(bool canceled)
	{
	}

	[Token(Token = "0x60011B3")]
	[Address(RVA = "0x552BC80", Offset = "0x552AC80", VA = "0x552BC80")]
	public CancellationTokenRegistration Register(Action callback)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x60011B4")]
	[Address(RVA = "0x552BED0", Offset = "0x552AED0", VA = "0x552BED0")]
	public CancellationTokenRegistration Register(Action callback, bool useSynchronizationContext)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x60011B5")]
	[Address(RVA = "0x552BFF0", Offset = "0x552AFF0", VA = "0x552BFF0")]
	public CancellationTokenRegistration Register(Action<object> callback, object state)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x60011B6")]
	[Address(RVA = "0x552C080", Offset = "0x552B080", VA = "0x552C080")]
	public CancellationTokenRegistration Register(Action<object> callback, object state, bool useSynchronizationContext)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x60011B7")]
	[Address(RVA = "0x552C110", Offset = "0x552B110", VA = "0x552C110")]
	internal CancellationTokenRegistration InternalRegisterWithoutEC(Action<object> callback, object state)
	{
		return default(CancellationTokenRegistration);
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x60011B8")]
	[Address(RVA = "0x552BDA0", Offset = "0x552ADA0", VA = "0x552BDA0")]
	public CancellationTokenRegistration Register(Action<object> callback, object state, bool useSynchronizationContext, bool useExecutionContext)
	{
		return default(CancellationTokenRegistration);
	}

	[Token(Token = "0x60011B9")]
	[Address(RVA = "0x552C6B0", Offset = "0x552B6B0", VA = "0x552C6B0")]
	public bool Equals(CancellationToken other)
	{
		return default(bool);
	}

	[Token(Token = "0x60011BA")]
	[Address(RVA = "0x552C6C0", Offset = "0x552B6C0", VA = "0x552C6C0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x60011BB")]
	[Address(RVA = "0x552C750", Offset = "0x552B750", VA = "0x552C750", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60011BC")]
	[Address(RVA = "0x552C7C0", Offset = "0x552B7C0", VA = "0x552C7C0")]
	public static bool operator ==(CancellationToken left, CancellationToken right)
	{
		return default(bool);
	}

	[Token(Token = "0x60011BD")]
	[Address(RVA = "0x552C810", Offset = "0x552B810", VA = "0x552C810")]
	public static bool operator !=(CancellationToken left, CancellationToken right)
	{
		return default(bool);
	}

	[Token(Token = "0x60011BE")]
	[Address(RVA = "0x552C860", Offset = "0x552B860", VA = "0x552C860")]
	public void ThrowIfCancellationRequested()
	{
	}

	[Token(Token = "0x60011BF")]
	[Address(RVA = "0x552C930", Offset = "0x552B930", VA = "0x552C930")]
	private void ThrowOperationCanceledException()
	{
	}
}
