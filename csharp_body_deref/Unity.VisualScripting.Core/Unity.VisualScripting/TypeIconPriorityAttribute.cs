// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.TypeIconPriorityAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200004E")]
[AttributeUsage(AttributeTargets.Interface, AllowMultiple = false, Inherited = false)]
public sealed class TypeIconPriorityAttribute : Attribute
{
	[Token(Token = "0x17000072")]
	public int priority
	{
		[Token(Token = "0x6000211")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	public TypeIconPriorityAttribute(int priority)
	{
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x287DA40", Offset = "0x287C040", VA = "0x18287DA40")]
	public TypeIconPriorityAttribute()
	{
	}
}
