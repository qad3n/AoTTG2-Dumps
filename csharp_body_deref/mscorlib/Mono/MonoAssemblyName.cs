using System;
using Il2CppDummyDll;

namespace Mono;

[Token(Token = "0x200001F")]
internal struct MonoAssemblyName
{
	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0x0")]
	internal IntPtr name;

	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0x8")]
	internal IntPtr culture;

	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x10")]
	internal IntPtr hash_value;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x18")]
	internal IntPtr public_key;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x20")]
	internal unsafe fixed byte public_key_token[17];

	[Token(Token = "0x40000A2")]
	[FieldOffset(Offset = "0x34")]
	internal uint hash_alg;

	[Token(Token = "0x40000A3")]
	[FieldOffset(Offset = "0x38")]
	internal uint hash_len;

	[Token(Token = "0x40000A4")]
	[FieldOffset(Offset = "0x3C")]
	internal uint flags;

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x40")]
	internal ushort major;

	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x42")]
	internal ushort minor;

	[Token(Token = "0x40000A7")]
	[FieldOffset(Offset = "0x44")]
	internal ushort build;

	[Token(Token = "0x40000A8")]
	[FieldOffset(Offset = "0x46")]
	internal ushort revision;

	[Token(Token = "0x40000A9")]
	[FieldOffset(Offset = "0x48")]
	internal ushort arch;
}
