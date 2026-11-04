// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Internal.DefaultValueAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Internal;

[Serializable]
[Token(Token = "0x20002FB")]
[AttributeUsage(AttributeTargets.Parameter | AttributeTargets.GenericParameter)]
public class DefaultValueAttribute : Attribute
{
	[Token(Token = "0x4000790")]
	[FieldOffset(Offset = "0x10")]
	private object DefaultValue;

	[Token(Token = "0x170002E2")]
	public object Value
	{
		[Token(Token = "0x6001215")]
		[Address(RVA = "0x172DEB0", Offset = "0x172C4B0", VA = "0x18172DEB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001214")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public DefaultValueAttribute(string value)
	{
	}

	[Token(Token = "0x6001216")]
	[Address(RVA = "0x2F48E00", Offset = "0x2F47400", VA = "0x182F48E00", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001217")]
	[Address(RVA = "0x2F48EB0", Offset = "0x2F474B0", VA = "0x182F48EB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
