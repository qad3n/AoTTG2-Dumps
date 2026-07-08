using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002D6")]
[UnityEngine.Scripting.UsedByNativeCode]
internal struct CoreCameraValues : IEquatable<CoreCameraValues>
{
	[Token(Token = "0x4000847")]
	[FieldOffset(Offset = "0x0")]
	private int filterMode;

	[Token(Token = "0x4000848")]
	[FieldOffset(Offset = "0x4")]
	private uint cullingMask;

	[Token(Token = "0x4000849")]
	[FieldOffset(Offset = "0x8")]
	private int instanceID;

	[Token(Token = "0x6001015")]
	[Address(RVA = "0x4B01F90", Offset = "0x4B01F90", VA = "0x4B01F90", Slot = "4")]
	public bool Equals(CoreCameraValues other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001016")]
	[Address(RVA = "0x4B01FB0", Offset = "0x4B01FB0", VA = "0x4B01FB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001017")]
	[Address(RVA = "0x4B02020", Offset = "0x4B02020", VA = "0x4B02020", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
