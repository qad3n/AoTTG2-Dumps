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
	[Address(RVA = "0x4A88CA0", Offset = "0x4A88CA0", VA = "0x4A88CA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static BootConfigData WrapBootConfigData(IntPtr nativeHandle)
	{
		return null;
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x4A88D40", Offset = "0x4A88D40", VA = "0x4A88D40")]
	private BootConfigData(IntPtr nativeHandle)
	{
	}
}
