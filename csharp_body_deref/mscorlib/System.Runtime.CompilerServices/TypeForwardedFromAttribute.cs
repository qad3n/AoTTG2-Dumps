using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x2000485")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Interface | AttributeTargets.Delegate, Inherited = false, AllowMultiple = false)]
public sealed class TypeForwardedFromAttribute : Attribute
{
	[Token(Token = "0x17000476")]
	public string AssemblyFullName
	{
		[Token(Token = "0x600228F")]
		[Address(RVA = "0x4EDB900", Offset = "0x4EDB900", VA = "0x4EDB900")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600228E")]
	[Address(RVA = "0x4EDB880", Offset = "0x4EDB880", VA = "0x4EDB880")]
	public TypeForwardedFromAttribute(string assemblyFullName)
	{
	}
}
