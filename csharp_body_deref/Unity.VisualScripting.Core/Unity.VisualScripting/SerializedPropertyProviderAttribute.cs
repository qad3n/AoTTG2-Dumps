using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200018F")]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = false, Inherited = false)]
public sealed class SerializedPropertyProviderAttribute : Attribute, IDecoratorAttribute
{
	[Token(Token = "0x170001B6")]
	public Type type
	{
		[Token(Token = "0x6000FA6")]
		[Address(RVA = "0x4A37760", Offset = "0x4A37760", VA = "0x4A37760", Slot = "7")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FA7")]
		[Address(RVA = "0x4A37770", Offset = "0x4A37770", VA = "0x4A37770")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000FA5")]
	[Address(RVA = "0x4A37730", Offset = "0x4A37730", VA = "0x4A37730")]
	public SerializedPropertyProviderAttribute(Type type)
	{
	}
}
