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
		[Address(RVA = "0x4A71E50", Offset = "0x4A71E50", VA = "0x4A71E50", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x4A6EEC0", Offset = "0x4A6EEC0", VA = "0x4A6EEC0")]
	internal AndroidJavaException(string message, string javaStackTrace)
	{
	}
}
