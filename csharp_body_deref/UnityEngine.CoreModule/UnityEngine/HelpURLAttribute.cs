using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000145")]
[UnityEngine.Scripting.UsedByNativeCode]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = false)]
public class HelpURLAttribute : Attribute
{
	[Token(Token = "0x4000543")]
	[FieldOffset(Offset = "0x10")]
	internal readonly string m_Url;

	[Token(Token = "0x4000544")]
	[FieldOffset(Offset = "0x18")]
	internal readonly bool m_Dispatcher;

	[Token(Token = "0x4000545")]
	[FieldOffset(Offset = "0x20")]
	internal readonly string m_DispatchingFieldName;

	[Token(Token = "0x170001B4")]
	public string URL
	{
		[Token(Token = "0x6000988")]
		[Address(RVA = "0x4ACC570", Offset = "0x4ACC570", VA = "0x4ACC570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000987")]
	[Address(RVA = "0x4ACC500", Offset = "0x4ACC500", VA = "0x4ACC500")]
	public HelpURLAttribute(string url)
	{
	}
}
