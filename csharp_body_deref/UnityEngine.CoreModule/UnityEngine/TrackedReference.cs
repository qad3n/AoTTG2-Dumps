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
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000182")]
[UnityEngine.Scripting.UsedByNativeCode]
public class TrackedReference
{
	[Token(Token = "0x40005A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x6000AE7")]
	[Address(RVA = "0x4E00160", Offset = "0x4E00160", VA = "0x4E00160")]
	protected TrackedReference()
	{
	}

	[Token(Token = "0x6000AE8")]
	[Address(RVA = "0x4E00170", Offset = "0x4E00170", VA = "0x4E00170")]
	public static bool operator ==(TrackedReference x, TrackedReference y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AE9")]
	[Address(RVA = "0x4E001B0", Offset = "0x4E001B0", VA = "0x4E001B0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AEA")]
	[Address(RVA = "0x4E00260", Offset = "0x4E00260", VA = "0x4E00260", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
