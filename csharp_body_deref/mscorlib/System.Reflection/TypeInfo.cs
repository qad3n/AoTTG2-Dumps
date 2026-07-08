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
		[Address(RVA = "0x4EF2730", Offset = "0x4EF2730", VA = "0x4EF2730", Slot = "134")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002587")]
	[Address(RVA = "0x4EF1EF0", Offset = "0x4EF1EF0", VA = "0x4EF1EF0")]
	protected TypeInfo()
	{
	}

	[Token(Token = "0x6002588")]
	[Address(RVA = "0x4EF2720", Offset = "0x4EF2720", VA = "0x4EF2720", Slot = "133")]
	private TypeInfo System_002EReflection_002EIReflectableType_002EGetTypeInfo()
	{
		return null;
	}
}
