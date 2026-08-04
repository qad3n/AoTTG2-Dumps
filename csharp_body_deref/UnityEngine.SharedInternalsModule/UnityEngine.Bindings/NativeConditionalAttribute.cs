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
		[Address(RVA = "0x4E9DB90", Offset = "0x4E9DB90", VA = "0x4E9DB90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public string StubReturnStatement
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x4E9DBA0", Offset = "0x4E9DBA0", VA = "0x4E9DBA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public bool Enabled
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x4E9DBB0", Offset = "0x4E9DBB0", VA = "0x4E9DBB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x4E9DBC0", Offset = "0x4E9DBC0", VA = "0x4E9DBC0")]
	public NativeConditionalAttribute(string condition)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x4E9DBF0", Offset = "0x4E9DBF0", VA = "0x4E9DBF0")]
	public NativeConditionalAttribute(string condition, string stubReturnStatement)
	{
	}
}
