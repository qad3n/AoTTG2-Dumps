// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ListBindableAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002B4")]
[AttributeUsage(AttributeTargets.All)]
public sealed class ListBindableAttribute : Attribute
{
	[Token(Token = "0x4000D85")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ListBindableAttribute Yes;

	[Token(Token = "0x4000D86")]
	[FieldOffset(Offset = "0x8")]
	public static readonly ListBindableAttribute No;

	[Token(Token = "0x4000D87")]
	[FieldOffset(Offset = "0x10")]
	public static readonly ListBindableAttribute Default;

	[Token(Token = "0x4000D88")]
	[FieldOffset(Offset = "0x10")]
	private bool _isDefault;

	[Token(Token = "0x170003CA")]
	public bool ListBindable
	{
		[Token(Token = "0x60010FD")]
		[Address(RVA = "0x4897380", Offset = "0x4897380", VA = "0x4897380")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60010FB")]
	[Address(RVA = "0x4897330", Offset = "0x4897330", VA = "0x4897330")]
	public ListBindableAttribute(bool listBindable)
	{
	}

	[Token(Token = "0x60010FC")]
	[Address(RVA = "0x4897350", Offset = "0x4897350", VA = "0x4897350")]
	public ListBindableAttribute(BindableSupport flags)
	{
	}

	[Token(Token = "0x60010FE")]
	[Address(RVA = "0x4897390", Offset = "0x4897390", VA = "0x4897390", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010FF")]
	[Address(RVA = "0x4897420", Offset = "0x4897420", VA = "0x4897420", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001100")]
	[Address(RVA = "0x4897430", Offset = "0x4897430", VA = "0x4897430", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
