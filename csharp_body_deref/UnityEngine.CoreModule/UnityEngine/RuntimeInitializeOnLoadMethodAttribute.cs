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

[Token(Token = "0x20001AE")]
[UnityEngine.Scripting.RequiredByNativeCode]
[AttributeUsage(AttributeTargets.Method, AllowMultiple = false)]
public class RuntimeInitializeOnLoadMethodAttribute : PreserveAttribute
{
	[Token(Token = "0x4000635")]
	[FieldOffset(Offset = "0x10")]
	private RuntimeInitializeLoadType m_LoadType;

	[Token(Token = "0x1700024B")]
	private RuntimeInitializeLoadType loadType
	{
		[Token(Token = "0x6000E32")]
		[Address(RVA = "0x691D3E0", Offset = "0x691C3E0", VA = "0x691D3E0")]
		set
		{
		}
	}

	[Token(Token = "0x6000E31")]
	[Address(RVA = "0x691D3C0", Offset = "0x691C3C0", VA = "0x691D3C0")]
	public RuntimeInitializeOnLoadMethodAttribute(RuntimeInitializeLoadType loadType)
	{
	}
}
