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
[Token(Token = "0x20001BA")]
[UnityEngine.Scripting.UsedByNativeCode]
public class TrackedReference
{
	[Token(Token = "0x4000639")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.AnimationModule" })]
	internal IntPtr m_Ptr;

	[Token(Token = "0x6000E4B")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected TrackedReference()
	{
	}

	[Token(Token = "0x6000E4C")]
	[Address(RVA = "0x2F2ADF0", Offset = "0x2F293F0", VA = "0x182F2ADF0")]
	public static bool operator ==(TrackedReference x, TrackedReference y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E4D")]
	[Address(RVA = "0x2F2AD10", Offset = "0x2F29310", VA = "0x182F2AD10", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E4E")]
	[Address(RVA = "0x2F2ADE0", Offset = "0x2F293E0", VA = "0x182F2ADE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
