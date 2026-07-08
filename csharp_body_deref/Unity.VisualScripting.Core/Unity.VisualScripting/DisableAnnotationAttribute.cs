using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000038")]
[AttributeUsage(AttributeTargets.Class)]
public class DisableAnnotationAttribute : Attribute
{
	[Token(Token = "0x1700005A")]
	public bool disableIcon
	{
		[Token(Token = "0x60001CC")]
		[Address(RVA = "0x497E850", Offset = "0x497E850", VA = "0x497E850")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001CD")]
		[Address(RVA = "0x497E860", Offset = "0x497E860", VA = "0x497E860")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700005B")]
	public bool disableGizmo
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x497E870", Offset = "0x497E870", VA = "0x497E870")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x497E880", Offset = "0x497E880", VA = "0x497E880")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x497E890", Offset = "0x497E890", VA = "0x497E890")]
	public DisableAnnotationAttribute()
	{
	}
}
