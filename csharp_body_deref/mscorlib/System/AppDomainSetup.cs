using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x200017A")]
[ComVisible(true)]
[ClassInterface(ClassInterfaceType.None)]
public sealed class AppDomainSetup
{
	[Token(Token = "0x400065C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string application_base;

	[Token(Token = "0x400065D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string application_name;

	[Token(Token = "0x400065E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string cache_path;

	[Token(Token = "0x400065F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string configuration_file;

	[Token(Token = "0x4000660")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string dynamic_base;

	[Token(Token = "0x4000661")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string license_file;

	[Token(Token = "0x4000662")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string private_bin_path;

	[Token(Token = "0x4000663")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string private_bin_path_probe;

	[Token(Token = "0x4000664")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private string shadow_copy_directories;

	[Token(Token = "0x4000665")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private string shadow_copy_files;

	[Token(Token = "0x4000666")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private bool publisher_policy;

	[Token(Token = "0x4000667")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
	private bool path_changed;

	[Token(Token = "0x4000668")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	private int loader_optimization;

	[Token(Token = "0x4000669")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private bool disallow_binding_redirects;

	[Token(Token = "0x400066A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x69")]
	private bool disallow_code_downloads;

	[Token(Token = "0x400066B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private object _activationArguments;

	[Token(Token = "0x400066C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private object domain_initializer;

	[Token(Token = "0x400066D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private object application_trust;

	[Token(Token = "0x400066E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private string[] domain_initializer_args;

	[Token(Token = "0x400066F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private bool disallow_appbase_probe;

	[Token(Token = "0x4000670")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private byte[] configuration_bytes;

	[Token(Token = "0x4000671")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private byte[] serialized_non_primitives;

	[Token(Token = "0x4000672")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private string manager_assembly;

	[Token(Token = "0x4000673")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private string manager_type;

	[Token(Token = "0x4000674")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private string[] partial_visible_assemblies;

	[Token(Token = "0x4000675")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	[CompilerGenerated]
	private string _003CTargetFrameworkName_003Ek__BackingField;

	[Token(Token = "0x6000F40")]
	[Address(RVA = "0x5022510", Offset = "0x5022510", VA = "0x5022510")]
	public AppDomainSetup()
	{
	}
}
