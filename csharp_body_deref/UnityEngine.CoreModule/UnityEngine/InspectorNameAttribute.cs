using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000129")]
[AttributeUsage(AttributeTargets.Field, Inherited = true, AllowMultiple = false)]
[UnityEngine.Scripting.UsedByNativeCode]
public class InspectorNameAttribute : PropertyAttribute
{
	[Token(Token = "0x400051B")]
	[FieldOffset(Offset = "0x10")]
	public readonly string displayName;

	[Token(Token = "0x6000927")]
	[Address(RVA = "0x4ACA530", Offset = "0x4ACA530", VA = "0x4ACA530")]
	public InspectorNameAttribute(string displayName)
	{
	}
}
