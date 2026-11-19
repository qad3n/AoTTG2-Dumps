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

[Token(Token = "0x2000197")]
[Obsolete("Use System.ComponentModel.SettingsBindableAttribute instead to work with the new settings model.")]
[AttributeUsage(AttributeTargets.Property)]
public class RecommendedAsConfigurableAttribute : Attribute
{
	[Token(Token = "0x4000668")]
	[FieldOffset(Offset = "0x0")]
	public static readonly RecommendedAsConfigurableAttribute No;

	[Token(Token = "0x4000669")]
	[FieldOffset(Offset = "0x8")]
	public static readonly RecommendedAsConfigurableAttribute Yes;

	[Token(Token = "0x400066A")]
	[FieldOffset(Offset = "0x10")]
	public static readonly RecommendedAsConfigurableAttribute Default;

	[Token(Token = "0x1700025E")]
	public bool RecommendedAsConfigurable
	{
		[Token(Token = "0x6000AC4")]
		[Address(RVA = "0x6245500", Offset = "0x6244500", VA = "0x6245500")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000AC3")]
	[Address(RVA = "0x62454E0", Offset = "0x62444E0", VA = "0x62454E0")]
	public RecommendedAsConfigurableAttribute(bool recommendedAsConfigurable)
	{
	}

	[Token(Token = "0x6000AC5")]
	[Address(RVA = "0x6245510", Offset = "0x6244510", VA = "0x6245510", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000AC6")]
	[Address(RVA = "0x62455A0", Offset = "0x62445A0", VA = "0x62455A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000AC7")]
	[Address(RVA = "0x62455B0", Offset = "0x62445B0", VA = "0x62455B0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
