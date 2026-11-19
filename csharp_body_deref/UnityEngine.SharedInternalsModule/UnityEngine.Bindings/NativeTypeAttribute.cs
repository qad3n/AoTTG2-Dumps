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
		[Address(RVA = "0x69F1730", Offset = "0x69F0730", VA = "0x69F1730", Slot = "7")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public string IntermediateScriptingStructName
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x69F1740", Offset = "0x69F0740", VA = "0x69F1740")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public CodegenOptions CodegenOptions
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x69F1750", Offset = "0x69F0750", VA = "0x69F1750", Slot = "8")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x69F1760", Offset = "0x69F0760", VA = "0x69F1760")]
	public NativeTypeAttribute()
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x69F1780", Offset = "0x69F0780", VA = "0x69F1780")]
	public NativeTypeAttribute(CodegenOptions codegenOptions)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x69F17A0", Offset = "0x69F07A0", VA = "0x69F17A0")]
	public NativeTypeAttribute(string header)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x69F18A0", Offset = "0x69F08A0", VA = "0x69F18A0")]
	public NativeTypeAttribute(CodegenOptions codegenOptions, string intermediateStructName)
	{
	}
}
