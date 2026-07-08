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
		[Address(RVA = "0x4585110", Offset = "0x4585110", VA = "0x4585110")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600126B")]
	[Address(RVA = "0x45850F0", Offset = "0x45850F0", VA = "0x45850F0")]
	public SettingsBindableAttribute(bool bindable)
	{
	}

	[Token(Token = "0x600126D")]
	[Address(RVA = "0x4585120", Offset = "0x4585120", VA = "0x4585120", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600126E")]
	[Address(RVA = "0x4585190", Offset = "0x4585190", VA = "0x4585190", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
