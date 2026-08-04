// ==================== AoTTG2 cross-reference ====================
// Type: System.LazyHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3CB6CF0", Offset = "0x3CB6CF0", VA = "0x3CB6CF0")]
		[CompilerGenerated]
		get
		{
			return default(System.LazyState);
		}
	}

	[Token(Token = "0x6000828")]
	[Address(RVA = "0x3CB6D00", Offset = "0x3CB6D00", VA = "0x3CB6D00")]
	internal LazyHelper(System.LazyState state)
	{
	}

	[Token(Token = "0x6000829")]
	[Address(RVA = "0x3CB6D20", Offset = "0x3CB6D20", VA = "0x3CB6D20")]
	internal LazyHelper(LazyThreadSafetyMode mode, Exception exception)
	{
	}

	[Token(Token = "0x600082A")]
	[Address(RVA = "0x3CB6D70", Offset = "0x3CB6D70", VA = "0x3CB6D70")]
	internal void ThrowException()
	{
	}

	[Token(Token = "0x600082B")]
	[Address(RVA = "0x3CB6D90", Offset = "0x3CB6D90", VA = "0x3CB6D90")]
	internal static System.LazyHelper Create(LazyThreadSafetyMode mode, bool useDefaultConstructor)
	{
		return null;
	}

	[Token(Token = "0x600082C")]
	[Address(RVA = "0x3CB6EE0", Offset = "0x3CB6EE0", VA = "0x3CB6EE0")]
	internal static object CreateViaDefaultConstructor(Type type)
	{
		return null;
	}

	[Token(Token = "0x600082D")]
	[Address(RVA = "0x3CB6FB0", Offset = "0x3CB6FB0", VA = "0x3CB6FB0")]
	internal static LazyThreadSafetyMode GetModeFromIsThreadSafe(bool isThreadSafe)
	{
		return default(LazyThreadSafetyMode);
	}
}
