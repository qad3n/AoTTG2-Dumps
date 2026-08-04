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

[Token(Token = "0x2000007")]
public sealed class AndroidJavaException : Exception
{
	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x90")]
	private string mJavaStackTrace;

	[Token(Token = "0x17000001")]
	public override string StackTrace
	{
		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x4D99670", Offset = "0x4D99670", VA = "0x4D99670", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x4D966E0", Offset = "0x4D966E0", VA = "0x4D966E0")]
	internal AndroidJavaException(string message, string javaStackTrace)
	{
	}
}
