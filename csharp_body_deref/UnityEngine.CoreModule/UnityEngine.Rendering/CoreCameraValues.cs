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

[Token(Token = "0x2000372")]
[UnityEngine.Scripting.UsedByNativeCode]
internal struct CoreCameraValues : IEquatable<CoreCameraValues>
{
	[Token(Token = "0x4000A14")]
	[FieldOffset(Offset = "0x0")]
	private int filterMode;

	[Token(Token = "0x4000A15")]
	[FieldOffset(Offset = "0x4")]
	private uint cullingMask;

	[Token(Token = "0x4000A16")]
	[FieldOffset(Offset = "0x8")]
	private int instanceID;

	[Token(Token = "0x600158D")]
	[Address(RVA = "0x6956A50", Offset = "0x6955A50", VA = "0x6956A50", Slot = "4")]
	public bool Equals(CoreCameraValues other)
	{
		return default(bool);
	}

	[Token(Token = "0x600158E")]
	[Address(RVA = "0x6956A70", Offset = "0x6955A70", VA = "0x6956A70", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600158F")]
	[Address(RVA = "0x6956AE0", Offset = "0x6955AE0", VA = "0x6956AE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
