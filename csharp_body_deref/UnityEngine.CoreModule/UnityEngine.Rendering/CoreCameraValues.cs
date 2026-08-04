// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CoreCameraValues
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002D9")]
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

	[Token(Token = "0x6001017")]
	[Address(RVA = "0x4E298C0", Offset = "0x4E298C0", VA = "0x4E298C0", Slot = "4")]
	public bool Equals(CoreCameraValues other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001018")]
	[Address(RVA = "0x4E298E0", Offset = "0x4E298E0", VA = "0x4E298E0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001019")]
	[Address(RVA = "0x4E29950", Offset = "0x4E29950", VA = "0x4E29950", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
