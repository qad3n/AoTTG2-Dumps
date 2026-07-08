using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200001C")]
[AttributeUsage(AttributeTargets.Method)]
public class GUITargetAttribute : Attribute
{
	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x10")]
	internal int displayMask;

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x4B33490", Offset = "0x4B33490", VA = "0x4B33490")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static int GetGUITargetAttrValue(Type klass, string methodName)
	{
		return default(int);
	}
}
