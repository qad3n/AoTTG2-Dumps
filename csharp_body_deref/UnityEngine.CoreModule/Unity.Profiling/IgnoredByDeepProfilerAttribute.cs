using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace Unity.Profiling;

[Token(Token = "0x2000019")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Method, AllowMultiple = false)]
[UnityEngine.Scripting.RequiredByNativeCode]
public sealed class IgnoredByDeepProfilerAttribute : Attribute
{
	[Token(Token = "0x600002D")]
	[Address(RVA = "0x4A84680", Offset = "0x4A84680", VA = "0x4A84680")]
	public IgnoredByDeepProfilerAttribute()
	{
	}
}
