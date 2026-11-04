// ==================== AoTTG2 cross-reference ====================
// Type: Mono.RuntimeStructs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Mono;

[Token(Token = "0x2000038")]
internal static class RuntimeStructs
{
	[Token(Token = "0x2000039")]
	internal struct RemoteClass
	{
		[Token(Token = "0x4000113")]
		[FieldOffset(Offset = "0x0")]
		internal IntPtr default_vtable;

		[Token(Token = "0x4000114")]
		[FieldOffset(Offset = "0x8")]
		internal IntPtr xdomain_vtable;

		[Token(Token = "0x4000115")]
		[FieldOffset(Offset = "0x10")]
		internal unsafe MonoClass* proxy_class;

		[Token(Token = "0x4000116")]
		[FieldOffset(Offset = "0x18")]
		internal IntPtr proxy_class_name;

		[Token(Token = "0x4000117")]
		[FieldOffset(Offset = "0x20")]
		internal uint interface_count;
	}

	[Token(Token = "0x200003A")]
	internal struct MonoClass
	{
	}

	[Token(Token = "0x200003B")]
	internal struct GenericParamInfo
	{
		[Token(Token = "0x4000118")]
		[FieldOffset(Offset = "0x0")]
		internal unsafe MonoClass* pklass;

		[Token(Token = "0x4000119")]
		[FieldOffset(Offset = "0x8")]
		internal IntPtr name;

		[Token(Token = "0x400011A")]
		[FieldOffset(Offset = "0x10")]
		internal ushort flags;

		[Token(Token = "0x400011B")]
		[FieldOffset(Offset = "0x14")]
		internal uint token;

		[Token(Token = "0x400011C")]
		[FieldOffset(Offset = "0x18")]
		internal unsafe MonoClass** constraints;
	}

	[Token(Token = "0x200003C")]
	internal struct GPtrArray
	{
		[Token(Token = "0x400011D")]
		[FieldOffset(Offset = "0x0")]
		internal unsafe IntPtr* data;

		[Token(Token = "0x400011E")]
		[FieldOffset(Offset = "0x8")]
		internal int len;
	}
}
