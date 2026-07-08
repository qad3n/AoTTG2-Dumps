using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002CB")]
[Obsolete("Use System.ComponentModel.SettingsBindableAttribute instead to work with the new settings model.")]
[AttributeUsage(AttributeTargets.Property)]
public class RecommendedAsConfigurableAttribute : Attribute
{
	[Token(Token = "0x4000E00")]
	[FieldOffset(Offset = "0x0")]
	public static readonly RecommendedAsConfigurableAttribute No;

	[Token(Token = "0x4000E01")]
	[FieldOffset(Offset = "0x8")]
	public static readonly RecommendedAsConfigurableAttribute Yes;

	[Token(Token = "0x4000E02")]
	[FieldOffset(Offset = "0x10")]
	public static readonly RecommendedAsConfigurableAttribute Default;

	[Token(Token = "0x1700041E")]
	public bool RecommendedAsConfigurable
	{
		[Token(Token = "0x600123C")]
		[Address(RVA = "0x4580C70", Offset = "0x4580C70", VA = "0x4580C70")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600123B")]
	[Address(RVA = "0x4580C50", Offset = "0x4580C50", VA = "0x4580C50")]
	public RecommendedAsConfigurableAttribute(bool recommendedAsConfigurable)
	{
	}

	[Token(Token = "0x600123D")]
	[Address(RVA = "0x4580C80", Offset = "0x4580C80", VA = "0x4580C80", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600123E")]
	[Address(RVA = "0x4580D20", Offset = "0x4580D20", VA = "0x4580D20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600123F")]
	[Address(RVA = "0x4580D30", Offset = "0x4580D30", VA = "0x4580D30", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
