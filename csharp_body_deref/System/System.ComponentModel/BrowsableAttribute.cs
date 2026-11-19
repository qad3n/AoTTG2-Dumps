// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.BrowsableAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000118")]
[AttributeUsage(AttributeTargets.All)]
public sealed class BrowsableAttribute : Attribute
{
	[Token(Token = "0x4000532")]
	[FieldOffset(Offset = "0x0")]
	public static readonly BrowsableAttribute Yes;

	[Token(Token = "0x4000533")]
	[FieldOffset(Offset = "0x8")]
	public static readonly BrowsableAttribute No;

	[Token(Token = "0x4000534")]
	[FieldOffset(Offset = "0x10")]
	public static readonly BrowsableAttribute Default;

	[Token(Token = "0x17000175")]
	public bool Browsable
	{
		[Token(Token = "0x60006EF")]
		[Address(RVA = "0x6221970", Offset = "0x6220970", VA = "0x6221970")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x6221950", Offset = "0x6220950", VA = "0x6221950")]
	public BrowsableAttribute(bool browsable)
	{
	}

	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x6221980", Offset = "0x6220980", VA = "0x6221980", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x6221A40", Offset = "0x6220A40", VA = "0x6221A40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x6221A70", Offset = "0x6220A70", VA = "0x6221A70", Slot = "6")]
	public override bool IsDefaultAttribute()
	{
		return default(bool);
	}
}
