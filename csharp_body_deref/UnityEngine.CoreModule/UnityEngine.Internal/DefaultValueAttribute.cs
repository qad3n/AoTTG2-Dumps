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
[Token(Token = "0x200029D")]
[AttributeUsage(AttributeTargets.Parameter | AttributeTargets.GenericParameter)]
public class DefaultValueAttribute : Attribute
{
	[Token(Token = "0x40006E3")]
	[FieldOffset(Offset = "0x10")]
	private object DefaultValue;

	[Token(Token = "0x1700025E")]
	public object Value
	{
		[Token(Token = "0x6000E0C")]
		[Address(RVA = "0x4E18250", Offset = "0x4E18250", VA = "0x4E18250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E0B")]
	[Address(RVA = "0x4E18220", Offset = "0x4E18220", VA = "0x4E18220")]
	public DefaultValueAttribute(string value)
	{
	}

	[Token(Token = "0x6000E0D")]
	[Address(RVA = "0x4E18260", Offset = "0x4E18260", VA = "0x4E18260", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E0E")]
	[Address(RVA = "0x4E18320", Offset = "0x4E18320", VA = "0x4E18320", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
