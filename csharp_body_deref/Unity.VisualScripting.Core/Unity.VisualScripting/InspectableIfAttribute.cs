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
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "7")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000064")]
	public string conditionMember
	{
		[Token(Token = "0x60001E8")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x2547AB0", Offset = "0x25460B0", VA = "0x182547AB0")]
	public InspectableIfAttribute(string conditionMember)
	{
	}
}
