// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.FixedBytes32Align8
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.Collections;

[Serializable]
[StructLayout((LayoutKind)2)]
[Token(Token = "0x2000063")]
[GenerateTestsForBurstCompatibility]
internal struct FixedBytes32Align8
{
	[Token(Token = "0x40000E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[SerializeField]
	internal FixedBytes16Align8 offset0000;

	[Token(Token = "0x40000E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[SerializeField]
	internal FixedBytes16Align8 offset0016;
}
