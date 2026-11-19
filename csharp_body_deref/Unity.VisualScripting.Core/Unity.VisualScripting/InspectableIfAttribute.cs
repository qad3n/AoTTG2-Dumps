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
	[Token(Token = "0x17000063")]
	public int order
	{
		[Token(Token = "0x60001E6")]
		[Address(RVA = "0x6792E60", Offset = "0x6791E60", VA = "0x6792E60", Slot = "7")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x6792E70", Offset = "0x6791E70", VA = "0x6792E70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000064")]
	public string conditionMember
	{
		[Token(Token = "0x60001E8")]
		[Address(RVA = "0x6792E80", Offset = "0x6791E80", VA = "0x6792E80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x6792E30", Offset = "0x6791E30", VA = "0x6792E30")]
	public InspectableIfAttribute(string conditionMember)
	{
	}
}
