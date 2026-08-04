// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ParenthesizePropertyNameAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200031D")]
[AttributeUsage(AttributeTargets.All)]
public sealed class ParenthesizePropertyNameAttribute : Attribute
{
	[Token(Token = "0x4000EC7")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ParenthesizePropertyNameAttribute Default;

	[Token(Token = "0x4000EC8")]
	[FieldOffset(Offset = "0x10")]
	private bool needParenthesis;

	[Token(Token = "0x17000490")]
	public bool NeedParenthesis
	{
		[Token(Token = "0x60014F0")]
		[Address(RVA = "0x48DEA80", Offset = "0x48DEA80", VA = "0x48DEA80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60014EE")]
	[Address(RVA = "0x48DEA40", Offset = "0x48DEA40", VA = "0x48DEA40")]
	public ParenthesizePropertyNameAttribute()
	{
	}

	[Token(Token = "0x60014EF")]
	[Address(RVA = "0x48DEA60", Offset = "0x48DEA60", VA = "0x48DEA60")]
	public ParenthesizePropertyNameAttribute(bool needParenthesis)
	{
	}

	[Token(Token = "0x60014F1")]
	[Address(RVA = "0x48DEA90", Offset = "0x48DEA90", VA = "0x48DEA90", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x60014F2")]
	[Address(RVA = "0x48DEAF0", Offset = "0x48DEAF0", VA = "0x48DEAF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60014F3")]
	[Address(RVA = "0x48DEB00", Offset = "0x48DEB00", VA = "0x48DEB00", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
