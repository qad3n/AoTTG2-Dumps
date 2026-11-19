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
	[Token(Token = "0x400035E")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly System.LazyHelper NoneViaConstructor;

	[Token(Token = "0x400035F")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly System.LazyHelper NoneViaFactory;

	[Token(Token = "0x4000360")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly System.LazyHelper PublicationOnlyViaConstructor;

	[Token(Token = "0x4000361")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly System.LazyHelper PublicationOnlyViaFactory;

	[Token(Token = "0x4000362")]
	[FieldOffset(Offset = "0x20")]
	internal static readonly System.LazyHelper PublicationOnlyWaitForOtherThreadToPublish;

	[Token(Token = "0x4000364")]
	[FieldOffset(Offset = "0x18")]
	private readonly ExceptionDispatchInfo _exceptionDispatch;

	[Token(Token = "0x17000091")]
	internal System.LazyState State
	{
		[Token(Token = "0x6000834")]
		[Address(RVA = "0x54B9C80", Offset = "0x54B8C80", VA = "0x54B9C80")]
		[CompilerGenerated]
		get
		{
			return default(System.LazyState);
		}
	}

	[Token(Token = "0x6000835")]
	[Address(RVA = "0x54B9C90", Offset = "0x54B8C90", VA = "0x54B9C90")]
	internal LazyHelper(System.LazyState state)
	{
	}

	[Token(Token = "0x6000836")]
	[Address(RVA = "0x54B9CB0", Offset = "0x54B8CB0", VA = "0x54B9CB0")]
	internal LazyHelper(LazyThreadSafetyMode mode, Exception exception)
	{
	}

	[Token(Token = "0x6000837")]
	[Address(RVA = "0x54B9D00", Offset = "0x54B8D00", VA = "0x54B9D00")]
	internal void ThrowException()
	{
	}

	[Token(Token = "0x6000838")]
	[Address(RVA = "0x54B9D20", Offset = "0x54B8D20", VA = "0x54B9D20")]
	internal static System.LazyHelper Create(LazyThreadSafetyMode mode, bool useDefaultConstructor)
	{
		return null;
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x54B9E80", Offset = "0x54B8E80", VA = "0x54B9E80")]
	internal static object CreateViaDefaultConstructor(Type type)
	{
		return null;
	}

	[Token(Token = "0x600083A")]
	[Address(RVA = "0x54B9F50", Offset = "0x54B8F50", VA = "0x54B9F50")]
	internal static LazyThreadSafetyMode GetModeFromIsThreadSafe(bool isThreadSafe)
	{
		return default(LazyThreadSafetyMode);
	}
}
