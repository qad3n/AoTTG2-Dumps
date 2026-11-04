// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.LocalizableAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000168")]
[AttributeUsage(AttributeTargets.All)]
public sealed class LocalizableAttribute : Attribute
{
	[Token(Token = "0x4000626")]
	[FieldOffset(Offset = "0x0")]
	public static readonly LocalizableAttribute Yes;

	[Token(Token = "0x4000627")]
	[FieldOffset(Offset = "0x8")]
	public static readonly LocalizableAttribute No;

	[Token(Token = "0x4000628")]
	[FieldOffset(Offset = "0x10")]
	public static readonly LocalizableAttribute Default;

	[Token(Token = "0x170001B8")]
	public bool IsLocalizable
	{
		[Token(Token = "0x6000905")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000904")]
	[Address(RVA = "0x1A291A0", Offset = "0x1A277A0", VA = "0x181A291A0")]
	public LocalizableAttribute(bool isLocalizable)
	{
	}

	[Token(Token = "0x6000906")]
	[Address(RVA = "0x287E1F0", Offset = "0x287C7F0", VA = "0x18287E1F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000907")]
	[Address(RVA = "0x28776A0", Offset = "0x2875CA0", VA = "0x1828776A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000908")]
	[Address(RVA = "0x287E2D0", Offset = "0x287C8D0", VA = "0x18287E2D0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
