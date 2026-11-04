// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.RuntimeInitializeOnLoadMethodAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20001AD")]
[AttributeUsage(AttributeTargets.Method, AllowMultiple = false)]
[UnityEngine.Scripting.RequiredByNativeCode]
public class RuntimeInitializeOnLoadMethodAttribute : PreserveAttribute
{
	[Token(Token = "0x4000630")]
	[FieldOffset(Offset = "0x10")]
	private RuntimeInitializeLoadType m_LoadType;

	[Token(Token = "0x17000246")]
	private RuntimeInitializeLoadType loadType
	{
		[Token(Token = "0x6000E20")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		set
		{
		}
	}

	[Token(Token = "0x6000E1F")]
	[Address(RVA = "0x2F266C0", Offset = "0x2F24CC0", VA = "0x182F266C0")]
	public RuntimeInitializeOnLoadMethodAttribute(RuntimeInitializeLoadType loadType)
	{
	}
}
