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
	[Token(Token = "0x400078E")]
	[FieldOffset(Offset = "0x10")]
	private object DefaultValue;

	[Token(Token = "0x170002E7")]
	public object Value
	{
		[Token(Token = "0x6001229")]
		[Address(RVA = "0x693A8B0", Offset = "0x69398B0", VA = "0x693A8B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001228")]
	[Address(RVA = "0x693A880", Offset = "0x6939880", VA = "0x693A880")]
	public DefaultValueAttribute(string value)
	{
	}

	[Token(Token = "0x600122A")]
	[Address(RVA = "0x693A8C0", Offset = "0x69398C0", VA = "0x693A8C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600122B")]
	[Address(RVA = "0x693A960", Offset = "0x6939960", VA = "0x693A960", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
