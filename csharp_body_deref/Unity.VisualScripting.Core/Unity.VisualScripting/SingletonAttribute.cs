using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x200019C")]
[AttributeUsage(AttributeTargets.Class, Inherited = true, AllowMultiple = false)]
public sealed class SingletonAttribute : Attribute
{
	[Token(Token = "0x170001C6")]
	public bool Persistent
	{
		[Token(Token = "0x6000FEA")]
		[Address(RVA = "0x4A38850", Offset = "0x4A38850", VA = "0x4A38850")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FEB")]
		[Address(RVA = "0x4A38860", Offset = "0x4A38860", VA = "0x4A38860")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001C7")]
	public bool Automatic
	{
		[Token(Token = "0x6000FEC")]
		[Address(RVA = "0x4A38870", Offset = "0x4A38870", VA = "0x4A38870")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FED")]
		[Address(RVA = "0x4A38880", Offset = "0x4A38880", VA = "0x4A38880")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001C8")]
	public HideFlags HideFlags
	{
		[Token(Token = "0x6000FEE")]
		[Address(RVA = "0x4A38890", Offset = "0x4A38890", VA = "0x4A38890")]
		[CompilerGenerated]
		get
		{
			return default(HideFlags);
		}
		[Token(Token = "0x6000FEF")]
		[Address(RVA = "0x4A388A0", Offset = "0x4A388A0", VA = "0x4A388A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001C9")]
	public string Name
	{
		[Token(Token = "0x6000FF0")]
		[Address(RVA = "0x4A388B0", Offset = "0x4A388B0", VA = "0x4A388B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FF1")]
		[Address(RVA = "0x4A388C0", Offset = "0x4A388C0", VA = "0x4A388C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000FE9")]
	[Address(RVA = "0x4A38830", Offset = "0x4A38830", VA = "0x4A38830")]
	public SingletonAttribute()
	{
	}
}
