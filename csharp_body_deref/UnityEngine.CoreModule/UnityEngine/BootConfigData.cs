// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.BootConfigData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000082")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Bootstrap/BootConfig.bindings.h")]
internal class BootConfigData
{
	[Token(Token = "0x400015F")]
	[FieldOffset(Offset = "0x10")]
	private IntPtr m_Ptr;

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x4DB04C0", Offset = "0x4DB04C0", VA = "0x4DB04C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static BootConfigData WrapBootConfigData(IntPtr nativeHandle)
	{
		return null;
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x4DB0560", Offset = "0x4DB0560", VA = "0x4DB0560")]
	private BootConfigData(IntPtr nativeHandle)
	{
	}
}
