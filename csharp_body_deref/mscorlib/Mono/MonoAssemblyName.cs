// ==================== AoTTG2 cross-reference ====================
// Type: Mono.MonoAssemblyName
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Mono;

[Token(Token = "0x200003D")]
internal struct MonoAssemblyName
{
	[Token(Token = "0x400011F")]
	[FieldOffset(Offset = "0x0")]
	internal IntPtr name;

	[Token(Token = "0x4000120")]
	[FieldOffset(Offset = "0x8")]
	internal IntPtr culture;

	[Token(Token = "0x4000121")]
	[FieldOffset(Offset = "0x10")]
	internal IntPtr hash_value;

	[Token(Token = "0x4000122")]
	[FieldOffset(Offset = "0x18")]
	internal IntPtr public_key;

	[Token(Token = "0x4000123")]
	[FieldOffset(Offset = "0x20")]
	internal unsafe fixed byte public_key_token[17];

	[Token(Token = "0x4000124")]
	[FieldOffset(Offset = "0x34")]
	internal uint hash_alg;

	[Token(Token = "0x4000125")]
	[FieldOffset(Offset = "0x38")]
	internal uint hash_len;

	[Token(Token = "0x4000126")]
	[FieldOffset(Offset = "0x3C")]
	internal uint flags;

	[Token(Token = "0x4000127")]
	[FieldOffset(Offset = "0x40")]
	internal ushort major;

	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0x42")]
	internal ushort minor;

	[Token(Token = "0x4000129")]
	[FieldOffset(Offset = "0x44")]
	internal ushort build;

	[Token(Token = "0x400012A")]
	[FieldOffset(Offset = "0x46")]
	internal ushort revision;

	[Token(Token = "0x400012B")]
	[FieldOffset(Offset = "0x48")]
	internal ushort arch;
}
