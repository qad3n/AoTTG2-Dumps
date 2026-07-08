using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200013E")]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = true)]
[UnityEngine.Scripting.RequiredByNativeCode]
public sealed class RequireComponent : Attribute
{
	[Token(Token = "0x4000539")]
	[FieldOffset(Offset = "0x10")]
	public Type m_Type0;

	[Token(Token = "0x400053A")]
	[FieldOffset(Offset = "0x18")]
	public Type m_Type1;

	[Token(Token = "0x400053B")]
	[FieldOffset(Offset = "0x20")]
	public Type m_Type2;

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x4ACC310", Offset = "0x4ACC310", VA = "0x4ACC310")]
	public RequireComponent(Type requiredComponent)
	{
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x4ACC340", Offset = "0x4ACC340", VA = "0x4ACC340")]
	public RequireComponent(Type requiredComponent, Type requiredComponent2)
	{
	}
}
