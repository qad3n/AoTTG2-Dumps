// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.NativeClassAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000007")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct, Inherited = false)]
[VisibleToOtherModules]
internal sealed class NativeClassAttribute : Attribute
{
	[Token(Token = "0x17000001")]
	private string QualifiedNativeName
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x69F1170", Offset = "0x69F0170", VA = "0x69F1170")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	private string Declaration
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x69F1180", Offset = "0x69F0180", VA = "0x69F1180")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x69F1190", Offset = "0x69F0190", VA = "0x69F1190")]
	public NativeClassAttribute(string qualifiedCppName)
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x69F1200", Offset = "0x69F0200", VA = "0x69F1200")]
	public NativeClassAttribute(string qualifiedCppName, string declaration)
	{
	}
}
