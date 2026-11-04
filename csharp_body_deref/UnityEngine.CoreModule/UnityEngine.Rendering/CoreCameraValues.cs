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

[Token(Token = "0x200039E")]
[UnityEngine.Scripting.UsedByNativeCode]
internal struct CoreCameraValues : IEquatable<CoreCameraValues>
{
	[Token(Token = "0x4000B34")]
	[FieldOffset(Offset = "0x0")]
	private int filterMode;

	[Token(Token = "0x4000B35")]
	[FieldOffset(Offset = "0x4")]
	private uint cullingMask;

	[Token(Token = "0x4000B36")]
	[FieldOffset(Offset = "0x8")]
	private int instanceID;

	[Token(Token = "0x60015E8")]
	[Address(RVA = "0x2F2C960", Offset = "0x2F2AF60", VA = "0x182F2C960", Slot = "4")]
	public bool Equals(CoreCameraValues other)
	{
		return default(bool);
	}

	[Token(Token = "0x60015E9")]
	[Address(RVA = "0x2F63F30", Offset = "0x2F62530", VA = "0x182F63F30", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60015EA")]
	[Address(RVA = "0x2F63FE0", Offset = "0x2F625E0", VA = "0x182F63FE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
