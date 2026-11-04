// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.InspectorTextAreaAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000048")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter, AllowMultiple = false, Inherited = true)]
public sealed class InspectorTextAreaAttribute : Attribute
{
	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x10")]
	private float? _minLines;

	[Token(Token = "0x4000055")]
	[FieldOffset(Offset = "0x18")]
	private float? _maxLines;

	[Token(Token = "0x1700006C")]
	public float minLines
	{
		[Token(Token = "0x60001FF")]
		[Address(RVA = "0x2DB1950", Offset = "0x2DAFF50", VA = "0x182DB1950")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000200")]
		[Address(RVA = "0x2DB19F0", Offset = "0x2DAFFF0", VA = "0x182DB19F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006D")]
	public bool hasMinLines
	{
		[Token(Token = "0x6000201")]
		[Address(RVA = "0x2DB18D0", Offset = "0x2DAFED0", VA = "0x182DB18D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006E")]
	public float maxLines
	{
		[Token(Token = "0x6000202")]
		[Address(RVA = "0x2DB1910", Offset = "0x2DAFF10", VA = "0x182DB1910")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000203")]
		[Address(RVA = "0x2DB1990", Offset = "0x2DAFF90", VA = "0x182DB1990")]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public bool hasMaxLines
	{
		[Token(Token = "0x6000204")]
		[Address(RVA = "0x2DB1890", Offset = "0x2DAFE90", VA = "0x182DB1890")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public InspectorTextAreaAttribute()
	{
	}
}
