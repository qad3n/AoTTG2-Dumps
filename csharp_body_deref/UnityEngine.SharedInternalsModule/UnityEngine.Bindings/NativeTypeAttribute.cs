// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Bindings.NativeTypeAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Bindings;

[Token(Token = "0x2000011")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum)]
[VisibleToOtherModules]
internal class NativeTypeAttribute : Attribute
{
	[Token(Token = "0x1700000E")]
	public string Header
	{
		[Token(Token = "0x6000023")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00", Slot = "7")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public string IntermediateScriptingStructName
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public CodegenOptions CodegenOptions
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0", Slot = "8")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x2FF7410", Offset = "0x2FF5A10", VA = "0x182FF7410")]
	public NativeTypeAttribute()
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x2FF73A0", Offset = "0x2FF59A0", VA = "0x182FF73A0")]
	public NativeTypeAttribute(CodegenOptions codegenOptions)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x2FF7280", Offset = "0x2FF5880", VA = "0x182FF7280")]
	public NativeTypeAttribute(string header)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x2FF73D0", Offset = "0x2FF59D0", VA = "0x182FF73D0")]
	public NativeTypeAttribute(CodegenOptions codegenOptions, string intermediateStructName)
	{
	}
}
