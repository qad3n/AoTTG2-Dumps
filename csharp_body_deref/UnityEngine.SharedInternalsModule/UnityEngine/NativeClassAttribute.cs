using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000006")]
[VisibleToOtherModules]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct, Inherited = false)]
internal sealed class NativeClassAttribute : Attribute
{
	[Token(Token = "0x17000001")]
	private string QualifiedNativeName
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x4B760D0", Offset = "0x4B760D0", VA = "0x4B760D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	private string Declaration
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x4B760E0", Offset = "0x4B760E0", VA = "0x4B760E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4B760F0", Offset = "0x4B760F0", VA = "0x4B760F0")]
	public NativeClassAttribute(string qualifiedCppName)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x4B76160", Offset = "0x4B76160", VA = "0x4B76160")]
	public NativeClassAttribute(string qualifiedCppName, string declaration)
	{
	}
}
