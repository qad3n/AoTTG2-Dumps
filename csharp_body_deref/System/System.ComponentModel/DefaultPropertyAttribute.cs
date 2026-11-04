// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DefaultPropertyAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200018F")]
[AttributeUsage(AttributeTargets.Class)]
public sealed class DefaultPropertyAttribute : Attribute
{
	[Token(Token = "0x400067E")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DefaultPropertyAttribute Default;

	[Token(Token = "0x170001F2")]
	public string Name
	{
		[Token(Token = "0x6000A15")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A14")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public DefaultPropertyAttribute(string name)
	{
	}

	[Token(Token = "0x6000A16")]
	[Address(RVA = "0x289B460", Offset = "0x2899A60", VA = "0x18289B460", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A17")]
	[Address(RVA = "0x28776A0", Offset = "0x2875CA0", VA = "0x1828776A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
