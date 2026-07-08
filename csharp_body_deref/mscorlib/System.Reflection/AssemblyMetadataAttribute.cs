using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004CB")]
[AttributeUsage(AttributeTargets.Assembly, AllowMultiple = true, Inherited = false)]
public sealed class AssemblyMetadataAttribute : Attribute
{
	[Token(Token = "0x40013B0")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	private readonly string _003CKey_003Ek__BackingField;

	[Token(Token = "0x40013B1")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	private readonly string _003CValue_003Ek__BackingField;

	[Token(Token = "0x60023D9")]
	[Address(RVA = "0x4EEAB40", Offset = "0x4EEAB40", VA = "0x4EEAB40")]
	public AssemblyMetadataAttribute(string key, string value)
	{
	}
}
