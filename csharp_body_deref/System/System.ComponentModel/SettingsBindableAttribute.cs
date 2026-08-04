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

[Token(Token = "0x20002D3")]
[AttributeUsage(AttributeTargets.Property)]
public sealed class SettingsBindableAttribute : Attribute
{
	[Token(Token = "0x4000E12")]
	[FieldOffset(Offset = "0x0")]
	public static readonly SettingsBindableAttribute Yes;

	[Token(Token = "0x4000E13")]
	[FieldOffset(Offset = "0x8")]
	public static readonly SettingsBindableAttribute No;

	[Token(Token = "0x17000426")]
	public bool Bindable
	{
		[Token(Token = "0x600126C")]
		[Address(RVA = "0x48AA210", Offset = "0x48AA210", VA = "0x48AA210")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600126B")]
	[Address(RVA = "0x48AA1F0", Offset = "0x48AA1F0", VA = "0x48AA1F0")]
	public SettingsBindableAttribute(bool bindable)
	{
	}

	[Token(Token = "0x600126D")]
	[Address(RVA = "0x48AA220", Offset = "0x48AA220", VA = "0x48AA220", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600126E")]
	[Address(RVA = "0x48AA290", Offset = "0x48AA290", VA = "0x48AA290", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
