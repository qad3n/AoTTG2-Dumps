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

[Token(Token = "0x2000178")]
[UnityEngine.Scripting.RequiredByNativeCode]
[AttributeUsage(AttributeTargets.Method, AllowMultiple = false)]
public class RuntimeInitializeOnLoadMethodAttribute : PreserveAttribute
{
	[Token(Token = "0x400059D")]
	[FieldOffset(Offset = "0x10")]
	private RuntimeInitializeLoadType m_LoadType;

	[Token(Token = "0x170001D8")]
	private RuntimeInitializeLoadType loadType
	{
		[Token(Token = "0x6000AC9")]
		[Address(RVA = "0x4DFE680", Offset = "0x4DFE680", VA = "0x4DFE680")]
		set
		{
		}
	}

	[Token(Token = "0x6000AC8")]
	[Address(RVA = "0x4DFE660", Offset = "0x4DFE660", VA = "0x4DFE660")]
	public RuntimeInitializeOnLoadMethodAttribute(RuntimeInitializeLoadType loadType)
	{
	}
}
