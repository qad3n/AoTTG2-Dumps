using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200004A")]
[AttributeUsage(AttributeTargets.All, AllowMultiple = false, Inherited = true)]
public sealed class InspectorWideAttribute : Attribute
{
	[Token(Token = "0x1700006F")]
	public bool toEdge
	{
		[Token(Token = "0x6000205")]
		[Address(RVA = "0x497F280", Offset = "0x497F280", VA = "0x497F280")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000206")]
		[Address(RVA = "0x497F290", Offset = "0x497F290", VA = "0x497F290")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x497F250", Offset = "0x497F250", VA = "0x497F250")]
	public InspectorWideAttribute()
	{
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x497F260", Offset = "0x497F260", VA = "0x497F260")]
	public InspectorWideAttribute(bool toEdge)
	{
	}
}
