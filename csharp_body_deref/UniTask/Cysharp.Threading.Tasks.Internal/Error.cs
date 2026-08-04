// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Internal.Error
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/WebRTCAudioProcessor.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4A1B7C0", Offset = "0x4A1B7C0", VA = "0x4A1B7C0")]
	private static void ThrowArgumentNullExceptionCore(string paramName)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C9A")]
	[Address(RVA = "0x4A1B810", Offset = "0x4A1B810", VA = "0x4A1B810")]
	public static Exception ArgumentOutOfRange(string paramName)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C9B")]
	[Address(RVA = "0x4A1B860", Offset = "0x4A1B860", VA = "0x4A1B860")]
	public static Exception NoElements()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C9C")]
	[Address(RVA = "0x4A1B8C0", Offset = "0x4A1B8C0", VA = "0x4A1B8C0")]
	public static Exception MoreThanOneElement()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000C9D")]
	[Address(RVA = "0x4A1B920", Offset = "0x4A1B920", VA = "0x4A1B920")]
	public static void ThrowArgumentException(string message)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000C9E")]
	[Address(RVA = "0x4A1B970", Offset = "0x4A1B970", VA = "0x4A1B970")]
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
	[Address(RVA = "0x4A1B9C0", Offset = "0x4A1B9C0", VA = "0x4A1B9C0")]
	private static void ThrowInvalidOperationExceptionCore(string message)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000CA2")]
	[Address(RVA = "0x4A1BA10", Offset = "0x4A1BA10", VA = "0x4A1BA10")]
	public static void ThrowOperationCanceledException()
	{
	}
}
