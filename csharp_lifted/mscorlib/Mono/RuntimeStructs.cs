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

[Token(Token = "0x200001A")]
internal static class RuntimeStructs
{
	[Token(Token = "0x200001B")]
	internal struct RemoteClass
	{
		[Token(Token = "0x4000091")]
		[FieldOffset(Offset = "0x0")]
		internal IntPtr default_vtable;

		[Token(Token = "0x4000092")]
		[FieldOffset(Offset = "0x8")]
		internal IntPtr xdomain_vtable;

		[Token(Token = "0x4000093")]
		[FieldOffset(Offset = "0x10")]
		internal unsafe MonoClass* proxy_class;

		[Token(Token = "0x4000094")]
		[FieldOffset(Offset = "0x18")]
		internal IntPtr proxy_class_name;

		[Token(Token = "0x4000095")]
		[FieldOffset(Offset = "0x20")]
		internal uint interface_count;
	}

	[Token(Token = "0x200001C")]
	internal struct MonoClass
	{
	}

	[Token(Token = "0x200001D")]
	internal struct GenericParamInfo
	{
		[Token(Token = "0x4000096")]
		[FieldOffset(Offset = "0x0")]
		internal unsafe MonoClass* pklass;

		[Token(Token = "0x4000097")]
		[FieldOffset(Offset = "0x8")]
		internal IntPtr name;

		[Token(Token = "0x4000098")]
		[FieldOffset(Offset = "0x10")]
		internal ushort flags;

		[Token(Token = "0x4000099")]
		[FieldOffset(Offset = "0x14")]
		internal uint token;

		[Token(Token = "0x400009A")]
		[FieldOffset(Offset = "0x18")]
		internal unsafe MonoClass** constraints;
	}

	[Token(Token = "0x200001E")]
	internal struct GPtrArray
	{
		[Token(Token = "0x400009B")]
		[FieldOffset(Offset = "0x0")]
		internal unsafe IntPtr* data;

		[Token(Token = "0x400009C")]
		[FieldOffset(Offset = "0x8")]
		internal int len;
	}
}
