using System.Runtime.CompilerServices;
using System.Runtime.ExceptionServices;
using System.Threading;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000E2")]
internal class LazyHelper
{
	[Token(Token = "0x400037E")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly System.LazyHelper NoneViaConstructor;

	[Token(Token = "0x400037F")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly System.LazyHelper NoneViaFactory;

	[Token(Token = "0x4000380")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly System.LazyHelper PublicationOnlyViaConstructor;

	[Token(Token = "0x4000381")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly System.LazyHelper PublicationOnlyViaFactory;

	[Token(Token = "0x4000382")]
	[FieldOffset(Offset = "0x20")]
	internal static readonly System.LazyHelper PublicationOnlyWaitForOtherThreadToPublish;

	[Token(Token = "0x4000384")]
	[FieldOffset(Offset = "0x18")]
	private readonly ExceptionDispatchInfo _exceptionDispatch;

	[Token(Token = "0x17000091")]
	internal System.LazyState State
	{
		[Token(Token = "0x6000827")]
		[Address(RVA = "0x4FD11D0", Offset = "0x4FD11D0", VA = "0x4FD11D0")]
		[CompilerGenerated]
		get
		{
			return default(System.LazyState);
		}
	}

	[Token(Token = "0x6000828")]
	[Address(RVA = "0x4FD11E0", Offset = "0x4FD11E0", VA = "0x4FD11E0")]
	internal LazyHelper(System.LazyState state)
	{
	}

	[Token(Token = "0x6000829")]
	[Address(RVA = "0x4FD1200", Offset = "0x4FD1200", VA = "0x4FD1200")]
	internal LazyHelper(LazyThreadSafetyMode mode, Exception exception)
	{
	}

	[Token(Token = "0x600082A")]
	[Address(RVA = "0x4FD1250", Offset = "0x4FD1250", VA = "0x4FD1250")]
	internal void ThrowException()
	{
	}

	[Token(Token = "0x600082B")]
	[Address(RVA = "0x4FD1270", Offset = "0x4FD1270", VA = "0x4FD1270")]
	internal static System.LazyHelper Create(LazyThreadSafetyMode mode, bool useDefaultConstructor)
	{
		return null;
	}

	[Token(Token = "0x600082C")]
	[Address(RVA = "0x4FD13C0", Offset = "0x4FD13C0", VA = "0x4FD13C0")]
	internal static object CreateViaDefaultConstructor(Type type)
	{
		return null;
	}

	[Token(Token = "0x600082D")]
	[Address(RVA = "0x4FD1490", Offset = "0x4FD1490", VA = "0x4FD1490")]
	internal static LazyThreadSafetyMode GetModeFromIsThreadSafe(bool isThreadSafe)
	{
		return default(LazyThreadSafetyMode);
	}
}
