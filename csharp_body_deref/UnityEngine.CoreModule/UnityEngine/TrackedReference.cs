using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200017F")]
[UnityEngine.Scripting.UsedByNativeCode]
public class TrackedReference
{
	[Token(Token = "0x40005A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x6000AE5")]
	[Address(RVA = "0x4AD8830", Offset = "0x4AD8830", VA = "0x4AD8830")]
	protected TrackedReference()
	{
	}

	[Token(Token = "0x6000AE6")]
	[Address(RVA = "0x4AD8840", Offset = "0x4AD8840", VA = "0x4AD8840")]
	public static bool operator ==(TrackedReference x, TrackedReference y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AE7")]
	[Address(RVA = "0x4AD8880", Offset = "0x4AD8880", VA = "0x4AD8880", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AE8")]
	[Address(RVA = "0x4AD8930", Offset = "0x4AD8930", VA = "0x4AD8930", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
