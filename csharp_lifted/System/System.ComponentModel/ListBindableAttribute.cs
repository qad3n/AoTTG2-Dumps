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

[Token(Token = "0x2000180")]
[AttributeUsage(AttributeTargets.All)]
public sealed class ListBindableAttribute : Attribute
{
	[Token(Token = "0x40005ED")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ListBindableAttribute Yes;

	[Token(Token = "0x40005EE")]
	[FieldOffset(Offset = "0x8")]
	public static readonly ListBindableAttribute No;

	[Token(Token = "0x40005EF")]
	[FieldOffset(Offset = "0x10")]
	public static readonly ListBindableAttribute Default;

	[Token(Token = "0x40005F0")]
	[FieldOffset(Offset = "0x10")]
	private bool _isDefault;

	[Token(Token = "0x1700020A")]
	public bool ListBindable
	{
		[Token(Token = "0x6000985")]
		[Address(RVA = "0x62372A0", Offset = "0x62362A0", VA = "0x62372A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x6237250", Offset = "0x6236250", VA = "0x6237250")]
	public ListBindableAttribute(bool listBindable)
	{
	}

	[Token(Token = "0x6000984")]
	[Address(RVA = "0x6237270", Offset = "0x6236270", VA = "0x6237270")]
	public ListBindableAttribute(BindableSupport flags)
	{
	}

	[Token(Token = "0x6000986")]
	[Address(RVA = "0x62372B0", Offset = "0x62362B0", VA = "0x62372B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000987")]
	[Address(RVA = "0x6237320", Offset = "0x6236320", VA = "0x6237320", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000988")]
	[Address(RVA = "0x6237330", Offset = "0x6236330", VA = "0x6237330", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
