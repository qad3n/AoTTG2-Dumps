// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.CullingGroup
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000088")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Camera/CullingGroup.bindings.h")]
public class CullingGroup
{
	[Token(Token = "0x2000089")]
	public delegate void StateChanged(CullingGroupEvent sphere);

	[Token(Token = "0x4000171")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x4000172")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private StateChanged m_OnStateChanged;

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x4DB51C0", Offset = "0x4DB51C0", VA = "0x4DB51C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SendEvents(CullingGroup cullingGroup, IntPtr eventsPtr, int count)
	{
	}
}
