using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000146")]
[UnityEngine.Scripting.UsedByNativeCode]
[AttributeUsage(AttributeTargets.Class)]
public class DefaultExecutionOrder : Attribute
{
	[Token(Token = "0x4000546")]
	[FieldOffset(Offset = "0x10")]
	private int m_Order;

	[Token(Token = "0x170001B5")]
	public int order
	{
		[Token(Token = "0x600098A")]
		[Address(RVA = "0x4ACC210", Offset = "0x4ACC210", VA = "0x4ACC210")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000989")]
	[Address(RVA = "0x4ACC580", Offset = "0x4ACC580", VA = "0x4ACC580")]
	public DefaultExecutionOrder(int order)
	{
	}
}
