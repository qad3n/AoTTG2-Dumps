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
		[Address(RVA = "0x4B76790", Offset = "0x4B76790", VA = "0x4B76790", Slot = "7")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public string IntermediateScriptingStructName
	{
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x4B767A0", Offset = "0x4B767A0", VA = "0x4B767A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public CodegenOptions CodegenOptions
	{
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x4B767B0", Offset = "0x4B767B0", VA = "0x4B767B0", Slot = "8")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x4B767C0", Offset = "0x4B767C0", VA = "0x4B767C0")]
	public NativeTypeAttribute()
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4B767E0", Offset = "0x4B767E0", VA = "0x4B767E0")]
	public NativeTypeAttribute(CodegenOptions codegenOptions)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x4B76800", Offset = "0x4B76800", VA = "0x4B76800")]
	public NativeTypeAttribute(string header)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4B76900", Offset = "0x4B76900", VA = "0x4B76900")]
	public NativeTypeAttribute(CodegenOptions codegenOptions, string intermediateStructName)
	{
	}
}
