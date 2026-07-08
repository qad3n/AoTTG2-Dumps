using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20001D2")]
[SerializationVersion("A", new Type[] { })]
public sealed class VariableDeclaration
{
	[Token(Token = "0x170001E8")]
	[Serialize]
	public string name
	{
		[Token(Token = "0x600111B")]
		[Address(RVA = "0x4A41D80", Offset = "0x4A41D80", VA = "0x4A41D80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600111C")]
		[Address(RVA = "0x4A41D90", Offset = "0x4A41D90", VA = "0x4A41D90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001E9")]
	[Serialize]
	[Value]
	public object value
	{
		[Token(Token = "0x600111D")]
		[Address(RVA = "0x4A41DA0", Offset = "0x4A41DA0", VA = "0x4A41DA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600111E")]
		[Address(RVA = "0x4A41DB0", Offset = "0x4A41DB0", VA = "0x4A41DB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001EA")]
	[Serialize]
	public SerializableType typeHandle
	{
		[Token(Token = "0x600111F")]
		[Address(RVA = "0x4A41DC0", Offset = "0x4A41DC0", VA = "0x4A41DC0")]
		[CompilerGenerated]
		get
		{
			return default(SerializableType);
		}
		[Token(Token = "0x6001120")]
		[Address(RVA = "0x4A41DD0", Offset = "0x4A41DD0", VA = "0x4A41DD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001119")]
	[Address(RVA = "0x4A41D30", Offset = "0x4A41D30", VA = "0x4A41D30")]
	[Obsolete("This parameterless constructor is only made public for serialization. Use another constructor instead.")]
	public VariableDeclaration()
	{
	}

	[Token(Token = "0x600111A")]
	[Address(RVA = "0x4A41D40", Offset = "0x4A41D40", VA = "0x4A41D40")]
	public VariableDeclaration(string name, object value)
	{
	}
}
