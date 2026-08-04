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

[Token(Token = "0x2000012")]
[VisibleToOtherModules]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum)]
internal class NativeTypeAttribute : Attribute
{
	[Token(Token = "0x1700000F")]
	public string Header
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x4E9E0C0", Offset = "0x4E9E0C0", VA = "0x4E9E0C0", Slot = "7")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public string IntermediateScriptingStructName
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x4E9E0D0", Offset = "0x4E9E0D0", VA = "0x4E9E0D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public CodegenOptions CodegenOptions
	{
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x4E9E0E0", Offset = "0x4E9E0E0", VA = "0x4E9E0E0", Slot = "8")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x4E9E0F0", Offset = "0x4E9E0F0", VA = "0x4E9E0F0")]
	public NativeTypeAttribute()
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4E9E110", Offset = "0x4E9E110", VA = "0x4E9E110")]
	public NativeTypeAttribute(CodegenOptions codegenOptions)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x4E9E130", Offset = "0x4E9E130", VA = "0x4E9E130")]
	public NativeTypeAttribute(string header)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4E9E230", Offset = "0x4E9E230", VA = "0x4E9E230")]
	public NativeTypeAttribute(CodegenOptions codegenOptions, string intermediateStructName)
	{
	}
}
