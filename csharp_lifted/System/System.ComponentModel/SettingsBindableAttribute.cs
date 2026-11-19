// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.SettingsBindableAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200019F")]
[AttributeUsage(AttributeTargets.Property)]
public sealed class SettingsBindableAttribute : Attribute
{
	[Token(Token = "0x400067A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly SettingsBindableAttribute Yes;

	[Token(Token = "0x400067B")]
	[FieldOffset(Offset = "0x8")]
	public static readonly SettingsBindableAttribute No;

	[Token(Token = "0x17000266")]
	public bool Bindable
	{
		[Token(Token = "0x6000AF4")]
		[Address(RVA = "0x62496C0", Offset = "0x62486C0", VA = "0x62496C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000AF3")]
	[Address(RVA = "0x62496A0", Offset = "0x62486A0", VA = "0x62496A0")]
	public SettingsBindableAttribute(bool bindable)
	{
	}

	[Token(Token = "0x6000AF5")]
	[Address(RVA = "0x62496D0", Offset = "0x62486D0", VA = "0x62496D0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AF6")]
	[Address(RVA = "0x6249740", Offset = "0x6248740", VA = "0x6249740", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
