using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002DD")]
[AttributeUsage(AttributeTargets.Class, Inherited = true)]
public sealed class TypeDescriptionProviderAttribute : Attribute
{
	[Token(Token = "0x1700042D")]
	public string TypeName
	{
		[Token(Token = "0x60012A3")]
		[Address(RVA = "0x4586BC0", Offset = "0x4586BC0", VA = "0x4586BC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012A1")]
	[Address(RVA = "0x4586A80", Offset = "0x4586A80", VA = "0x4586A80")]
	public TypeDescriptionProviderAttribute(string typeName)
	{
	}

	[Token(Token = "0x60012A2")]
	[Address(RVA = "0x4586B00", Offset = "0x4586B00", VA = "0x4586B00")]
	public TypeDescriptionProviderAttribute(Type type)
	{
	}
}
