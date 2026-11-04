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

[Token(Token = "0x200010A")]
internal class LazyHelper
{
	[Token(Token = "0x4000403")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly System.LazyHelper NoneViaConstructor;

	[Token(Token = "0x4000404")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly System.LazyHelper NoneViaFactory;

	[Token(Token = "0x4000405")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly System.LazyHelper PublicationOnlyViaConstructor;

	[Token(Token = "0x4000406")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly System.LazyHelper PublicationOnlyViaFactory;

	[Token(Token = "0x4000407")]
	[FieldOffset(Offset = "0x20")]
	internal static readonly System.LazyHelper PublicationOnlyWaitForOtherThreadToPublish;

	[Token(Token = "0x4000409")]
	[FieldOffset(Offset = "0x18")]
	private readonly ExceptionDispatchInfo _exceptionDispatch;

	[Token(Token = "0x17000091")]
	internal System.LazyState State
	{
		[Token(Token = "0x6000859")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(System.LazyState);
		}
	}

	[Token(Token = "0x600085A")]
	[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
	internal LazyHelper(System.LazyState state)
	{
	}

	[Token(Token = "0x600085B")]
	[Address(RVA = "0x1B2B460", Offset = "0x1B29A60", VA = "0x181B2B460")]
	internal LazyHelper(LazyThreadSafetyMode mode, Exception exception)
	{
	}

	[Token(Token = "0x600085C")]
	[Address(RVA = "0x1B2B2A0", Offset = "0x1B298A0", VA = "0x181B2B2A0")]
	internal void ThrowException()
	{
	}

	[Token(Token = "0x600085D")]
	[Address(RVA = "0x1B2B0F0", Offset = "0x1B296F0", VA = "0x181B2B0F0")]
	internal static System.LazyHelper Create(LazyThreadSafetyMode mode, bool useDefaultConstructor)
	{
		return null;
	}

	[Token(Token = "0x600085E")]
	[Address(RVA = "0x1B2B080", Offset = "0x1B29680", VA = "0x181B2B080")]
	internal static object CreateViaDefaultConstructor(Type type)
	{
		return null;
	}

	[Token(Token = "0x600085F")]
	[Address(RVA = "0x1B2B290", Offset = "0x1B29890", VA = "0x181B2B290")]
	internal static LazyThreadSafetyMode GetModeFromIsThreadSafe(bool isThreadSafe)
	{
		return default(LazyThreadSafetyMode);
	}
}
