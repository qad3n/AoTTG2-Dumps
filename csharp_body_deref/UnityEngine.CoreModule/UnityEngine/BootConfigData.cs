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

[Token(Token = "0x200009E")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Bootstrap/BootConfig.bindings.h")]
internal class BootConfigData
{
	[Token(Token = "0x40001AA")]
	[FieldOffset(Offset = "0x10")]
	private IntPtr m_Ptr;

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x2EBBD90", Offset = "0x2EBA390", VA = "0x182EBBD90")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static BootConfigData WrapBootConfigData(IntPtr nativeHandle)
	{
		return null;
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x2EBBE40", Offset = "0x2EBA440", VA = "0x182EBBE40")]
	private BootConfigData(IntPtr nativeHandle)
	{
	}
}
