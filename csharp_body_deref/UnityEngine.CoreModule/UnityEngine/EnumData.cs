// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.EnumData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000198")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "UnityEditor.UIBuilderModule" })]
internal struct EnumData
{
	[Token(Token = "0x4000603")]
	[FieldOffset(Offset = "0x0")]
	public Enum[] values;

	[Token(Token = "0x4000604")]
	[FieldOffset(Offset = "0x8")]
	public int[] flagValues;

	[Token(Token = "0x4000605")]
	[FieldOffset(Offset = "0x10")]
	public string[] displayNames;

	[Token(Token = "0x4000606")]
	[FieldOffset(Offset = "0x18")]
	public string[] names;

	[Token(Token = "0x4000607")]
	[FieldOffset(Offset = "0x20")]
	public string[] tooltip;

	[Token(Token = "0x4000608")]
	[FieldOffset(Offset = "0x28")]
	public bool flags;

	[Token(Token = "0x4000609")]
	[FieldOffset(Offset = "0x30")]
	public Type underlyingType;

	[Token(Token = "0x400060A")]
	[FieldOffset(Offset = "0x38")]
	public bool unsigned;

	[Token(Token = "0x400060B")]
	[FieldOffset(Offset = "0x39")]
	public bool serializable;
}
