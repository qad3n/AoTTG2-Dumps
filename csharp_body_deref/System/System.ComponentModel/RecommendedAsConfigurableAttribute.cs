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

[Token(Token = "0x20001D6")]
[AttributeUsage(AttributeTargets.Property)]
[Obsolete("Use System.ComponentModel.SettingsBindableAttribute instead to work with the new settings model.")]
public class RecommendedAsConfigurableAttribute : Attribute
{
	[Token(Token = "0x4000737")]
	[FieldOffset(Offset = "0x0")]
	public static readonly RecommendedAsConfigurableAttribute No;

	[Token(Token = "0x4000738")]
	[FieldOffset(Offset = "0x8")]
	public static readonly RecommendedAsConfigurableAttribute Yes;

	[Token(Token = "0x4000739")]
	[FieldOffset(Offset = "0x10")]
	public static readonly RecommendedAsConfigurableAttribute Default;

	[Token(Token = "0x1700028D")]
	public bool RecommendedAsConfigurable
	{
		[Token(Token = "0x6000C84")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000C83")]
	[Address(RVA = "0x1A291A0", Offset = "0x1A277A0", VA = "0x181A291A0")]
	public RecommendedAsConfigurableAttribute(bool recommendedAsConfigurable)
	{
	}

	[Token(Token = "0x6000C85")]
	[Address(RVA = "0x28B89A0", Offset = "0x28B6FA0", VA = "0x1828B89A0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C86")]
	[Address(RVA = "0x28776A0", Offset = "0x2875CA0", VA = "0x1828776A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000C87")]
	[Address(RVA = "0x28B8A30", Offset = "0x28B7030", VA = "0x1828B8A30", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
