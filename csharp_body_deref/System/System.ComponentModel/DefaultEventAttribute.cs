// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DefaultEventAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200018E")]
[AttributeUsage(AttributeTargets.Class)]
public sealed class DefaultEventAttribute : Attribute
{
	[Token(Token = "0x400067C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DefaultEventAttribute Default;

	[Token(Token = "0x170001F1")]
	public string Name
	{
		[Token(Token = "0x6000A10")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A0F")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public DefaultEventAttribute(string name)
	{
	}

	[Token(Token = "0x6000A11")]
	[Address(RVA = "0x289B370", Offset = "0x2899970", VA = "0x18289B370", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A12")]
	[Address(RVA = "0x28776A0", Offset = "0x2875CA0", VA = "0x1828776A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
