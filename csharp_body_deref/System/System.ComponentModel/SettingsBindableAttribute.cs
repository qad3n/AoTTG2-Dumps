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

[Token(Token = "0x20001DE")]
[AttributeUsage(AttributeTargets.Property)]
public sealed class SettingsBindableAttribute : Attribute
{
	[Token(Token = "0x4000749")]
	[FieldOffset(Offset = "0x0")]
	public static readonly SettingsBindableAttribute Yes;

	[Token(Token = "0x400074A")]
	[FieldOffset(Offset = "0x8")]
	public static readonly SettingsBindableAttribute No;

	[Token(Token = "0x17000295")]
	public bool Bindable
	{
		[Token(Token = "0x6000CB4")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000CB3")]
	[Address(RVA = "0x1A291A0", Offset = "0x1A277A0", VA = "0x181A291A0")]
	public SettingsBindableAttribute(bool bindable)
	{
	}

	[Token(Token = "0x6000CB5")]
	[Address(RVA = "0x28C9120", Offset = "0x28C7720", VA = "0x1828C9120", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB6")]
	[Address(RVA = "0x287C060", Offset = "0x287A660", VA = "0x18287C060", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
