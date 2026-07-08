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
	[Address(RVA = "0x4A8D9A0", Offset = "0x4A8D9A0", VA = "0x4A8D9A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SendEvents(CullingGroup cullingGroup, IntPtr eventsPtr, int count)
	{
	}
}
