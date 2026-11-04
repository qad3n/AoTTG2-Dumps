// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.TypeSetAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200004F")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field, AllowMultiple = false, Inherited = true)]
public class TypeSetAttribute : Attribute
{
	[Token(Token = "0x17000073")]
	public TypeSet typeSet
	{
		[Token(Token = "0x6000213")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(TypeSet);
		}
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x1A29130", Offset = "0x1A27730", VA = "0x181A29130")]
	public TypeSetAttribute(TypeSet typeSet)
	{
	}
}
