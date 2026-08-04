// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.PasswordPropertyTextAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002C6")]
[AttributeUsage(AttributeTargets.All)]
public sealed class PasswordPropertyTextAttribute : Attribute
{
	[Token(Token = "0x4000DE7")]
	[FieldOffset(Offset = "0x0")]
	public static readonly PasswordPropertyTextAttribute Yes;

	[Token(Token = "0x4000DE8")]
	[FieldOffset(Offset = "0x8")]
	public static readonly PasswordPropertyTextAttribute No;

	[Token(Token = "0x4000DE9")]
	[FieldOffset(Offset = "0x10")]
	public static readonly PasswordPropertyTextAttribute Default;

	[Token(Token = "0x17000401")]
	public bool Password
	{
		[Token(Token = "0x60011D6")]
		[Address(RVA = "0x48A1260", Offset = "0x48A1260", VA = "0x48A1260")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60011D4")]
	[Address(RVA = "0x48A1220", Offset = "0x48A1220", VA = "0x48A1220")]
	public PasswordPropertyTextAttribute()
	{
	}

	[Token(Token = "0x60011D5")]
	[Address(RVA = "0x48A1240", Offset = "0x48A1240", VA = "0x48A1240")]
	public PasswordPropertyTextAttribute(bool password)
	{
	}

	[Token(Token = "0x60011D7")]
	[Address(RVA = "0x48A1270", Offset = "0x48A1270", VA = "0x48A1270", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x60011D8")]
	[Address(RVA = "0x48A12D0", Offset = "0x48A12D0", VA = "0x48A12D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60011D9")]
	[Address(RVA = "0x48A12E0", Offset = "0x48A12E0", VA = "0x48A12E0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
