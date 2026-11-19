// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ReadOnlyAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200012B")]
[AttributeUsage(AttributeTargets.All)]
public sealed class ReadOnlyAttribute : Attribute
{
	[Token(Token = "0x400055E")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ReadOnlyAttribute Yes;

	[Token(Token = "0x400055F")]
	[FieldOffset(Offset = "0x8")]
	public static readonly ReadOnlyAttribute No;

	[Token(Token = "0x4000560")]
	[FieldOffset(Offset = "0x10")]
	public static readonly ReadOnlyAttribute Default;

	[Token(Token = "0x1700018B")]
	public bool IsReadOnly
	{
		[Token(Token = "0x6000751")]
		[Address(RVA = "0x6223B70", Offset = "0x6222B70", VA = "0x6223B70")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000750")]
	[Address(RVA = "0x6223B50", Offset = "0x6222B50", VA = "0x6223B50")]
	public ReadOnlyAttribute(bool isReadOnly)
	{
	}

	[Token(Token = "0x6000752")]
	[Address(RVA = "0x6223B80", Offset = "0x6222B80", VA = "0x6223B80", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000753")]
	[Address(RVA = "0x6223C40", Offset = "0x6222C40", VA = "0x6223C40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000754")]
	[Address(RVA = "0x6223C50", Offset = "0x6222C50", VA = "0x6223C50", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
