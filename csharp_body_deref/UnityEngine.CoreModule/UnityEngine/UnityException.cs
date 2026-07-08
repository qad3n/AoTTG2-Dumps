using System;
using System.Runtime.Serialization;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Serializable]
[Token(Token = "0x200017C")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class UnityException : Exception
{
	[Token(Token = "0x6000AD7")]
	[Address(RVA = "0x4AD7D10", Offset = "0x4AD7D10", VA = "0x4AD7D10")]
	public UnityException()
	{
	}

	[Token(Token = "0x6000AD8")]
	[Address(RVA = "0x4AD57C0", Offset = "0x4AD57C0", VA = "0x4AD57C0")]
	public UnityException(string message)
	{
	}

	[Token(Token = "0x6000AD9")]
	[Address(RVA = "0x4AD7D80", Offset = "0x4AD7D80", VA = "0x4AD7D80")]
	protected UnityException(SerializationInfo info, StreamingContext context)
	{
	}
}
