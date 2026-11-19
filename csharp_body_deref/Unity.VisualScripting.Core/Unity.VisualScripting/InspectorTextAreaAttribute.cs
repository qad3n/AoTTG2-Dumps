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
		[Address(RVA = "0x67930A0", Offset = "0x67920A0", VA = "0x67930A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000200")]
		[Address(RVA = "0x67930D0", Offset = "0x67920D0", VA = "0x67930D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006D")]
	public bool hasMinLines
	{
		[Token(Token = "0x6000201")]
		[Address(RVA = "0x6793130", Offset = "0x6792130", VA = "0x6793130")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006E")]
	public float maxLines
	{
		[Token(Token = "0x6000202")]
		[Address(RVA = "0x6793160", Offset = "0x6792160", VA = "0x6793160")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000203")]
		[Address(RVA = "0x6793190", Offset = "0x6792190", VA = "0x6793190")]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public bool hasMaxLines
	{
		[Token(Token = "0x6000204")]
		[Address(RVA = "0x67931F0", Offset = "0x67921F0", VA = "0x67931F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x6793220", Offset = "0x6792220", VA = "0x6793220")]
	public InspectorTextAreaAttribute()
	{
	}
}
