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

[Token(Token = "0x200022F")]
internal static class Error
{
	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CBC")]
	public static void ThrowArgumentNullException<T>(T value, string paramName) where T : class
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000CBD")]
	[Address(RVA = "0x6309020", Offset = "0x6308020", VA = "0x6309020")]
	private static void ThrowArgumentNullExceptionCore(string paramName)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x6309070", Offset = "0x6308070", VA = "0x6309070")]
	public static Exception ArgumentOutOfRange(string paramName)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x63090C0", Offset = "0x63080C0", VA = "0x63090C0")]
	public static Exception NoElements()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CC0")]
	[Address(RVA = "0x6309120", Offset = "0x6308120", VA = "0x6309120")]
	public static Exception MoreThanOneElement()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x6309180", Offset = "0x6308180", VA = "0x6309180")]
	public static void ThrowArgumentException(string message)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x63091D0", Offset = "0x63081D0", VA = "0x63091D0")]
	public static void ThrowNotYetCompleted()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000CC3")]
	public static T ThrowNotYetCompleted<T>()
	{
		return (T)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CC4")]
	public static void ThrowWhenContinuationIsAlreadyRegistered<T>(T continuationField) where T : class
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x6309220", Offset = "0x6308220", VA = "0x6309220")]
	private static void ThrowInvalidOperationExceptionCore(string message)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000CC6")]
	[Address(RVA = "0x6309270", Offset = "0x6308270", VA = "0x6309270")]
	public static void ThrowOperationCanceledException()
	{
	}
}
