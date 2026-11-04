// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.TypeDescriptionProviderAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001E8")]
[AttributeUsage(AttributeTargets.Class, Inherited = true)]
public sealed class TypeDescriptionProviderAttribute : Attribute
{
	[Token(Token = "0x1700029C")]
	public string TypeName
	{
		[Token(Token = "0x6000CEB")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000CE9")]
	[Address(RVA = "0x28CA100", Offset = "0x28C8700", VA = "0x1828CA100")]
	public TypeDescriptionProviderAttribute(string typeName)
	{
	}

	[Token(Token = "0x6000CEA")]
	[Address(RVA = "0x28CA180", Offset = "0x28C8780", VA = "0x1828CA180")]
	public TypeDescriptionProviderAttribute(Type type)
	{
	}
}
