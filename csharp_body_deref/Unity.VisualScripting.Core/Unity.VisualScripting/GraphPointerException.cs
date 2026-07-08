using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000075")]
public sealed class GraphPointerException : Exception
{
	[Token(Token = "0x170000DB")]
	public GraphPointer pointer
	{
		[Token(Token = "0x600038A")]
		[Address(RVA = "0x498C7C0", Offset = "0x498C7C0", VA = "0x498C7C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600038B")]
	[Address(RVA = "0x4988730", Offset = "0x4988730", VA = "0x4988730")]
	public GraphPointerException(string message, GraphPointer pointer)
	{
	}
}
