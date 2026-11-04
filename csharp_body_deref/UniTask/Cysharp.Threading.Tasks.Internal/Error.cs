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
	[Address(RVA = "0x29424E0", Offset = "0x2940AE0", VA = "0x1829424E0")]
	private static void ThrowArgumentNullExceptionCore(string paramName)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x2942370", Offset = "0x2940970", VA = "0x182942370")]
	public static Exception ArgumentOutOfRange(string paramName)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x2942430", Offset = "0x2940A30", VA = "0x182942430")]
	public static Exception NoElements()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CC0")]
	[Address(RVA = "0x29423D0", Offset = "0x29409D0", VA = "0x1829423D0")]
	public static Exception MoreThanOneElement()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x2942490", Offset = "0x2940A90", VA = "0x182942490")]
	public static void ThrowArgumentException(string message)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x2942580", Offset = "0x2940B80", VA = "0x182942580")]
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
	[Address(RVA = "0x2942530", Offset = "0x2940B30", VA = "0x182942530")]
	private static void ThrowInvalidOperationExceptionCore(string message)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000CC6")]
	[Address(RVA = "0x29425D0", Offset = "0x2940BD0", VA = "0x1829425D0")]
	public static void ThrowOperationCanceledException()
	{
	}
}
