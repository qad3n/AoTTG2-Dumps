// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AndroidJavaException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000003")]
public sealed class AndroidJavaException : Exception
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x90")]
	private string mJavaStackTrace;

	[Token(Token = "0x17000001")]
	public override string StackTrace
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x2EA24D0", Offset = "0x2EA0AD0", VA = "0x182EA24D0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x2EA2450", Offset = "0x2EA0A50", VA = "0x182EA2450")]
	internal AndroidJavaException(string message, string javaStackTrace)
	{
	}
}
