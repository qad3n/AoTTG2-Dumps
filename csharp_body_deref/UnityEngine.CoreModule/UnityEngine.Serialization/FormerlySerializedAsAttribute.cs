using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Serialization;

[Token(Token = "0x20001F2")]
[AttributeUsage(AttributeTargets.Field, AllowMultiple = true, Inherited = false)]
[UnityEngine.Scripting.RequiredByNativeCode]
public class FormerlySerializedAsAttribute : Attribute
{
	[Token(Token = "0x40006A0")]
	[FieldOffset(Offset = "0x10")]
	private string m_oldName;

	[Token(Token = "0x6000D8D")]
	[Address(RVA = "0x4AEC190", Offset = "0x4AEC190", VA = "0x4AEC190")]
	public FormerlySerializedAsAttribute(string oldName)
	{
	}
}
