using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.Internal;

[Token(Token = "0x200022C")]
internal static class Error
{
	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C98")]
	public static void ThrowArgumentNullException<T>(T value, string paramName) where T : class
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000C99")]
	[Address(RVA = "0x46F66C0", Offset = "0x46F66C0", VA = "0x46F66C0")]
	private static void ThrowArgumentNullExceptionCore(string paramName)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C9A")]
	[Address(RVA = "0x46F6710", Offset = "0x46F6710", VA = "0x46F6710")]
	public static Exception ArgumentOutOfRange(string paramName)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C9B")]
	[Address(RVA = "0x46F6760", Offset = "0x46F6760", VA = "0x46F6760")]
	public static Exception NoElements()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C9C")]
	[Address(RVA = "0x46F67C0", Offset = "0x46F67C0", VA = "0x46F67C0")]
	public static Exception MoreThanOneElement()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000C9D")]
	[Address(RVA = "0x46F6820", Offset = "0x46F6820", VA = "0x46F6820")]
	public static void ThrowArgumentException(string message)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000C9E")]
	[Address(RVA = "0x46F6870", Offset = "0x46F6870", VA = "0x46F6870")]
	public static void ThrowNotYetCompleted()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000C9F")]
	public static T ThrowNotYetCompleted<T>()
	{
		return (T)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CA0")]
	public static void ThrowWhenContinuationIsAlreadyRegistered<T>(T continuationField) where T : class
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000CA1")]
	[Address(RVA = "0x46F68C0", Offset = "0x46F68C0", VA = "0x46F68C0")]
	private static void ThrowInvalidOperationExceptionCore(string message)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000CA2")]
	[Address(RVA = "0x46F6910", Offset = "0x46F6910", VA = "0x46F6910")]
	public static void ThrowOperationCanceledException()
	{
	}
}
