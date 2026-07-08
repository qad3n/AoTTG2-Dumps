using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000047")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter, AllowMultiple = false, Inherited = true)]
public sealed class InspectorRangeAttribute : Attribute
{
	[Token(Token = "0x17000069")]
	public float min
	{
		[Token(Token = "0x60001F7")]
		[Address(RVA = "0x497F070", Offset = "0x497F070", VA = "0x497F070")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001F8")]
		[Address(RVA = "0x497F080", Offset = "0x497F080", VA = "0x497F080")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	public float max
	{
		[Token(Token = "0x60001F9")]
		[Address(RVA = "0x497F090", Offset = "0x497F090", VA = "0x497F090")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001FA")]
		[Address(RVA = "0x497F0A0", Offset = "0x497F0A0", VA = "0x497F0A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x497F030", Offset = "0x497F030", VA = "0x497F030")]
	public InspectorRangeAttribute(float min, float max)
	{
	}
}
