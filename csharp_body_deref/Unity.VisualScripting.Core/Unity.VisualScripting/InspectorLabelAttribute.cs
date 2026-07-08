using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x2000046")]
[AttributeUsage(AttributeTargets.All, AllowMultiple = false, Inherited = true)]
public sealed class InspectorLabelAttribute : Attribute
{
	[Token(Token = "0x17000066")]
	public string text
	{
		[Token(Token = "0x60001F0")]
		[Address(RVA = "0x497EFD0", Offset = "0x497EFD0", VA = "0x497EFD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001F1")]
		[Address(RVA = "0x497EFE0", Offset = "0x497EFE0", VA = "0x497EFE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000067")]
	public string tooltip
	{
		[Token(Token = "0x60001F2")]
		[Address(RVA = "0x497EFF0", Offset = "0x497EFF0", VA = "0x497EFF0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001F3")]
		[Address(RVA = "0x497F000", Offset = "0x497F000", VA = "0x497F000")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000068")]
	public Texture image
	{
		[Token(Token = "0x60001F4")]
		[Address(RVA = "0x497F010", Offset = "0x497F010", VA = "0x497F010")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001F5")]
		[Address(RVA = "0x497F020", Offset = "0x497F020", VA = "0x497F020")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x497EF60", Offset = "0x497EF60", VA = "0x497EF60")]
	public InspectorLabelAttribute(string text)
	{
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x497EF90", Offset = "0x497EF90", VA = "0x497EF90")]
	public InspectorLabelAttribute(string text, string tooltip)
	{
	}
}
