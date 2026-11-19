// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TrackedReference
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
[Token(Token = "0x20001BB")]
[UnityEngine.Scripting.UsedByNativeCode]
public class TrackedReference
{
	[Token(Token = "0x400063E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.AnimationModule" })]
	internal IntPtr m_Ptr;

	[Token(Token = "0x6000E5D")]
	[Address(RVA = "0x691F5A0", Offset = "0x691E5A0", VA = "0x691F5A0")]
	protected TrackedReference()
	{
	}

	[Token(Token = "0x6000E5E")]
	[Address(RVA = "0x691F5B0", Offset = "0x691E5B0", VA = "0x691F5B0")]
	public static bool operator ==(TrackedReference x, TrackedReference y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E5F")]
	[Address(RVA = "0x691F5F0", Offset = "0x691E5F0", VA = "0x691F5F0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E60")]
	[Address(RVA = "0x691F6A0", Offset = "0x691E6A0", VA = "0x691F6A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
