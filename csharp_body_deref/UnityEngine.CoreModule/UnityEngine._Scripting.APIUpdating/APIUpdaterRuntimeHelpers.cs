using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine._Scripting.APIUpdating;

[Token(Token = "0x20001AD")]
internal class APIUpdaterRuntimeHelpers
{
	[Token(Token = "0x6000C9B")]
	[Address(RVA = "0x4AE5E80", Offset = "0x4AE5E80", VA = "0x4AE5E80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool GetMovedFromAttributeDataForType(Type sourceType, out string assembly, out string nsp, out string klass)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C9C")]
	[Address(RVA = "0x4AE5FD0", Offset = "0x4AE5FD0", VA = "0x4AE5FD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool GetObsoleteTypeRedirection(Type sourceType, out string assemblyName, out string nsp, out string className)
	{
		return default(bool);
	}
}
