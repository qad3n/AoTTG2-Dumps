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

[Token(Token = "0x2000284")]
[AttributeUsage(AttributeTargets.Class)]
public sealed class DefaultPropertyAttribute : Attribute
{
	[Token(Token = "0x4000D47")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DefaultPropertyAttribute Default;

	[Token(Token = "0x17000383")]
	public string Name
	{
		[Token(Token = "0x6000FCD")]
		[Address(RVA = "0x488FBC0", Offset = "0x488FBC0", VA = "0x488FBC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000FCC")]
	[Address(RVA = "0x488FB90", Offset = "0x488FB90", VA = "0x488FB90")]
	public DefaultPropertyAttribute(string name)
	{
	}

	[Token(Token = "0x6000FCE")]
	[Address(RVA = "0x488FBD0", Offset = "0x488FBD0", VA = "0x488FBD0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FCF")]
	[Address(RVA = "0x488FC40", Offset = "0x488FC40", VA = "0x488FC40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
