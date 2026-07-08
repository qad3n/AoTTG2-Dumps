using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000048")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter, AllowMultiple = false, Inherited = true)]
public sealed class InspectorTextAreaAttribute : Attribute
{
	[Token(Token = "0x4000058")]
	[FieldOffset(Offset = "0x10")]
	private float? _minLines;

	[Token(Token = "0x4000059")]
	[FieldOffset(Offset = "0x18")]
	private float? _maxLines;

	[Token(Token = "0x1700006B")]
	public float minLines
	{
		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x497F0B0", Offset = "0x497F0B0", VA = "0x497F0B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x497F0E0", Offset = "0x497F0E0", VA = "0x497F0E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006C")]
	public bool hasMinLines
	{
		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x497F140", Offset = "0x497F140", VA = "0x497F140")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006D")]
	public float maxLines
	{
		[Token(Token = "0x60001FE")]
		[Address(RVA = "0x497F170", Offset = "0x497F170", VA = "0x497F170")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001FF")]
		[Address(RVA = "0x497F1A0", Offset = "0x497F1A0", VA = "0x497F1A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public bool hasMaxLines
	{
		[Token(Token = "0x6000200")]
		[Address(RVA = "0x497F200", Offset = "0x497F200", VA = "0x497F200")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x497F230", Offset = "0x497F230", VA = "0x497F230")]
	public InspectorTextAreaAttribute()
	{
	}
}
