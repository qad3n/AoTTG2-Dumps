// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.RecommendedAsConfigurableAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x48A5D70", Offset = "0x48A5D70", VA = "0x48A5D70")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600123B")]
	[Address(RVA = "0x48A5D50", Offset = "0x48A5D50", VA = "0x48A5D50")]
	public RecommendedAsConfigurableAttribute(bool recommendedAsConfigurable)
	{
	}

	[Token(Token = "0x600123D")]
	[Address(RVA = "0x48A5D80", Offset = "0x48A5D80", VA = "0x48A5D80", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600123E")]
	[Address(RVA = "0x48A5E20", Offset = "0x48A5E20", VA = "0x48A5E20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600123F")]
	[Address(RVA = "0x48A5E30", Offset = "0x48A5E30", VA = "0x48A5E30", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
