// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.TypeInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x2000501")]
public abstract class TypeInfo : Type, IReflectableType
{
	[Token(Token = "0x4001491")]
	private const BindingFlags DeclaredOnlyLookup = BindingFlags.DeclaredOnly | BindingFlags.Instance | BindingFlags.Static | BindingFlags.Public | BindingFlags.NonPublic;

	[Token(Token = "0x17000533")]
	public virtual IEnumerable<Type> ImplementedInterfaces
	{
		[Token(Token = "0x6002589")]
		[Address(RVA = "0x3BD8250", Offset = "0x3BD8250", VA = "0x3BD8250", Slot = "134")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002587")]
	[Address(RVA = "0x3BD7A10", Offset = "0x3BD7A10", VA = "0x3BD7A10")]
	protected TypeInfo()
	{
	}

	[Token(Token = "0x6002588")]
	[Address(RVA = "0x3BD8240", Offset = "0x3BD8240", VA = "0x3BD8240", Slot = "133")]
	private TypeInfo System_002EReflection_002EIReflectableType_002EGetTypeInfo()
	{
		return null;
	}
}
