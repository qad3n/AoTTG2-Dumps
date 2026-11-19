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

[Token(Token = "0x2000129")]
[AttributeUsage(AttributeTargets.All)]
public sealed class LocalizableAttribute : Attribute
{
	[Token(Token = "0x4000557")]
	[FieldOffset(Offset = "0x0")]
	public static readonly LocalizableAttribute Yes;

	[Token(Token = "0x4000558")]
	[FieldOffset(Offset = "0x8")]
	public static readonly LocalizableAttribute No;

	[Token(Token = "0x4000559")]
	[FieldOffset(Offset = "0x10")]
	public static readonly LocalizableAttribute Default;

	[Token(Token = "0x17000189")]
	public bool IsLocalizable
	{
		[Token(Token = "0x6000745")]
		[Address(RVA = "0x6223710", Offset = "0x6222710", VA = "0x6223710")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000744")]
	[Address(RVA = "0x62236F0", Offset = "0x62226F0", VA = "0x62236F0")]
	public LocalizableAttribute(bool isLocalizable)
	{
	}

	[Token(Token = "0x6000746")]
	[Address(RVA = "0x6223720", Offset = "0x6222720", VA = "0x6223720", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000747")]
	[Address(RVA = "0x62237E0", Offset = "0x62227E0", VA = "0x62237E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000748")]
	[Address(RVA = "0x62237F0", Offset = "0x62227F0", VA = "0x62237F0", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
