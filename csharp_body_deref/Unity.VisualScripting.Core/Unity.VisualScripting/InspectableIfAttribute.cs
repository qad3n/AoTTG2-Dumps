// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.InspectableIfAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000040")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Property | AttributeTargets.Field, AllowMultiple = false, Inherited = true)]
public sealed class InspectableIfAttribute : Attribute, IInspectableAttribute
{
	[Token(Token = "0x17000062")]
	public int order
	{
		[Token(Token = "0x60001E2")]
		[Address(RVA = "0x4CA3A40", Offset = "0x4CA3A40", VA = "0x4CA3A40", Slot = "7")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001E3")]
		[Address(RVA = "0x4CA3A50", Offset = "0x4CA3A50", VA = "0x4CA3A50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000063")]
	public string conditionMember
	{
		[Token(Token = "0x60001E4")]
		[Address(RVA = "0x4CA3A60", Offset = "0x4CA3A60", VA = "0x4CA3A60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x4CA3A10", Offset = "0x4CA3A10", VA = "0x4CA3A10")]
	public InspectableIfAttribute(string conditionMember)
	{
	}
}
