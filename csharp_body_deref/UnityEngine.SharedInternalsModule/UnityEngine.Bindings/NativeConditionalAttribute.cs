// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Bindings.NativeConditionalAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Bindings;

[Token(Token = "0x2000009")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Method | AttributeTargets.Property)]
[VisibleToOtherModules]
internal class NativeConditionalAttribute : Attribute
{
	[Token(Token = "0x17000003")]
	public string Condition
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public string StubReturnStatement
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public bool Enabled
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x2FF6E50", Offset = "0x2FF5450", VA = "0x182FF6E50")]
	public NativeConditionalAttribute(string condition)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x2FF6DF0", Offset = "0x2FF53F0", VA = "0x182FF6DF0")]
	public NativeConditionalAttribute(string condition, string stubReturnStatement)
	{
	}
}
